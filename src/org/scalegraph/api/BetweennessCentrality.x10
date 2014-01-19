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

import org.scalegraph.Config;
import org.scalegraph.graph.Graph;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.util.Dist2D;
import org.scalegraph.metrics.DistBetweennessCentrality;
import org.scalegraph.metrics.DistBetweennessCentralityWeighted;

/**
 * An API class for computing the vertex betweenness centrality of a graph.
 * The implementation is based on Brandes's alogorthm[1] and Edmonds' algorithm[2].
 * The linear-scaling technique[3] is also available for improving the estimation result.
 * 
 * <br><br>
 * References:
 * <br>[1] Brandes, Ulrik. "A faster algorithm for betweenness centrality*." Journal of Mathematical Sociology 25.2 (2001): 163-177.
 * <br>[2] Edmonds, Nick, Torsten Hoefler, and Andrew Lumsdaine. "A space-efficient parallel algorithm for computing betweenness centrality in distributed memory." High Performance Computing (HiPC), 2010 International Conference on. IEEE, 2010.
 * <br>[3] Geisberger, Robert, Peter Sanders, and Dominik Schultes. "Better approximation of betweenness centrality." Proceedings of the 10th Workshop on Algorithm Engineering and Experimentation (ALENEX08). To appear. 2008.
 */
public class BetweennessCentrality {
    
    /** The weighted graph flag, default is false (i.e. unweighted graph). */
    public var weighted: Boolean = false;
    
    /** Graph directness, default is directed. */
    public var directed: Boolean = true;
    
    /** Source must be either Long, LongRange or Array[Long]. */
    public var source: Any = null;
    
    /** The name of a graph attribute to store the result, default is "bc". */
    public var resultAttrName: String = "bc";
    
    /** The name of a graph attribute that store the edge weight, default is "wegiht". */
    public var weightAttrName: String = "weight";
    
    /** The delta value for delta-stepping algorithm in computing betweeness centrality for weighted graphs,
     * default is 1.
     */
    public var delta: Int = 1;
    
    /** Normalization flag, default is false. This flag is applicable only for exact betweenness centrlaity calculation, 
     * <br/>
     * The normalization factor is (N-1)*(N-2) and 2*(N-1)(N-2), respectively, where N is the total number of vertices in the graph.
     * The default value is false.
     */
    public var normalize: Boolean = false;
    
    /** Linear-scaling method for alleviating the bias in estimation, default is false. */
    public var linearScale: Boolean = false;
    
    /** Computing exact vertex betweenness centrality, default is true. If this flag is set, source variable will be ignored */
    public var exactBc: Boolean = true;
    
    /**Calculate the vertex betweenness centrality with default paramerters:
     * weighted = false, directed = true, source="all vertices", normalize = false, linear scaling = false. The result will be stored as a graph attribute named "bc".
     * 
     * @param g The graph object
     * @return DistMemoryChunk[Double], the local index of which (i.e. MemoryChunk index) maps to the vertex id v, where v = team.size() x local_index + team.role()(0).<br/>
     * For example let the team size equal to 8, the local index of the MemoryChunk is 4, and the MemoryChunk is on the machine that has the role number equal to 3, 
     * so the local memory pointed by this local index will store the betweenness centrality of the vertex id 35.
     */
    public static def run(g: Graph) {
        return new BetweennessCentrality().execute(g);
    }
        
    /**
     * Calculate the vertex betweenness centrality.
     * 
     * @param g The graph object
     * @return DistMemoryChunk[Double], the local index of which (i.e. MemoryChunk index) maps to the vertex id v, where v = team.size() x local_index + team.role()(0).<br/>
     * For example let the team size equal to 8, the local index of the MemoryChunk is 4, and the MemoryChunk is on the machine that has the role number equal to 3, 
     * so the local memory pointed by this local index will store the betweenness centrality of the vertex id 35.
     */
    public def execute(g: Graph) {
        if (weighted) {
            // Weighted
            return executeWeightedBc(this, g);
        } else {
            // Unweighted
            return executeUnweightedBc(this, g);
        }
    }
    
