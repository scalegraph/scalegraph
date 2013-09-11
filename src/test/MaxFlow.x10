package test;

import x10.util.Team;
import x10.compiler.Native;

import org.scalegraph.Config;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.id.Type;
import org.scalegraph.io.CSV;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.util.Algorithm;

struct AdjVertex {
	val vertexId:Long;
	val myId:Long;
	val isOutEdge:Boolean;
	val capacity:Long;
	val height:Long;
	val excess:Long;
	public def this(v:Long, m:Long, is:Boolean ,cap:Long) {
		vertexId = v;
		myId = m;
		isOutEdge = is;
		capacity = cap;
		height = 0L;
		excess = 0L;
	}

	@Native("c++", "(#this)->FMGL(excess) = #v")
	native def setExcess(v:Long):void;
	
	@Native("c++", "(#this)->FMGL(height) = #v")
	native def setHeight(v:Long):void;
	
	@Native("c++", "(#this)->FMGL(capacity) = #v")
	native def setCapacity(v:Long):void;
}

struct FlowMessage {
	val flow:Long;
	val fromId:Long;
	def this(f:Long, i:Long) {
		this.flow = f;
		this.fromId = i;
	}
}

struct ValueMessage {
	val excess:Long;
	val height:Long;
	val id:Long;
	def this(e:Long, h:Long, i:Long) {
		excess = e;
		height = h;
		id  = i;
	}
}

struct InitMessage {
	val val1:Long;
	val val2:Long;
	val isOutEdge:Boolean;
	val capacity:Long;
	def this(val a:Long, val b:Long, val c:Boolean ,val cap:Long) {
		val1=a;
		val2=b;
		isOutEdge=c;
		capacity = cap;
	}
}

class MFEdge {
	var capacity:Long;
}

struct MFVertex {
	val adjVertex:MemoryChunk[AdjVertex];
	val excess:Long;
	val height:Long;
	val isExcessNonZero:Boolean;
	public def this() {
		this.adjVertex = new MemoryChunk[AdjVertex](0);
		excess = 0L;
		height = 0L;
		isExcessNonZero = false;
	}
	
	public def this(val adj:MemoryChunk[AdjVertex]) {
		this.adjVertex = adj;
		excess = height = 0L;
		isExcessNonZero = false;
	}
	@Native("c++", "(#this)->FMGL(adjVertex) = #v")
	native def setAdj(v:MemoryChunk[AdjVertex]):void;

	@Native("c++", "(#this)->FMGL(excess) = #v")
	native def setExcess(v:Long):void;
	
	@Native("c++", "(#this)->FMGL(height) = #v")
	native def setHeight(v:Long):void;
	
	@Native("c++", "(#this)->FMGL(isExcessNonZero) = #v")
	native def setIsExcessNonZero(v:Boolean):void;
	
	def setAdjCapacity(id:Long, cap:Long) {
		val adjV = adjVertex(id);
		adjV.setCapacity(cap);
		adjVertex(id) = adjV;
	}
	def setAdjExcess(id:Long, excess:Long) {
		val adjV = adjVertex(id);
		adjV.setExcess(excess);
		adjVertex(id) = adjV;
	}
	def setAdjHeight(id:Long, height:Long) {
		val adjV = adjVertex(id);
		adjV.setHeight(height);
		adjVertex(id) = adjV;
	}
}

public class MaxFlow {
	
	public static def main(args:Array[String](1)) {
		val team = Config.get().worldTeam();
		
		val start_read_time = System.currentTimeMillis();
		val g = Graph.make(CSV.read(args(0), 
				[Type.Long as Int, Type.Long, Type.None, Type.Double],
				["source", "target", "weight"]));
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Read File: "+(end_read_time-start_read_time)+" millis");
		

		val csr = g.createDistEdgeIndexMatrix(Config.get().dist1d(), true, true);
		val xpregel = new XPregelGraph[MFVertex, MFEdge](csr);
		val edgeValue = g.createDistAttribute[Double](csr, false, "weight");
		
		team.placeGroup().broadcastFlat(() => {
			val src = edgeValue();
			val dst = xpregel.edgeValues();
			Parallel.iter(dst.range(), (tid :Long, r :LongRange) => {
				for(i in r)
					dst(i).capacity = src(i) as Long;
			});
		});

		val start_time = System.currentTimeMillis();
		
		xpregel.updateInEdge();
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + "ms");
		
