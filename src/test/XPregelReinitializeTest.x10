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

import org.scalegraph.Config;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;

final class XPregelReinitializeTest extends AlgorithmTest {
	public static def main(args: Array[String](1)) {
		new XPregelReinitializeTest().execute(args);
	}

	public def run(args :Array[String](1), g :Graph): Boolean {
		
		val sw = Config.get().stopWatch();
		val graph = g.createDistEdgeIndexMatrix(Config.get().distXPregel(), true, false);
		sw.lap("Graph construction (DistEdgeIndexMatrix)");
		val csr = g.createDistSparseMatrix[Double](Config.get().distXPregel(), "weight", true, false);
		sw.lap("Graph construction (DistSparseMatrix)");
		val xpregel = XPregelGraph.make[Double, Double](csr);
		
		// release graph data
		g.del();
		
		xpregel.setLogPrinter(Console.ERR, 0);
			
		xpregel.updateInEdge();
		sw.lap("Update In Edge");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Update In Edge:"); }
		
		// modify edge
		xpregel.iterate((ctx :VertexContext[Double, Double, Double, Long], messages :MemoryChunk[Double]) => {
			ctx.aggregate(ctx.outEdgesId().size());
			if(ctx.superstep() == 0) {
				if((ctx.realId() % 4l) == 0l) {
					ctx.clearOutEdges();
				}
			}
		},
		(values :MemoryChunk[Long]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Long) => {
			if (here.id == 0) {
				sw.lap("Total # of edges: " + aggVal + " ");
			}
			return superstep == 1;
		});
		
		// re-initialize edge
		xpregel.setGraph(graph);
		sw.lap("set graph");

		// modify edge
		xpregel.iterate((ctx :VertexContext[Double, Double, Double, Long], messages :MemoryChunk[Double]) => {
			val eid = ctx.outEdgesId();
			val eval = ctx.outEdgesValue();
			ctx.aggregate(eid.size() + eval.size());
			if(ctx.superstep() == 0) {
				if((ctx.realId() % 4l) == 0l) {
					ctx.clearOutEdges();
				}
			}
		},
		(values :MemoryChunk[Long]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Long) => {
			if (here.id == 0) {
				sw.lap("Total # of edges: " + (aggVal/2) + " ");
			}
			return superstep == 1;
		});
		
		xpregel.updateInEdgeAndValue();
		sw.lap("Update In Edge with Value");
		
		// re-initialize edge
		xpregel.setGraphAndEdgeValue(csr);
		sw.lap("set graph and value");

		// modify edge
		xpregel.iterate((ctx :VertexContext[Double, Double, Double, Long], messages :MemoryChunk[Double]) => {
			val eid = ctx.outEdgesId();
			val eval = ctx.outEdgesValue();
			ctx.aggregate(eid.size() + eval.size());
			if(ctx.superstep() == 0) {
				if((ctx.realId() % 4l) == 0l) {
					ctx.clearOutEdges();
				}
			}
		},
		(values :MemoryChunk[Long]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Long) => {
			if (here.id == 0) {
				sw.lap("Total # of edges: " + (aggVal/2) + " ");
			}
			return superstep == 1;
		});
		
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Test Main Iterate (opt):"); }
		
		return true;
	}
}
