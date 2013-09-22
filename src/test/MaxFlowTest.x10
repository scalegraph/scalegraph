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
		val result = org.scalegraph.api.MaxFlow.run(g);
		
		if(args(0).equals("check")) {
			val mf = result.maxFlow;
			
			if(MathAppend.abs((mf+1.0) / ( Double.parse(args(1)) + 1.0 ) - 1.0) > 0.01   )
				return false;
			return true;
		}
		else {
			throw new IllegalArgumentException("Unknown command :" + args(0));
		}
	}
	
}