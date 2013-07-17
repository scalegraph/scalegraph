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
import x10.io.File;
import x10.io.FileReader;
import x10.io.IOException;

import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.DistSparseMatrix;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.SparseMatrix;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.metrics.Degree;
import org.scalegraph.util.random.Random;
import org.scalegraph.generator.GraphGenerator;

public class TestDegreeDist {
    
    public static def main(args: Array[String]) {
        val team = Team.WORLD;
        val rnd = new Random(2,3);
        val scale = 16;
        val edgeFactor = 16;
        val rmatEdges = GraphGenerator.genRMAT(scale, edgeFactor, 0.45, 0.15, 0.15, rnd, team);
        val g = new Graph(team, Graph.VertexType.Long, false);
        g.addEdges(rmatEdges);
        val result = Degree.getInDegree(g);
        
        // Print to file and check degree distribution
        // for (p in team.placeGroup()) {
        //     at (p) {
        //         val dat = result();
        //         Console.OUT.println("Dat: " + dat + " : Size-> " + dat.size());
        //         for (i in 0..(dat.size() - 1)) {
        //             val deg = i * team.size();
        //             Console.OUT.printf("%ld %ld\n", deg, dat(i));
        //         }
        //     }
        // }
        DistributedReader.write("out-%d", team, result.raw(team.placeGroup()));
    }
}