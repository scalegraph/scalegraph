package org.scalegraph.xpregel;

public class PregelUtils {
	
	public static def splitChunk(range:LongRange):Array[Long](1){self.size==2} {
		val size = range.max - range.min + 1;
		if(size == 0L) return [0L, size];
		val nthreads = Math.min(Runtime.NTHREADS as Long, size);
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1L);
		return [nthreads, chunk_size];
	}
	
	public static def splitChunk(range:IntRange):Array[Int](1){self.size==2} {
		val size = range.max - range.min + 1;
		if(size == 0) return [0, size];
		val nthreads = Math.min(Runtime.NTHREADS, size);
		val chunk_size = Math.max((size + nthreads - 1) / nthreads, 1);
		return [nthreads, chunk_size];
	}
	
	
}