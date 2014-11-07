package test;

import x10.util.Pair;
import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;

import org.scalegraph.Config;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.io.CSV;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MathAppend;

@NativeCPPInclude("MatrixMultiplicationNative.hpp")

/*
 * This example computes t(A)%*%A where A is adjacency matrix for the graph,
 * t(A) is a transposition of A, %*% is matrix multiplication (both notations come from R).
 */
public class MatrixMultiplication extends AlgorithmTest {
	public static def main(args: Array[String](1)) {
		new MatrixMultiplication().execute(args);
	}
	
	private static struct Message {
		public val index :MemoryChunk[Long];
		public val value :MemoryChunk[Double];
		public def this() {
			index = new MemoryChunk[Long]();
			value = new MemoryChunk[Double]();
		}
		public def this(index: MemoryChunk[Long], value: MemoryChunk[Double]) {
			this.index = index;
			this.value = value;
		}
	}
	
	private static type V = GrowableMemory[Pair[Long, Double]];
	private static type E = Double;
	private static type M = Message;
	private static type A = Double;
	
	@Native("c++", "::test::merge(#in_arr, #out_arr, #t)")
	private static native def merge(in_arr: MemoryChunk[M], out_arr: V, t: Pair[Long, Double]): void;
	
	public def run(args :Array[String](1), g :Graph): Boolean {

		if(args.size < 1) {
			println("Usage: <path>");
			return false;
		}
		
		val sw = Config.get().stopWatch();
		val csr = g.createDistSparseMatrix[E](Config.get().distXPregel(), "weight", true, false);
		sw.lap("Graph construction");
		val xpregel = XPregelGraph.make[V,E](csr);
		
		// release graph data
		g.del();

		xpregel.setLogPrinter(Console.ERR, 0);

		val NUM_SPLIT = 8;
		
		xpregel.iterate[M,A]((ctx :VertexContext[V,E,M,A], messages :MemoryChunk[M]) => {
			val ss = ctx.superstep();
			if(messages.size() > 0) {
				ctx.setValue(new V());
				merge(messages, ctx.value(), new Pair[Long,Double](-1,0));
			}
			if(ss < NUM_SPLIT) {
				val outEdgesId = ctx.outEdgesId();
				val outEdgesVal = ctx.outEdgesValue();
				for(idx in outEdgesId.range()) {
					if((outEdgesId(idx) % NUM_SPLIT) as Int == ss) {
						ctx.sendMessage(outEdgesId(idx), new Message(outEdgesId, outEdgesVal));
					}
				}
			}
		},
		(values :MemoryChunk[Double]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Double) => {
			if (here.id == 0) {
				sw.lap("PageRank at superstep " + superstep + " = " + aggVal + " ");
			}
			return superstep == NUM_SPLIT;
		});
		sw.lap("Matrix Multiplication Main Iterate");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Matrix Multiplication Main Iterate:"); }

		xpregel.once((ctx :VertexContext[V,E,Any,Any]) => {
			for(pair in ctx.value().raw()) {
				ctx.output(0, ctx.realId());
				ctx.output(1, ctx.realId(pair.first));
				ctx.output(2, pair.second);
			}
		});
		val result_i = xpregel.stealOutput[Long](0);
		val result_j = xpregel.stealOutput[Long](1);
		val result_value = xpregel.stealOutput[Double](2);
		
		sw.lap("Retrieve output");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Matrix Multiplication Retrieve Output:"); }
		
		CSV.write(args(0), new NamedDistData(["i" as String, "j", "value"], [result_i as Any, result_j, result_value]), false);
		return true;
	}
}
