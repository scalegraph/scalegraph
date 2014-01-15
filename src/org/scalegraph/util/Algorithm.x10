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
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.tuple.Tuple3;

@NativeCPPInclude("NativeAlgorithm.h")
public final class Algorithm {

	@Native("c++", "::std::sort((#index)->pointer(), (#index)->pointer() + (#index)->size())")
	public static native def sort[I](index :MemoryChunk[I]) :void;
	
	@Native("c++", "org::scalegraph::util::StableSort_TupleK2<#T >((#data)->pointer(), (#data)->size())")
	public static native def stableSortTupleKey2[T](data :MemoryChunk[T]) :void;
	
	@Native("c++", "org::scalegraph::util::StableSort_TupleK1<#T >((#data)->pointer(), (#data)->size())")
	public static native def stableSortTupleKey1[T](data :MemoryChunk[T]) :void;

	//yabee
	@Native("c++", "org::scalegraph::util::MaskedStableSort_TupleK1<#T >((#data)->pointer(), (#data)->size())")
	public static native def maskedStableSortTupleKey1[T](data :MemoryChunk[T]) :void;

	@Native("c++", "(x10_long)((::std::lower_bound((#mem)->pointer() + (#startOff), (#mem)->pointer() + (#endOff), (#num)) - (#mem)->pointer())/sizeof(#T))")
	public static native def lowerBound[T](mem:MemoryChunk[T], startOff:Long , endOff:Long, num:Long) :Long;
	
	@Native("c++", "(x10_long)((::std::find((#mem)->pointer() + (#startOff), (#mem)->pointer() + (#endOff), (#num)) - (#mem)->pointer())/sizeof(#T))")
	public static native def find[T](mem:MemoryChunk[T], startOff:Long , endOff:Long, num:Long) :Long;
	
	public static def binarySearch[T](mem:MemoryChunk[T], range:LongRange, num:Long) :Tuple2[Boolean,Long] {
		val tmp = lowerBound(mem, range.min, range.max, num);
		return new Tuple2[Boolean,Long](mem(tmp) == num, tmp);
	}
	
	public static def linearSearch[T](mem:MemoryChunk[T], range:LongRange, num:Long) :Tuple2[Boolean,Long] {
		val tmp = find(mem, range.min, range.max, num);
		return new Tuple2[Boolean,Long](mem(tmp) == num, tmp);
	}
	
    /*public static def sort[I](index :MemoryChunk[I]) {
        sortWithLt(index);
    }*/
    
    @Native("c++", "org::scalegraph::util::sort1((#index)->pointer(), (#index)->size())")
    public static native def sortWithLt[I](index :MemoryChunk[I]) :void;
    
    @Native("c++", "org::scalegraph::util::sort1((#index)->pointer(), (#index)->size(), std::greater<#I>())")
    public static native def sortWithGt[I](index :MemoryChunk[I]) :void;
    
	public static def sort[I, V](index :MemoryChunk[I], value :MemoryChunk[V]) {
		sortWithLt(index, value);
	}
	
	@Native("c++", "org::scalegraph::util::sort2((#index)->pointer(), (#value)->pointer(), (#index)->size())")
	public static native def sortWithLt[I, V](index :MemoryChunk[I], value :MemoryChunk[V]) :void;

	@Native("c++", "org::scalegraph::util::sort2((#index)->pointer(), (#value)->pointer(), (#index)->size(), std::greater<#I>())")
	public static native def sortWithGt[I, V](index :MemoryChunk[I], value :MemoryChunk[V]) :void;
	
	public static def sort[I, V1, V2](index :MemoryChunk[I], value1 :MemoryChunk[V1], value2 :MemoryChunk[V2]) {
		sortWithLt(index, value1, value2);
	}
	
	@Native("c++", "org::scalegraph::util::sort3((#index)->pointer(), (#value1)->pointer(), (#value2)->pointer(), (#index)->size())")
	public static native def sortWithLt[I, V1, V2](index :MemoryChunk[I], value1 :MemoryChunk[V1], value2 :MemoryChunk[V2]) :void;

	@Native("c++", "org::scalegraph::util::sort3((#index)->pointer(), (#value1)->pointer(), (#value2)->pointer(), (#index)->size(), std::greater<#I>())")
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
