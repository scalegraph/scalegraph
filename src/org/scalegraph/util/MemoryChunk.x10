package org.scalegraph.util;

import x10.compiler.Inline;
import x10.compiler.Ifdef;
import x10.compiler.Ifndef;
import x10.compiler.Native;

import x10.util.IndexedMemoryChunk;

/** High performance array. The followings are the advantages of MemoryChunk compared with x10.lang.Array.<br>
 * <p><dl><dt>Indexing with Long</dt> <dd>The maximum length of x10.lang.Array is 2^31 since it uses Int for indexing.
 * In constract, the maximum length of MemoryChunk, which uses Long for indexing, is 2^63.</dd>
 * <dt>High performance serialization and deserialization</dt> <dd>Serialization and deserialization is 
 * implemented as a memcpy operation. In the case of primitive types, there are no performance difference
 * between x10.lang.Array and MemoryChunk. But for other types, the serialization/deserialization speed of
 * MemoryChunk is faster than x10.lang.Array for about 70%.</dd>
 * <dt>Interior pointer</dt> <dd>MemoryChunk can refer interior of another MemoryChunk. This may reduce memory allocation/deallocation costs signifacantly.</dd>
 * <dt>Reducing GC cost (C++ backend only)</dt> <dd>MemoryChunk allocates memory declaring the memory has no reference so that GC can skip reading the elements of MemoryChunk.</dd>
 * <dt>Direct access with pointer (C++ backend only)</dt> <dd>The generated code for accessing an element of MemoryChunk does not have any function call.
 * Accessing the elements of MemoryChunk is 40% faster than accessing the elements of x10.lang.Array.</dd></p>
 * <p>Limitations: Current memory chunk only support non-reference data. The supports for the class or any data structures which include class members are imcomplete.
 *  DO NOT USE MEMORYCHUNK TO STORE ANY DATA STRUCTURES THAT INCLUDE REFERENCES. </p>
 */
public struct MemoryChunk[T] implements Iterable[T] {
	val data :MemoryChunkData[T];
	
	/** The purpose of this class is to distribute continuous memory region into several memory chunks.
	 */
	public static class Distributor[T] {
		private val outer :MemoryChunk[T];
		private var offset :Long = 0;
		
		/** Initializes new distributor with zero offset.
	 	*/
		public def this(outer :MemoryChunk[T]) {
			this.outer = outer;
		}
		
		/** Returns the memory chunk from the current offset with the specified size and progress the current position by size.
		 * @param size The size of returning MemoryChunk.
		 */
		public def next(size :Long) {
			val mc = outer.subpart(offset, size);
			offset += size;
			return mc;
		}
		
		/** Returns the memory chunk from the current offset with the specified size and progress the current position by size.
		 * @param size The size of returning MemoryChunk.
		 */
		public def next(size :Int) {
			val mc = outer.subpart(offset, size);
			offset += size;
			return mc;
		}
		
		/** Returns the size of remaining memory region.
		 */
		public def remain() = outer.size() - offset;
		
		/** Checks whether whole memory is allocted and there is no over allocation.
		 */
		public def checkFinish() {
			if(offset != outer.size()) // TODO:
				throw new ArrayIndexOutOfBoundsException("Out of bounds. Please, check the offset and the size.");
		}
	}
	
	private def this(data :MemoryChunkData[T]) {
		this.data = data;
	}
	
	/** Creates an empty memory chunk.
	 */
	public def this() {
		data = MemoryChunkData.make[T](0L);
	}
	
	/** Creates a memory chunk with the specified number of elements. This method is equivalent to this(size, 0, false).
	 * @param size The number of elements
	 */
	public def this(size :Long) {
		data = MemoryChunkData.make[T](size);
	}
	
	/** Creates memory chunk with the specified size and alignment.
	 * @param size The number of elements
	 * @param alignment The alignment for the backing memory
	 */
	public def this(size :Long, alignment :Int) {
		data = MemoryChunkData.make[T](size, alignment, true);
	}
	
	/** Creates memory chunk with the specified size and alignment.
	 * @param size The number of elements
	 * @param alignment The alignment for the backing memory
	 * @param zeroed Whether the allocated memory is filled with zero or not.
	 */
	public def this(size :Long, alignment :Int, zeroed :Boolean) {
		data = MemoryChunkData.make[T](size, alignment, zeroed);
	}
	
