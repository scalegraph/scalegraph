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
import org.scalegraph.Config;


/**
 * Find minimum spanning tree of a graph
 * <br/>Minimum spanning tree (MST) is a subgraph of an undirected graph 
 * that is a tree with minimum weight and contains all vertices in the graph. 
 * The applications of MST include creating trees for broadcasting in computer networks, circuit design.
 */
final public class MinimumSpanningTree {
   
    /** The name of a graph attribute that store the edge weight, default is "weight". */
    public var weightAttrName: String = "weight";
    
    /** Find minimum spanning tree of a graph
     * @param g The graph object
     * 
     * @return A graph object, a spanning tree or spanning forest of the given graph.
     */
    public def execute(g: Graph):  Graph {
        return run(this, g);
    }
    
    /** Find minimum spanning tree of a graph
     * @param matrix distributed sparse matrix object, the matrix must represent an undirected graph and its distribution is one-dimensional column distribution.
     * 
     * @return A graph object, a spanning tree or spanning forest of the given graph.
     */
    public def execute(matrix :DistSparseMatrix[Double]): Graph {
        return run(matrix);
    }
    
    /** Find minimum spanning tree of a graph
     * @param g The graph object
     * 
     * @return A graph object, a spanning tree or spanning forest of the given graph.
     */
    public static def run(g :Graph): Graph {
       
        return  new MinimumSpanningTree().execute(g);
    }
    
    private static def run(inst: MinimumSpanningTree, g :Graph): Graph {
        val team = g.team();
        val dist = Dist2D.make2D(team, 1, team.size());
        val csr = g.createDistSparseMatrix[Double](dist, inst.weightAttrName, false, true);
        return run(csr);
    }
    
    /** Find minimum spanning tree of a graph
     * @param matrix distributed sparse matrix object, the matrix must represent an undirected graph and its distribution is one-dimensional column distribution.
     * 
     * @return A graph object, a spanning tree or spanning forest of the given graph.
     */
    public static def run(matrix :DistSparseMatrix[Double]): Graph {
        val sw = Config.get().stopWatch();
        /// sw.lap("Graph construction");
        val ret =  MinimumSpanningTreeImpl.run(matrix);
        /// sw.lap("Minimum spanning tree calculation");
        return ret;
    }
}