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

import x10.compiler.Ifdef;

import org.scalegraph.util.Algorithm;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.tuple.Tuple3;
import org.scalegraph.util.Parallel;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.util.Bitmap;
import org.scalegraph.Config;

import x10.compiler.Inline;

class EdgeProvider [E] /*{E haszero}*/{
	private static type XP = org.scalegraph.id.ProfilingID.XPregel;
	public static val ADDBIT :Long= (1L<<61);
	public static val MODBIT :Long= (2L<<61);
	private static val NOINFOBITMASK = ~(ADDBIT | MODBIT);
	
	//these contents are same to WorkerPlaceGtaph's
	var mOutOffset :MemoryChunk[Long];
	var mOutVertex :MemoryChunk[Long];
	var mOutValue :MemoryChunk[E];
	var mInOffset :MemoryChunk[Long];
	var mInVertex :MemoryChunk[Long];
	var mInValue :MemoryChunk[E];
	
	//edge modify requests
	var mEdgeModifyReqOffset :MemoryChunk[Long];
	var mEdgeModifyReqWithAR :GrowableMemory[Tuple2[Long,E]];
//	val mGetModReqIdx :(Long) => Long;								//shortcut to access valid value

	//the buffer used to return Edge info for User when called getEdgeId/Value
	val mGetEdgeBuf :GrowableMemory[Long] = new GrowableMemory[Long](0L);
	//TODO: taiou
	var mEdgeChanged:Boolean;
	var mReqEdgeOptimized:Boolean;
	var mStartSrcid :Long;
	
	//called from each threads
	def this(
			outEdge :GraphEdge[E],
			inEdge :GraphEdge[E],
			reqOff :MemoryChunk[Long],
			req :GrowableMemory[Tuple2[Long,E]],
			startSrcid :Long) {
		mOutOffset = outEdge.offsets;
		mOutVertex = outEdge.vertexes;
		mOutValue = outEdge.value;
		mInOffset = inEdge.offsets;
		mInVertex = inEdge.vertexes;
		mInValue = inEdge.value;
		mEdgeModifyReqOffset = reqOff;	//TODO: update in/outedge de update sareruyou ni suru
		mEdgeModifyReqWithAR = req;
		mStartSrcid = startSrcid;
//		mGetModReqIdx = (l:Long) => l-reqOff(startSrcid);
		mEdgeChanged = false;
		mReqEdgeOptimized = false;
	}
	
	//call this method after nedgeUpdate
	static def reInitializeEdgeProvider[E](list :MemoryChunk[EdgeProvider[E]]){
		val numThreads :Int = Runtime.NTHREADS;
		Parallel.iter(0..(numThreads-1), (tid:Int)=> {
			val e = list(tid);
			//TODO: value initialize
			for(i in e.mEdgeModifyReqOffset.range()){
				e.mEdgeModifyReqOffset(i) = 0L;
			}
			e.mEdgeModifyReqWithAR.setSize(0);
			e.mEdgeChanged = false;
			e.mReqEdgeOptimized = false;
		});
	}
	