		val sourceVertexId = 0L;
		val sinkVertexId = 3L;
		
		//����Phase1 : �אڒ��_�̊
		xpregel.iterate[InitMessage , Long](
				(ctx :VertexContext[MFVertex, MFEdge, InitMessage, Long ], messages :MemoryChunk[InitMessage] ) => {
			
			if(ctx.superstep()==0) {
//				ctx.setVertexShouldBeActive( sourceVertexId == ctx.realId() );
				if(ctx.realId() == sourceVertexId) ctx.setVertexShouldBeActive(true);
				if(ctx.realId() == sinkVertexId)  ctx.setVertexShouldBeActive(true);
				for(i in ctx.outEdgesId().range() ) {
					val mes = new InitMessage(ctx.id(), 0L, true, ctx.outEdgesValue()(i).capacity) ;
					ctx.sendMessage(ctx.outEdgesId()(i), mes);
				}
				for(i in ctx.inEdgesId().range()) {
					val mes = new InitMessage(ctx.id(), 0L, false, 0);
					ctx.sendMessage(ctx.inEdgesId()(i), mes);
				}
			}
			if(ctx.superstep()==1) {
				val sizeMes = messages.size();
				var tmp:MemoryChunk[Long] = new MemoryChunk[Long](sizeMes);
				for(i in messages.range()) {
					tmp(i) = messages(i).val1 * 2;
					if(messages(i).isOutEdge) tmp(i)++;
				}
				val algo = new Algorithm();
				algo.sort[Long, InitMessage](tmp, messages);	
				
				for(i in messages.range()) {
					val mes = new InitMessage(ctx.id(),i,messages(i).isOutEdge,messages(i).capacity);
					ctx.sendMessage(messages(i).val1, mes );
				}
			}
			if(ctx.superstep()==2) {
				val sizeMes = messages.size();
				var tmp:MemoryChunk[Long] = new MemoryChunk[Long](sizeMes);
				for(i in messages.range()) {
					tmp(i) = messages(i).val1 * 2;
					if(messages(i).isOutEdge) tmp(i)++;
				}
				val algo = new Algorithm();
				algo.sort[Long, InitMessage](tmp,messages);
				
				val mesSize = messages.size();
				val adjVertex = new MemoryChunk[AdjVertex](mesSize);
				for(i in messages.range()) {
					adjVertex(i) = new AdjVertex(messages(i).val1, messages(i).val2, messages(i).isOutEdge, messages(i).capacity);
//					Console.OUT.println("ADJDATA "+ ctx.id() + " :" + messages(i).val1 + " " +  messages(i).val2 + " " + messages(i).isOutEdge+" "+ messages(i).capacity);
				}
				val newVertex = new MFVertex(adjVertex);
				ctx.setValue(newVertex);
//				ctx.value().setAdj(adjVertex);
//				Console.OUT.println("ctx.id() , adjVertex.size() : " + ctx.id() +" " + adjVertex.size() +" " + ctx.value().adjVertex.size() );
			}
		},
		//aggregate�͑����g��Ȃ��̂œK���Ȃ��Ƃ�������
		(values :MemoryChunk[Long]) => MathAppend.sum(values),
		//�I�������́A�ŏI�I�ɂ͑S���̃Z�����~�܂�����ԂɂȂ�΂悢
		(superstep :Int, aggVal :Long) => (superstep >= 2) );
		
