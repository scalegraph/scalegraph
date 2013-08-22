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

import x10.util.Team;

import org.scalegraph.harness.sx10Test;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;

final class PageRankTest extends sx10Test {
	public static def main(args: Array[String](1)) {
		new PageRankTest().execute(args);
	}
    
    public def run(args :Array[String](1)): Boolean {
        val arg = new Array[String](1);
        arg(0) = "/nfs/data0/testdata/WEIGHTED_COMMA_SPLIT_RMAT_SCALE_20";
        entry(arg);
        
        return true;
    }
	
	public def entry(args :Array[String]) {
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
		
		val g = Graph.make(edgeList.raw(team.placeGroup()));
		g.setEdgeAttribute[Double]("weight", weigh.raw(team.placeGroup()));		
		
		val result = org.scalegraph.api.PageRank.run(g);
		
		DistributedReader.write("pagerank-%d", team, result);
	}
}
