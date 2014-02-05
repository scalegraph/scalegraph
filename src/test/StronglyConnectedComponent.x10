/*
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */


package test;

import x10.util.Team;
import x10.compiler.Native;

//import org.scalegraph.concurrent.Dist2D;

import org.scalegraph.Config;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.id.Type;
import org.scalegraph.io.CSV;
import org.scalegraph.graph.Graph;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;



public class StronglyConnectedComponent {
	

	/* 
	 * This is vertex value type.
	 * leaderId :leader id (this id is ctx.id. not real id) of current group 
	 *  (front,back) : can reach from leader only using (front , back) direction  
	 *  minimId :
	 *  childCnt : if this node is leader id, chidCnt is the number of nodes in cluster that contain this node.
	 * */
	private static struct SCCVertex {
		val leaderId:Long; 
		val front:Boolean; 
		val back:Boolean;
		val minimId:Long;
		val childCnt:Long;
		def this (leader:Long, fro:Boolean, bac:Boolean, tmp:Long, child:Long) {
			leaderId = leader; 
			front = fro; 
			back = bac;
			minimId = tmp;
			childCnt = child;
		}
	}
	/* Following three structs/classes are using in three xpregel iterations respectively. 
	 *  
	 */
	
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
	private static struct MessageD {
		val ctxId:Long;
		val realId:Long;
		val childCnt:Long;
		def this(ctx:Long, real:Long, cnt:Long) {
			ctxId = ctx;
			realId = real;
			childCnt = cnt;
		}
	}
	
	
	public static def main(args:Array[String](1)) {
		val niter:Int = 10;
		val team = Config.get().worldTeam();
		
		val start_read_time = System.currentTimeMillis();
		val g = Graph.make(CSV.read(args(0), 
				[Type.Long as Int, Type.Long, Type.None, Type.Double],
				["source", "target", "weight"]));
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Read File: "+(end_read_time-start_read_time)+" millis");
		
		
		val csr = g.createDistEdgeIndexMatrix(Config.get().dist1d(), true, true);
		val xpregel = new XPregelGraph[SCCVertex, Long](csr);
		val edgeValue = g.createDistAttribute[Double](csr, false, "weight");
		val blockLength = 3L;
		
		xpregel.updateInEdge();
		
		val initInfo = new SCCVertex(0L, false, false,-1L, 0L);
		xpregel.initVertexValue(initInfo);
		
		var recursion:Int = 0;
		var numOfCluster:Long = 0; 
		while(recursion<niter) {
//			Console.OUT.println("recursion, maximalCluster" + recursion +" "+ numOfCluster);
			recursion++;
			/* phaseA : using BFSlike algorithm.
			 * Start position of dfs is leader.
			 * Initially, this id is 0 (ctx.id).
			 * in superstep
			 * 		0 : pre-process and send messages from leader
			 * 		1~ : send messages like bfs.
			 */
			
			val surviveNum: GlobalRef[Cell[Long]] = new GlobalRef[Cell[Long]](new Cell[Long](0));
			xpregel.iterate[MessageA, Long](
					(ctx :VertexContext[SCCVertex, Long, MessageA, Long ], messages :MemoryChunk[MessageA] ) => {
						ctx.aggregate(1);
						if(ctx.superstep()==0) {
							/* If there is no edges connecting to this node, 
							 * program force to end this node.
							 * ( In "if(ctx.value().front && ctx.value().back)" this node is setted halted.  )
							 */
							if(ctx.outEdgesId().size()==0L && ctx.inEdgesId().size()==0L && ctx.id()!=0L) {
								val newInfo = new SCCVertex(ctx.id(), true,true,-1L,1L);
								ctx.setValue(newInfo);
							}
							/*
							 * Reflection of pahseC iteration.
							 */
							if(ctx.value().minimId!=-1L) {
								val newInfo = new SCCVertex(ctx.value().minimId, ctx.value().front, ctx.value().back, -1L, 0L);
								ctx.setValue(newInfo);
							}
							if(ctx.value().front && ctx.value().back)
								ctx.setVertexShouldBeActive(false);
							else 
								ctx.setVertexShouldBeActive(true);
							
						}
						//messages from current node.
						val mesF = new MessageA(ctx.value().leaderId, false);
						val mesT = new MessageA(ctx.value().leaderId, true);
						
						//sending message from leader.
						if(ctx.superstep()==0 && ctx.id() == ctx.value().leaderId) {
							for(i in ctx.outEdgesId().range()) 
								ctx.sendMessage(ctx.outEdgesId()(i), mesF);
							for(i in ctx.inEdgesId().range())
								ctx.sendMessage(ctx.inEdgesId()(i), mesT);
							val newInfo = new SCCVertex(ctx.value().leaderId, true, true, -1L, 0L);
							ctx.setValue(newInfo);
						}
						
						// main process of bfs.
						if(ctx.superstep()>0) {
							if(ctx.value().front && ctx.value().back)
								return;
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
								new SCCVertex(ctx.value().leaderId, existFront | ctx.value().front  , existBack | ctx.value().back, -1L , 0L);
							ctx.setValue(newInfo);
						}
						ctx.voteToHalt();
					},
					(values :MemoryChunk[Long]) => MathAppend.sum(values),
					(superstep :Int, aggVal :Long) => {
						if(surviveNum.home == here)
							surviveNum()() = aggVal;
						
						return (superstep >= 100);
					} );
			if(surviveNum()()==0L) break;

			val cl: GlobalRef[Cell[Long]] = new GlobalRef[Cell[Long]](new Cell[Long](0));
			/*phase B
			 * Send message to leader and send message from leader.
			 * in superstep 
			 * 		0 : all node: send to leader
			 * 		1 : leader : recieve messages,  divide current group and send information of next group. 
			 * 		2 : all node : recieve messages and set new information
			 */
			
			xpregel.iterate[MessageB, Long](
					(ctx :VertexContext[SCCVertex, Long, MessageB, Long ], messages :MemoryChunk[MessageB] ) => {
						ctx.aggregate(0);
						if(ctx.superstep()==0) {
							val mes = new MessageB(ctx.value().front, ctx.value().back, ctx.id() );
							ctx.sendMessage(ctx.value().leaderId, mes);
							ctx.voteToHalt();
						}
						if(ctx.superstep()==1) {
							val cnt = MemoryChunk.make[Long](4);
							val pos = MemoryChunk.make[Long](4);
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
							
//							Console.OUT.println("              cnt"+ctx.realId()+":" + cnt(0) +" "+cnt(1) + " "+cnt(2) + " " + cnt(3));
							ctx.aggregate(1);
							val newInfo = 
								new SCCVertex(ctx.value().leaderId, ctx.value().front  , ctx.value().back, ctx.value().minimId , cnt(3));
							ctx.setValue(newInfo);
							ctx.voteToHalt();
						}

						if(ctx.superstep()==2) {
							//messageはそれぞれ一つしかこないので、0のはず
//							Console.OUT.println("    :ctx.realId() "+ctx.realId() );
//							Console.OUT.println("     edges"+ctx.realId()+" " + ctx.inEdgesId().size()+" "+ ctx.outEdgesId().size());
							//					Console.OUT.println("     value" + ctx.value().leaderId);
							
							if(messages(0).front) {
								ctx.clearOutEdges();
								ctx.setVertexShouldBeActive(false);
								return ;
							}
							val newInfo = new SCCVertex(messages(0).id ,false, false, ctx.id(), 0L);
							ctx.setValue(newInfo);
							ctx.setVertexShouldBeActive(true);
						}
					},
					(values :MemoryChunk[Long]) => MathAppend.sum(values),
					(superstep :Int, aggVal :Long) => {
						if(superstep==1)
						if(cl.home==here)
							cl()() = aggVal;
						return superstep >= 2;
					} );
			numOfCluster += cl()();
			
			/* phaseC
			 * If new group is disconnected and has many cluster, 
			 * only using phaseA and phaseB is unefficiently.
			 * So, in this phase using BFSlike algorithm, partition group.
			 * In end of this operation, new leaderId is minimal (ctx)Id of (weakly) connected component. 
			 * in superstep
			 * 		0~ : send message and set my value. 
			 */
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
									val newInfo = new SCCVertex(ctx.value().leaderId, ctx.value().front, ctx.value().back, messages(i).minimId, 0L);
									ctx.setValue(newInfo);
									update = true;
									break;
								}
							}
						}
						if(update) {
							val mes = new MessageC(ctx.value().leaderId, ctx.value().minimId);
							for(i in ctx.outEdgesId().range())
								ctx.sendMessage(ctx.outEdgesId()(i), mes);
							for(i in ctx.inEdgesId().range())
								ctx.sendMessage(ctx.inEdgesId()(i), mes);
						}
						ctx.voteToHalt();
					},
					(values :MemoryChunk[Long]) => MathAppend.sum(values),
					(superstep :Int, aggVal :Long) => (superstep >= 100) );
		}
		/* phaseD
		 * Final phase before output.
		 * Before this phase, all (value().leaderId) is (ctx.id()).
		 * But, we need realId. Calculate minimum realId of StronglyConnectedComponent
		 * 
		 * in superstep
		 * 		0 : Send to current leader.
		 * 		1 : Leaders calculate minim realId of each strongly connected component.
		 * 		    And, send this id to all member of strongly connected component.
		 * 		2 : Rewrite leaderId. 
		 */
		
		xpregel.resetSholdBeActiveFlag();
		xpregel.iterate[MessageD, Long](
				(ctx :VertexContext[SCCVertex, Long, MessageD,Long ], messages :MemoryChunk[MessageD] ) => {
					if(ctx.superstep()==0) {
						val mes = new MessageD(ctx.id(), ctx.realId(), 0L);
						ctx.sendMessage(ctx.value().leaderId, mes);
					}
					else if(ctx.superstep()==1) {
						var minim:Long = -1L;
						if(messages.size()>0) 
							minim = messages(0).realId;
						for(i in messages.range()) {
							minim = MathAppend.min(minim, messages(i).realId);
						}
						val mes = new MessageD(0L, minim , ctx.value().childCnt);
						for(i in messages.range()) {
							ctx.sendMessage(messages(i).ctxId, mes);
						}
					}
					else if(ctx.superstep()==2) {
						if(messages.size()==0L) {
							Console.OUT.println("ERROR.");
							return ;
						}
						var childCnt:Long = ctx.value().childCnt;
						if(ctx.id() == ctx.value().leaderId) childCnt = 0L;
						if(ctx.realId() == messages(0).realId) childCnt = messages(0).childCnt;
						val newInfo = new SCCVertex( messages(0).realId  , ctx.value().front, ctx.value().back, ctx.value().minimId, childCnt);
						ctx.setValue(newInfo);
					}
				},
				(values :MemoryChunk[Long]) => MathAppend.sum(values),
				(superstep :Int, aggVal :Long) => (superstep >= 2) );
		xpregel.once((ctx :VertexContext[SCCVertex, Long, Any, Any]) => {
			ctx.output(0, ctx.value().leaderId);
			var plus:Long = 0L;
			if(ctx.realId() == ctx.value().leaderId && ctx.value().childCnt==0L)
				plus = 1L;
			ctx.output(1, ctx.value().childCnt+plus);
			Console.OUT.println(ctx.realId() + " " + ctx.value().leaderId + " " + ctx.value().childCnt);
		});
		
		Console.OUT.println("numOfCluster" + numOfCluster);
		
		
	}
}

