package org.scalegraph.xpregel.test;

import x10.util.Team;

import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;

public class BlondelTest {
	
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
		g.addEdges(edgeList.raw(team.placeGroup()));
		g.setEdgeAttribute[Double]("edgevalue",weigh.raw(team.placeGroup()));
		val end_init_graph = System.currentTimeMillis();
		Console.OUT.println("Init Graph: " + (end_init_graph-start_init_graph) + "ms");
		
		val csr = g.constructDistSparseMatrix(Dist2D.make2D(team, 1, team.size()), true, true);
		val xpregel = new XPregelGraph[Double, Double](team, csr);
		val edgeValue = g.constructDistAttribute[Double](csr, false, "edgevalue");
		xpregel.initEdgeValue[Double](edgeValue, (value : Double) => value);
		
		val start_time = System.currentTimeMillis();
		
		xpregel.updateInEdge();
		
		Console.OUT.println("Update In Edge: " + (System.currentTimeMillis()-start_time) + "ms");
		
		xpregel.iterate[Double,Double]((ctx :VertexContext[Double, Double, Double, Double], messages :MemoryChunk[Double]) => {
			if (ctx.superstep() == 0) {
				ctx.sendMessageToAllNeighbors(ctx.outEdgesId().size());
			}else {
				
			}
		},
		(values :MemoryChunk[Double]) => MathAppend.sum(values),
		(superstep :Int, aggVal :Double) => {
			if (here.id == 0) {
				Console.OUT.println("Large Blondel Clustering at superstep " + superstep + " = " + aggVal);
			}
			return (superstep >= 30 || aggVal < 0.0001);
		});
		
		val end_time = System.currentTimeMillis();
		
		Console.OUT.println("Finish after = " + (end_time-start_time) + " ms");
		Console.OUT.println("Finish application");
	}
}