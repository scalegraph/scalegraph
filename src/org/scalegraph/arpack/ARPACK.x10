package org.scalegraph.arpack;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

@NativeCPPInclude("NativeARPACK.h")
@NativeCPPCompilationUnit("NativeARPACK.cc")
public class ARPACK {
	
	public static val LA:Int = 1;                 // Largest Algebraic
	public static val SA:Int = 2;                 // Smallest Algebraic
	public static val LM:Int = 3;                 // Largest Magnitude
	public static val SM:Int = 4;                 // Smallest Magnitude
	public static val BE:Int = 5;                 // Both End
	
	public static class Params {
		public var nev:Int = 1;                   // number of eigenvalues to compute (satisfy 0 < nev < n)
		public var bmat:Char = 'I';               // types of eigenvalue problem; 'I' = standard, 'G' = general
		public var which:Int = LA;                // which eigenvalues are required
		public var tol:Double = 0.0;              // tolerance
		public var ncv:Int = nev * 2;             // number of Lanczos vectors (satisfy nev < ncv <= n)
		public var maxitr:Int = 10000;            // maximum number of iterations
		public var lworkl:Int = ncv * (ncv + 8);  // length of workspace (satisfy lworkl >= ncv * (ncv + 8) )
		
		public var rvec:Int = 0;                  // 0:only compute eigenvalues, 1:also compute eigenvectors
		public var howmny:Char = 'A';             // how many eigenvectors (currently 'A' is only supported)
		public var sigma:Double = 0.0;            // shift amount in Mode 3, 4 and 5
		
		public def fit() {
			nev = Math.max(0, nev);
			ncv = Math.max(nev + 1, ncv);
			lworkl = Math.max(ncv * (ncv + 8), lworkl);
		}
	}
	
	@Native("c++", "dsaupd_wrap(&#ido, #bmat, #n, #which, #nev, " +
			"#tol, (#resid)->raw()->raw(), #ncv, (#v)->raw()->raw(), #ldv, " +
			"(#iparam)->raw()->raw(), (#ipntr)->raw()->raw(), " +
			"(#workd)->raw()->raw(), (#workl)->raw()->raw(), #lworkl, &#info)")
	public native static def dsaupd(
		ido:Int, bmat:Char, n:Int, which:Int, nev:Int,
		tol:Double, resid:Array[Double](1), ncv:Int, v:Array[Double](1), ldv:Int,
		iparam:Array[Int](1), ipntr:Array[Int](1), workd:Array[Double](1), workl:Array[Double](1), lworkl:Int,
		info:Int
	): Int;

	@Native("c++", "dseupd_wrap(#rvec, #howmny, (#select)->raw()->raw(), " +
			"(#d)->raw()->raw(), (#z)->raw()->raw(), #ldz, #sigma, #bmat, " +
			"#n, #which, #nev, #tol, (#resid)->raw()->raw(), #ncv, " +
			"(#v)->raw()->raw(), #ldv, (#iparam)->raw()->raw(), (#ipntr)->raw()->raw(), " +
			"(#workd)->raw()->raw(), (#workl)->raw()->raw(), #lworkl, &#info)")
	public native static def dseupd(
		rvec:Int, howmny:Char, select:Array[Int](1), d:Array[Double](1), z:Array[Double](1),
		ldz:Int, sigma:Double, bmat:Char, n:Int, which:Int,
		nev:Int, tol:Double, resid:Array[Double](1), ncv:Int, v:Array[Double](1),
		ldv:Int, iparam:Array[Int](1), ipntr:Array[Int](1), workd:Array[Double](1), workl:Array[Double](1),
		lworkl:Int, info:Int
	): Int;
	
	@Native("c++", "pdsaupd_wrap(#comm, &#ido, #bmat, #n, #which, #nev, " +
			"#tol, (#resid)->raw()->raw(), #ncv, (#v)->raw()->raw(), #ldv, " +
			"(#iparam)->raw()->raw(), (#ipntr)->raw()->raw(), " +
			"(#workd)->raw()->raw(), (#workl)->raw()->raw(), #lworkl, &#info)")
	public native static def pdsaupd(
			comm:Int, ido:Int, bmat:Char, n:Int, which:Int, nev:Int,
			tol:Double, resid:Array[Double](1), ncv:Int, v:Array[Double](1), ldv:Int,
			iparam:Array[Int](1), ipntr:Array[Int](1), workd:Array[Double](1), workl:Array[Double](1), lworkl:Int,
			info:Int
	): Int;

	@Native("c++", "pdseupd_wrap(#comm, #rvec, #howmny, (#select)->raw()->raw(), " +
			"(#d)->raw()->raw(), (#z)->raw()->raw(), #ldz, #sigma, #bmat, " +
			"#n, #which, #nev, #tol, (#resid)->raw()->raw(), #ncv, " +
			"(#v)->raw()->raw(), #ldv, (#iparam)->raw()->raw(), (#ipntr)->raw()->raw(), " +
			"(#workd)->raw()->raw(), (#workl)->raw()->raw(), #lworkl, &#info)")
	public native static def pdseupd(
			comm:Int, rvec:Int, howmny:Char, select:Array[Int](1), d:Array[Double](1), z:Array[Double](1),
			ldz:Int, sigma:Double, bmat:Char, n:Int, which:Int,
			nev:Int, tol:Double, resid:Array[Double](1), ncv:Int, v:Array[Double](1),
			ldv:Int, iparam:Array[Int](1), ipntr:Array[Int](1), workd:Array[Double](1), workl:Array[Double](1),
			lworkl:Int, info:Int
	): Int;
	
	public static def printError(from : String, info : Int) {
		switch(info){
		case 0:
			// success
			break;
		case 1:
			printError(from, "reached to max iteration", info);
			break;
		case 3:
			printError(from, "shift operations are not used in Lanczos process", info);
			break;
		case -1:
			printError(from, "'n' must be positive", info);
			break;
		case -2:
			printError(from, "'nev' must satisfy '0 < nev < n'", info);
			break;
		case -3:
			printError(from, "'ncv' must satisfy 'nev < ncv <= n'", info);
			break;
		case -4:
			printError(from, "'iparam[2]' must be positive", info);
			break;
		case -5:
			printError(from, "invalid value of 'which'", info);
			break;
		case -6:
			printError(from, "invalid value of 'bmat'", info);
			break;
		case -7:
			printError(from, "size of 'workl' is not enough", info);
			break;
		case -8:
			printError(from, "failed eigenvalue calculation in dsteqr", info);
			break;
		case -9:
			printError(from, "initial vector should not be zero vector", info);
			break;
		case -10:
			printError(from, "invalid value of 'iparam[6]'", info);
			break;
		case -11:
			printError(from, "iparam[6] = 1 is inconsistent with bmat = 'G'", info);
			break;
		case -12:
			printError(from, "invalid value of 'iparam[0]'", info);
			break;
		case -13:
			printError(from, "value of 'nev' is inconsistent with which = 'BE'", info);
			break;
		case -14:
			printError(from, "no eigenvalue with enough precision", info);
			break;
		case -15:
			printError(from, "invalid value of 'howmny'", info);
			break;
		case -16:
			printError(from, "howmny = 'S' is currently not implemented", info);
			break;
		case -9999:
			printError(from, "Lanczos decomposition is failed", info);
			break;
		default:
			printError(from, "unknown return value", info);
		}
	}
	
	public static def printError(from : String, message : String, info : Int) {
		Console.OUT.printf("ARPACK: %s: %s: %d\n", from, message, info);
	}
}