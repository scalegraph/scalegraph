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

package example;

import x10.util.Team;

import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.api.MinimumSpanningTree;

public class MinimumSpanningTreeExample {
	
	public static def main(args:Array[String](1)) {
		val team = Team.WORLD;
		val inputFormat = (s:String) => {
			val elements = s.split(" ");
			return new Tuple3[Long,Long,Double](
				Long.parse(elements(0)),
				Long.parse(elements(1)),
				Double.parse(elements(2))
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
		g.setEdgeAttribute[Double]("weight",weigh.raw(team.placeGroup()));
		val end_init_graph = System.currentTimeMillis();
		Console.OUT.println("Init Graph: " + (end_init_graph-start_init_graph) + "ms");
		
		val result = MinimumSpanningTree.run(g);
		DistributedReader.write("out-%d", team, result.first, result.second);
	}
}
