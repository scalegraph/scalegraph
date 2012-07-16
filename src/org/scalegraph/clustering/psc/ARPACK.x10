package org.scalegraph.clustering.psc;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

@NativeCPPInclude("ARPACKWrapper.h")
@NativeCPPCompilationUnit("ARPACKWrapper.cc")
public class ARPACK {
	
	public static val LA:Int = 1;
	public static val SA:Int = 2;
	public static val LM:Int = 3;
	public static val SM:Int = 4;
	public static val BE:Int = 5;
	
	@Native("c++", "dsaupd_wrap(&#ido, #bmat, #n, #which, #nev, #tol, (#resid)->raw()->raw(), #ncv, (#v)->raw()->raw(), #ldv, (#iparam)->raw()->raw(), (#ipntr)->raw()->raw(), (#workd)->raw()->raw(), (#workl)->raw()->raw(), #lworkl, &#info)")
	public native static def dsaupd(
			ido:Int,
			bmat:Char,
			n:Int,
			which:Int,
			nev:Int,
			tol:Double,
			resid:Array[Double](1),
			ncv:Int,
			v:Array[Double](1),
			ldv:Int,
			iparam:Array[Int](1),
			ipntr:Array[Int](1),
			workd:Array[Double](1),
			workl:Array[Double](1),
			lworkl:Int,
			info:Int
	): Int;

	@Native("c++", "dseupd_wrap(#rvec, #howmny, (#select)->raw()->raw(), (#d)->raw()->raw(), (#z)->raw()->raw(), #ldz, #sigma, #bmat, #n, #which, #nev, #tol, (#resid)->raw()->raw(), #ncv, (#v)->raw()->raw(), #ldv, (#iparam)->raw()->raw(), (#ipntr)->raw()->raw(), (#workd)->raw()->raw(), (#workl)->raw()->raw(), #lworkl, &#info)")
	public native static def dseupd(
		rvec:Int,
		howmny:Char,
		select:Array[Int](1),
		d:Array[Double](1),
		z:Array[Double](1),
		ldz:Int,
		sigma:Double,
		bmat:Char,
		n:Int,
		which:Int,
		nev:Int,
		tol:Double,
		resid:Array[Double](1),
		ncv:Int,
		v:Array[Double](1),
		ldv:Int,
		iparam:Array[Int](1),
		ipntr:Array[Int](1),
		workd:Array[Double](1),
		workl:Array[Double](1),
		lworkl:Int,
		info:Int
	): Int;
}