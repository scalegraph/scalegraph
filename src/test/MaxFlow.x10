/*
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
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

import org.scalegraph.Config;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.id.Type;
import org.scalegraph.io.CSV;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.util.Algorithm;



public class MaxFlow {
	private static struct AdjVertex {
		val vertexId:Long;
		val myId:Long;
		val isOutEdge:Boolean;
		val capacity:Double;
		// val capacity:Long;
		val height:Long;
		val excess:Double;
		// val excess:Long;
		// public def this(v:Long, m:Long, is:Boolean ,cap:Long) {
		private def this (v:Long, m:Long,is:Boolean,  cap:Double) {
			vertexId = v;
			myId = m;
			isOutEdge = is;
			capacity = cap;
			height = 0L;
			// excess = 0L;
			excess = 0.0;
		}

		@Native("c++", "(#this)->FMGL(excess) = #v")
		native def setExcess(v:Double):void;
		// native def setExcess(v:Long):void;
		
		@Native("c++", "(#this)->FMGL(height) = #v")
		native def setHeight(v:Long):void;
		
		@Native("c++", "(#this)->FMGL(capacity) = #v")
		native def setCapacity(v:Double):void;
		// native def setCapacity(v:Long):void;
	}

	private static struct FlowMessage {
		// val flow:Long;
		val flow:Double;
		val fromId:Long;
		// def this(f:Long, i:Long) {
		private def this(f:Double, i:Long) {
			this.flow = f;
			this.fromId = i;
		}
	}

	private static struct ValueMessage {
		// val excess:Long;
		val excess:Double;
		val height:Long;
		val id:Long;
		// def this(e:Long, h:Long, i:Long) {
		private def this(e:Double, h:Long, i:Long) {
			excess = e; 
			height = h;
			id  = i;
		}
	}

	private static struct InitMessage {
		val val1:Long;
		val val2:Long;
		val isOutEdge:Boolean;
		val capacity:Double;
		//val capacity:Long;
		// def this(val a:Long, val b:Long, val c:Boolean ,val cap:Long) {
		private def this(val a:Long, val b:Long, val c:Boolean, val cap:Double) {
			val1=a;
			val2=b;
			isOutEdge=c;
			capacity = cap;
		}
	}

	private static class MFEdge {
		def this(){}
		// var capacity:Long;
		var capacity:Double;
//		def this(val cap:Long) {
		def this(val cap:Double) {
			capacity = cap;
		}
	}

	private static class MFVertex {
		var adjVertex:MemoryChunk[AdjVertex];
		// val excess:Long;
		var excess:Double;
		var height:Long;
		var isExcessNonZero:Boolean;
		private def this() {
			this.adjVertex = MemoryChunk.make[AdjVertex](0);
			// excess = 0L;
			excess = 0.0;
			height = 0L;
			isExcessNonZero = false;
		}
		
		private def this(val adj:MemoryChunk[AdjVertex]) {
			this.adjVertex = adj;
			// excess = 0L;
			excess = 0.0;
			height = 0L;
			isExcessNonZero = false;
		}
		
		private def setAdj(adj:MemoryChunk[AdjVertex]) {
			this.adjVertex = adj;
		}
		private def setExcess(ex:Double) {
			this.excess = ex;
		}
		private def setHeight(h:Long) {
			this.height = h;
		}
		
		private def setIsExcessNonZero(b:Boolean) {
			this.isExcessNonZero = b;
		}
		
		/*
		@Native("c++", "(#this)->FMGL(adjVertex) = #v")
		native def setAdj(v:MemoryChunk[AdjVertex]):void;
	
		@Native("c++", "(#this)->FMGL(excess) = #v")
		native def setExcess(v:Double):void;
		// native def setExcess(v:Long):void;
	
		@Native("c++", "(#this)->FMGL(height) = #v")
		native def setHeight(v:Long):void;
		
		@Native("c++", "(#this)->FMGL(isExcessNonZero) = #v")
		native def setIsExcessNonZero(v:Boolean):void;
		*/
		// def setAdjCapacity(id:Long, cap:Long) {
		private def setAdjCapacity(id:Long, cap:Double) {
			val adjV = adjVertex(id);
			adjV.setCapacity(cap);
			adjVertex(id) = adjV;
		}
		// def setAdjExcess(id:Long, excess:Long) {
		private def setAdjExcess(id:Long, excess:Double) {
			val adjV = adjVertex(id);
			adjV.setExcess(excess);
			adjVertex(id) = adjV;
		}
		private def setAdjHeight(id:Long, height:Long) {
			val adjV = adjVertex(id);
			adjV.setHeight(height);
			adjVertex(id) = adjV;
		}
	}
	public static def main(args:Rail[String]) {
		val team = Config.get().worldTeam();
		
		val eps:Double = 1e-6;
		val sourceVertexId = 0L;
		val sinkVertexId = 1L;
		val recursionLimit = 1000L;
		
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
					dst(i) = new MFEdge(src(i));
					// dst(i) = new MFEdge(src(i) as Long);
			});
		});

		val start_time = System.currentTimeMillis();

		xpregel.updateInEdge();
		
		//step 1 : initialize vertex information
		xpregel.iterate[InitMessage , Long](
				(ctx :VertexContext[MFVertex, MFEdge, InitMessage, Long ], messages :MemoryChunk[InitMessage] ) => {

					if(ctx.superstep()==0n) {
						if(ctx.realId() == sourceVertexId) ctx.setVertexShouldBeActive(true);
						if(ctx.realId() == sinkVertexId)  ctx.setVertexShouldBeActive(true);
						
						for(val iter = ctx.getOutEdgesIterator(); iter.hasNext(); iter.next()) {
							val mes = new InitMessage(ctx.id(), 0L, true, iter.curValue().capacity) ;
							ctx.sendMessage(iter.curId(), mes);
						}
						for(val iter = ctx.getInEdgesIterator(); iter.hasNext(); iter.next()) {
							val mes = new InitMessage(ctx.id(), 0L, false, 0);
							ctx.sendMessage(iter.curId(), mes);
						}
						
						// for(i in ctx.outEdgesId().range() ) {
						// 	val mes = new InitMessage(ctx.id(), 0L, true, ctx.outEdgesValue()(i).capacity) ;
						// 	ctx.sendMessage(ctx.outEdgesId()(i), mes);
						// }
						// for(i in ctx.inEdgesId().range()) {
						// 	val mes = new InitMessage(ctx.id(), 0L, false, 0);
						// 	ctx.sendMessage(ctx.inEdgesId()(i), mes);
						// }
					}
					if(ctx.superstep()==1n) {
						val sizeMes = messages.size();
						var tmp:MemoryChunk[Long] = MemoryChunk.make[Long](sizeMes);
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
					if(ctx.superstep()==2n) {
						val sizeMes = messages.size();
						var tmp:MemoryChunk[Long] = MemoryChunk.make[Long](sizeMes);
						for(i in messages.range()) {
							tmp(i) = messages(i).val1 * 2;
							if(messages(i).isOutEdge) tmp(i)++;
						}
						val algo = new Algorithm();
						algo.sort[Long, InitMessage](tmp,messages);

						val mesSize = messages.size();
						val adjVertex = MemoryChunk.make[AdjVertex](mesSize);
						for(i in messages.range()) {
							adjVertex(i) = new AdjVertex(messages(i).val1, messages(i).val2, messages(i).isOutEdge, messages(i).capacity);
						}
						val newVertex = new MFVertex(adjVertex);
						ctx.setValue(newVertex);
					}
				},
				(values :MemoryChunk[Long]) => MathAppend.sum(values),
				(superstep :Int, aggVal :Long) => (superstep >= 2n) );

		//step 2 : BFS from sink ( because of setting initial height )
		xpregel.iterate[Boolean,Long](
				(ctx :VertexContext[MFVertex, MFEdge, Boolean, Long ], messages :MemoryChunk[Boolean] ) => {

					if(ctx.superstep()==0n) {
						if(ctx.realId() == sourceVertexId) {
							ctx.setVertexShouldBeActive(true);
							ctx.voteToHalt();
						}
						if(ctx.realId() == sinkVertexId) {
							ctx.setVertexShouldBeActive(false);
							
							for(val iter = ctx.getInEdgesIterator(); iter.hasNext(); iter.next()) {
								ctx.sendMessage(iter.curId(), true);
							}							
							// for(i in ctx.inEdgesId().range()) 
							// 	ctx.sendMessage(ctx.inEdgesId()(i), true );
						}
					}
					else {
						if(messages.size()>0 && ctx.value().height==0L && ctx.realId()!=sinkVertexId) {
							val vval = ctx.value();
							vval.setHeight(ctx.superstep());
							ctx.setValue(vval);
							for(val iter = ctx.getInEdgesIterator(); iter.hasNext(); iter.next()) {
								ctx.sendMessage(iter.curId(), true);
							}
							// for(i in ctx.inEdgesId().range()) 
							// 	ctx.sendMessage(ctx.inEdgesId()(i) , true);
						}
					}
					ctx.voteToHalt();
				},
				(values :MemoryChunk[Long]) => MathAppend.sum(values),
				(superstep :Int, aggVal :Long) => (superstep >= 100) );


		//step 3 : initialization of preflow push relabel. 
		xpregel.iterate[FlowMessage,Long](
				(ctx :VertexContext[MFVertex, MFEdge, FlowMessage, Long ], messages :MemoryChunk[FlowMessage ] ) => {
	//				Console.OUT.println("phase3");
					if(ctx.superstep()==0n && ctx.realId()==sourceVertexId) {
						for(i in ctx.value().adjVertex.range()) {
							val toId = ctx.value().adjVertex(i).vertexId;
							val m = ctx.value().adjVertex(i).myId;
							val flow = ctx.value().adjVertex(i).capacity;
							val mes = new FlowMessage(flow ,m);
							// ctx.value().adjVertex(i).setCapacity(0L);
							ctx.value().adjVertex(i).setCapacity(0.0);
							// if(flow!=0L)
							if(flow>eps)
								ctx.sendMessage(toId, mes);
						}
						val vval = ctx.value();
						vval.setHeight(ctx.numberOfVertices() );
						ctx.setValue(vval);
						ctx.setVertexShouldBeActive(true);
					}
					if(ctx.superstep()==1n) {
						// var excess:Long = ctx.value().excess;
						var excess:Double  = ctx.value().excess;
						for(i in messages.range()) {
							excess += messages(i).flow;
							val vval = ctx.value();
							vval.setAdjCapacity(i, messages(i).flow);
							ctx.setValue(vval);
						}
						val vvalue = ctx.value();
						vvalue.setExcess(excess);
						ctx.setValue(vvalue);
						ctx.setVertexShouldBeActive(true);
					}
					ctx.voteToHalt();
				},
				(values :MemoryChunk[Long]) => MathAppend.sum(values),
				(superstep :Int, aggVal :Long) => (superstep >= 1) );

		
//		val flowNum: GlobalRef[Cell[Long]] = new GlobalRef[Cell[Long]](new Cell[Long](0));
		val flowNum: GlobalRef[Cell[Double]] = new GlobalRef[Cell[Double]](new Cell[Double](0));
		var recursion:Long = 1;
		while(recursion<=recursionLimit) {
			recursion++;
			val currentRecursion = recursion;
			//step 4 : main iteration of preflow push relavel
			// changing neighbor vertex and edge information
			xpregel.iterate[ValueMessage,Long](
					(ctx :VertexContext[MFVertex, MFEdge, ValueMessage, Long ], messages :MemoryChunk[ValueMessage ] ) => {

						if(ctx.superstep()==0n) {
							// ctx.setVertexShouldBeActive( ctx.value().excess!=0L );
							ctx.setVertexShouldBeActive(ctx.value().excess > eps);
							
							if(ctx.realId() == sinkVertexId) {
								Console.OUT.println("                              CURRENT FLOW"  + ctx.value().excess);
								if(flowNum.home==here) {
									flowNum()() = ctx.value().excess;
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
						if(ctx.superstep()==1n) {
//							var excess:Long = ctx.value().excess;
							var excess:Double = ctx.value().excess;
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
					(values :MemoryChunk[Long]) => MathAppend.sum(values),
					(superstep :Int, aggVal :Long) => (superstep >= 1) );
			// step 5 : Excessing vertex determine where flowing to and how volume flow have.
			if(recursion%10!=0L) {

				val updatedNum: GlobalRef[Cell[Long]] = new GlobalRef[Cell[Long]](new Cell[Long](0));
				xpregel.iterate[FlowMessage,Long](
						(ctx :VertexContext[MFVertex, MFEdge, FlowMessage, Long ], messages :MemoryChunk[FlowMessage ] ) => {
							// if(ctx.superstep()==0  && ctx.value().excess>0L 
							if(ctx.superstep()==0n && ctx.value().excess>eps
									&& ctx.realId()!=sourceVertexId && ctx.realId()!=sinkVertexId) {
								ctx.aggregate(1);
								// var excess:Long = ctx.value().excess;
								var excess:Double = ctx.value().excess;
								var haveFlow:Boolean = false;
								var minimHeight:Long = 1000000000L ;
								minimHeight *= minimHeight;
								for(i in ctx.value().adjVertex.range()) {
									// if(excess==0L) break;
									if(excess<eps) break;
									val toId = ctx.value().adjVertex(i).vertexId;
									val m = ctx.value().adjVertex(i).myId;
									val flow = Math.min(ctx.value().adjVertex(i).capacity, excess);
									
									if(ctx.value().adjVertex(i).height<ctx.value().height) {
										val mes = new FlowMessage(flow ,m);
										excess -= flow;
										// if(flow!=0L) {
										if(flow>eps) {
											val capacity = ctx.value().adjVertex(i).capacity;
											val vval = ctx.value();
											vval.setAdjCapacity(i, capacity - flow);
											ctx.setValue(vval);

											ctx.sendMessage(toId, mes);
											haveFlow = true;
										}
									}
									// else if(flow!=0L){
									else if(flow>eps) {
										minimHeight = Math.min(minimHeight, ctx.value().adjVertex(i).height);
									}
								}
								if(!haveFlow) {
									val vval = ctx.value();
									vval.setHeight(minimHeight+1);
									ctx.setValue(vval);
									ctx.setVertexShouldBeActive(true);				
								}
								//else ctx.aggregate(1);
								val vval = ctx.value();
								vval.setExcess(excess);
								ctx.setValue(vval);

							}
							if(ctx.superstep()==1n) {
								// var excess:Long = ctx.value().excess;
								var excess:Double = ctx.value().excess;
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
							}

							ctx.voteToHalt();
						},
						(values :MemoryChunk[Long]) => MathAppend.sum(values),
						(superstep :Int, aggVal :Long) => {
							if(updatedNum.home == here)
								if(superstep==0n)
									updatedNum()() = aggVal;
							
							return superstep >= 1n; 
						}) ;
				if(updatedNum()()==0L)
					break;
			}

			else  {
				xpregel.resetSholdBeActiveFlag();
				// step 6 : gap-heuristic
				xpregel.iterate[Long,Long](
						(ctx :VertexContext[MFVertex, MFEdge, Long, Long ], messages :MemoryChunk[Long ] ) => {
							if(ctx.superstep()==0n) {
								val n = ctx.numberOfVertices();
								val mes = ctx.value().height;
								if(mes<n)
									ctx.sendMessage(0L, mes);
							}
							if(ctx.superstep()==1n && ctx.id()==0L) {
								val n = messages.size();
								var maxim:Long = 0;
								for(i in messages.range()) {
									maxim = Math.max( maxim, messages(i) );
								}
								var count:MemoryChunk[Long] = MemoryChunk.make[Long](maxim+2); 

								for(i in count.range()) 
									count(i) = 0L;
								for(i in messages.range()) {
									if(messages(i)<n) 
										count(messages(i))++;	
								}
								var ret:Long = 0L;
								for(i in count.range()) {
									if(count(i)==0L) {
										ret = i;
										break;
									}
								}
								ctx.aggregate(ret);
							}
							if(ctx.superstep()==2n) {
								val n = ctx.numberOfVertices();
								val border = ctx.aggregatedValue();
								if(ctx.value().height>border && ctx.value().height<n) {
									ctx.setVertexShouldBeActive(true);
									val vval = ctx.value();
									vval.setHeight(n);
									ctx.setValue(vval);
								}
								else {
									// if(ctx.value().excess>0L) {
									if(ctx.value().excess>eps) {
										ctx.setVertexShouldBeActive(true);
										val vval = ctx.value();
										vval.setIsExcessNonZero(true);
										ctx.setValue(vval);
									}
									else ctx.setVertexShouldBeActive(false);
								}
							}
						},
						(values :MemoryChunk[Long]) => MathAppend.sum(values),
						(superstep :Int, aggVal :Long) => (superstep >= 2) );
			}
		}	
		
		val output = xpregel.stealOutput[Long]();
		
		Console.OUT.println("flow = " + flowNum()());


		val end_time = System.currentTimeMillis();
		
		Console.OUT.println(flowNum()());
		
		Console.OUT.println("Finish after = " + (end_time-start_time) + " ms");
		Console.OUT.println("Finish application");
	}
}

