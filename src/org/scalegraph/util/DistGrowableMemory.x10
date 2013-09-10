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

/** Distributed growable memory.
 */
public final struct DistGrowableMemory[T] {
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
