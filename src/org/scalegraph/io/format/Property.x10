package org.scalegraph.io.format;

import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;

@NativeCPPInclude("NativeReader.h")

@NativeRep("c++", "org::scalegraph::io::NativeProperty *", "org::scalegraph::io::NativeProperty *", null)
public class Property {
	
	@Native("c++", "(#this)->n")
	public val n : Int;
	
	@Native("c++", "(#this)->nattr")
	public val nattr : Int;
	
	@Native("c++", "(#this)->attr[#i]")
	public native def attr(i:Int) : Attribute;
	
	
	public def this(n:Int, nattr:Int) {
		this.n = n;
		this.nattr = nattr;
	}
}
