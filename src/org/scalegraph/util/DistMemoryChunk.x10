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

/** Distributed memory chunk.
 */
public final struct DistMemoryChunk[T] {
	private val plh :PlaceLocalHandle[Cell[MemoryChunk[T]]];
	
	private def this(plh :PlaceLocalHandle[Cell[MemoryChunk[T]]]) {
		this.plh = plh;
	}
	
	/** Creates distributed memory chunk.
     * @param placeGroup Places memory chunks are created.
	 * @param init The initialization clousure, which is invoked on each place.
     */
	public def this(placeGroup :PlaceGroup, init :() => MemoryChunk[T]) {
		plh = PlaceLocalHandle.makeFlat[Cell[MemoryChunk[T]]](placeGroup, ()=>new Cell(init()));
	}
	
	/** Creates distributed memory chunk.
	 * @param placeGroup Places memory chunks are created.
	 * @param init The initialization clousure, which is invoked on each place.
	 */
	public static def make[T](pg :PlaceGroup, init :()=>MemoryChunk[T]) =
		new DistMemoryChunk[T](PlaceLocalHandle.makeFlat[Cell[MemoryChunk[T]]](
				pg, ()=>new Cell(init())));
	
	/** Creates distributed memory chunk.
	 * @param placeGroup Places memory chunks are created.
	 * @param init_here The clousure which returns the data that will be transfered to the remote place.
	 * @param init_there The initialization clousure, which is invoked on each place.
	 */
	public static def make[T, U](pg :PlaceGroup, init_here :(Int)=>U, init_there :(U)=>MemoryChunk[T]) =
		new DistMemoryChunk[T](PlaceLocalHandle.makeFlat[Cell[MemoryChunk[T]], U](
				pg, init_here, (u :U)=>new Cell(init_there(u))));
	
	/** Returns the memory chunk bound to the current place.
	 */
	public operator this() = plh()();
	
	/** Binds memory chunk to the current place.
	 * @param mc the memory chunk that will be bound to the current place
	 */
	public operator this() = (mc :MemoryChunk[T]) { plh()() = mc; }
	
	public def del() {
		plh()() = Zero.get[MemoryChunk[T]]();
	}
}
