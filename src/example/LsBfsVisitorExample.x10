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

import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.Parallel;
import org.scalegraph.graph.DistSparseMatrix;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.graph.SparseMatrix;
import org.scalegraph.visitor.LsBfsVisitor;

public class LsBfsVisitorExample {
    
    public static val inputFormat = (s: String) => {
        val items = s.split(" ");        
        return Tuple3[Long, Long, Double] (
                Long.parse(items(0).trim()),
                Long.parse(items(1).trim()),
                0D
        );
    };
    
    public static def main(args: Array[String]) {
        val team = Team.WORLD;
        val fileList = new Array[String](1);
        fileList(0) = args(0);
        
        // Load
        val rawData = DistributedReader.read(team, fileList, inputFormat);

        // Create graph
        val edgeList = rawData.get1();
        val g = new Graph(team, Graph.VertexType.Long, false);
        g.addEdges(edgeList.raw(team.placeGroup()));
        
        // Create dist sparse matrix
        val csr = g.constructDistSparseMatrix(
                                              Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS),
                                              true,
                                              true);
        // Run bfs
        val handler = (v: Long, pred: Long, isFirstVisit: Boolean, dist: Long) => { 
            Console.OUT.println(pred + " " + v + " " + dist);
            };
        
        val v = LsBfsVisitor.make(csr, handler, 0L);
        v.run();
    }
}