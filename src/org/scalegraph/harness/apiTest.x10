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

package org.scalegraph.harness;

import org.scalegraph.util.random.Random;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.io.ID;
import org.scalegraph.io.CSV;
import org.scalegraph.id.Type;
import org.scalegraph.io.impl.CSVReader;

abstract public class apiTest {
    
    public def genGraph(args: Array[String](1)): Graph {
        if (args(0).equals("rmat")) {
            val scale = Int.parse(args(1));
            val edgefactor = Int.parse(args(2));
            val A = Double.parse(args(3));
            val B = Double.parse(args(4));
            val C = Double.parse(args(5));
            val rnd = new Random(2, 3);
            val edgeList = GraphGenerator.genRMAT(scale, edgefactor, A, B, C, rnd);
            val rawWeight = GraphGenerator.genRandomEdgeValue(scale, edgefactor, rnd);
            val g = Graph.make(edgeList);
            g.setEdgeAttribute[Double]("edgevalue", rawWeight);
            return g;
        }
        else if (args(0).equals("random")) {
            val scale = Int.parse(args(1));
            val edgefactor = Int.parse(args(2));
            val rnd = new Random(2, 3);
            val edgeList = GraphGenerator.genRandomGraph(scale, edgefactor, rnd);
            val rawWeight = GraphGenerator.genRandomEdgeValue(scale, edgefactor, rnd);
            val g = Graph.make(edgeList);
            g.setEdgeAttribute[Double]("edgevalue", rawWeight);
            return g;
        }
        else if (args(0).equals("filepath")) {
            val colTypes = [Type.Long as Int, Type.Long, Type.None, Type.Double];
            return Graph.make(CSV.read(args(1), colTypes, false));
        }
    }

}