		//����phase1.5 : sink����BFS�����Ă����āA�����֐��̂��悢������s��
		xpregel.iterate[Boolean,Long](
				(ctx :VertexContext[MFVertex, MFEdge, Boolean, Long ], messages :MemoryChunk[Boolean] ) => {
					
			if(ctx.superstep()==0) {
				if(ctx.realId() == sourceVertexId) {
					ctx.setVertexShouldBeActive(true);
					ctx.voteToHalt();
				}
				if(ctx.realId() == sinkVertexId) {
					ctx.setVertexShouldBeActive(false);
					for(i in ctx.inEdgesId().range()) 
						ctx.sendMessage(ctx.inEdgesId()(i), true );
//					for(i in ctx.outEdgesId().range()) 
//						ctx.sendMessage(ctx.outEdgesId()(i), true);
				}
			}
			else {
				if(messages.size()>0 && ctx.value().height==0L && ctx.realId()!=sinkVertexId) {
					val vval = ctx.value();
					vval.setHeight(ctx.superstep());
					ctx.setValue(vval);
					
					for(i in ctx.inEdgesId().range()) 
						ctx.sendMessage(ctx.inEdgesId()(i) , true);
//					for(i in ctx.outEdgesId().range())
//						ctx.sendMessage(ctx.outEdgesId()(i) , true);
				}
			}
			ctx.voteToHalt();
		},
		//aggregate�͑����g��Ȃ��̂œK���Ȃ��Ƃ�������
		(values :MemoryChunk[Long]) => MathAppend.sum(values),
		//�I�������́A�ŏI�I�ɂ͑S���̃Z�����~�܂�����ԂɂȂ�΂悢
		(superstep :Int, aggVal :Long) => (superstep >= 100) );
		
		
		//����phase2 : preflow push relabel���s�����߂̑O����
		xpregel.iterate[FlowMessage,Long](
				(ctx :VertexContext[MFVertex, MFEdge, FlowMessage, Long ], messages :MemoryChunk[FlowMessage ] ) => {
			Console.OUT.println("phase2");
			if(ctx.superstep()==0 && ctx.realId()==sourceVertexId) {
//				Console.OUT.println("adjVertex.sizd()" + ctx.value().adjVertex.size());
				for(i in ctx.value().adjVertex.range()) {
					val toId = ctx.value().adjVertex(i).vertexId;
					val m = ctx.value().adjVertex(i).myId;
					val flow = ctx.value().adjVertex(i).capacity;
					val mes = new FlowMessage(flow ,m);
					ctx.value().adjVertex(i).setCapacity(0L);
					if(flow!=0L)
						ctx.sendMessage(toId, mes);
				}
//				ctx.value().setHeight(ctx.numberOfVertices() );
				val vval = ctx.value();
				vval.setHeight(ctx.numberOfVertices() );
				ctx.setValue(vval);
				ctx.setVertexShouldBeActive(true);
			}
			if(ctx.superstep()==1) {
				var excess:Long = ctx.value().excess;
				for(i in messages.range()) {
					excess += messages(i).flow;
					val vval = ctx.value();
					vval.setAdjCapacity(i, messages(i).flow);
					ctx.setValue(vval);
				}
				val vvalue = ctx.value();
				vvalue.setExcess(excess);
				ctx.setValue(vvalue);
//				ctx.value().setExcess(excess);
//				Console.OUT.println("(ctx.id(), ctx.value().excess, excess) : "+ctx.id()+" "+ctx.value().excess + " " + excess);
				ctx.setVertexShouldBeActive(true);
			}
			ctx.voteToHalt();
		},
		//aggregate�͑����g��Ȃ��̂œK���Ȃ��Ƃ�������
		(values :MemoryChunk[Long]) => MathAppend.sum(values),
		//�I�������́A�ŏI�I�ɂ͑S���̃Z�����~�܂�����ԂɂȂ�΂悢
		(superstep :Int, aggVal :Long) => (superstep >= 1) );
	
		val flowNum: GlobalRef[Cell[Long]] = new GlobalRef[Cell[Long]](new Cell[Long](0));
		
