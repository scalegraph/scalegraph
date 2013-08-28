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
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.blas.SparseMatrix;
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
        val team = Team.WORLD;
        val fileList = new Array[String](1);
        fileList(0) = args(0); 
        
        // Load data
        val rawData = DistributedReader.read(fileList, inputFormat);
        
        // Create graph
        val edgeList = rawData.get1();
        val weightList = rawData.get2();
        
        val g = new Graph(team, Graph.VertexType.Long, false);
        val weightAttrName = "weight";
        g.addEdges(edgeList.raw(team.placeGroup()));
        g.setEdgeAttribute[Double](weightAttrName, weightList.raw(team.placeGroup()));
        Console.OUT.println("Start delta-stepping");
        
        // Create dist sparse matrix
        val csr = g.createDistEdgeIndexMatrix(
                                              Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS),
                                              true,
                                              true);
        // Construct attribute
        val weightAttr = g.createDistAttribute[Double](csr, false, weightAttrName);
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