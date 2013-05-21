package org.scalegraph.util;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;

import org.scalegraph.util.MemoryChunk;

@NativeCPPInclude("NativeAlgorithm.h")
public class Algorithm {
	
	public static def sort[I, V](index :MemoryChunk[I], value :MemoryChunk[V]) {
		sortWithLt(index, value);
	}
	
	@Native("c++", "org::scalegraph::util::sort2((#index)->pointer(), (#value)->pointer(), (#index)->size())")
	public static native def sortWithLt[I, V](index :MemoryChunk[I], value :MemoryChunk[V]) :void;

	@Native("c++", "org::scalegraph::util::sort2((#index)->pointer(), (#value)->pointer(), (#index)->size()), std::greater<V>()")
	public static native def sortWithGt[I, V](index :MemoryChunk[I], value :MemoryChunk[V]) :void;
	
	public static def reduce[T](range :LongRange, func :(Long) => T) { T <: Arithmetic[T] } {
		var ret :T = func(range.min);
		for(i in (range.min+1)..range.max) {
			ret = ret + func(i);
		}
		return ret;
	}
	
	public static def reduce[T](range :LongRange, func :(Long) => T, op :(T, T) => T) {
		var ret :T = func(range.min);
		for(i in (range.min+1)..range.max) {
			ret = op(ret, func(i));
		}
		return ret;
	}
}