    public def execute(matrix: DistSparseMatrix[Long], numberOfVertices: Long) {
        if (weighted) {
            throw new UnsupportedOperationException("For DistSparseMatrix[Long], weighted must be false");
        } else {
            // Unweighted
            return executeUnweightedBcWrap(this, matrix, numberOfVertices);
        }
    }
    
    public def execute(matrix: DistSparseMatrix[Double], numberOfVertices: Long) {
        if (weighted) {
            // Weighted
            return executeWeightedBcWrap(this, matrix, numberOfVertices);
        } else {
            // Unweighted
            throw new UnsupportedOperationException("For DistSparseMatrix[Double], weighted must be true");
        }
    }

    
    // Wrapper for Unweighted graphs
    private static def executeUnweightedBc(inst: BetweennessCentrality, g: Graph) {
        val src = inst.source;

        val team = g.team();
        val matrix = g.createDistEdgeIndexMatrix(
        		Config.get().distXPregel(),
                    inst.directed,
                    false); 
        val N = g.numberOfVertices();
        return executeUnweightedBcWrap(inst, matrix, N);
    }
    
    private static def executeUnweightedBcWrap(inst: BetweennessCentrality, matrix: DistSparseMatrix[Long], numberOfVertices: Long) {
        val src = inst.source;
        val dummy = -1..(-1L);
        if (inst.exactBc == true){
            return DistBetweennessCentrality.run(matrix, numberOfVertices, inst.directed, inst.normalize, -1L, null, dummy, inst.linearScale, inst.exactBc);
        } else if (src instanceof Long) {
            return DistBetweennessCentrality.run(matrix, numberOfVertices, inst.directed, inst.normalize, src as Long, null, dummy, inst.linearScale, inst.exactBc);
        } else if (src instanceof Array[Long]) {
            return DistBetweennessCentrality.run(matrix, numberOfVertices, inst.directed, inst.normalize, -1, src as Array[Long], dummy, inst.linearScale, inst.exactBc);
        } else if (src instanceof LongRange) {
            return DistBetweennessCentrality.run(matrix, numberOfVertices, inst.directed, inst.normalize, -1, null, src as LongRange, inst.linearScale, inst.exactBc);
        } else {
            throw new IllegalArgumentException("Source must be either Long, Array[Long] or LongRange");
        }        
    }
    
    // Wrapper for Weighted graphs
    private static def executeWeightedBc(inst: BetweennessCentrality, g: Graph) {
        val src = inst.source;

        val team = g.team();
        val matrix = g.createDistSparseMatrix[Double](
        		Config.get().distXPregel(), inst.weightAttrName, inst.directed, false);
        val N = g.numberOfVertices();
        return executeWeightedBcWrap(inst, matrix, N);
    }
    
    private static def executeWeightedBcWrap(inst: BetweennessCentrality, matrix: DistSparseMatrix[Double], numberOfVertices: Long) {
        val src = inst.source;
        val dummy = -1..(-1L);
        
        if (inst.exactBc == true){ 
            return DistBetweennessCentralityWeighted.run(matrix, numberOfVertices, inst.directed, inst.delta, inst.normalize, -1, null, dummy, inst.linearScale, inst.exactBc);
        } else if (src instanceof Long) {
            return DistBetweennessCentralityWeighted.run(matrix, numberOfVertices, inst.directed, inst.delta, inst.normalize, src as Long, null, dummy, inst.linearScale, inst.exactBc);
        } else if (src instanceof Array[Long]) {
            return DistBetweennessCentralityWeighted.run(matrix, numberOfVertices, inst.directed, inst.delta, inst.normalize, -1, src as Array[Long], dummy, inst.linearScale, inst.exactBc);
        } else if (src instanceof LongRange) {
            return DistBetweennessCentralityWeighted.run(matrix, numberOfVertices, inst.directed, inst.delta, inst.normalize, -1, null, src as LongRange, inst.linearScale, inst.exactBc);
        } else {
            throw new IllegalArgumentException("Source must be either Long, Array[Long] or LongRange");
        }
    }
}
