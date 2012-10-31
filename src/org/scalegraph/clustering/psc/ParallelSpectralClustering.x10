package org.scalegraph.clustering.psc;

import x10.util.ArrayBuilder;
import x10.util.ArrayList;
import x10.util.Box;
import x10.util.HashMap;
import x10.util.HashSet;
import x10.util.Pair;
import x10.util.Random;
import x10.util.Timer;
import x10.util.Team;
import x10.util.concurrent.Lock;

import org.scalegraph.clustering.Clustering;
import org.scalegraph.clustering.ClusteringResult;
import org.scalegraph.clustering.Vector;
import org.scalegraph.clustering.MPI;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.util.VertexInfo;
import org.scalegraph.util.Stopwatch;

public class ParallelSpectralClustering implements Clustering {
	
	private val nClusters:Int;
	private val graph:PlainGraph;
	private val vertexList:DistArray[Long];
	private val vertexInfo:VertexInfo;
	
	private var matrix:PlaceLocalHandle[SparseMatrix[Double]];
	private var x:PlaceLocalHandle[Array[Double]];
	private var remoteX:Array[RemoteArray[Double]];
	private val team:Team;
	
	private var tol:Double;
	private var ncv:Int;
	private var maxitr:Int;
	
	public def this(graph:PlainGraph, nClusters:Int){
		val sw = new Stopwatch();
		
		this.nClusters = nClusters;
		this.graph = graph;
		sw.start();
		//this.vertexList = graph.getVertexListDualArrays(Place.MAX_PLACES).preArray;
		this.vertexList = graph.getVertexList();
		sw.print("get vertex list");
		this.vertexInfo = VertexInfo.make(graph);
		sw.print("make vertex info");
		Console.OUT.println("vertexInfo.size() = " + vertexInfo.size());
		
		this.team = Team.WORLD;
		
		this.tol = 0.000;
		this.ncv = 2 * nClusters;
		this.maxitr = 10000;
	}
	
	public def this(graph:PlainGraph, nClusters:Int, tol:Double, ncv:Int, maxitr:Int){
		this(graph, nClusters);
		this.tol = tol;
		this.ncv = ncv;
		this.maxitr = maxitr;
	}
	
	public def run(): ClusteringResult {
		val vertexInfo = this.vertexInfo;
		val sw = new Stopwatch();
		sw.start();
		
		this.x = PlaceLocalHandle.make[Array[Double]](Dist.makeUnique(), ()=>new Array[Double](vertexInfo.size()));
		this.remoteX = new Array[RemoteArray[Double]](Place.MAX_PLACES);
		this.remoteX(here.id) = new RemoteArray[Double](this.x());
		for(p in Place.places()){
			if(p.id == here.id) continue;
			this.remoteX(p.id) = at(p) new RemoteArray[Double](x());
		}
		
		makeMatrix();
		sw.print("make matrix");
		/*for(p in Place.places()) at(p) {
			Console.OUT.println("*** " + here + " ***");
			Console.OUT.println(matrix());
		}*/
		
		val nPoints = vertexInfo.size();
		val points = PlaceLocalHandle.make[Array[Vector]](Dist.makeUnique(), ()=>new Array[Vector](vertexInfo.getVertexCount(here)));
		
		val gsw = GlobalRef(sw);
		finish for(p in Place.places()) async at(p) {
			val z = solveEigenvalueProblem();
			if(p.id == 0) at(gsw) gsw().print("solve eigenvalue problem");
			//if(z == null) return null;
			
			val nloc = vertexInfo.getVertexCount(here);
			finish for(i in points()) async {
				points()(i) = Vector.make(nClusters);
				for(var j:Int = 0; j < nClusters; j++){
					points()(i)(j) = z(i + j * nloc);
				}
			}
		}
		Console.OUT.println("make points: " + sw.get());
		
		val kmeansResult = kmeans(nClusters, points);
		Console.OUT.println("k-means: " + sw.get());
		
		val result:ClusteringResult = makeClusteringResult(nClusters, kmeansResult);
		Console.OUT.println("make result: " + sw.get());
		return result;
	}
	
