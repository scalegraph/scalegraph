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

import org.scalegraph.harness.sx10Test;
import org.scalegraph.Config;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.random.Random;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;

final class XPregelPageRank extends sx10Test {
	public static def main(args: Array[String](1)) {
		new XPregelPageRank().execute(args);
	}
	
	def pagerank_opt(xpregel :XPregelGraph[Double, Double]) {
		
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
				Console.OUT.println("Large PageRank at superstep " + superstep + " = " + aggVal);
			}
			return aggVal < 0.0001;
		});
	}
	
	def pagerank_naive(xpregel :XPregelGraph[Double, Double]) {
		
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
				Console.OUT.println("Large PageRank at superstep " + superstep + " = " + aggVal);
			}
			return aggVal < 0.0001;
		});
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
		val edgeIndexMatrix = g.createDistEdgeIndexMatrix(Config.get().distXPregel(), true, true);
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
		
		xpregel.updateInEdge();
		
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + "ms");
		
		pagerank_opt(xpregel);
		
		xpregel.once((ctx :VertexContext[Double, Double, Any, Any]) => {
			ctx.output(ctx.value());
		});
		
		val pagerank = xpregel.stealOutput[Double]();
		
		val end_time = System.currentTimeMillis();
		
		Console.OUT.println("Finish after = " + (end_time-start_time) + " ms");
		
		DistributedReader.write("pagerank-%d", pagerank);
		
		Console.OUT.println("Finish application");
	}

	public def run(args: Array[String](1)): Boolean {
		val scale = Int.parse(args(0));
		val mode = (args.size >= 2) ? Int.parse(args(1)) : 0;
		val team = Team.WORLD;
		val dist = Dist2D.make2D(team, 1, team.size());
		
		val start_read_time = System.currentTimeMillis();
		val rnd = new Random(2, 3);
		val edgeList = GraphGenerator.genRMAT(scale, 16, 0.45, 0.15, 0.15, rnd);
		val rawWeight = GraphGenerator.genRandomEdgeValue(scale, 16, rnd);
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Generate Graph: "+(end_read_time-start_read_time)+" ms");

		val start_init_graph = System.currentTimeMillis();
		val g = Graph.make(edgeList);
		g.setEdgeAttribute[Double]("edgevalue", rawWeight);
		val csr = g.createDistSparseMatrix[Double](dist, "edgevalue", true, true);
		val xpregel = XPregelGraph.make[Double, Double](csr);
		
		// release graph data
		g.del();
		edgeList.del();
		rawWeight.del();
		
		xpregel.setLogPrinter(Console.OUT, 0);
		
		val end_init_graph = System.currentTimeMillis();
		Console.OUT.println("Init Graph: " + (end_init_graph-start_init_graph) + "ms");
		
		val start_time = System.currentTimeMillis();
		
		xpregel.updateInEdge();
		
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + "ms");

		if(mode == 0) pagerank_opt(xpregel);
		else if(mode == 1) pagerank_naive(xpregel);
		else pagerank_naive(xpregel);

		val end_time = System.currentTimeMillis();
		Console.OUT.println("Finish after = " + (end_time-start_time) + " ms");
		
		xpregel.once((ctx :VertexContext[Double, Double, Any, Any]) => {
			ctx.output(ctx.value());
		});
		
		val pagerank = xpregel.stealOutput[Double]();
		
		DistributedReader.write("pagerank-%d", pagerank);
		
		Console.OUT.println("Finish application");
		
		return true;
	}
}
