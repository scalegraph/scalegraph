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

public struct GlobalMemoryChunk[T](
		/**
		 * The pointer to the remote array.
		 */
		data :Long,
		/**
		 * The size of the remote array.
		 */
		size :Long, 
		/**
		 * The GlobalRef to the remote array.
		 */
		mc :GlobalRef[Cell[MemoryChunk[T]]]

){
	private def this(data :Long,
			size :Long, mc :GlobalRef[Cell[MemoryChunk[T]]]) {
		property(data, size, mc);
	}
	public def this(mc :MemoryChunk[T]) {
		property(mc.pointer().toLong(), mc.size(),
				new GlobalRef[Cell[MemoryChunk[T]]](
				new Cell[MemoryChunk[T]](mc)));
	}
	
	public static def make[T](mc :MemoryChunk[T]) = new GlobalMemoryChunk[T](mc);
	
	public def subpart(offset :Long, size :Long): GlobalMemoryChunk[T] {
		return new GlobalMemoryChunk[T](mc()().subpart(offset, size));
	}

	/**
	 * The home location of the GlobalRail is equal to rail.home
	 */
	public property home():Place = mc.home;

	/**
	 * Set the element of this array corresponding to the given index to the given value.
	 * Return the new value of the element.
	 * Can only  be called where <code>here == mc.home</code>. 
	 * 
	 * @param v the given value
	 * @param i0 the given index in the first dimension
	 * @return the new value of the element of this array corresponding to the given index.
	 */
	public operator this(index:Long)=(v:T) {here==mc.home}:T{self==v} = this()(index)=v;

	/**
	 * Access the array that is encapsulated by this GlobalRail. 
	 * Can only  be called where <code>here == rail.home</code>. 
	 */
	public operator this() {here==mc.home} : MemoryChunk[T]= mc()();

	/**
	 * Remote the referece to the array so that GC can collect the memory for the array. 
	 * Can only  be called where <code>here == rail.home</code>. 
	 */
	public def del() {here==mc.home} { mc()() = MemoryChunk.getNull[T](); }
}