	//called from top thread
	//call this method before inedgeUpdate
	static def updateOutEdge[V,E](outEdge :GraphEdge[E], list :MemoryChunk[EdgeProvider[E]], ids :IdStruct) /*{E haszero}*/ {
		@Ifdef("PROF_XP") val mtimer = Config.get().profXPregel().timer(XP.MAIN_FRAME, 0);
		{
			var changed :Boolean = false;
			for(i in list.range()) {
				if(list(i).mEdgeChanged) {
					changed = true;
					break;
				}
			}
			if(!changed)
				return;
		}
		val numThreads = Runtime.NTHREADS;
		val numVertexes = ids.numberOfLocalVertexes();
		val offsetPerThread = new MemoryChunk[Long](numThreads + 1,0,true);

		val outOffset = outEdge.offsets;
		val outVertex = outEdge.vertexes;
		val outValue = outEdge.value;
		val newOffset = new MemoryChunk[Long](numVertexes + 1,0,false); //ensure not to be 0 initialized
		
		//TODO: req* no jikadataki wo clojure keiyu ni suru !!!
		
		//optimize & calc newOffset's diff (== newVertex's index diff )
		newOffset(0) = 0L;
		WorkerPlaceGraph.foreachVertexes(numVertexes, (tid :Long, r :LongRange) => {
			val e = list(tid);
			// optimize whole ReqEdge in e
			//TODO: for nai ni tenkai
			e.optimizeReqEdge(r);
			//calc newOffset
			var tmpoffset:Long = 0L;
			for(srcid in r) {
				val orgn_length = outOffset(srcid + 1) - outOffset(srcid);				//moto no length
				newOffset(srcid+1) = orgn_length + e.calcEdgeNumDifferential(srcid);	//A/R length diff
				//count
				tmpoffset += newOffset(srcid+1);
			}
			offsetPerThread(tid + 1) += tmpoffset;
		});
		//convert count to offset
		for(i in 0..(numThreads-1)) {
			offsetPerThread(i + 1) += offsetPerThread(i);
		}
		//calc new offset's value (== newVertex's index )
		WorkerPlaceGraph.foreachVertexes(numVertexes, (tid :Long, r :LongRange) => {
			newOffset(r.min) = offsetPerThread(tid);	//not "+="
			for(srcid in (r.min)..(r.max-1)) {
				newOffset(srcid+1) += newOffset(srcid);
			}
		});
		newOffset(numVertexes) = offsetPerThread(numThreads);
		// TODO: kokomade tashikameta
		val newNumEdgesNum = offsetPerThread(numThreads);
		val newVertex = new MemoryChunk[Long](newNumEdgesNum);
		val newValue = new MemoryChunk[E](newNumEdgesNum);
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_UPDATE_OUT_EDGES_1); }

		WorkerPlaceGraph.foreachVertexes(numVertexes, (tid :Long, r :LongRange) => {
			val e = list(tid);
			for(srcid in r) {
				//vertex goto ni update
				val newlen=newOffset(srcid+1)-newOffset(srcid);
				val oldlen=outOffset(srcid+1)-outOffset(srcid);
				e.updateOutEdge_temp(
					newVertex.subpart(newOffset(srcid), newlen),
					newValue.subpart(newOffset(srcid), newlen),
					outVertex.subpart(outOffset(srcid), oldlen),
					outValue.subpart(outOffset(srcid), oldlen),
					srcid
				);
			}
			// kore hitsuyou
			e.mOutOffset = newOffset;
			e.mOutVertex = newVertex;
			e.mOutValue = newValue;
			for(i in e.mEdgeModifyReqOffset.range())
				e.mEdgeModifyReqOffset(i) = e.mEdgeModifyReqWithAR.size();
			//	e.mEdgeModifyReqWithAR = xx; <- henkou nashi
			//TODO: amarinimo nagasugi tara reset shite mNeedsAllUpdateInEdge flag toka tateru
			assert newOffset(r.max + 1) == offsetPerThread(tid + 1);
		});
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_UPDATE_OUT_EDGES_2); }
		outOffset.del();
		outVertex.del();
		outValue.del();
		outEdge.offsets = newOffset;
		outEdge.vertexes = newVertex;
		outEdge.value = newValue;
		//moved to reinitialize
		/*for(tid in 0..(numThreads-1)) {
			val e = list(tid);
			//TODO: value initialize
			
			e.mEdgeChanged = false;
		}*/
	}

	def updateOutEdge_temp(
			newEdge:MemoryChunk[Long], 
			newVal:MemoryChunk[E], 
			oldEdge:MemoryChunk[Long], 
			oldVal:MemoryChunk[E], 
			srcid:Long) {
		val localsrcid = srcid - mStartSrcid;
		val start = mEdgeModifyReqOffset(localsrcid);// not mEdgeModifyReqOffset(srcid)
		val length = mEdgeModifyReqOffset(localsrcid+1) - start;
		val req = mEdgeModifyReqWithAR.backingStore().subpart(start, length);
		var oldEdgeIndex :Long = 0L;
		var newEdgeIndex :Long = 0L;
		//yarukoto: oldEdge to req wo merge
		for(i in 0..(length-1)){
			val reqId = req(i).val1 & NOINFOBITMASK;
			val reqValue = req(i).val2;
			//judge ARM
			val reqARM = ARM(req(i).val1);
			
			if(reqARM == 0)
				continue;	//no operation is required
			
			//copy unrelated edge
			{
				var copyLength :Long = 0L;
				while((oldEdge(oldEdgeIndex+copyLength)&NOINFOBITMASK) < reqId)
					++copyLength;
				MemoryChunk.copy(oldEdge,oldEdgeIndex,newEdge,newEdgeIndex,copyLength);
				MemoryChunk.copy(oldVal,oldEdgeIndex,newVal,newEdgeIndex,copyLength);
				oldEdgeIndex += copyLength;
				newEdgeIndex += copyLength;
			}
			//switch
			//merge
			switch(reqARM){
			case 0:
				break;
			case 1:	//add
				newEdge(newEdgeIndex) = reqId;
				newVal(newEdgeIndex) = reqValue;
				++newEdgeIndex;
				break;
			case 2:	//modify
				assert(newEdge(newEdgeIndex) == reqId);
				newVal(newEdgeIndex) = reqValue;
				break;
			default:
				throw new Exception("invalid operation: updateOutEdge_temp");
			}
		}
		//copy rest array
		val rest = newEdge.size() - newEdgeIndex;
		assert(rest == oldEdge.size() - oldEdgeIndex);
		MemoryChunk.copy(oldEdge,oldEdgeIndex,newEdge,newEdgeIndex,rest);
		MemoryChunk.copy(oldVal,oldEdgeIndex,newVal,newEdgeIndex,rest);
	}
	
	/**
	 * call it after optimizeReqEdge();
	 */
	def calcEdgeNumDifferential(srcid :Long) :Long{
		val localsrcid = srcid - mStartSrcid;
		val start = mEdgeModifyReqOffset(localsrcid);// not mEdgeModifyReqOffset(srcid)
		val end = mEdgeModifyReqOffset(localsrcid+1) - 1;
		var difAR:Long = 0L;
		for(i in start..end){
			switch(ARM(mEdgeModifyReqWithAR(i).val1)){
			case 0:	//rmv
				--difAR;
				break;
			case 1:	//add
				++difAR;
				break;
			case 2:	//mod
				break;
			default:
				throw new Exception("invalid operation: calcEdgeNumDifferential");
			}
		}
		return difAR;
	}
	
	def optimizeReqEdge(srcid :LongRange){	//whole array (hayai)
		var dif :Long = 0L;
		for(si in (srcid.min)..(srcid.max-1)){
			dif = optimizeReqEdge(si, dif, false);
		}
		optimizeReqEdge(srcid.max, dif, false/*true*/);
	}
	def optimizeReqEdge(srcid :Long){
		optimizeReqEdge(srcid, 0L, false/*true*/);
	}
	
	/**
	 * sort and reduce reqEdges
	 * @param srcid target vertex's srcid
	 * @param modDiffReqStartSavingOffset the offset difference where to start saving optimized modreq
	 * @param reduceBottom when it param is true, use memcpy to reduce bottom empty space, and modify next offset 
	 * @return next modDiffReqStartSavingOffset
	 */
	private def optimizeReqEdge(srcid :Long, modDiffReqStartSavingOffset :Long, reduceBottom :Boolean) :Long{
		val localsrcid = srcid - mStartSrcid;
		val reqStartIdx = mEdgeModifyReqOffset(localsrcid);// not mEdgeModifyReqOffset(srcid)
		mEdgeModifyReqOffset(localsrcid) += modDiffReqStartSavingOffset;
		val reqEndIdx = mEdgeModifyReqOffset(localsrcid+1) - 1;
		val outend = mOutOffset(srcid+1) - 1;
		Algorithm.maskedStableSortTupleKey1(mEdgeModifyReqWithAR.backingStore().subpart(reqStartIdx, reqEndIdx - reqStartIdx + 1));
		
		var reqSaveIdx :Long = mEdgeModifyReqOffset(localsrcid);	//reqSaveIdx : fuyasu
		var outIdx :Long = mOutOffset(srcid);				//outIdx : mitukatta ka douka(fuyasanai)
		for(reqIdx in reqStartIdx..reqEndIdx){					//reqIdx : katteni fueru
			// TODO: end kara yaru
			val targetid = mEdgeModifyReqWithAR(reqIdx).val1;
			if(reqIdx!=reqEndIdx && 
					(targetid&NOINFOBITMASK) == (mEdgeModifyReqWithAR(reqIdx+1).val1&NOINFOBITMASK))	//TODO: reqIdx!=reqEndIdx  iru kedo..
				continue;	//tyofuku jokyo
			//TODO: vertex zentai wo miru hitsuyou ha nai!
			//TODO find ni suru
			val search = Algorithm.linearSearch(mOutVertex, outIdx..outend, targetid&NOINFOBITMASK);
			if(search.val1){
				outIdx = search.val2;
				//out ni atta
				/*
				switch(ARM(targetid)){
				case 0://rmv
					//rmv no mama ireru
					mEdgeModifyReqWithAR(reqSaveIdx++) = mEdgeModifyReqWithAR(reqIdx);
					break;
				case 1://add
					mEdgeModifyReqWithAR(reqSaveIdx++) = 
						new Tuple2(mEdgeModifyReqWithAR(reqIdx).val1 & ~ADDBIT | MODBIT,
								mEdgeModifyReqWithAR(reqIdx).val2);
					break;
				default://mod
					//nikai ijou yobareta ra aru kanousei ga aru
					mEdgeModifyReqWithAR(reqSaveIdx++) = mEdgeModifyReqWithAR(reqIdx);
					break;
				}
				*/
				if(ARM(targetid) == 1) {
					mEdgeModifyReqWithAR(reqSaveIdx++) = 
						new Tuple2(mEdgeModifyReqWithAR(reqIdx).val1 & ~ADDBIT | MODBIT,
								mEdgeModifyReqWithAR(reqIdx).val2);
				}
				else {
					mEdgeModifyReqWithAR(reqSaveIdx++) = mEdgeModifyReqWithAR(reqIdx);
				}
			}else{
				//out ni nakatta
				/*
				switch(ARM(targetid)){
				case 0://rmv
					break;
				case 1://add
					mEdgeModifyReqWithAR(reqSaveIdx++) = mEdgeModifyReqWithAR(reqIdx);
					break;
				default://mod
					mEdgeModifyReqWithAR(reqSaveIdx++) = mEdgeModifyReqWithAR(reqIdx);
					break;
				}*/
				if(ARM(targetid) != 0){
					mEdgeModifyReqWithAR(reqSaveIdx++) = mEdgeModifyReqWithAR(reqIdx);
				}
			}
		}
		if(reduceBottom)
			throw new Exception("not implemented exception");
		/* kanarazu genzai saigo no edge de yobareru node iranai
		if(reduceBottom){
			//memmove wo tsukatte iru rashii
			MemoryChunk.copy(
					mEdgeModifyReqWithAR.backingStore(),
					reqEndIdx + 1,
					mEdgeModifyReqWithAR.backingStore(),
					reqSaveIdx,
					mEdgeModifyReqWithAR.backingStore().size() - (reqEndIdx + 1));
			mEdgeModifyReqWithAR.setSize(mEdgeModifyReqWithAR.backingStore().size() + reqSaveIdx - (reqEndIdx + 1));
			mEdgeModifyReqOffset(mGetModReqOffIdx(srcid+1)) = reqSaveIdx;
		}*/
		return reqSaveIdx - mEdgeModifyReqOffset(localsrcid+1);
	}
