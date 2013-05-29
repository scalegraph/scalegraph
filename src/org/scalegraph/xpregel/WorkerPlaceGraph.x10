package org.scalegraph.xpregel;

import x10.util.Team;
import x10.util.ArrayList;
import x10.util.concurrent.AtomicLong;

import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.Bitmap;
import org.scalegraph.concurrent.Team2;
import org.scalegraph.concurrent.Parallel;

import org.scalegraph.graph.DistSparseMatrix;
import org.scalegraph.graph.SparseMatrix;
import org.scalegraph.graph.id.OnedC;
import org.scalegraph.graph.id.IdStruct;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.EdgesBuffer;

class WorkerPlaceGraph[V,E] {V haszero, E haszero} {
	val mTeam :Team2;
	val mIds :IdStruct;
	
	//var mMatrix:SparseMatrix;
	var mVertexValue :MemoryChunk[V];
	val mVertexActive :Bitmap;
	val mVertexShouldBeActive :Bitmap;
	
	val mOutEdge :GraphEdge[E];
	val mInEdge :GraphEdge[E];
	var mInEdgesMask :Bitmap;
	
	//val mContext : XpregelContext;
	
	public def this(team :Team, matrix :DistSparseMatrix) {
		mTeam = new Team2(team);
		mIds = matrix.ids();
		
		val numVertexes = mIds.numberOfLocalVertexes();
		
		mVertexValue = new MemoryChunk[V](numVertexes);
		mVertexActive = new Bitmap(numVertexes, true);
		mVertexShouldBeActive = new Bitmap(numVertexes, true);

		mOutEdge = new GraphEdge[E](matrix());
		mInEdge = new GraphEdge[E]();
		
		if (here.id == 0) {
			Console.OUT.println("lgl = " + mIds.lgl);
			Console.OUT.println("lgc = " + mIds.lgc);
			Console.OUT.println("lgr = " + mIds.lgr);	
		}
	}
	
	public def updateInEdge() {
		val numThreads = Runtime.NTHREADS;
		val mesComm = new MessageCommunicator[Long](mTeam, mIds, numThreads);
		val numLocalVertexes = mIds.numberOfLocalVertexes();
		val StoD = new OnedC.StoD(mIds, mTeam.base.role()(0));
		
		Parallel.iter(0..(numLocalVertexes-1), (tid :Long, r :LongRange) => {
			val EOCMessages = mesComm.messageBuffer(tid);
			val offset = mOutEdge.offsets;
			val id = mOutEdge.vertexes;
			for(vid in r) {
				val vid_ = StoD(vid);
				for(i in offset(vid)..(offset(vid + 1) - 1)) {
					val mesBuf = EOCMessages(mesComm.mDtoV.c(id(i)));
					mesBuf.messages.add(vid_);
					mesBuf.dstIds.add(mesComm.mDtoS(id(i)));
				}
			}
		});
		
		mesComm.preProcess(null);
		mesComm.exchangeMessages(true, false);

		mInEdge.offsets = mesComm.mEOROffset;
		mInEdge.vertexes = mesComm.mEORMessages;
		mesComm.mEOROffset = new MemoryChunk[Long]();
		mesComm.mEORMessages = new MemoryChunk[Long]();
		mesComm.del();
	}
	
	public def updateInEdgeWithValue() {
		val numThreads = Runtime.NTHREADS;
		val mesComm = new MessageCommunicator[Tuple2[Long, E]](mTeam, mIds, numThreads);
		val numLocalVertexes = mIds.numberOfLocalVertexes();
		val StoD = new OnedC.StoD(mIds, mTeam.base.role()(0));
		
		Parallel.iter(0..(numLocalVertexes-1), (tid :Long, r :LongRange) => {
			val EOCMessages = mesComm.messageBuffer(tid);
			val offset = mOutEdge.offsets;
			val id = mOutEdge.vertexes;
			val value = mOutEdge.value;
			for(vid in r) {
				val vid_ = StoD(vid);
				for(i in offset(vid)..(offset(vid + 1) - 1)) {
					val mesBuf = EOCMessages(mesComm.mDtoV.c(id(i)));
					mesBuf.messages.add(Tuple2[Long, E](vid_, value(i)));
					mesBuf.dstIds.add(mesComm.mDtoS(id(i)));
				}
			}
		});
		
		mesComm.preProcess(null);
		mesComm.exchangeMessages(true, false);
		
		val numEdges = mesComm.mEORMessages.size();
		val id = new MemoryChunk[Long](numEdges);
		val value = new MemoryChunk[E](numEdges);
		Parallel.iter(0..(numEdges-1), (tid :Long, r :LongRange) => {
			for(i in r) {
				id(i) = mesComm.mEORMessages(i).get1();
				value(i) = mesComm.mEORMessages(i).get2();
			}
		});

		mInEdge.offsets = mesComm.mEOROffset;
		mInEdge.vertexes = id;
		mInEdge.value = value;
		
		mesComm.mEOROffset = new MemoryChunk[Long]();
		mesComm.del();
	}
	
