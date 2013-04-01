package org.scalegraph.xpregel.test;
import org.scalegraph.graph.id.OnedC;
import x10.util.Team;
import org.scalegraph.util.tuple.Tuple3;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.Vertex;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.xpregel.XContext;
import org.scalegraph.xpregel.comm.DoubleMaxAggregator;

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
		g.addEdges(edgeList.data(team.placeGroup()));
		g.setEdgeAttribute[Double]("edgevalue",weigh.data(team.placeGroup()));
		val end_init_graph = System.currentTimeMillis();
		Console.OUT.println("Init Graph: " + (end_init_graph-start_init_graph) + "ms");
		val edgeValue = g.getEdgeAttribute[Double]("edgevalue").values();
		
		val xpregelgraph = g.createXPregelGraph[Tuple2[Long,Double],Double]();
		//xpregelgraph.zipEdgeValue[Double](edgeValue, (value : Double) => value);
		xpregelgraph.initDefaultEdgeValue(1.0);
		xpregelgraph.updateInEdge();
		val _pair_computation = (vertex:Vertex[Tuple2[Long,Double],Double], messages : MemoryChunk[Tuple2[Long,Long]], 
				_appcontext:XContext[Long,Double]) => {
			val _graphContext = vertex.getContext();
			if (_graphContext.getSuperStep() == 0L) {
				val inEdgeIds = new GrowableMemory[Long]();
				val numOfOutEdges = vertex.getEdgesNum(false);
				vertex.getEdgesId(false,inEdgeIds);
				if (inEdgeIds.size() > 0) {
					for(index in inEdgeIds.range()) {
						_appcontext.putMessage(inEdgeIds(index),numOfOutEdges);
					}
				}
			}else {
				
			}
		};
		
	}
}