	/** Creates memory chunk which refers subsection of the specified IndexedMemoryChunk.
	 * @param imc IndexedMemoryChunk whose subsection is used
	 * @param offset The offset from which the subsection starts
	 * @param size The number of elements of the subsection
	 */
	public def this(imc :IndexedMemoryChunk[T], offset :Long, size :Long) {
		if(offset < 0 || offset + size > imc.length())
			throw new ArrayIndexOutOfBoundsException("Out of bounds. Please, check the offset and the size.");
		this.data = MemoryChunkData.make[T](imc, offset, size);
	}
	
	/** Creates memory chunk which refers subsection of the specified IndexedMemoryChunk.
	 * @param imc IndexedMemoryChunk whose subsection is used
	 * @param offset The offset from which the subsection starts
	 * @param size The number of elements of the subsection
	 */
	public def this(imc :IndexedMemoryChunk[T], offset :Int, size :Int) {
		this(imc, offset as Long, size as Long);
	}
	
	/** Creates memory chunk which refers subsection of the specified IndexedMemoryChunk. This method is equivalent to this(imc, offset, (imc.length() - offset)).
	 * @param imc IndexedMemoryChunk whose subsection is used
	 * @param offset The offset from which the subsection starts
	 */
	public def this(imc :IndexedMemoryChunk[T], offset :Long) {
		this(imc, offset, (imc.length() - offset) as Long);
	}
	
	/** Creates memory chunk which refers the subsection of the specified IndexedMemoryChunk. This method is equivalent to this(imc, offset, (imc.length() - offset)).
	 * @param imc IndexedMemoryChunk whose subsection is used
	 * @param offset The offset from which the subsection starts
	 */
	public def this(imc :IndexedMemoryChunk[T], offset :Int) {
		this(imc, offset as Long, (imc.length() - offset) as Long);
	}
	
	/** Creates memory chunk which refers the subsection of the specified IndexedMemoryChunk. This method is equivalent to this(imc, 0, imc.length()).
	 * @param imc IndexedMemoryChunk whose subsection is used
	 */
	public def this(imc :IndexedMemoryChunk[T]) {
		this(imc, 0L, imc.length() as Long);
	}
	
	public def toString() :String {
		val sb = new x10.util.StringBuilder();
		sb.add("[");
		val sz = Math.min(size(), 10L);
		for (var i:Int = 0; i < sz; ++i) {
			if (i > 0) sb.add(",");
			sb.add("" + data(i));
		}
		if (sz < size()) sb.add("...(omitted " + (size() - sz) + " elements)");
		sb.add("]");
		return sb.toString();
	}
	
	/** Returens the internal pointer object.
	 */
	public def pointer() :MemoryPointer[T] = data.pointer();

	/** Returens the number of elements.
	 */
	public def size() :Long = data.size;
	
	/** Returns initialized distributor object.
	 */
	public def distributor() = new Distributor(this);
	
	/** Returns the range.
	 */
	public @Inline def range() = 0L..(data.size-1L);
	
	private static class MCIterator[T] implements Iterator[T] {
		val data :MemoryChunkData[T];
		var cur :Long;
		
		public def this(data :MemoryChunkData[T]) {
			this.data = data;
		//	this.cur = 0L;
		}
		
		public def hasNext() :Boolean = (cur < data.size);
		public def next() :T = data(cur++);
	}

	/** Returns the iterator over values.
	 */
	public @Inline def iterator() = new MCIterator[T](data);
	
	/** Creates new array and copy the elements to it and returns it.
	 */
	public def toArray() = new Array[T](data.size as Int, (i:Int)=>data(i));

	/** Allocates new memory and copy the elements to it and returns it.
	 */
	public def clone() {
		val ret = new MemoryChunk[T](size());
		copy(this, 0L, ret, 0L, size());
		return ret;
	}
	
