package org.scalegraph.api;

import x10.util.Team;

import org.scalegraph.Config;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.MathAppend;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.blas.DistSparseMatrix;

/**
 * Calculates the Google PageRank.
 */
public final class PageRank {
	
	// Member variables are algorithm parameters.
	// Parameters are defined with default values.
	
	/** The team that provides place group the calculation will take on.
	 * If the Graph object provides different team, this variable is overridden with Graph's one. */
	public var team :Team = Config.get().worldTeam();
	/**
	 * 
	 */
	public var directed :Boolean = true;
	public var damping :Double = 0.85;
	public var eps :Double = 0.001;
	public var niter :Int = 30; // TODO: We need to use more large value.
	
	// The algorithm interface needs two execute method.
	// 1) Accept a Graph object and the name of attributes.
	// 2) Accept a sparse matrix and constructed attribute data (if required)
	// If the attribute data is optional, it shold be a member variable of the algorithm class.
	
	public def execute(g :Graph, edgeWeight :String) {
		// Since Graph object has its own team, we shold use Graph's one.
		this.team = g.team();	
		val matrix = g.createDistSparseMatrix[Double](
				Config.get().distXPregel(), edgeWeight, directed, true);
		return execute(matrix);
	}
	
	public def execute(matrix :DistSparseMatrix[Double]) = execute(this, matrix);

	// Algorithm implementation is defined as a static method to avoid
	// unexpected deep copy of 'this' object.
	
	private static def execute(param :PageRank, matrix :DistSparseMatrix[Double]) {
		// define parameters as local values
		val team = param.team;
		val damping = param.damping;
		val eps = param.eps;
		val niter = param.niter;
		
		// compute Page Rank
		val xpgraph = XPregelGraph.make[Double, Double](team, matrix);
		xpgraph.updateInEdge();
		
		xpgraph.iterate[Double,Double]((ctx :VertexContext[Double, Double, Double, Double], messages :MemoryChunk[Double]) => {
			val value :Double;
			if(ctx.superstep() == 0)
				value = 1.0 / ctx.numberOfVertices();
			else
				value = (1.0-damping) / ctx.numberOfVertices() + damping * MathAppend.sum(messages);

			ctx.aggregate(Math.abs(value - ctx.value()));
			ctx.setValue(value);
			ctx.sendMessageToAllNeighbors(value / ctx.outEdgesId().size());
		},
		(values :MemoryChunk[Double]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Double) => {
			if (here.id == 0) {
				Console.OUT.println("Large PageRank at superstep " + superstep + " = " + aggVal);
			}
			return (superstep >= niter || aggVal < eps);
		});
		
		xpgraph.once((ctx :VertexContext[Double, Double, Any, Any]) => {
			ctx.output(ctx.value());
		});
		
		return xpgraph.stealOutput[Double]();
	}

	// The algorithm interface also needs two helper method like this.
	
	public static def run(g :Graph, edgeWeight :String) = new PageRank().execute(g, edgeWeight);
	public static def run(matrix :DistSparseMatrix[Double]) = new PageRank().execute(matrix);
}