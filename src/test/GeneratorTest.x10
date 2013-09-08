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

import org.scalegraph.harness.sx10Test;
import org.scalegraph.util.random.Random;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.graph.Graph;
import org.scalegraph.util.Dist2D;
import org.scalegraph.io.CSV;
import org.scalegraph.io.NamedDistData;

final class GeneratorTest extends sx10Test {
	public static def main(args: Array[String](1)) {
		new GeneratorTest().execute(args);
	}
	
	public def run(args: Array[String](1)): Boolean {
		rmat_test();
		erdos_test();
		random_test();
		return true;
	}
	
	private static def rmat_test() {
		val team = Team.WORLD;
		val rnd = new Random(2,3);
		val rmatEdges = GraphGenerator.genRMAT(14, 16, 0.45, 0.15, 0.15, rnd);
		CSV.write("rmat-%d",
				new NamedDistData(["source" as String, "target"], [rmatEdges.src as Any, rmatEdges.dst]));
		//DistributedReader.write("rmat-%d", rmatEdges);
		Console.OUT.println("rmat: done");
	}
	
	private static def erdos_test() {
	    val team = Team.WORLD;
	    val rnd = new Random(2,3);
	    val rmatEdges = GraphGenerator.genRandomGraph(14, 16, rnd);
	    //val rmatEdges = GraphGenerator.genRMAT(14, 16, 0.45, 0.15, 0.15, rnd);
	    CSV.write("erdos-%d",
	    		new NamedDistData(["source" as String, "target"], [rmatEdges.src as Any, rmatEdges.dst]));
	    //DistributedReader.write("erdos-%d", rmatEdges);
	    /*
	     * val graph = new Graph(team, Graph.VertexType.Long, true);
	     * graph.addEdges(rmatEdges);
	     * val dist = Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS);
	     * val matrix = graph.constructDistSparseMatrix(dist, true, true);
	     */
	    Console.OUT.println("erdos: done");
	}
	
	private static def random_test() {
		val rnd = new Random(2, 3);
		for(i in 0..1000) {
			Console.OUT.println(rnd.nextFloat());
		}
	}
}
