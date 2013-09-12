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

import org.scalegraph.harness.sx10Test;
import org.scalegraph.Config;
import org.scalegraph.util.random.Random;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.io.CSV;
import org.scalegraph.io.NamedDistData;

final class XPregelBfs extends sx10Test {
	public static def main(args: Array[String](1)) {
		new XPregelBfs().execute(args);
	}
	
	def bfs_debug(xpregel :XPregelGraph[Long, Byte]) {
		Console.OUT.println("bfs_debug");
		xpregel.iterate[Long,Byte]((ctx :VertexContext[Long, Byte, Long, Byte], messages :MemoryChunk[Long]) => {
			val pred :Long;
			if(ctx.superstep() == 0) {
				ctx.setValue(-1L);
				ctx.voteToHalt();
				if(ctx.realId() != 0L) return ;
				pred = ctx.realId();
				
				// debug print
				bufferedPrintln("Vertex " + ctx.realId() + " (ROOT)");
			}
			else {
				// debug print
				bufferedPrint("Vertex " + ctx.realId() + "\nReceived from: ");
				for(v in messages)
					bufferedPrint(v + ",");
				bufferedPrint("\n");
				
				if(ctx.value() != -1L) {
					// debug print
					flush();
					
					return ;
				}
				pred = messages(0);
			}

			ctx.setValue(pred);
			ctx.sendMessageToAllNeighbors(ctx.realId());
			
			// debug print
			bufferedPrint("Send message to: ");
			for(v in ctx.outEdgesId())
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
	}
	
	def bfs_opt(xpregel :XPregelGraph[Long, Byte]) {
		Console.OUT.println("bfs_opt");
		xpregel.iterate[Long,Byte]((ctx :VertexContext[Long, Byte, Long, Byte], messages :MemoryChunk[Long]) => {
			val pred :Long;
			if(ctx.superstep() == 0) {
				ctx.setValue(-1L);
				ctx.voteToHalt();
				if(ctx.realId() != 0L) return ;
				pred = ctx.realId();
			}
			else {
				if(ctx.value() != -1L) {
					return ;
				}
				pred = messages(0);
			}
			ctx.setValue(pred);
			ctx.sendMessageToAllNeighbors(ctx.realId());
		},
		null, // aggregator
		null, // combiner
		(superstep :Int, aggVal :Byte) => {
			if (here.id == 0) {
				println("BFS XPregel ITERATE");
			}
			return false;
		});
	}
	
	def bfs_naive(xpregel :XPregelGraph[Long, Byte]) {
		Console.OUT.println("bfs_naive");
		xpregel.iterate[Long,Byte]((ctx :VertexContext[Long, Byte, Long, Byte], messages :MemoryChunk[Long]) => {
			val pred :Long;
			if(ctx.superstep() == 0) {
				ctx.setValue(-1L);
				ctx.voteToHalt();
				if(ctx.realId() != 0L) return ;
				pred = ctx.realId();
			}
			else {
				if(ctx.value() != -1L) {
					return ;
				}
				pred = messages(0);
			}
			ctx.setValue(pred);
			
			val outEdges = ctx.outEdgesId();
			for(i in outEdges.range())
				ctx.sendMessage(outEdges(i), ctx.realId());
		},
		null, // aggregator
		null, // combiner
		(superstep :Int, aggVal :Byte) => {
			if (here.id == 0) {
				println("BFS XPregel ITERATE");
			}
			return false;
		});
	}

	public def run(args: Array[String](1)): Boolean {
		val scale = Int.parse(args(0));
		val mode = (args.size >= 2) ? Int.parse(args(1)) : 0;
		val start_read_time = System.currentTimeMillis();
		val rnd = new Random(2, 3);
		val edgeList = GraphGenerator.genRMAT(scale, 16, 0.45, 0.15, 0.15, rnd);
		//val rawWeight = GraphGenerator.genRandomEdgeValue(scale, 16, rnd);
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Generate Graph: "+(end_read_time-start_read_time)+" ms");

		val start_init_graph = System.currentTimeMillis();
		val g = Graph.make(edgeList);
		val edgeIndexMatrix = g.createDistEdgeIndexMatrix(Config.get().distXPregel(), true, true);
		val xpregel = new XPregelGraph[Long, Byte](edgeIndexMatrix);
		val end_init_graph = System.currentTimeMillis();
		Console.OUT.println("Init Graph: " + (end_init_graph-start_init_graph) + "ms");

		xpregel.setLogPrinter(Console.OUT, 0);
		
		val start_time = System.currentTimeMillis();
		
		xpregel.updateInEdge();
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + "ms");

		if(mode == 0) bfs_opt(xpregel);
		else if(mode == 1) bfs_debug(xpregel);
		else bfs_naive(xpregel);
		
		val end_time = System.currentTimeMillis();
		
		val bfs_time = end_time - start_time;
		val gteps = (1L << scale) * 16.0 / bfs_time / 1000000000.0;
		Console.OUT.println("Finish after = " + bfs_time + " ms (" + gteps + " GTEPS)");

		xpregel.once((ctx :VertexContext[Long, Byte, Any, Any]) => {
			ctx.output(ctx.value());
		});
		val pred = xpregel.stealOutput[Long]();
		CSV.write("pred-%d", new NamedDistData(["bfs pred" as String], [pred as Any]),true);
		
		Console.OUT.println("Finish application");
		return true;
	}
}
