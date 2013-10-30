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

import org.scalegraph.api.MinimumSpanningTree;
import org.scalegraph.Config;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.graph.Graph;
import org.scalegraph.io.CSV;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.util.random.Random;

public class MinimumSpanningTreeExample {
	
	public static def main(args:Array[String](1)) {
	    
	    val config = Config.get();
	    val team = config.worldTeam();
	    val dist = config.dist2d();
	    val weightAttr = "weight";
	    val outpath = "mst-%d";
	    
	    // Generate RMAT graph
	    val scale = 10;
	    val edgeFactor = 8;
	    val rnd = new Random(2, 3);
	    val edgeList = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
	    val g = Graph.make(edgeList);
	    
	    // Generate edge weight
	    val weight = GraphGenerator.genRandomEdgeValue(scale, edgeFactor, rnd);
	    g.setEdgeAttribute[Double](weightAttr, weight);
		val result = MinimumSpanningTree.run(g);
		
		// Get selected edges
		val sources = result.source();
		val target = result.target();
		
		// Write edges
		CSV.write(outpath, new NamedDistData(["source" as String, "target"], [sources as Any, target as Any]), false);
	}
}
