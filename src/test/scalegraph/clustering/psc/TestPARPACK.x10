package test.scalegraph.clustering.psc;

import org.scalegraph.clustering.MPI;
import org.scalegraph.clustering.psc.ARPACK;

public class TestPARPACK {
	
	val nVertices:Int = 4;
	val nloc:Int = nVertices / Place.MAX_PLACES;
	val matrix:PlaceLocalHandle[Array[Int]];
	val x:PlaceLocalHandle[Array[Double]];
	
	public static def main(args: Array[String]) {
		/*for(p in Place.places()) async at(p) {
			ARPACK.pdlamch(0x44000000, 'E');
		}*/
		val test = new TestPARPACK();
		for(p in Place.places()) async at(p) {
			Console.OUT.println(here + ": rank = " + MPI.getRank());
			Console.OUT.println(here + ": size = " + MPI.getSize());
			test.solveEigenvalueProblem();
		}
	}
	
	public def this(){
		val n = nVertices;
		val nloc = this.nloc;
		matrix = PlaceLocalHandle.make[Array[Int]](Dist.makeUnique(), ()=>{
			new Array[Int](n * n / Place.MAX_PLACES, (i:Int)=>{
				val ii = i % n;
				val jj = i / n + nloc * here.id;
				(ii == jj ? 2 * jj + 1 : -1)
			})
		});
		x = PlaceLocalHandle.make[Array[Double]](Dist.makeUnique(), ()=>{
			new Array[Double](n, (i:Int)=>0.0)
		});
		val m = matrix;
		for(p in Place.places()) at(p) {
			Console.OUT.println(m());
		}
	}
	
	private def solveEigenvalueProblem(){
		val rank:Int = MPI.getRank();
		val comm:Int = 0x44000000;
		var ido:Int = 0;
		val bmat:Char = 'I';
		val n:Int = nVertices;
		val which:Int = ARPACK.LA;
		val nev:Int = 2;
		val tol:Double = 0.000;
		val resid:Array[Double](1) = new Array[Double](n);
		val ncv:Int = 2 * nev;
		val v:Array[Double](1) = new Array[Double](n*ncv);
		val ldv:Int = n;
		val iparam:Array[Int](1) = new Array[Int](11);
		val ipntr:Array[Int](1) = new Array[Int](11);
		val workd:Array[Double](1) = new Array[Double](3*n);
		val lworkl:Int = ncv * (ncv + 8);
		val workl:Array[Double](1) = new Array[Double](lworkl);
		var info:Int = 0;
		
		iparam(0) = 1;
		iparam(2) = 10000;
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
			if(rank == 0 && iter % 100 == 0){
				Console.OUT.println("iter = " + iter);
			}
			iter++;
			
			ARPACK.pdsaupd(comm, ido, bmat, n, which, nev, tol,
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
				val there = here;
				for(var i:Int = 0; i < nloc; i++){
					x()(i + here.id * nloc) = workd(ipntr(0) - 1 + i);
				}
				for(p in Place.places()){
					if(here.id == p.id) continue;
					for(var i:Int = 0; i < nloc; i++){
						val ii = i;
						x()(i + p.id * nloc) = at(p) x()(ii + here.id * nloc);
					}
				}
				var sum:Array[Double] = new Array[Double](nloc, 0.0);
				for(var j:Int = 0; j < nloc; j++){
					for(var i:Int = 0; i < nVertices; i++){
						sum(j) += matrix()(i + j * nVertices) * x()(i);
					}
				}
				for(var j:Int = 0; j < nloc; j++){
					workd(ipntr(1) - 1 + j) = sum(j);
				}
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
		
		if(rank == 0 && iparam(4) < nev){
			Console.OUT.println("ARPACK: dsaupd: could not calculate all required Ritz values");
			return null;
		}
		
		ARPACK.pdseupd(comm, rvec, howmny, select, d, z, ldz,
				sigma, bmat, n, which, nev, tol, resid,
				ncv, v, ldv, iparam, ipntr, workd,
				workl, lworkl, info);
		
		if(rank == 0 && info < 0){
			Console.OUT.println("ARPACK: dseupd: bad termination: " + info);
		}
		
		if(rank == 0) Console.OUT.println(d);
		if(rank == 0) Console.OUT.println(z);
		
		return z;
	}
}