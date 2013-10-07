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
import x10.compiler.Native;
import x10.compiler.NativeRep;
import x10.compiler.NativeCPPOutputFile;
import x10.compiler.Ifdef;
import x10.compiler.Ifndef;

import x10.util.IndexedMemoryChunk;

@NativeCPPOutputFile("MemoryPointer.h")

/** The pointer representation for MemoryChunk. Using this representation directly is unsafe on the C++ backend.
 */
@NativeRep("c++", "#T *", "#T *", null)
public final struct MemoryPointer[T] {
	
	@Ifndef("__CPP__")
	public transient val raw :IndexedMemoryChunk[T];
	@Ifndef("__CPP__")
    public transient val offset :Long;
	
	@Native("c++", "null")
	private def this(backing :IndexedMemoryChunk[T], offset :Long) {
		this.raw = backing;
		this.offset = offset;
	}

	@Native("c++", "(#backing)->raw() + (#offset)")
	public static def make[T](backing :IndexedMemoryChunk[T], offset :Long) :MemoryPointer[T] {
		return new MemoryPointer(backing, offset);
	}
	@Native("c++", "(#backing)->raw() + (#offset)")
	public static def make[T](backing :IndexedMemoryChunk[T], offset :Int) :MemoryPointer[T] {
		return new MemoryPointer(backing, offset as Long);
	}
	@Native("c++", "(#backing)->raw()")
	public static def make[T](backing :IndexedMemoryChunk[T]) :MemoryPointer[T] {
		return new MemoryPointer(backing, 0L);
	}

	@Native("c++",  "((#0) + (#1))")
	public operator this + (x:Int): MemoryPointer[T]
	= MemoryPointer[T](raw, offset + x);
	
	@Native("c++",  "((#0) + (#1))")
	public operator this + (x:Long): MemoryPointer[T]
	= MemoryPointer[T](raw, offset + x);

	@Native("c++",  "((#0) - (#1))")
	public operator this - (x:Int): MemoryPointer[T]
	= MemoryPointer[T](raw, offset - x);

	@Native("c++",  "((#0) - (#1))")
	public operator this - (x:Long): MemoryPointer[T]
	= MemoryPointer[T](raw, offset - x);

	@Native("c++", "(#this)[#index]")
	public @Inline operator this(index:int):T {
		return raw(index + offset);
	}

	@Native("c++", "(#this)[#index]")
	public @Inline operator this(index:Long):T {
		return raw(index + offset);
	}
	
	@Native("c++", "(#this)[#index] = #value")
	public @Inline operator this(index:int)=(value:T):void {
		raw(index + offset) = value;
	}

	@Native("c++", "(#this)[#index] = #value")
	public @Inline operator this(index:Long)=(value:T):void {
		raw(index + offset) = value;
	}

	@Native("c++", "x10::lang::String::Steal(x10aux::alloc_printf(\"MemoryPointer(0x%x)\", #this)")
	public def  toString():String {
		return "MemoryPointer: offset=" + offset + ", raw=" + raw.toString();
	}

	@Native("c++", "((#this) == (#that))")
	public def equals(that:MemoryPointer[T]):Boolean {
		return raw == that.raw && offset == that.offset;
	}

	@Native("c++", "((x10_int)(#this))")
	public def  hashCode():Int {
		return (raw.hashCode() + offset) as Int;
	}
}