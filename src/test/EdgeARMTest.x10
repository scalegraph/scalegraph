package test;

import x10.util.Team;

import org.scalegraph.Config;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.io.impl.CSVWriter;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.util.random.Random;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;

import x10.compiler.Ifdef;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;

public class EdgeARMTest {
	
	public var team :Team = Config.get().worldTeam();
	public var weights :String = "weight";
	public var directed :Boolean = true;

	public static def main(args: Array[String]) {
		val config = Config.get();
		val team = config.worldTeam();
		val dist = config.dist2d();			
			
		val weightAttr = "weight";
		val outputPath = "arm-%d";
		
		// Generate an Erdos-Renyi random graph
		val scale = 10;
		val edgeFactor = 10;
		val rnd = new Random(2, 3);
		val edgeList = GraphGenerator.genRandomGraph(scale, edgeFactor, rnd);
		// val edgeList = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
		val g = Graph.make(edgeList);
		
		// Generate edge weight
		val weight = GraphGenerator.genRandomEdgeValue(scale, edgeFactor, rnd);
		g.setEdgeAttribute[Double](weightAttr, weight);
		
		// Call API
		val arm = new EdgeARMTest();
		
		val result = arm.execute(g);
				
		// Write output
		val namedDistData = new NamedDistData(["arm_result" as String], [result as Any]);
		CSVWriter.write(team, outputPath, namedDistData, true);
	}
	
	private def execute(g :Graph) {
		// Since graph object has its own team, we shold use graph's one.
		this.team = g.team();	
		val matrix = g.createDistSparseMatrix[Double](
				Config.get().distXPregel(), weights, directed, false);
		matrix.simplify(true, true, (list :MemoryChunk[Double]) => {
			return MathAppend.sum(list);
		});
		Config.get().stopWatch().lap("Graph construction");
		return execute(matrix);
	}
		
	public def execute(matrix :DistSparseMatrix[Double]) = execute(this, matrix);
	
	private static def execute(param :EdgeARMTest, matrix :DistSparseMatrix[Double]) {
		// define parameters as local values
		val team = param.team;
		val sw = Config.get().stopWatch();
		
		val xpgraph = XPregelGraph.make[Double, Double](matrix);
		xpgraph.updateInEdge();
		
		sw.lap("UpdateInEdge");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Update In Edge:"); }
		
		sw.lap("Start Iteration");
		
		xpgraph.iterate[Long, Long]((ctx :VertexContext[Double, Double, Long, Long], messages :MemoryChunk[Long]) => {
			switch (ctx.superstep()) {
			case 0:
				sw.lap("[Step 0] NumOuts = " + ctx.numberOfOutEdges() + "(at " + ctx.id() + ")");
				ctx.setValue(ctx.numberOfOutEdges());
				ctx.sendMessageToAllNeighbors(1L);
				break;
			case 1:
				sw.lap("[Step 1-1] NumOuts = " + ctx.numberOfOutEdges() + "(at " + ctx.id() + ")");
				ctx.clearOutEdges();
				sw.lap("[Step 1-2] NumOuts = " + ctx.numberOfOutEdges() + "(at " + ctx.id() + ")");
				val numOut = ctx.numberOfOutEdges();
				assert(ctx.numberOfOutEdges() == 0L);
				assert(numOut == 0L);
				
				ctx.sendMessageToAllNeighbors(1L);
				
				break;
			case 2:
				sw.lap("[Step 2] NumOuts = " + ctx.numberOfOutEdges() + "(at " + ctx.id() + ")");
				ctx.sendMessageToAllNeighbors(1L);
				sw.lap("[Step 2-2] Diff = " + (ctx.numberOfOutEdges() - (ctx.value() as Long)) + "(at " + ctx.id() + ")");
				
				val sum_2 = MathAppend.sum(messages);
				sw.lap("[Step 2] Sum = " + sum_2 + "(at " + ctx.id() + ")");
				
				// assert(!ctx.getOutEdgesIterator().hasNext());
				
				break;
			case 3:
				sw.lap("[Step 3] NumOuts = " + ctx.numberOfOutEdges() + "(at " + ctx.id() + ")");
				val sum_3 = MathAppend.sum(messages);
				sw.lap("[Step 3] Sum = " + sum_3 + "(at " + ctx.id() + ")");
				// assert(sum_3 == 0L);
				ctx.voteToHalt();
				break;
			
			
			/** NG Test **/
			// case 0:
			// 	var i :Long = 0;
			// 	for (val iter = ctx.getOutEdgesIterator(); iter.hasNext(); iter.next(), i++) {
			// 		if (i != 0L)
			// 			iter.remove();					
			// 	}
			// 	break;
			// case 1:
			// 	sw.lap("OutEdge : " + ctx.numberOfOutEdges());
			// 	ctx.voteToHalt();
			// 	break;						
				
			/** OK Test **/
			// case 0:
			// 	val old = ctx.numberOfOutEdges();
			// 	ctx.setValue(ctx.numberOfOutEdges() * 10000.0);
			// 	ctx.clearOutEdges();
			// 	val now = ctx.numberOfOutEdges();
			// 	sw.lap("OutEdge : " + old + " => " + now);
			// 	assert(now == 0L);
			// 	ctx.voteToHalt();
			// 	break;
			
			// case 0:
			// 	val old = ctx.numberOfOutEdges();
			// 	ctx.setValue(ctx.numberOfOutEdges() * 10000.0);
			// 	for (val iter = ctx.getOutEdgesIterator(); iter.hasNext(); iter.next()) {
			// 		sw.lap("Removing...");
			// 		iter.remove();					
			// 	}				
			// 	val now = ctx.numberOfOutEdges();
			// 	sw.lap("OutEdge : " + old + " => " + now);
			// 	assert(now == 0L);
			// 	ctx.voteToHalt();
			// 	break;
				
			/****** ****/
				
			// case 1:
			// 	ctx.sendMessageToAllNeighbors(1L);
			// 	break;
			// case 2:
			// 	sum = 0;
			// 	for (m in messages) {
			// 		sum += m;
			// 	}
			// 	// assert (sum == messages.size());
			// 	ctx.setValue(ctx.value() + messages.size() + 0.1);
			// 	break;
			// case 3:
			// 	// assert(ctx.numberOfOutEdges() == 0L);
			// 	sw.lap("OutEdge : " + ctx.numberOfOutEdges());
			// 	ctx.voteToHalt();
			// 	break;
			default:
				break;					
			}
		},
		(values :MemoryChunk[Long]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Long) => {
			return false;
		});
		
		// xpgraph.updateInEdgeAndValue();
		
		// xpgraph.iterate[Long, Long]((ctx :VertexContext[Double, Double, Long, Long], messages :MemoryChunk[Long]) => {
		// 	assert(ctx.numberOfOutEdges() == 0L);
		// 	ctx.voteToHalt();
		// },
		// (values :MemoryChunk[Long]) => MathAppend.sum(values),
		// (superstep :Int, aggVal :Long) => {
		// 	return false;
		// });
		
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("PageRank Main Iterate:"); }
		
		xpgraph.once((ctx :VertexContext[Double, Double, Byte, Byte]) => {
			ctx.output(ctx.value());
		});
		val result = xpgraph.stealOutput[Double]();
		
		sw.lap("Retrieve output");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("PageRank Retrieve Output:"); }
		
		return result;
	}
}
