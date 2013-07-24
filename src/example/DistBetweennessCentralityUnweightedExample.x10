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

import x10.compiler.Inline;
import x10.util.Team;
import x10.util.ArrayList;
import x10.util.concurrent.AtomicLong;
import x10.io.SerialData;
import x10.io.File;
import x10.io.FileReader;
import x10.io.IOException;

import org.scalegraph.util.Dist2D;
import org.scalegraph.util.Parallel;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.graph.Graph;
import org.scalegraph.blas.SparseMatrix;
import org.scalegraph.util.tuple.*;
import org.scalegraph.metrics.DistBetweennessCentrality;
import org.scalegraph.util.DistMemoryChunk;


public class DistBetweennessCentralityUnweightedExample {
    
    public static val inputFormat = (s: String) => {
        val items = s.split(" ");
        return Tuple3[Long, Long, Double] (
                Long.parse(items(0).trim()),
                Long.parse(items(1).trim()),
                0D
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
        val rawData = DistributedReader.read(team, fileList, inputFormat);
        
        // Create graph
        val edgeList = rawData.get1();
        val g = new Graph(team, Graph.VertexType.Long, false);
        g.addEdges(edgeList.raw(team.placeGroup()));
        
        DistBetweennessCentrality.calculate(g, true, "bc", false);
        val attrVertexId = g.getVertexAttribute[Long]("name");
        val attrBc = g.getVertexAttribute[Double]("bc");
        DistributedReader.write("output-%d.txt", team, attrVertexId, attrBc);
    }
}