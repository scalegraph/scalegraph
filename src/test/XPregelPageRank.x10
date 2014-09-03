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
import x10.compiler.Ifdef;

import org.scalegraph.Config;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.random.Random;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.io.CSV;
import org.scalegraph.io.NamedDistData;

final class XPregelPageRank extends AlgorithmTest {
	public static def main(args: Array[String](1)) {
		new XPregelPageRank().execute(args);
	}
	
	def pagerank_opt(xpregel :XPregelGraph[Double, Double]) {
		val sw = Config.get().stopWatch();
		
		xpregel.updateInEdge();
		sw.lap("Update In Edge");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Update In Edge:"); }
		
		xpregel.iterate[Double,Double]((ctx :VertexContext[Double, Double, Double, Double], messages :MemoryChunk[Double]) => {
			val value :Double;
			if(ctx.superstep() == 0)
				value = 1.0 / ctx.numberOfVertices();
			else
				value = 0.15 / ctx.numberOfVertices() + 0.85 * MathAppend.sum(messages);

			ctx.aggregate(Math.abs(value - ctx.value()));
			ctx.setValue(value);
			ctx.sendMessageToAllNeighbors(value / ctx.outEdgesId().size());
		},
		(values :MemoryChunk[Double]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Double) => {
			if (here.id == 0) {
				sw.lap("PageRank at superstep " + superstep + " = " + aggVal + " ");
			}
			return aggVal < 0.001;
		});
		sw.lap("PageRank Main Iterate (opt)");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("PageRank Main Iterate (opt):"); }
	}
	
	def pagerank_opt_it30(xpregel :XPregelGraph[Double, Double]) {
		val sw = Config.get().stopWatch();
		
		xpregel.updateInEdge();
		sw.lap("Update In Edge");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Update In Edge:"); }
		
		xpregel.iterate[Double,Double]((ctx :VertexContext[Double, Double, Double, Double], messages :MemoryChunk[Double]) => {
			val value :Double;
			if(ctx.superstep() == 0)
				value = 1.0 / ctx.numberOfVertices();
			else
				value = 0.15 / ctx.numberOfVertices() + 0.85 * MathAppend.sum(messages);

			ctx.aggregate(Math.abs(value - ctx.value()));
			ctx.setValue(value);
			ctx.sendMessageToAllNeighbors(value / ctx.outEdgesId().size());
		},
		(values :MemoryChunk[Double]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Double) => {
			if (here.id == 0) {
				sw.lap("PageRank at superstep " + superstep + " = " + aggVal + " ");
			}
			return superstep == 29;
		});
		sw.lap("PageRank Main Iterate (opt)");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("PageRank Main Iterate (opt):"); }
	}
	
	def pagerank_naive(xpregel :XPregelGraph[Double, Double]) {
		val sw = Config.get().stopWatch();
		
		xpregel.iterate[Double,Double]((ctx :VertexContext[Double, Double, Double, Double], messages :MemoryChunk[Double]) => {
			val value :Double;
			if(ctx.superstep() == 0)
				value = 1.0 / ctx.numberOfVertices();
			else
				value = 0.15 / ctx.numberOfVertices() + 0.85 * MathAppend.sum(messages);

			ctx.aggregate(Math.abs(value - ctx.value()));
			ctx.setValue(value);
			
			val next = value / ctx.outEdgesId().size();
			val outEdges = ctx.outEdgesId();
			for(i in outEdges.range())
				ctx.sendMessage(outEdges(i), next);
		},
		(values :MemoryChunk[Double]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Double) => {
			if (here.id == 0) {
				sw.lap("PageRank at superstep " + superstep + " = " + aggVal + " ");
			}
			return aggVal < 0.001;
		});
		sw.lap("PageRank Main Iterate (naive)");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("PageRank Main Iterate (naive):"); }
	}
	
	def pagerank_combine(xpregel :XPregelGraph[Double, Double]) {
		val sw = Config.get().stopWatch();
		
		xpregel.iterate[Double,Double]((ctx :VertexContext[Double, Double, Double, Double], messages :MemoryChunk[Double]) => {
			val value :Double;
			if(ctx.superstep() == 0)
				value = 1.0 / ctx.numberOfVertices();
			else
				value = 0.15 / ctx.numberOfVertices() + 0.85 * MathAppend.sum(messages);

			ctx.aggregate(Math.abs(value - ctx.value()));
			ctx.setValue(value);
			
			val next = value / ctx.outEdgesId().size();
			val outEdges = ctx.outEdgesId();
			for(i in outEdges.range())
				ctx.sendMessage(outEdges(i), next);
		},
		(values :MemoryChunk[Double]) => MathAppend.sum(values),
		(messages :MemoryChunk[Double]) => MathAppend.sum(messages),
		(superstep :Int, aggVal :Double) => {
			if (here.id == 0) {
				sw.lap("PageRank at superstep " + superstep + " = " + aggVal + " ");
			}
			return aggVal < 0.001;
		});
		sw.lap("PageRank Main Iterate (combine)");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("PageRank Main Iterate (combine):"); }
	}
	
	def inputTest(args:Array[String](1)) {
		val team = Team.WORLD;
		val dist = Dist2D.make2D(team, 1, team.size());
		val scale = Int.parse(args(0));
		
		val start_read_time = System.currentTimeMillis();
		val rnd = new Random(2, 3);
		val edgeList = GraphGenerator.genRMAT(scale, 16, 0.45, 0.15, 0.15, rnd);
		val rawWeight = GraphGenerator.genRandomEdgeValue(scale, 16, rnd);
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Generate Graph: "+(end_read_time-start_read_time)+" ms");

		val start_init_graph = System.currentTimeMillis();
		val g = Graph.make(edgeList);
		g.setEdgeAttribute[Double]("edgevalue", rawWeight);
		/*
		 * val csr = g.createDistSparseMatrix[Double](dist, "edgevalue", true, true);
		 * val xpregel = XPregelGraph.make[Double, Double](team, csr);
		 */
		val edgeIndexMatrix = g.createDistEdgeIndexMatrix(Config.get().distXPregel(), true, false);
		val edgeWeight = g.createDistAttribute[Double](edgeIndexMatrix, false, "edgevalue");
		val xpregel = new XPregelGraph[Double, Double](edgeIndexMatrix);
		team.placeGroup().broadcastFlat(() => { try {
			Parallel.iter(xpregel.range(), (tid :Long, r :LongRange) => {
				val edgeIndexMatrix_ = edgeIndexMatrix();
				val edgeWeight_ = edgeWeight();
				for(i in r) {
					val w_ = edgeIndexMatrix_.attribute(edgeWeight_, i);
					val ev_ = xpregel(i).outEdgesValue();
					assert (w_.size() == ev_.size());
					MemoryChunk.copy(w_, 0L, ev_, 0L, w_.size());
				}
			});
		} catch (e :CheckedThrowable) { e.printStackTrace(); } });

		// release graph data
		g.del();
		edgeList.src.del();
		edgeList.dst.del();
		rawWeight.del();
		
		xpregel.setLogPrinter(Console.OUT, 0);
		
		val end_init_graph = System.currentTimeMillis();
		Console.OUT.println("Init Graph: " + (end_init_graph-start_init_graph) + "ms");
		
		val start_time = System.currentTimeMillis();
		
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + "ms");
		
		pagerank_opt(xpregel);
		
		xpregel.once((ctx :VertexContext[Double, Double, Any, Any]) => {
			ctx.output(ctx.value());
		});
		
		val pagerank = xpregel.stealOutput[Double]();
		
		val end_time = System.currentTimeMillis();
		
		Console.OUT.println("Finish after = " + (end_time-start_time) + " ms");
		
		CSV.write("pagerank-%d", new NamedDistData(["pagerank" as String], [pagerank as Any]),true);
		
		Console.OUT.println("Finish application");
	}

	public def run(args :Array[String](1), g :Graph): Boolean {

		if(args.size < 3) {
			println("Usage: [naive|opt|combine] [write|check] <path>");
			return false;
		}
		
		val sw = Config.get().stopWatch();
		val csr = g.createDistSparseMatrix[Double](Config.get().distXPregel(), "weight", true, false);
		sw.lap("Graph construction");
		val xpregel = XPregelGraph.make[Double, Double](csr);
		
		// release graph data
		g.del();
		
		xpregel.setLogPrinter(Console.ERR, 0);

		if(args(0).equals("naive")) {
			pagerank_naive(xpregel);
		}
		else if(args(0).equals("opt")) {
			pagerank_opt(xpregel);
		}
		else if(args(0).equals("combine")) {
			pagerank_combine(xpregel);
		}
		else if(args(0).equals("it30")) {
			pagerank_opt_it30(xpregel);
		}
		else {
			throw new IllegalArgumentException("Unknown version parameter :" + args(0));
		}
		
		xpregel.once((ctx :VertexContext[Double, Double, Any, Any]) => {
			ctx.output(ctx.value());
		});
		
		val result = xpregel.stealOutput[Double]();
		
		sw.lap("Retrieve output");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("PageRank Retrieve Output:"); }
		
		if(args(1).equals("write")) {
			CSV.write(args(2), new NamedDistData(["pagerank" as String], [result as Any]), true);
			return true;
		}
		else if(args(1).equals("check")) {
			return checkResult[Double](result, args(2), 0.0001);
		}
		else {
			throw new IllegalArgumentException("Unknown command :" + args(1));
		}
	}
}
