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
import org.scalegraph.metrics.Degree;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.DistGrowableMemory;


/**
 * Calculate the degree distribution of a graph
 */
final public class DegreeDistribution {
    
    // Modes
    public static val IN_DEGREE: Int = 0;
    public static val OUT_DEGREE: Int = 1;
    public static val INOUT_DEGREE: Int = 2;
   
    
    /** Run the calculation of degree distribution.
     * @param g The graph object.
     * @param mode the mode in which the degree of a vertex is determined. 
     * 		"DegreeDistribution.IN_DEGREE" for in-degree calculation, 
     * 		"DegreeDistribution.OUT_DEGREE" for out-degree caluclation and 
     * 		"DegreeDistribution.INOUT_DEGREE" for in- and out-degree calculation respectively.
     * @return DistGrowableMemoryChunk[Long] which the local index (i.e. MemoryChunk index) maps to degree d, where d = team.size() x local_index + team.role()(0).<br/>
     * For example let the team size equal to 8, the local index of the MemoryChunk is 4, and the MemoryChunk is on the machine that has the role number equal to 3, 
     * so the local memory pointed by this local index will store the number of the vertices that has the degree eqaul to 35. 
     */
    public static def run(g :Graph, mode: Int): DistGrowableMemory[Long] {
        if (mode < 0 || mode > 2) {
            throw new IllegalArgumentException("The mode argument must be DegreeDistribution.IN_DEGREE, DegreeDistribution.OUT_DEGREE or DegreeDistribution.INOUT_DEGREE");
        }
        
        val team = g.team();
        val outerOrInner = (mode == IN_DEGREE) ? false: true;
        val directed = (mode == INOUT_DEGREE) ? false: true;
        val distColumn = Dist2D.make1D(team, outerOrInner ? Dist2D.DISTRIBUTE_COLUMNS : Dist2D.DISTRIBUTE_ROWS);
        val columnDistGraph = g.createDistEdgeIndexMatrix(distColumn, directed, outerOrInner);
        val result = run[Long](columnDistGraph);
        
        // delete graph
        columnDistGraph.del();
        distColumn.del();
        
        return result;
    }
    
    /** Run the calculation of degree distribution.
     * @param matrix distributed sparse matrix object.
     * <ul>
     * 		<li>For in-degree calculation, the matrix must represent directed graph and must be distributed by rows.</li>
     * 		<li>For out-degree caluclation, the matrix must represent directed graph and must be distributed by columns.</li> 
     * 		<li>For in- and out-degree calculation the matrix must represent undirected graph.</li>
     * </ul>
     * @return DistGrowableMemoryChunk[Long] which the local index (i.e. MemoryChunk index) maps to degree d, where d = team.size() x local_index + team.role()(0).<br/>
     * For example let the team size equal to 8, the local index of the MemoryChunk is 4, and the MemoryChunk is on the machine that has the role number equal to 3, 
     * so the local memory pointed by this local index will store the number of the vertices that has the degree eqaul to 35.
     * 
     * <p><b>Note:</b> 
     * This method is prone to incorrect result if the matrix is created with invalid parameters. We encourage users to use run(g: Graph, mode: Int) instead of this method.
     */
    public static def run(matrix :DistSparseMatrix[Double]): DistGrowableMemory[Long] {
        return run[Double](matrix);
    }
    
    private static def run[T](matrix :DistSparseMatrix[T]): DistGrowableMemory[Long] {
        return Degree.degreeDistribution[T](matrix);
    }
}