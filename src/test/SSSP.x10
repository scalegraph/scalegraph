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

import org.scalegraph.test.AlgorithmTest;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.graph.Graph;
import org.scalegraph.Config;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.io.CSV;
import org.scalegraph.util.SString;
import org.scalegraph.io.NamedDistData;

public final class SSSP extends AlgorithmTest {
	public static def main(args: Array[String](1)) {
		new SSSP().execute(args);
	}
	
	public def run(args :Array[String](1), g :Graph): Boolean {
		

		if(args.size < 2) {
			println("Usage: [write|check] <path>");
			return false;
		}

		val root = g.source()()(0);
		val csr = g.createDistSparseMatrix[Double](
				Config.get().distXPregel(), "weight", true, false);
		g.del();
		Config.get().stopWatch().lap("Graph construction: ");
		
		val xpgraph = XPregelGraph.make[Double, Double](csr);

		xpgraph.initVertexValue(Double.POSITIVE_INFINITY);
		
		xpgraph.iterate[Double,Long]((ctx :VertexContext[Double, Double, Double, Long], messages :MemoryChunk[Double]) => {
			var mindist :Double = (ctx.realId() == root) ? 0.0 : Double.POSITIVE_INFINITY;
			for(i in messages.range())
				if(mindist > messages(i)) mindist = messages(i);
			// This is OK because operations on positive infinity produce sensible output.
			if(mindist < ctx.value()) {
				//Console.OUT.println("V: " + ctx.id() + " is updated: " + ctx.value() + " -> " + mindist);
				ctx.setValue(mindist);
				val outEdge = ctx.outEdgesId();
				val outEdgeValue = ctx.outEdgesValue();
				for(i in outEdge.range()) {
					ctx.sendMessage(outEdge(i), mindist + outEdgeValue(i));
				//	Console.OUT.println("SEND: " + ctx.id() + " -> " + outEdge(i) + ": " + (mindist + outEdgeValue(i)));
				}
			}
			ctx.voteToHalt();
		},
		(values :MemoryChunk[Long]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Long) => {
			if (here.id == 0) {
				Config.get().stopWatch().lap("Large SSSP: Finished superstep " + superstep);
			}
			return false;
		});
		
		Config.get().stopWatch().lap("Finished: ");

		xpgraph.once((ctx :VertexContext[Double, Double, Byte, Byte]) => {
			ctx.output(ctx.value());
		});
		val result = xpgraph.stealOutput[Double]();

		if(args(0).equals("write")) {
			CSV.write(new SString(args(1)), new NamedDistData(["sssp" as String], [result as Any]), true);
			return true;
		}
		else if(args(0).equals("check")) {
			return checkResult(result, args(1), 0.0001);
		}
		else {
			throw new IllegalArgumentException("Unknown command :" + args(0));
		}
	}
	
}
