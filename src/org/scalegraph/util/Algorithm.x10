/* 
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package org.scalegraph.util;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;

import org.scalegraph.util.MemoryChunk;

@NativeCPPInclude("NativeAlgorithm.h")
public final class Algorithm {
	
	public static def sort[I, V](index :MemoryChunk[I], value :MemoryChunk[V]) {
		sortWithLt(index, value);
	}
	
	@Native("c++", "org::scalegraph::util::sort2((#index)->pointer(), (#value)->pointer(), (#index)->size())")
	public static native def sortWithLt[I, V](index :MemoryChunk[I], value :MemoryChunk[V]) :void;

	@Native("c++", "org::scalegraph::util::sort2((#index)->pointer(), (#value)->pointer(), (#index)->size()), std::greater<I>()")
	public static native def sortWithGt[I, V](index :MemoryChunk[I], value :MemoryChunk[V]) :void;
	
	public static def sort[I, V1, V2](index :MemoryChunk[I], value1 :MemoryChunk[V1], value2 :MemoryChunk[V2]) {
		sortWithLt(index, value1, value2);
	}
	
	@Native("c++", "org::scalegraph::util::sort3((#index)->pointer(), (#value1)->pointer(), (#value2)->pointer(), (#index)->size())")
	public static native def sortWithLt[I, V1, V2](index :MemoryChunk[I], value1 :MemoryChunk[V1], value2 :MemoryChunk[V2]) :void;

	@Native("c++", "org::scalegraph::util::sort3((#index)->pointer(), (#value1)->pointer(), (#value2)->pointer(), (#index)->size()), std::greater<I>()")
	public static native def sortWithGt[I, V1, V2](index :MemoryChunk[I], value1 :MemoryChunk[V1], value2 :MemoryChunk[V2]) :void;
	
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
