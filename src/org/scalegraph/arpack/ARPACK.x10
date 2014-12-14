/*
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package org.scalegraph.arpack;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

@NativeCPPInclude("NativeARPACK.h")
@NativeCPPCompilationUnit("NativeARPACK.cc")
public class ARPACK {
	
	public static val LA:Int = 0n;                 // Largest Algebraic
	public static val SA:Int = 1n;                 // Smallest Algebraic
	public static val LM:Int = 2n;                 // Largest Magnitude
	public static val SM:Int = 3n;                 // Smallest Magnitude
	public static val BE:Int = 4n;                 // Both End
	
	public static class Params {
		public var nev:Int = 1n;                   // number of eigenvalues to compute (satisfy 0 < nev < n)
		public var bmat:Char = 'I';               // types of eigenvalue problem; 'I' = standard, 'G' = general
		public var which:Int = LA;                // which eigenvalues are required
		public var tol:Double = 0.0;              // tolerance
		public var ncv:Int = nev * 2n;             // number of Lanczos vectors (satisfy nev < ncv <= n)
		public var maxitr:Int = 10000n;            // maximum number of iterations
		public var lworkl:Int = ncv * (ncv + 8n);  // length of workspace (satisfy lworkl >= ncv * (ncv + 8) )
		
		public var rvec:Int = 0n;                  // 0:only compute eigenvalues, 1:also compute eigenvectors
		public var howmny:Char = 'A';             // how many eigenvectors (currently 'A' is only supported)
		public var sigma:Double = 0.0;            // shift amount in Mode 3, 4 and 5
		
		public def fit() {
			nev = Math.max(0n, nev);
			ncv = Math.max(nev + 1n, ncv);
			lworkl = Math.max(ncv * (ncv + 8n), lworkl);
		}
	}
	
	@Native("c++", "dsaupd_wrap(&#ido, #bmat, #n, #which, #nev, " +
			"#tol, (#resid)), #ncv, (#v)->raw, #ldv, " +
			"(#iparam)->raw, (#ipntr)->raw, " +
			"(#workd)->raw, (#workl)->raw, #lworkl, &#info)")
	public native static def dsaupd(
		ido:Int, bmat:Char, n:Int, which:Int, nev:Int,
		tol:Double, resid:Rail[Double], ncv:Int, v:Rail[Double], ldv:Int,
		iparam:Rail[Int], ipntr:Rail[Int], workd:Rail[Double], workl:Rail[Double], lworkl:Int,
		info:Int
	): Int;

	@Native("c++", "dseupd_wrap(#rvec, #howmny, (#select)->raw, " +
			"(#d)->raw, (#z)->raw, #ldz, #sigma, #bmat, " +
			"#n, #which, #nev, #tol, (#resid)->raw, #ncv, " +
			"(#v)->raw, #ldv, (#iparam)->raw, (#ipntr)->raw, " +
			"(#workd)->raw, (#workl)->raw, #lworkl, &#info)")
	public native static def dseupd(
		rvec:Int, howmny:Char, select:Rail[Int], d:Rail[Double], z:Rail[Double],
		ldz:Int, sigma:Double, bmat:Char, n:Int, which:Int,
		nev:Int, tol:Double, resid:Rail[Double], ncv:Int, v:Rail[Double],
		ldv:Int, iparam:Rail[Int], ipntr:Rail[Int], workd:Rail[Double], workl:Rail[Double],
		lworkl:Int, info:Int
	): Int;
	
	@Native("c++", "pdsaupd_wrap(#comm, &#ido, #bmat, #n, #which, #nev, " +
			"#tol, (#resid)->raw, #ncv, (#v)->raw, #ldv, " +
			"(#iparam)->raw, (#ipntr)->raw, " +
			"(#workd)->raw, (#workl)->raw, #lworkl, &#info)")
	public native static def pdsaupd(
			comm:Int, ido:Int, bmat:Char, n:Int, which:Int, nev:Int,
			tol:Double, resid:Rail[Double], ncv:Int, v:Rail[Double], ldv:Int,
			iparam:Rail[Int], ipntr:Rail[Int], workd:Rail[Double], workl:Rail[Double], lworkl:Int,
			info:Int
	): Int;

	@Native("c++", "pdseupd_wrap(#comm, #rvec, #howmny, (#select)->raw, " +
			"(#d)->raw, (#z)->raw, #ldz, #sigma, #bmat, " +
			"#n, #which, #nev, #tol, (#resid)->raw, #ncv, " +
			"(#v)->raw, #ldv, (#iparam)->raw, (#ipntr)->raw, " +
			"(#workd)->raw, (#workl)->raw, #lworkl, &#info)")
	public native static def pdseupd(
			comm:Int, rvec:Int, howmny:Char, select:Rail[Int], d:Rail[Double], z:Rail[Double],
			ldz:Int, sigma:Double, bmat:Char, n:Int, which:Int,
			nev:Int, tol:Double, resid:Rail[Double], ncv:Int, v:Rail[Double],
			ldv:Int, iparam:Rail[Int], ipntr:Rail[Int], workd:Rail[Double], workl:Rail[Double],
			lworkl:Int, info:Int
	): Int;
	
	public static def printError(from : String, info : Int) {
		switch(info){
		case 0n:
			// success
			break;
		case 1n:
			printError(from, "reached to max iteration", info);
			break;
		case 3n:
			printError(from, "shift operations are not used in Lanczos process", info);
			break;
		case -1n:
			printError(from, "'n' must be positive", info);
			break;
		case -2n:
			printError(from, "'nev' must satisfy '0 < nev < n'", info);
			break;
		case -3n:
			printError(from, "'ncv' must satisfy 'nev < ncv <= n'", info);
			break;
		case -4n:
			printError(from, "'iparam[2]' must be positive", info);
			break;
		case -5n:
			printError(from, "invalid value of 'which'", info);
			break;
		case -6n:
			printError(from, "invalid value of 'bmat'", info);
			break;
		case -7n:
			printError(from, "size of 'workl' is not enough", info);
			break;
		case -8n:
			printError(from, "failed eigenvalue calculation in dsteqr", info);
			break;
		case -9n:
			printError(from, "initial vector should not be zero vector", info);
			break;
		case -10n:
			printError(from, "invalid value of 'iparam[6]'", info);
			break;
		case -11n:
			printError(from, "iparam[6] = 1 is inconsistent with bmat = 'G'", info);
			break;
		case -12n:
			printError(from, "invalid value of 'iparam[0]'", info);
			break;
		case -13n:
			printError(from, "value of 'nev' is inconsistent with which = 'BE'", info);
			break;
		case -14n:
			printError(from, "no eigenvalue with enough precision", info);
			break;
		case -15n:
			printError(from, "invalid value of 'howmny'", info);
			break;
		case -16n:
			printError(from, "howmny = 'S' is currently not implemented", info);
			break;
		case -9999n:
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
