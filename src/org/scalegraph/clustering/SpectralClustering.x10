package org.scalegraph.clustering;

import org.scalegraph.graph.PlainGraph;
import x10.matrix.*;

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
		
		val w = new Array[Double](l.M);
		solveEigenvalueProblem(l as DenseMatrix, d as DenseMatrix, w);
		
		Console.OUT.println(l);
		for(pt in w){
			Console.OUT.println(w(pt));
		}
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
	
	private def kmeans(k:Int, dim:Int, points:Array[Float]): ClusteringResult {
		
		return null;
	}
}