package org.scalegraph.clustering;

import x10.util.ArrayBuilder;
import x10.util.HashMap;
import x10.util.Random;
import x10.util.Timer;
import x10.matrix.Matrix;
import x10.matrix.DenseMatrix;
import x10.matrix.Vector;

import org.scalegraph.graph.PlainGraph;

public class SpectralClustering {
	
	private var graph:PlainGraph;
	private var IDtoIDX:HashMap[Long, Int];  // ID is vertex ID PlainGraph has
	private var IDXtoID:HashMap[Int, Long];  // IDX is index in matrix
	
	public def this(g:PlainGraph){
		graph = g;
	}
	
	/*
	 * need: lengths of edges of an undirected graph
	 * step 1: make a similarity (or adjacency) matrix
	 * step 2: make a degree matrix
	 * step 3: make a Laplacian matrix
	 * step 4: solve a generalized eigenvalue plobrem
	 * step 5: apply k-means algorithm to eigenvectors
	 */
	public def run(nClusters:Int): ClusteringResult {
		makeCorrespondenceBetweenIDandIDX();
		
		val s:Matrix = getSimilarityMatrix();  // step 1
		val d:Matrix = getDegreeMatrix(s);     // step 2
		val l:Matrix = d - s;                  // step 3
		Console.OUT.println(s);
		Console.OUT.println(d);
		Console.OUT.println(l);
		
		val nPoints = l.M;
		val w = new Array[Double](nPoints);
		val info = solveEigenvalueProblem(l as DenseMatrix, d as DenseMatrix, w);  // step 4
		if(info != 0l){
			Console.OUT.println("cannot solve eigenvalue problem");
			return null;
		}
		
		Console.OUT.println(l);
		for(pt in w){
			Console.OUT.println(w(pt));
		}
		
		/*
		 * copy eigenvectors to Array
		 * Eigenvector which correspond to eigenvalue 0 is not used
		 */
		val points = new Array[Vector](nPoints);
		for(var i:Int = 0; i < nPoints; i++){
			points(i) = Vector.make(nClusters);
			for(var j:Int = 0; j < nClusters; j++){
				points(i)(j) = l(i, j + 1);
			}
		}
		
		val resultArray:Array[Int] = kmeans(nClusters, points);  // step 5
		val result:ClusteringResult = makeClusteringResult(nClusters, resultArray);
		return result;
	}
	
	private def makeCorrespondenceBetweenIDandIDX(): void {
		val nVertices:Int = graph.getVertexCount() as Int;
		val vertexList:DistArray[Long] = graph.getVertexList();
		IDtoIDX = new HashMap[Long, Int](nVertices);
		IDXtoID = new HashMap[Int, Long](nVertices);
		Console.OUT.println("nVertices = " + nVertices);
		
		var count:Int = 0;
		for(vpt in vertexList) {
			val vertexID:Long = at(vertexList.dist(vpt)) vertexList(vpt);
			if(vertexID != -1l){
				IDtoIDX.put(vertexID, count);
				IDXtoID.put(count, vertexID);
				count++;
			}
		}
	}
	
	private def getSimilarityMatrix(): Matrix {
		val nVertices:Int = graph.getVertexCount() as Int;
		val matrix = new DenseMatrix(nVertices, nVertices);
		
		for(entry in IDtoIDX.entries()){
			val vertexID:Long = entry.getKey();
			val neighbours:Array[Long] = graph.getOutNeighbours(vertexID);
			val m:Int = IDtoIDX.get(vertexID)();
			
			matrix(m, m) = 1.0;
			if(neighbours != null){
				for(npt in neighbours){
					val n:Int = IDtoIDX.get(neighbours(npt))();
					matrix(m, n) = 1.0;
					matrix(n, m) = 1.0;
				}
			}
		}
		
		return matrix;
	}
	
