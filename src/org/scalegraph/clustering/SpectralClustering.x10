package org.scalegraph.clustering;

import x10.io.File;
import x10.io.FileWriter;
import x10.io.Printer;
import x10.util.ArrayBuilder;
import x10.util.HashMap;
import x10.util.Random;
import x10.util.Timer;
//import x10.matrix.Matrix;
//import x10.matrix.DenseMatrix;
//import x10.matrix.Vector;

import org.scalegraph.graph.PlainGraph;

public class SpectralClustering implements Clustering {
	
	private val graph:PlainGraph;
	private val nClusters:Int;
	private val nVertices:Int;
	private val IDtoIDX:HashMap[Long, Int];  // ID is vertex ID PlainGraph has
	private val IDXtoID:HashMap[Int, Long];  // IDX is index in matrix
	
	public def this(g:PlainGraph, nc:Int){
		graph = g;
		nClusters = nc;
		nVertices = graph.getVertexCount() as Int;
		IDtoIDX = new HashMap[Long, Int](nVertices);
		IDXtoID = new HashMap[Int, Long](nVertices);
		Console.OUT.println("nVertices = " + nVertices);
	}
	
	/*
	 * step 1: make a degree matrix and a Laplacian matrix
	 * step 2: solve a generalized eigenvalue plobrem
	 * step 3: apply k-means algorithm to eigenvectors
	 */
	public def run(): ClusteringResult {
		makeCorrespondenceBetweenIDandIDX();
		
		val l:DenseMatrix = getEigenvectors();  // step 1,2
		if(l == null){
			return null;
		}
		//Console.OUT.println(l);
		
		/*
		 * copy eigenvectors to Array
		 * Eigenvector which correspond to eigenvalue 0 is not used
		 */
		/*val nPoints = l.M;
		val points = new Array[Vector](nPoints);
		for(var i:Int = 0; i < nPoints; i++){
			points(i) = Vector.make(nClusters);
			for(var j:Int = 0; j < nClusters; j++){
				points(i)(j) = l(i, j);
			}
		}*/
		val nPoints = nVertices;
		val points = new Array[Vector](nVertices);
		for(var i:Int = 0; i < nVertices; i++){
			var sum:Double = 0.0;
			points(i) = Vector.make(nClusters);
			for(var j:Int = 0; j < nClusters; j++){
				points(i)(j) = l(i, j);
				sum += l(i, j);
			}
			for(var j:Int = 0; j < nClusters; j++){
				points(i)(j) /= sum;
			}
			//Console.OUT.println(points(i));
		}
		
		val resultArray:Array[Int] = kmeans(nClusters, points);  // step 3
		val result:ClusteringResult = makeClusteringResult(nClusters, resultArray);
		
		/*
		//val p:Printer = new Printer(new FileWriter(new File("/data0/t2gsuzumuralab/ogata/Developments/ScaleGraph/result.txt")));
		val p:Printer = new Printer(new FileWriter(new File("/nfs/home/ogata/workspace/ScaleGraph/result.txt")));
		p.printf("%d %d\n", nPoints, nClusters);
		for([i] in points){
			p.printf("%d %lf %lf\n", result.getCluster(IDXtoID.get(i)()), points(i)(0), points(i)(1));
		}
		p.close();
		*/
		
		return result;
	}
	
	private def makeCorrespondenceBetweenIDandIDX(): void {
		val vertexList:DistArray[Long] = graph.getVertexList();
		var counter:Int = 0;
		for(vpt in vertexList) {
			val vertexID:Long = at(vertexList.dist(vpt)) vertexList(vpt);
			if(vertexID != -1l){
				IDtoIDX.put(vertexID, counter);
				IDXtoID.put(counter, vertexID);
				counter++;
			}
		}
	}
	
	private def getEigenvectors(): DenseMatrix {
		val nVertices:Int = graph.getVertexCount() as Int;
		val d = DenseMatrix.make(nVertices, nVertices);
		val l = DenseMatrix.make(nVertices, nVertices);
		
		/* make degree matrix and Laplacian matrix */
		for(vertexID in IDtoIDX.keySet()) {
			val outNeighbours:Array[Long] = graph.getOutNeighbours(vertexID);
			val inNeighbours:Array[Long] = graph.getInNeighbours(vertexID);
			val nNeighbours = (outNeighbours != null ? outNeighbours.size : 0) + (inNeighbours != null ? inNeighbours.size : 0);
			val m:Int = IDtoIDX.get(vertexID)();
			
			d(m, m) = nNeighbours + 1.0;
			l(m, m) = nNeighbours;
			if(outNeighbours != null){
				for(npt in outNeighbours){
					val n:Int = IDtoIDX.get(outNeighbours(npt))();
					l(m, n) = -1.0;
				}
			}
			if(inNeighbours != null){
				for(npt in inNeighbours){
					val n:Int = IDtoIDX.get(inNeighbours(npt))();
					l(m, n) = -1.0;
				}
			}
		}
		//Console.OUT.println(d);
		//Console.OUT.println(l);
		
		Console.OUT.println("start solving eigenvalue problem");
		val nPoints = l.M;
		val w = new Array[Double](nPoints);
		val info = solveEigenvalueProblem(l, d, w);
		if(info == 0){
			Console.OUT.println("finished");
		}else{
			Console.OUT.println("cannot solve eigenvalue problem");
			return null;
		}
		//Console.OUT.println(l);
		return l;
	}
	
	private def solveEigenvalueProblem(a:DenseMatrix{self.M==self.N}, b:DenseMatrix{self.M==self.N}, w:Array[Double](1)): Int {
		val n = a.M;
		val work = new Array[Double](n * n);
		var info:Int = 0;
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
		val iterations = 1000;
		
		/* initialize */
		val random = new Random(Timer.milliTime());
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