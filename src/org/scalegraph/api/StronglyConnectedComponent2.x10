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
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.MathAppend;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.util.*;

/**
 * Calculates the Strongly Connected Component.
 * We inplement Orzan's coloring algorithm to solve Strongly Connected Component (SCC) Problem. 
 * ("coloring" is not official name. Detail algorithm is written in following pdf. )
 * http://www.cs.vu.nl/en/Images/SM%20Orzan%205-11-2004_tcm75-258582.pdf
 * 
 * First, we describe input and output.
 * input : directed graph which has edge with no weight.
 * output : this program output two files.
 * 	   we define "leader vertex" of a SCC. This vertex is minimal index in a group of SCC.
 *     1. for all vertex v, output leader vertex of SCC which contains v.
 *     2. for all vertex v, output 
 *         the number of vertexes in SCC which contains v (if v is leader vertex of any SCC)
 *         0 (if v is not leader vertex)
 *  
 * In following, we describe detail algorithm.
 * 
 * 1. Each vertexes send messages to neighbor vertex along edge with forward direction. 
 *    These messages have information of minimal index of vertex.
 *    And, when a vertex receive messages, if (message's index) < (the index that the vertex has) ,
 *    update index the vertex have and send message this information.
 *    (For example, there are 3 vertexes 1->2->3, initially vertex 1 has 1, vertex 2 has 2, vertex 3 has 3.  
 *     After sending messages and some operations, vertex 1 and 2 have 1, vertex 3 has 2. 
 *         (vertex 1,2,3 send messages, and update in vertex 2 and 3)
 *     More one operation, all vertexes has 1.
 *         (vertex 2,3 send messages, and update in vertex 3.))
 * 2. We do like operation No.1, but send messages along edge not with forward direction but with backward direction.
 * 3. Each vertex has information of Int with two directions.
 *    For all vertex, if these two numbers are equal, the operation is ended.
 *    if not, we continue operation recursively
 *    (Also, if neighbor vertexes v,u have different pairs, these vertex belong different SCC.
 *     So, we can split graph some region.).
 *   
 */
public final class StronglyConnectedComponent2 {
	
	// The member variables are algorithm parameters.
	// The parameters are defined with the default values.
	
	/** The team that provides place group the calculation will take on.
	 * If the graph object provides different team, this variable is overridden with Graph's one. 
	 * Default: Config.get().worldTeam()
	 */
	public var team :Team = Config.get().worldTeam();
	/** If directed is true, the graph is considered directed graph.
	 * Default: true
	 */
	public var directed :Boolean = true;
	
	/** The name of the attribute used to give edge weights for the calculation of weighted PageRank.
	 * Default: "weight"
	 */
	public var weights :String = "weight";
	
	
	/** Maximum number of iterations.
	 * Default: 1000
	 */
	public var niter :Int = 1000; // TODO: We need to use more large value.
	
	// The algorithm interface needs two execute methods.
	// 1) Accept a Graph object.
	// 2) Accept a sparse matrix.
	/**
	 * A class storing the result from StronglyConnectedComponent
	 */
	public static struct Result (
			cluster: Long,
			dmc1 :DistMemoryChunk[Long],
			dmc2 :DistMemoryChunk[Long]
	) {
		protected def this(cl: Long, dmc1 :DistMemoryChunk[Long], dmc2 :DistMemoryChunk[Long]) {
			property(cl, dmc1, dmc2);
		}
	}
	private static class SCCVertex {
		var prevFromId:Long;
		var prevToId:Long;
		var fromId:Long; 
		var toId:Long;
		var ended:Boolean;
		var numOfChild:Long;
		var parentAddress:Long;
		private def this (fromId_:Long, toId_:Long, parentAddress_:Long) {
			fromId = fromId_;
			toId = toId_;
			prevFromId = -1L;
			prevToId = -2L;
			ended = false;
			numOfChild = 0L;
			parentAddress = parentAddress_;
		}
		private def changePrev(val myId:Long) {
			prevFromId = fromId;
			prevToId = toId;
			fromId = myId;
			toId = myId;
			
		}
		private def changeFrom(fromId_:Long) {
			fromId = fromId_;
		}
		private def changeTo(toId_:Long) {
			toId = toId_;
		}
		private def changeEnd() {
			ended = true;
		}
		private def plusNumOfChild(counter : Long) {
			numOfChild += counter;
		}
		private def changePAddress(address:Long) {
			parentAddress = address;
		}	
	}
	private static struct MessageA {
		val prevFromId:Long;
		val prevToId:Long;
		val id:Long;
		val parentAddress:Long;
		val dir:Boolean;
		private def this(prevFromId_:Long, prevToId_:Long, id_:Long, parentAddress_:Long, dir_:Boolean) {
			id = id_;
			dir = dir_;
			prevFromId = prevFromId_;
			prevToId = prevToId_;
			parentAddress = parentAddress_;
		}
		
	}
	
