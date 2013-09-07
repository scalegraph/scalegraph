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
import org.scalegraph.harness.sx10Test;
import org.scalegraph.io.ID;
import org.scalegraph.io.CSV;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.XPregelGraph;

public class GraphTest extends sx10Test {
	public static def main(args: Array[String](1)) {
		new GraphTest().execute(args);
	}
	
	public def run(args: Array[String](1)): Boolean {
		val fmt = [ID.TYPE_LONG as Int, ID.TYPE_LONG, ID.TYPE_NONE, ID.TYPE_DOUBLE];
		val rawData = CSV.read(args(0), fmt, false);
		val graph = Graph.makeWithTranslator(rawData.get[Long](0), rawData.get[Long](1));
		graph.setEdgeAttribute("weight", rawData.get[Double](2));
		val matrix = graph.createDistSparseMatrix[Double](Config.get().dist1d(), "weight", true, true);
		val xpregel = XPregelGraph.make[Long,Double](matrix);
		
		Console.OUT.println("Finished");
		
		return true;
	}
}
