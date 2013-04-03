package org.scalegraph.io.format;

import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;

@NativeCPPInclude("BlockInfo.h")

@NativeRep("c++", "org::scalegraph::io::NativeBlockInfo *", "org::scalegraph::io::NativeBlockInfo *", null)
public class BlockInfo {
	
	@Native("c++", "(#this)->n")
	public val n : Int;
	
	@Native("c++", "&(#this)->block[#i]")
	public native def block(i:Int) : Block;
	
	
	public def this(n:Int) {
		this.n = n;
	}
}
