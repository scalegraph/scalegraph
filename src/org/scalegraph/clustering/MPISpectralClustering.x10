package org.scalegraph.clustering;

import x10.util.ArrayBuilder;
import x10.util.HashMap;
import x10.util.Pair;
import x10.util.Random;
import x10.util.Timer;

import org.scalegraph.graph.PlainGraph;

public class MPISpectralClustering implements Clustering {
	
	/* clustering information */
	private val graph:PlainGraph;
	private val nClusters:Int;
	private val nVertices:Int;
	private val IDtoIDX:HashMap[Long, Int];  // ID is vertex ID PlainGraph has
	private val IDXtoID:HashMap[Int, Long];  // IDX is index in matrix
	private val vertexList:DistArray[Long];
	private val neighbourList:DistArray[Pair[Int, Array[Int]]];
	
	/* global ref */
	private val gGraph:GlobalRef[PlainGraph];
	private val gIDtoIDX:GlobalRef[HashMap[Long, Int]];
	private val gIDXtoID:GlobalRef[HashMap[Int, Long]];

	/* MPI global information */
	private val size:Int;
	private val nprow:Int;
	private val npcol:Int;
	private val mb:Int;
	private val nb:Int;
	private val globalRow:Int;
	private val globalCol:Int;
	
	private val points:DistArray[Vector](1);
	
	//val barrier = DistArray.make[Int](Dist.makeUnique(), 0);
	
	/* MPI local information */
	/*
	val rank:PlaceLocalHandle[Cell[Int]];
	val ictxt:PlaceLocalHandle[Cell[Int]];
	val myrow:PlaceLocalHandle[Cell[Int]];
	val mycol:PlaceLocalHandle[Cell[Int]];
	val localRow:PlaceLocalHandle[Cell[Int]];
	val localCol:PlaceLocalHandle[Cell[Int]];
	
	var matrixL:PlaceLocalHandle[Cell[Array[Double](1)]];
	var matrixD:PlaceLocalHandle[Cell[Array[Double](1)]];
	var matrixZ:PlaceLocalHandle[Cell[Array[Double](1)]];
	val desc:PlaceLocalHandle[Array[Int](1)];
	*/
	
	public def this(graph:PlainGraph, nClusters:Int){
		val grid:Pair[Int, Int] = makeProcessGrid(Place.MAX_PLACES);
		Console.OUT.println("grid = " + grid);
		
		this.graph = graph;
		this.nClusters = nClusters;
		this.nVertices = graph.getVertexCount() as Int;
		this.IDtoIDX = new HashMap[Long, Int](nVertices);
		this.IDXtoID = new HashMap[Int, Long](nVertices);		
		this.vertexList = graph.getVertexList();
		this.neighbourList = DistArray.make[Pair[Int, Array[Int]]](vertexList.dist, Pair[Int, Array[Int]](-1, null));
		
		this.gGraph = GlobalRef[PlainGraph](this.graph);
		this.gIDtoIDX = GlobalRef[HashMap[Long, Int]](this.IDtoIDX);
		this.gIDXtoID = GlobalRef[HashMap[Int, Long]](this.IDXtoID);
		
		this.size = MPI.getSize();
		this.nprow = grid.first;
		this.npcol = grid.second;
		this.mb = 64;
		this.nb = 64;
		this.globalRow = nVertices;
		this.globalCol = nVertices;
		
		this.points = DistArray.make[Vector](Dist.makeBlock(0..(nVertices-1)), (Point) => Vector.make(nClusters));
		/*
		this.rank = PlaceLocalHandle.make[Cell[Int]](Dist.makeUnique(), ()=>new Cell[Int](-1));
		this.ictxt = PlaceLocalHandle.make[Cell[Int]](Dist.makeUnique(), ()=>new Cell[Int](-1));
		this.myrow = PlaceLocalHandle.make[Cell[Int]](Dist.makeUnique(), ()=>new Cell[Int](-1));
		this.mycol = PlaceLocalHandle.make[Cell[Int]](Dist.makeUnique(), ()=>new Cell[Int](-1));
		this.localRow = PlaceLocalHandle.make[Cell[Int]](Dist.makeUnique(), ()=>new Cell[Int](-1));
		this.localCol = PlaceLocalHandle.make[Cell[Int]](Dist.makeUnique(), ()=>new Cell[Int](-1));
		
		this.matrixL = PlaceLocalHandle.make[Cell[Array[Double](1)]](Dist.makeUnique(), ()=>new Cell[Array[Double](1)](null));
		this.matrixD = PlaceLocalHandle.make[Cell[Array[Double](1)]](Dist.makeUnique(), ()=>new Cell[Array[Double](1)](null));
		this.matrixZ = PlaceLocalHandle.make[Cell[Array[Double](1)]](Dist.makeUnique(), ()=>new Cell[Array[Double](1)](null));
		this.desc = PlaceLocalHandle.make[Array[Int](1)](Dist.makeUnique(), ()=>new Array[Int](9, 0));
		*/
		Console.OUT.println("nVertices = " + nVertices);
	}
	
