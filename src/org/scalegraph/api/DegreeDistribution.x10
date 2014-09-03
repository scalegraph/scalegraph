/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
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
import org.scalegraph.metrics.DegreeDistImpl;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.DistMemoryChunk;
import x10.compiler.Inline;
import org.scalegraph.Config;


/**
 * Calculate the degree distribution of a graph
 */
final public class DegreeDistribution {
    
    // Modes
    public static val IN_DEGREE: Int = 0;
    public static val OUT_DEGREE: Int = 1;
    public static val INOUT_DEGREE: Int = 2;
    
    /** The mode in which the degree of a vertex is determined, default is in-degree calculation. */
    public var mode: Int = 1;
    
    public def this() { }
    
    public def this(mode :Int) {
    	this.mode = mode;
    }
    
    /** Run the calculation of degree distribution.
     * @param g The graph object.
     */
    public def execute(g :Graph): DistMemoryChunk[Long] {
        return execute(this, g);
    }
    
    /** Run the calculation of degree distribution.
     * @param matrix distributed sparse matrix object.
     * <ul>
     * 		<li>For in-degree calculation, the matrix must represent directed graph and must be distributed by rows.</li>
     * 		<li>For out-degree caluclation, the matrix must represent directed graph and must be distributed by columns.</li> 
     * 		<li>For in- and out-degree calculation the matrix must represent undirected graph.</li>
     * </ul>
     * @return DistGrowableMemoryChunk[Long], the local index of which (i.e. MemoryChunk index) maps to degree d, where d = team.size() x local_index + team.role()(0).<br/>
     * For example let the team size equal to 8, the local index of the MemoryChunk is 4, and the MemoryChunk is on the machine that has the role number equal to 3, 
     * so the local memory pointed by this local index will store the number of the vertices that has the degree eqaul to 35.
     * 
     * <p><b>Note:</b> 
     * The mode variable is ignored<br/>
     * This method is prone to incorrect result if the matrix is created with invalid parameters. We encourage users to use run(g: Graph, mode: Int) instead of this method.
     */
    public def execute(matrix :DistSparseMatrix[Double]) {
        return run[Double](matrix);
    }
    
    /** Run the calculation of degree distribution.
     * @param g The graph object.
     * 
     * @return DistGrowableMemoryChunk[Long], the local index of which (i.e. MemoryChunk index) maps to degree d, where d = team.size() x local_index + team.role()(0).<br/>
     * For example let the team size equal to 8, the local index of the MemoryChunk is 4, and the MemoryChunk is on the machine that has the role number equal to 3, 
     * so the local memory pointed by this local index will store the number of the vertices that has the degree eqaul to 35. 
     */
    public static def run(g :Graph): DistMemoryChunk[Long] {
        return new DegreeDistribution().execute(g);
    }
    
    /** Run the calculation of degree distribution.
     * @param matrix distributed sparse matrix object.
     * <ul>
     * 		<li>For in-degree calculation, the matrix must represent directed graph and must be distributed by rows.</li>
     * 		<li>For out-degree caluclation, the matrix must represent directed graph and must be distributed by columns.</li> 
     * 		<li>For in- and out-degree calculation the matrix must represent undirected graph.</li>
     * </ul>
     * @return DistGrowableMemoryChunk[Long], the local index of which (i.e. MemoryChunk index) maps to degree d, where d = team.size() x local_index + team.role()(0).<br/>
     * For example let the team size equal to 8, the local index of the MemoryChunk is 4, and the MemoryChunk is on the machine that has the role number equal to 3, 
     * so the local memory pointed by this local index will store the number of the vertices that has the degree eqaul to 35.
     * 
     * <p><b>Note:</b> 
     * This method is prone to incorrect result if the matrix is created with invalid parameters. We encourage users to use run(g: Graph, mode: Int) instead of this method.
     */
    public static def run(matrix :DistSparseMatrix[Double]): DistMemoryChunk[Long] {
        return run[Double](matrix);
    }
    
    private static def execute(inst: DegreeDistribution, g :Graph): DistMemoryChunk[Long] {
        val m = inst.mode;
        if (m < 0 || m > 2) {
            throw new IllegalArgumentException("The mode argument must be DegreeDistribution.IN_DEGREE, DegreeDistribution.OUT_DEGREE or DegreeDistribution.INOUT_DEGREE");
        }
        val sw = Config.get().stopWatch();
        val team = g.team();
        val transpose = (m == IN_DEGREE) ? true: false;
        val directed = (m == INOUT_DEGREE) ? false: true;
        //val distColumn = Dist2D.make1D(team, !transpose ? Dist2D.DISTRIBUTE_COLUMNS : Dist2D.DISTRIBUTE_ROWS);
        val distColumn = Dist2D.make1D(team, Dist2D.DISTRIBUTE_ROWS);
        val columnDistGraph = g.createDistEdgeIndexMatrix(distColumn, directed, transpose);
        /// sw.lap("Graph construction");
        val result = run[Long](columnDistGraph);
        /// sw.lap("Degree distribution calculation (mode = " + m +")");
        
        // delete graph
        columnDistGraph.del();
        distColumn.del();
        
        return result;
    }
    
    // Interface between API and Impl
    @Inline
    public static def run[T](matrix :DistSparseMatrix[T]): DistMemoryChunk[Long] {
        return DegreeDistImpl.degreeDistribution[T](matrix);
    }
}