	private static def execute(param :StronglyConnectedComponent2, matrix :DistSparseMatrix[Double]):Result {

		val maxMemo = 2000000; // new val
//		val niter:Int = 1000; // TODO : Change this value. // new val
		
		val team = param.team;
		val niter = param.niter;
		val sw = Config.get().stopWatch();
		val blockLength = 3L;

//		val csr = graph.createDistEdgeIndexMatrix(Config.get().dist1d(), true, true);
//		val xpregel = new XPregelGraph[SCCVertex, Long](matrix);		
		val xpregel = XPregelGraph.make[SCCVertex, Double](matrix);
		xpregel.updateInEdge();
		var numOfVertices:Long;
		xpregel.once((ctx :VertexContext[SCCVertex, Double, Any, Any]) => {
			val value = new SCCVertex(ctx.realId(), ctx.realId(), ctx.id());
			ctx.setValue(value);
			val ins = ctx.outEdgesId().size();
			val outs = ctx.inEdgesId().size();
			if((ins==1L && outs==0L) || (ins==0L && outs==1L)) {
				ctx.value().changeFrom(ctx.realId());
				ctx.value().changeTo(ctx.realId());
				ctx.value().changeEnd();
				ctx.value().changePAddress(ctx.id());
			}
			if(ctx.id()==0L) ;
			
		});
		var numOfCluster : Long =0;
		
		var recursion:Int = 0;
		var sum:Long = 0;
		while(recursion < niter ) {
			if(niter==recursion+1) {
				Console.OUT.println("OUT on recursion");
				
			}
			val end_hoge_time = System.currentTimeMillis();
			//			Console.OUT.println("proc time: "+(end_hoge_time-start_read_time)+" millis");
			//			Console.OUT.println("rec" + recursion);
			val curRec = recursion;
			recursion++;

			val cl: GlobalRef[Cell[Long]] = new GlobalRef[Cell[Long]](new Cell[Long](0));
			xpregel.iterate[MessageA, Long](
					(ctx :VertexContext[SCCVertex, Double, MessageA, Long ], messages :MemoryChunk[MessageA] ) => {
						var updateFrom:Boolean = false;
						var updateTo:Boolean = false;
						var updateAll:Boolean = false;
						if(ctx.superstep()==0) {
							if(curRec==0) {
								if(!ctx.value().ended)updateAll = true;
								else ctx.aggregate(1);
							}
							if(curRec>0){
				///				if(curRec%2==0) { 
									if(ctx.value().prevFromId != ctx.value().prevToId) {
										ctx.value().changePrev(ctx.realId());
				///					}
									
								}
								if(ctx.value().prevFromId != ctx.value().prevToId)  {
									updateAll = true;
								}
								else {
									// ctx.value().prevFromId == ctx.value().prevToId, 
									// so, this vertex end procession.
									if(ctx.value().prevFromId == ctx.realId() && ctx.value().ended==false) 
										ctx.aggregate(1);
									ctx.value().changeEnd();
									ctx.voteToHalt();
									return ;
								}
					///			if(curRec%2==0) {
									ctx.value().changePAddress(ctx.id());
					///			}
							}
							if(updateAll) {
								updateFrom = updateTo = true;
					///			if(curRec%2==0) if(ctx.realId() < 100) updateFrom = updateTo = true;
					///			if(curRec%2==1) if(ctx.realId() >=100) updateFrom = updateTo = true;
							}
							
						}
						//					 	Console.OUT.println(updateFrom + " "+ updateTo);
						//						Console.OUT.println(ctx.realId()+" "+ctx.value().prevFromId+" "+ctx.value().prevToId+" "+ctx.value().fromId+" "+ctx.value().toId);
						if(ctx.value().ended) {
							ctx.voteToHalt();
						}
						
						if(!ctx.value().ended) for(i in messages.range()) {
							val mes = messages(i);
							if(mes.prevFromId == ctx.value().prevFromId && mes.prevToId == ctx.value().prevToId) {
								if(mes.dir) {
									if(ctx.value().toId>mes.id)  {
										//										Console.OUT.println(ctx.value().fromId+" "+ctx.value().toId + " "+ mes.id+"a");
										ctx.value().changeTo(mes.id);
										ctx.value().changePAddress(mes.parentAddress);
										//									    Console.OUT.println(ctx.value().fromId+" "+ctx.value().toId + " "+ mes.id+"b");
										updateTo = true;
									}
								}
								else {
									if(ctx.value().fromId>mes.id) {
										//val value = ctx.value();
										ctx.value().changeFrom(mes.id);
										updateFrom = true;
									}
								}
							}
						}
						if(updateTo){
							val mes = new MessageA(ctx.value().prevFromId, ctx.value().prevToId, ctx.value().toId, ctx.value().parentAddress, true);
							for(i in ctx.outEdgesId().range()) {
								ctx.sendMessage(ctx.outEdgesId()(i), mes);
							}
						}
						if(updateFrom){
							val mes = new MessageA(ctx.value().prevFromId, ctx.value().prevToId, ctx.value().fromId,-1L, false);
							for(i in ctx.inEdgesId().range()) {
								ctx.sendMessage(ctx.inEdgesId()(i), mes);	
							}
						}
						ctx.voteToHalt();
					},

					(values :MemoryChunk[Long]) => MathAppend.sum(values),
					(superstep :Int, aggVal :Long) => {
						//						Console.OUT.println("finalCheck" + superstep + " " + aggVal);
						if(superstep==0)
							if(cl.home==here)
								cl()() = aggVal;
						return (superstep >= 1000);
					} );
			sum += cl()();
			if(recursion%2==1) {
				if(recursion>1 && sum==0L) {
					Console.OUT.println("endofRecursion" + recursion );
					break;
				}
				numOfCluster += sum;
				sum = 0;
			}
		}
//		val hoge = xpregel.placeGroup();
		val numOfVerteces = xpregel.ids().numberOfGlobalVertexes();
//		Console.OUT.println("numOfVerteces " + numOfVerteces + " " + xpregel.placeGroup().size());
		var iter:Long = 0;
		while(iter*maxMemo<2*numOfVerteces) {
			// " 2* " nenn no tame desu
			val left = iter *maxMemo;
			val right = left + maxMemo;
			xpregel.iterate[Boolean, Long](
					(ctx :VertexContext[SCCVertex, Double, Boolean,Long ], messages :MemoryChunk[Boolean] ) => {
						if(ctx.superstep()==0 && left<=ctx.realId() && ctx.realId()<right) {
							val mes = true;
							ctx.sendMessage(ctx.value().parentAddress, mes);
						}
						if(ctx.superstep()==1)
							ctx.value().plusNumOfChild(messages.size());
					},
					(values :MemoryChunk[Long]) => MathAppend.sum(values),
					(superstep :Int, aggVal :Long) => (superstep >= 2) );
			iter++;
			
		}
		xpregel.once((ctx :VertexContext[SCCVertex, Double, Any, Any]) => {
			ctx.output(0, ctx.value().prevFromId);
			ctx.output(1, ctx.value().numOfChild);
			//Console.OUT.println(ctx.realId() + " " + ctx.value().prevFromId + " " + ctx.value().numOfChild);
		});
		
		sw.lap("numOfCluster" + numOfCluster);
		val result = new Result(numOfCluster, xpregel.stealOutput[Long](0), xpregel.stealOutput[Long](1));
//		Console.OUT.println("numOfCluster" + numOfCluster);

		/// sw.lap("Retrieve output");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("HyperANF Retrieve Output:"); }
		
		return result;
	}
	
