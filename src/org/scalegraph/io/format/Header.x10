package org.scalegraph.io.format;

import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;

@NativeCPPInclude("Header.h")

@NativeRep("c++", "org::scalegraph::io::NativeHeader *", "org::scalegraph::io::NativeHeader *", null)
public class Header {
	
	@Native("c++", "(#this)->magic[#i]")
	public native def magic(i:Int) : Byte;
	
	@Native("c++", "(#this)->version")
	public val version : Byte;
	
	@Native("c++", "(#this)->datatype[#i]")
	public native def datatype(i:Int) : Byte;
	
	@Native("c++", "(#this)->size")
	public val size : Int;
	
	@Native("c++", "(#this)->nsec")
	public val nsec : Int;
	
	@Native("c++", "(#this)->seclen[#i]")
	public native def seclen(i:Int) : Long;
	
	
	public def this(version:Byte, size:Int, nsec:Int) {
		this.version = version;
		this.size = size;
		this.nsec = nsec;
	}
}
