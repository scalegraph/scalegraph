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

import x10.util.Team;
import org.scalegraph.test.STest;

public final class GlobalClock implements TimePrinter {
	val baseCounter :PlaceLocalHandle[Cell[Long]];
	
	public def this(team_ :Team) {
		baseCounter = PlaceLocalHandle.makeFlat[Cell[Long]](team_.placeGroup(), ()=> {
			val team = new Team2(team_);
			team.barrier();
			val base = x10.util.Timer.nanoTime();
			team.barrier();
			return new Cell[Long](base);
		});
	}
	
	public def lap(message :String) {
		val curTime = x10.util.Timer.nanoTime();
		val elapsedTime = (curTime - baseCounter()()) as Double / 1000000.0;
		val output = message + " Clock: " + elapsedTime;
		if(here.id == 0) STest.println(output);
		else STest.bufferedPrintln(output);
	}
}
