package org.scalegraph.clustering.psc;

import x10.util.ArrayBuilder;
import x10.util.HashMap;
import x10.util.Random;
import x10.util.Timer;

import org.scalegraph.clustering.Clustering;
import org.scalegraph.clustering.ClusteringResult;
import org.scalegraph.clustering.Vector;
import org.scalegraph.graph.PlainGraph;
import test.scalegraph.clustering.StopWatch;

public class ParallelSpectralClustering implements Clustering {
	
	private val matrix:LaplacianMatrix;
	private val nClusters:Int;
	
	private var tol:Double;
	private var ncv:Int;
	private var maxitr:Int;
	
	public def this(graph:PlainGraph, nClusters:Int){
		val sw = new StopWatch();
		sw.start();
		this.matrix = new LaplacianMatrix(graph);
		Console.OUT.println("make Laplacian matrix: " + sw.get());
		//val d = new Array[Double](5, (i:Int)=>(i+1.0));
		//this.matrix = new DiagonalMatrix(d);
		this.nClusters = nClusters;
		
		this.tol = 0.001;
		this.ncv = 2 * nClusters < matrix.size ? 2 * nClusters : matrix.size - 1;
		this.maxitr = 300;
		
		//Console.OUT.println(matrix);
	}
	
	public def this(graph:PlainGraph, nClusters:Int, tol:Double, ncv:Int, maxitr:Int){
		this(graph, nClusters);
		this.tol = tol;
		this.ncv = ncv;
		this.maxitr = maxitr;
	}
	
	public def run(): ClusteringResult {
		val sw = new StopWatch();
		sw.start();
		val z = solveEigenvalueProblem();
		Console.OUT.println("solve eigenvalue problem: " + sw.get());
		if(z == null) return null;
		
		val degree = this.matrix.degree;
		
		val nPoints = matrix.size;
		val points = new Array[Vector](nPoints);
		for(var i:Int = 0; i < nPoints; i++){
			points(i) = Vector.make(nClusters);
			for(var j:Int = 0; j < nClusters; j++){
				points(i)(j) = z(i + j * nPoints) / Math.sqrt(degree(i));
				//Console.OUT.print(points(i)(j) + " ");
			}
			//Console.OUT.println("");
		}
		Console.OUT.println("make points: " + sw.get());
		
		val resultArray = kmeans(nClusters, points);
		Console.OUT.println("k-means: " + sw.get());
		
		val result:ClusteringResult = makeClusteringResult(nClusters, resultArray);
		Console.OUT.println("make result: " + sw.get());
		return result;
	}
	
	private def solveEigenvalueProblem(){
		
		var ido:Int = 0;
		val bmat:Char = 'I';
		val n:Int = matrix.size;
		val which:Int = ARPACK.SA;
		val nev:Int = nClusters;
		val tol:Double = this.tol;
		val resid:Array[Double](1) = new Array[Double](n);
		val ncv:Int = this.ncv;
		val v:Array[Double](1) = new Array[Double](n*ncv);
		val ldv:Int = n;
		val iparam:Array[Int](1) = new Array[Int](11);
		val ipntr:Array[Int](1) = new Array[Int](11);
		val workd:Array[Double](1) = new Array[Double](3*n);
		val lworkl:Int = ncv * (ncv + 8);
		val workl:Array[Double](1) = new Array[Double](lworkl);
		var info:Int = 0;
		
		iparam(0) = 1;
		iparam(2) = this.maxitr;
		iparam(3) = 1;
		iparam(6) = 1;
		
		val rvec:Int = 1;
		val howmny:Char = 'A';
		val select:Array[Int](1) = new Array[Int](ncv);
		val d:Array[Double](1) = new Array[Double](nev);
		val z:Array[Double](1) = new Array[Double](nev * ldv);
		val ldz:Int = n;
		val sigma:Double = 0.0;
		
		var iter:Int = 0;
		while(true){
			if(iter % 100 == 0){
				Console.OUT.println("iter = " + iter);
			}
			iter++;
			
			ARPACK.dsaupd(ido, bmat, n, which, nev, tol,
					resid, ncv, v, ldv, iparam, ipntr,
					workd, workl, lworkl, info);
			
			if(info < 0){
				switch(info){
				default:
					Console.OUT.println("ARPACK: dsaupd: unrecognized return value: " + info);
				}
			}else if(info > 0){
				switch(info){
				case 1:
					Console.OUT.println("ARPACK: dsaupd: reached to max iteration");
					break;
				default:
					Console.OUT.println("ARPACK: dsaupd: unrecognized return value: " + info);
				}
			}
			
			if(ido == -1 || ido == 1){
				matrix.mult(workd, ipntr(0) - 1, ipntr(1) - 1);
			}else if(ido == 2){
				for(var i:Int = 0; i < n; i++){
					workd(ipntr(1) - 1 + i) = workd(ipntr(0) - 1 + i);
				}
			}else{
				Console.OUT.println("ido = " + ido);
				break;
			}
		}
		
		Console.OUT.println("iterations = " + iparam(2));
		Console.OUT.println("converged Ritz values = " + iparam(4));
		
		if(iparam(4) < nClusters){
			Console.OUT.println("ARPACK: dsaupd: could not calculate all required Ritz values");
			return null;
		}
		
		ARPACK.dseupd(rvec, howmny, select, d, z, ldz,
				sigma, bmat, n, which, nev, tol, resid,
				ncv, v, ldv, iparam, ipntr, workd,
				workl, lworkl, info);
		
		if(info < 0){
			Console.OUT.println("ARPACK: dseupd: bad termination: " + info);
		}
		
		//Console.OUT.println(d);
		//Console.OUT.println(z);
		
		return z;
	}
	
	private def kmeans(k:Int, points:Array[Vector]){
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
			val vertexID = matrix.num.getID(i)();
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