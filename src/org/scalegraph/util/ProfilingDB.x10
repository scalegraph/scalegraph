package org.scalegraph.util;

import x10.util.Team;

import org.scalegraph.Config;
import org.scalegraph.test.STest;

public struct ProfilingDB {

	public static val TH_AVG_TIME = 0;
	public static val TH_AVG_CALL = 1;
	public static val TH_MIN_TIME = 2;
	public static val TH_MIN_CALL = 3;
	public static val TH_MAX_TIME = 4;
	public static val TH_MAX_CALL = 5;
	public static val TH_STDDEV_TIME = 6;
	public static val PROC_AVG_TIME = 7;
	public static val PROC_AVG_CALL = 8;
	public static val PROC_MIN_TIME = 9;
	public static val PROC_MIN_CALL = 10;
	public static val PROC_MAX_TIME = 4; // equals to TH_MAX_TIME
	public static val PROC_MAX_CALL = 11;
	public static val PROC_STDDEV_TIME = 12;
	public static val CPU_TIME_TOTAL = 13;
	public static val PROC_TIME_TOTAL = 14;
	public static val REAL_TIME_TOTAL = 15;
	public static val TOTAL_CALL = 16;
	public static val RES_COUNT = 17;
	
	public static class DB {
		public static val FREQ = 1000000000 as Double;
		
		val numFrames :Int;
		val numThreads :Int;
		val width :Int;
		val totalPoints :Int;
		val numPoints :MemoryChunk[Int];
		val frameOffsets :MemoryChunk[Int];
		val pointIndex :MemoryChunk[Int];
		val step :MemoryChunk[Long];
		
		// step = frames
		// frames = frame |
		//			frame, frames
		// frame = (previous time), tuples
		// tuples = tuple |
		//			tuple, tuples
		// tuple = (time span), (call count)
		
		var result :MemoryChunk[Double];
		
		def this(numPoints_ :Array[Int](1)) {
			numFrames = numPoints_.size;
			numThreads = Runtime.NTHREADS;
			numPoints = new MemoryChunk[Int](numPoints_.size, (i:Long) => numPoints_(i as Int));
			frameOffsets = initOffset(numPoints);
			totalPoints = Algorithm.reduce(0L..(numPoints_.size-1L), (i :Long) => numPoints_(i as Int));
			width = (frameOffsets(numFrames) + 7) & ~7;
			
			step = new MemoryChunk[Long](width * numThreads, 64, true);
			
			pointIndex = new MemoryChunk[Int](totalPoints);
			var pt :Long = 0;
			for(frame in 0..(numFrames-1))
				for(i in 0..(numPoints(frame)-1))
					pointIndex(pt++) = frameOffsets(frame) + i*2 + 1;
		}
		
		private static def initOffset(numPoints :MemoryChunk[Int]) {
			val offsets = new MemoryChunk[Int](numPoints.size() + 1);
			offsets(0) = 0;
			for(i in numPoints.range()) offsets(i+1) = offsets(i) + numPoints(i)*2 + 1;
			return offsets;
		}
		
		def get(frame :Int, tid :Long)
			= step.subpart(tid * width + frameOffsets(frame), numPoints(frame)*2 + 1);
		
		private def resbuf(idx :Int) = result.subpart(idx * totalPoints, totalPoints);

		private def localMin(buf :MemoryChunk[Long], base :Int) {
			val tr = 0..(numThreads-1);
			val pr = 0..(totalPoints-1);
			for(i in pr) {
				var min :Long = Long.MAX_VALUE;
				val offset = pointIndex(i);
				for(th in tr) {
					val v = step(th * width + offset + base);
					if(min > v) min = v;
				}
				buf(i) = min;
			}
		}
		
		private def localMax(buf :MemoryChunk[Long], base :Int) {
			val tr = 0..(numThreads-1);
			val pr = 0..(totalPoints-1);
			for(i in pr) {
				var max :Long = 0L;
				val offset = pointIndex(i);
				for(th in tr) {
					val v = step(th * width + offset + base);
					if(max < v) max = v; 
				}
				buf(i) = max;
			}
		}
		
