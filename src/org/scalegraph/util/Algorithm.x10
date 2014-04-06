/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
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

	@Native("c++", "org::scalegraph::util::StableSort_TupleK1<#T >((#data)->pointer(), (#data)->size())")
	public static native def stableSortTupleKey1[T](data :MemoryChunk[T]) :void;
	@Native("c++", "org::scalegraph::util::StableSort_TupleK2<#T >((#data)->pointer(), (#data)->size())")
	public static native def stableSortTupleKey2[T](data :MemoryChunk[T]) :void;

	//yabee
	@Native("c++", "org::scalegraph::util::MaskedStableSort_TupleK1<#T >((#data)->pointer(), (#data)->size())")
	public static native def maskedStableSortTupleKey1[T](data :MemoryChunk[T]) :void;
	@Native("c++", "org::scalegraph::util::MaskedStableSort_TupleK2<#T >((#data)->pointer(), (#data)->size())")
	public static native def maskedStableSortTupleKey2[T](data :MemoryChunk[T]) :void;

	@Native("c++", "(::std::find((#mem)->pointer() + (size_t)(#startOff), (#mem)->pointer() + (size_t)(#endOff), (#num)) - (#mem)->pointer())")
	public static native def find[T](mem:MemoryChunk[T], startOff:Long , endOff:Long, num:Long) :Long;
	public static def linearSearch[T](mem:MemoryChunk[T], range:LongRange, num:Long) :Tuple2[Boolean,Long] {
		val tmp = find(mem, range.min, range.max+1L, num);
		return new Tuple2[Boolean,Long](tmp != range.max+1L, tmp);
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
	
	public static def sort[V](rangeScale :Int, logChunks :Int, counts :MemoryChunk[Long], offsets :MemoryChunk[Long],
			src_i :MemoryChunk[Long], src_v1 :MemoryChunk[V], dst_i :MemoryChunk[Long], dst_v1 :MemoryChunk[V])
			{
		val numChunks = 1 << logChunks;
		val numShift = rangeScale - logChunks;
		val mask = (1l << rangeScale) - 1;
		for(i in counts.range()) assert (counts(i) == 0l);
		
		for(i in src_i.range()) {
			counts((src_i(i) & mask) >> numShift)++;
		}
		
		offsets(0) = 0l;
		for(i in 0..(numChunks-2)) offsets(i + 1) = offsets(i) + counts(i);

		for(i in src_i.range()) {
			val dstIndex = offsets((src_i(i) & mask) >> numShift)++;
			dst_i(dstIndex) = src_i(i);
			dst_v1(dstIndex) = src_v1(i);
		}

		if(numShift > 0) {
			offsets(0) = 0l;
			for(i in 0..(numChunks-2)) offsets(i + 1) = offsets(i) + counts(i);
			
			for(i in 0..(numChunks-1)) {
				val off = offsets(i);
				val len = counts(i);
				Algorithm.sort(dst_i.subpart(off, len), dst_v1.subpart(off, len));
			}
		}
	}
	
	@Native("c++", "org::scalegraph::util::sort2((#index)->pointer(), (#value)->pointer(), (#index)->size())")
	public static native def sortWithLt[I, V](index :MemoryChunk[I], value :MemoryChunk[V]) :void;

	@Native("c++", "org::scalegraph::util::sort2((#index)->pointer(), (#value)->pointer(), (#index)->size(), std::greater<#I>())")
	public static native def sortWithGt[I, V](index :MemoryChunk[I], value :MemoryChunk[V]) :void;
	
	public static def sort[I, V1, V2](index :MemoryChunk[I], value1 :MemoryChunk[V1], value2 :MemoryChunk[V2]) {
		sortWithLt(index, value1, value2);
	}
	
	public static def sort[V1, V2](rangeScale :Int, logChunks :Int, counts :MemoryChunk[Long], offsets :MemoryChunk[Long],
			src_i :MemoryChunk[Long], src_v1 :MemoryChunk[V1], src_v2 :MemoryChunk[V2],
			dst_i :MemoryChunk[Long], dst_v1 :MemoryChunk[V1], dst_v2 :MemoryChunk[V2])
	{
		val numChunks = 1 << logChunks;
		val numShift = rangeScale - logChunks;
		val mask = (1l << rangeScale) - 1;
		for(i in counts.range()) assert (counts(i) == 0l);
		
		for(i in src_i.range()) {
			counts((src_i(i) & mask) >> numShift)++;
		}
		
		offsets(0) = 0l;
		for(i in 0..(numChunks-2)) offsets(i + 1) = offsets(i) + counts(i);

		for(i in src_i.range()) {
			val dstIndex = offsets((src_i(i) & mask) >> numShift)++;
			dst_i(dstIndex) = src_i(i);
			dst_v1(dstIndex) = src_v1(i);
			dst_v2(dstIndex) = src_v2(i);
		}

		if(numShift > 0) {
			offsets(0) = 0l;
			for(i in 0..(numChunks-2)) offsets(i + 1) = offsets(i) + counts(i);
			
			for(i in 0..(numChunks-1)) {
				val off = offsets(i);
				val len = counts(i);
				Algorithm.sort(dst_i.subpart(off, len), dst_v1.subpart(off, len), dst_v2.subpart(off, len));
			}
		}
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
