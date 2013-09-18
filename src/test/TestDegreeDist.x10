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

final class TestDegreeDist extends AlgorithmTest {
	public static def main(args: Array[String](1)) {
		new TestDegreeDist().execute(args);
	}
    
	public def run(args :Array[String](1), g :Graph): Boolean {
	    
	    val indegResult = new DegreeDistribution(DegreeDistribution.IN_DEGREE).execute(g);
	    val outdegResult = new DegreeDistribution(DegreeDistribution.OUT_DEGREE).execute(g);
	    val inOutdegResult = new DegreeDistribution(DegreeDistribution.INOUT_DEGREE).execute(g);
	   
	    if(args(0).equals("write")) {
	        CSV.write(args(1), new NamedDistData(["indeg" as String], [indegResult as Any]), true);
	        CSV.write(args(1), new NamedDistData(["outdeg" as String], [outdegResult as Any]), true);
	        CSV.write(args(1), new NamedDistData(["inoutdeg" as String], [inOutdegResult as Any]), true);
	        return true;
	    }
	    else if(args(0).equals("check")) {
	        return checkResult[Long](indegResult, args(1) + "/RMAT_20_INDEG", 0L) 
	        && checkResult[Long](outdegResult, args(1) + "/RMAT_20_OUTDEG", 0L)
	        && checkResult[Long](inOutdegResult, args(1) + "/RMAT_20_INOUTDEG", 0L);
	    }
	    else {
	        throw new IllegalArgumentException("Unknown command :" + args(0));
	    }
	}
}