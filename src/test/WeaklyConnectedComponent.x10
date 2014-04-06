package test;

import x10.util.Team;

import org.scalegraph.test.AlgorithmTest;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.graph.Graph;
import org.scalegraph.Config;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.io.CSV;
import org.scalegraph.util.SString;
import org.scalegraph.io.NamedDistData;

public class WeaklyConnectedComponent extends AlgorithmTest {
	public static def main(args: Array[String](1)) {
		new WeaklyConnectedComponent().execute(args);
	}
	
	public def run(args :Array[String](1), g :Graph): Boolean {
		

		if(args.size < 2) {
			println("Usage: [write|check] <path>");
			return false;
		}
		
		val csr = g.createDistSparseMatrix[Double](
				Config.get().distXPregel(), "weight", false, false);
		g.del();
		Config.get().stopWatch().lap("Graph construction: ");
		
		val xpgraph = XPregelGraph.make[Long, Double](csr);
		xpgraph.updateInEdge();
		
		xpgraph.iterate[Long,Long]((ctx :VertexContext[Long, Double, Long, Long], messages :MemoryChunk[Long]) => {
			val minid :Long;
			if(ctx.superstep() == 0) {
				ctx.setValue(Long.MAX_VALUE);
				minid = ctx.realId();
			}
			else
				minid = Math.min(MathAppend.min(messages), ctx.value());

			if(minid < ctx.value()) {
				//Console.OUT.println("V: " + ctx.id() + " is updated: " + ctx.value() + " -> " + mindist);
				ctx.setValue(minid);
				ctx.sendMessageToAllNeighbors(minid);
			}
			ctx.voteToHalt();
		},
		(values :MemoryChunk[Long]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Long) => {
			if (here.id == 0) {
				Config.get().stopWatch().lap("Large SSSP: Finished superstep " + superstep);
			}
			return false;
		});
		
		Config.get().stopWatch().lap("Finished: ");

		xpgraph.once((ctx :VertexContext[Long, Double, Any, Any]) => {
			ctx.output(ctx.value());
		});
		val result = xpgraph.stealOutput[Long]();

		if(args(0).equals("write")) {
			CSV.write(args(1), new NamedDistData(["wcc" as String], [result as Any]), true);
			return true;
		}
		else if(args(0).equals("check")) {
			return checkResult(result, args(1), 0L);
		}
		else {
			throw new IllegalArgumentException("Unknown command :" + args(0));
		}
	}
}