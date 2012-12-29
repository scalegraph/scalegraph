package org.scalegraph.util;

/** Distributed memory chunk.
 */
public struct DistMemoryChunk[T] {
	private val plh :PlaceLocalHandle[Cell[MemoryChunk[T]]];
	
	/** Creates distributed memory chunk.
     * @param placeGroup Places memory chunks are created.
	 * @param init The initialization clousure, which is invoked on each place.
     */
	public def this(placeGroup :PlaceGroup, init :() => MemoryChunk[T]) {
		plh = PlaceLocalHandle.makeFlat[Cell[MemoryChunk[T]]](placeGroup, ()=>new Cell(init()));
	}
	
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
