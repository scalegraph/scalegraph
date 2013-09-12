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

import org.scalegraph.test.STest;
import org.scalegraph.id.Type;
import org.scalegraph.io.CSV;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;

final class PageRankTest extends STest {
	public static def main(args: Array[String](1)) {
		new PageRankTest().execute(args);
	}
    
    public def run(args :Array[String](1)): Boolean {
		val start_read_time = System.currentTimeMillis();
		val g = Graph.make(CSV.read(args(0), 
				[Type.Long as Int, Type.Long, Type.None, Type.Double],
				["source", "target", "weight"]));
		val end_read_time = System.currentTimeMillis();
		Console.OUT.println("Read File: "+(end_read_time-start_read_time)+" millis");	
		
		val result = org.scalegraph.api.PageRank.run(g);
		
		CSV.write("pagerank-%d", new NamedDistData(["pagerank" as String], [result as Any]),true);
		return true;
	}
}