	// src will be destroyed
	private static def computeAggregate[A](team :Team2, src :MemoryChunk[A], buffer :MemoryChunk[A],
			aggregator :(MemoryChunk[A])=>A) :A
	{
		val root = (team.base.role()(0) == 0);
		src(0) = aggregator(src);
		team.gather(0, src.subpart(0, 1), buffer);
		if(root) buffer(0) = aggregator(buffer);
		team.bcast(0, root ? buffer.subpart(0, 1) : buffer, src.subpart(0, 1));
		return src(0);
	}
	
	public def run[M, A](compute :(ctx:VertexContext[V,E,M,A],messages:MemoryChunk[M]) => void, 
			aggregator :(MemoryChunk[A])=>A,
			end :(Int,A)=>Boolean) { M haszero, A haszero }
	{
		val root = (mTeam.base.role()(0) == 0);
		val numThreads = Runtime.NTHREADS;
		val numLocalVertexes = mIds.numberOfLocalVertexes();
		val ectx :MessageCommunicator[M] =
			new MessageCommunicator[M](mTeam, mIds, numThreads);
		val vctxs = new MemoryChunk[VertexContext[V, E, M, A]](numThreads,
				(i :Long) => new VertexContext[V, E, M, A](this, ectx, i));
		val edgeProviderList = new MemoryChunk[EdgeProvider[E]](numThreads,
				(i:Long) => vctxs(i).mEdgeProvider);
		val intermedAggregateValue = new MemoryChunk[A](numThreads);
		val aggregateBuffer = new MemoryChunk[A](root ? mTeam.size() : 0);
		
		/* Statistics
		 * 0 : Active vertexes
		 * 1 : Edge orient messages
		 * 2 : Vertex orient messages
		 */
		val numStt = 3;
		val statistics = new MemoryChunk[Long](numStt*2);

		ectx.mInEdgesOffset = mInEdge.offsets;
		ectx.mInEdgesVertex = mInEdge.vertexes;
		ectx.mInEdgesMask = mInEdgesMask;
		
		for(ss in 0..10000) {
			ectx.mSuperstep = ss;
			
			// initialize halt flag
			val vertexActvieBitmap = mVertexActive.data();
			MemoryChunk.copy(mVertexShouldBeActive.data(), 0L,
					vertexActvieBitmap, 0L, vertexActvieBitmap.size());
			
			statistics(0) = 0L;
			
			Parallel.iter(0..(numLocalVertexes-1), (tid :Long, r :LongRange) => {
				val vc = vctxs(tid as Int);
				val ep = vc.mEdgeProvider;
				val mesTempBuffer :GrowableMemory[M] = new GrowableMemory[M]();
				var numProcessed :Long = 0L;
				
				for(srcid in r) {
					vc.mSrcid = srcid;
					val mes = ectx.message(srcid, mesTempBuffer);
					if(mes.size() > 0 || mVertexActive(srcid)) {
						
						compute(vc, mes);

						if(ep.mEdgeChanged) ep.fixModifiedEdges(srcid);
						if(mVertexActive(srcid)) ++numProcessed;
					}
				}
				intermedAggregateValue(tid) = aggregator(vc.mAggregateValue.data());
				vc.mAggregateValue.clear();
				statistics.atomicAdd(0, numProcessed);
			});
			
			// update out edges
			EdgeProvider.updateOutEdge[E](mOutEdge, edgeProviderList, mIds);
			
			// aggregate
			val aggVal = computeAggregate[A](mTeam, intermedAggregateValue, aggregateBuffer, aggregator);
			for(i in vctxs.range()) vctxs(i).mAggregatedValue = aggVal;
			/*
			 * if(end(ectx.mAggregatedValue)) {
			 * // terminate
			 * break;
			 * }
			 */
			
			// merge messages and combine if combiner is provided
			val [ numRawMessages, numCombinedMessages, numVertexMessages ] = ectx.preProcess(null);
			statistics(0) = numRawMessages;
			statistics(1) = numCombinedMessages;
			statistics(2) = numVertexMessages;
			
			// check termination
			val recvStatistics = statistics.subpart(numStt, numStt);
			mTeam.allreduce(statistics.subpart(0, numStt), recvStatistics, Team.ADD);
			// if there are no active vertex nor messages, we terminate computation.
			if(recvStatistics(0) == 0L &&
				recvStatistics(1) == 0L &&
				recvStatistics(2) == 0L)
			{
				break;
			}
			
			// transfer messages
			ectx.exchangeMessages(recvStatistics(1) > 0L, recvStatistics(2) > 0L);
		}
		
		mInEdgesMask = ectx.mInEdgesMask;
		
		ectx.del();
	}
}
