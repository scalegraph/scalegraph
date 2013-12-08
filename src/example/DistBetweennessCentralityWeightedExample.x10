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

package example;

import x10.util.Team;

import org.scalegraph.api.BetweennessCentrality;
import org.scalegraph.graph.Graph;
import org.scalegraph.io.SimpleText;
import org.scalegraph.io.CSV;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.tuple.Tuple3;

public class DistBetweennessCentralityWeightedExample {
    
    public static val inputFormat = (s: String) => {
        val items = s.split(" ");
        return Tuple3[Long, Long, Double] (
                Long.parse(items(0).trim()),
                Long.parse(items(1).trim()),
                Double.parse(items(2).trim())
        );
    };
    
    public static def main(args: Array[String]) {
        if (args.size < 1) {
            Console.OUT.println("Please enter file name");
            return;
        }
        
        // Load data using SimpleText to read edgelist format file
        val g = Graph.make(SimpleText.read(args(0), inputFormat), false);
                
        // Create API instnace, since we would like to specify parameters
        val bc = new BetweennessCentrality();
        bc.directed = true;
        bc.weighted = true;
        bc.exactBc = false;
        bc.source = [0L as Long];
        
        // Call API
        val result = bc.execute(g);
        
        // Write result in CSV format
        CSV.write("bc-%d", new NamedDistData(["bc" as String], [result as Any]), true);

    }
}