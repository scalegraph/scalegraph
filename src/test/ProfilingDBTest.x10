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
		val header :SString = 
			"avgtime(proc),stddev(proc)," + "maxtime(th),stddev(th)," + "avgcall(proc),mincall(proc),maxcall(proc)," +"time(cpu),time(real)\n";
		val time_fmt :SString = "%f,%f,%f,%f,";
		val call_fmt :SString = "%f,%f,%f,";
		val stt_fmt :SString = "%f,%f,[%s]\n";
		
		val width = names.size;
		//val th_avg_time = result.subpart(width * ProfilingDB.TH_AVG_TIME, width);
		//val th_min_time = result.subpart(width * ProfilingDB.TH_MIN_TIME, width);
		val th_max_time = result.subpart(width * ProfilingDB.TH_MAX_TIME, width);
		val th_stddev = result.subpart(width * ProfilingDB.TH_STDDEV_TIME, width);
		//val th_avg_call = result.subpart(width * ProfilingDB.TH_AVG_CALL, width);
		//val th_min_call = result.subpart(width * ProfilingDB.TH_MIN_CALL, width);
		//val th_max_call = result.subpart(width * ProfilingDB.TH_MAX_CALL, width);
		val proc_avg_time = result.subpart(width * ProfilingDB.PROC_AVG_TIME, width);
		//val proc_min_time = result.subpart(width * ProfilingDB.PROC_MIN_TIME, width);
		//val proc_max_time = result.subpart(width * ProfilingDB.PROC_MAX_TIME, width);
		val proc_stddev = result.subpart(width * ProfilingDB.PROC_STDDEV_TIME, width);
		val proc_avg_call = result.subpart(width * ProfilingDB.PROC_AVG_CALL, width);
		val proc_min_call = result.subpart(width * ProfilingDB.PROC_MIN_CALL, width);
		val proc_max_call = result.subpart(width * ProfilingDB.PROC_MAX_CALL, width);
		val cpu_time = result.subpart(width * ProfilingDB.CPU_TIME_TOTAL, width);
		//val proc_time = result.subpart(width * ProfilingDB.PROC_TIME_TOTAL, width);
		val real_time = result.subpart(width * ProfilingDB.REAL_TIME_TOTAL, width);
		//val total_call = result.subpart(width * ProfilingDB.TOTAL_CALL, width);
		
		val sb = new SStringBuilder();
		sb.add(header);
		for(i in 0..(width-1)) {
			sb.add(time_fmt, proc_avg_time(i), proc_stddev(i), th_max_time(i), th_stddev(i));
			sb.add(call_fmt, proc_avg_call(i), proc_min_call(i), proc_max_call(i));
			sb.add(stt_fmt, cpu_time(i), real_time(i), (names(i) as SString).c_str());
		}
		
		print(sb);
	}
	
	static def printProfDetailResult(result :MemoryChunk[Double], names :Array[String](1)) {
		val header :SString = 
			"avgtime(th),mintime(th),maxtime(th),stddev(th)," +
			"avgcall(th),mincall(th),maxcall(th)," +
			"avgtime(proc),mintime(proc),maxtime(proc),stddev(proc)," +
			"avgcall(proc),mincall(proc),maxcall(proc)," +
			"time(cpu),time(proc),time(real),call\n";
		val th_time_fmt :SString = "%f,%f,%f,%f,";
		val th_call_fmt :SString = "%f,%f,%f,";
		val proc_time_fmt :SString = "%f,%f,%f,%f,";
		val proc_call_fmt :SString = "%f,%f,%f,";
		val stt_fmt :SString = "%f,%f,%f,%f,[%s]\n";
		
		val width = names.size;
		val th_avg_time = result.subpart(width * ProfilingDB.TH_AVG_TIME, width);
		val th_min_time = result.subpart(width * ProfilingDB.TH_MIN_TIME, width);
		val th_max_time = result.subpart(width * ProfilingDB.TH_MAX_TIME, width);
		val th_stddev = result.subpart(width * ProfilingDB.TH_STDDEV_TIME, width);
		val th_avg_call = result.subpart(width * ProfilingDB.TH_AVG_CALL, width);
		val th_min_call = result.subpart(width * ProfilingDB.TH_MIN_CALL, width);
		val th_max_call = result.subpart(width * ProfilingDB.TH_MAX_CALL, width);
		val proc_avg_time = result.subpart(width * ProfilingDB.PROC_AVG_TIME, width);
		val proc_min_time = result.subpart(width * ProfilingDB.PROC_MIN_TIME, width);
		val proc_max_time = result.subpart(width * ProfilingDB.PROC_MAX_TIME, width);
		val proc_stddev = result.subpart(width * ProfilingDB.PROC_STDDEV_TIME, width);
		val proc_avg_call = result.subpart(width * ProfilingDB.PROC_AVG_CALL, width);
		val proc_min_call = result.subpart(width * ProfilingDB.PROC_MIN_CALL, width);
		val proc_max_call = result.subpart(width * ProfilingDB.PROC_MAX_CALL, width);
		val cpu_time = result.subpart(width * ProfilingDB.CPU_TIME_TOTAL, width);
		val proc_time = result.subpart(width * ProfilingDB.PROC_TIME_TOTAL, width);
		val real_time = result.subpart(width * ProfilingDB.REAL_TIME_TOTAL, width);
		val total_call = result.subpart(width * ProfilingDB.TOTAL_CALL, width);
		
		val sb = new SStringBuilder();
		sb.add(header);
		for(i in 0..(width-1)) {
			sb.add(th_time_fmt, th_avg_time(i), th_min_time(i), th_max_time(i), th_stddev(i));
			sb.add(th_call_fmt, th_avg_call(i), th_min_call(i), th_max_call(i));
			sb.add(proc_time_fmt, proc_avg_time(i), proc_min_time(i), proc_max_time(i), proc_stddev(i));
			sb.add(proc_call_fmt, proc_avg_call(i), proc_min_call(i), proc_max_call(i));
			sb.add(stt_fmt, cpu_time(i), proc_time(i), real_time(i), total_call(i), (names(i) as SString).c_str());
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
		
		val desc = [
		            "Memory allocating" as String,
		            "Normal iteration",
		            "Many timer callings",
		            "Parallel iter overhead",
		            "Normal iteration thread",
		            "Many timer callings thread"];
		
		printProfDetailResult(prof.result(), desc);
		printProfResult(prof.result(), desc);
				
		return true;
	}
}