	/*private def makeMatrix(){
		this.matrix = PlaceLocalHandle.make[SparseMatrix](Dist.makeUnique(), ()=>{
			val firstColumnIndexBuilder = new ArrayBuilder[Int]();
			val entriesBuilder = new ArrayBuilder[Pair[Int, Double]]();
			
			var j:Int = 0;
			for(var localVertexIDX:Int = 0; localVertexIDX < vertexInfo.IDXtoID().size(); localVertexIDX++){
				val vertexIDX = localVertexIDX + vertexInfo.offset(here.id);
				val vertexID:Long = vertexInfo.getIDFromHere(vertexIDX)();
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
	}*/
	
	private def makeMatrix(){
		val vertexInfo = this.vertexInfo;
		this.matrix = PlaceLocalHandle.make[SparseMatrix[Double]](Dist.makeUnique(), ()=>{
			val nVertices = vertexInfo.getVertexCount(here);
			val headIndex = new Array[Int](nVertices + 1);
			val entry:Array[Pair[Int, Double]];
			//val gEntryBuilder = GlobalRef(entryBuilder);
			val recvHash = new HashMap[Long, ArrayBuilder[Int]](nVertices);
			val allNeighboursID = new Array[HashSet[Long]](Place.MAX_PLACES, (Int)=> new HashSet[Long]());
			val allNeighboursIDX = new Array[Array[Int]](Place.MAX_PLACES);
			val degree = new HashMap[Int, Int](nVertices);
			val lock = new Lock();
			val sw = new Stopwatch();
			sw.start();
			
			headIndex(0) = 0;
			
			var j:Int = 0;
			finish for(var i:Int = 0; i < nVertices; i++) {
				val localVertexIDX = i;
				//async {
					val vertexIDX = localVertexIDX + vertexInfo.offset(here.id);
					val vertexID:Long = vertexInfo.getIDFromHere(vertexIDX)();
					//if(vertexID < 0) continue;
					
					val neighbours = graph.getNeighbours(vertexID);
					degree.put(vertexIDX, neighbours.size);
					headIndex(localVertexIDX + 1) = headIndex(localVertexIDX) + neighbours.size;
					
					for(var npt:Int = 0; npt < neighbours.size; npt++){
						val neighbourID:Long = neighbours(npt);
						
						val box = recvHash.get(neighbourID);
						if(box == null){
							val builder = new ArrayBuilder[Int]().add(vertexIDX);
							recvHash.put(neighbourID, builder);
						}else{
							val builder = box().add(vertexIDX);
							recvHash.put(neighbourID, builder);
						}
						
						allNeighboursID(vertexInfo.getPlaceID(neighbourID)).add(neighbourID);
					}
				//}
			}
			sw.print("make matrix: make recvHash");
			
			entry = new Array[Pair[Int, Double]](headIndex(nVertices));
			val entryPointer = new Array[Int](nVertices, 0);
			
			finish for(p in Place.places()) async {
				val localNeighboursID = allNeighboursID(p.id);
				allNeighboursIDX(p.id) = at(p){
					val result = new Array[Int](localNeighboursID.size());
					var i:Int = 0;
					for(neighbourID in localNeighboursID){
						val box = vertexInfo.getIDXFromHere(neighbourID);
						if(box != null) result(i) = box();  // box must not be null
						i++;
					}
					result
				};
				
				var npt:Int = 0;
				for(neighbourID in localNeighboursID){
					val box = recvHash.get(neighbourID);
					if(box == null) continue;
					val vertexIDXs = box().result();
					for(var vpt:Int = 0; vpt < vertexIDXs.size; vpt++){
						val vertexIDX = vertexIDXs(vpt);
						val localVertexIDX = vertexIDX - vertexInfo.offset(here.id);
						val neighbourIDX = allNeighboursIDX(p.id)(npt);
						/*Console.OUT.print(here + "vertexIDX = " + vertexIDX + ", degree = ");
						val b = vertexInfo.getDegreeFromHere(vertexIDX);
						if(b == null){
							Console.OUT.println("null");
						}else{
							Console.OUT.println(b());
						}*/
						lock.lock();
						entry(headIndex(localVertexIDX) + entryPointer(localVertexIDX)) = Pair[Int, Double](neighbourIDX, 1.0 / degree.get(vertexIDX)());
						//Console.OUT.println("entry(" + (localVertexIDX + entryPointer(localVertexIDX)) + ") = [" + neighbourIDX + ", " + 1.0 / degree.get(vertexIDX)() + "])");
						entryPointer(localVertexIDX)++;
						lock.unlock();
					}
					npt++;
				}
			}
			sw.print("make matrix: make entry");
			//Console.OUT.println(entry);
			
			new SparseMatrix(nVertices, vertexInfo.size(), headIndex, entry)
		});
	}
	
