package org.scalegraph.clustering.psc;

import x10.util.ArrayBuilder;
import x10.util.Box;
import x10.util.HashMap;
import x10.util.Pair;
import x10.util.Random;
import x10.util.Timer;

import org.scalegraph.clustering.Clustering;
import org.scalegraph.clustering.ClusteringResult;
import org.scalegraph.clustering.Vector;
import org.scalegraph.graph.PlainGraph;
import test.scalegraph.clustering.StopWatch;

public class ParallelSpectralClustering implements Clustering {
	
	private val nClusters:Int;
	private val graph:PlainGraph;
	private val vertexList:DistArray[Long];
	private val vertexInfo:VertexInfo;
	
	private var matrix:PlaceLocalHandle[SparseMatrix];
	//private var firstColumnIndex:PlaceLocalHandle[Array[Int]];
	//private var entries:PlaceLocalHandle[Array[Pair[Int, Double]]];
	//private var num:Numbering;
	
	private var tol:Double;
	private var ncv:Int;
	private var maxitr:Int;
	
	public def this(graph:PlainGraph, nClusters:Int){
		val sw = new StopWatch();
		
		this.nClusters = nClusters;
		this.graph = graph;
		sw.start();
		//this.vertexList = graph.getVertexListDualArrays(4).preArray;
		this.vertexList = graph.getVertexList();
		sw.print("get vertex list");
		this.vertexInfo = VertexInfo.make(graph);
		sw.print("make vertex info");
		//vertexInfo.print();
		
		this.tol = 0.000;
		this.ncv = 2 * nClusters;
		this.maxitr = 1000;
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
		
		makeMatrix();
		sw.print("make matrix");
		/*for(p in Place.places()) at(p) {
			Console.OUT.println("*** " + here + " ***");
			Console.OUT.println(matrix());
		}*/
		
		val z = solveEigenvalueProblem();
		sw.print("solve eigenvalue problem");
		if(z == null) return null;
		
		val nPoints = vertexInfo.size();
		val points = new Array[Vector](nPoints);
		for(var i:Int = 0; i < nPoints; i++){
			points(i) = Vector.make(nClusters);
			var sum:Double = 0.0;
			for(var j:Int = 0; j < nClusters; j++){
				sum += z(i + j * nPoints);
			}
			for(var j:Int = 0; j < nClusters; j++){
				//points(i)(j) = z(i + j * nPoints) / sum;  // NJW
				//points(i)(j) = z(i + j * nPoints);  // Shi,Malik
				points(i)(j) = z(i + j * nPoints);  // Melia,Shi
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
	
	private def makeMatrix(){
		this.matrix = PlaceLocalHandle.make[SparseMatrix](Dist.makeUnique(), ()=>{
			val firstColumnIndexBuilder = new ArrayBuilder[Int]();
			val entriesBuilder = new ArrayBuilder[Pair[Int, Double]]();
			
			var j:Int = 0;
			for(var localVertexIDX:Int = 0; localVertexIDX < vertexInfo.IDXtoID().size(); localVertexIDX++){
				val vertexIDX = localVertexIDX + vertexInfo.offset(here.id);
				val vertexID:Long = vertexInfo.getID(vertexIDX)();
				val degree:Int = vertexInfo.getDegreeFromHere(vertexIDX)();
				//if(vertexID < 0) continue;
				
				val neighbours = graph.getNeighbours(vertexID);
				
				firstColumnIndexBuilder.add(j);
				//entriesBuilder.add(Pair[Int, Double](vertexIDX, 1.0));  // NJW
				//entriesBuilder.add(Pair[Int, Double](vertexIDX, 1.0));  // Shi,Malik
				entriesBuilder.add(Pair[Int, Double](vertexIDX, 1.0 / (degree + 1)));  // Melia,Shi
				j++;
				if(neighbours != null){
					//Console.OUT.println("neighbour of " + vertexID + " is " + neighbours);
					for(npt in neighbours){
						val neighbourID:Long = neighbours(npt);
						val boxNeighbourIDX:Box[Int] = vertexInfo.getIDX(neighbourID);
						if(boxNeighbourIDX != null){
							val neighbourIDX = boxNeighbourIDX();
							val neighbourDegree = vertexInfo.getDegree(neighbourIDX)();
							//entriesBuilder.add(Pair[Int, Double](neighbourIDX, -1 / Math.sqrt(degree * neighbourDegree)));  // NJW: LA
							//entriesBuilder.add(Pair[Int, Double](neighbourIDX, -1.0 / degree));  // Shi,Malik: SA
							entriesBuilder.add(Pair[Int, Double](neighbourIDX, 1.0 / (degree + 1)));  // Melia,Shi: LA
							j++;
						}
					}
				}
			}
			firstColumnIndexBuilder.add(j);
			val m = new SparseMatrix();
			m.firstColumnIndex = firstColumnIndexBuilder.result();
			m.entries = entriesBuilder.result();
			m.size = m.firstColumnIndex.size - 1;
			m
		});
	}
	
	private def solveEigenvalueProblem(){
		
		//val comm:Int = 0x44000000;  // MPI_COMM_WORLD
		var ido:Int = 0;
		val bmat:Char = 'I';
		val n:Int = vertexInfo.size();
		val which:Int = ARPACK.LA;
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
				val x = new Array[Double](vertexInfo.size());
				val y = new Array[Double](vertexInfo.size());
				val gy = GlobalRef(y);
				for(var i:Int = 0; i < x.size; i++){
					x(i) = workd(ipntr(0) - 1 + i);
				}
				finish for(p in Place.places()) async at(p) {
					val sub_y = matrix().mult(x);
					at(gy) {
						for(var i:Int = 0; i < sub_y.size; i++){
							gy()(i + vertexInfo.offset(p.id)) = sub_y(i);
						}
					}
				}
				for(var i:Int = 0; i < y.size; i++){
					workd(ipntr(1) - 1 + i) = y(i);
				}
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
		
		if(iparam(4) < nev){
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
		
		Console.OUT.println(d);
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
			val vertexID = vertexInfo.getID(i)();
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