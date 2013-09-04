package org.scalegraph.util;

import x10.util.Team;

import org.scalegraph.Config;

public struct ProfilingDB {

	public static val TH_AVG = 0;
	public static val TH_MIN = 1;
	public static val TH_MAX = 2;
	public static val TH_STDDEV = 3;
	public static val PROC_AVG = 4;
	public static val PROC_MIN = 5;
	public static val PROC_MAX = 2; // equals to TH_MAX
	public static val PROC_STDDEV = 6;
	public static val CPU_TIME_TOTAL = 7;
	public static val PROC_TIME_TOTAL = 9;
	public static val REAL_TIME_TOTAL = 10;
	public static val RES_COUNT = 11;
	
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
		
		// step
		// [
		// (previous time for frame 0), (0th value of frame 0), (1st value of frame 0), ... (the last value of frame 0),
		// (previous time for frame 1), (0th value of frame 1), ... (the last value of frame 1),
		// ...
		// ]
		
		var result :MemoryChunk[Double];
		
		def this(numPoints_ :Array[Int](1)) {
			numFrames = numPoints_.size;
			numThreads = Runtime.NTHREADS;
			numPoints = new MemoryChunk[Int](numPoints_.size, (i:Long) => numPoints_(i as Int));
			frameOffsets = initOffset(numPoints);
			totalPoints = Algorithm.reduce(0L..(numPoints_.size-1L), (i :Long) => numPoints_(i as Int));
			width = (frameOffsets(numFrames) + 7) & ~7;
			
			val buffer = new MemoryChunk[Long](width * numThreads + totalPoints*4, 64, true);
			step = buffer.subpart(0, width * numThreads);
			buf = buffer.subpart(width * numThreads, totalPoints*4);
			
			pointIndex = new MemoryChunk[Int](totalPoints);
			var pt :Long = 0;
			for(frame in 0..(numFrames-1))
				for(i in 0..(numPoints(frame)-1))
					pointIndex(pt++) = frameOffsets(frame) + i + 1;
		}
		
		private static def initOffset(numPoints :MemoryChunk[Int]) {
			val offsets = new MemoryChunk[Int](numPoints.size() + 1);
			offsets(0) = 0;
			for(i in numPoints.range()) offsets(i+1) = offsets(i) + numPoints(i) + 1;
			return offsets;
		}
		
		def get(frame :Int, tid :Long)
			= step.subpart(tid * width + frameOffsets(frame), numPoints(frame) + 1);
		
		private def resbuf(idx :Int) = result.subpart(idx * totalPoints, totalPoints);
		
		def finishStep(team :Team2) {
			val teamSize = team.size();
			val role = team.role();
			if(role == 0 && result.size() == 0L)
				result = new MemoryChunk[Double](totalPoints * RES_COUNT, (i:Long) => 0.0);
			
			val tr = 0..(numThreads-1);
			val pr = 0..(totalPoints-1);
			
			val buf1 = buf.subpart(totalPoints*0, totalPoints);
			val buf2 = buf.subpart(totalPoints*1, totalPoints);
			val buf3 = buf.subpart(totalPoints*2, totalPoints);
			val buf4 = buf.subpart(totalPoints*3, totalPoints);
			val buf12 = buf.subpart(totalPoints*0, totalPoints*2);
			val buf34 = buf.subpart(totalPoints*2, totalPoints*2);
			
			// buf1 <- local min
			// buf2 <- local max
			for(i in pr) {
				var min :Long = Long.MAX_VALUE;
				var max :Long = 0L;
				val offset = pointIndex(i);
				for(th in tr) {
					val v = step(th * width + offset);
					if(min > v) min = v;
					if(max < v) max = v; 
				}
				buf1(i) = min;
				buf2(i) = max;
			}
			
			// buf3 <- thread min
			// buf4 <- proc min
			team.reduce(0, buf12, buf34, Team.MIN);
			if(role == 0) {
				val th_min = resbuf(TH_MIN);
				val proc_min = resbuf(PROC_MIN);
				for(i in pr) {
					th_min(i) = buf3(i) / FREQ;
					proc_min(i) = buf4(i) / FREQ;
				}
			}
			
			// buf1 <- {thread,proc} max
			team.reduce(0, buf2, buf1, Team.MAX);
			if(role == 0) {
				val th_max = resbuf(TH_MAX);
				val real_total = resbuf(REAL_TIME_TOTAL);
				for(i in pr) {
					th_max(i) = buf1(i) / FREQ;
					real_total(i) += th_max(i);
				}
			}

			// buf1 <- local sum
			for(i in pr) {
				var sum :Long = 0L;
				val offset = pointIndex(i);
				for(th in tr) {
					sum += step(th * width + offset);
				}
				buf1(i) = sum;
			}

			// buf3 <- thread avg
			// buf4 <- proc avg
			team.allreduce(buf12, buf34, Team.ADD);
			for(i in pr) {
				buf3(i) /= (teamSize * numThreads);
				buf4(i) /= teamSize;
			}
			
			if(role == 0) {
				val th_avg = resbuf(TH_AVG);
				val proc_avg = resbuf(PROC_AVG);
				val cpu_total = resbuf(CPU_TIME_TOTAL);
				val proc_total = resbuf(PROC_TIME_TOTAL);
				for(i in pr) {
					th_avg(i) = buf3(i) / FREQ;
					proc_avg(i) = buf4(i) / FREQ;
					cpu_total(i) += th_avg(i);
					proc_total(i) += proc_avg(i);
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
				
				val diff = buf2(i) - buf4(i); // buf2 contains local max values.
				buf2(i) = diff * diff;
			}
			
			// buf3 <- thread stddev ^ 2
			// buf4 <- proc stddev ^ 2
			team.reduce(0, buf12, buf34, Team.ADD);
			if(role == 0) {
				val th_stddev = resbuf(TH_STDDEV);
				val proc_stddev = resbuf(PROC_STDDEV);
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
			span(kind + 1) += curTime - span(0);
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
