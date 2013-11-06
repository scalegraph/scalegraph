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

import org.scalegraph.api.DegreeDistribution;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.Config;
import org.scalegraph.io.CSV;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.graph.Graph;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.Dist2D;

final class TestDegreeDistOut extends AlgorithmTest {
	public static def main(args: Array[String](1)) {
		new TestDegreeDistOut().execute(args);
	}
    
	public def run(args :Array[String](1), g :Graph): Boolean {
	    
	    var outdegResult: DistMemoryChunk[Long];
	    val op1 = args(0);
	    val op2 = args(1);
	    val op3 = args(2);
	    
	    if(op1.equals("high")) {
	        outdegResult = new DegreeDistribution(DegreeDistribution.OUT_DEGREE).execute(g);
	    }
	    else if(op1.equals("low")) {
	        val sw = Config.get().stopWatch();
	        val team = g.team();
	        val transpose = false;
	        val directed = true;
	        //val distColumn = Dist2D.make1D(team, !transpose ? Dist2D.DISTRIBUTE_COLUMNS : Dist2D.DISTRIBUTE_ROWS);
	        val distColumn = Dist2D.make1D(team, Dist2D.DISTRIBUTE_ROWS);
	        val columnDistGraph = g.createDistEdgeIndexMatrix(distColumn, directed, transpose);
	        sw.lap("Graph construction");
	        g.del();
	        outdegResult = DegreeDistribution.run[Long](columnDistGraph);
	        sw.lap("Degree distribution calculation");
	    }
	    else {
	        throw new IllegalArgumentException("Unknown level parameter :" + op1);
	    }
	    
	    if(op2.equals("write")) {
	        CSV.write(op3, new NamedDistData(["outdeg" as String], [outdegResult as Any]), true);
	        return true;
	    }
	    else if(op2.equals("check")) {
	        return checkResult[Long](outdegResult, op3, 0L);
	    }
	    else {
	        throw new IllegalArgumentException("Unknown command :" + op2);
	    }
	}
}