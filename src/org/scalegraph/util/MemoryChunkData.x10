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

import x10.compiler.Inline;
import x10.compiler.Ifdef;
import x10.compiler.Ifndef;
import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;

import x10.util.IndexedMemoryChunk;
import x10.compiler.NativeCPPOutputFile;

@NativeCPPOutputFile("MemoryChunkData.h")
@NativeCPPOutputFile("MemoryChunkData__Pointer.h")
@NativeCPPCompilationUnit("MemoryChunkData.cc")


/** Internal data structure used by MemoryChunk.
 * This structure is highly optimized for C++ backend.
 */
@NativeRep("c++", "org::scalegraph::util::MCData_Impl<#T >", "org::scalegraph::util::MCData_Impl<#T >", null)
final struct MemoryChunkData[T] {
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

	@Native("c++", "org::scalegraph::util::MCData_Impl<#T >((#backing)->raw() + (#offset), (#size), NULL)")
	public static def make[T](backing :IndexedMemoryChunk[T], offset :Long, size :Long) :MemoryChunkData[T] {
		return new MemoryChunkData[T](backing, offset, size);
	}
	@Native("c++", "org::scalegraph::util::MCData_Impl<#T >((#backing)->raw(), (#backing).length(), NULL)")
	public static def make[T](backing :IndexedMemoryChunk[T]) :MemoryChunkData[T] {
		return new MemoryChunkData[T](backing, 0L, backing.length());
	}
	@Native("c++", "org::scalegraph::util::MCData_Impl<#T >::_make(#numElements, #alignment, #zeroed)")
	public static def make[T](numElements :Long, alignment :Int, zeroed :Boolean) :MemoryChunkData[T] {
		return new MemoryChunkData[T](allocateFlat[T](numElements, alignment, zeroed), 0L, numElements);
	}
	@Native("c++", "org::scalegraph::util::MCData_Impl<#T >::_make(#numElements, #alignment, #zeroed, (char*)#filename, #num)")
	public static def make[T](numElements :Long, alignment :Int, zeroed :Boolean, filename :MemoryPointer[Byte], num :Int) :MemoryChunkData[T] {
		return new MemoryChunkData[T](allocateFlat[T](numElements, alignment, zeroed), 0L, numElements);
	}
	
	@Native("c++", "(#this).del()")
	public def del() :void { }
	
	@NativeRep("c++", "typename org::scalegraph::util::MCData_Impl<#T >::ELEM*", "typename org::scalegraph::util::MCData_Impl<#T >::ELEM*", null)
	static struct Pointer[T] { }
	
	@Native("c++", "(#this).FMGL(pointer)")
	public native def pointer() :Pointer[T];

	@Native("c++", "org::scalegraph::util::MCData_Impl<#T >((#this).FMGL(pointer) + (#offset), (#size), (#this).FMGL(memobj))")
	public def subpart(offset :Long, size :Long) :MemoryChunkData[T] =
		new MemoryChunkData[T](raw, this.offset + offset, size);

	@Native("c++", "(#this)[#index]")
	public @Inline operator this(index:int):T {
		return raw(index + offset);
	}

	@Native("c++", "(#this)[#index]")
	public @Inline operator this(index:Long):T {
		return raw(index + offset);
	}
	
	@Native("c++", "(#this).set(#index, #value)")
	public @Inline operator this(index:int)=(value:T):void {
		raw(index + offset) = value;
	}

	@Native("c++", "(#this).set(#index, #value)")
	public @Inline operator this(index:Long)=(value:T):void {
		raw(index + offset) = value;
	}
	
	@Native("c++", "(#this).atomicAdd(#index, #value)")
	public @Inline def atomicAdd(index:Long, value:T):T {
		throw new UnsupportedOperationException ();
	}

	@Native("c++", "(#this).atomicOr(#index, #value)")
	public @Inline def atomicOr(index:Long, value:T):T {
		throw new UnsupportedOperationException ();
	}

	@Native("c++", "(#this).atomicAnd(#index, #value)")
	public @Inline def atomicAnd(index:Long, value:T):T {
		throw new UnsupportedOperationException ();
	}

	@Native("c++", "(#this).atomicXor(#index, #value)")
	public @Inline def atomicXor(index:Long, value:T):T {
		throw new UnsupportedOperationException ();
	}

	@Native("c++", "(#this).atomicCAS(#index, #expect, #value)")
	public @Inline def atomicCAS(index:Long, expect:T, value:T):Boolean {
		throw new UnsupportedOperationException ();
	}
	
	@Native("java", "System.arraycopy((#src).raw.value, (#src).offset + #srcIndex, " +
	"(#dst).raw.value, (#dst).offset + #dstIndex, #numElems)")
	@Native("c++", "org::scalegraph::util::MCData_Impl<#T >::copy(#src, #srcIndex, #dst, #dstIndex, #numElems)")
	public static native def copy[T](src:MemoryChunkData[T], srcIndex:Long,
			dst:MemoryChunkData[T], dstIndex:Long, numElems:Long):void;
}
