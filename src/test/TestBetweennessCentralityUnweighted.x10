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
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.api.BetweennessCentrality;

final class TestBetweennessCentralityUnweighted extends AlgorithmTest {
	public static def main(args: Array[String](1)) {
		new TestBetweennessCentralityUnweighted().execute(args);
	}
    
	public def run(args :Array[String](1), g :Graph): Boolean {
	    
	    var result: DistMemoryChunk[Double];
	    
	    if (args(0).equals("high")) {
	        val bc = new BetweennessCentrality();
	        result = bc.execute(g);
	        return true;
	    } else if (args(0).equals("low")) {
	        val bc = new BetweennessCentrality();
	        bc.weighted =false;
	        bc.source = [0L];
	        bc.directed = true;
	        bc.exactBc = false;
	        result = bc.execute(g);
	        return true;
	    }  else if (args(0).equals("default")) {
	        val bc = new BetweennessCentrality();
	        result = bc.execute(g);
	    } else {
	        throw new IllegalArgumentException("Unknown level parameter :" + args(0));
	    }
	    if(args(1).equals("write")) {
	        CSV.write(args(2), new NamedDistData(["bc" as String], [result as Any]), true);
	        return true;
	    }
	    else if(args(1).equals("check")) {
	        val reference = args(2);
	        return checkResult[Double](result, reference, 0.001D); 
	    }else if(args(1).equals("nowrite")) {
	        return true;
	    }
	    else {
	        throw new IllegalArgumentException("Unknown command :" + args(0));
	    }
	}
}