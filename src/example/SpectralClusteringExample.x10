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

import org.scalegraph.api.SpectralClustering;
import org.scalegraph.Config;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.io.impl.CSVWriter;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.util.random.Random;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.Dist2D;


public final class SpectralClusteringExample {

    public static def main(args: Array[String]) {
        
        val config = Config.get();
        val team = config.worldTeam();
        // val dist = config.dist2d();
        val weightAttr = "weight";
        
        val R = 1 << (MathAppend.ceilLog2(team.size()) / 2);
        val C = team.size() / R;
        val dist = Dist2D.make2D(team, C, R);
        
        // the number of cluster
        val numCluster = 2;
        
        // tolerance
        val tolerance = 0.01;
        
        // max iteration
        val maxitr = 1000;
        
        // thread
        val threshold = 0.001;
        val outputPath = "sc-%d";
                
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
        Console.OUT.println("XXXXX");
        val W = g.createDistSparseMatrix[Double](dist, weightAttr, false, false);
        val result = SpectralClustering.run(W, numCluster, tolerance, maxitr, threshold);
        Console.OUT.println("XXXXX");
        
        // Write output
        val namedDistData = new NamedDistData(["sc_result" as String], [result as Any]);
        CSVWriter.write(team, outputPath, namedDistData, true);
    }
}