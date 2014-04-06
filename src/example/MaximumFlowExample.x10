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

import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.graph.Graph;
import org.scalegraph.Config;
import org.scalegraph.util.random.Random;

public final class MaximumFlowExample {

    public static def main(args: Array[String]) {
        
        val config = Config.get();
        val team = config.worldTeam();
        val dist = config.dist2d();
        val weightAttr = "weight";
        
        // Generate RMAT graph
        val scale = 10;
        val edgeFactor = 8;
        val rnd = new Random(2, 3);
        val edgeList = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
        val g = Graph.make(edgeList);
        
        // Generate edge weight
        val weight = GraphGenerator.genRandomEdgeValue(scale, edgeFactor, rnd);
        g.setEdgeAttribute[Double](weightAttr, weight);
        
        // Create API object
        val api = new org.scalegraph.api.MaxFlow();
        
        // Set source and sink vertices
        api.sourceVertexId = 0L;
        api.sinkVertexId = 1L;
        
        // Set edge attribute
        api.weights = "weight";
        
        // Call api
        val result = api.execute(g);
        
        // Show result
        Console.OUT.println("Maximum Flow is "+ result.maxFlow);
    }
}