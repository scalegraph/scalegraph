package org.scalegraph.concurrent;

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
public struct DistScatterGather {

	private team :Team2;
    private maxThreads :Int;
	private bufferWidth :Int;
	private threadCounts :MemoryChunk[Int];
	private threadOffsets :MemoryChunk[Int];
	private sendCounts :MemoryChunk[Int];
	private sendOffsets :MemoryChunk[Int];
	private recvCounts :MemoryChunk[Int];
	private recvOffsets :MemoryChunk[Int];

    private CACHE_LINE = 64;

	public def this(team :Team) {
		this.team = new Team2(team);
		val teamSize = team.size();

		// TODO: imcomplete cache alignment
		maxThreads = Runtime.NTHREADS;
		bufferWidth = Math.max(CACHE_LINE/4, teamSize);

		val size = bufferWidth * (maxThreads*2 + 1) + (teamSize*2 + 1) * 2;
		val dist = (new MemoryChunk[Int](size, CACHE_LINE)).distributor();

		threadCounts = dist.next(bufferWidth*maxThreads);
		threadOffsets = dist.next(bufferWidth*(maxThreads+1));
		sendCounts = dist.next(teamSize);
		sendOffsets = dist.next(teamSize + 1);
		recvCounts = dist.next(teamSize);
		recvOffsets = dist.next(teamSize + 1);
		dist.checkFinish();

		for(i in threadCounts.range()) threadCounts(i) = 0;
	}

	public def reset() {
		for(i in threadCounts.range()) threadCounts(i) = 0;
	}

	public def getCounts(tid :Int) {
		val mc = threadCounts.subpart(bufferWidth*tid, bufferWidth);
		@Ifndef("NO_BOUNDS_CHECKS") {
			for(i in 0..(bufferWidth-1)) assert(mc(i) == 0);
		}
		return mc;
	}

	public def getOffsets(tid :Int) = threadOffsets.subpart(bufferWidth*tid, bufferWidth);

	public def sum() {
		val width = bufferWidth;
		val teamSize = team.size();
		val teamRange = 0..(teamSize-1);
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
		sendOffsets(0) = 0;
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

	public def sendCount() = sendOffsets(team.size());
	public def recvCount() = recvOffsets(team.size());

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

}
