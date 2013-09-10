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

import org.scalegraph.Config;
import org.scalegraph.io.SimpleText;
import org.scalegraph.io.CSV;
import org.scalegraph.util.tuple.*;
import org.scalegraph.graph.Graph;
import org.scalegraph.visitor.DeltaSteppingVisitor;

public class DeltaSteppingVisitorExample {
    
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
        
        // Load data
        val g = Graph.make(SimpleText.read(args(0), inputFormat));
        
        Console.OUT.println("Start delta-stepping");
        
        // Create dist sparse matrix
        val csr = g.createDistEdgeIndexMatrix(
        											Config.get().distXPregel(),
                                              true,
                                              true);
        // Construct attribute
        val weightAttr = g.createDistAttribute[Double](csr, false, "weight");
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