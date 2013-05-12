package org.scalegraph.xpregel.test;

import x10.util.Team;
import org.scalegraph.util.tuple.Tuple3;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.Vertex;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.xpregel.XContext;
import org.scalegraph.xpregel.comm.DoubleMaxAggregator;
import org.scalegraph.xpregel.VertexContext;

public class PageRank {
	
	public static def main(args:Array[String](1)) {
		val team = Team.WORLD;
		val inputFormat = (s:String) => {
			val elements = s.split(",");
			return new Tuple3[Long,Long,Double](
				Long.parse(elements(0)),
				Long.parse(elements(1)),
				1.0
			);
		};
		val start_read_time = System.currentTimeMillis();
		val graphData = DistributedReader.read(team,args,inputFormat);
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Read File: "+(end_read_time-start_read_time)+" millis");
	
		val edgeList = graphData.get1();
		val weigh = graphData.get2();
		val g = new Graph(team,Graph.VertexType.Long,false);
		val start_init_graph = System.currentTimeMillis();
		g.addEdges(edgeList.data(team.placeGroup()));
		g.setEdgeAttribute[Double]("edgevalue",weigh.data(team.placeGroup()));
		val end_init_graph = System.currentTimeMillis();
		Console.OUT.println("Init Graph: " + (end_init_graph-start_init_graph) + "ms");
		
		val xpregel = g.createXPregelGraph[Double,Double]();
		val edgeValue = g.getEdgeAttribute[Double]("edgevalue").values();
		xpregel.zipEdgeValue[Double](edgeValue, (value : Double) => value);
		val start_time = System.currentTimeMillis();
		xpregel.do_computations[Double,Double]((ctx :VertexContext[Double, Double, Double, Double], messages :MemoryChunk[Double]) => {
			val value :Double;
			if(ctx.superstep() == 0)
				value = 1.0 / ctx.numberOfVertices();
			else
				value = 0.15 / ctx.numberOfVertices() + 0.85 * MathAppend.sum(messages);

			if (ctx.superstep() < 30) {
				ctx.aggregate(value - ctx.value());
				ctx.setValue(value);
				ctx.sendMessageToAllNeighbors(value / ctx.outEdges().size());
			}
			else {
				ctx.voteToHalt();
			}
			if (here.id == 0 && ctx.id() == 0L) {
				Console.OUT.println("Large PageRank at superstep " + ctx.superstep() + " = " + ctx.aggregatedValue());
			}
		},
		(values :MemoryChunk[Double]) => MathAppend.sum(values));
		val end_time = System.currentTimeMillis();
		Console.OUT.println("Finish after =" + (end_time-start_time));
		Console.OUT.println("Finish application");
	}
}