/*	private static val RMVFRAG :byte = 0;
	private static val ADDFRAG :byte = 1;
	private static val MODFRAG :byte = 2;*/
	private @Inline static def ARM(l:Long) :Int{
		return ((l & (ADDBIT | MODBIT)) >> 61) as Int;
	}
	
	//return current edges id list
	//if this method is called after edge modify, process may be slow
	//it is recommended to get edgelist before modifying or cache modifies on local
	def outEdges(srcid :Long) :Tuple2[MemoryChunk[Long],MemoryChunk[E]] {
		optimizeReqEdge(srcid);
		val len = mOutOffset(srcid + 1) - mOutOffset(srcid);
		val newEdge = new MemoryChunk[Long](len + calcEdgeNumDifferential(srcid));
		val newVal = new MemoryChunk[E](len + calcEdgeNumDifferential(srcid));	//unko- => buffer tsukao
		updateOutEdge_temp(
				newEdge,
				newVal,
				mOutVertex.subpart(mOutOffset(srcid),len),
				mOutValue.subpart(mOutOffset(srcid),len),
				srcid);
		return new Tuple2[MemoryChunk[Long],MemoryChunk[E]](newEdge,newVal);
	}
	
	def outEdgesId(srcid :Long) :MemoryChunk[Long]{
		return outEdges(srcid).get1();
	}

	def outEdgesValue(srcid :Long) :MemoryChunk[E]{
		return outEdges(srcid).get2();
	}

	def inEdgesId(srcid :Long) {
		val start = mInOffset(srcid);
		val length = mInOffset(srcid + 1) - start;
		return mInVertex.subpart(start, length);
	}

	def inEdgesValue(srcid :Long) {
		val start = mInOffset(srcid);
		val length = mInOffset(srcid + 1) - start;
		return mInValue.subpart(start, length);
	}
	
	def setOutEdges(srcid :Long,id :MemoryChunk[Long], value :MemoryChunk[E]) {
		clearOutEdges(srcid);
		addOutEdges(id,value);
		mEdgeChanged = true;
	}
	
	def clearOutEdges(srcid :Long) {
		// TODO:offset ga kono jiten de yuukou ka shiraberu
		mEdgeModifyReqWithAR.setSize(mEdgeModifyReqOffset(srcid));	//delete requests
		removeOutEdges(outEdgesId(srcid));
		mEdgeChanged = true;
	}
	
	def removeOutEdge(id :Long,value:E) {
		if(mOutVertex.size() == 0L && mEdgeModifyReqWithAR.size()==0L)
			return;
	//	val a = Zero.get[V]();
		mEdgeModifyReqWithAR.add(
				new Tuple2[Long,E](
					id,
					mEdgeModifyReqWithAR(0).get2()));
		mEdgeChanged = true;
		//TODO: use zero.get before adding, V haszero
	}
	
	def removeOutEdges(id :MemoryChunk[Long]) {
		if(mOutVertex.size() == 0L && mEdgeModifyReqWithAR.size()==0L)
			return;
		val defV = mEdgeModifyReqWithAR(0).get2();
		val mem = new MemoryChunk[Tuple2[Long,E]](id.size(),0,false);	//ensure not to be 0 initialized
		for(i in 0L..(id.size()-1L)){
			mem(i) = new Tuple2[Long,E](id(i), defV);
		}
		mEdgeModifyReqWithAR.add(mem);
		mEdgeChanged = true;
		//TODO: use zero.get before adding, V haszero
	}

	def addOutEdge(id :Long, value :E) {
		mEdgeModifyReqWithAR.add(new Tuple2[Long,E](id & ADDBIT,value));
		mEdgeChanged = true;
	}

	def addOutEdges(id :MemoryChunk[Long], value :MemoryChunk[E]) {
		assert(id.size() == value.size());
		val mem = new MemoryChunk[Tuple2[Long,E]](id.size(),0,false);	//ensure not to be 0 initialized
		for(i in 0L..(id.size()-1L)){
			mem(i) = new Tuple2(id(i) & ADDBIT,value(i));
		}
		mEdgeModifyReqWithAR.add(mem);	//contains grow()
		mEdgeChanged = true;
	}
	
	//called after each vertex's compute method
	//this process is affect later compute
	def fixModifiedEdges(srcid :Long) {
		val localsrcid = srcid - mStartSrcid;
		mEdgeModifyReqOffset(localsrcid+1) = mEdgeModifyReqWithAR.size();
	}
}