	/*private def getSimilarityMatrix(): Matrix {
		val m:Matrix = new DenseMatrix(6, 6);
		m(0,0) = 1; m(0,1) = 1; m(0,2) = 1; m(0,3) = 1; m(0,4) = 0; m(0,5) = 0;
		m(1,0) = 1; m(1,1) = 1; m(1,2) = 1; m(1,3) = 0; m(1,4) = 0; m(1,5) = 0;
		m(2,0) = 1; m(2,1) = 1; m(2,2) = 1; m(2,3) = 0; m(2,4) = 0; m(2,5) = 0;
		m(3,0) = 1; m(3,1) = 0; m(3,2) = 0; m(3,3) = 1; m(3,4) = 1; m(3,5) = 1;
		m(4,0) = 0; m(4,1) = 0; m(4,2) = 0; m(4,3) = 1; m(4,4) = 1; m(4,5) = 1;
		m(5,0) = 0; m(5,1) = 0; m(5,2) = 0; m(5,3) = 1; m(5,4) = 1; m(5,5) = 1;
		return m;
	}*/
	
	private def getDegreeMatrix(m:Matrix{self.M==self.N}): Matrix {
		val matrix:Matrix = new DenseMatrix(m.M, m.N);
		for(var i:Int = 0; i < m.M; i++){
			var sum:Int = 0;
			for(var j:Int = 0; j < m.N; j++){
				sum += m(i, j);
			}
			matrix(i, i) = sum;
		}
		return matrix;
	}
	
	/*private def getDegreeMatrix(): Matrix {
		val m:Matrix = new DenseMatrix(6, 6);
		m(0,0) = 4; m(0,1) = 0; m(0,2) = 0; m(0,3) = 0; m(0,4) = 0; m(0,5) = 0;
		m(1,0) = 0; m(1,1) = 3; m(1,2) = 0; m(1,3) = 0; m(1,4) = 0; m(1,5) = 0;
		m(2,0) = 0; m(2,1) = 0; m(2,2) = 3; m(2,3) = 0; m(2,4) = 0; m(2,5) = 0;
		m(3,0) = 0; m(3,1) = 0; m(3,2) = 0; m(3,3) = 4; m(3,4) = 0; m(3,5) = 0;
		m(4,0) = 0; m(4,1) = 0; m(4,2) = 0; m(4,3) = 0; m(4,4) = 3; m(4,5) = 0;
		m(5,0) = 0; m(5,1) = 0; m(5,2) = 0; m(5,3) = 0; m(5,4) = 0; m(5,5) = 3;
		return m;
	}*/
	
	private def solveEigenvalueProblem(a:DenseMatrix{self.M==self.N}, b:DenseMatrix{self.M==self.N}, w:Array[Double](1)): Long {
		val n = a.M;
		val work = new Array[Double](n * n);
		var info:Long = 0;
		LAPACK.dsygvWrap(1, 'V', 'U', n, a.d, n, b.d, n, w, work, n * n, info);
		return info;
	}
	
	private def kmeans(k:Int, points:Array[Vector]): Array[Int] {
		val dim:Int = k;
		val nPoints:Int = points.size;
		val curClusters = new Array[Vector](k, (Int) => Vector.make(dim));
		val newClusters = new Array[Vector](k, (Int) => Vector.make(dim));
		val clusterCounts = new Array[Int](k, 0);
		val result = new Array[Int](nPoints);
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
		/*for(i in result){
			Console.OUT.println("" + i + points(i) + " -> [" + result(i) + "]" + curClusters(result(i)));
		}*/
		
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
			/*for(i in result){
				Console.OUT.println("" + i + points(i) + " -> [" + result(i) + "]" + newClusters(result(i)));
			}*/
			
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
				Array.copy(newClusters(i).rail(), curClusters(i).rail());
				//newClusters(i).copyTo(curClusters(i));
				newClusters(i).reset();
			}
		}
		
		return result;
	}
	
	private def makeClusteringResult(nClusters:Int, array:Array[Int](1)): ClusteringResult {
		val VtoC = new HashMap[Long, Int](array.size);
		val CtoV = new HashMap[Int, Array[Long]](nClusters);
		val tmpLists = new Array[ArrayBuilder[Long]](nClusters, (Int) => new ArrayBuilder[Long]());
		
		for([i] in array){
			val vertexID = IDXtoID(i)();
			val clusterNum = array(i);
			VtoC.put(vertexID, clusterNum);
			tmpLists(clusterNum).add(vertexID);
		}
		for([i] in tmpLists){
			CtoV.put(i, tmpLists(i).result());
		}
		
		return new ClusteringResult(VtoC, CtoV);
	}
}