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
import x10.compiler.NativeRep;

public class Serialization {

	@Native("c++", "x10aux::count_ser_size<#T >((#data)->pointer() , #data_offset, #data_count)")
	private static native def count_ser_size[T](place :Long, data :MemoryChunk[T], data_offset :Int, data_count :Int): Int;
	
	@Native("c++", "x10aux::write_ser_data<#T >((#data)->pointer() , #data_offset, #data_count, (#ser_data)->pointer(), #ser_off, #ser_count)")
	private static native def write_ser_data[T](place :Long, data :MemoryChunk[T], data_offset :Int, data_count :Int, ser_data :MemoryChunk[Byte], ser_off :Int, ser_count :Int): void;

	@Native("c++", "x10aux::read_deser_data<#T >((#data)->pointer(), #data_offset, #data_count, (#deser_data)->pointer(), #deser_off, #deser_count)")
	private static native def read_deser_data[T](place :Long, data :MemoryChunk[T], data_offset :Int, data_count :Int, deser_data :MemoryChunk[Byte], deser_off :Int, deser_count :Int): void;

	@Native("c++", "x10aux::getRTT<TPMGL(T) >()->containsPtrs")
	public static def needToSerialize[T] () : Boolean = false;
	
	private static def checkSize(size :Long) :void {
		if(size > Int.MAX_VALUE) {
			throw new UnsupportedOperationException("The data size exceeded the limitation of uderlying implementation." +
					" The collective communication data size must less than 2^31 bytes.");
		}
	}

	public static def serialize[T](data :MemoryChunk[T], data_offset :Int, data_count :Int): MemoryChunk[Byte]
	{
		val ser_count = count_ser_size(0L, data, data_offset, data_count);
		val ser_data = MemoryChunk.make[Byte](ser_count);
		write_ser_data(0L, data, data_offset, data_count, ser_data, 0, ser_count);

		return ser_data;
	}

	public static def serialize[T](data :MemoryChunk[T], data_offsets :MemoryChunk[Int], data_counts :MemoryChunk[Int], ser_offsets :MemoryChunk[Int], ser_counts :MemoryChunk[Int]): MemoryChunk[Byte]
	{
		val places = data_counts.size();
		var ser_size: Long = 0;
		
		finish for (p in 0..(places-1)) async {
			ser_counts(p) = count_ser_size(p, data, data_offsets(p), data_counts(p));
		}
		for (p in 0..(places-1)) {
			ser_size += ser_counts(p);
		}
		checkSize(ser_size);

		ser_offsets(0) = 0;
		for (i in 0..(places-2)) ser_offsets(i+1) = ser_offsets(i) + ser_counts(i);
		val ser_data = MemoryChunk.make[Byte](ser_size);
		finish for (p in 0..(places-1)) async {
			write_ser_data(p, data, data_offsets(p), data_counts(p), ser_data, ser_offsets(p), ser_counts(p));
		}
		
		return ser_data;
	}

	public static def deserialize[T](data :MemoryChunk[T], data_offset :Int, data_count :Int, deser_data :MemoryChunk[Byte], deser_offset :Int, deser_count :Int) :void
	{
		read_deser_data(0L, data, data_offset, data_count, deser_data, deser_offset, deser_count);
	}

	public static def deserialize[T](data :MemoryChunk[T], data_offsets :MemoryChunk[Int], data_counts :MemoryChunk[Int], deser_data :MemoryChunk[Byte], deser_offsets :MemoryChunk[Int], deser_counts :MemoryChunk[Int]) :void
	{
		val places = data_counts.size();
		finish for (p in 0..(places-1)) async {
			read_deser_data(p, data, data_offsets(p), data_counts(p), deser_data, deser_offsets(p), deser_counts(p));
		}
	}
}
