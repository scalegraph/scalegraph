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
	
	static def printProfResult(result :MemoryChunk[Double], names :Array[String](1)) {
		val header :SString = "avg(th),min(th),max(th),stddev(th),avg(proc),min(proc),max(proc),stddev(proc),time(cpu),time(proc),time(real)\n";
		val th_fmt :SString = "%f,%f,%f,%f,";
		val proc_fmt :SString = "%f,%f,%f,%f,";
		val time_fmt :SString = "%f,%f,%f: [%s]\n";
		
		val width = names.size;
		val th_avg = result.subpart(width * ProfilingDB.TH_AVG, width);
		val th_min = result.subpart(width * ProfilingDB.TH_MIN, width);
		val th_max = result.subpart(width * ProfilingDB.TH_MAX, width);
		val th_stddev = result.subpart(width * ProfilingDB.TH_STDDEV, width);
		val proc_avg = result.subpart(width * ProfilingDB.PROC_AVG, width);
		val proc_min = result.subpart(width * ProfilingDB.PROC_MIN, width);
		val proc_max = result.subpart(width * ProfilingDB.PROC_MAX, width);
		val proc_stddev = result.subpart(width * ProfilingDB.PROC_STDDEV, width);
		val cpu_time = result.subpart(width * ProfilingDB.CPU_TIME_TOTAL, width);
		val proc_time = result.subpart(width * ProfilingDB.PROC_TIME_TOTAL, width);
		val real_time = result.subpart(width * ProfilingDB.REAL_TIME_TOTAL, width);
		
		val sb = new SStringBuilder();
		sb.add(header);
		for(i in 0..(width-1)) {
			sb.add(th_fmt, th_avg(i), th_min(i), th_max(i), th_stddev(i));
			sb.add(proc_fmt, proc_avg(i), proc_min(i), proc_max(i), proc_stddev(i));
			sb.add(time_fmt, cpu_time(i), proc_time(i), real_time(i), (names(i) as SString).c_str());
		}
		
		print(sb);
	}
	
	public def run(args: Array[String](1)): Boolean {
		
		val prof = new ProfilingDB([4 as Int, 2]);
		
		Config.get().worldTeam().placeGroup().broadcastFlat(() => {
			val timer = prof.timer(0, 0);
			val counters = new MemoryChunk[ProfilingDB.Timer](
					Runtime.NTHREADS, (i:Long) => prof.timer(1, i));
			
			timer.start();
			val testdata = new MemoryChunk[Int](10000000);
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
		
		printProfResult(prof.result(), [
			"Memory allocating" as String,
			"Normal iteration",
			"Many timer callings",
			"Parallel iter overhead",
			                        
			"Normal iteration thread",
			"Many timer callings thread"]);
				
		return true;
	}
}