		private def localSum(buf :MemoryChunk[Long], base :Int) {
			val tr = 0..(numThreads-1);
			val pr = 0..(totalPoints-1);
			for(i in pr) {
				var sum :Long = 0L;
				val offset = pointIndex(i);
				for(th in tr) {
					sum += step(th * width + offset + base);
				}
				buf(i) = sum;
			}
		}
		
		def finishStep(team :Team2) {
			val teamSize = team.size();
			val role = team.role();
			if(role == 0 && result.size() == 0L)
				result = new MemoryChunk[Double](totalPoints * RES_COUNT, (i:Long) => 0.0);
			
			val tp = totalPoints;
			val tr = 0..(numThreads-1);
			val pr = 0..(totalPoints-1);

			val buf = new MemoryChunk[Long](totalPoints*2*4);
			val buf1 = buf.subpart(tp*2*0, tp*2);
			val buf2 = buf.subpart(tp*2*1, tp*2);
			val buf3 = buf.subpart(tp*2*2, tp*2);
			val buf4 = buf.subpart(tp*2*3, tp*2);
			val buf12 = buf.subpart(tp*2*0, tp*2*2);
			val buf34 = buf.subpart(tp*2*2, tp*2*2);

			val dbuf = new MemoryChunk[Double](totalPoints*2*4);
			val dbuf1 = dbuf.subpart(tp*2*0, tp*2);
			val dbuf2 = dbuf.subpart(tp*2*1, tp*2);
			val dbuf3 = dbuf.subpart(tp*2*2, tp*2);
			val dbuf4 = dbuf.subpart(tp*2*3, tp*2);
			val dbuf12 = dbuf.subpart(tp*2*0, tp*2*2);
			val dbuf34 = dbuf.subpart(tp*2*2, tp*2*2);
			
			// buf1 <- local min
			// buf2(time) <- local max
			// buf2(call) <- local sum
			localMin(buf1.subpart(0, tp), 0);
			localMin(buf1.subpart(tp, tp), 1);
			localMax(buf2.subpart(0, tp), 0);
			localSum(buf2.subpart(tp, tp), 1);
			
			// buf3 <- thread min
			// buf4 <- proc min
			team.reduce(0, buf12, buf34, Team.MIN);
			if(role == 0) {
				val th_min_time = resbuf(TH_MIN_TIME);
				val proc_min_time = resbuf(PROC_MIN_TIME);
				val th_min_call = resbuf(TH_MIN_CALL);
				val proc_min_call = resbuf(PROC_MIN_CALL);
				for(i in pr) {
					th_min_time(i) = buf3(i) / FREQ;
					th_min_call(i) = buf3(tp + i) as Double;
					proc_min_time(i) = buf4(i) / FREQ;
					proc_min_call(i) = buf4(tp + i) as Double;
				}
			}

			localMax(buf1.subpart(tp, tp), 1);
			// buf1 <- {thread,proc} max
			team.reduce(0, buf12, buf34, Team.MAX);
			if(role == 0) {
				val th_max_time = resbuf(TH_MAX_TIME);
				val th_max_call = resbuf(TH_MAX_CALL);
				val proc_max_call = resbuf(PROC_MAX_CALL);
				val real_total = resbuf(REAL_TIME_TOTAL);
				for(i in pr) {
					th_max_call(i) = buf3(tp + i) as Double;
					th_max_time(i) = buf4(i) / FREQ;
					proc_max_call(i) = buf4(tp + i) as Double;
					real_total(i) += th_max_time(i);
				}
			}

			// buf1 <- local sum
			localSum(buf1.subpart(0, tp), 0);

			// buf3 <- thread avg
			// buf4 <- proc avg
			team.allreduce(buf12, buf34, Team.ADD);
			for(i in pr) {
				buf3(i) /= (teamSize * numThreads);
				buf4(i) /= teamSize;
			}
			
			if(role == 0) {
				val th_avg_time = resbuf(TH_AVG_TIME);
				val th_avg_call = resbuf(TH_AVG_CALL);
				val proc_avg_time = resbuf(PROC_AVG_TIME);
				val proc_avg_call = resbuf(PROC_AVG_CALL);
				val cpu_total = resbuf(CPU_TIME_TOTAL);
				val proc_total = resbuf(PROC_TIME_TOTAL);
				val total_call = resbuf(TOTAL_CALL);
				for(i in pr) {
					th_avg_time(i) = buf3(i) / FREQ;
					proc_avg_time(i) = buf4(i) / FREQ;
					th_avg_call(i) = buf4(tp + i) as Double / (teamSize * numThreads);
					proc_avg_call(i) = buf4(tp + i) as Double / (teamSize);
					cpu_total(i) += th_avg_time(i);
					proc_total(i) += proc_avg_time(i);
					total_call(i) += buf4(tp + i);
				}
			}
			
			// buf1 <- local sum of diff^2
			// buf2 <- diff^2
			for(i in pr) {
				var sum :Double = 0.0;
				val avg = buf3(i);
				val offset = pointIndex(i);
				for(th in tr) {
					val diff = (step(th * width + offset) - avg) as Double;
					sum += diff * diff;
				}
				dbuf1(i) = sum;
			}
			
			for(i in pr) {
				val diff = (buf2(i) - buf4(i)) as Double; // buf2 contains local max values.
				dbuf2(i) = diff * diff;
			}
			
			// buf3 <- thread stddev ^ 2
			// buf4 <- proc stddev ^ 2
			team.reduce(0, dbuf12, dbuf34, Team.ADD);
			if(role == 0) {
				val th_stddev = resbuf(TH_STDDEV_TIME);
				val proc_stddev = resbuf(PROC_STDDEV_TIME);
				for(i in pr) {
					dbuf3(i) /= (teamSize * numThreads);
					dbuf4(i) /= teamSize;
					th_stddev(i) = Math.sqrt(dbuf3(i)) / FREQ;
					proc_stddev(i) = Math.sqrt(dbuf4(i)) / FREQ;
				}
			}
			
			// clear step
			for(th in tr) {
				for(i in pr) {
					step(th * width + pointIndex(i) + 0) = 0L;
					step(th * width + pointIndex(i) + 1) = 0L;
				}
			}
			
			buf.del();
			dbuf.del();
		}
	}
	