	private def solveEigenvalueProblem(){
		val vertexInfo = this.vertexInfo;
		val n:Int = vertexInfo.size();
		val nloc:Int = matrix().getRowCount();
		
		val rank:Int = MPI.getRank();
		val comm:Int = 0x44000000;  // MPI_COMM_WORLD
		var ido:Int = 0;
		val bmat:Char = 'I';
		val which:Int = ARPACK.LA;
		val nev:Int = nClusters;
		val tol:Double = this.tol;
		val resid:Array[Double](1) = new Array[Double](nloc);
		val ncv:Int = this.ncv;
		val v:Array[Double](1) = new Array[Double](nloc * ncv);
		val ldv:Int = nloc;
		val iparam:Array[Int](1) = new Array[Int](11);
		val ipntr:Array[Int](1) = new Array[Int](11);
		val workd:Array[Double](1) = new Array[Double](3 * nloc);
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
		val z:Array[Double](1) = new Array[Double](nloc * nev);
		val ldz:Int = nloc;
		val sigma:Double = 0.0;
		
		var iter:Int = 0;
		while(true){
			if(rank == 0 && iter % 100 == 0){
				Console.OUT.println("iter = " + iter);
			}
			iter++;
			
			ARPACK.pdsaupd(comm, ido, bmat, nloc, which, nev, tol,
					resid, ncv, v, ldv, iparam, ipntr,
					workd, workl, lworkl, info);
			
			if(rank == 0 && info < 0){
				switch(info){
				default:
					Console.OUT.println("ARPACK: dsaupd: unrecognized return value: " + info);
				}
			}else if(rank == 0 && info > 0){
				switch(info){
				case 1:
					Console.OUT.println("ARPACK: dsaupd: reached to max iteration");
					break;
				default:
					Console.OUT.println("ARPACK: dsaupd: unrecognized return value: " + info);
				}
			}
			
			if(ido == -1 || ido == 1){
				for(var i:Int = 0; i < nloc; i++) {
					x()(i + vertexInfo.offset(here.id)) = workd(ipntr(0) - 1 + i);
				}
				finish for(p in Place.places()) {
					Array.asyncCopy(x(), vertexInfo.offset(here.id), remoteX(p.id), vertexInfo.offset(here.id), nloc);
				}
				team.barrier(here.id);
				
				matrix().mult(x(), 0, workd, ipntr(1) - 1);
				
			}else if(ido == 2){
				for(var i:Int = 0; i < nloc; i++){
					workd(ipntr(1) - 1 + i) = workd(ipntr(0) - 1 + i);
				}
			}else{
				if(rank == 0) Console.OUT.println("ido = " + ido);
				break;
			}
		}
		
		if(rank == 0) Console.OUT.println("iterations = " + iparam(2));
		if(rank == 0) Console.OUT.println("converged Ritz values = " + iparam(4));
		
		if(iparam(4) < nev){
			if(rank == 0) Console.OUT.println("ARPACK: dsaupd: could not calculate all required Ritz values");
			return null;
		}
		
		ARPACK.pdseupd(comm, rvec, howmny, select, d, z, ldz,
				sigma, bmat, nloc, which, nev, tol, resid,
				ncv, v, ldv, iparam, ipntr, workd,
				workl, lworkl, info);
		
		if(rank == 0 && info < 0){
			Console.OUT.println("ARPACK: dseupd: bad termination: " + info);
		}
		
		if(rank == 0) Console.OUT.println(d);
		//Console.OUT.println(z);
		
		return z;
	}
	
