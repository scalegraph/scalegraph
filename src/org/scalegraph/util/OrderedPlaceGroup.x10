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

import org.scalegraph.util.MemoryChunk;

public final class OrderedPlaceGroup extends PlaceGroup {
	
	private val places :MemoryChunk[Place];
	
	public def this(ps :Rail[Place]) {
		//places = MemoryChunk.make[Place](ps.raw);
		places = MemoryChunk.make[Place](ps, 0, ps.size);
	}
	
	public def this(ps :MemoryChunk[Place]) {
		places = ps;
	}
	
	public operator this(i :Long) :Place = places(i);

	public def indexOf(id :Long) :x10.lang.Long {
		for (i in places.range()) {
			if (places(i).id == id as Long) return i as Int;
		}
		return -1n;
	}

	public def contains(var id:x10.lang.Long):x10.lang.Boolean {
		for (i in places.range()) {
			if (places(i).id == id as Long) return true;
		}
		return false;
	}

	public def numPlaces() :Long = places.size() as Long;
	
	// TODO: optimize
	//public def iterator() :Iterator[Place] = places.toRail().values().iterator();
	public def iterator() :Iterator[Place] = places.toRail().iterator();
}
