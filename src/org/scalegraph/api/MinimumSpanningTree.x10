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

package org.scalegraph.api;

import org.scalegraph.graph.Graph;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.metrics.MinimumSpanningTreeImpl;
import x10.util.Pair;
import org.scalegraph.util.DistMemoryChunk;


/**
 * Find minimum spanning tree of a graph
 * <br/>Minimum spanning tree (MST) is a subgraph of an undirected graph 
 * that is a tree with minimum weight and contains all vertices in the graph. 
 * The applications of MST include creating trees for broadcasting in computer networks, circuit design.
 */
final public class MinimumSpanningTree {
   
    
    /** Find minimum spanning tree of a graph
     * @param g The graph object.
     * 
     * @return Pair[DistMemoryChunk[Long], DistMemoryChunk[Long]] where the first are the sources and the second are the corresponding target of the edges in the MST
     */
    public static def run(g :Graph): Pair[DistMemoryChunk[long], DistMemoryChunk[Long]] {
        val team = g.team();
        val dist = Dist2D.make2D(team, 1, team.size());
        val csr = g.createDistSparseMatrix[Double](dist, "weight", false, true);
        return run(csr);
    }
    
    /** Find minimum spanning tree of a graph
     * @param matrix distributed sparse matrix object, the matrix must represent an undirected graph.
     * 
     * @return Pair[DistMemoryChunk[Long], DistMemoryChunk[Long]] where the first are the sources and the second are the corresponding target of the edges in the MST
     */
    public static def run(matrix :DistSparseMatrix[Double]): Pair[DistMemoryChunk[long], DistMemoryChunk[Long]]{
        return MinimumSpanningTreeImpl.run(matrix);
    }
}