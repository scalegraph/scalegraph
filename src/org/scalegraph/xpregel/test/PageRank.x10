package org.scalegraph.xpregel.test;

import x10.util.Team;

import org.scalegraph.util.Dist2D;
import org.scalegraph.util.random.Random;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;

public class PageRank {
	
	public static def main(args:Array[String](1)) {
		val team = Team.WORLD;
		val scale = Int.parse(args(0));
		
		val start_read_time = System.currentTimeMillis();
		val rnd = new Random(2, 3);
		val edgeList = GraphGenerator.genRMAT(scale, 16, 0.45, 0.15, 0.15, rnd, team);
		val weigh = GraphGenerator.genRandomEdgeValue(scale, 16, rnd, team);
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Generate Graph: "+(end_read_time-start_read_time)+" ms");

		val start_init_graph = System.currentTimeMillis();
		val g = Graph.make(team, edgeList);
		g.setEdgeAttribute[Double]("edgevalue", weigh);		
		val csr = g.createDistSparseMatrix[Double](
				Dist2D.make2D(team, 1, team.size()), "edgevalue", true, true);

		// release graph data
		g.del();
		edgeList.del();
		weigh.del();

		val xpregel = XPregelGraph.make[Double, Double](team, csr);
		
		val end_init_graph = System.currentTimeMillis();
		Console.OUT.println("Init Graph: " + (end_init_graph-start_init_graph) + "ms");
		
		val start_time = System.currentTimeMillis();
		
		xpregel.updateInEdge();
		
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + "ms");
		
		xpregel.iterate[Double,Double]((ctx :VertexContext[Double, Double, Double, Double], messages :MemoryChunk[Double]) => {
			val value :Double;
			if(ctx.superstep() == 0)
				value = 1.0 / ctx.numberOfVertices();
			else
				value = 0.15 / ctx.numberOfVertices() + 0.85 * MathAppend.sum(messages);

			if (ctx.superstep() < 30) {
				ctx.aggregate(Math.abs(value - ctx.value()));
				ctx.setValue(value);
				ctx.sendMessageToAllNeighbors(value / ctx.outEdgesId().size());
			}
			else {
				ctx.voteToHalt();
			}
		},
		(values :MemoryChunk[Double]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Double) => {
			if (here.id == 0) {
				Console.OUT.println("Large PageRank at superstep " + superstep + " = " + aggVal);
			}
			return (superstep >= 30 || aggVal < 0.0001);
		});
		
		val end_time = System.currentTimeMillis();
	
		Console.OUT.println("Finish after = " + (end_time-start_time) + " ms");
		Console.OUT.println("Finish application");
	}
}