	public def run(): ClusteringResult {
		val sw = new StopWatch();
		sw.start();
		makeCorrespondenceBetweenIDandIDX();
		Console.OUT.println("IDandIDX finished: " + sw.get());
		makeNeighbourList();
		Console.OUT.println("neighbourList finished: " + sw.get());
		/*
		for(p in neighbourList.dist.places()) at(p) {
			for(npt in neighbourList.dist.get(p)){
				Console.OUT.println(neighbourList(npt));
			}
		}
		*/
		
		finish for(place in Place.places()) async at(place) {
			//rank()() = MPI.getRank();
			
			val rank:Int = MPI.getRank();
			var ictxt:Int = -1;
			var myrow:Int = -1;
			var mycol:Int = -1;
			
			ScaLAPACK.slInit(ictxt, nprow, npcol);  // calls blacs_init internally
			BLACS.gridInfo(ictxt, nprow, npcol, myrow, mycol);
			
			if(myrow >= 0 && mycol >= 0){
				/*
				localRow()() = ScaLAPACK.numroc(globalRow, mb, myrow()(), 0, nprow);
				localCol()() = ScaLAPACK.numroc(globalCol, nb, mycol()(), 0, npcol);
				matrixL()() = new Array[Double](localRow()() * localCol()(), 0.0);
				matrixD()() = new Array[Double](localRow()() * localCol()(), 0.0);
				matrixZ()() = new Array[Double](localRow()() * localCol()(), 0.0);
				*/
				val localRow:Int = ScaLAPACK.numroc(globalRow, mb, myrow, 0, nprow);
				val localCol:Int = ScaLAPACK.numroc(globalCol, nb, mycol, 0, npcol);
				val matrixL = new Array[Double](localRow * localCol, 0.0);
				val matrixD = new Array[Double](localRow * localCol, 0.0);
				val matrixZ = new Array[Double](localRow * localCol, 0.0);
				val desc = new Array[Int](9, 0);
				
				var info:Int = -1;
				ScaLAPACK.descInit(desc, globalRow, globalCol, mb, nb, 0, 0, ictxt, Math.max(1, localRow), info);
				if(rank == 0) Console.OUT.println(desc);
				
				/* make degree matrix and Laplacian matrix */
				val gMatrixD = GlobalRef(matrixD);
				val gMatrixL = GlobalRef(matrixL);
				val gDesc = GlobalRef(desc);
				val there = here;
				for(p in neighbourList.dist.places()) at(p) {
					for(pt in neighbourList.dist.get(p)) {
						//Console.OUT.println("check " + rank);
						val pair = neighbourList(pt);
						val m = pair.first;
						val neighbours = pair.second;
						if(m == -1 || neighbours == null) continue;
						val nNeighbours = neighbours.size;
						//Console.OUT.println(m + " " + neighbours + " " + nNeighbours);
						
						at(there){
							ScaLAPACK.pdelset(gMatrixD(), m + 1, m + 1, gDesc(), nNeighbours + 1.0);
							ScaLAPACK.pdelset(gMatrixL(), m + 1, m + 1, gDesc(), nNeighbours);
							for(npt in neighbours){
								val n:Int = neighbours(npt);
								ScaLAPACK.pdelset(gMatrixL(), m + 1, n + 1, gDesc(), -1.0);
							}
						}
					}
				}
				if(rank == 0) Console.OUT.println("make matrix finished: " + sw.get());
				/* debug print */
				/*
				if(rank == 0){
					for(var i:Int = 0; i < localRow; i++){
						for(var j:Int = 0; j < localCol; j++){
							Console.OUT.print(matrixL(j * localRow + i) + " ");
						}
						Console.OUT.println("");
					}
				}
				*/
				if(rank == 0) Console.OUT.println("solving eigenvalue problem");
				
				var m:Int = -1;
				var nz:Int = -1;
				val w = new Array[Double](globalRow);
				var work:Array[Double](1) = new Array[Double](1);
				var lwork:Int = -1;
				var iwork:Array[Int](1) = new Array[Int](1);
				var liwork:Int = -1;
				val ifail = new Array[Int](globalRow);
				val iclustr = new Array[Int](2 * nprow * npcol);
				val gap = new Array[Double](nprow * npcol);
				info = -1;
				
				ScaLAPACK.pdsygvx(1, 'V', 'I', 'U', globalRow,  matrixL, 1, 1, desc, matrixD,
						1, 1, desc, 0.0, 0.0, 1, nClusters, 0.0, m, nz,
						w, 0.0, matrixZ, 1, 1,  desc, work, lwork, iwork, liwork,
						ifail, iclustr, gap, info);
				
				//Console.OUT.println("info = " + info);
				lwork = work(0) as Int;
				liwork = iwork(0);
				work = new Array[Double](lwork);
				iwork = new Array[Int](liwork);
				
				ScaLAPACK.pdsygvx(1, 'V', 'I', 'U', globalRow,  matrixL, 1, 1, desc, matrixD,
						1, 1, desc, 0.0, 0.0, 1, nClusters, 0.0, m, nz,
						w, 0.0, matrixZ, 1, 1,  desc, work, lwork, iwork, liwork,
						ifail, iclustr, gap, info);
				
				if(rank == 0) Console.OUT.println("finished: " + sw.get());
				
				if(rank == 0){
					Console.OUT.println("pdsygvx: info = " + info);
					Console.OUT.println("         m    = " + m);
					Console.OUT.println("         nz   = " + nz);
				}
				assert(nz == nClusters);
				
				for(var i:Int = 0; i < nVertices; i++){
					for(var j:Int = 0; j < nClusters; j++){
						var alpha:Double = 0.0;
						ScaLAPACK.pdelget('A', ' ', alpha, matrixZ, i + 1, j + 1, desc);
						if(points.dist(i).id == here.id){
							points(i)(j) = alpha;
						}
					}
				}
				if(rank == 0) Console.OUT.println("making points finished: " + sw.get());
				
				BLACS.gridExit(ictxt);
			} // end if(myrow >= 0 && mycol >= 0)
		} // end finish for async at
		/*
		for(p in Place.places()) at(p) {
			for(i in points.dist.get(p)){
				for(var j:Int = 0; j < nClusters; j++){
					Console.OUT.print(points(i)(j) + " ");
				}
				Console.OUT.println("");
			}
		}
		*/
		val resultArray:DistArray[Int] = kmeans(nClusters, points);  // step 5
		Console.OUT.println("kmeans finished: " + sw.get());
		val result:ClusteringResult = makeClusteringResult(nClusters, resultArray);
		Console.OUT.println("making result finished: " + sw.get());
		
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
	
	
	private def makeProcessGrid(np:Int): Pair[Int, Int] {
		for(var i:Int = Math.sqrt(np) as Int; i >= 1; i--){
			if(np % i == 0){
				return Pair[Int, Int](i, np / i);
			}
		}
		return Pair[Int, Int](1, 1);
	}
	
	private def makeCorrespondenceBetweenIDandIDX(): void {
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
	
	private def makeNeighbourList(): void {
		//Console.OUT.println("check");
		finish for(p in vertexList.dist.places()) async {
			for(vpt in vertexList.dist.get(p)){
				val vertexID:Long = at(p) vertexList(vpt);
				if(vertexID == -1l) continue;
				val vertexIDX:Int = IDtoIDX.get(vertexID)();
				val outNeighboursID = graph.getOutNeighbours(vertexID);
				val inNeighboursID = graph.getInNeighbours(vertexID);
				val builder = new ArrayBuilder[Int]();
				if(outNeighboursID != null){
					val outNeighboursIDX = outNeighboursID.map((l:Long) => IDtoIDX.get(l)());
					builder.insert(0, outNeighboursIDX);
				}
				if(inNeighboursID != null){
					val inNeighboursIDX = inNeighboursID.map((l:Long) => IDtoIDX.get(l)());
					builder.insert(0, inNeighboursIDX);
				}
				
				val result = builder.result();
				at(p) neighbourList(vpt) = Pair[Int, Array[Int]](vertexIDX, result);
				//Console.OUT.println("check loop " + vpt);
			}
		}
		//Console.OUT.println("check end");
	}
	
	private def kmeans(k:Int, points:DistArray[Vector]): DistArray[Int] {
		val dim:Int = k;
		val nPoints:Int = points.dist.region.size();
		//val random = PlaceLocalandle.make[Random](Dist.makeUnique(), () => new Random(Timer.milliTime()));
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
		
		for(p in array.dist.places()){
			for([i] in array.dist.get(p)){
				val vertexID = IDXtoID(i)();
				val clusterNum = at(p) array(i);
				VtoC.put(vertexID, clusterNum);
				tmpLists(clusterNum).add(vertexID);
			}
		}
		for([i] in tmpLists){
			CtoV.put(i, tmpLists(i).result());
		}
		
		return new ClusteringResult(VtoC, CtoV);
	}
}