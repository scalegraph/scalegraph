package test;

import x10.util.Team;
import x10.compiler.Native;

//import org.scalegraph.concurrent.Dist2D;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;


public class StronglyConnectedComponent2 {
	private static struct SCCVertex {
		val leaderId:Long; 
		val front:Boolean; 
		val back:Boolean;
		val minimId:Long;
		def this (leader:Long, fro:Boolean, bac:Boolean, tmp:Long) {
			leaderId = leader; 
			front = fro; 
			back = bac;
			minimId = tmp;
		}
	}
	private static struct MessageA {
		val leaderId:Long;
		val dir:Boolean;
		def this(lead:Long, d:Boolean) {
			leaderId = lead;
			dir = d;	
		}

		@Native("c++", "(#this)->FMGL(dir) = #v")
		native def setDir(v :Boolean) :void;
	}

	private static struct MessageB {
		val front:Boolean;
		val back:Boolean;
		val id:Long;
		def this(fro:Boolean, bac:Boolean, idNum:Long  ) {
			front = fro;
			back = bac;
			id = idNum;
		}
	}

	private static struct MessageC {
		val leaderId:Long;
		val minimId:Long;
		def this(leader:Long, m:Long) {
			minimId = m;
			leaderId = leader;
		}
	}

	public static def main(args:Array[String](1)) {
		val team = Team.WORLD;	
		val inputFormat = (s:String) => {
			val elements = s.split(",");
			return new Tuple3[Long,Long,Double](
					Long.parse(elements(0)),
					Long.parse(elements(1)),
					1.0
			);
		};
		
		val start_read_time = System.currentTimeMillis();
		val graphData = DistributedReader.read(team,args,inputFormat);
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Read File: "+(end_read_time-start_read_time)+" millis");
		
		val edgeList = graphData.get1();
		val weigh = graphData.get2();
		val g = new Graph(team,Graph.VertexType.Long,false);
		val start_init_graph = System.currentTimeMillis();
		g.addEdges(edgeList.raw(team.placeGroup()));
		g.setEdgeAttribute[Double]("edgevalue",weigh.raw(team.placeGroup()));
		val end_init_graph = System.currentTimeMillis();
		Console.OUT.println("Init Graph: " + (end_init_graph-start_init_graph) + "ms");
		
		val csr = g.constructDistSparseMatrix(Dist2D.make2D(team, 1, team.size()), true, true);
		val xpregel = new XPregelGraph[SCCVertex, Long](team, csr);
//		val edgeValue = g.constructDistAttribute[Double](csr, false, "edgevalue");
		val start_time = System.currentTimeMillis();
		xpregel.updateInEdge();
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + "ms");
		
		val initInfo = new SCCVertex(0L, false, false,-1L);
		xpregel.initVertexValue(initInfo);
		
