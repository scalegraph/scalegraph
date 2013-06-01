package org.scalegraph.xpregel.test;

import x10.util.Team;

import org.scalegraph.concurrent.Dist2D;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;

public class SSSP {
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
	
		val xpregel = g.createXPregelGraph[Long,Long]();
		xpregel.initDefaultVertexValue(Long.MAX_VALUE);
	
		val do_computation = (vertex:Vertex[Long,Long],messages:MemoryChunk[Tuple2[Long,Long]],_appcontext:XContext[Long,Long]) => {
			val _graphContext = vertex.getContext();
			if (_graphContext.getSuperStep() == 0l) {
				if (_graphContext.getVertexIdFromSrcId(vertex.getVertexId()) == 0L) {
					vertex.setValue(0L);
					val edgeids = new GrowableMemory[Long]();
					vertex.getEdgesId(true,edgeids);
					if (edgeids.size() > 0) {
						val message = vertex.getValue() + 1L;
						for(index in edgeids.range()) {
							_appcontext.putMessage(edgeids(index),message);
						}
					}
					edgeids.del();
				}else {
					vertex.voteToHalt();
				}
			}
			if (messages.size() > 0) {
				var currentValue:Long = vertex.getValue();
				for(index in messages.range()) {
					if (currentValue > messages(index).get2()) {
						currentValue = messages(index).get2();
					}
				}
				if (currentValue < vertex.getValue()) {
					vertex.setAlive();
					vertex.setValue(currentValue);
					_appcontext.aggregate(currentValue);
					val edgeids = new GrowableMemory[Long]();
					vertex.getEdgesId(true,edgeids);
					if (edgeids.size() > 0) {
						val message = vertex.getValue() + 1L;
						for(index in edgeids.range()) {
							_appcontext.putMessage(edgeids(index),message);
						}
					}
					edgeids.del();
				}else {
					vertex.voteToHalt();
				}
			}else {
				vertex.voteToHalt();
			}
		};
		val aggregator = new LongMaxAggregator();
		val start_time = System.currentTimeMillis();
		xpregel.do_computations[Long,Long](do_computation,aggregator);
		val end_time = System.currentTimeMillis();
		Console.OUT.println("Finish after =" + (end_time-start_time));
		Console.OUT.println("Finish application");
	}
	
}