		var recursion:Int = 1;
		while(recursion<=300) {
			recursion++;
			//�ʏ폈��1 : ��͂ɏ���`����phase.
			xpregel.iterate[ValueMessage,Long](
					(ctx :VertexContext[MFVertex, MFEdge, ValueMessage, Long ], messages :MemoryChunk[ValueMessage ] ) => {

//				ctx.voteToHalt();
				if(ctx.superstep()==0) {
					ctx.setVertexShouldBeActive( ctx.value().excess!=0L );
					
					if(ctx.realId() == sinkVertexId) {
						Console.OUT.println("                              CURRENT FLOW"  + ctx.value().excess);
						val excess = ctx.value().excess;
						at (flowNum.home) {
							flowNum()() = excess;
						}
					}
					val goNext = ctx.value().isExcessNonZero;
					{
						val vval = ctx.value();
						vval.setIsExcessNonZero(false);
						ctx.setValue(vval);
					}
					if(goNext) {
						ctx.setVertexShouldBeActive(true);
						return ;
					}
					
					for(i in ctx.value().adjVertex.range()) {
						val toId = ctx.value().adjVertex(i).vertexId;
						val myId = ctx.value().adjVertex(i).myId;
						val mes = new ValueMessage(ctx.value().excess, ctx.value().height ,myId);
						ctx.sendMessage(toId, mes);
					}
				}
				if(ctx.superstep()==1) {
					var excess:Long = ctx.value().excess;
					for(i in messages.range()) {
						val id:Long = messages(i).id;
						val vval = ctx.value();
						vval.setAdjExcess(id, messages(i).excess);
						vval.setAdjHeight(id, messages(i).height);
						ctx.setValue(vval);
					}
				}
				if(ctx.realId() == sourceVertexId || ctx.realId() == sinkVertexId)
					ctx.setVertexShouldBeActive(false);
				ctx.voteToHalt();
			},
			//aggregate�͑����g��Ȃ��̂œK���Ȃ��Ƃ�������
			(values :MemoryChunk[Long]) => MathAppend.sum(values),
			//�I�������́A�ŏI�I�ɂ͑S���̃Z�����~�܂�����ԂɂȂ�΂悢
			(superstep :Int, aggVal :Long) => (superstep >= 1) );
			
			if(recursion%10!=0) 
//			if(true)
				//�ʏ폈��2 : excess���傫���Ƃ��ɂ͗���
				xpregel.iterate[FlowMessage,Long](
						(ctx :VertexContext[MFVertex, MFEdge, FlowMessage, Long ], messages :MemoryChunk[FlowMessage ] ) => {
					if(ctx.superstep()==0  && ctx.value().excess>0L 
							&& ctx.realId()!=sourceVertexId && ctx.realId()!=sinkVertexId) {
						
						
						var excess:Long = ctx.value().excess;
						var haveFlow:Boolean = false;
						var minimHeight:Long = 1000000000L ;
						minimHeight *= minimHeight;
						for(i in ctx.value().adjVertex.range()) {
							if(excess==0L) break;
							val toId = ctx.value().adjVertex(i).vertexId;
							val m = ctx.value().adjVertex(i).myId;
							val flow = Math.min(ctx.value().adjVertex(i).capacity, excess);
//							Console.OUT.println("(id,pos,excess,height,EXCESS ,MyHeight, flow )"+ctx.id()+" "+i+" "+ctx.value().adjVertex(i).excess + " "+ctx.value().adjVertex(i).height+" "+excess + " "+ ctx.value().height + " " + flow);
							if(ctx.value().adjVertex(i).height<ctx.value().height) {
								val mes = new FlowMessage(flow ,m);
								excess -= flow;
								if(flow!=0L) {
									val capacity = ctx.value().adjVertex(i).capacity;
									val vval = ctx.value();
									vval.setAdjCapacity(i, capacity - flow);
									ctx.setValue(vval);
									
									ctx.sendMessage(toId, mes);
									haveFlow = true;
								}
							}
							else if(flow!=0L){
								minimHeight = Math.min(minimHeight, ctx.value().adjVertex(i).height);
							}
						}
						if(!haveFlow) {
							val vval = ctx.value();
							vval.setHeight(minimHeight+1);
							ctx.setValue(vval);
							ctx.setVertexShouldBeActive(true);
							
//							Console.OUT.println("not have flow" + ctx.id());					
						}
						val vval = ctx.value();
						vval.setExcess(excess);
						ctx.setValue(vval);
						
					}
					if(ctx.superstep()==1) {
						var excess:Long = ctx.value().excess;
						for(i in messages.range()) {
							val id = messages(i).fromId;
							val capacity = ctx.value().adjVertex(id).capacity;
							val vval = ctx.value();
							vval.setAdjCapacity(id, capacity + messages(i).flow);
							ctx.setValue(vval);
							
							excess += messages(i).flow;
						}
						val vval = ctx.value();
						vval.setExcess(excess);
						ctx.setValue(vval);
						ctx.setVertexShouldBeActive(true);
//						Console.OUT.println("come message" + ctx.id());
					}
//					Console.OUT.println("superstep , survive vertex" +ctx.superstep() + " " + ctx.realId());
					
					ctx.voteToHalt();
				},
				//aggregate�͑����g��Ȃ��̂œK���Ȃ��Ƃ�������
				(values :MemoryChunk[Long]) => MathAppend.sum(values),
				//�I�������́A�ŏI�I�ɂ͑S���̃Z�����~�܂�����ԂɂȂ�΂悢
				(superstep :Int, aggVal :Long) => (superstep >= 1) );
			
			else  {
				xpregel.resetSholdBeActiveFlag();
				//���ʏ��� : gap-heuristic
				xpregel.iterate[Long,Long](
						(ctx :VertexContext[MFVertex, MFEdge, Long, Long ], messages :MemoryChunk[Long ] ) => {
					if(ctx.superstep()==0) {
/*						val vval = ctx.value();
						vval.setIsExcessNonZero(false);
						ctx.setValue(vval);
*/						
						val n = ctx.numberOfVertices();
						val mes = ctx.value().height;
						if(mes<n)
							ctx.sendMessage(0L, mes);
					}
					if(ctx.superstep()==1 && ctx.id()==0L) {
						val n = messages.size();
						var maxim:Long = 0;
						for(i in messages.range()) {
							maxim = Math.max( maxim, messages(i) );
						}
						var count:MemoryChunk[Long] = new MemoryChunk[Long](maxim+2); 
						// 0~maxim+1��maxim+2�v�f�ɂ���������
						
						for(i in count.range()) 
							count(i) = 0L;
						for(i in messages.range()) {
							if(messages(i)<n) 
								count(messages(i))++;	
						}
						var ret:Long = 0L;
						for(i in count.range()) {
//							Console.OUT.println("GAPHEURISTICPHASE : "+i+" "+ count(i));
							if(count(i)==0L) {
								ret = i;
								break;
							}
						}
						ctx.aggregate(ret);
					}
					if(ctx.superstep()==2) {
						val n = ctx.numberOfVertices();
						val border = ctx.aggregatedValue();
						if(ctx.value().height>border && ctx.value().height<n) {
//							Console.OUT.println("[CHANGED] ctx.realId() , value().height : " +  ctx.realId() + " " + ctx.value().height);
							ctx.setVertexShouldBeActive(true);
							val vval = ctx.value();
							vval.setHeight(n);
							ctx.setValue(vval);
						}
						else {
							if(ctx.value().excess>0) {
								ctx.setVertexShouldBeActive(true);
								val vval = ctx.value();
								vval.setIsExcessNonZero(true);
								ctx.setValue(vval);
							}
							else ctx.setVertexShouldBeActive(false);
						}
					}
				},
				//aggregate�͑����g��Ȃ��̂œK���Ȃ��Ƃ�������
				(values :MemoryChunk[Long]) => MathAppend.sum(values),
				//�I�������́A�ŏI�I�ɂ͑S���̃Z�����~�܂�����ԂɂȂ�΂悢
				(superstep :Int, aggVal :Long) => (superstep >= 2) );
			}
		}	
		
		val end_time = System.currentTimeMillis();
		
		Console.OUT.println(flowNum()());
		
		Console.OUT.println("Finish after = " + (end_time-start_time) + " ms");
		Console.OUT.println("Finish application");
	}
}

