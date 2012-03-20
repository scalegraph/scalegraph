package org.scalegraph.clustering;

import x10.io.File;
import x10.io.FileWriter;
import x10.io.Printer;
import x10.util.ArrayBuilder;
import x10.util.HashMap;
import x10.util.Random;
import x10.util.Timer;
import x10.matrix.Matrix;
import x10.matrix.DenseMatrix;
import x10.matrix.Vector;
import x10.matrix.dist.DistDenseMatrix;

import org.scalegraph.graph.PlainGraph;

public class DistSpectralClustering {
	
	private var graph:PlainGraph;
	private var IDtoIDX:HashMap[Long, Int];  // ID is vertex ID PlainGraph has
	private var IDXtoID:HashMap[Int, Long];  // IDX is index in matrix
	
	public def this(g:PlainGraph){
		graph = g;
	}
	
	/*
	 * need: lengths of edges of an undirected graph
	 * step 1: make a similarity matrix
	 * step 2: make a degree matrix
	 * step 3: make a Laplacian matrix
	 * step 4: solve a generalized eigenvalue plobrem
	 * step 5: apply k-means algorithm to eigenvectors
	 */
	public def run(nClusters:Int): ClusteringResult {
		makeCorrespondenceBetweenIDandIDX();
		
		val l:DenseMatrix = getEigenvectors();  // step 1-4
		if(l == null){
			return null;
		}
		
		/*
		 * copy eigenvectors to DistArray
		 * Eigenvector which correspond to eigenvalue 0 is not used
		 */
		val nPoints = l.M;
		val points = DistArray.make[Vector](Dist.makeBlock(0..(nPoints-1)), (Point) => Vector.make(nClusters));
		finish for(p in points.dist.places()) async at(p) {
			for([i] in points.dist.get(p)){
				//Console.OUT.println("point: [" + i + "]");
				for(var j:Int = 0; j < nClusters; j++){
					points(i)(j) = l(i, j + 1);
				}
			}
		}
		
		val resultArray:DistArray[Int] = kmeans(nClusters, points);  // step 5
		val result:ClusteringResult = makeClusteringResult(nClusters, resultArray);
		
		/*
		val p:Printer = new Printer(new FileWriter(new File("/data0/t2gsuzumuralab/ogata/Developments/ScaleGraph/result.txt")));
		p.printf("%d %d\n", nPoints, nClusters);
		for([i] in points){
			p.printf("%d %lf %lf\n", result.getCluster(IDXtoID.get(i)()), points(i)(0), points(i)(1));
		}
		p.close();
		*/
		
		return result;
	}
	
	private def makeCorrespondenceBetweenIDandIDX(): void {
		val nVertices:Int = graph.getVertexCount() as Int;
		val vertexList:DistArray[Long] = graph.getVertexList();
		IDtoIDX = new HashMap[Long, Int](nVertices);
		IDXtoID = new HashMap[Int, Long](nVertices);
		Console.OUT.println("nVertices = " + nVertices);
		
		val globalIDtoIDX = GlobalRef[HashMap[Long, Int]](IDtoIDX);
		val globalIDXtoID = GlobalRef[HashMap[Int, Long]](IDXtoID);
		var counter:Int = 0;
		val there = here;
		finish for(p in vertexList.dist.places()) async at(p) {
			for(vpt in vertexList.dist.get(p)){
				val vertexID:Long = vertexList(vpt);
				if(vertexID != -1l) at(there) atomic {
					globalIDtoIDX().put(vertexID, counter);
					globalIDXtoID().put(counter, vertexID);
					counter++;
				}
			}
		}
	}
	
