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

import org.scalegraph.Config;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.graph.Graph;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.io.CSV;


final class StronglyConnectedComponentTest extends AlgorithmTest{	
	public static def main(args: Array[String](1)) {
		new StronglyConnectedComponentTest().execute(args);
	}
	
	public def run(args :Array[String](1), g :Graph): Boolean {
//		val result = org.scalegraph.api.StronglyConnectedComponent.run(g);
		val result : org.scalegraph.api.StronglyConnectedComponent2.Result;
		
		if(args.size < 3) {
			println("Usage: [high|low] [write|check] <path>");
			return false;
		}
		
		if(args(0).equals("high")) {
			result = org.scalegraph.api.StronglyConnectedComponent2.run(g);
		}
		else if(args(0).equals("low")) {
//			val matrix = g.createDistSparseMatrix[Long](Config.get().distXPregel(), "weight", true, false);

			val matrix = g.createDistEdgeIndexMatrix(Config.get().dist1d(), true, false);

			// delete the graph object in order to reduce the memory consumption
			g.del();
			result = org.scalegraph.api.StronglyConnectedComponent2.run(matrix);
		}
		else {
			throw new IllegalArgumentException("Unknown level parameter :" + args(0));
		}
		
		val dmc1 = result.dmc1;
		val dmc2 = result.dmc2;
		if(args(1).equals("write")) {
			CSV.write(args(2), new NamedDistData(["sccA" as String], [dmc1 as Any]), true);
			CSV.write(args(3), new NamedDistData(["sccB" as String], [dmc2 as Any]), true);
			return true;
		}
		else if(args(1).equals("check")) {
			var ok : Boolean = true;
			ok = checkResult(dmc1, args(2), 0L);
			if(!ok) return false;
			ok = checkResult(dmc2, args(3), 0L);
			if(!ok) return false;
			val numC = Long.parse(args(4));
			if(numC != result.cluster) return false;
			return true;
		}
		else {
			throw new IllegalArgumentException("Unknown command :" + args(1));
		}
	}
	
}