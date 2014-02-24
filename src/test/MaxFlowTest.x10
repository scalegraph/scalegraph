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
import org.scalegraph.util.MathAppend;

final class MaxFlowTest extends AlgorithmTest {
	public static def main(args: Array[String](1)) {
		new MaxFlowTest().execute(args);
	}
	
	public def run(args :Array[String](1), g :Graph): Boolean {
		if(args.size < 3) {
			println("Usage: [high|low] [write|check] <path>");
			return false;
		}
		
		
//		val result = org.scalegraph.api.MaxFlow.run(g);
		val result :org.scalegraph.api.MaxFlow.Result;
		if(args(0).equals("high")) {
			result = org.scalegraph.api.MaxFlow.run(g);
		}
		else if(args(0).equals("low")) {
//			val matrix = g.createDistSparseMatrix[Long](Config.get().distXPregel(), "weight", true, true);
			// delete the graph object in order to reduce the memory consumption

			val matrix = g.createDistEdgeIndexMatrix(Config.get().dist1d(), true, true);
			val edgeValue = g.createDistAttribute[Double](matrix, false, "weight");
			g.del();
			result = org.scalegraph.api.MaxFlow.run(matrix, edgeValue);
		}
		else {
			throw new IllegalArgumentException("Unknown level parameter :" + args(0));
		}
		
		if(args(1).equals("check")) {
			val mf = result.maxFlow;
			
			if(MathAppend.abs((mf+1.0) / ( Double.parse(args(2)) + 1.0 ) - 1.0) > 0.01   ) {
				throw new IllegalArgumentException("Answer is wrong");
			}
			return true;
		}
		else {
			throw new IllegalArgumentException("Unknown command :" + args(1));
		}
	}
	
}