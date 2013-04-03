package org.scalegraph.io.format;

import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;

@NativeCPPInclude("Block.h")

@NativeRep("c++", "org::scalegraph::io::NativeBlock *", "org::scalegraph::io::NativeBlock *", null)
public class Block {
	
	@Native("c++", "(#this)->offset")
	public val offset : Long;
	
	@Native("c++", "(#this)->size")
	public val size : Long;
	
	@Native("c++", "(#this)->n")
	public val n : Long;
	
	
	public def this(offset:Long, size:Long, n:Long) {
		this.offset = offset;
		this.size = size;
		this.n = n;
	}
}
