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

import x10.compiler.Ifdef;

import org.scalegraph.Config;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.util.random.Random;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.io.CSV;
import org.scalegraph.io.NamedDistData;

final class XPregelBfs extends AlgorithmTest {
	public static def main(args: Rail[String]) {
		new XPregelBfs().execute(args);
	}
	
	def bfs_debug(xpregel :XPregelGraph[Long, Byte], root :Long) {
		val sw = Config.get().stopWatch();
		
		xpregel.updateInEdge();
		sw.lap("Update In Edge");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Update In Edge:"); }
		
		xpregel.iterate[Long,Byte]((ctx :VertexContext[Long, Byte, Long, Byte]) => {
			val pred :Long;
			if(ctx.superstep() == 0n) {
				ctx.setValue(-1L);
				ctx.voteToHalt();
				if(ctx.realId() != root) return ;
				pred = ctx.realId();
				
				// debug print
				bufferedPrintln("Vertex " + ctx.realId() + " (ROOT)");
			}
			else {
				if(ctx.value() != -1L) {
					return ;
				}
				pred = ctx.iterator().next();
				
				// debug print
				bufferedPrint("Vertex " + ctx.realId() + "\nReceived from: ");
				bufferedPrint(pred + ",");
				for(v in ctx)
					bufferedPrint(v + ",");
				bufferedPrint("\n");
			}

			ctx.setValue(pred);
			ctx.sendMessageToAllNeighbors(ctx.realId());
			
			// debug print
			bufferedPrint("Send message to: ");
			for(v in ctx.outEdges())
				bufferedPrint(ctx.realId(v) + ",");
			bufferedPrint("\n");
			flush();
		},
		null, // aggregator
		null, // combiner
		(superstep :Int, aggVal :Byte) => {
			if (here.id == 0) {
				println("BFS XPregel ITERATE");
			}
			return false;
		});
		sw.lap("BFS Main Iterate (debug)");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("BFS Main Iterate (debug):"); }
	}
	
	def bfs_opt(xpregel :XPregelGraph[Long, Byte], root :Long, diropt :Boolean) {
		val sw = Config.get().stopWatch();
		
		xpregel.setEnableDirectionOptimization(diropt);
		xpregel.updateInEdge();
		sw.lap("Update In Edge");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Update In Edge:"); }
		
		xpregel.iterate[Long,Byte]((ctx :VertexContext[Long, Byte, Long, Byte]) => {
			val pred :Long;
			if(ctx.superstep() == 0n) {
				ctx.setValue(-1L);
				ctx.voteToHalt();
				if(ctx.realId() != root) return ;
				pred = ctx.realId();
			}
			else {
				if(ctx.value() != -1L) {
					return ;
				}
				pred = ctx.iterator().next();
			}
			ctx.setValue(pred);
			ctx.sendMessageToAllNeighbors(ctx.realId());
		},
		null, // aggregator
		null, // combiner
		(superstep :Int, aggVal :Byte) => {
			if (here.id == 0) {
				sw.lap("BFS at superstep " + superstep + " = " + aggVal + " ");
			}
			return false;
		});
		sw.lap("BFS Main Iterate (opt)");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("BFS Main Iterate (opt):"); }
	}
	
	def bfs_naive(xpregel :XPregelGraph[Long, Byte], root :Long) {
		val sw = Config.get().stopWatch();
		xpregel.iterate[Long,Byte]((ctx :VertexContext[Long, Byte, Long, Byte]) => {
			val pred :Long;
			if(ctx.superstep() == 0n) {
				ctx.setValue(-1L);
				ctx.voteToHalt();
				if(ctx.realId() != root) return ;
				pred = ctx.realId();
			}
			else {
				if(ctx.value() != -1L) {
					return ;
				}
				pred = ctx.iterator().next();
			}
			ctx.setValue(pred);
			
			// val outEdges = ctx.outEdgesId();
			// for(i in outEdges.range())
			// 	ctx.sendMessage(outEdges(i), ctx.realId());
			for (id in ctx.outEdges()) {
				ctx.sendMessage(id, ctx.realId());
			}
		},
		null, // aggregator
		null, // combiner
		(superstep :Int, aggVal :Byte) => {
			if (here.id == 0) {
				sw.lap("BFS at superstep " + superstep + " = " + aggVal + " ");
			}
			return false;
		});
		sw.lap("BFS Main Iterate (naive)");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("BFS Main Iterate (naive):"); }
	}
	
	def bfs_combine(xpregel :XPregelGraph[Long, Byte], root :Long) {
		val sw = Config.get().stopWatch();
		xpregel.iterate[Long,Byte]((ctx :VertexContext[Long, Byte, Long, Byte]) => {
			val pred :Long;
			if(ctx.superstep() == 0n) {
				ctx.setValue(-1L);
				ctx.voteToHalt();
				if(ctx.realId() != root) return ;
				pred = ctx.realId();
			}
			else {
				if(ctx.value() != -1L) {
					return ;
				}
				pred = ctx.iterator().next();
			}
			ctx.setValue(pred);
			
			// val outEdges = ctx.outEdgesId();
			// for(i in outEdges.range())
			// 	ctx.sendMessage(outEdges(i), ctx.realId());
			for (id in ctx.outEdges()) {
				ctx.sendMessage(id, ctx.realId());
			}
		},
		null, // aggregator
		(messages :MemoryChunk[Long]) => messages(0),
		(superstep :Int, aggVal :Byte) => {
			if (here.id == 0) {
				sw.lap("BFS at superstep " + superstep + " = " + aggVal + " ");
			}
			return false;
		});
		sw.lap("BFS Main Iterate (combine)");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("BFS Main Iterate (combine):"); }
	}

	public def run(args :Rail[String], g :Graph): Boolean {

		if(args.size < 3) {
			println("Usage: [naive|opt|combin|debug] [write|check] <path>");
			return false;
		}
		val sw = Config.get().stopWatch();
		val numEdges = g.numberOfEdges();
		val root = g.source()()(0);
		val edgeIndexMatrix = g.createDistEdgeIndexMatrix(Config.get().distXPregel(), false, false);
		sw.lap("Graph construction");
		val xpregel = new XPregelGraph[Long, Byte](edgeIndexMatrix);
		
		// release graph data
		g.del();

		xpregel.setLogPrinter(Console.ERR, 0n);

		if(args(0).equals("naive")) {
			bfs_naive(xpregel, root);
		}
		else if(args(0).equals("optopt")) {
			bfs_opt(xpregel, root, true);
		}
		else if(args(0).equals("opt")) {
			bfs_opt(xpregel, root, false);
		}
		else if(args(0).equals("combine")) {
			bfs_combine(xpregel, root);
		}
		else if(args(0).equals("debug")) {
			bfs_debug(xpregel, root);
		}
		else {
			throw new IllegalArgumentException("Unknown version parameter :" + args(0));
		}
		
		bufferedPrintln("Root: " + root + ", # of edges: " + numEdges);

		xpregel.once((ctx :VertexContext[Long, Byte, Byte, Byte]) => {
			ctx.output(ctx.value());
		});
		val result = xpregel.stealOutput[Long]();
		
		sw.lap("Retrieve output");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("BFS Retrieve Output:"); }
		
		if(args(1).equals("write")) {
			CSV.write(args(2), new NamedDistData(["bfstree" as String], [result as Any]), true);
			return true;
		}
		else if(args(1).equals("check")) {
			return checkResult[Long](result, args(2), 0L);
		}
		else {
			throw new IllegalArgumentException("Unknown command :" + args(1));
		}
	}
}
