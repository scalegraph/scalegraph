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

public final class StopWatch implements TimePrinter {
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
		STest.println(message + ": " + lapTime + " ms: " + elapsedTime + " ms elapsed: Memory: " + (MemoryChunk.getMemSize() / 1000000.0) + " MB");
	}
}
