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

package org.scalegraph.xpregel;

import x10.util.Team;
import x10.util.ArrayList;
import x10.compiler.Ifdef;

import org.scalegraph.Config;

import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.Bitmap;
import org.scalegraph.util.Team2;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.ProfilingDB;

import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.blas.SparseMatrix;
import org.scalegraph.graph.id.OnedC;
import org.scalegraph.graph.id.IdStruct;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.util.DistMemoryChunk;
import x10.compiler.Native;
import x10.io.Printer;

final class WorkerPlaceGraph[V,E] {
	static val MAX_OUTPUT_NUMBER = 8;
	private static type XP = org.scalegraph.id.ProfilingID.XPregel;
	
	val mTeam :Team2;
	val mIds :IdStruct;

	val mVtoD :OnedC.VtoD;
	val mDtoV :OnedC.DtoV;
	val mDtoS :OnedC.DtoS;
	val mStoD :OnedC.StoD;
	val mStoV :OnedC.StoV;
	
	var mVertexValue :MemoryChunk[V];
	val mVertexActive :Bitmap;
	val mVertexShouldBeActive :Bitmap;
	
	val mOutEdge :GraphEdge[E];
	val mInEdge :GraphEdge[E];
	var mInEdgesMask :Bitmap;

	val numThreads = Runtime.NTHREADS;
	var mLastAggVal :Any;
	val mOutput :MemoryChunk[GrowableMemory[Int]];
	
	var mLogLevel :Int;
	var mLogPrinter :Printer;
	var mEnableStatistics :Boolean = true;
	
	public def this(team :Team, ids :IdStruct) {
		val rank_c = team.role()(0);
		mTeam = new Team2(team);
		mIds = ids;
		
		mVtoD = new OnedC.VtoD(ids);
		mDtoV = new OnedC.DtoV(ids);
		mDtoS = new OnedC.DtoS(ids);
		mStoD = new OnedC.StoD(ids, rank_c);
		mStoV = new OnedC.StoV(ids, rank_c);
		
		val numVertexes = mIds.numberOfLocalVertexes();
		
		mVertexValue = new MemoryChunk[V](numVertexes);
		mVertexActive = new Bitmap(numVertexes, true);
		mVertexShouldBeActive = new Bitmap(numVertexes, true);

		mOutEdge = new GraphEdge[E]();
		mInEdge = new GraphEdge[E]();
		
		mOutput = new MemoryChunk[GrowableMemory[Int]](numThreads * MAX_OUTPUT_NUMBER, 0, true);
		
		if (here.id == 0) {
			Console.OUT.println("lgl = " + mIds.lgl);
			Console.OUT.println("lgc = " + mIds.lgc);
			Console.OUT.println("lgr = " + mIds.lgr);	
		}
	}
	
	public def this(team :Team, edgeIndexMatrix :DistSparseMatrix[Long]) {
		this(team, edgeIndexMatrix.ids());
		mOutEdge.offsets = edgeIndexMatrix().offsets;
		mOutEdge.vertexes = edgeIndexMatrix().vertexes;
		mOutEdge.value = new MemoryChunk[E](mOutEdge.vertexes.size());
	}
	
