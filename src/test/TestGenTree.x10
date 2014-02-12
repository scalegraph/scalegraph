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
import org.scalegraph.io.NamedDistData;

public class TestGenTree extends STest {
	public static def main(args: Array[String](1)) {
		new TestGenTree().execute(args);
	}
	
	public def run(args: Array[String](1)): Boolean {
		
		Console.OUT.println("Test Gen Tree");
		val edgeList = org.scalegraph.graph.GraphGenerator.genTree(8);
		
		CSV.write("tree-%d", new NamedDistData(["source" as String, "target"], [edgeList.src as Any, edgeList.dst]), false);
		
		return true;
	}
}
