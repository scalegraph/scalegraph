package org.scalegraph.util;

import x10.compiler.Ifndef;
import x10.compiler.Inline;

public class Bitmap {
	public static val BitsPerWord = 64;
	val mc :MemoryChunk[ULong];
	val size :Long;
	
	public def this(size :Long) {
		val numWords = (size + BitsPerWord - 1) / BitsPerWord;
		this.mc = new MemoryChunk[ULong](numWords);
		this.size = size;
	}
	
	public def this(size :Long, initv :Boolean) {
		val numWords = (size + BitsPerWord - 1) / BitsPerWord;
		this.mc = new MemoryChunk[ULong](numWords);
		this.size = size;
		val value = initv ? ~0UL : 0UL;
		for(i in mc.range()) mc(i) = value;
	}
	
	public def this(baseMemory :MemoryChunk[ULong]) {
		this.mc = baseMemory;
		this.size = baseMemory.size() * BitsPerWord;
	}
	
	public def size() = size;
	public def data() = mc;
	
	public static def offset(i :Long) = i / BitsPerWord;
	public static def mask(i :Long) = 1UL << ((i % BitsPerWord) as Int);
	public static def numWords(length :Long) = (length + BitsPerWord - 1) / BitsPerWord;
	
	public @Inline operator this(i :Long) :Boolean {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(i < 0 || i > size)
				throw new ArrayIndexOutOfBoundsException("specified range is not contained in MemoryChunk");
		}
		val wordOffset = i / BitsPerWord;
		val mask = 1UL << ((i % BitsPerWord) as Int);
		return (mc.data(wordOffset) & mask) != 0UL;
	}
	
	public @Inline operator this(i :Long) = (v :Boolean) :void {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(i < 0 || i > size)
				throw new ArrayIndexOutOfBoundsException("specified range is not contained in MemoryChunk");
		}
		val wordOffset = i / BitsPerWord;
		val mask = 1UL << ((i % BitsPerWord) as Int);
		mc.data(wordOffset) |= mask;
	}
	
	public @Inline def atomicSet(i :Long) :Boolean {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(i < 0 || i > size)
				throw new ArrayIndexOutOfBoundsException("specified range is not contained in MemoryChunk");
		}
		val wordOffset = i / BitsPerWord;
		val mask = 1UL << ((i % BitsPerWord) as Int);
		val old = mc.data.atomicOr(wordOffset, mask);
		return (old & mask) != 0UL;
	}
	
	public @Inline def atomicUnset(i :Long) :Boolean {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(i < 0 || i > size)
				throw new ArrayIndexOutOfBoundsException("specified range is not contained in MemoryChunk");
		}
		val wordOffset = i / BitsPerWord;
		val mask = 1UL << ((i % BitsPerWord) as Int);
		val old = mc.data.atomicAnd(wordOffset, ~mask);
		return (old & mask) != 0UL;
	}
	
	public @Inline def word(offset :Long) = mc(offset);
}
