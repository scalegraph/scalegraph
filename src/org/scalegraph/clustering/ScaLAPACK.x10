package org.scalegraph.clustering;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

@NativeCPPInclude("ScaLAPACKWrapper.h")
@NativeCPPCompilationUnit("ScaLAPACKWrapper.cc")
public class ScaLAPACK {
	
	@Native("c++", "sl_init(&#ictxt, #nprow, #npcol)")
	public native static def slInit(ictxt:Int, nprow:Int, npcol:Int): void;
	
	public static def slInit(ictxt:Cell[Int], nprow:Int, npcol:Int): void {
		var tmp:Int = -1;
		slInit(tmp, nprow, npcol);
		ictxt() = tmp;
	}
	
	@Native("c++", "numroc(#n, #nb, #iproc, #isrcproc, #nprocs)")
	public native static def numroc(n:Int, nb:Int, iproc:Int, isrcproc:Int, nprocs:Int): Int;
	
	@Native("c++", "descinit((#desc)->raw()->raw(), #m, #n, #mb, #nb, #irsrc, #icsrc, #ictxt, #lld, &(#info))")
	public native static def descInit(desc:Array[Int](1), m:Int, n:Int, mb:Int, nb:Int, irsrc:Int, icsrc:Int, ictxt:Int, lld:Int, info:Int): void;
	
	@Native("c++", "pdelset((#a)->raw()->raw(), #ia, #ja, (#desca)->raw()->raw(), #alpha)")
	public native static def pdelset(a:Array[Double](1), ia:Int, ja:Int, desca:Array[Int](1), alpha:Double): void;
	
	@Native("c++", "pdelget(#scope, #top, &(#alpha), (#a)->raw()->raw(), #ia, #ja, (#desca)->raw()->raw())")
	public native static def pdelget(scope:Char, top:Char, alpha:Double, a:Array[Double](1), ia:Int, ja:Int, desca:Array[Int](1)): void;
	
	@Native("c++", "pdsygvx(#ibtype, #jobz, #range, #uplo, #n, #a->raw()->raw(), #ia, #ja, #desca->raw()->raw(), #b->raw()->raw(), #ib, #jb, #descb->raw()->raw(), #vl, #vu, #il, #iu, #abstol, &#m, &#nz, #w->raw()->raw(), #orfac, #z->raw()->raw(), #iz, #jz, #descz->raw()->raw(), #work->raw()->raw(), #lwork, #iwork->raw()->raw(), #liwork, #ifail->raw()->raw(), #iclustr->raw()->raw(), #gap->raw()->raw(), &#info)")
	public native static def pdsygvx(ibtype:Int, jobz:Char, range:Char, uplo:Char, n:Int,
			a:Array[Double](1), ia:Int, ja:Int, desca:Array[Int](1), b:Array[Double](1),
			ib:Int, jb:Int, descb:Array[Int](1), vl:Double, vu:Double,
			il:Int, iu:Int, abstol:Double, m:Int, nz:Int,
			w:Array[Double](1), orfac:Double, z:Array[Double](1), iz:Int, jz:Int,
			descz:Array[Int](1), work:Array[Double](1), lwork:Int, iwork:Array[Int](1), liwork:Int,
			ifail:Array[Int](1), iclustr:Array[Int](1), gap:Array[Double](1), info:Int): void;
	
	@Native("c++", "pdsyev(#jobz, #uplo, #n, #a->raw()->raw(), #ia, #ja, #desca->raw()->raw(), #w->raw()->raw(), #z->raw()->raw(), #iz, #jz, #descz->raw()->raw(), #work->raw()->raw(), #lwork, &#info)")
	public native static def pdsyev(jobz:Char, uplo:Char, n:Int,
			a:Array[Double](1), ia:Int, ja:Int, desca:Array[Int](1),
			w:Array[Double](1), z:Array[Double](1), iz:Int, jz:Int, descz:Array[Int](1),
			work:Array[Double](1), lwork:Int, info:Int): void;
}