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

import x10.util.concurrent.AtomicLong;
import x10.util.Team;

import org.scalegraph.harness.sx10Test;
import org.scalegraph.harness.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.visitor.LsBfsVisitor;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;
import org.scalegraph.util.Dist2D;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.util.Bitmap2;
import org.scalegraph.graph.id.OnedC;

final class TestLsBfs extends sx10Test {
	public static def main(args: Array[String](1)) {
		new TestLsBfs().execute(args);
	}
    
    val inputFile: Array[String] = new Array[String](1, (Int) => "/nfs/data0/testdata/RMAT_SCALE_8");
    
    public static class LocalState {
        val localVertices: Long;
        val visited: Bitmap2;
        val vtoS: OnedC.VtoS;
        val vertexCount: AtomicLong;
        val edgeCount:AtomicLong;
        def this(csr: DistSparseMatrix[Long]) {
            val ids = csr.ids();
            localVertices = ids.numberOfLocalVertexes();
            visited = new Bitmap2(localVertices);
            vtoS = new OnedC.VtoS(ids);
            vertexCount = new AtomicLong(0);
            edgeCount = new AtomicLong(0);
        }
    }
    
    public static val inputFormat = (s: String) => {
        val items = s.split(" ");
        return Tuple3[Long, Long, Double] (
                Long.parse(items(0).trim()),
                Long.parse(items(1).trim()),
               1D
        );
    };
    

    public def run(args: Array[String](1)): Boolean {
        
        val team = Team.WORLD;
        
        // Load data
        val rawData = DistributedReader.read(inputFile, inputFormat);
        // Create graph
        val edgeList = rawData.get1();
        val weightList = rawData.get2();
        
        val g = new Graph(team, Graph.VertexType.Long, false);
        g.addEdges(edgeList.raw(team.placeGroup()));
        
        // Create dist sparse matrix
        val csr = g.createDistEdgeIndexMatrix(
                                              Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS),
                                              true,
                                              true);
        
        // Create handle for each place
        val lch: PlaceLocalHandle[LocalState] = PlaceLocalHandle.make[LocalState](team.placeGroup(),
                () => {return new LocalState(csr); });
        val source = 0L;
        val handler = (v: Long, pred: Long, isFirstVisit: Boolean, dist: Long) => { 
            // Console.OUT.println(pred + " " + v + " " + dist);
            val localVertex = lch().vtoS(v);
            if (lch().visited.isNotSetThenSet(localVertex)) {
                // already visited, do nthoing
                lch().vertexCount.getAndIncrement();
                // lch().visited.set(localVertex);
            }
            lch().edgeCount.getAndIncrement();
        };

        val visitor = LsBfsVisitor.make(csr, handler, source);
        visitor.run();
        
        team.placeGroup().broadcastFlat(() => {
            val allVisited = team.allreduce(team.role()(0), lch().vertexCount.get(), Team.ADD);
            val allEdges = team.allreduce(team.role()(0), lch().edgeCount.get(), Team.ADD);
            if (here == Place.FIRST_PLACE) {
                // Console.OUT.println("Visited: " + allVisited);
                // Console.OUT.println("Edge: " + allEdges);
                lch().vertexCount.set(allVisited);
                lch().edgeCount.set(allEdges);
            }
        });
        
        // Answer for RMAT scale-8 graph 
        if (lch().vertexCount.get() == 255L && lch().edgeCount.get() == 587L) {
            return true;
        } 
        
        return false;
    }
}