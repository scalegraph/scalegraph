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

import org.scalegraph.test.STest;
import org.scalegraph.Config;

public final class StopWatch {
	var startTime :Long;
	var prevTime :Long;
	
	public def this() {
		startTime = prevTime = x10.util.Timer.nanoTime();
	}
	
	public def start() {
		startTime = prevTime = x10.util.Timer.nanoTime();
	}
	
	public def lap(message :String) {
		val curTime = x10.util.Timer.nanoTime();
		val lapTime = (curTime - prevTime) as Double / 1000000.0;
		val elapsedTime = (curTime - startTime) as Double / 1000000.0;
		prevTime = curTime;
		val c = Config.get().worldTeam();
		val ps = c.size();
		var mx : Long = 0L;
		for (i in 0..(ps-1)) {
			val u = at(c.placeGroup()(i)) MemoryChunk.getMemSize();
			mx = (mx < u) ? u : mx;
		}
		STest.println(message + ": " + lapTime + " ms: " + elapsedTime + " ms elapsed: Memory: " + (MemoryChunk.getMemSize() / 1000000.0) + " MB"
				+ "Max elapsed: Memory: " + (mx / 1000000.0) + " MB");
	}
}