	/** Run the calculation of StronglyConnectedComponent.
	 * This method is faster than run(Graph) method when it is called several times on the same graph.
	 * @param matrix 1D row distributed adjacency matrix with edge weights.
	 */
	public def execute(matrix :DistSparseMatrix[Double]) :Result{
		return  execute(this, matrix);
		//throw new UnsupportedOperationException();
	}
	
	/** Run the calculation of StronglyConnectedComponent.
	 * @param g The graph object. 
	 */
	public def execute(g :Graph) :Result {	
//		throw new UnsupportedOperationException();
		// Since graph object has its own team, we shold use graph's one.
		this.team = g.team();	
		
		val matrix = g.createDistSparseMatrix[Double](
				Config.get().distXPregel(), weights, directed, true);

//		val matrix = g.createDistEdgeIndexMatrix(Config.get().distXPregel(), true, true);
		return execute(this, matrix);		 
	}


	// The algorithm interface also needs two helper methods like this.
	
	/** Run the calculation of StronglyConnectedComponent with default parameters.
	 * @param g The graph object. 
	 */
	public static def run(g :Graph) :Result {
		//throw new UnsupportedOperationException();
		return new StronglyConnectedComponent2().execute(g);
		
	}
	
	/** Run the calculation of StronglyConnectedComponent with default parameters.
	 * This method is faster than run(Graph) method when it is called several times on the same graph.
	 * @param matrix 1D row distributed adjacency matrix with edge weights.
	 */
	public static def run(matrix :DistSparseMatrix[Double]) :Result = new StronglyConnectedComponent2().execute(matrix);
}
