package org.scalegraph.io.format;

import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;

@NativeCPPInclude("Attribute.h")

@NativeRep("c++", "org::scalegraph::io::NativeAttribute *", "org::scalegraph::io::NativeAttribute *", null)
public class Attribute {
	
	@Native("c++", "(#this)->id")
	public val id : Int;
	
	@Native("c++", "(#this)->namelen")
	public val namelen : Int;
	
	@Native("c++", "org::scalegraph::io::makeString((#this)->name, (#this)->namelen)")
	public native def getName() : String;
	
	//@Native("c++", "(#this)->name")
	//public val name : Int;
	
	
	public def this(id:Int, namelen:Int) {
		this.id = id;
		this.namelen = namelen;
	}
}
