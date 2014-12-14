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

package org.scalegraph.api;

import x10.compiler.Ifdef;
import x10.util.Team;
import x10.compiler.Native;

import org.scalegraph.Config;
import org.scalegraph.graph.Graph;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.metrics.DegreeDistImpl;
import org.scalegraph.util.*;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;
import x10.compiler.Inline;


import org.scalegraph.util.Algorithm;

/**
 * Calculate the maximum flow between two vertices
 */

final public class MaxFlow {
	public var team :Team = Config.get().worldTeam();
	/** The name of the attribute used to give edge weights for the calculation of weighted maxflow.
	 * Default: "weight"
	 */
	public var weights :String = "weight";
		
	/** The name of error.
	 * 
	 */
	public var eps:Double = 1e-6;
	
	/** The name of the number of recursion that preflow-push-relavel do.
	 * Default : 100000
	 */
    public var recursionLimit:Long = 100000;
    /**
     * A class storing the result from MaxFlow
     */
    public static struct Result (maxFlow: Double){
       protected def this(mf: Double) {
           property(mf);
       }
    }
    
    /** Calculate the maximum flow between two vertices
     * @param g The graph object
     * @return A long integer, the value of the maximum flow
     */    

    private static class FlowMessage {
    	// val flow:Long;
    	def this(){
    		flow=0;
    		fromId=0;
    	}
    	val flow:Double;
    	val fromId:Long;
    	// def this(f:Long, i:Long) {
    	def this(flow:Double, id:Long) {
    		this.flow = flow;
    		this.fromId = id;
    	}
    }

    private static class ValueMessage {
    	// val excess:Long;
    	def this(){
    		excess=0;
    		height=0;
    		id=0;
    	}
    	val excess:Double;
    	val height:Long;
    	val id:Long;
    	// def this(e:Long, h:Long, i:Long) {
    	def this(excess:Double, height:Long, id:Long) {
    		this.excess = excess; 
    		this.height = height;
    		this.id  = id;
    	}
    }
    
    private static class MFEdge {
    	def this(){}
    	var capacity:Double;
    	var flow:Double;
    	var fromId:Long;
    	var toId:Long;
    	var index:Long;
    	var fromExcess:Double;
    	var fromHeight:Long;
    	var toExcess:Double;
    	var toHeight:Long;
    	private def this(val capacity:Double) {
    		this.capacity = capacity;
    	}
    	private def setVertexId(fromId:Long, toId:Long, index:Long) {
    		this.fromId = fromId;
    		this.toId = toId;
    		this.index = index;
    	}
    	private def setFromExcess(fromExcess:Double) {
    		this.fromExcess = fromExcess;
    	}
    	private def setToExcess(toExcess:Double){
    		this.toExcess = toExcess;
    	}
    	private def setFromHeight(fromHeight:Long) {
    		this.fromHeight = fromHeight;
    	}
    	private def setToHeight(toHeight:Long){
    		this.toHeight = toHeight;
    	}
    	private def setFlow(flow:Double){
    		this.flow = flow;
    	}
    }