	/*private def kmeans(k:Int, points:Array[Vector]){
		val dim:Int = k;
		val nPoints:Int = points.size;
		val curClusters = new Array[Vector](k, (Int) => Vector.make(dim));
		val newClusters = new Array[Vector](k, (Int) => Vector.make(dim));
		val clusterCounts = new Array[Int](k, 0);
		val result = new Array[Int](nPoints);
		val iterations = 1000;
		
		// initialize
		val random = new Random(Timer.milliTime());
		for(i in points){
			val c = random.nextInt(k);
			curClusters(c).cellAdd(points(i));
			clusterCounts(c)++;
			result(i) = c;
		}
		// compute central points of current clusters
		for(i in curClusters){
			curClusters(i).cellDiv(clusterCounts(i));
			clusterCounts(i) = 0;  // reset counter
		}
		
		for(iter in 1..iterations){
			Console.OUT.println("iteration: " + iter);
			// compute new clusters and counters
			for(i in points){
				// compute which cluster is closest to each point
				var minDist:Double = Double.MAX_VALUE;
				var closestCluster:Int = 0;
				for([j] in curClusters){
					var dist:Double = (curClusters(j) - points(i)).norm();
					if(dist < minDist){
						minDist = dist;
						closestCluster = j;
					}
				}
				// add the point to the cluster
				newClusters(closestCluster).cellAdd(points(i));
				clusterCounts(closestCluster)++;
				result(i) = closestCluster;
			}
			
			// compute central points of new clusters
			for(i in newClusters){
				newClusters(i).cellDiv(clusterCounts(i));
				clusterCounts(i) = 0;  // reset counter
			}
			
			// test for convergence
			var b:Boolean = true;
			for(i in curClusters){
				if((newClusters(i) - curClusters(i)).norm() > 0.0001){
					b = false;
					break;
				}
			}
			if(b) break;
			
			// move new clusters to current clusters
			for(i in curClusters){
				Array.copy(newClusters(i).rail(), curClusters(i).rail());
				//newClusters(i).copyTo(curClusters(i));
				newClusters(i).reset();
			}
		}
		
		return result;
	}*/
	
	private def kmeans(k:Int, points:PlaceLocalHandle[Array[Vector]]): PlaceLocalHandle[Array[Int]] {
		val vertexInfo = this.vertexInfo;
		val dim:Int = k;
		//val nPoints:Int = points.dist.region.size();
		//val random = PlaceLocalandle.make[Random](Dist.makeUnique(), () => new Random(Timer.milliTime()));
		val localCurClusters = PlaceLocalHandle.make[Array[Vector]](Dist.makeUnique(), () => new Array[Vector](k, (Int) => Vector.make(dim)));
		val localNewClusters = PlaceLocalHandle.make[Array[Vector]](Dist.makeUnique(), () => new Array[Vector](k, (Int) => Vector.make(dim)));
		val localClusterCounts = PlaceLocalHandle.make[Array[Int]](Dist.makeUnique(), () => new Array[Int](k, 0));
		val curClusters = new Array[Vector](k, (Int) => Vector.make(dim));
		val newClusters = new Array[Vector](k, (Int) => Vector.make(dim));
		val clusterCounts = new Array[Int](k, 0);
		val result = PlaceLocalHandle.make[Array[Int]](Dist.makeUnique(), () => new Array[Int](vertexInfo.getVertexCount(here)));
		val iterations = 1000;
		
		// initialize
		finish for(p in Place.places()) async at(p) {
			val random = new Random(Timer.milliTime());
			for(var i:Int = 0; i < points().size; i++){
				val c = random.nextInt(k);
				localCurClusters()(c).cellAdd(points()(i));
				localClusterCounts()(c) = localClusterCounts()(c) + 1;
				result()(i) = c;
			}
		}
		/*val random = new Random(Timer.milliTime());
		for(i in points){
			val c = random.nextInt(k);
			curClusters(c).cellAdd(at(points.dist(i)) points(i));
			clusterCounts(c)++;
			at(result.dist(i)) result(i) = c;
		}*/
		
		// merge local cur clusters into cur clusters
		for(p in Place.places()) {
			val tmpLocalCurClusters = at(p) localCurClusters();
			val tmpLocalClusterCounts = at(p) localClusterCounts();
			for(var i:Int = 0; i < k; i++){
				curClusters(i).cellAdd(tmpLocalCurClusters(i));
				clusterCounts(i) += tmpLocalClusterCounts(i);
			}
		}
		
		// compute central points of current clusters
		for(var i:Int = 0; i < k; i++){
			curClusters(i).cellDiv(clusterCounts(i));
			clusterCounts(i) = 0;  // reset counter
		}
		
		for(var iter:Int = 1; iter <= iterations; iter++){
			if(iter == 1 || iter % 10 == 0) Console.OUT.println("iteration: " + iter);
			
			// copy current clusters to local current clusters
			finish for(p in Place.places()) async at(p) {
				for(var i:Int = 0; i < k; i++){
					localCurClusters()(i) = curClusters(i);
					localNewClusters()(i).reset();
					localClusterCounts()(i) = 0;
				}
			}
			
			// compute local new clusters and local counters
			finish for(p in Place.places()) async at(p) {
				for(var i:Int = 0; i < points().size; i++){
					// compute which cluster is closest to each point
					var minDist:Double = Double.MAX_VALUE;
					var closestCluster:Int = 0;
					for(var j:Int = 0; j < k; j++){
						var dist:Double = (localCurClusters()(j) - points()(i)).norm();
						if(dist < minDist){
							minDist = dist;
							closestCluster = j;
						}
					}
					// add the point to the cluster
					localNewClusters()(closestCluster).cellAdd(points()(i));
					localClusterCounts()(closestCluster) = localClusterCounts()(closestCluster) + 1;
					result()(i) = closestCluster;
				}
			}
			
			// merge local new clusters into new clusters
			for(p in Place.places()) {
				val tmpLocalNewClusters = at(p) localNewClusters();
				val tmpLocalClusterCounts = at(p) localClusterCounts();
				for(var i:Int = 0; i < k; i++){
					newClusters(i).cellAdd(tmpLocalNewClusters(i));
					clusterCounts(i) += tmpLocalClusterCounts(i);
				}
			}
			/*val newClustersGR = GlobalRef(newClusters);
			val clusterCountsGR = GlobalRef(clusterCounts);
			val there = here;
			finish for(p in Place.places()) async at(p) {
				val tmpNewClusters = localNewClusters();
				val tmpClusterCounts = localClusterCounts();
				at(there) atomic for(var i:Int = 0; i < k; i++){
					newClustersGR()(i).cellAdd(tmpNewClusters(i));
					clusterCountsGR()(i) += tmpClusterCounts(i);
				}
			}*/
			
			// compute central points of new clusters
			for(var i:Int = 0; i < k; i++){
				newClusters(i).cellDiv(clusterCounts(i));
				clusterCounts(i) = 0;  // reset counter
			}
			
			// test for convergence
			var b:Boolean = true;
			for(var i:Int = 0; i < k; i++){
				if((newClusters(i) - curClusters(i)).norm() > 0.0001){
					b = false;
					break;
				}
			}
			if(b) break;
			
			// move new clusters to current clusters
			for(var i:Int = 0; i < k; i++){
				Array.copy(newClusters(i).rail(), curClusters(i).rail());
				//newClusters(i).copyTo(curClusters(i));
				newClusters(i).reset();
			}
		}
		
		return result;
	}
	
