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

package org.scalegraph.api;

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
import org.scalegraph.util.random.Random;
import org.scalegraph.blas.DistSparseMatrix;


public class HyperANF {
	
	/** The team that provides place group the calculation will take on.
	 * If the graph object provides different team, this variable is overridden with Graph's one. 
	 * Default: Config.get().worldTeam()
	 */
	public var team :Team = Config.get().worldTeam();
	/** Maximum number of iterations.
	 * Default: 30
	 */
	public var niter:Int = 30;
	
	public var weights :String = "weight";
	/*
	 * calcSize Method
	 * 
	 * Calculate Approximating the Neighbourhood Function.
	 * 
	 */
	
	public static def calcSize(counter:MemoryChunk[Byte], alpha:Double) {
		var Z:Double = 0.0;
		val M:Double = counter.size();
		for(i in counter.range()) {
			Z += Math.pow(2.0, -counter(i));
		}
		Z = 1.0/Z;
		val E:Double = alpha * M * M * Z;
		
		val tmp:Double = M*5.0/2.0;
		if(E<tmp) {
			var cnt:Int =0;
			var zero:Byte = 0;
			for(i in counter.range()) 
				if(counter(i)==zero) 
					cnt++;
			if(cnt==0) return E;
			return M * Math.log(M/cnt);
		}
		var border:Double = 1.0/30.0;
		var i:Int = 0;
		while(i<32) {
			border *= 2.0;
			i ++;
		}
		if(E<=border) return E;
		border *= 30.0;
		return -border * Math.log(1.00 - E/border);
		
	}
	
	
	private static def execute(param :HyperANF, graph:Graph, matrix :DistSparseMatrix[Double]) {

		val team = param.team;
		val niter = param.niter;
		
		val blockLength = 3L;

		val csr = graph.createDistEdgeIndexMatrix(Config.get().dist1d(), true, true);
		val xpregel = new XPregelGraph[MemoryChunk[Byte], Double](csr);
		val edgeValue = graph.createDistAttribute[Double](csr, false, "weight");
		
		
		xpregel.updateInEdge();
		
		val N:Long = graph.numberOfVertices();
		val B = 7;
		val M = 1<<B;

		val alpha:Double;
		if(B==5) alpha = 0.697;
		else if(B==6) alpha = 0.769;
		else alpha = 0.7213 / (1.00+1.073/M);
		
		/*
		 *  
		 * in superstep 
		 * 		0 : initialize each node value(MemoryChunk)
		 * 		0~ : recieve messages , change my value and send my value to adjacent nodes.
		 */
		
		val results: GlobalRef[Cell[MemoryChunk[Double]]] = new GlobalRef[Cell[MemoryChunk[Double]]](new Cell[MemoryChunk[Double]](new MemoryChunk[Double](niter+2)));
		xpregel.iterate[MemoryChunk[Byte],Double](
				(ctx :VertexContext[MemoryChunk[Byte], Double, MemoryChunk[Byte], Double], messages :MemoryChunk[MemoryChunk[Byte]]) => {

					var counterB:MemoryChunk[Byte];
					if(ctx.superstep()==0) {
						val counterA = new MemoryChunk[Byte](M);
						for(i in counterA.range()) counterA(i) = 0;
						val rand = new Random(ctx.realId(ctx.id()), 1000);
						val pos = rand.nextLong()%M;
						var num:Long = rand.nextLong()+1;
						var cnt:Byte = 0;
						while(num%2==0L) {
							num /= 2;
							cnt = cnt+1;
						}
						counterA(pos) =  cnt;
						counterB = counterA;
					}
					else {
						val counterA = ctx.value();
						//maxim massages
						for(i in messages.range()) {
							for(j in counterA.range()) {
								counterA(j) = MathAppend.max(messages(i)(j) , counterA(j));
							}
						}
						counterB =counterA;

					}

					if (here.id == 0 && ctx.id() == 0L) {
						Console.OUT.println("Neighborhood function at superstep " + ctx.superstep() + " = " + ctx.aggregatedValue());
					}
					
					ctx.sendMessageToAllNeighbors(counterB);
					
					val retval = calcSize(counterB,alpha);
					//			Console.OUT.println("retval"  + ctx.realId() + " " + retval);
					ctx.aggregate(retval);
					ctx.setValue(counterB);
					
				},
				(values :MemoryChunk[Double]) => MathAppend.sum(values),
				(superstep :Int, aggVal :Double) => {
					if(results.home==here) {
						val md:MemoryChunk[Double] = results()();
						md(superstep) = aggVal;
						results()() = md;
					}
					return superstep > niter;
				});
		var iter:Int=0;
		while(iter<niter) {
			Console.OUT.println( (iter+1) + " "+ results()()(iter));
			iter++;
		}
		
		return results()();
		
	}	
	/** Run the calculation of HyperANF.
	 * This method is faster than run(Graph) method when it is called several times on the same graph.
	 * @param matrix 1D row distributed adjacency matrix with edge weights.
	 */
	public def execute(matrix :DistSparseMatrix[Double]) :MemoryChunk[Double]{
		//= execute(this, matrix);
		throw new UnsupportedOperationException();
	}
	
	/** Run the calculation of HyperANF.
	 * @param g The graph object. 
	 */
	public def execute(g :Graph) :MemoryChunk[Double]{	
		//throw new UnsupportedOperationException();
		// Since graph object has its own team, we shold use graph's one.
		this.team = g.team();	
		val matrix = g.createDistSparseMatrix[Double](
				Config.get().distXPregel(), weights, true, true);
		return execute(this,g,matrix);	
	}

	// The algorithm interface also needs two helper methods like this.
	
	/** Run the calculation of HyperANF with default parameters.
	 * @param g The graph object. 
	 */
	public static def run(g :Graph) :MemoryChunk[Double]{
		//throw new UnsupportedOperationException();
		return new HyperANF().execute(g);
	}
	
	/** Run the calculation of StronglyConnectedComponent with default parameters.
	 * This method is faster than run(Graph) method when it is called several times on the same graph.
	 * @param matrix 1D row distributed adjacency matrix with edge weights.
	 */
	public static def run(matrix :DistSparseMatrix[Double]) :MemoryChunk[Double]{
		throw new UnsupportedOperationException();
		//new StronglyConnectedComponent().execute(matrix);
	}

}
