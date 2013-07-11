package test;

import x10.compiler.Native;
import x10.util.Team;

import org.scalegraph.arpack.ARPACK;
import org.scalegraph.blas.*;
import org.scalegraph.util.*;
import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;


public class SpectralClustering {
	
	public static def main(args:Array[String](1)) {
		val fileName = args(1);
		val numCluster = Int.parse(args(2));
		val team = Team.WORLD;
		val inputFormat = (s:String) => {
			val elements = s.split(" ");
			return new Tuple3[Long,Long,Double](
					Long.parse(elements(0)),
					Long.parse(elements(1)),
					1.0
			);
		};
		
		val graphData = DistributedReader.read(team,args,inputFormat);
		val edgeList = graphData.get1();
		val weight = graphData.get2();
		val g = Graph.make(team, edgeList.raw(team.placeGroup()));
		g.setEdgeAttribute[Double]("weight", weight.raw(team.placeGroup()));
		
		val R = 1 << (MathAppend.ceilLog2(team.size()) / 2);
		val C = team.size() / R;
		val RC = R * C;
		val dist = Dist2D.make2D(team, R, C);
		
		val W = g.createDistSparseMatrix[Double](dist, "weight", false, false);
		val N = W.ids().numberOfLocalVertexes2N();
		val D = new DistMemoryChunk[Double](team.placeGroup(), () => new MemoryChunk[Double](N, (Long) => 1.0));
		BLAS.mult[Double](1.0, W, false, D, 0.0, D);
		team.placeGroup().broadcastFlat(() => {
			val vec_ = D();
			Parallel.iter(vec_.range(), (tid :Long, r :LongRange) => {
				for(i in r) vec_(i) = 1.0 / vec_(i);
			});
		});
		BLAS.mult[Double](1.0, DistDiagonalMatrix(D), W, false, 0.0, W);
		
		val V = calcEigenVectors(team, W, N * RC, N, numCluster);
		val result = kmeans(team, V, numCluster);
	}
	
	
	/*
	 * returns row-major dense matrix whose columns are nev eigenvectors
	 */
	static def calcEigenVectors(team : Team, A : DistSparseMatrix[Double], n_ : Long, nloc_ : Long, nev : Int) : DistMemoryChunk[Double] {
		
		// global params for pdsaupd
		val n = n_ as Int;
		val nloc = nloc_ as Int;
		var comm_:Int = 0;
		@Native("c++", "comm_ = MPI_COMM_WORLD;") {}
		val comm = comm_;
		val bmat:Char = 'I';  // param (default = 'I')
		val which:Int = ARPACK.LA;  // param (default = LA)
		val tol:Double = 0.0;  // param (default = 0.0)
		val ncv:Int = Math.min(nev * 2, n);  // param (default = nev * 2)
		val ldu:Int = nloc;
		val maxitr = 1000;  // param (default = ?)
		val lworkl:Int = ncv * (ncv + 8);  // param (default = ncv * (ncv + 8))
		
		// global params for pdseupd
		val rvec:Int = 1;  // param (default = 1)
		val howmny:Char = 'A';  // param (default = 'A')
		val ldv:Int = nloc;
		val sigma:Double = 0.0;  // param (default = 0.0)
		
		return new DistMemoryChunk[Double](team.placeGroup(), () => {
			// local workspaces for pdsaupd
			val role = team.role()(0);
			var ido:Int = 0;
			val resid:Array[Double](1) = new Array[Double](nloc);
			val u:Array[Double](1) = new Array[Double](ncv * ldu);
			val iparam:Array[Int](1) = new Array[Int](11);
			val ipntr:Array[Int](1) = new Array[Int](11);
			val workd:Array[Double](1) = new Array[Double](3 * nloc);
			val workl:Array[Double](1) = new Array[Double](lworkl);
			var info:Int = 0;
			
			// local workspaces for pdseupd
			val select:Array[Int](1) = new Array[Int](ncv);
			val d:Array[Double](1) = new Array[Double](nev);
			val v:Array[Double](1) = new Array[Double](nev * ldv);
			
			iparam(0) = 1;
			iparam(2) = maxitr;
			iparam(3) = 1;
			iparam(6) = 1;
			
			var iter:Int = 0;
			while(true) {
				if(role == 0 && iter % 100 == 0) {
					Console.OUT.println("iter = " + iter);
				}
				iter++;
				
				ARPACK.pdsaupd(comm, ido, bmat, nloc, which, nev, tol,
						resid, ncv, u, ldu, iparam, ipntr,
						workd, workl, lworkl, info);
				
				if(role == 0 && info < 0) {
					switch(info){
					default:
						Console.OUT.println("ARPACK: pdsaupd: unknown return value: " + info);
					}
				} else if(role == 0 && info > 0) {
					switch(info){
					case 1:
						Console.OUT.println("ARPACK: pdsaupd: reached to max iteration: " + iter);
						break;
					default:
						Console.OUT.println("ARPACK: pdsaupd: unknown return value: " + info);
					}
				}
				
				if(ido == -1) {
					// y <- OP(x)
					
				} else if(ido == 1) {
					// z <- Bx
					// y <- OP(z)
					
				} else if(ido == 2) {
					// y <- Bx
					Parallel.iter(0..(nloc-1), (tid:Int, r:IntRange) => {
						for(i in r) {
							workd(ipntr(1) - 1 + i) = workd(ipntr(0) - 1 + i);
						}
					});
				} else {
					if(role == 0 && ido != 99) Console.OUT.println("ARPACK: pdsaupd: unknown operation: ido = " + ido);
					break;
				}
			}
			
			if(role == 0) Console.OUT.println("iterations = " + iparam(2));
			if(role == 0) Console.OUT.println("converged Ritz values = " + iparam(4));
			
			if(iparam(4) < nev){
				if(role == 0) Console.OUT.println("ARPACK: pdsaupd: could not calculate all required Ritz values");
				//return Zero.get[DistMemoryChunk[Double]]();
			}
			
			ARPACK.pdseupd(comm, rvec, howmny, select, d, v, ldv,
					sigma, bmat, nloc, which, nev, tol, resid,
					ncv, u, ldu, iparam, ipntr, workd,
					workl, lworkl, info);
			
			if(role == 0 && info < 0){
				Console.OUT.println("ARPACK: pdseupd: bad termination: " + info);
			}
			if(role == 0) Console.OUT.println(d);
			
			val result = new MemoryChunk[Double](v.size);
			Parallel.iter(
					0..(nloc-1),
					(tid:Int, r:IntRange) => {
						for(i in r) {
							for(var j:Int = 0; j < nev; j++) {
								result(nev * i + j) = v(i + j * nloc);
							}
						}
					}
			);
			result
		});
	}
	
	/*
	 * It's better to implement Kmeans++ method.
	 */
	static def kmeans(team : Team, dmc : DistMemoryChunk[Double], k : Int, maxitr : Int) : DistMemoryChunk[Int] {
		assert(dmc().size() % k == 0L);
		val assign = new DistMemoryChunk[Int](team.placeGroup(), () => new MemoryChunk[Int](dmc().size() / k));
		val gcentroid = new MemoryChunk[Double](k * k);
		val gcount = new MemoryChunk[Long](k);
		val lcentroid = new DistMemoryChunk[Double](team.placeGroup(), () => new MemoryChunk[Double](k * k));
		val lcount = new DistMemoryChunk[Long](team.placeGroup(), () => new MemoryChunk[Long](k));
		
	}
}