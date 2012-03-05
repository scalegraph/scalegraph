package org.scalegraph.clustering;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

@NativeCPPInclude("LAPACKWrapper.h")
@NativeCPPCompilationUnit("LAPACKWrapper.cc")
public class LAPACK {
	
	@Native("c++", "dsygv_wrap(#1, #2, #3, #4, (#5)->raw()->raw(), #6, (#7)->raw()->raw(), #8, (#9)->raw()->raw(), (#10)->raw()->raw(), #11, &(#12))")
	public native static def dsygvWrap(
			itype:Long, jobz:Char, uplo:Char, n:Long,
			a:Array[Double], lda:Long, b:Array[Double], ldb:Long,
			w:Array[Double], work:Array[Double], lwork:Long, info:Long): Int;
	
	/*
	 * test functions
	 */
	@Native("c++", "sum((#1)->raw()->raw(), #2)")
	public native static def sum(array:Array[Int], n:Int): Int;
	
	@Native("c++", "test_ptr(&(#1))")
	public native static def test_ptr(n:Int): void;
	
	@Native("c++", "show_matrix((#1)->raw()->raw(), #2, #3)")
	public native static def showMatrixWrap(array:Array[Double](1), m:Int, n:Int): void;
}