	public def updateInEdge() {
		@Ifdef("PROF_XP") val mtimer = Config.get().profXPregel().timer(XP.MAIN_FRAME, 0);
		@Ifdef("PROF_XP") { mtimer.start(); }
		val numThreads = Runtime.NTHREADS;
		val mesComm = new MessageCommunicator[Long](mTeam, mIds, numThreads);
		val numLocalVertexes = mIds.numberOfLocalVertexes();
		val StoD = new OnedC.StoD(mIds, mTeam.base.role()(0));
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_INIT); }
		
		foreachVertexes(numLocalVertexes, (tid :Long, r :LongRange) => {
			@Ifdef("PROF_XP") val thtimer = Config.get().profXPregel().timer(XP.MAIN_TH_FRAME, tid);
			@Ifdef("PROF_XP") { thtimer.start(); }
			val UCCMessages = mesComm.messageBuffer(tid);
			val offset = mOutEdge.offsets;
			val id = mOutEdge.vertexes;
			for(vid in r) {
				val vid_ = StoD(vid);
				for(i in offset(vid)..(offset(vid + 1) - 1)) {
					val mesBuf = UCCMessages(mesComm.mDtoV.c(id(i)));
					mesBuf.messages.add(vid_);
					mesBuf.dstIds.add(mesComm.mDtoS(id(i)));
				}
			}
			@Ifdef("PROF_XP") { thtimer.lap(XP.MAIN_TH_COMPUTE); }
		});
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_COMPUTE); }
		
		mesComm.preProcess();
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_PRE_PROCESS); }
		mesComm.process(null, true, false);
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_PROCESS); }
		mesComm.exchangeMessages(true, false);

		mInEdge.offsets = mesComm.mUCROffset;
		mInEdge.vertexes = mesComm.mUCRMessages;
		mesComm.mUCROffset = new MemoryChunk[Long]();
		mesComm.mUCRMessages = new MemoryChunk[Long]();
		mesComm.del();
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_UPDATEINEDGE); }
	}
	
	public def updateInEdgeWithValue() {E haszero} {
		@Ifdef("PROF_XP") val mtimer = Config.get().profXPregel().timer(XP.MAIN_FRAME, 0);
		@Ifdef("PROF_XP") { mtimer.start(); }
		val numThreads = Runtime.NTHREADS;
		val mesComm = new MessageCommunicator[Tuple2[Long, E]](mTeam, mIds, numThreads);
		val numLocalVertexes = mIds.numberOfLocalVertexes();
		val StoD = new OnedC.StoD(mIds, mTeam.base.role()(0));
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_INIT); }
		
		foreachVertexes(numLocalVertexes, (tid :Long, r :LongRange) => {
			@Ifdef("PROF_XP") val thtimer = Config.get().profXPregel().timer(XP.MAIN_TH_FRAME, tid);
			@Ifdef("PROF_XP") { thtimer.start(); }
			val UCCMessages = mesComm.messageBuffer(tid);
			val offset = mOutEdge.offsets;
			val id = mOutEdge.vertexes;
			val value = mOutEdge.value;
			for(vid in r) {
				val vid_ = StoD(vid);
				for(i in offset(vid)..(offset(vid + 1) - 1)) {
					val mesBuf = UCCMessages(mesComm.mDtoV.c(id(i)));
					mesBuf.messages.add(Tuple2[Long, E](vid_, value(i)));
					mesBuf.dstIds.add(mesComm.mDtoS(id(i)));
				}
			}
			@Ifdef("PROF_XP") { thtimer.lap(XP.MAIN_TH_COMPUTE); }
		});
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_COMPUTE); }

		mesComm.preProcess();
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_PRE_PROCESS); }
		mesComm.process(null, true, false);
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_PROCESS); }
		mesComm.exchangeMessages(true, false);
		
		val numEdges = mesComm.mUCRMessages.size();
		val id = new MemoryChunk[Long](numEdges);
		val value = new MemoryChunk[E](numEdges);
		Parallel.iter(0..(numEdges-1), (tid :Long, r :LongRange) => {
			for(i in r) {
				id(i) = mesComm.mUCRMessages(i).get1();
				value(i) = mesComm.mUCRMessages(i).get2();
			}
		});

		mInEdge.offsets = mesComm.mUCROffset;
		mInEdge.vertexes = id;
		mInEdge.value = value;
		
		mesComm.mUCROffset = new MemoryChunk[Long]();
		mesComm.del();
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_UPDATEINEDGE); }
	}
	
	// src will be destroyed
	private static def computeAggregate[A](team :Team2, src :MemoryChunk[A], buffer :MemoryChunk[A],
			aggregator :(MemoryChunk[A])=>A) :A
	{
		@Ifdef("PROF_XP") val mtimer = Config.get().profXPregel().timer(XP.MAIN_FRAME, 0);
		val root = (team.base.role()(0) == 0);
		src(0) = aggregator(src);
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_AGGREGATE_COMPUTE); }
		team.gather(0, src.subpart(0, 1), buffer);
		if(root) buffer(0) = aggregator(buffer);
		team.bcast(0, root ? buffer.subpart(0, 1) : buffer, src.subpart(0, 1));
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_AGGREGATE_COMM); }
		return src(0);
	}
	
	private static val STT_END_COUNT = 0;
	private static val STT_ACTIVE_VERTEX = 1;
	private static val STT_RAW_MESSAGE = 2;
	private static val STT_VERTEX_MESSAGE = 3;
	private static val STT_PRE = 4;
	
	private static val STT_COMBINED_MESSAGE = 4;
	private static val STT_VERTEX_TRANSFERED_MESSAGE = 5;
	private static val STT_POST = 2;
	
	private static val STT_MAX = 6;

	private static def gatherInformation[M](team :Team2,
			ectx :MessageCommunicator[M], stt :MemoryChunk[Long], enableStatistics :Boolean,
			combiner :(messages:MemoryChunk[M]) => M) { M haszero } :Boolean
	{
		@Ifdef("PROF_XP") val mtimer = Config.get().profXPregel().timer(XP.MAIN_FRAME, 0);
		val recvStt = stt.subpart(STT_MAX, STT_MAX);
		
		// compute the number of messages to determin communication strategy
		val [ numActive, numRawMessages, numVertexMessages ] = ectx.preProcess();
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_PRE_PROCESS); }
		
		stt(STT_ACTIVE_VERTEX) = numActive;
		stt(STT_RAW_MESSAGE) = numRawMessages;
		stt(STT_VERTEX_MESSAGE) = numVertexMessages;
		
		// aggregate statistics to determin communication strategy
		team.allreduce(stt.subpart(0, STT_PRE), recvStt.subpart(0, STT_PRE), Team.ADD);
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_ALLGATHER_1); }

		if(recvStt(STT_END_COUNT) > 0) {
			// terminate
			return true;
		}
		
		// if there are no active vertex nor messages, we terminate computation.
		if(recvStt(STT_ACTIVE_VERTEX) == 0L &&
				recvStt(STT_RAW_MESSAGE) == 0L &&
				recvStt(STT_VERTEX_MESSAGE) == 0L)
		{
			return true;
		}
		
		// merge messages and combine if combiner is provided
		val [  numCombinedMessages, numTransferedVertexMessages ]
				= ectx.process(combiner, recvStt(STT_RAW_MESSAGE) > 0, recvStt(STT_VERTEX_MESSAGE) > 0);
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_PROCESS); }
		
		stt(STT_COMBINED_MESSAGE) = numCombinedMessages;
		stt(STT_VERTEX_TRANSFERED_MESSAGE) = numTransferedVertexMessages;

		// aggregate statictics just for print information
		// This communication can be omitted !
		if(enableStatistics)
			team.allreduce(stt.subpart(STT_PRE, STT_POST), recvStt.subpart(STT_PRE, STT_POST), Team.ADD);
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_ALLGATHER_2); }
		
		return false;
	}
			
	static def foreachVertexes(numLocalVertexes :Long, task :(Long, LongRange) => void) {
		// Split the range of bitmat words to ensure the processing thread-safe.
		Parallel.iter(0..(Bitmap.numWords(numLocalVertexes)-1), (tid :Long, r_word :LongRange) => {
			val r = new LongRange(r_word.min * Bitmap.BitsPerWord,
					Math.min(numLocalVertexes, (r_word.max+1) * Bitmap.BitsPerWord) - 1);
			task(tid, r);
		});
	}
	
	public def run[M, A](
			compute :(VertexContext[V,E,M,A], MemoryChunk[M]) => void,
			aggregator :(MemoryChunk[A])=>A,
			combiner :(MemoryChunk[M]) => M,
			end :(Int,A)=>Boolean) { M haszero, A haszero }
	{
		@Ifdef("PROF_XP") val mtimer = Config.get().profXPregel().timer(XP.MAIN_FRAME, 0);
		@Ifdef("PROF_XP") { mtimer.start(); }
		
		val root = (mTeam.base.role()(0) == 0);
		val numLocalVertexes = mIds.numberOfLocalVertexes();
		val ectx :MessageCommunicator[M] =
			new MessageCommunicator[M](mTeam, mIds, numThreads);
		val vctxs = new MemoryChunk[VertexContext[V, E, M, A]](numThreads,
				(i :Long) => new VertexContext[V, E, M, A](this, ectx, i));
		val edgeProviderList = new MemoryChunk[EdgeProvider[E]](numThreads,
				(i:Long) => vctxs(i).mEdgeProvider);
		val intermedAggregateValue = new MemoryChunk[A](numThreads);
		val aggregateBuffer = new MemoryChunk[A](root ? mTeam.size() : 0);
		val statistics = new MemoryChunk[Long](STT_MAX*2);
		val recvStatistics = statistics.subpart(STT_MAX, STT_MAX);

		ectx.mInEdgesOffset = mInEdge.offsets;
		ectx.mInEdgesVertex = mInEdge.vertexes;
		ectx.mInEdgesMask = mInEdgesMask;

		// initialize halt flag
		val vertexActvieBitmap = mVertexActive.raw();
		MemoryChunk.copy(mVertexShouldBeActive.raw(), 0L,
				vertexActvieBitmap, 0L, vertexActvieBitmap.size());
		
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_INIT); }
		
		for(ss in 0..10000) {
			ectx.mSuperstep = ss;

			@Ifdef("PROF_XP") { mtimer.start(); }
			foreachVertexes(numLocalVertexes, (tid :Long, r :LongRange) => {
				val vc = vctxs(tid);
				val ep = vc.mEdgeProvider;
				val mesTempBuffer :GrowableMemory[M] = new GrowableMemory[M]();
				var numProcessed :Long = 0L;

				@Ifdef("PROF_XP") val thtimer = Config.get().profXPregel().timer(XP.MAIN_TH_FRAME, tid);
				@Ifdef("PROF_XP") { thtimer.start(); }
				for(srcid in r) {
					vc.mSrcid = srcid;
					val mes = ectx.message(srcid, mesTempBuffer);
					if(mes.size() > 0 || mVertexActive(srcid)) {
						
						compute(vc, mes);

						if(ep.mEdgeChanged) ep.fixModifiedEdges(srcid);
						if(mVertexActive(srcid)) ++numProcessed;
					}
				}
				@Ifdef("PROF_XP") { thtimer.lap(XP.MAIN_TH_COMPUTE); }
				if(aggregator != null) {
					intermedAggregateValue(tid) = aggregator(vc.mAggregateValue.raw());
				}
				@Ifdef("PROF_XP") { thtimer.lap(XP.MAIN_TH_AGGREGATE); }
				vc.mAggregateValue.clear();
				vc.mNumActiveVertexes = numProcessed;
			});
			@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_COMPUTE); }
			
			// gather statistics
			for(th in 0..(numThreads-1)) {
				ectx.sqweezeMessage(vctxs(th));
			}
			@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_SQWEEZMES); }
			
			// update out edges
			EdgeProvider.updateOutEdge[E](mOutEdge, edgeProviderList, mIds);
			
			// aggregate
			val aggVal = (aggregator != null)
				? computeAggregate[A](mTeam, intermedAggregateValue, aggregateBuffer, aggregator)
				: Zero.get[A]();
				
			for(i in vctxs.range()) vctxs(i).mAggregatedValue = aggVal;
			statistics(STT_END_COUNT) = end(ss, aggVal) ? 1L : 0L;

			//
			val terminate = gatherInformation(mTeam, ectx, statistics, mEnableStatistics, combiner);

			if(here.id() == 0 && mLogPrinter != null) {
				mLogPrinter.println("STT_END_COUNT: " + recvStatistics(STT_END_COUNT));
				mLogPrinter.println("STT_ACTIVE_VERTEX: " + recvStatistics(STT_ACTIVE_VERTEX));
				mLogPrinter.println("STT_RAW_MESSAGE: " + recvStatistics(STT_RAW_MESSAGE));
				mLogPrinter.println("STT_VERTEX_MESSAGE: " + recvStatistics(STT_VERTEX_MESSAGE));
				if(mEnableStatistics && terminate == false) {
					mLogPrinter.println("STT_COMBINED_MESSAGE: " + recvStatistics(STT_COMBINED_MESSAGE));
					mLogPrinter.println("STT_VERTEX_TRANSFERED_MESSAGE: " + recvStatistics(STT_VERTEX_TRANSFERED_MESSAGE));
				}
			}
			
			if(terminate) {
				mLastAggVal = aggVal;
				mInEdgesMask = ectx.mInEdgesMask;
				ectx.del();
				return ;
			}

			// exchange messages
			ectx.exchangeMessages(
					recvStatistics(STT_COMBINED_MESSAGE) > 0L,
					recvStatistics(STT_VERTEX_MESSAGE) > 0L);
		}
		
		throw new Exception("Superstep limit exceeded. # of supterstep > 10000");
	}
	
	@Native("c++", "reinterpret_cast<org::scalegraph::util::GrowableMemory<#T >*>(#v)")
	static native def castTo[T](v :GrowableMemory[Int]) :GrowableMemory[T];
	
	def outBuffer(tid :Long) = mOutput.subpart(tid * MAX_OUTPUT_NUMBER, MAX_OUTPUT_NUMBER);
	
	public def stealOutput[T](index :Int) :MemoryChunk[T] {
		if(index > MAX_OUTPUT_NUMBER)
			throw new ArrayIndexOutOfBoundsException();

		@Ifdef("PROF_XP") val mtimer = Config.get().profXPregel().timer(XP.MAIN_FRAME, 0);
		@Ifdef("PROF_XP") { mtimer.start(); }
		
		var length :Long = 0L;
		for(i in 0..(numThreads-1)) {
			length += mOutput(i * MAX_OUTPUT_NUMBER + index).size();
		}
		
		val outMem = new MemoryChunk[T](length);
		var offset :Long = 0L;
		finish for(i in 0..(numThreads-1)) {
			val buf = mOutput(i * MAX_OUTPUT_NUMBER + index);
			val src_len = buf.size();
			val offset_ = offset;
			async {
				// GrowableMemory must be declared as final.
				// If it is not, all method call to typed_buf
				// will invoke the method of GrowableMemory<int> 
				// through its virtual function table.
				@Ifdef("PROF_XP") val thtimer = Config.get().profXPregel().timer(XP.MAIN_TH_FRAME, i);
				@Ifdef("PROF_XP") { thtimer.start(); }
				val typed_buf = castTo[T](buf);
				MemoryChunk.copy(typed_buf.raw(), 0L, outMem, offset_, src_len);
				typed_buf.clear();
				@Ifdef("PROF_XP") { thtimer.lap(XP.MAIN_TH_COPY_OUT); }
			}
			offset += src_len;
		}
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_TH_COPY_OUT); }
		
		return outMem;
	}
}
