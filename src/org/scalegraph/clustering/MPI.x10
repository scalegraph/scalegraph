package org.scalegraph.clustering;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

@NativeCPPInclude("MPIWrapper.h")
@NativeCPPCompilationUnit("MPIWrapper.cc")
public class MPI {
	
	@Native("c++", "initialize()")
	public native static def initialize(): Int;
	
	@Native("c++", "finalize()")
	public native static def finalize(): void;
	
	@Native("c++", "get_size()")
	public native static def getSize(): Int;
	
	@Native("c++", "get_rank()")
	public native static def getRank(): Int;
}