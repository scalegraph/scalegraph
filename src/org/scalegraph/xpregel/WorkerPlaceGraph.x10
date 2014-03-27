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

import org.scalegraph.util.Algorithm;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.tuple.Tuple3;
import org.scalegraph.util.Bitmap;
import org.scalegraph.util.Team2;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.Utils;
import org.scalegraph.util.ProfilingDB;

import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.blas.SparseMatrix;
import org.scalegraph.graph.id.OnedR;
import org.scalegraph.graph.id.IdStruct;

import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.util.DistMemoryChunk;
import x10.compiler.Native;
import x10.io.Printer;

// "haszero" cause x10compiler to type incomprehensibility.
// when you want to get DUMMY value(may not be default), use Utils.getDummyZeroValue[T]();.

// sukunakutomo E wo haszero ni shite tsujitsuma awaseta kekka dame datta
final class WorkerPlaceGraph[V,E] /*{ V haszero, E haszero } */{
	static val MAX_OUTPUT_NUMBER = 8;
	private static type XP = org.scalegraph.id.ProfilingID.XPregel;
	
	val mTeam :Team2;
	val mIds :IdStruct;

	val mVtoD :OnedR.VtoD;
	val mDtoV :OnedR.DtoV;
	val mDtoS :OnedR.DtoS;
	val mStoD :OnedR.StoD;
	val mStoV :OnedR.StoV;
	
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
	var mNeedsAllUpdateInEdge :Boolean = true;
	
	//req[threadid][srcid per thread ("foreachvertex" de ijirou!)]
	//run wo mataide hozon sareru you ni suru niha koko ni oku shika nai
	//reqs ga growable nanode thread goto ni wakeru hitsuyou ga aru
//	var mOutEdgeModifyReqOffsets :MemoryChunk[MemoryChunk[Long]];
//	var mOutEdgeModifyReqsWithAR :MemoryChunk[GrowableMemory[Tuple2[Long,E]]];
	
	public def this(team :Team, ids :IdStruct) {
		val rank_r = team.role()(0);
		mTeam = new Team2(team);
		mIds = ids;
		val numLocalVertexes = mIds.numberOfLocalVertexes();
		
		mVtoD = new OnedR.VtoD(ids);
		mDtoV = new OnedR.DtoV(ids);
		mDtoS = new OnedR.DtoS(ids);
		mStoD = new OnedR.StoD(ids, rank_r);
		mStoV = new OnedR.StoV(ids, rank_r);
		
		mVertexValue = new MemoryChunk[V](numLocalVertexes);
		mVertexActive = new Bitmap(numLocalVertexes, true);
		mVertexShouldBeActive = new Bitmap(numLocalVertexes, true);
		
		mOutEdge = new GraphEdge[E]();
		mInEdge = new GraphEdge[E]();
		
		mOutput = new MemoryChunk[GrowableMemory[Int]](numThreads * MAX_OUTPUT_NUMBER, 0, true);
		
		/// if (here.id == 0) {
		///	Console.OUT.println("lgl = " + mIds.lgl);
		///	Console.OUT.println("lgc = " + mIds.lgc);
		///	Console.OUT.println("lgr = " + mIds.lgr);	
		/// }
	}
	
	public def this(team :Team, edgeIndexMatrix :DistSparseMatrix[Long]) {
		this(team, edgeIndexMatrix.ids());
		mOutEdge.offsets = edgeIndexMatrix().offsets;
		mOutEdge.vertexes = edgeIndexMatrix().vertexes;
		mOutEdge.value = new MemoryChunk[E](mOutEdge.vertexes.size());
	}
	
