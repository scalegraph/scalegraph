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
import x10.io.File;
import x10.io.FileReader;
import x10.io.IOException;

import org.scalegraph.test.STest;
import org.scalegraph.io.SimpleText;
import org.scalegraph.io.CSV;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.graph.Graph;
import org.scalegraph.blas.SparseMatrix;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.api.DegreeDistribution;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.util.Dist2D;
import org.scalegraph.Config;

final class TestDegreeDist extends AlgorithmTest {
	public static def main(args: Array[String](1)) {
		new TestDegreeDist().execute(args);
	}
    
	public def run(args :Array[String](1), g :Graph): Boolean {
	    
	    if(args.size < 3) {
	        println("Usage: [high|low] [write|check] <path>");
	        return false;
	    }
	    
	    var inOutdegResult: DistMemoryChunk[Long];
	    
	    if(args(0).equals("high")) {
	        inOutdegResult = new DegreeDistribution(DegreeDistribution.INOUT_DEGREE).execute(g);
	    }
	    else if(args(0).equals("low")) {
	        val sw = Config.get().stopWatch();
	        val team = g.team();
	        val outerOrInner = true;
	        val directed = false;
	        val distColumn = Dist2D.make1D(team, outerOrInner ? Dist2D.DISTRIBUTE_COLUMNS : Dist2D.DISTRIBUTE_ROWS);
	        val columnDistGraph = g.createDistEdgeIndexMatrix(distColumn, directed, outerOrInner);
	        sw.lap("Graph construction");
	        g.del();
	        inOutdegResult = DegreeDistribution.run[Long](columnDistGraph);
	        sw.lap("Degree distribution calculation");
	    }
	    else {
	        throw new IllegalArgumentException("Unknown level parameter :" + args(0));
	    }
	    
	    if(args(1).equals("write")) {
	        // CSV.write(args(1), new NamedDistData(["indeg" as String], [indegResult as Any]), true);
	        // CSV.write(args(1), new NamedDistData(["outdeg" as String], [outdegResult as Any]), true);
	        CSV.write(args(2), new NamedDistData(["inoutdeg" as String], [inOutdegResult as Any]), true);
	        return true;
	    }
	    else if(args(1).equals("check")) {
	        // return checkResult[Long](indegResult, args(1) + "/RMAT_20_INDEG", 0L) 
	        // && checkResult[Long](outdegResult, args(1) + "/RMAT_20_OUTDEG", 0L)
	        // && checkResult[Long](inOutdegResult, args(1) + "/RMAT_20_INOUTDEG", 0L);
	        return checkResult[Long](inOutdegResult, args(2) + "/RMAT_20_INOUTDEG", 0L);
	    }
	    else {
	        throw new IllegalArgumentException("Unknown command :" + args(0));
	    }
	}
}