package org.scalegraph.util;

import x10.compiler.Inline;
import x10.compiler.Ifndef;
import x10.compiler.Native;

public struct EmbeddedGrowableMemory[T] {
	public val mc :MemoryChunk[T];
	public val size :Long;
	
	@Native("c++", "(#this)->FMGL(mc) = #v")
	private native def _setMc(v :MemoryChunk[T]) :void;
	@Native("c++", "(#this)->FMGL(size) = #v")
	private native def _setSize(v :Long) :void;
	
	/** Creates empty growable memory.
	 */
	public def this() {
		this(0L);
	}
	
	/** Creates growable memory with the specified capacity.
	 * @param cap Initial capacity for this instance.
	 */
	public def this(cap :Long) {
		mc = new MemoryChunk[T](cap);
		size = 0L;
	}
	
	/** Returns the valid part.
	 */
	public def raw() = mc.subpart(0, size);
	
	/** Returns the number of valid elements.
	 */
	public def size() = size;
	
	/** Returns the capacity.
	 */
	public def capacity() = mc.size();
	
	/** Returns internal memory (0..(capacity-1)).
	 */
	public def backingStore() = mc;
	
	/** Returns the valid index range.
	 */
	public def range() = 0L..(size-1L);
	
	/** Add new item.
	 */
	public def add(v:T):void {
		if(size+1 > capacity()) grow(size+1);
		mc.data(size) = v;
		_setSize(size + 1);
	}
	
	/** Append new items.
	 */
	public def add(items :MemoryChunk[T]):void {
		insert(size, items);
	}
	
	/** Reset the size to 0.
	 */
	public def clear():void {
		_setSize(0);
	}
	
	/** Set new size. If the size is larger than the current size, the values on the extended range is undefined.
	 * @param newSize New size for this growable memory
	 */
	public def setSize(newSize :Long):void {
		if(newSize > mc.size()) grow(newSize);
		_setSize(newSize);
	}
	
	/** Replaces backing store with new memory
	 * @param mc New backing store
	 */
	public def setMemory(mc :MemoryChunk[T]) {
		setMemory(mc, mc.size());
	}
	
	/** Replaces backing store and set new size.
	 * @param mc New backing store
	 * @param size New size
	 */
	public def setMemory(mc :MemoryChunk[T], size :Long) {
		_setMc(mc);
		_setSize(size);
	}
	
	/** Returns the indexed value.
	 * @param index The index where you want to get the value from.
	 */
	public @Inline operator this(index:Long) :T {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(index < 0 || index >= size)
				throw new ArrayIndexOutOfBoundsException("index (" + index + ") not contained in MemoryChunk");
		}
		return mc.data(index);
	}
	
	/** Sets new value to indexed place
	 * @param index The index where you want to set the value to.
	 */
	public @Inline operator this(index:Long)=(value:T) {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(index < 0 || index >= size)
				throw new ArrayIndexOutOfBoundsException("index (" + index + ") not contained in MemoryChunk");
		}
		mc.data(index) = value;
	}
	
	/** Insert new items.
	 * @param p The index import from
	 * @param items MemoryChunk storing new items
	 */
	public def insert(p :Long, items :MemoryChunk[T]):void {
		val addLen = items.size();
		val newLen = size + addLen;
		val movLen = size - p;
		if (newLen > capacity()) grow(newLen);
		if (movLen > 0) {
			MemoryChunk.copy(mc, p, mc, p+addLen, movLen);
		}
		MemoryChunk.copy(items, 0L, mc, p, items.size());
		_setSize(newLen);
	}
	
	/** Enlarges backing store. This method does not change the size parameter.
	 * @param reqCapacity The capacity you need at least.
	 */
	public def grow(var reqCapacity:Long):void {
		var newCapacity :Long = capacity();
		if (newCapacity < 8) newCapacity = 8;
		while (newCapacity < reqCapacity) newCapacity *= 2;
		
		val tmp = new MemoryChunk[T](newCapacity);
		MemoryChunk.copy(mc, 0L, tmp, 0L, size);
		_setMc(tmp);
	}
	
	/** Shrinks backing store to minimize the memory footprint.
	 * @param newCapacity New capacity you want.
	 */
	public def shrink(var newCapacity:Long):void {
		newCapacity = x10.lang.Math.max(newCapacity, size);
		val tmp = new MemoryChunk[T](newCapacity);        
		MemoryChunk.copy(mc, 0L, tmp, 0L, size);
		_setMc(tmp);
	}
	
	public def del() {
		_setSize(0);
		_setMc(Zero.get[MemoryChunk[T]]());
	}
}