	public def updateFewInEdge(list :MemoryChunk[EdgeProvider[E]]){
		//TODO:tokutei no jouken de koko ni hairu toki ni sude ni mOutEdgeModifyReqWithAR ga okashii. tyu-i
		val numTeam = mTeam.size();
		val numLocalVertexes = mIds.numberOfLocalVertexes();
		val threadRange = 0..(numThreads-1);
		
		//---------- pre process ( prepare for exchanging edge difference ) ----------
		val diffInEdgeCountPerThread = new MemoryChunk[MemoryChunk[Int]](
				numThreads, (i:Long)=> new MemoryChunk[Int](numTeam));
		
		//assert (debug)
		//honrai ha iranai node kesu
		val outModReqRange = new MemoryChunk[LongRange](numThreads);
		for(tid in threadRange){
			//comment kaijo
			if(list(tid).mEdgeModifyReqOffset.size()>0){
					assert(list(tid).mEdgeModifyReqWithAR.size() == list(tid).mEdgeModifyReqOffset(list(tid).mEdgeModifyReqOffset.size()-1L));
			}
			outModReqRange(tid) = list(tid).mEdgeModifyReqWithAR.range();	//douti
	//		outModReqRange(tid) = 0L..(list(tid).mEdgeModifyReqOffset(list(tid).mEdgeModifyReqOffset.size()-1L)-1L);
		}
		
		//place goto ni otodoke suru data no kazu wo shiraberu
		Parallel.iter(threadRange, (tid:Int)=> {
			val work = diffInEdgeCountPerThread(tid);
			for(i in outModReqRange(tid)/*mOutEdgeModifyReqsWithAR(tid).range()*/)
				++work(mDtoV.r(list(tid).mEdgeModifyReqWithAR(i).val1));	//TODO: r de ii noka
		});
		
		//diffInEdgeCount	(kansei)
		val diec = new MemoryChunk[Int](numTeam);
		for(team in diec.range()){								//Team range
			for(thread in threadRange)	//Thread range
				diec(team) += diffInEdgeCountPerThread(thread)(team);	//sum
		}
		
		//...Tuple3[Long,Long,E] diffInEdgeDataPerThread[numThreads][teamNum][diffInEdgeCountPerThread(i)(j)]
		val diffInEdgeDataPerThread = new MemoryChunk[MemoryChunk[MemoryChunk[Tuple3[Long,Long,E]]]](
				numThreads,
				(i:Long)=> new MemoryChunk[MemoryChunk[Tuple3[Long,Long,E]]](
						numTeam,
						(j:Long) => new MemoryChunk[Tuple3[Long,Long,E]](diffInEdgeCountPerThread(i)(j))
				)
		);
		
		//req ha optimize zumi dakara henkan shite tsukkomu dake?
		Parallel.iter(threadRange, (tid:Int)=> {
			val e = list(tid);
			val workdata = diffInEdgeDataPerThread(tid);	//ika "work(teamNum)(index)" de access suru
			val workoff = list(tid).mEdgeModifyReqOffset;
			val maxSrcid = workoff.size()-2L;	//tettoribayai
			val index = new MemoryChunk[Int](numTeam);
			var srcid :Long = 0L;
			for(i in outModReqRange(tid)/*mOutEdgeModifyReqsWithAR(tid).range()*/){
				val target = list(tid).mEdgeModifyReqWithAR(i);
				val dstid = target.val1;	//inEdge's dst(dstid with ARM)
				val team = mDtoV.r(dstid);
				while(srcid < maxSrcid && workoff(srcid+1)<=i)
					srcid++;
				workdata(team)(index(team)++) = new Tuple3[Long,Long,E](
						dstid & EdgeProvider.req_NOINFO,
						mStoD(e.mStartSrcid+srcid) | (dstid & EdgeProvider.req_INFO),	//koko totemo ayashii
						target.val2);	//TODO: r de ii noka
				//this Tuple3 means: [inEdge's src(dstid), inEdge's dst(dstid,withARM), inEdge's value]
				//attention: StoD(as this place) => valid,  DtoS(as foreign place) => invalid!
			}
		});

		//diffInEdgeData
		var dataNum :Long = 0L;
		for(team in diec.range())	//Team range
			dataNum += diec(team);
		val died = new MemoryChunk[Tuple3[Long,Long,E]](dataNum);
		var dataIndex :Long = 0;
		for (team in 0..(numTeam-1))
		for (thread in threadRange){
			val src = diffInEdgeDataPerThread(thread)(team);
			MemoryChunk.copy(src, 0L, died, dataIndex, src.size());
			dataIndex += src.size();
		}
		assert (dataIndex == dataNum);
		
		//exchange differences
		val result = mTeam.alltoallv(died, diec).val1;
		diffInEdgeCountPerThread.del();
		diec.del();
		diffInEdgeDataPerThread.del();
		died.del();

		//---------- post process ( apply differences ) ----------
		
		//DtoS
		//foreach differences
		foreachVertexes(result.size(),(tid :Long, range :LongRange)=>{	//Irregular usage! DO NOT COPY this line!
			for(i in range)	//optimize? overwrite val1 directory
				result(i) = new Tuple3(mDtoS(result(i).val1),result(i).val2,result(i).val3);
		});
		
		//sort (optimize => sort order (srcid --> (subdivided)dstid))
		//by dstid
		Algorithm.maskedStableSortTupleKey2(result);
		//by srcid
		Algorithm.stableSortTupleKey1(result);
		
		//EdgeProvider no code wo sai riyou suru tame ni offset to reqs wo wazawaza tsukuru
		//offset
		val InEdgeModifyReqOffsets = new MemoryChunk[MemoryChunk[Long]](numThreads,
				(tid:Long) => new MemoryChunk[Long](list(tid).mEdgeModifyReqOffset.size()));
		//reqs
		val InEdgeModifyReqsWithAR = new MemoryChunk[GrowableMemory[Tuple2[Long,E]]](numThreads, 0, true);

		//kokokara updateInEdge yobu made ni inedgemodifyreqoffset to inedgemodifyreqwithar no seisei ni miss siteiru
		//copy to mInEdgeModify*
		foreachVertexes(numLocalVertexes,(tid :Long, vrange :LongRange)=>{
			val resrange = result.range();
			var start :Long = resrange.max + 1L;	//korede
			var end :Long = resrange.max;			//tsujitsuma ga au
			val e = list(tid);
			val reqoff = InEdgeModifyReqOffsets(tid);
			val reqs = InEdgeModifyReqsWithAR(tid);
			assert(vrange.min == e.mStartSrcid);
			
			//search index
			//optimize? lower_bound
			for(i in resrange)
				if(result(i).val1 >= vrange.min){
					start = i;
					break;
				}
			//optimize? upper_bound
			for(i in start..resrange.max)
				if(result(i).val1 > vrange.max){
					end = i-1L;
					break;
				}
			if(start>end){			//there is no diffInEdge at this tid
				reqs.setSize(0L);
				return;				//no need to run following process
			}else{
				//reqs initialize
				val size = end - start + 1L;
				reqs.setSize(size);	//hundle it like MemoryChunk
			}
			var reqsIndex :Long = 0L;
			val ssrc = e.mStartSrcid;		// == vrange.min
			var tsrcid :Long = ssrc - 1L;	//saisyo ni "tsrcid < result(i).val1" hantei wo saseru tame "-1L"
			for(i in start..end){
				//make offset
				while(tsrcid < result(i).val1/*==srcid*/){	//zenkai no val1 to ima no val1 ga tigatta ra offset no kawarime
					++tsrcid;
					reqoff(tsrcid - ssrc) = reqsIndex;
				}
				//make reqs
				reqs(reqsIndex++) = new Tuple2(result(i).val2,result(i).val3);	//[dstid withARM,value]
			}
			//offset ume
			++tsrcid;
			for(i in (tsrcid - ssrc)..(reqoff.size()-1L))
				reqoff(i) = reqsIndex;
			//aaa(result,tid,list,vrange,InEdgeModifyReqOffsets,InEdgeModifyReqsWithAR);
		});
	//	for(i in threadRange)
	//		Utils.debugPrintSparseMatrix(InEdgeModifyReqOffsets(i),InEdgeModifyReqsWithAR(i).raw(),0L);	//kono jiten de okashii !
		EdgeProvider.updateInEdge[V,E](mInEdge, list, mIds, InEdgeModifyReqOffsets, InEdgeModifyReqsWithAR);
		InEdgeModifyReqOffsets.del();
		InEdgeModifyReqsWithAR.del();
	}
	
