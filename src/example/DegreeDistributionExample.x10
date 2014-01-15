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

import org.scalegraph.api.DegreeDistribution;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.io.CSV;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.util.random.Random;
import org.scalegraph.util.tuple.*;


public final class DegreeDistributionExample {
    
    public static def main(args: Array[String]) {
        
        // Generate RMAT graph
        val scale = 10;
        val edgeFactor = 8;
        val rnd = new Random(2, 3);
        val edgeList = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
        
        // Create graph
        val g = Graph.make(edgeList);
        
        // Create API instance
        val degreeDist = new DegreeDistribution();
        
        // In-degree calculation
        degreeDist.mode = DegreeDistribution.IN_DEGREE;
        val indegResult = degreeDist.execute(g);
        
        // Out-degree calculation
        degreeDist.mode = DegreeDistribution.OUT_DEGREE;
        val outdegResult = degreeDist.execute(g);
        
        // In- and out-degree calculation
        degreeDist.mode = DegreeDistribution.INOUT_DEGREE;
        val inOutdegResult = degreeDist.execute(g);

        CSV.write("out/indeg-%d", new NamedDistData(["indeg" as String], [indegResult as Any]),true);
        CSV.write("out/outdeg-%d", new NamedDistData(["outdeg" as String], [outdegResult as Any]),true);
        CSV.write("out/inoutdeg-%d", new NamedDistData(["inoutdeg" as String], [inOutdegResult as Any]),true);
    }
}