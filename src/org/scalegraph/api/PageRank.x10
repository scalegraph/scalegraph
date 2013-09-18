package org.scalegraph.api;

import x10.util.Team;
import x10.compiler.Ifdef;

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
 * Details: TODO: write the algorithm description
 */
public final class PageRank {
	
	// The member variables are algorithm parameters.
	// The parameters are defined with the default values.
	
	/** The team that provides place group the calculation will take on.
	 * If the graph object provides different team, this variable is overridden with Graph's one. 
	 * Default: Config.get().worldTeam()
	 */
	public var team :Team = Config.get().worldTeam();
	
	/** If directed is true, the graph is considered directed graph.
	 * Default: true
	 */
	public var directed :Boolean = true;
	
	/** The damping factor ('d' in the original paper).
	 * Default: 0.85
	 */
	public var damping :Double = 0.85;
	
	/** The name of the attribute used to give edge weights for the calculation of weighted PageRank.
	 * Default: "weight"
	 */
	public var weights :String = "weight";
	
	/** The algorithm consider the calculation complete, 
	 * if the sum of PageRank value difference between iterations 
	 * becomes less than this value.
	 * Default: 0.001
	 */
	public var eps :Double = 0.001;
	
	/** Maximum number of iterations.
	 * Default: 1000
	 */
	public var niter :Int = 30; // TODO: We need to use more large value.
	
	public def this() { }
	
	// The algorithm interface needs two execute methods.
	// 1) Accept a Graph object.
	// 2) Accept a sparse matrix.

	/** Run the calculation of PageRank.
	 * @param g The graph object. 
	 */
	public def execute(g :Graph) {
		// Since graph object has its own team, we shold use graph's one.
		this.team = g.team();	
		val matrix = g.createDistSparseMatrix[Double](
				Config.get().distXPregel(), weights, directed, true);
		Config.get().stopWatch().lap("Graph construction");
		return execute(matrix);
	}
	
	/** Run the calculation of PageRank.
	 * This method is faster than run(Graph) method when it is called several times on the same graph.
	 * @param matrix 1D row distributed adjacency matrix with edge weights.
	 */
	public def execute(matrix :DistSparseMatrix[Double]) = execute(this, matrix);

	// Algorithm implementations are defined as static methods to avoid
	// unexpected deep copy of 'this' object.
	
	private static def execute(param :PageRank, matrix :DistSparseMatrix[Double]) {
		// define parameters as local values
		val team = param.team;
		val damping = param.damping;
		val eps = param.eps;
		val niter = param.niter;
		val sw = Config.get().stopWatch();
		
		// compute PageRank
		val xpgraph = XPregelGraph.make[Double, Double](matrix);
		xpgraph.updateInEdge();
		
		sw.lap("UpdateInEdge");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Update In Edge:"); }
		
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
				sw.lap("PageRank at superstep " + superstep + " = " + aggVal + " ");
			}
			return (superstep >= niter || aggVal < eps);
		});

		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("PageRank Main Iterate:"); }
		
		xpgraph.once((ctx :VertexContext[Double, Double, Any, Any]) => {
			ctx.output(ctx.value());
		});
		val result = xpgraph.stealOutput[Double]();
		
		sw.lap("Retrieve output");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("PageRank Retrieve Output:"); }
		
		return result;
	}

	// The algorithm interface also needs two helper methods like this.
	
	/** Run the calculation of PageRank with default parameters.
	 * @param g The graph object. 
	 */
	public static def run(g :Graph) = new PageRank().execute(g);
	
	/** Run the calculation of PageRank with default parameters.
	 * This method is faster than run(Graph) method when it is called several times on the same graph.
	 * @param matrix 1D row distributed adjacency matrix with edge weights.
	 */
	public static def run(matrix :DistSparseMatrix[Double]) = new PageRank().execute(matrix);
	
}