	public def updateInEdge() {
		val numLocalVertexes = mIds.numberOfLocalVertexes();
		//@Ifdef("nofemo"){ mNeedsAllUpdateInEdge = true; }
		//TODO: naosu
		mNeedsAllUpdateInEdge = true;
		mNeedsAllUpdateInEdge = 0 < mTeam.allreduce[Int](mNeedsAllUpdateInEdge?1:0,Team.ADD);
		Console.OUT.println("in update inEdge! mNeedsAllUpdateInEdge:"+mNeedsAllUpdateInEdge);
		//TODO: zanteiteki teamNum jouken
		if(/*teamNum==1 ||*/ mNeedsAllUpdateInEdge){
			@Ifdef("PROF_XP") val mtimer = Config.get().profXPregel().timer(XP.MAIN_FRAME, 0);
			@Ifdef("PROF_XP") { mtimer.start(); }
			val numThreads = Runtime.NTHREADS;
			val mesComm = new MessageCommunicator[Long](mTeam, mIds, numThreads);
			
			val StoD = new OnedR.StoD(mIds, mTeam.base.role()(0));
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
						val mesBuf = UCCMessages(mesComm.mDtoV.r(id(i)));
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
			//sort mInEdge.vertexes
			Parallel.iter(0L..(numLocalVertexes-1L), (i :Long) => {
				Algorithm.sort(
						mInEdge.vertexes.subpart(
								mInEdge.offsets(i),
								mInEdge.offsets(i+1) - mInEdge.offsets(i)));
			});
			mesComm.mUCROffset = new MemoryChunk[Long]();
			mesComm.mUCRMessages = new MemoryChunk[Long]();
			mesComm.del();
			@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_UPDATEINEDGE); }
		}else{
		}
		
		//!!!!!kanarazu koko wo toosu!!!!!
		//TODO:atosyori
		/*for(i in mWDiffInDst.range()){
			mWDiffInDst(i).clear();
			mWDiffInSrcWithAR(i).clear();
		}*/
		mNeedsAllUpdateInEdge = false;
		//@Ifdef("nofemo"){ mNeedsAllUpdateInEdge = true; }
		
		//TODO: modosu
		mNeedsAllUpdateInEdge = true;
	}
	
	public def updateInEdgeWithValue() {E haszero} {
		@Ifdef("PROF_XP") val mtimer = Config.get().profXPregel().timer(XP.MAIN_FRAME, 0);
		@Ifdef("PROF_XP") { mtimer.start(); }
		val numThreads = Runtime.NTHREADS;
		val mesComm = new MessageCommunicator[Tuple2[Long, E]](mTeam, mIds, numThreads);
		val numLocalVertexes = mIds.numberOfLocalVertexes();
		val StoD = new OnedR.StoD(mIds, mTeam.base.role()(0));
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
					val mesBuf = UCCMessages(mesComm.mDtoV.r(id(i)));
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
			/*{A haszero }*/	//added
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
				recvStt(STT_VERTEX_MESSAGE) == 0L){
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
	
	// This method doesn't necessarilly split all works to all threads.
	// Use this method to initialize containers used in this method.
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
		
		val vctxs = new MemoryChunk[VertexContext[V, E, M, A]](numThreads);
		val localSrcids = new MemoryChunk[Long](numThreads);
		
		//val edgeProviderList = new MemoryChunk[EdgeProvider[E]](numThreads);
		foreachVertexes(numLocalVertexes, (tid :Long, r :LongRange) => {
		//	vctxs(tid) = new VertexContext[V, E, M, A](this, ectx, tid, r.min);
		//	edgeProviderList(tid) = vctxs(tid).mEdgeProvider;
			localSrcids(tid) = r.min;
		});
		
		//debugging
		// conpute taisyou no data ga sukunai baai foreachVertex ga subete no thread de hashiru toha kagiranai node
		{

			val mOutEdgeModifyReqOffsets = new MemoryChunk[MemoryChunk[Long]](numThreads);
			//for debug
			//honrai ha iranai hazu
			val tmp = new MemoryChunk[Long](numThreads);
			foreachVertexes(numLocalVertexes, (tid :Long, r :LongRange) => {
				// (contains count) + end index
				mOutEdgeModifyReqOffsets(tid) = new MemoryChunk[Long]((r.max -r.min +1L) +1L);
				tmp(tid) = 777L;
			});
			for(i in mOutEdgeModifyReqOffsets.range()){
				if(tmp(i) == 777L)
					continue;
				mOutEdgeModifyReqOffsets(i) = new MemoryChunk[Long](0);
			}
			val mOutEdgeModifyReqsWithAR = new MemoryChunk[GrowableMemory[Tuple2[Long,E]]](
					numThreads, (i :Long) => new GrowableMemory[Tuple2[Long,E]](0L));
			for(tid in 0..(numThreads-1)){
				vctxs(tid) = new VertexContext[V, E, M, A](
						this, ectx, tid,
						mOutEdgeModifyReqOffsets(tid),
						mOutEdgeModifyReqsWithAR(tid),
						localSrcids(tid));
			}
		}
		
		val edgeProviderList = new MemoryChunk[EdgeProvider[E]](numThreads as Long,
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

						if(ep.mEdgeChanged) ep.fixModifiedEdges(srcid);	//TODO: uncomment
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
		
			// delete existing (old) messages. (maybe)
			ectx.deleteMessages();
			
			// gather statistics
			for(th in 0..(numThreads-1)) {
				//first message process is here 
				ectx.sqweezeMessage(vctxs(th));
			}
			@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_SQWEEZMES); }
			
			// update out edges
			EdgeProvider.updateOutEdge[V,E](mOutEdge, edgeProviderList, mIds);
			// update in edges
			updateFewInEdge(edgeProviderList);
			// update messageCommunicator's inedge
			ectx.mInEdgesOffset = mInEdge.offsets;
			ectx.mInEdgesVertex = mInEdge.vertexes;
		//	ectx.mInEdgesMask = mInEdgesMask;		iranasou
			// 
			EdgeProvider.reInitializeEdgeProvider[E](edgeProviderList);
			
			
			//-----directionOptimization
			val numAllBCSCount = mTeam.allreduce[Long](ectx.mBCSInputCount, Team.ADD);
			if(0L < numAllBCSCount && numAllBCSCount  < (mIds.numberOfGlobalVertexes()/50)){	//TODO: modify /20
				val BCbmp=ectx.mBCCHasMessage;
				foreachVertexes(numLocalVertexes, (tid :Long, r :LongRange) => {
					val vc = vctxs(tid);
					for (dosrcid in r){
						if(BCbmp(dosrcid)){
							vc.mSrcid = dosrcid;
							val OEsId = vc.outEdgesId();
							val tempmes=ectx.mBCCMessages(dosrcid);
							for(eI in OEsId){
								vc.sendMessage(eI, tempmes);
							}
						}
					}
				});
				ectx.mBCCHasMessage.clear(false);
				ectx.mBCCMessages.del();
				ectx.mBCCMessages = new MemoryChunk[M](mIds.numberOfLocalVertexes());
				ectx.mBCSInputCount=0L;
			}
			//-----
			
			// aggregate
			val aggVal = (aggregator != null)
				? computeAggregate[A](mTeam, intermedAggregateValue, aggregateBuffer, aggregator)
				: Zero.get[A]();
				
			for(i in vctxs.range()) vctxs(i).mAggregatedValue = aggVal;
			statistics(STT_END_COUNT) = end(ss, aggVal) ? 1L : 0L;

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