	private def getEigenvectors(): DenseMatrix {
		val nVertices:Int = graph.getVertexCount() as Int;
		val d = DenseMatrix.make(nVertices, nVertices);
		val l = DenseMatrix.make(nVertices, nVertices);
		
		/* make degree matrix and Laplacian matrix */
		finish for(vertexID in IDtoIDX.keySet()) async {
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
		val info = solveEigenvalueProblem(l, d, w);  // step 4
		if(info == 0l){
			Console.OUT.println("finished");
		}else{
			Console.OUT.println("cannot solve eigenvalue problem");
			return null;
		}
		//Console.OUT.println(l);
		return l;
	}
	
	private def solveEigenvalueProblem(a:DenseMatrix{self.M==self.N}, b:DenseMatrix{self.M==self.N}, w:Array[Double](1)): Long {
		val n = a.M;
		val work = new Array[Double](n * n);
		var info:Long = 0;
		LAPACK.dsygvWrap(1, 'V', 'U', n, a.d, n, b.d, n, w, work, n * n, info);
		return info;
	}
	
	private def kmeans(k:Int, points:DistArray[Vector]): DistArray[Int] {
		val dim:Int = k;
		val nPoints:Int = points.dist.region.size();
		//val random = PlaceLocalandle.make[Random](Dist.makeUnique(), () => new Random(Timer.nanoTime()));
		val localCurClusters = PlaceLocalHandle.make[Array[Vector]](Dist.makeUnique(), () => new Array[Vector](k, (Int) => Vector.make(dim)));
		val localNewClusters = PlaceLocalHandle.make[Array[Vector]](Dist.makeUnique(), () => new Array[Vector](k, (Int) => Vector.make(dim)));
		val localClusterCounts = PlaceLocalHandle.make[Array[Int]](Dist.makeUnique(), () => new Array[Int](k, 0));
		val curClusters = new Array[Vector](k, (Int) => Vector.make(dim));
		val newClusters = new Array[Vector](k, (Int) => Vector.make(dim));
		val clusterCounts = new Array[Int](k, 0);
		val result = DistArray.make[Int](points.dist);
		val iterations = 50;
		
		/* initialize */
		val random = new Random(Timer.milliTime());
		for(i in points){
			val c = random.nextInt(k);
			curClusters(c).cellAdd(at(points.dist(i)) points(i));
			clusterCounts(c)++;
			at(result.dist(i)) result(i) = c;
		}
		/* compute central points of current clusters */
		for(i in curClusters){
			curClusters(i).cellDiv(clusterCounts(i));
			clusterCounts(i) = 0;  // reset counter
		}
		/* debug print */
		//Console.OUT.println(result);
		
		for(iter in 1..iterations){
			Console.OUT.println("iteration: " + iter);
			
			/* copy current clusters to local current clusters */
			finish for(p in Place.places()) async at(p) {
				for(var i:Int = 0; i < k; i++){
					localCurClusters()(i) = curClusters(i);
					localNewClusters()(i).reset();
					localClusterCounts()(i) = 0;
				}
			}
			
			/* compute local new clusters and local counters */
			finish for(p in Place.places()) async at(p) {
				for(i in points.dist.get(p)){
					/* compute which cluster is closest to each point */
					var minDist:Double = Double.MAX_VALUE;
					var closestCluster:Int = 0;
					for(var j:Int = 0; j < k; j++){
						var dist:Double = (localCurClusters()(j) - points(i)).norm();
						if(dist < minDist){
							minDist = dist;
							closestCluster = j;
						}
					}
					/* add the point to the cluster */
					localNewClusters()(closestCluster).cellAdd(points(i));
					localClusterCounts()(closestCluster) = localClusterCounts()(closestCluster) + 1;
					result(i) = closestCluster;
				}
			}
			
			/* merge local new clusters into new clusters */
			val newClustersGR = GlobalRef(newClusters);
			val clusterCountsGR = GlobalRef(clusterCounts);
			val there = here;
			finish for(p in Place.places()) async at(p) {
				val tmpNewClusters = localNewClusters();
				val tmpClusterCounts = localClusterCounts();
				at(there) atomic for(var i:Int = 0; i < k; i++){
					newClustersGR()(i).cellAdd(tmpNewClusters(i));
					clusterCountsGR()(i) += tmpClusterCounts(i);
				}
			}
			
			/* compute central points of new clusters */
			for(i in newClusters){
				newClusters(i).cellDiv(clusterCounts(i));
				clusterCounts(i) = 0;  // reset counter
			}
			
			/* debug print */
			//Console.OUT.println(result);
			
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
	
	private def makeClusteringResult(nClusters:Int, array:DistArray[Int](1)): ClusteringResult {
		val VtoC = new HashMap[Long, Int](array.dist.region.size());
		val CtoV = new HashMap[Int, Array[Long]](nClusters);
		val tmpLists = new Array[ArrayBuilder[Long]](nClusters, (Int) => new ArrayBuilder[Long]());
		
		finish for(p in array.dist.places()) async {
			for([i] in array.dist.get(p)){
				val vertexID = IDXtoID(i)();
				val clusterNum = at(p) array(i);
				atomic {
					VtoC.put(vertexID, clusterNum);
					tmpLists(clusterNum).add(vertexID);
				}
			}
		}
		for([i] in tmpLists){
			CtoV.put(i, tmpLists(i).result());
		}
		
		return new ClusteringResult(VtoC, CtoV);
	}
}