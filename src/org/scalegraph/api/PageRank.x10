package org.scalegraph.api;

import x10.util.Team;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.MathAppend;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.blas.DistSparseMatrix;

public final class PageRank {
	
	public static def run(g :Graph, edgeWeight :String) :DistMemoryChunk[Double] {
		val team = g.team();	
		val matrix = g.createDistSparseMatrix[Double](
				Dist2D.make2D(team, 1, team.size()), edgeWeight, true, true);
		return run(team, matrix);
	}
	
	public static def run(team :Team, matrix :DistSparseMatrix[Double]) :DistMemoryChunk[Double] {
		val xpgraph = XPregelGraph.make[Double, Double](team, matrix);
		xpgraph.updateInEdge();
		return run(xpgraph);
	}

	public static def run(xpgraph :XPregelGraph[Double, Double]) {
		xpgraph.iterate[Double,Double]((ctx :VertexContext[Double, Double, Double, Double], messages :MemoryChunk[Double]) => {
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
			return (superstep >= 30 || aggVal < 0.0001);
		});
		
		xpgraph.once((ctx :VertexContext[Double, Double, Any, Any]) => {
			ctx.output(ctx.value());
		});
		
		return xpgraph.stealOutput[Double]();
	}
}