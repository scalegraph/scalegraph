package test;

import org.scalegraph.Config;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.MathAppend;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.blas.DistSparseMatrix;
import x10.compiler.Ifdef;


import org.scalegraph.Config;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.io.impl.CSVWriter;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.util.random.Random;

// public type Vertex = Double;
public type Edge = Double;

public class BetweennessCentrality {
	
	static struct Message {
		val id :Long;
		val cost :Edge;
		
		public def this(id :Long, cost :Edge) {
			this.id = id;
			this.cost = cost;
		}		
	}
	
	static class Vertex {
		public var dist :Edge;
		public var sigma :Long;
		public var delta :Double;
		public var bc :Double;
		public var longVal :Long;
		
		public def this(dist :Edge) {
			this.dist = dist;
			this.sigma = 0L;
			this.delta = 0.0;
			this.bc = 0.0;
			this.longVal = 0;
		}		
		
		public def clear(dist :Edge) {
			this.dist = dist;
			this.sigma = 0L;
			this.delta = 0.0;
			this.bc = 0.0;
			this.longVal = 0;			
		}		
	}
	
	/** Source must be either Long, LongRange or Array[Long]. */
	public var source: Any = null;
	
	/** The name of a graph attribute to store the result, default is "bc". */
	public var resultAttrName: String = "bc";
	
	/** The name of a graph attribute that store the edge weight, default is "wegiht". */
	public var weightAttrName: String = "weight";
	
	public var directed: Boolean = true;

	public def execute(g :Graph){
		// Since graph object has its own team, we shold use graph's one.
		val team = g.team();	
		val matrix = g.createDistSparseMatrix[Edge](
				Config.get().distXPregel(), weightAttrName, directed, false);
		Config.get().stopWatch().lap("Graph construction");
		return execute(matrix);
	}
	
	private def execute(matrix :DistSparseMatrix[Edge]) {
		// define parameters as local values
		val sw = Config.get().stopWatch();
		
		val xpgraph = XPregelGraph.make[Vertex, Edge](matrix);
		xpgraph.updateInEdgeAndValue();
		
		sw.lap("updateInEdgeAndValue");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Update In Edge:"); }
		
		// Console.OUT.println("xpgraph's size is " + xpgraph.ids().numberOfGlobalVertexes() + ", sigma size is " + sigma.size());
		
		return computeFromSource(0L, xpgraph);
	}
	
	private def computeFromSource(s :Long, xpgraph: XPregelGraph[Vertex, Edge]){
		val inf = (1L << 60) as Edge;
		// val eps = 0.00001 as Double;
		
		// compute minimum distances		
		xpgraph.iterate[Message, Long]((ctx :VertexContext[Vertex, Edge, Message, Long], messages :MemoryChunk[Message]) => {
			if(ctx.superstep() == 0) {
				if(ctx.id() == s) {
					ctx.setValue(new Vertex(0));
					ctx.value().sigma = 1;
					ctx.sendMessageToAllNeighbors(new Message(ctx.id(), 0));
				} else {				
					ctx.setValue(new Vertex(inf));
				}
			} else {
				val prevDist = ctx.value().dist;
				var dist :Edge = prevDist;
				for(m :Message in messages) {
					val idx = getInEdgeVertexIndex(ctx.inEdgesId(), m.id);
					
					if (dist > m.cost + ctx.inEdgesValue()(idx)) {
						dist = m.cost + ctx.inEdgesValue()(idx);
					}
				}
				
				if(dist < prevDist) {
					if(dist == prevDist) {
						ctx.value().sigma++;
					} else {
						ctx.value().sigma = 1;
					}
					
					ctx.value().dist = dist;
					ctx.sendMessageToAllNeighbors(new Message(ctx.id(), dist));
				}
				
				ctx.voteToHalt();
			}
		},
		(values :MemoryChunk[Long]) => 0L,
		(superstep :Int, aggVal :Any) => {
			return false;
		});
		
		Console.OUT.println("ended ..........");
		
		// compute predeccesors and successors		
		xpgraph.iterate[Message, Long]((ctx :VertexContext[Vertex, Edge, Message, Long], messages :MemoryChunk[Message]) => {
			if(ctx.superstep() == 0) {
				ctx.sendMessageToAllNeighbors(new Message(ctx.id(), ctx.value().dist));
			} else {
				ctx.clearOutEdges();
				val dist = ctx.value().dist;
				for (m :Message in messages) {
					val idx = getInEdgeVertexIndex(ctx.inEdgesId(), m.id);
					if(dist == m.cost + ctx.inEdgesValue()(idx)) {
						// m.id is predeccesor
						ctx.addOutEdge(m.id, 0);
					}
				}
			}
		}
		,
		(values :MemoryChunk[Long]) => 0L,
		(superstep :Int, aggVal :Any) => {
			return superstep >= 1;
		});
		
		// compute betweeness centallity
		
		xpgraph.updateInEdge();
		
		// message's type is Double
		xpgraph.iterate[Double, Long]((ctx :VertexContext[Vertex, Edge, Double, Long], messages :MemoryChunk[Double]) => {
			if(ctx.superstep() == 0) {
				Console.OUT.println(ctx.id() + " : num predecessors = " + ctx.outEdgesId().size());
			}
			
			for(val message in messages) {
				ctx.value().delta += ctx.value().sigma * message;
				ctx.value().longVal++;
			}
			
			val numSuccessors = ctx.inEdgesId().size();
			if((ctx.superstep() > 0 || numSuccessors == 0L) && (ctx.value().longVal == numSuccessors)) {
				Console.OUT.println("sending ... ");
				ctx.sendMessageToAllNeighbors((1.0 + ctx.value().delta) / ctx.value().sigma);
			}
			
			ctx.voteToHalt();
		}
		,
		(values :MemoryChunk[Long]) => 0L,
		(superstep :Int, aggVal :Any) => {
			return false;
		});
		
		xpgraph.once((ctx :VertexContext[Vertex, Edge, Any, Any]) => {
			// ctx.output(ctx.value().getDist() + " " + ctx.value().getSigma());
			ctx.output(ctx.value().delta as Double);
			// ctx.output(sigma(ctx.id()));
		});
		val result = xpgraph.stealOutput[Double]();
		
		return result;
	}
	
	private static def getInEdgeVertexIndex(inEdgesId :MemoryChunk[Long], id :Long) {		
		var idx :Long = 0;
		for(;idx < inEdgesId.size(); idx++) {
			if(inEdgesId(idx) == id) {
				break;
			}
		}
		
		return idx;		
	}
	
	public static def main(args: Array[String]) {
		val config = Config.get();
		val team = config.worldTeam();
		val dist = config.dist2d();
		val weightAttr = "weight";
		val outputPath = "betweenness-%d";
		
		// Generate graph
		val scale = 5;
		val edgeFactor = 2;
		val rnd = new Random(2, 3);
		val edgeList = GraphGenerator.genRandomGraph(scale, edgeFactor, rnd);
		// val edgeList = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
		val g = Graph.make(edgeList);
		
		// Generate edge weight
		val weight = GraphGenerator.genRandomEdgeValue(scale, edgeFactor, rnd);
		g.setEdgeAttribute[Double](weightAttr, weight);
		
		// Call API		
		val result = (new BetweennessCentrality()).execute(g);
		
		// Write output
		val namedDistData = new NamedDistData(["pr_result" as String], [result as Any]);
		CSVWriter.write(team, outputPath, namedDistData, true);
	}
}