package test;

import x10.util.Team;

import org.scalegraph.graph.Graph;
import org.scalegraph.io.CSV;
import org.scalegraph.id.Type;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.Config;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.tuple.Tuple3;

public class LouvainMethod {

	private static class Vertex {
		var selfLoopWeight :Double;
		var totalWeight :Double;
		var pairTarget: Long;
		var clusterId: Long;
	}
	
	private static type Message2 = Tuple2[Long, Double];
	private static type Message3 = Tuple3[Long, Double, Double];
	
	private static def maxDeltaQVertex(totalWeight: Double, messages: MemoryChunk[Message3]) {
		// TODO:
		// compute delta Q and returns the vertex id that maximizes delta Q
		// if none vertex increase Q, returns -1
		return messages(0).val1;
	}
	
	public static def main(args:Array[String](1)) {
		
		val team = Team.WORLD;
		
		// load graph from CSV file
		val graph = Graph.make(CSV.read(args(0), 
				[Type.Long as Int, Type.Long, Type.Double],
				true));
		// create sparse matrix
		val csr = graph.createDistSparseMatrix[Double](Config.get().dist1d(), "weight", true, true);
		
		// create xpregel instance
		val xpregel = XPregelGraph.make[Vertex, Double](csr);
		
		val numActive: GlobalRef[Cell[Long]] = new GlobalRef[Cell[Long]](new Cell[Long](0));
		
		// initialize each vertex
		xpregel.once((ctx: VertexContext[Vertex, Double, Any, Any]) => {
			ctx.value().selfLoopWeight = 0;
		});
		
		while(true) {
			// step 1 -> 2
			xpregel.iterate[Message3,Long]((ctx :VertexContext[Vertex, Double, Message3, Long], messages :MemoryChunk[Message3]) => {
				if(ctx.superstep() == 0) {
					// initialize step
					val v = ctx.value();
					v.clusterId = -1;
					
					val selfLoopWeight = ctx.value().selfLoopWeight;
					val id = ctx.id();
					val edgesId = ctx.outEdgesId();
					val edgesValue = ctx.outEdgesValue();
					
					// compute total weight
					var totalWeight :Double = selfLoopWeight;
					for(i in edgesId.range()) {
						totalWeight += edgesValue(i);
					}
					ctx.value().totalWeight = totalWeight;
					
					// send (vertex id, totalWeight, edge weight);
					for(i in edgesId.range()) {
						val target = edgesId(i);
						ctx.sendMessage(target, Message3(id, totalWeight, edgesValue(i)));
					}
				}
				else {
					if(messages.size() == 0L) {
						ctx.value().pairTarget = -1;
					}
					else {
						val pairTarget = ctx.value().pairTarget = maxDeltaQVertex(ctx.value().totalWeight, messages);
						if(pairTarget != -1L) {
							ctx.aggregate(1);
						}
					}
				}
			},
			(values :MemoryChunk[Long]) => MathAppend.sum(values),
			(superstep :Int, aggVal :Long) => {
				if(here.id == 0) {
					numActive()() = aggVal;
				}
				return (superstep == 1);
			});
			
			if(numActive()() == 0L) {
				// finish
				break;
			}

			// step 2 -> 3
			xpregel.iterate[Long,Double]((ctx :VertexContext[Vertex, Double, Long, Double], messages :MemoryChunk[Long]) => {
				val superstep = ctx.superstep();
				val pairTarget = ctx.value().pairTarget;
				if(superstep == 0) {
					if(pairTarget != -1L) {
						ctx.sendMessage(pairTarget, ctx.id());
					}
				}
				else if(superstep == 1) {
					if(messages.size() > 0) {
						var minVertex :Long = Long.MAX_VALUE;
						for(i in messages.range()) {
							if(minVertex > messages(i)) {
								minVertex = messages(i);
							}
						}
						if(pairTarget == -1L || minVertex < pairTarget) {
							// send merge request
							val id = ctx.id();
							val clusterId = ctx.value().clusterId = id;
							ctx.value().pairTarget = minVertex;
							ctx.sendMessage(minVertex, clusterId);
						}
					}
				}
				else {
					if(messages.size() > 0) { // receives merge request
						ctx.value().clusterId = messages(0);
					}
				}
			},
			null,
			(superstep :Int, aggVal :Double) => (superstep == 2));

			// step 4 -> ?
			xpregel.iterate[Message2,Double]((ctx :VertexContext[Vertex, Double, Message2, Double], messages :MemoryChunk[Message2]) => {
				if(ctx.superstep() == 0) {
					val v = ctx.value();
					val pairTarget = v.pairTarget;
					val clusterId = v.clusterId;
					
				}
				else {
					//
				}
			},
			null,
			(superstep :Int, aggVal :Double) => (superstep == 1));
		}
	}
}