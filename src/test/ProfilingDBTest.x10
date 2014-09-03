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
package test;

import x10.util.Team;

import org.scalegraph.test.STest;
import org.scalegraph.Config;
import org.scalegraph.util.ProfilingDB;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.SStringBuilder;
import org.scalegraph.util.SString;

public class ProfilingDBTest extends STest {
	public static def main(args: Array[String](1)) {
		new ProfilingDBTest().execute(args);
	}
	
	public def run(args: Array[String](1)): Boolean {
		
		val prof = new ProfilingDB([4 as Int, 2]);
		
		Config.get().worldTeam().placeGroup().broadcastFlat(() => {
			val timer = prof.timer(0, 0);
			val counters = MemoryChunk.make[ProfilingDB.Timer](
					Runtime.NTHREADS, (i:Long) => prof.timer(1, i));
			
			timer.start();
			val testdata = MemoryChunk.make[Int](10000000);
			timer.lap(0);
			Parallel.iter(testdata.range(), (tid :Long, r :LongRange) => {
				counters(tid).start();
				for(i in r) testdata(i) = 3;
				counters(tid).lap(0);
			});
			timer.lap(1);
			Parallel.iter(testdata.range(), (tid :Long, r :LongRange) => {
				for(i in r) {
					counters(tid).start();
					testdata(i) = 9;
					counters(tid).lap(1);
				}
			});
			timer.lap(2);
			Parallel.iter(testdata.range(), (i :Long) => {
				testdata(i) = 5;
			});
			timer.lap(3);
			
			prof.finishStepWithAll();
		});
		
		val desc = [
		            "Memory allocating" as String,
		            "Normal iteration",
		            "Many timer callings",
		            "Parallel iter overhead",
		            "Normal iteration thread",
		            "Many timer callings thread"];

		print(prof.resultString(desc));
		print(prof.detailedResultString(desc));
				
		return true;
	}
}