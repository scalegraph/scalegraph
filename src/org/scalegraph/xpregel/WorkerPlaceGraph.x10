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
import x10.util.concurrent.AtomicLong;

import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.tuple.Tuple3;
import org.scalegraph.util.Bitmap;
import org.scalegraph.util.Team2;
import org.scalegraph.util.Parallel;

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
	
	var mWDiffInDst :MemoryChunk[GrowableMemory[Long]];
	var mWDiffInSrcWithAR :MemoryChunk[GrowableMemory[Long]];
	var mNeedsAllUpdateInEdge :Boolean = true;
	
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
		
		mWDiffInDst = new MemoryChunk[GrowableMemory[Long]](
				numThreads,
				(i :Long) => new GrowableMemory[Long](32));
		mWDiffInSrcWithAR = new MemoryChunk[GrowableMemory[Long]](
				numThreads,
				(i :Long) => new GrowableMemory[Long](32));
		
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
		//kono naka de broadcast ha dekinai
		val numLocalVertexes = mIds.numberOfLocalVertexes();
		//place goto ni S,D ha kotonaru noni douyatte kyuusyuu site iruno?
		
		
		mNeedsAllUpdateInEdge = 0 < mTeam.allreduce[Long](mNeedsAllUpdateInEdge?1:0,Team.ADD) ? true : false;
		
		if(mNeedsAllUpdateInEdge){
			val mesComm = new MessageCommunicator[Long](mTeam, mIds, numThreads);
			val StoD = new OnedC.StoD(mIds, mTeam.base.role()(0));
			foreachVertexes(numLocalVertexes, (tid :Long, r :LongRange) => {
				val UCCMessages = mesComm.messageBuffer(tid);
				val offset = mOutEdge.offsets;
				val id = mOutEdge.vertexes;
				for(vid in r) {
					val vid_ = StoD(vid);
					for(i in offset(vid)..(offset(vid + 1) - 1)) {
						val mesBuf = UCCMessages(mesComm.mDtoV.c(id(i)));	//D no aru column
						mesBuf.messages.add(vid_);								//message ni S wo D ni shitayatu wo ireru
						mesBuf.dstIds.add(mesComm.mDtoS(id(i)));				//okurisaki ni D wo S ni shitayatu wo ireteru
					}
				}
			});
			
			mesComm.preProcess();
			mesComm.process(null, true, false);
			mesComm.exchangeMessages(true, false);
	
			mInEdge.offsets = mesComm.mUCROffset;
			mInEdge.vertexes = mesComm.mUCRMessages;
			mesComm.mUCROffset = new MemoryChunk[Long]();
			mesComm.mUCRMessages = new MemoryChunk[Long]();
			mesComm.del();	//TODO tosika kakarete inai
		}else{
			//memo:	mDiffInDst == dstId	,mDiffInSrcWithAR == srcId with AR
			assert(mWDiffInSrcWithAR(0).size() == mWDiffInDst(0).size());
			val allInEdgeNum = getDiffInDstSize();
			val mask = VertexContext.INEDGE_ADDBIT;
			val teamNum = mTeam.size();
			val numVertexes = mIds.numberOfLocalVertexes();
			
			val diffInEdgeOffset = new MemoryChunk[Int](teamNum);
			val diffInEdgeData = new MemoryChunk[Tuple2[Long,Long]](allInEdgeNum);
			val diffInEdgeCount = new MemoryChunk[Int](teamNum);
			
			for (i in mWDiffInDst.range())
			for (j in mWDiffInDst(i).range()){
				diffInEdgeCount(mDtoS.c(mWDiffInDst(i)(j)))++;	//data suu ++
				mWDiffInSrcWithAR(i)(j) = 
					(mStoD(mWDiffInSrcWithAR(i)(j) & ~mask)) | (mWDiffInSrcWithAR(i)(j) & mask);	//tsuide
			}
			
			//memo:	mDiffInDst == dstId	,mDiffInSrcWithAR == dstId with AR
			diffInEdgeOffset(0) = 0;
			for(i in 0L..(diffInEdgeOffset.size() - 2L)){
				diffInEdgeOffset(i + 1) += diffInEdgeOffset(i)+diffInEdgeCount(i);
				diffInEdgeCount(i) = 0;
			}
			diffInEdgeCount(diffInEdgeCount.size()-1L) = 0;
			
			for (i in mWDiffInDst.range())
			for (j in mWDiffInDst(i).range()){
				val index = mDtoS.c(mWDiffInDst(i)(j));									//serch place num
				diffInEdgeData(diffInEdgeOffset(index) + diffInEdgeCount(index)++)
					= new Tuple2(mWDiffInDst(i)(j),mWDiffInSrcWithAR(i)(j));
			}
			
			//diffInSrc wo key toshite sort
			val t_diffInEdgeData = new MemoryChunk[Tuple2[Long,Long]](allInEdgeNum);
			Parallel.iter(diffInEdgeOffset.range(), (tid :Long, r :LongRange) => {
				for(i in r){
					recursiveMergeSort[Tuple2[Long,Long]](
						diffInEdgeData,		t_diffInEdgeData,
						diffInEdgeOffset(i),
						((i!=r.max) ? (diffInEdgeOffset(i+1)) as Long : (diffInEdgeData.size()-1L)) - diffInEdgeOffset(i),
						(arg:MemoryChunk[Tuple2[Long,Long]],index:Long) => {
							return arg(index).get2();
					});
				}
			});
			t_diffInEdgeData.del();

			val recvCount = new MemoryChunk[Int](teamNum+1);
			mTeam.alltoall(diffInEdgeCount,recvCount);
			for(i in recvCount.range()) {
				recvCount(i+1) += recvCount(i);		//discard recvCount
			}
			val recvSize = recvCount(teamNum);	//index!!
			
			val dstDIEO = new MemoryChunk[Int](teamNum);
			val dstDIED = new MemoryChunk[Tuple2[Long,Long]](recvSize);
			val dstDIEC = new MemoryChunk[Int](teamNum);
			mTeam.alltoallv[Tuple2[Long,Long]](diffInEdgeData, diffInEdgeOffset, diffInEdgeCount, dstDIED, dstDIEO, dstDIEC);
			
			val dstDIE = new MemoryChunk[Tuple3[Long,Long,Boolean]](recvSize+1);	//+1
			dstDIE(recvSize) = new Tuple3[Long,Long,Boolean](-1,-1,true);
			for(off in dstDIEO.range())
			for(cnt in 0..dstDIEC(off)){
				dstDIE(dstDIEO(off)+cnt) 
					= new Tuple3[Long,Long,Boolean](
							mDtoS(dstDIED(dstDIEO(off)+cnt).val1),			//koko de DtoS
							dstDIED(dstDIEO(off)+cnt).val2 & ~mask,
							(dstDIED(dstDIEO(off)+cnt).val2 & mask) != 0L);	//class ni shitahou ga iikamo NE
			}
			/* 
			 * TODO:DIED.get1() wo key to shite sort
			 */
			val t_dstDIE = new MemoryChunk[Tuple3[Long,Long,Boolean]](recvSize);
			//toriaezu single thread
			recursiveMergeSort[Tuple3[Long,Long,Boolean]](
				dstDIE,	t_dstDIE,
				0L,		dstDIE.size(),
				(arg:MemoryChunk[Tuple3[Long,Long,Boolean]],index:Long) => {
					return arg(index).get1();
			});
			t_dstDIE.del();
			
			var length :Long = 0L;
			var cOffIndex :Long = 0L;	//New no hou mo kore de kaneteru
			var cDstIndex :Long = 0L;
			var cNewDstIndex :Long = 0L;

			//hairetu nagasa motomeru
			for(i in 0..(dstDIE.size()-1)){	//+1 shitearu node -1
				if((dstDIE(i).get1() == dstDIE(i+1).get1()) &&
						(dstDIE(i).get2() == dstDIE(i+1).get2()))
					continue;
				
				length = 0L;
				while(cOffIndex < dstDIE(i).get1())
					++cOffIndex;
				length = mInEdge.offsets(cOffIndex) - cDstIndex;
				
				while(cDstIndex+length < mInEdge.vertexes.size()-1 && 				//yomeru
						mInEdge.vertexes(cDstIndex + length) < dstDIE(i).get2())
					length++;
				
				cDstIndex += length;
				cNewDstIndex += length;
				if(dstDIE(i).get3())
					cNewDstIndex++;
				
				if(mInEdge.vertexes(cDstIndex) == dstDIE(i).get2()){
					cDstIndex++;
					while(cOffIndex<=numVertexes &&
							mInEdge.offsets(cOffIndex+1)<cDstIndex)
						++cOffIndex;
				}
			}
			val IEVertexes = new MemoryChunk[Long](cNewDstIndex+1);
			
			cOffIndex = 0L;
			cDstIndex = 0L;
			cNewDstIndex = 0L;
			/* 
			 * mInEdge.offsets = mesComm.mUCROffset;
			 * mInEdge.vertexes = mesComm.mUCRMessages;
			 */
			mInEdge.offsets(0) = 0L;
			for(i in 0..(dstDIE.size()-1)){	//+1 shitearu node -1
				if((dstDIE(i).get1() == dstDIE(i+1).get1()) &&
					(dstDIE(i).get2() == dstDIE(i+1).get2()))
					continue;
				length = 0L;
				while(cOffIndex < dstDIE(i).get1()){
					length = mInEdge.offsets(++cOffIndex) - cDstIndex;
					mInEdge.offsets(cOffIndex) = cDstIndex + length;	//set offsets
				}
				while(cDstIndex+length < mInEdge.vertexes.size()-1 && 				//yomeru
						mInEdge.vertexes(cDstIndex + length) < dstDIE(i).get2()){
					length++;
				}
				MemoryChunk.copy(mInEdge.vertexes, cDstIndex, IEVertexes, cNewDstIndex, length);
				cDstIndex += length;
				cNewDstIndex += length;
				if(dstDIE(i).get3()){
					//add
					/*
					 * cOffIndex		huyasu kamo kamo
					 * cDstIndex		huyasu kamo
					 * cNewDstIndex	huyasu
					 */
					IEVertexes(cNewDstIndex++) = dstDIE(i).get2();
				}else{
					//remove
					/*
					 * cOffIndex		huyasu kamko
					 * cDstIndex		hutuu huyasu (nakereba huyasanai) 
					 * cNewDstIndex	sonomama
					 */
					//yarukoto nai?
				}
				
				if(mInEdge.vertexes(cDstIndex) == dstDIE(i).get2()){
					//add taisyou ga sudeni atta => fuyasu
					//remove taisyou ga atta => fuyasu
					//TODO: kangae naosu
					//cDstIndex ha sukunakarazu fuyasu
					//cOffset ha hitsuyou ga areba fuyasu
					cDstIndex++;
					while(cOffIndex<=numVertexes &&
							mInEdge.offsets(cOffIndex+1)<cDstIndex){
						mInEdge.offsets(++cOffIndex) = cDstIndex;
					}
				}
			}
			//sabun tekiyou kokode owari. ato ha henkou nashi no bun wo copy suru
			//copy vertexes
			MemoryChunk.copy(mInEdge.vertexes, cDstIndex+1, IEVertexes, cNewDstIndex+1, mInEdge.vertexes.size()-cDstIndex);
			mInEdge.vertexes.del();
			mInEdge.vertexes = IEVertexes;
			//copy offsets
			val diffOff = cNewDstIndex - cDstIndex;
			for (i in (cOffIndex+1)..numVertexes){	//tyouten suu +1 made tyanto koushin siteiru
				mInEdge.offsets(i) = mInEdge.offsets(i) + diffOff;
			}
		}
		
		//!!!!!kanarazu koko wo toosu!!!!!
		//TODO:atosyori
		for(i in mWDiffInDst.range()){
			mWDiffInDst(i).clear();
			mWDiffInSrcWithAR(i).clear();
		}
		mNeedsAllUpdateInEdge = false;
	}
	
	public def updateInEdgeWithValue() {E haszero} {
		val numThreads = Runtime.NTHREADS;
		val mesComm = new MessageCommunicator[Tuple2[Long, E]](mTeam, mIds, numThreads);
		val numLocalVertexes = mIds.numberOfLocalVertexes();
		val StoD = new OnedC.StoD(mIds, mTeam.base.role()(0));
		
		foreachVertexes(numLocalVertexes, (tid :Long, r :LongRange) => {
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
		});

		mesComm.preProcess();
		mesComm.process(null, true, false);
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
		val recvStt = stt.subpart(STT_MAX, STT_MAX);
		
		// compute the number of messages to determin communication strategy
		val [ numActive, numRawMessages, numVertexMessages ] = ectx.preProcess();
		
		stt(STT_ACTIVE_VERTEX) = numActive;
		stt(STT_RAW_MESSAGE) = numRawMessages;
		stt(STT_VERTEX_MESSAGE) = numVertexMessages;
		
		// aggregate statistics to determin communication strategy
		team.allreduce(stt.subpart(0, STT_PRE), recvStt.subpart(0, STT_PRE), Team.ADD);

		if(recvStt(STT_END_COUNT) > 0) {
			// terminate
			return true;
		}
		
		// if there are no active vertex nor messages, we terminate computation.
		if(recvStt(STT_ACTIVE_VERTEX) == 0L &&
				recvStt(STT_RAW_MESSAGE) == 0L &&
				recvStt(STT_VERTEX_MESSAGE) == 0L){
			return true;
		}
		
		// merge messages and combine if combiner is provided
		val [  numCombinedMessages, numTransferedVertexMessages ]
				= ectx.process(combiner, recvStt(STT_RAW_MESSAGE) > 0, recvStt(STT_VERTEX_MESSAGE) > 0);
		
		stt(STT_COMBINED_MESSAGE) = numCombinedMessages;
		stt(STT_VERTEX_TRANSFERED_MESSAGE) = numTransferedVertexMessages;

		// aggregate statictics just for print information
		// This communication can be omitted !
		if(enableStatistics)
			team.allreduce(stt.subpart(STT_PRE, STT_POST), recvStt.subpart(STT_PRE, STT_POST), Team.ADD);
		
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
		
		for(ss in 0..10000) {
			ectx.mSuperstep = ss;
			
			foreachVertexes(numLocalVertexes, (tid :Long, r :LongRange) => {
				val vc = vctxs(tid);
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
				if(aggregator != null) {
					intermedAggregateValue(tid) = aggregator(vc.mAggregateValue.raw());
				}
				vc.mAggregateValue.clear();
				vc.mNumActiveVertexes = numProcessed;
			});
			
			// gather statistics
			for(th in 0..(numThreads-1)) {
				ectx.sqweezeMessage(vctxs(th));
			}
			
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
				val typed_buf = castTo[T](buf);
				MemoryChunk.copy(typed_buf.raw(), 0L, outMem, offset_, src_len);
				typed_buf.clear();
			}
			offset += src_len;
		}
		
		return outMem;
	}
	
	public def getDiffInDstSize() :Long{
		var l:Long = 0L;
		for(i in mWDiffInDst.range()){
			l += mWDiffInDst(i).size();
		}
		return l;
	}
	
	private static def recursiveMergeSort[T](
			sArg :MemoryChunk[T],
			tmpArg :MemoryChunk[T],
			left :Long,
			length :Long,
			getVal :(arg:MemoryChunk[T],index:Long) => Long){	//osoraku getVal ha inline tenkai sareru ...
		//alltoall de okurareta junban ha hozon sareteiru rasii
		//toriaezu...
		if(length<2)
			return;
		val m :Long = length >> 1;
		val n :Long = length - m;
		recursiveMergeSort[T](sArg,tmpArg,left,m,getVal);
		recursiveMergeSort[T](sArg,tmpArg,left+m,n,getVal);
		var i :Long = left;
		var j :Long = left + m;
		var k :Long = left;
		while (i<(left+m) && j<(left+m+n)){	//left+m toka ha cache ni nokoru kamo
			if(left+m+n <= j || (i < left+m && getVal(sArg,i) <= getVal(sArg,j))){
				tmpArg(k++) = sArg(i++);	//j ga hanigai nara matigai naku koko wo tooru
			}else{
				tmpArg(k++) = sArg(j++);	//i ga hanigai nara matigai naku koko wo tooru
			}
		}
		MemoryChunk.copy(tmpArg, left, sArg, left, length);
	}
	
}
