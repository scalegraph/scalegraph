package org.scalegraph.util;

import x10.compiler.Inline;
import x10.compiler.Ifdef;
import x10.compiler.Ifndef;
import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

import x10.util.IndexedMemoryChunk;

@NativeCPPInclude("MemoryChunkData.h")
@NativeCPPCompilationUnit("MemoryChunkData.cc")


/** Internal data structure used by MemoryChunk.
 * This structure is highly optimized for C++ backend.
 */
@NativeRep("c++", "org::scalegraph::util::MCData_Impl<#T >", "org::scalegraph::util::MCData_Impl<#T >", null)
struct MemoryChunkData[T] {
	public val raw :IndexedMemoryChunk[T];
	public val offset :Long;
	public val size :Long;
	
	@Native("c++", "null")
	private def this(backing :IndexedMemoryChunk[T], offset :Long, size :Long) {
		this.raw = backing;
		this.offset = offset;
		this.size = size;
	}
	
	@Native("java", "x10.core.IndexedMemoryChunk.<#T$box>allocate(#T$rtt, #numElements, #zeroed)")
	private static native def allocateFlat[T](numElements :Long, alignment :Int, zeroed :Boolean) :IndexedMemoryChunk[T];

	@Native("c++", "org::scalegraph::util::MCData_Impl<#T >((#backing)->raw() + (#offset), NULL, (#size))")
	public static def make[T](backing :IndexedMemoryChunk[T], offset :Long, size :Long) :MemoryChunkData[T] {
		return new MemoryChunkData[T](backing, offset, size);
	}
	@Native("c++", "org::scalegraph::util::MCData_Impl<#T >((#backing)->raw(), NULL, (#backing).length())")
	public static def make[T](backing :IndexedMemoryChunk[T]) :MemoryChunkData[T] {
		return new MemoryChunkData[T](backing, 0L, backing.length());
	}
	@Native("c++", "org::scalegraph::util::MCData_Impl<#T >::_make(#numElements, 0, true)")
	public static def make[T](numElements :Long) :MemoryChunkData[T] {
		return new MemoryChunkData[T](allocateFlat[T](numElements, 0, true), 0L, numElements);
	}
	@Native("c++", "org::scalegraph::util::MCData_Impl<#T >::_make(#numElements, #alignment, #zeroed)")
	public static def make[T](numElements :Long, alignment :Int, zeroed :Boolean) :MemoryChunkData[T] {
		return new MemoryChunkData[T](allocateFlat[T](numElements, alignment, zeroed), 0L, numElements);
	}
	
	@Native("c++", "(#this).del()")
	public def del() :void { }
	
	@Native("c++", "(#this).FMGL(pointer)")
	public def pointer() :MemoryPointer[T] {
		return MemoryPointer.make[T](raw, offset);
	}

	@Native("c++", "org::scalegraph::util::MCData_Impl<#T >((#this).FMGL(head), (#this).FMGL(pointer) + (#offset), (#size))")
	public def subpart(offset :Long, size :Long) :MemoryChunkData[T] =
		new MemoryChunkData[T](raw, this.offset + offset, size);

	@Native("c++", "(#this).FMGL(pointer)[#index]")
	public @Inline operator this(index:int):T {
		return raw(index + offset);
	}

	@Native("c++", "(#this).FMGL(pointer)[#index]")
	public @Inline operator this(index:Long):T {
		return raw(index + offset);
	}
	
	@Native("c++", "(#this).FMGL(pointer)[#index] = #value")
	public @Inline operator this(index:int)=(value:T):void {
		raw(index + offset) = value;
	}

	@Native("c++", "(#this).FMGL(pointer)[#index] = #value")
	public @Inline operator this(index:Long)=(value:T):void {
		raw(index + offset) = value;
	}
	
	@Native("c++", "__sync_fetch_and_add(&(#this).FMGL(pointer)[#index], #value)")
	public @Inline def atomicAdd(index:Long, value:T):T {
		throw new UnsupportedOperationException ();
	}
	
	@Native("c++", "__sync_fetch_and_or(&(#this).FMGL(pointer)[#index], #value)")
	public @Inline def atomicOr(index:Long, value:T):T {
		throw new UnsupportedOperationException ();
	}
	
	@Native("c++", "__sync_fetch_and_and(&(#this).FMGL(pointer)[#index], #value)")
	public @Inline def atomicAnd(index:Long, value:T):T {
		throw new UnsupportedOperationException ();
	}
	
	@Native("c++", "__sync_fetch_and_xor(&(#this).FMGL(pointer)[#index], #value)")
	public @Inline def atomicXor(index:Long, value:T):T {
		throw new UnsupportedOperationException ();
	}
	
	@Native("c++", "__sync_bool_compare_and_swap(&(#this).FMGL(pointer)[#index], #expect, #value)")
	public @Inline def atomicCAS(index:Long, expect:T, value:T):Boolean {
		throw new UnsupportedOperationException ();
	}
	
}
