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
import org.scalegraph.metrics.DegreeDistImpl;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.DistGrowableMemory;
import x10.compiler.Inline;


/**
 * Calculate the maximum flow between two vertices
 */
final public class MaxFlow {
    
    /**
     * A class storing the result from MaxFlow
     */
    public static struct Result (maxiMumFlow: Long){
       protected def this(mf: Long) {
           property(mf);
       }
    }
    
    /** Calculate the maximum flow between two vertices
     * @param g The graph object
     * @return A long integer, the value of the maximum flow
     */
    public def execute(g :Graph): Result {
        throw new UnsupportedOperationException();

    }
    
   
    public def execute(matrix :DistSparseMatrix[Double]): Result {
        throw new UnsupportedOperationException();
    }
    

    public static def run(g :Graph): Result {
        throw new UnsupportedOperationException();
    }
    
    public static def run(matrix :DistSparseMatrix[Double]): Result {
        throw new UnsupportedOperationException();
    }
    
    private static def execute(inst: DegreeDistribution, g :Graph): Result {
        throw new UnsupportedOperationException();
    }
    
    // Interface between API and Impl
    @Inline
    private static def run(matrix :DistSparseMatrix[Long]): Result {
        throw new UnsupportedOperationException();
    }
}