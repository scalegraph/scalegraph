package org.scalegraph.clustering;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;
import x10.util.Pair;

@NativeCPPInclude("BLACSWrapper.h")
@NativeCPPCompilationUnit("BLACSWrapper.cc")
public class BLACS {
	
	@Native("c++", "blacs_pinfo(&#mypnum, &#nprocs)")
	public native static def pInfo(mypnum:Int, nprocs:Int): void;
	
	@Native("c++", "blacs_setup(&#mypnum, &#nprocs)")
	public native static def setup(mypnum:Int, nprocs:Int): void;
	
	@Native("c++", "blacs_get(#ictxt, #what, &#value)")
	public native static def get(ictxt:Int, what:Int, value:Int): void;
	
	@Native("c++", "blacs_gridinit(&#ictxt, #order, #nprow, #npcol)")
	public native static def gridInit(ictxt:Int, order:Char, nprow:Int, npcol:Int): void;
	
	@Native("c++", "blacs_gridinfo(#ictxt, #nprow, #npcol, &#myrow, &#mycol)")
	public native static def gridInfo(ictxt:Int, nprow:Int, npcol:Int, myrow:Int, mycol:Int): void;
	
	public static def gridInfo(ictxt:Int, nprow:Int, npcol:Int, myrow:Cell[Int], mycol:Cell[Int]): void {
		var tmprow:Int = -1;
		var tmpcol:Int = -1;
		gridInfo(ictxt, nprow, npcol, tmprow, tmpcol);
		myrow() = tmprow;
		mycol() = tmpcol;
	}
	
	@Native("c++", "blacs_gridexit(#ictxt)")
	public native static def gridExit(ictxt:Int): void;
	
	@Native("c++", "blacs_exit(#n)")
	public native static def exit(n:Int): void;
	
	@Native("c++", "blacs_barrier(#ictxt, #c)")
	public native static def barrier(ictxt:Int, c:Char): void;
}