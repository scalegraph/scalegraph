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
import org.scalegraph.community.SpectralClusteringImpl;
import org.scalegraph.io.ID;
import org.scalegraph.util.DistMemoryChunk;


/**
 * Calculate spectral clustering
 */
final public class SpectralClustering {
	
	val config = Config.get();
	val team = config.worldTeam();
	val dist = config.dist2d();
	
	// default options
	var numCluster:Int = 2;         // number of clusters
	var tolerance:Double = 0.01;    // tolerance of Arnoldi process in ARPACK
	var maxitr:Int = 1000;          // max number of iteration in k-means
	var threshold:Double = 0.0001;  // threshold for convergence test in k-means
	
	public def this() {}
	
	public def this(numCluster : Int, tolerance : Double, maxitr : Int, threshold : Double) {
		this.numCluster = numCluster;
		this.tolerance = tolerance;
		this.maxitr = maxitr;
		this.threshold = threshold;
	}
	
	public def execute(g : Graph) : DistMemoryChunk[Int] {
		val w = g.createDistSparseMatrix[Double](dist, ID.NAME_WEIGHT, false, false);
		return execute(w);
	}
	
	public def execute(w : DistSparseMatrix[Double]) : DistMemoryChunk[Int] {
		return SpectralClusteringImpl.run(w, numCluster, tolerance, maxitr, threshold);
	}
	
	public static def run(g : Graph) {
		return new SpectralClustering().execute(g);
	}
	
	public static def run(w : DistSparseMatrix[Double], numCluster : Int,
			tolerance : Double, maxitr : Int, threshold : Double) {
		return new SpectralClustering(numCluster, tolerance, maxitr, threshold).execute(w);
	}
}
