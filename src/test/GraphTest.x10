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

import org.scalegraph.test.STest;
import org.scalegraph.Config;
import org.scalegraph.id.Type;
import org.scalegraph.io.CSV;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.XPregelGraph;

public class GraphTest extends STest {
	public static def main(args: Rail[String]) {
		new GraphTest().execute(args);
	}
	
	public def run(args: Rail[String]): Boolean {
		val graph = Graph.make(CSV.read(args(0), 
					[Type.Long as Int, Type.Long, Type.None, Type.Double],
					["source", "target", "weight"]));
		val matrix = graph.createDistSparseMatrix[Double](Config.get().dist1d(), "weight", true, true);
		val xpregel = XPregelGraph.make[Long,Double](matrix);
		
		Console.OUT.println("Finished");
		
		return true;
	}
}
