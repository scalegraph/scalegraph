/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */
package test;

import org.scalegraph.Config;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.graph.Graph;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.io.CSV;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistMemoryChunk;

final class PageRankTest extends AlgorithmTest {
	public static def main(args: Rail[String]) {
		new PageRankTest().execute(args);
	}
    
    public def run(args :Rail[String], g :Graph): Boolean {
    	
    	if(args.size < 3) {
    		println("Usage: [high|low] [write|check] <path>");
    		return false;
    	}
		
    	val result :DistMemoryChunk[Double];
    	if(args(0).equals("high")) {
    		result = org.scalegraph.api.PageRank.run(g);
    	}
    	else if(args(0).equals("perf")) {
    		val matrix = g.createDistSparseMatrix[Double](
    				Config.get().distXPregel(), "weight", true, false);
    		// delete the graph object in order to reduce the memory consumption
    		g.del();
    		Config.get().stopWatch().lap("Graph construction: ");
    		val pg = new org.scalegraph.api.PageRank();
    		pg.niter = 30n;
    		pg.eps = 0.0;
    		result = pg.execute(matrix);
    	}
    	else if(args(0).equals("low")) {
    		val matrix = g.createDistSparseMatrix[Double](
    				Config.get().distXPregel(), "weight", true, false);
    		// delete the graph object in order to reduce the memory consumption
    		g.del();
    		Config.get().stopWatch().lap("Graph construction: ");
    		result = org.scalegraph.api.PageRank.run(matrix);
    	}
    	else {
    		throw new IllegalArgumentException("Unknown level parameter :" + args(0));
    	}
		
		if(args(1).equals("write")) {
			CSV.write(args(2), new NamedDistData(["pagerank" as String], [result as Any]), true);
			return true;
		}
		else if(args(1).equals("check")) {
			return checkResult(result, args(2), 0.0001);
		}
		else {
			throw new IllegalArgumentException("Unknown command :" + args(1));
		}
	}
}
