package org.scalegraph.util;

import x10.util.Team;

import org.scalegraph.Config;

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
		val buf :MemoryChunk[Long];
		
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
			
			val buffer = new MemoryChunk[Long](width * numThreads + totalPoints*2*4, 64, true);
			step = buffer.subpart(0, width * numThreads);
			buf = buffer.subpart(width * numThreads, totalPoints*2*4);
			
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
		
		private def localMinMax(minbuf :MemoryChunk[Long], maxbuf :MemoryChunk[Long], base :Int) {
			val tr = 0..(numThreads-1);
			val pr = 0..(totalPoints-1);
			for(i in pr) {
				var min :Long = Long.MAX_VALUE;
				var max :Long = 0L;
				val offset = pointIndex(i);
				for(th in tr) {
					val v = step(th * width + offset + base);
					if(min > v) min = v;
					if(max < v) max = v; 
				}
				minbuf(i) = min;
				maxbuf(i) = max;
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
			
			val buf1 = buf.subpart(tp*2*0, tp*2);
			val buf2 = buf.subpart(tp*2*1, tp*2);
			val buf3 = buf.subpart(tp*2*2, tp*2);
			val buf4 = buf.subpart(tp*2*3, tp*2);
			val buf12 = buf.subpart(tp*2*0, tp*2*2);
			val buf34 = buf.subpart(tp*2*2, tp*2*2);
			
			// buf1 <- local min
			// buf2 <- local max
			localMinMax(buf1.subpart(0, tp), buf2.subpart(0, tp), 0);
			localMinMax(buf1.subpart(tp, tp), buf2.subpart(tp, tp), 1);
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
					proc_min_time(i) = buf4(i) / FREQ;
					th_min_call(i) = buf3(tp + i) as Double;
					proc_min_call(i) = buf4(tp + i) as Double;
				}
			}
			
			// buf1 <- {thread,proc} max
			team.reduce(0, buf2, buf1, Team.MAX);
			if(role == 0) {
				val th_max_time = resbuf(TH_MAX_TIME);
				val th_max_call = resbuf(TH_MAX_CALL);
				val real_total = resbuf(REAL_TIME_TOTAL);
				for(i in pr) {
					th_max_time(i) = buf1(i) / FREQ;
					th_max_call(i) = buf1(tp + i) as Double;
					real_total(i) += th_max_time(i);
				}
			}

			// buf1 <- local sum
			localSum(buf1.subpart(0, tp), 0);
			localSum(buf1.subpart(tp, tp), 1);

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
					th_avg_call(i) = buf3(tp + i) as Double / (teamSize * numThreads);
					proc_avg_call(i) = buf3(tp + i) as Double / (teamSize);
					cpu_total(i) += th_avg_time(i);
					proc_total(i) += proc_avg_time(i);
					total_call(i) += buf3(tp + i);
				}
			}
			
			// buf1 <- local sum of diff^2
			// buf2 <- diff^2
			for(i in pr) {
				var sum :Long = 0L;
				val avg = buf3(i);
				val offset = pointIndex(i);
				for(th in tr) {
					val diff = step(th * width + offset) - avg;
					sum += diff * diff;
				}
				buf1(i) = sum;
			}
			
			for(i in pr) {
				val diff = buf2(i) - buf4(i); // buf2 contains local max values.
				buf2(i) = diff * diff;
			}
			
			// buf3 <- thread stddev ^ 2
			// buf4 <- proc stddev ^ 2
			team.reduce(0, buf12, buf34, Team.ADD);
			if(role == 0) {
				val th_stddev = resbuf(TH_STDDEV_TIME);
				val proc_stddev = resbuf(PROC_STDDEV_TIME);
				for(i in pr) {
					buf3(i) /= (teamSize * numThreads);
					buf4(i) /= teamSize;
					th_stddev(i) = Math.sqrt(buf3(i) as Double) / FREQ;
					proc_stddev(i) = Math.sqrt(buf4(i) as Double) / FREQ;
				}
			}
			
			// clear step
			for(th in tr)
				for(i in pr)
					step(th * width + pointIndex(i)) = 0L;
			
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
		team = new Team2(Config.get().worldTeam());
		plh = PlaceLocalHandle.make[DB](team.placeGroup(), () => new DB(numPoints));
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
}
