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
import x10.io.File;

import org.scalegraph.Config;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.graph.Graph;
import org.scalegraph.io.FileWriter;
import org.scalegraph.io.FileMode;
import org.scalegraph.util.random.Random;
import org.scalegraph.util.SStringBuilder;

public final class HyperANFExample {

    public static def main(args: Array[String]) {
        
        val config = Config.get();
        val team = config.worldTeam();
        val dist = config.dist2d();
        val weightAttr = "weight";
        val outpath = "out_hyperanf";
        
        // Generate RMAT graph
        val scale = 10;
        val edgeFactor = 8;
        val rnd = new Random(2, 3);
        val edgeList = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
        val g = Graph.make(edgeList);
        
        // Generate edge weight
        val weight = GraphGenerator.genRandomEdgeValue(scale, edgeFactor, rnd);
        g.setEdgeAttribute[Double](weightAttr, weight);
        
        // Call API
        val result = org.scalegraph.api.HyperANF.run(g);
        
        // Write output
        val printer = new File(outpath).printer();
        for (i in result.range()) {
            printer.println(result(i));
        }
        printer.close();
    }
}