	/** Returns the new memory chunk that refers the subpart of base memory chunk.
	 * @param offset The offset which the subsection start from
	 * @param size The size of the subsection
	 */
	public def subpart(offset :Long, size :Long) {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(offset < 0 || offset + size > data.size)
				throw new ArrayIndexOutOfBoundsException("specified range is not contained in MemoryChunk");
		}
		return MemoryChunk[T](data.subpart(offset, size));
	}
	
	/** Returns the value of the indexed place.
	 * @param index The index where you want to set the value to.
	 */
	public @Inline operator this(index:int):T {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(index < 0 || index >= data.size)
				throw new ArrayIndexOutOfBoundsException("index (" + index + ") not contained in MemoryChunk");
		}
		return data(index);
	}

	/** Returns the indexed value.
	 * @param index The index where you want to set the value to.
	 */
	public @Inline operator this(index:Long):T {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(index < 0 || index >= data.size)
				throw new ArrayIndexOutOfBoundsException("index (" + index + ") not contained in MemoryChunk");
		}
		return data(index);
	}

	/** Sets new value to indexed place
	 * @param index The index where you want to set the value to.
	 */
	public @Inline operator this(index:int)=(value:T):T{self==value} {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(index < 0 || index >= data.size)
				throw new ArrayIndexOutOfBoundsException("index (" + index + ") not contained in MemoryChunk");
		}
		data(index) = value;
		return value;
	}

	/** Sets new value to indexed place
	 * @param index The index where you want to set the value to.
	 */
	public @Inline operator this(index:Long)=(value:T):T{self==value} {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(index < 0 || index >= data.size)
				throw new ArrayIndexOutOfBoundsException("index (" + index + ") not contained in MemoryChunk");
		}
		data(index) = value;
		return value;
	}

	/** Sets new value to indexed place
	 * @param index The index where you want to set the value to.
	 */
	public @Inline def atomicAdd(index:Long, value:T):T {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(index < 0 || index >= data.size)
				throw new ArrayIndexOutOfBoundsException("index (" + index + ") not contained in MemoryChunk");
		}
		return data.atomicAdd(index, value);
	}

	/** Sets new value to indexed place
	 * @param index The index where you want to set the value to.
	 */
	public @Inline def atomicOr(index:Long, value:T):T {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(index < 0 || index >= data.size)
				throw new ArrayIndexOutOfBoundsException("index (" + index + ") not contained in MemoryChunk");
		}
		return data.atomicOr(index, value);
	}

	/** Sets new value to indexed place
	 * @param index The index where you want to set the value to.
	 */
	public @Inline def atomicAnd(index:Long, value:T):T {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(index < 0 || index >= data.size)
				throw new ArrayIndexOutOfBoundsException("index (" + index + ") not contained in MemoryChunk");
		}
		return data.atomicAnd(index, value);
	}

	/** Atomic XOR. This operation is equivalent to the following code.
	 * 	atomic {
	 * 		if(
	 * 	}
	 * @param index The index where you want to set the value to.
	 * @param value 
	 */
	public @Inline def atomicXor(index:Long, value:T):T {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(index < 0 || index >= data.size)
				throw new ArrayIndexOutOfBoundsException("index (" + index + ") not contained in MemoryChunk");
		}
		return data.atomicXor(index, value);
	}

	/** CAS (Compare And Swap). This operation is equivalent to the following code.
	 * 	atomic { 
	 * 		if(mc(index) == expect) {
	 *			mc(index) = value;
	 *			return true;
	 *		}
	 *		else {
	 *			return false;
	 *		}
	 *	}
	 * @param index The index where you want to set the value to.
	 * @param expect 
	 * @param value
	 */
	public @Inline def atomicCAS(index:Long, expect:T, value:T):Boolean {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(index < 0 || index >= data.size)
				throw new ArrayIndexOutOfBoundsException("index (" + index + ") not contained in MemoryChunk");
		}
		return data.atomicCAS(index, expect, value);
	}
	
	@Native("java", "System.arraycopy((#src).raw.value, (#src).offset + #srcIndex, " +
			"(#dst).raw.value, (#dst).offset + #dstIndex, #numElems)")
	@Native("c++", "memcpy((#dst).FMGL(pointer) + #dstIndex, (#src).FMGL(pointer) + #srcIndex, #numElems * sizeof(#T))")
	private static native def nativeCopy[T](src:MemoryChunkData[T], srcIndex:Long,
			dst:MemoryChunkData[T], dstIndex:Long, numElems:Long):void;
	
	/** Copies the elements of the MemoryChunks
	 * @param src The source data
	 * @param srcIndex The offset from which the source data is copied
	 * @param dst The destination memory
	 * @param dstIndex The offset from which the source data is copied
	 * @param numElems The number of elements to copy
	 */
	public static def copy[T](src:MemoryChunk[T], srcIndex:Long,
			dst:MemoryChunk[T], dstIndex:Long, numElems:Long):void {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(numElems < 0 || srcIndex < 0 || dstIndex < 0)
				throw new IllegalArgumentException();
			if(src.size() < srcIndex + numElems || dst.size() < dstIndex + numElems)
				throw new ArrayIndexOutOfBoundsException("copy: out of range");
		}
		nativeCopy(src.data, srcIndex, dst.data, dstIndex, numElems);
	}
	
	/** Creates and returns an empty memory chunk.
	 */
	public static def getNull[T]() = new MemoryChunk[T](0);
}