    private static class MFVertex {
    	var excess:Double;
    	var height:Long;
    	var isExcessNonZero:Boolean;
    	public def this() {
    		excess = 0.0;
    		height = 0L;
    		isExcessNonZero = false;
    	}
    	def setExcess(v:Double) {
    		excess = v;
    	}
    	def setHeight(v:Long) {
    		height = v;	
    	}
    	def setIsExcessNonZero(v:Boolean) {
    		isExcessNonZero = v;
    	}
    }
    private static def execute(param:MaxFlow, matrix:DistSparseMatrix[Long], edgeValue :DistMemoryChunk[Double], sourceVertexId:Long, sinkVertexId:Long): Result {
    	val team = param.team;
    	val weights = param.weights;
    	val recursionLimit = param.recursionLimit;
    	val eps = param.eps;
    	val sw = Config.get().stopWatch();
    	
    	/// sw.lap("UpdateInEdge");
    	@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Update In Edge:"); }
    	
    	
    	val xpregel = new XPregelGraph[MFVertex, MFEdge](matrix);
    	
    	team.placeGroup().broadcastFlat(() => {
    		val src = edgeValue();
    		val dst = xpregel.edgeValues();
    		Parallel.iter(dst.range(), (tid :Long, r :LongRange) => {
    			for(i in r)
    				dst(i) = new MFEdge(src(i));
    		});
    	});

    	val start_time = System.currentTimeMillis();

    	xpregel.updateInEdgeAndValue();
    	
    	//step 1 : set edge information
    	xpregel.once((ctx :VertexContext[MFVertex, MFEdge, Byte, Byte]) => {
    		val outEdgesId = ctx.outEdgesId();
    		val outEdgesValue = ctx.outEdgesValue();
    		for(i in outEdgesValue.range()) {
    			outEdgesValue(i).setVertexId( ctx.id(), outEdgesId(i), i );
    			outEdgesValue(i).setFromExcess(0);
    			outEdgesValue(i).setFromHeight(0);
    			outEdgesValue(i).setToExcess(0);
    			outEdgesValue(i).setToHeight(0);
    		}
    	});
    	
    	//step 2 : BFS from sink ( because of setting initial height )
    	xpregel.iterate[Boolean,Long](
    			(ctx :VertexContext[MFVertex, MFEdge, Boolean, Long ], messages :MemoryChunk[Boolean] ) => {

    				if(ctx.superstep()==0n) {
    					if(ctx.realId() == sourceVertexId) {
    						ctx.setVertexShouldBeActive(true);
    						ctx.voteToHalt();
    					}
    					if(ctx.realId() == ctx.dstId(sinkVertexId)) {
    						ctx.setVertexShouldBeActive(false);
    						for(i in ctx.inEdgesId().range()) 
    							ctx.sendMessage(ctx.inEdgesId()(i), true );
    					}
    				}
    				else {
    					if(messages.size()>0 && ctx.value().height==0L && ctx.realId()!=sinkVertexId) {
    						ctx.value().setHeight(ctx.superstep());
    						for(i in ctx.inEdgesId().range()) 
    							ctx.sendMessage(ctx.inEdgesId()(i) , true);
    					}
    				}
    				ctx.voteToHalt();
    			},
    			(values :MemoryChunk[Long]) => MathAppend.sum(values),
    			(superstep :Int, aggVal :Long) => (superstep >= 100) );


    	//step 3 : initialization of preflow push relabel. 
    	xpregel.iterate[FlowMessage,Long](
    			(ctx :VertexContext[MFVertex, MFEdge, FlowMessage, Long ], messages :MemoryChunk[FlowMessage ] ) => {
    				val outEdgesId = ctx.outEdgesId();
    				val outEdgesValue = ctx.outEdgesValue();
    				val vertexValue = ctx.value();
    				
    				if(ctx.superstep()==0n && ctx.realId()==sourceVertexId) {
    					for(i in outEdgesId.range()) {
    						val toId = outEdgesId(i);
    						val flow = outEdgesValue(i).capacity;
    						val mes = new FlowMessage(flow, -1);
    						outEdgesValue(i).setFlow(flow);
    						if(flow>eps)
    							ctx.sendMessage(toId, mes);
    					}
    					vertexValue.setHeight(ctx.numberOfVertices());
    					ctx.setVertexShouldBeActive(true);
    				}
    				if(ctx.superstep()==1n) {
    					// var excess:Long = ctx.value().excess;
    					var excess:Double  = ctx.value().excess;
    					for(i in messages.range()) {
    						excess += messages(i).flow;
    					}
    					vertexValue.setExcess(excess);
    					
    					ctx.setVertexShouldBeActive(true);
    				}
    				ctx.voteToHalt();
    			},
    			(values :MemoryChunk[Long]) => MathAppend.sum(values),
    			(superstep :Int, aggVal :Long) => (superstep >= 1) );

    	
    	val flowNum: GlobalRef[Cell[Double]] = new GlobalRef[Cell[Double]](new Cell[Double](0));
    	var recursion:Long = 1;
    	while(recursion<=recursionLimit) {
    		if(recursion == recursionLimit)
    			throw new Exception("Recursion is very big. Check recursionLimit.");
    		recursion++;
    		val currentRecursion = recursion;
    		//step 4 : main iteration of preflow push relavel
    		// changing neighbor vertex and edge information

    		xpregel.updateInEdgeAndValue();
    		xpregel.iterate[ValueMessage,Long](
    				(ctx :VertexContext[MFVertex, MFEdge, ValueMessage, Long ], messages :MemoryChunk[ValueMessage ] ) => {
    					val outEdgesValue = ctx.outEdgesValue();
    					val inEdgesValue = ctx.inEdgesValue();
    					val vertexValue = ctx.value();
    					if(ctx.superstep()==0n) {
    						ctx.setVertexShouldBeActive(ctx.value().excess > eps);
    						
    						if(ctx.realId() == sinkVertexId) {
    							/// sw.lap("CURRENT FLOW     " + currentRecursion + "    "  + ctx.value().excess);
    							if(flowNum.home==here) {
    								flowNum()() = ctx.value().excess;
    							}
    						}
    						val goNext = vertexValue.isExcessNonZero;
    						{
    							vertexValue.setIsExcessNonZero(false);
    						}
    						if(goNext) {
    							ctx.setVertexShouldBeActive(true);
    							return ;
    						}
    						
    						for(i in outEdgesValue.range())  {
    							outEdgesValue(i).setFromExcess(vertexValue.excess);
    							outEdgesValue(i).setFromHeight(vertexValue.height);
    						}

    						for(i in inEdgesValue.range()) {
    							val toId = inEdgesValue(i).fromId;    		
    							val edgeId = inEdgesValue(i).index;
    							val mes = new ValueMessage(vertexValue.excess, vertexValue.height, edgeId);
    							ctx.sendMessage(toId, mes);
    						}
    						
    						
    					}
    					if(ctx.superstep()==1n) {
    						var excess:Double = ctx.value().excess;
    						for(i in messages.range()) {
    							val mes = messages(i);
    							outEdgesValue(mes.id).setToExcess(mes.excess);
    							outEdgesValue(mes.id).setToHeight(mes.height);
    						}
    					}
    					if(ctx.realId() == sourceVertexId || ctx.realId() == sinkVertexId)
    						ctx.setVertexShouldBeActive(false);
    					ctx.voteToHalt();
    				},
    				(values :MemoryChunk[Long]) => MathAppend.sum(values),
    				(superstep :Int, aggVal :Long) => (superstep >= 1) );
    		
    		xpregel.updateInEdgeAndValue();
    		
    		// step 5 : Excessing vertex determine where flowing to and how volume flow have.
    		if(recursion%10!=0L) {
//    			sw.lap("recursion = " + recursion);
    			val updatedNum: GlobalRef[Cell[Long]] = new GlobalRef[Cell[Long]](new Cell[Long](0));
    			xpregel.iterate[FlowMessage,Long](
    					(ctx :VertexContext[MFVertex, MFEdge, FlowMessage, Long ], messages :MemoryChunk[FlowMessage ] ) => {
    						
    						val outEdgesValue = ctx.outEdgesValue();
    						val inEdgesValue = ctx.inEdgesValue();
    						val vertexValue = ctx.value();
    							
    						if(ctx.superstep()==0n && ctx.value().excess>eps
    								&& ctx.realId()!=sourceVertexId && ctx.realId()!=sinkVertexId) {
    							ctx.aggregate(1);
    							// var excess:Long = ctx.value().excess;
    							var excess:Double = ctx.value().excess;
    							var haveFlow:Boolean = false;
    							var minimHeight:Long = 1000000000L ;
    							minimHeight *= minimHeight;

    							for(i in outEdgesValue.range()) {
    								if(excess<eps) break;
    								val toId = outEdgesValue(i).toId;
    								val flow = Math.min(outEdgesValue(i).capacity - outEdgesValue(i).flow, excess);
    								val toHeight = outEdgesValue(i).toHeight;
    								if(toHeight<vertexValue.height) {
    									val mes = new FlowMessage(flow ,-1);
    									excess -= flow;
    									if(flow>eps) {
    										outEdgesValue(i).setFlow(outEdgesValue(i).flow + flow);
    										ctx.sendMessage(toId, mes);
    										haveFlow = true;
    									}
    								}
    								else if(flow>eps) {
    									minimHeight = Math.min(minimHeight, toHeight);
    								}
    							}
    							for(i in inEdgesValue.range()) {
    								if(excess<eps) break;
    								val toId =  inEdgesValue(i).fromId;
    								val index = inEdgesValue(i).index;
    								val flow = Math.min(inEdgesValue(i).flow, excess);
    								val toHeight = inEdgesValue(i).fromHeight;
    								if(toHeight<vertexValue.height) {
    									val mes = new FlowMessage(flow ,index);
    									excess -= flow;
    									if(flow>eps) {
    										ctx.sendMessage(toId, mes);
    										haveFlow = true;
    									}
    								}
    								else if(flow>eps) {
    									minimHeight = Math.min(minimHeight, toHeight);
    								}
    							}
    							if(!haveFlow) {
    								vertexValue.setHeight(minimHeight+1);
    							}
    							vertexValue.setExcess(excess);

    						}
    						if(ctx.superstep()==1n) {
    							var excess:Double = ctx.value().excess;
    							for(i in messages.range()) {
    								val mes = messages(i);
    								val index = mes.fromId;
    								val flow = mes.flow;
    								if(index>=0) {
    									outEdgesValue(index).setFlow(outEdgesValue(index).flow - flow);
    									
    								}
    								excess += flow;
    							}
    							vertexValue.setExcess(excess);
    							ctx.setVertexShouldBeActive(true);
    						}

    						ctx.voteToHalt();
    					},
    					(values :MemoryChunk[Long]) => MathAppend.sum(values),
    					(superstep :Int, aggVal :Long) => {
    						if(updatedNum.home == here)
    							if(superstep==0n)
    								updatedNum()() = aggVal;
    						
    						return superstep >= 1; 
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
    									ctx.value().setIsExcessNonZero(true);
    								}
    								else ctx.setVertexShouldBeActive(false);
    							}
    						}
    					},
    					(values :MemoryChunk[Long]) => MathAppend.sum(values),
    					(superstep :Int, aggVal :Long) => (superstep >= 2) );
    		}
    	}	
    	
