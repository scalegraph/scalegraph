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

package example;

import x10.util.Team;

import org.scalegraph.api.BetweennessCentrality;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.io.CSV;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.util.tuple.Tuple3;
import org.scalegraph.util.random.Random;

public class DistBetweennessCentralityUnweightedExample {
    
    public static def main(args: Array[String]) {

        // Generate RMAT graph
        val scale = 10;
        val edgeFactor = 8;
        val rnd = new Random(2, 3);
        val edgeList = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
        val g = Graph.make(edgeList);
        
        // Call API
        val result = BetweennessCentrality.run(g);
        
        // Write result as CSV file
        CSV.write("bc-%d", new NamedDistData(["bc" as String], [result as Any]), true);
    }
}