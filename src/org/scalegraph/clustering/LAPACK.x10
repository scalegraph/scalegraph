package org.scalegraph.clustering;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

@NativeCPPInclude("LAPACKWrapper.h")
@NativeCPPCompilationUnit("LAPACKWrapper.cc")
public class LAPACK {
	
	@Native("c++", "dsygv_wrap(#1, #2, #3, #4, (#5)->raw()->raw(), #6, (#7)->raw()->raw(), #8, (#9)->raw()->raw(), (#10)->raw()->raw(), #11, &(#12))")
	public native static def dsygvWrap(
			itype:Int, jobz:Char, uplo:Char, n:Int,
			a:Array[Double], lda:Int, b:Array[Double], ldb:Int,
			w:Array[Double], work:Array[Double], lwork:Int, info:Int): Int;
	
	@Native("c++", "dgeev_wrap(#jobvl, #jobvr, #n, (#a)->raw()->raw(), #lda, (#wr)->raw()->raw(), (#wi)->raw()->raw(), (#vl)->raw()->raw(), #ldvl, (#vr)->raw()->raw(), #ldvr, (#work)->raw()->raw(), #lwork, &(#info))")
	public native static def dgeevWrap(jobvl:Char, jobvr:Char, n:Int, a:Array[Double](1),
			lda:Int, wr:Array[Double](1), wi:Array[Double](1), vl:Array[Double](1), ldvl:Int,
			vr:Array[Double](1), ldvr:Int, work:Array[Double](1), lwork:Int, info:Int): Int;

	@Native("c++", "dsyev_wrap(#jobz, #uplo, #n, (#a)->raw()->raw(), #lda, (#w)->raw()->raw(), (#work)->raw()->raw(), #lwork, &(#info))")
	public native static def dsyevWrap(
			jobz:Char, uplo:Char, n:Int, a:Array[Double], lda:Int,
			w:Array[Double], work:Array[Double], lwork:Int, info:Int): Int;
	
}