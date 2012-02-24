package org.scalegraph.clustering;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

@NativeCPPInclude("LAPACKWrapper.h")
@NativeCPPCompilationUnit("LAPACKWrapper.cc")
public class LAPACK {
	
	@Native("c++", "dsygv_wrap(#1, #2, #3, #4, (#5)->raw()->raw(), #6, (#7)->raw()->raw(), #8, (#9)->raw()->raw(), (#10)->raw()->raw(), #11, &(#12))")
	public native static def dsygv(
			itype:Int, jobz:Char, uplo:Char, n:Int,
			a:Array[Double], lda:Int, b:Array[Double], ldb:Int,
			w:Array[Double], work:Array[Double], lwork:Int, info:Long): Int;
	
	@Native("c++", "sum((#1)->raw()->raw(), #2)")
	public native static def sum(array:Array[Int], n:Int): Int;
	
	@Native("c++", "test_ptr(&(#1))")
	public native static def test_ptr(n:Int): void;
	
	public static def test_dsygv() {
		val jobz = 'V', uplo = 'U';
		val itype = 1, n = 3, lda = 3, ldb = 3, lwork = 3 * 3;
		val r1 = 0..2;
		val r2 = r1*r1;
		val a = new Array[Double](r2);
		val b = new Array[Double](r2);
		val w = new Array[Double](r1);
		val work = new Array[Double](r2);
		var info:Long = -1;  // Since dsygv returns a result to an argument 'info',
								// 'info' must be a variable.
		
		a(0,0) = 12; a(0,1) = 999; a(0,2) = 999;
		a(1,0) =  0; a(1,1) =   6; a(1,2) = 999;
		a(2,0) =  4; a(2,1) =   0; a(2,2) =   4;
		b(0,0) =  6; b(0,1) = 999; b(0,2) = 999;
		b(1,0) =  0; b(1,1) =   2; b(1,2) = 999;
		b(2,0) =  2; b(2,1) =   0; b(2,2) =   2;
		
		val result = dsygv(itype, jobz, uplo, n, a, lda, b, ldb, w, work, lwork, info);
		
		Console.OUT.println("result = " + result);
		Console.OUT.println("info = " + info);
		for(p in r2){
			Console.OUT.println("a"+p+" = "+a(p));
		}
		for(p in r1){
			Console.OUT.println("w"+p+" = "+w(p));
		}
	}
	
	public static def main(Array[String]): void {
		val array:Array[Int] = new Array[Int](10, (i:Int)=>i);
		var n:Int = 0;
		test_ptr(n);
		Console.OUT.println("Hello, LAPACK!");
		Console.OUT.println(sum(array, array.size));
		Console.OUT.println(n);
		test_dsygv();
	}
}