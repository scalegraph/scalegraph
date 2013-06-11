package org.scalegraph.util;

/** Distributed growable memory.
 */
public struct DistGrowableMemory[T] {
	private val plh :PlaceLocalHandle[GrowableMemory[T]];
	
	/** Creates distributed growable memory with the size of each growable memory 0.
     * @param placeGroup Places growable memories are created.
     */
	public def this(placeGroup :PlaceGroup) {
		plh = PlaceLocalHandle.makeFlat[GrowableMemory[T]](placeGroup, ()=>new GrowableMemory[T]());
	}
	
	/** Returns the growable memory bound to the current place.
	 */
	public operator this() = plh();
	
	/** Returns the current data as a DistMemoryChunk.
	 */
	public def raw(placeGroup :PlaceGroup)
		= DistMemoryChunk[T](placeGroup, () => plh().raw());
	
	public def del() {
		plh().del();
	}
}