	private val team :Team2;
	private val plh :PlaceLocalHandle[DB];
	
	public static struct Timer {
		val span :MemoryChunk[Long];
		
		def this(span :MemoryChunk[Long]) {
			this.span = span;
		}
		
		public def start() {
			span(0) = x10.util.Timer.nanoTime();
		}
		
		public def lap(kind :Int) {
			val curTime = x10.util.Timer.nanoTime();
			span(kind*2 + 1) += curTime - span(0);
			++span(kind*2 + 2);
			span(0) = curTime;
		}
	}
	
	public def this(numPoints :Array[Int](1)) {
		this(Config.get().worldTeam(), numPoints);
	}
	
	public def this(team :Team, numPoints :Array[Int](1)) {
		this.team = new Team2(team);
		this.plh = PlaceLocalHandle.make[DB](team.placeGroup(), () => new DB(numPoints));
	}
	
	public def timer(frameIndex :Int, tid :Long)
		= new Timer(plh().get(frameIndex, tid));
	
	public def finishStepWithAll() {
		plh().finishStep(team);
	}
	
	public def finishStep() {
		team.placeGroup().broadcastFlat(() => {
			try {
				finishStepWithAll();
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	public def result() {
		if(team.role() != 0)
			throw new BadPlaceException("The only root place can call thie method.");
		return plh().result;
	}
	
	public def resultString(names :Array[String](1)) {
		val result = result();
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
		
		return sb.result();
	}
	
	public def detailedResultString(names :Array[String](1)) {
		val result = result();
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
		
		return sb.result();
	}
	
	public def finishStepAndPrint(detail :Boolean, title :String, names :Array[String](1)) {
		finishStep();
		STest.println(title);
		val result = detail
				? detailedResultString(names)
				: resultString(names);
		STest.print(result);
	}
}
