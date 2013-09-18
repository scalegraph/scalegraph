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

import org.scalegraph.test.STest;
import org.scalegraph.Config;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.id.Type;
import org.scalegraph.io.CSV;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.util.random.Random;

final class HyperANF_Pregel extends STest {
	public static def main(args: Array[String](1)) {
		new HyperANF_Pregel().execute(args);
	}
	
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
	
	public def run(args: Array[String](1)): Boolean {
		
		val start_read_time = System.currentTimeMillis();
		val g = Graph.make(CSV.read(args(0), 
				[Type.Long as Int, Type.Long, Type.None],
				["source", "target", "weight"]));
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Read File: "+(end_read_time-start_read_time)+" millis");
		
		val start_init_graph = System.currentTimeMillis();
		val xpregel = XPregelGraph.make[MemoryChunk[Byte], Double](
				g.createDistSparseMatrix[Double](Config.get().dist1d(), "weight", true, true));
		val end_init_graph = System.currentTimeMillis();
		Console.OUT.println("Init Graph: " + (end_init_graph-start_init_graph) + "ms");
		
		val start_time = System.currentTimeMillis();
		
		xpregel.updateInEdge();
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + "ms");
		
		val niter = 30;
		
		val N:Long = g.numberOfVertices();
		val B = 7;
		val M = 1<<B;

		val alpha:Double;
		if(B==5) alpha = 0.697;
		else if(B==6) alpha = 0.769;
		else alpha = 0.7213 / (1.00+1.073/M);
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
			return superstep >= niter;
		});
		var iter:Int=0;
		while(iter<niter) {
				Console.OUT.println( (iter+1) + " "+ results()()(iter));
				iter++;
		}
	
		val end_time = System.currentTimeMillis();
		
		Console.OUT.println("Finish after =" + (end_time-start_time));
		Console.OUT.println("Finish application");
		return true;
	}
}
