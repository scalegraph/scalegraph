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

import org.scalegraph.util.MemoryChunk;

public final class OrderedPlaceGroup extends PlaceGroup {
	
	private val places :MemoryChunk[Place];
	
	public def this(ps :Array[Place]) {
		places = new MemoryChunk[Place](ps.raw());
	}
	
	public def this(ps :MemoryChunk[Place]) {
		places = ps;
	}
	
	public operator this(i :Int) :Place = places(i);

	public def indexOf(id :Int) :x10.lang.Int {
		for (i in places.range()) {
			if (places(i).id == id) return i as Int;
		}
		return -1;
	}

	public def contains(var id:x10.lang.Int):x10.lang.Boolean {
		for (i in places.range()) {
			if (places(i).id == id) return true;
		}
		return false;
	}

	public def numPlaces() :Int = places.size() as Int;
	
	// TODO: optimize
	public def iterator() :Iterator[Place] = places.toArray().values().iterator();
}
