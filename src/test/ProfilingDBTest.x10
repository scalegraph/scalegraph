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
	public static def main(args: Rail[String]) {
		new ProfilingDBTest().execute(args);
	}
	
	public def run(args: Rail[String]): Boolean {
		
		val prof = new ProfilingDB([4n, 2n]);
		
		Config.get().worldTeam().placeGroup().broadcastFlat(() => {
			val timer = prof.timer(0n, 0);
			val counters = MemoryChunk.make[ProfilingDB.Timer](
					Runtime.NTHREADS, (i:Long) => prof.timer(1n, i));
			
			timer.start();
			val testdata = MemoryChunk.make[Int](10000000);
			timer.lap(0n);
			Parallel.iter(testdata.range(), (tid :Long, r :LongRange) => {
				counters(tid).start();
				for(i in r) testdata(i) = 3n;
				counters(tid).lap(0n);
			});
			timer.lap(1n);
			Parallel.iter(testdata.range(), (tid :Long, r :LongRange) => {
				for(i in r) {
					counters(tid).start();
					testdata(i) = 9n;
					counters(tid).lap(1n);
				}
			});
			timer.lap(2n);
			Parallel.iter(testdata.range(), (i :Long) => {
				testdata(i) = 5n;
			});
			timer.lap(3n);
			
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
