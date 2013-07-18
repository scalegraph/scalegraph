package org.scalegraph.util;

import org.scalegraph.util.tuple.Tuple2;

public class GrowableMemoryArray[T] {
	
	private val mc:MemoryChunk[EmbeddedGrowableMemory[T]];
	
	/** Creates growable memory array with the specified length.
	 * @param length Number of growable memory.
	 */
	public def this(length :Long) {
		mc = new MemoryChunk[EmbeddedGrowableMemory[T]](length);
	}
	
	/** Returns the indexed value.
	 * @param index The index where you want to get the value from.
	 */
	public operator this(index:Long) :EmbeddedGrowableMemory[T] {
		return mc(index);
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
		size = newLen;
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
		mc = tmp;
	}
	
	/** Shrinks backing store to minimize the memory footprint.
	 * @param newCapacity New capacity you want.
	 */
	public def shrink(var newCapacity:Long):void {
		newCapacity = x10.lang.Math.max(newCapacity, size);
		val tmp = new MemoryChunk[T](newCapacity);        
		MemoryChunk.copy(mc, 0L, tmp, 0L, size);
		mc = tmp;
	}
	
	public def del() {
		size = 0;
		mc = Zero.get[MemoryChunk[T]]();
	}
}