		//value : leaderId, front, back
		var recursion:Int = 0;
		while(recursion<10) {
			recursion++;
			//phaseA : BFS的に伝搬
			xpregel.iterate[MessageA, Long](
					(ctx :VertexContext[SCCVertex, Long, MessageA, Long ], messages :MemoryChunk[MessageA] ) => {
						
				if(ctx.superstep()==0) {
					//隣接点がなければその頂点はすぐに終わらせる
					if(ctx.outEdgesId().size()==0L && ctx.inEdgesId().size()==0L && ctx.id()!=0L) {
						val newInfo = new SCCVertex(ctx.id(), true,true,-1L);
						ctx.setValue(newInfo);
					}
					//phaseCで行った結果の反映
					if(ctx.value().minimId!=-1L) {
						val newInfo = new SCCVertex(ctx.value().minimId, ctx.value().front, ctx.value().back, -1L);
						ctx.setValue(newInfo);
					}
					
					//ここでfalseにされるのは、既に確定したか、同じleaderIdを持つ点が近傍に存在しないから
					if(ctx.value().front && ctx.value().back)
						ctx.setVertexShouldBeActive(false);
					else 
						ctx.setVertexShouldBeActive(true);
					
				}
				val mesF = new MessageA(ctx.value().leaderId, false);
				val mesT = new MessageA(ctx.value().leaderId, true);
				if(ctx.superstep()==0 && ctx.id() == ctx.value().leaderId) {
					for(i in ctx.outEdgesId().range()) 
						ctx.sendMessage(ctx.outEdgesId()(i), mesF);
					for(i in ctx.inEdgesId().range())
						ctx.sendMessage(ctx.inEdgesId()(i), mesT);
					val newInfo = new SCCVertex(ctx.value().leaderId, true, true, -1L);
					ctx.setValue(newInfo);
				}
				if(ctx.superstep()>0) {
					if(ctx.value().front && ctx.value().back)
						return;
//					Console.OUT.println(ctx.realId());
					var existFront:Boolean = false;
					var existBack:Boolean = false;
					for(i in messages.range()) {
						if(messages(i).leaderId == ctx.value().leaderId) {
							val dir = messages(i).dir;	
							if(dir) existBack = true;
							else existFront = true;
						}
					}
					
					if(existFront && !ctx.value().front) {
						for(i in ctx.outEdgesId().range()) 
							ctx.sendMessage(ctx.outEdgesId()(i), mesF);
					}
					if(existBack && !ctx.value().back) {
						for(i in ctx.inEdgesId().range()) {
							ctx.sendMessage(ctx.inEdgesId()(i), mesT);
						}
					}
					val newInfo = 
						new SCCVertex(ctx.value().leaderId, existFront | ctx.value().front  , existBack | ctx.value().back, -1L );
					ctx.setValue(newInfo);
				}
				ctx.voteToHalt();
				
			},
			//aggregateは多分使わないので適当なことを書いた
			(values :MemoryChunk[Long]) => MathAppend.sum(values),
			//終了条件は、最終的には全部のセルが止まった状態になればよい
			(superstep :Int, aggVal :Long) => (superstep >= 100 ) );
			
			//phaseB:Leaderに情報を伝搬/Leaderから情報を伝搬
			xpregel.iterate[MessageB, Long](
					(ctx :VertexContext[SCCVertex, Long, MessageB, Long ], messages :MemoryChunk[MessageB] ) => {
				if(ctx.superstep()==0) {
					val mes = new MessageB(ctx.value().front, ctx.value().back, ctx.id() );
					ctx.sendMessage(ctx.value().leaderId, mes);
					ctx.voteToHalt();
				}
				if(ctx.superstep()==1) {
					val cnt = new MemoryChunk[Long](4);
					val pos = new MemoryChunk[Long](4);
					for(i in messages.range()) {
						var iter:Long = 0;
						if(messages(i).front) iter += 2;
						if(messages(i).back)  iter += 1;
						if(cnt(iter)==0L) {
							pos(iter) = messages(i).id;
						}
						if(iter!=3L) {
							val mes = new MessageB(false,false, pos(iter));
							ctx.sendMessage(messages(i).id, mes);
						}
						else {
							val mes = new MessageB(true, true, pos(iter));
							ctx.sendMessage(messages(i).id, mes);
						}
						cnt(iter)+=1;
					}
					Console.OUT.println("              cnt"+ctx.realId()+":" + cnt(0) +" "+cnt(1) + " "+cnt(2) + " " + cnt(3));
					ctx.voteToHalt();
				}
				if(ctx.superstep()==2) {
					//messageはそれぞれ一つしかこないので、0のはず
//					Console.OUT.println("    :ctx.realId() "+ctx.realId() );
//					Console.OUT.println("     edges"+ctx.realId()+" " + ctx.inEdgesId().size()+" "+ ctx.outEdgesId().size());
//					Console.OUT.println("     value" + ctx.value().leaderId);
					
					if(messages(0).front) {
//						ctx.clearOutEdges();
						ctx.setVertexShouldBeActive(false);
						return ;
					}
					val newInfo = new SCCVertex(messages(0).id ,false, false, ctx.id());
					ctx.setValue(newInfo);
					ctx.setVertexShouldBeActive(true);
				}
				
			},
			//aggregateは多分使わないので適当なことを書いた
			(values :MemoryChunk[Long]) => MathAppend.sum(values),
			//終了条件は、最終的には全部のセルが止まった状態になればよい
			(superstep :Int, aggVal :Long) => (superstep >= 2) );
		
			//PhaseC : 連結成分が異なるところを分けるための処理
			xpregel.iterate[MessageC, Long](
					(ctx :VertexContext[SCCVertex, Long, MessageC, Long ], messages :MemoryChunk[MessageC] ) => {
				
				var update:Boolean = false;
				if(ctx.superstep()==0) {
					ctx.setVertexShouldBeActive(true);
					update = true;
				}
				for(i in messages.range()) {
					if(messages(i).leaderId == ctx.value().leaderId) {
						if(messages(i).minimId < ctx.value().minimId) {
							val newInfo = new SCCVertex(ctx.value().leaderId, ctx.value().front, ctx.value().back, messages(i).minimId);
							ctx.setValue(newInfo);
							update = true;
							break;
						}
					}
				}
//				Console.OUT.println("value.minimId"+ctx.realId()+" " + ctx.value().minimId);
				if(update) {
					val mes = new MessageC(ctx.value().leaderId, ctx.value().minimId);
					for(i in ctx.outEdgesId().range())
						ctx.sendMessage(ctx.outEdgesId()(i), mes);
					for(i in ctx.inEdgesId().range())
						ctx.sendMessage(ctx.inEdgesId()(i), mes);
				}
				ctx.voteToHalt();
			},
			//aggregateは多分使わないので適当なことを書いた
			(values :MemoryChunk[Long]) => MathAppend.sum(values),
			//終了条件は、最終的には全部のセルが止まった状態になればよい
			(superstep :Int, aggVal :Long) => (superstep >= 100) );
		}
		val end_time = System.currentTimeMillis();
			
		Console.OUT.println("Finish after =" + (end_time-start_time));
		Console.OUT.println("Finish application");	
	}	
}	
