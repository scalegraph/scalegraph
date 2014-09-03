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

import org.scalegraph.util.Dist2D;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;
import org.scalegraph.util.random.Random;
import org.scalegraph.graph.GraphGenerator;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;

public final class SSSP {
	public static def main(args:Array[String](1)) {
		val team = Team.WORLD;
		val scale = Int.parse(args(0));
		
		val start_read_time = System.currentTimeMillis();
		val rnd = new Random(2, 3);
		val edgeList = GraphGenerator.genRMAT(scale, 16, 0.45, 0.15, 0.15, rnd );
		val weigh = GraphGenerator.genRandomEdgeValue(scale, 16, rnd);
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Generate Graph: "+(end_read_time-start_read_time)+" ms");

		val start_init_graph = System.currentTimeMillis();
		val g = Graph.make(edgeList);
		g.setEdgeAttribute("edgevalue", weigh);
		val csr = g.createDistSparseMatrix[Double](
				Dist2D.make2D(team, 1, team.size()), "edgevalue", true, true);

		// release graph data
		g.del();
		edgeList.src.del();
		edgeList.dst.del();
		weigh.del();

		val xpregel = XPregelGraph.make[Double, Double](csr);
		
		val end_init_graph = System.currentTimeMillis();
		Console.OUT.println("Init Graph: " + (end_init_graph-start_init_graph) + " ms");
		
		val start_time = System.currentTimeMillis();

		xpregel.initVertexValue(Double.POSITIVE_INFINITY);
		
		xpregel.iterate[Double,Double]((ctx :VertexContext[Double, Double, Double, Double], messages :MemoryChunk[Double]) => {
			var mindist :Double = (ctx.realId() == 0L) ? 0.0 : Double.POSITIVE_INFINITY;
			for(i in messages.range())
				if(mindist > messages(i)) mindist = messages(i);
			// This is OK because operations on positive infinity produce sensible output.
			if(mindist < ctx.value()) {
				Console.OUT.println("V: " + ctx.id() + " is updated: " + ctx.value() + " -> " + mindist);
				ctx.setValue(mindist);
				val outEdge = ctx.outEdgesId();
				val outEdgeValue = ctx.outEdgesValue();
				for(i in outEdge.range()) {
					ctx.sendMessage(outEdge(i), mindist + outEdgeValue(i));
					Console.OUT.println("SEND: " + ctx.id() + " -> " + outEdge(i) + ": " + (mindist + outEdgeValue(i)));
				}
			}
			ctx.voteToHalt();
		},
		(values :MemoryChunk[Double]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Double) => {
			if (here.id == 0) {
				Console.OUT.println("Large SSSP: Finished superstep " + superstep + " at "
						+ (System.currentTimeMillis()-start_time) + " ms");
			}
			return (superstep >= 30); // temp
		});
		
		val end_time = System.currentTimeMillis();
		
		Console.OUT.println("Finish after = " + (end_time-start_time) + " ms");
		Console.OUT.println("Finish application");
	}
	
}
