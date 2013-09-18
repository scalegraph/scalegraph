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

final class TestBetweennessCentrality extends AlgorithmTest {
	public static def main(args: Array[String](1)) {
		new TestBetweennessCentrality().execute(args);
	}
    
	public def run(args :Array[String](1), g :Graph): Boolean {
	    
	    val bc = new BetweennessCentrality();
	    val result = bc.execute(g);
	   
	    if(args(0).equals("write")) {
	        CSV.write(args(1), new NamedDistData(["bc" as String], [result as Any]), true);
	        return true;
	    }
	    else if(args(0).equals("check")) {
	        val reference = args(1);
	        return checkResult[Double](result, reference, 0.00005D); 
	    }
	    else {
	        throw new IllegalArgumentException("Unknown command :" + args(0));
	    }
	}
}