//    	val flows = g.retrieveEdgeAttribute[Long](csr, output);
    	val result = new Result(flowNum()());
    	val flow:Double = flowNum()();
    	sw.lap("flowVal = " + flowNum());
    	/// sw.lap("Retrieve output");
    	@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("MaxFlow Retrieve Output:"); }
    
    	return result;
    }

   
    public def execute(matrix :DistSparseMatrix[Long], edgeValue :DistMemoryChunk[Double], s:Long, t:Long): Result {
    	return execute(this, matrix, edgeValue, s, t);
    }
    
    public def execute(g :Graph, s:Long, t:Long):Result {
    	// Since graph object has its own team, we shold use graph's one.
    	this.team = g.team();	
    	val matrix = g.createDistEdgeIndexMatrix(Config.get().distXPregel(), true, true);
    	val edgeValue = g.createDistAttribute[Double](matrix, false, "weight");
    	val result = execute(this, matrix, edgeValue, s, t);
    	// result.? = g.retrieveEdgeAttribute(matrix, result.?);
    	return result;
    }
    
    
    public static def run(g :Graph, s:Long, t:Long): Result {
        return new MaxFlow().execute(g, s, t);
    }
    
    public static def run(matrix :DistSparseMatrix[Long] ,dm:DistMemoryChunk[Double], s:Long, t:Long): Result {
        return  new MaxFlow().execute(matrix, dm, s, t);
    }
}
