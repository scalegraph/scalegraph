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

import x10.compiler.Ifdef;
import x10.compiler.Ifndef;
import x10.util.Team;
import org.scalegraph.util.MemoryChunk;

/** This is the abstraction of the fine-grained scatter/gather for graph processings.
 * Usage:
 * 1. Instantiate DistScatterGather with team instance.
 * 2. Fork threads and Invoke getCounts from each thread.
 * 3. Count up the number of elements for each destination and store the array that getCounts returns.
 * 4.
 */
public final struct ScatterGather {

	private nChunk : Long;
	private maxThreads :Long;
	private bufferWidth :Long;
	private threadCounts :MemoryChunk[Long];
	private threadOffsets :MemoryChunk[Long];
	private sendCounts :MemoryChunk[Long];
	private sendOffsets :MemoryChunk[Long];

    private CACHE_LINE = 64L;

	public def this(nChunk : Long) {
		this.nChunk = nChunk;
		// TODO: imcomplete cache alignment
		maxThreads = Runtime.NTHREADS;
		bufferWidth = Math.max(CACHE_LINE/4, nChunk);

		val size = bufferWidth * (maxThreads*2 + 1) + (nChunk*2 + 1);
		val dist = (new MemoryChunk[Long](size, CACHE_LINE)).distributor();

		threadCounts = dist.next(bufferWidth*maxThreads);
		threadOffsets = dist.next(bufferWidth*(maxThreads+1));
		sendCounts = dist.next(nChunk);
		sendOffsets = dist.next(nChunk + 1);
		dist.checkFinish();

		for(i in threadCounts.range()) threadCounts(i) = 0;
	}

	public def reset() {
		for(i in threadCounts.range()) threadCounts(i) = 0;
	}

	public def counts(tid :Int) {
		val mc = threadCounts.subpart(bufferWidth*tid, bufferWidth);
		@Ifndef("NO_BOUNDS_CHECKS") {
			for(i in 0..(bufferWidth-1)) assert(mc(i) == 0L);
		}
		return mc;
	}

	public def offsets(tid :Int) = threadOffsets.subpart(bufferWidth*tid, bufferWidth);

	public def sum() {
		val width = bufferWidth;
		val nChunk = nChunk;
		val teamRange = 0..(nChunk-1);
		val threadsRange = 0..(maxThreads-1);
		// compute sum of thread local count values
		for(r in teamRange) {
			var sum :Int = 0;
			for(t in threadsRange) {
				sum += threadCounts(t*width + r);
			}
			sendCounts(r) = sum;
		}
		// compute offsets
		sendOffsets(0) = 0L;
		for(r in teamRange) {
			sendOffsets(r + 1) = sendOffsets(r) + sendCounts(r);
		}
		// assert (send_counts[size] == bufsize*2);
		// compute offset of each threads
		for(r in teamRange) {
			threadOffsets(0*width + r) = sendOffsets(r);
			for(t in threadsRange) {
				threadOffsets((t+1)*width + r) = threadOffsets(t*width + r) + threadCounts(t*width + r);
			}
			assert (threadOffsets(maxThreads*width + r) == sendOffsets(r + 1));
		}
	}

	public def sendCount() = sendOffsets(nChunk);
	// public def recvCount() = recvOffsets(team.size());

    public def check(size : Int) {
        val width = bufferWidth;
		for(r in 0..(nChunk-1)) {
			assert (threadOffsets(0*width + r) == sendOffsets(r) + threadCounts(0*width + r));
			for(t in 1..(maxThreads-1)) {
				assert (threadOffsets(t*width + r) == threadOffsets((t-1)*width + r) + threadCounts(t*width + r));
			}
		}
		assert (size as Long == sendOffsets(nChunk));
    }

    public def offsets() = sendOffsets;
    public def counts() = sendCounts;
    public def size() = sendOffsets(nChunk);

    /*
	public def scatter[T](sendData :MemoryChunk[T]) {
		val width = bufferWidth;
		val teamSize = team.size();
		@Ifndef("NO_BOUNDS_CHECKS") {
			// check offset of each threads
			for(r in 0..(teamSize-1)) {
				assert (threadOffsets(0*width + r) == sendOffsets(r) + threadCounts(0*width + r));
				for(t in 1..(maxThreads-1)) {
					assert (threadOffsets(t*width + r) == threadOffsets((t-1)*width + r) + threadCounts(t*width + r));
				}
			}
			assert (sendData.size() as Int == sendOffsets(teamSize));
		}
		team.alltoall(sendCounts, recvCounts);
		Team2.countOffsets(recvCounts, recvOffsets, 0);
		val recvData = new MemoryChunk[T](recvOffsets(teamSize));
		team.alltoallv(sendData, sendOffsets, sendCounts, recvData, recvOffsets, recvCounts);
		return recvData;
	}

	public def gather[T](sendData :MemoryChunk[T]) {
		val teamSize = team.size();
		val recvData = new MemoryChunk[T](sendOffsets(teamSize));
		team.alltoallv(sendData, recvOffsets, recvCounts, recvData, sendOffsets, sendCounts);
		return recvData;
	}

	public def gather[T](sendData :MemoryChunk[T], recvData :MemoryChunk[T]) {
		team.alltoallv(sendData, recvOffsets, recvCounts, recvData, sendOffsets, sendCounts);
	}
    */
}