	private def makeClusteringResult(nClusters:Int, result:PlaceLocalHandle[Array[Int]]): ClusteringResult {
		val vertexInfo = this.vertexInfo;
		val VtoC = PlaceLocalHandle.make[HashMap[Long, Int]](Dist.makeUnique(), () => new HashMap[Long, Int](result().size));
		val CtoV = new HashMap[Int, Array[Long]](nClusters);
		val CtoVLists = new Array[ArrayBuilder[Long]](nClusters, (Int) => new ArrayBuilder[Long]());
		val localLists = PlaceLocalHandle.make[Array[ArrayBuilder[Long]]](
				Dist.makeUnique(),
				() => new Array[ArrayBuilder[Long]](nClusters, (Int) => new ArrayBuilder[Long]())
		);
		
		finish for(p in Place.places()) async at(p) {
			val ofs = vertexInfo.offset(p.id);
			for(var i:Int = 0; i < result().size; i++){
				val vertexID = vertexInfo.getIDFromHere(i + ofs)();
				val clusterNum = result()(i);
				VtoC().put(vertexID, clusterNum);
				localLists()(clusterNum).add(vertexID);
			}
		}
		for(p in Place.places()) {
			val tmpLists = at(p) localLists();
			for(var i:Int = 0; i < nClusters; i++){
				CtoVLists(i).insert(0, tmpLists(i).result());
			}
		}
		for(var i:Int = 0; i < nClusters; i++){
			CtoV.put(i, CtoVLists(i).result());
		}
		
		return new DistClusteringResult(vertexInfo, VtoC, CtoV);
	}
	/*private def makeClusteringResult(nClusters:Int, array:Array[Int](1)): ClusteringResult {
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
	}*/
}