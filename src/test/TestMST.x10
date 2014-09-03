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
import org.scalegraph.api.MinimumSpanningTree;
import org.scalegraph.Config;

final class TestMST extends AlgorithmTest {
	public static def main(args: Array[String](1)) {
		new TestMST().execute(args);
	}
    
	public def run(args :Array[String](1), g :Graph): Boolean {
	    
	    if(args.size < 3) {
	        println("Usage: [high|low] [write|check] <path>");
	        return false;
	    }
	    
	    var result :Graph;
	    if(args(0).equals("high")) {
	        result = MinimumSpanningTree.run(g);
	    }
	    else if(args(0).equals("low")) {
	        val team = g.team();
	        val matrix = g.createDistSparseMatrix[Double](Config.get().distXPregel(), "weight", false, true);
	        g.del();

	        result = MinimumSpanningTree.run(matrix);
	    }
	    else {
	        throw new IllegalArgumentException("Unknown level parameter :" + args(0));
	    }
	    
	    val op = args(1);
	    val ref = args(2);
	    if(op.equals("write")) {
	        CSV.write(args(2), new NamedDistData(["source" as String, "target"], [result.source() as Any, result.target()]), false);
	        return true;
	    }
	    else if(op.equals("check")) {
	        return checkResult(result.source(), result.target(), ref);
	    } else if (op.equals("nowrite")) {
	        return true;
	    }
	    else {
	        throw new IllegalArgumentException("Unknown command :" + args(0));
	    }
	}
}