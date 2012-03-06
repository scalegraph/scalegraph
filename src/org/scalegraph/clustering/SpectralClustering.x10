package org.scalegraph.clustering;

import x10.util.Random;
import x10.util.Timer;
import x10.matrix.Matrix;
import x10.matrix.DenseMatrix;
import x10.matrix.Vector;

import org.scalegraph.graph.PlainGraph;

public class SpectralClustering {
	
	public def this(){
	}
	
	/*
	 * need: lengths of edges of an undirected graph
	 * step 1: make a similarity (or adjacency) matrix
	 * step 2: make a degree matrix
	 * step 3: make a Laplacian matrix
	 * step 4: solve a generalized eigenvalue plobrem
	 * step 5: apply k-means algorithm to eigenvectors
	 */
	public def run(graph:PlainGraph): ClusteringResult {
		val a = adjacencyMatrix(graph);
		val d = degreeMatrix(graph);
		Console.OUT.println(a);
		Console.OUT.println(d);
		return null;
	}
	
	public def run(): ClusteringResult {
		val a = adjacencyMatrix();
		val d = degreeMatrix();
		val l = d - a;
		Console.OUT.println(a);
		Console.OUT.println(d);
		Console.OUT.println(l);
		
		val nPoints = l.M;
		val nClusters = 2;
		val w = new Array[Double](nPoints);
		solveEigenvalueProblem(l as DenseMatrix, d as DenseMatrix, w);
		
		Console.OUT.println(l);
		for(pt in w){
			Console.OUT.println(w(pt));
		}
		
		//val eigenvectors:DenseMatrix = new DenseMatrix(nPoints, nClusters);
		//DenseMatrix.copySubset(l as DenseMatrix, 0, 1, eigenvectors, 0, 0, nPoints, nClusters);
		//Console.OUT.println(eigenvectors);
		
		val points = new Array[Vector](nPoints);
		for(var i:Int = 0; i < nPoints; i++){
			points(i) = Vector.make(nClusters);
			for(var j:Int = 0; j < nClusters; j++){
				points(i)(j) = l(i, j + 1);
			}
		}
		
		//kmeans(nClusters, nClusters, nPoints, eigenvectors.d);
		kmeans(nClusters, nClusters, nPoints, points);
		return null;
	}
	
	private def adjacencyMatrix(graph:PlainGraph): Matrix {
		val nVertices:Long = graph.getVertexCount();
		Console.OUT.println("nVertices = " + nVertices);
		val matrix:Matrix = new DenseMatrix(nVertices as Int, nVertices as Int);
		Console.OUT.println(matrix);
		
		val vertexList:DistArray[Long] = graph.getVertexList();
		for(vpt in vertexList){
			val vertexID:Long = at(vertexList.dist(vpt)) vertexList(vpt);
			val neighbours:Array[Long] = graph.getOutNeighbours(vertexID);
			for(npt in neighbours){
				matrix(vertexID as Int, neighbours(npt) as Int) = 1;
			}
		}
		return matrix;
	}
	
	private def adjacencyMatrix(): Matrix {
		val m:Matrix = new DenseMatrix(6, 6);
		m(0,0) = 1; m(0,1) = 1; m(0,2) = 1; m(0,3) = 1; m(0,4) = 0; m(0,5) = 0;
		m(1,0) = 1; m(1,1) = 1; m(1,2) = 1; m(1,3) = 0; m(1,4) = 0; m(1,5) = 0;
		m(2,0) = 1; m(2,1) = 1; m(2,2) = 1; m(2,3) = 0; m(2,4) = 0; m(2,5) = 0;
		m(3,0) = 1; m(3,1) = 0; m(3,2) = 0; m(3,3) = 1; m(3,4) = 1; m(3,5) = 1;
		m(4,0) = 0; m(4,1) = 0; m(4,2) = 0; m(4,3) = 1; m(4,4) = 1; m(4,5) = 1;
		m(5,0) = 0; m(5,1) = 0; m(5,2) = 0; m(5,3) = 1; m(5,4) = 1; m(5,5) = 1;
		return m;
	}
	
