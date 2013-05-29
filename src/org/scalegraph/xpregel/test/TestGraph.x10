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
public class TestGraph {
	
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
		
		val xpregel = g.createXPregelGraph[Double,Double]();
		val do_computation = (vertex:Vertex[Double,Double],messages:MemoryChunk[Tuple2[Long,Double]],_appcontext:XContext[Double,Double]) => {
			val c = 0.15;
			val _context = vertex.getContext();
			var sum : Double = 0.0;
			val superstep = _context.getSuperStep();
			
			if (superstep > 30) {
				vertex.voteToHalt();
				return;
			}
			if (messages.size() > 0) {
				for(i in messages.range()) {
					sum += messages(i).get2();
				}
			}
			val value = c / _context.getNumberOfVertices() + (1-c) * sum;
			vertex.setValue(value);
			if (vertex.getVertexId() == 0L && here.id == 0) {
				Console.OUT.println("Superstep " + superstep + ", value : " + vertex.getValue());
			}
			val message = value / vertex.getEdgesNum(true);
			val edges = new GrowableMemory[Long]();
			vertex.getEdgesId(true,edges);
			if (edges.size() > 0) {
				for(ind in edges.range()) {
					if (ind > edges.range().max) continue;
					val id = edges(ind);
					_appcontext.putMessage(id,message);
				}
			}
		};
		val start_time = System.currentTimeMillis();
		val maxAggregator = new DoubleMaxAggregator();
		xpregel.do_computations[Double,Double](do_computation,maxAggregator);
		val end_time = System.currentTimeMillis();
		Console.OUT.println("Finish after =" + (end_time-start_time));
		Console.OUT.println("Finish application");
	}
}