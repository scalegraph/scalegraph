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

import x10.compiler.Ifndef;
import x10.compiler.Inline;

public final class Bitmap {
	public static val BitsPerWord = 64;
	var mc :MemoryChunk[ULong];
	var size :Long;
	
	public def this(size :Long) {
		val numWords = (size + BitsPerWord - 1) / BitsPerWord;
		this.mc = MemoryChunk.make[ULong](numWords);
		this.size = size;
	}
	
	public def this(size :Long, initv :Boolean) {
		val numWords = (size + BitsPerWord - 1) / BitsPerWord;
		this.mc = MemoryChunk.make[ULong](numWords);
		this.size = size;
		val value = initv ? ~0UL : 0UL;
		for(i in mc.range()) mc(i) = value;
	}
	
	public def this(baseMemory :MemoryChunk[ULong]) {
		this.mc = baseMemory;
		this.size = baseMemory.size() * BitsPerWord;
	}
	
	public def del() {
		mc.del();
		size = 0;
	}
	
	public def size() = size;
	public def raw() = mc;
	
	public static def offset(i :Long) = i / BitsPerWord;
	public static def mask(i :Long) = 1UL << ((i % BitsPerWord) as Int);
	public static def numWords(length :Long) = (length + BitsPerWord - 1) / BitsPerWord;
	
	public @Inline def word(offset :Long) = mc(offset);
	
	public def clear(initv :Boolean) {
		val value = initv ? ~0UL : 0UL;
		for(i in mc.range()) mc(i) = value;
	}
	
	public @Inline operator this(i :Long) :Boolean {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(i < 0 || i >= size)
				throw new ArrayIndexOutOfBoundsException("specified range is not contained in MemoryChunk");
		}
		val wordOffset = i / BitsPerWord;
		val mask = 1UL << ((i % BitsPerWord) as Int);
		return (mc.data(wordOffset) & mask) != 0UL;
	}
	
	public operator this(i :Long) = (v :Boolean) :void {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(i < 0 || i >= size)
				throw new ArrayIndexOutOfBoundsException("specified range is not contained in MemoryChunk");
		}
		val wordOffset = i / BitsPerWord;
		val mask = 1UL << ((i % BitsPerWord) as Int);
		if(v) mc.data(wordOffset) |= mask;
		else  mc.data(wordOffset) &= ~mask;
	}
	
	public def set(i :Long) :void {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(i < 0 || i >= size)
				throw new ArrayIndexOutOfBoundsException("specified range is not contained in MemoryChunk");
		}
		val wordOffset = i / BitsPerWord;
		val mask = 1UL << ((i % BitsPerWord) as Int);
		mc.data(wordOffset) |= mask;
	}
	
	public def unset(i :Long) :void {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(i < 0 || i >= size)
				throw new ArrayIndexOutOfBoundsException("specified range is not contained in MemoryChunk");
		}
		val wordOffset = i / BitsPerWord;
		val mask = 1UL << ((i % BitsPerWord) as Int);
		mc.data(wordOffset) &= ~mask;
	}
	
	public def atomicSet(i :Long) :Boolean {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(i < 0 || i >= size)
				throw new ArrayIndexOutOfBoundsException("specified range is not contained in MemoryChunk");
		}
		val wordOffset = i / BitsPerWord;
		val mask = 1UL << ((i % BitsPerWord) as Int);
		val old = mc.data.atomicOr(wordOffset, mask);
		return (old & mask) != 0UL;
	}
	
	public def atomicUnset(i :Long) :Boolean {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(i < 0 || i >= size)
				throw new ArrayIndexOutOfBoundsException("specified range is not contained in MemoryChunk");
		}
		val wordOffset = i / BitsPerWord;
		val mask = 1UL << ((i % BitsPerWord) as Int);
		val old = mc.data.atomicAnd(wordOffset, ~mask);
		return (old & mask) != 0UL;
	}
}