	private def degreeMatrix(graph:PlainGraph): Matrix {
		val nVertices = graph.getVertexCount();
		val matrix = new DenseMatrix(nVertices as Int, nVertices as Int);
		
		val vertexList = graph.getVertexList();
		for(vpt in vertexList){
			val vertexID = at(vertexList.dist(vpt)) vertexList(vpt);
			val nNeighbours = graph.getOutNeighbours(vertexID).size;
			matrix(vertexID as Int, vertexID as Int) = nNeighbours;
		}
		return matrix;
	}
	
	private def degreeMatrix(): Matrix {
		val m:Matrix = new DenseMatrix(6, 6);
		m(0,0) = 4; m(0,1) = 0; m(0,2) = 0; m(0,3) = 0; m(0,4) = 0; m(0,5) = 0;
		m(1,0) = 0; m(1,1) = 3; m(1,2) = 0; m(1,3) = 0; m(1,4) = 0; m(1,5) = 0;
		m(2,0) = 0; m(2,1) = 0; m(2,2) = 3; m(2,3) = 0; m(2,4) = 0; m(2,5) = 0;
		m(3,0) = 0; m(3,1) = 0; m(3,2) = 0; m(3,3) = 4; m(3,4) = 0; m(3,5) = 0;
		m(4,0) = 0; m(4,1) = 0; m(4,2) = 0; m(4,3) = 0; m(4,4) = 3; m(4,5) = 0;
		m(5,0) = 0; m(5,1) = 0; m(5,2) = 0; m(5,3) = 0; m(5,4) = 0; m(5,5) = 3;
		return m;
	}
	
	private def solveEigenvalueProblem(a:DenseMatrix{self.M==self.N}, b:DenseMatrix{self.M==self.N}, w:Array[Double](1)): Long {
		val n = a.M;
		val work = new Array[Double](n * n);
		var info:Long = 0;
		LAPACK.dsygvWrap(1, 'V', 'U', n, a.d, n, b.d, n, w, work, n * n, info);
		return info;
	}
	
	private def kmeans(k:Int, dim:Int, nPoints:Int, points:Array[Vector]): ClusteringResult {
		val curClusters = new Array[Vector](k, (Int) => Vector.make(dim));
		val newClusters = new Array[Vector](k, (Int) => Vector.make(dim));
		val clusterCounts = new Array[Int](k, 0);
		val result = new Array[Int](nPoints, 0);
		val iterations = 50;
		
		/* initialize */
		val random = new Random(Timer.nanoTime());
		for(i in points){
			val c = random.nextInt(k);
			curClusters(c).cellAdd(points(i));
			clusterCounts(c)++;
			result(i) = c;
		}
		/* compute central points of current clusters */
		for(i in curClusters){
			curClusters(i).cellDiv(clusterCounts(i));
			clusterCounts(i) = 0;  // reset counter
		}
		/* debug print */
		for(i in result){
			Console.OUT.println("" + i + points(i) + " -> [" + result(i) + "]" + curClusters(result(i)));
		}
		
		for(iter in 1..iterations){
			Console.OUT.println("iteration: " + iter);
			/* compute new clusters and counters */
			for(i in points){
				/* compute which cluster is closest to each point */
				var minDist:Double = Double.MAX_VALUE;
				var closestCluster:Int = 0;
				for([j] in curClusters){
					var dist:Double = (curClusters(j) - points(i)).norm();
					if(dist < minDist){
						minDist = dist;
						closestCluster = j;
					}
				}
				/* add the point to the cluster */
				newClusters(closestCluster).cellAdd(points(i));
				clusterCounts(closestCluster)++;
				result(i) = closestCluster;
			}
			
			/* compute central points of new clusters */
			for(i in newClusters){
				newClusters(i).cellDiv(clusterCounts(i));
				clusterCounts(i) = 0;  // reset counter
			}
			
			/* debug print */
			for(i in result){
				Console.OUT.println("" + i + points(i) + " -> [" + result(i) + "]" + newClusters(result(i)));
			}
			
			/* test for convergence */
			var b:Boolean = true;
			for(i in curClusters){
				if((newClusters(i) - curClusters(i)).norm() > 0.0001){
					b = false;
					break;
				}
			}
			if(b) break;
			
			/* move new clusters to current clusters */
			for(i in curClusters){
				Array.copy(newClusters(i).d, curClusters(i).d);
				//newClusters(i).copyTo(curClusters(i));
				newClusters(i).reset();
			}
		}
		
		return null;
	}
}