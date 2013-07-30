package org.scalegraph.util;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;
import x10.compiler.NativeCPPOutputFile;

@NativeCPPInclude("StringHelper.h")
@NativeCPPOutputFile("SString__TokenIterator.h")
@NativeCPPCompilationUnit("StringHelper.cc")

public class SStringBuilder {
	private var buffer :GrowableMemory[Byte];
	
	public def this() { }
	
	public def this(str :SString) {
		buffer.setMemory(str.bytes());
	}
	
//	@Native("c++", "
	public native def add[T](x :T) :SStringBuilder;
	
	public native def add[T](fmt :SString, x :T) :SStringBuilder;
	
	public def capacity() = buffer.capacity();
	
	public def delete(start :Int, end :Int) {
		val buf_size = buffer.size();
		if(start > end) throw new IllegalArgumentException("start > end");
		if(end > buf_size) throw new IllegalArgumentException("end > size()");
		MemoryChunk.copy(buffer.raw(), end as Long, 
				buffer.raw(), start as Long, buf_size - end);
		buffer.setSize(buf_size - end + start);
	}
	
	public def grow(minCapacity :Int) :void { buffer.grow(minCapacity); }
	
	public def indexOf(str :SString) = indexOf(str, 0);
	
	public native def indexOf(str :SString, from :Int) :Int;
	
	public native def insert[T](p :Int, x :T) :SStringBuilder;
	
	public native def insert[T](p :Int, fmt :SString, x :T) :SStringBuilder;
	
	public def lastIndexOf(str :SString) = lastIndexOf(str, 0);
	
	public native def lastIndexOf(str :SString, from :Int) :Int;
	
	public def result() = SString(buffer.raw().subpart(0, size()));
	
	public def replace(start :Int, end :Int, str :SString) {
		val buf_size = buffer.size();
		if(start > end) throw new IllegalArgumentException("start > end");
		if(end > buf_size) throw new IllegalArgumentException("end > size()");
		val str_size = str.size();
		val new_size = start + buf_size - end + str_size;
		buffer.setSize(new_size);
		MemoryChunk.copy(buffer.raw(), start as Long, buffer.raw(), end as Long, buf_size - start);
		buffer.setSize(new_size);
	}
	
	public def reverse() {
		// TODO:
		var left :Int = 0;
		val right :Int = buffer.size() as Int - 1;
		val buf = buffer.raw();
		while(left < right) { // swap byte
			val tmp = buf(left);
			buf(left) = buf(right);
			buf(right) = tmp;
		}
	}
	
	public def size() = buffer.size();
	
	public def substring(start :Int) = substring(start, 0);
	
	public def substring(start :Int, end :Int) = SString(buffer.raw().subpart(start, end));
	
	public def toString() = result().toString();
	
	public def trimToSize() {
		buffer.shrink(0);
	}
}
