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

import org.scalegraph.Config;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.util.random.Random;
import org.scalegraph.util.tuple.*;
import org.scalegraph.visitor.DeltaSteppingVisitor;

public class DeltaSteppingVisitorExample {
        
    public static def main(args: Array[String]) {
        
        // Generate RMAT graph
        val scale = 10;
        val edgeFactor = 8;
        val weightName = "weight";
        val rnd = new Random(2, 3);
        val edgeList = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd);
        val g = Graph.make(edgeList);
        
        // Generate edge weight
        val weight = GraphGenerator.genRandomEdgeValue(scale, edgeFactor, rnd);
        g.setEdgeAttribute[Double](weightName, weight);
        
        Console.OUT.println("Start delta-stepping");
        
        // Create dist sparse matrix
        val csr = g.createDistEdgeIndexMatrix(
        											Config.get().distXPregel(),
                                              true,
                                              true);
        // Construct attribute
        val weightAttr = g.createDistAttribute[Double](csr, false, weightName);
        
        // Run delta stepping
        val source = 0L;
        val delta = 1;
        val handler = (v: Long, pred: Long, isFirstVisit: Boolean, dist: Double) => { 
            Console.OUT.println(pred + " " + v + " " + dist);
            };
            
        val v = DeltaSteppingVisitor.make(csr, weightAttr, source, delta, handler);
        v.run();
    }
}