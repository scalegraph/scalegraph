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

	public static def main(args: Array[String]) {
		val config = Config.get();
		val team = config.worldTeam();
		val dist = config.dist2d();			
			
		val weightAttr = "weight";
		val outputPath = "arm-%d";
		
		// Generate an Erdos-Renyi random graph
		val scale = 10;
		val edgeFactor = 5;
		val rnd = new Random(2, 3);
		val edgeList = GraphGenerator.genRandomGraph(scale, edgeFactor, rnd);
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
		Config.get().stopWatch().lap("Graph construction");
		return execute(matrix);
	}
		
	public def execute(matrix :DistSparseMatrix[Double]) = execute(this, matrix);
	
	private static def execute(param :EdgeARMTest, matrix :DistSparseMatrix[Double]) {
		// define parameters as local values
		val team = param.team;
		val sw = Config.get().stopWatch();
		
		Console.OUT.println("Start UpdateInEdge");
		
		// compute PageRank
		val xpgraph = XPregelGraph.make[Double, Double](matrix);
		xpgraph.updateInEdge();
		
		sw.lap("UpdateInEdge");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Update In Edge:"); }
		
		Console.OUT.println("Hello!akjvnajkdnv");
		
		xpgraph.iterate[Long, Long]((ctx :VertexContext[Double, Double, Long, Long], messages :MemoryChunk[Long]) => {
			sw.lap("superstep " + ctx.superstep());
			var sum :Long = 0;
			switch (ctx.superstep()) {
			case 0:
				ctx.setValue(ctx.numberOfOutEdges() * 10000.0);
				for (val iter = ctx.getOutEdgesIterator(); iter.hasNext(); iter.next()) {
					iter.remove();
					// Console.OUT.println("Revoving\n\n");
					// Console.OUT.println("value : " + iter.curValue());
				}				
				break;
			case 1:
				ctx.sendMessageToAllNeighbors(1L);
				break;
			case 2:
				sum = 0;
				for (m in messages) {
					sum += m;
				}
				assert (sum == messages.size());
				ctx.setValue(ctx.value() + messages.size() + 0.1);
				break;
			case 3:
				ctx.voteToHalt();
				break;
			default:
				break;					
			}
		},
		(values :MemoryChunk[Long]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Long) => {
			return false;
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
}
