/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
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
import org.scalegraph.util.Utils;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.util.Bitmap;
import org.scalegraph.Config;

import x10.compiler.Inline;

/** method parameter "srcid" is always raw srcid. */

class EdgeProvider [E] /*{ E haszero }*/{
	private static type XP = org.scalegraph.id.ProfilingID.XPregel;
	private static val reqshift = 60;	//related to NativeAlgorithm/MaskedK1LessThan
	public static val req_RMV :Long	=  (0L<<reqshift);	//use |
	public static val req_ADD :Long	=  (1L<<reqshift);	//use |
	public static val req_MOD :Long	=  (2L<<reqshift);	//use |
	public static val req_INFO :Long	=  (7L<<reqshift);	//use &
	public static val req_NOINFO :Long	= ~(7L<<reqshift);	//use &
	
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

	//the buffer used to return Edge info for User when called getEdgeId/Value
	val mGetEdgeBuf :GrowableMemory[Long] = new GrowableMemory[Long](0L);
	val mGetValBuf :GrowableMemory[E] = new GrowableMemory[E](0L);
	var mEdgeChanged:Boolean;
	//TODO: apply this flag
//	var mReqEdgeOptimized:Boolean;
	public val mStartSrcid :Long;
	
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
		mEdgeChanged = false;
//		mReqEdgeOptimized = false;
	}
	
	// call this method after inedgeUpdate
	static def reInitializeEdgeProvider[E](list :MemoryChunk[EdgeProvider[E]]) /*{ E haszero }*/{
		val numThreads :Int = Runtime.NTHREADS;
		Parallel.iter(0..(numThreads-1), (tid:Int)=> {
			val e = list(tid);
			//zero reset
			for(i in e.mEdgeModifyReqOffset.range()){
				e.mEdgeModifyReqOffset(i) = 0L;
			}
			e.mEdgeModifyReqWithAR.setSize(0L);
			e.mEdgeChanged = false;
//			e.mReqEdgeOptimized = false;
		});
	}
	
	//called from top thread
	//call this method before inedgeUpdate
	static def updateOutEdge[V,E](outEdge :GraphEdge[E], list :MemoryChunk[EdgeProvider[E]], ids :IdStruct) /*{ V haszero, E haszero }*/{
		@Ifdef("PROF_XP") val mtimer = Config.get().profXPregel().timer(XP.MAIN_FRAME, 0);		
		{
			//check change
			var changed :Boolean = false;
			for(i in list.range()) {
				Utils.debugPrintln("updateOutEdge",""+list(i).mEdgeChanged);
				if(list(i).mEdgeChanged) {
					changed = true;
					break;
				}
			}
			if(!changed) {
				return;
			}
		}
		
		val numThreads = Runtime.NTHREADS;
		val numVertexes = ids.numberOfLocalVertexes();
		val offsetPerThread = MemoryChunk.make[Long](numThreads + 1L, 0, true);
		val outOffset = outEdge.offsets;
		val outVertex = outEdge.vertexes;
		val outValue = outEdge.value;
		val newOffset = MemoryChunk.make[Long](numVertexes + 1L, 0, false); //ensure not to be 0 initialized
		
		//optimize & calc newOffset's diff (== newVertex's index diff )
		newOffset(0) = 0L;
		WorkerPlaceGraph.foreachVertexes(numVertexes, (tid :Long, r :LongRange) => {
			if(r.min > r.max) {
				return;
			}
			
			val e = list(tid);
			
			// // optimize whole ReqEdge in e
			// // calcEdgeNumDifferential de tsugi no index ga hitsuyou nanode ikki ni compute
			e.optimizeReqEdge(r);

			//calc newOffset
			var count :Long = 0L;
			for (srcid in r) {
				val oldLength = outOffset(srcid + 1L) - outOffset(srcid);			//moto no length
				newOffset(srcid + 1L) = oldLength + e.calcEdgeNumDifferential(srcid);	//A/R length diff				
				count += newOffset(srcid + 1L);
			}
			offsetPerThread(tid + 1L) += count;
		});
		
		// here, offsetPerThread contains NOT offsets but counts. Convert each of them to offset
		for(i in 0..(numThreads-1)) {
			offsetPerThread(i + 1L) += offsetPerThread(i);
		}
		
		// here, newOffset contains NOT offsets but counts. Convert each of them to offset
		// calc new offset's value (== newVertex's index )
		WorkerPlaceGraph.foreachVertexes(numVertexes, (tid :Long, r :LongRange) => {
			if(r.min > r.max) {
				return;
			}
			newOffset(r.min) = offsetPerThread(tid);	//not "+="
			for(srcid in (r.min)..(r.max - 1L)) {
				newOffset(srcid + 1L) += newOffset(srcid);
			}
		});
		newOffset(numVertexes) = offsetPerThread(numThreads);
				
		val newNumEdges = offsetPerThread(numThreads);
		val newVertex = MemoryChunk.make[Long](newNumEdges);
		val newValue = MemoryChunk.make[E](newNumEdges);
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_UPDATE_OUT_EDGES_1); }

		WorkerPlaceGraph.foreachVertexes(numVertexes, (tid :Long, r :LongRange) => {
			if(r.min > r.max) {
				return;
			}
			val e = list(tid);
			
			//update each vertex
			for(srcid in r) {
				val newlen = newOffset(srcid + 1L) - newOffset(srcid);
				val oldlen = outOffset(srcid + 1L) - outOffset(srcid);
				e.updateOutEdge_temp(
					newVertex.subpart(newOffset(srcid), newlen),
					newValue.subpart(newOffset(srcid), newlen),
					outVertex.subpart(outOffset(srcid), oldlen),
					outValue.subpart(outOffset(srcid), oldlen),
					srcid
				);
			}
			
			// renew edgeProvider
			e.mOutOffset = newOffset;
			e.mOutVertex = newVertex;
			e.mOutValue = newValue;
			
			assert(newOffset(r.max + 1L) == offsetPerThread(tid + 1L));
		});
		
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_UPDATE_OUT_EDGES_2); }
		
		outOffset.del();
		outVertex.del();
		outValue.del();
		outEdge.offsets = newOffset;
		outEdge.vertexes = newVertex;
		outEdge.value = newValue;
	}

	def updateOutEdge_temp(
			newEdge:MemoryChunk[Long], 
			newVal:MemoryChunk[E], 
			oldEdge:MemoryChunk[Long], 
			oldVal:MemoryChunk[E], 
			srcid:Long) {
		val localsrcid = srcid - mStartSrcid;
		val start = mEdgeModifyReqOffset(localsrcid);	// not mEdgeModifyReqOffset(srcid)
		val length = mEdgeModifyReqOffset(localsrcid + 1L) - start;		
		val req = mEdgeModifyReqWithAR.backingStore().subpart(start, length);
		var oldEdgeIndex :Long = 0L;
		var newEdgeIndex :Long = 0L;
		
		// merge
		for(i in 0L..(length-1L)){
			val reqId = req(i).val1 & req_NOINFO;
			val reqValue = req(i).val2;
			val reqARM = ARM(req(i).val1);
			
			//copy unrelated edge
			{
				var copyLength :Long = 0L;
				//TODO: req_NOINFO hitsuyou?
				//array bound exception taisaku no tame, taisyou no temae made copy
				val oldlen = oldEdge.size();
				val newlen = newEdge.size();
				var oldtarget :Long = oldEdgeIndex + copyLength;
				var newtarget :Long = newEdgeIndex + copyLength;
				//optimize: syounari ni naru hou dake < maxlen mireba ii? jouken motto kanryakuka
				while(oldtarget < oldlen && newtarget < newlen &&
						(oldEdge(oldtarget) & req_NOINFO) < reqId){
					newEdge(newtarget) = oldEdge(oldtarget);
					newVal(newtarget) = oldVal(oldtarget);
					copyLength++;
					oldtarget = oldEdgeIndex + copyLength;
					newtarget = newEdgeIndex + copyLength;
				}
				//MemoryChunk.copy(oldEdge,oldEdgeIndex,newEdge,newEdgeIndex,copyLength);
				//MemoryChunk.copy(oldVal,oldEdgeIndex,newVal,newEdgeIndex,copyLength);
				oldEdgeIndex += copyLength;
				newEdgeIndex += copyLength;
			}
			
			// switch
			// merge
			switch(reqARM){
			case 0:	// remove
				++oldEdgeIndex;
				break;
			case 1:	// add
				newEdge(newEdgeIndex) = reqId;
				newVal(newEdgeIndex) = reqValue;
				++newEdgeIndex;
				break;
			case 2:	//modify
				assert(oldEdge(oldEdgeIndex) == reqId);
			//	newEdge(newEdgeIndex) = reqId;
				newVal(newEdgeIndex) = reqValue;
				++oldEdgeIndex;
				++newEdgeIndex;
				break;
			default:
				throw new Exception("invalid operation: updateOutEdge_temp");
			}
		}
		
		//copy rest array
		val rest = newEdge.size() - newEdgeIndex;
		assert(rest == oldEdge.size() - oldEdgeIndex);
		// assert(rest >= 0);
		// if (rest < 0 || oldEdgeIndex < 0 || newEdgeIndex < 0) {
		// 	throw new Exception("negative : in updateOutEdge_temp " + rest + ", " + oldEdgeIndex + ", " + newEdgeIndex + ", " + newEdge.size() + ", " + newVal.size());
		// }
		MemoryChunk.copy(oldEdge, oldEdgeIndex, newEdge, newEdgeIndex, rest);
		MemoryChunk.copy(oldVal, oldEdgeIndex, newVal, newEdgeIndex, rest);
	}
	
	/**
	 * call it after optimizeReqEdge();
	 */
	def calcEdgeNumDifferential(srcid :Long) :Long{
		val localsrcid = srcid - mStartSrcid;
		val start = mEdgeModifyReqOffset(localsrcid);// not mEdgeModifyReqOffset(srcid)
		val end = mEdgeModifyReqOffset(localsrcid + 1L) - 1L;
				
		val count = MemoryChunk.make[Long](3, 0, true);
		for(i in start..end) ++count(ARM(mEdgeModifyReqWithAR(i).val1));
				
		return count(1) - count(0);
	}
	
	def optimizeReqEdge(srcid :LongRange){
		var dif :Long = 0L;
		
		if (srcid.min <= srcid.max) {
			for(si in (srcid.min)..(srcid.max-1L)){
				dif = optimizeReqEdge(si, dif, false);
			}
			assert(srcid.max >= mStartSrcid);
			optimizeReqEdge(srcid.max, dif, true);
		}
	}
	
	def optimizeReqEdge(srcid :Long){
		optimizeReqEdge(srcid, 0L, true);
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
		val reqStartIdx = mEdgeModifyReqOffset(localsrcid);	//not mEdgeModifyReqOffset(srcid)
		mEdgeModifyReqOffset(localsrcid) += modDiffReqStartSavingOffset;
		val reqEndIdx = mEdgeModifyReqOffset(localsrcid+1L) - 1L;
		val outend = mOutOffset(srcid + 1L) - 1L;
		
		assert(reqEndIdx - reqStartIdx + 1 >= 0);
		
		Algorithm.maskedStableSortTupleKey1(mEdgeModifyReqWithAR.backingStore().subpart(reqStartIdx, reqEndIdx - reqStartIdx + 1));
		
		var reqSaveIdx :Long = mEdgeModifyReqOffset(localsrcid);
		var outIdx :Long = mOutOffset(srcid);
		for(reqIdx in reqStartIdx..reqEndIdx){
			val targetid = mEdgeModifyReqWithAR(reqIdx).val1;
			if(reqIdx!=reqEndIdx && 
					((targetid&req_NOINFO) == (mEdgeModifyReqWithAR(reqIdx+1).val1&req_NOINFO)))	// optimize:reqIdx!=reqEndIdx  iru kedo..
				continue;	//tyofuku jokyo
			//TODO: vertex zentai wo miru hitsuyou ha nai!
			//TODO: find ni suru
			val search = Algorithm.linearSearch(mOutVertex, outIdx..outend, targetid & req_NOINFO);
			if(search.val1){
				outIdx = search.val2 + 1L;
				//exist in mOutVertex
				/*
				switch(ARM(targetid)){
				case 0://rmv
					//rmv no mama ireru
					mEdgeModifyReqWithAR(reqSaveIdx++) = mEdgeModifyReqWithAR(reqIdx);
					break;
				case 1://add
					mEdgeModifyReqWithAR(reqSaveIdx++) = 
						new Tuple2(mEdgeModifyReqWithAR(reqIdx).val1 & ~req_ADD | req_MOD,
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
						new Tuple2((mEdgeModifyReqWithAR(reqIdx).val1 & req_NOINFO/*~req_ADD*/) | req_MOD,
								mEdgeModifyReqWithAR(reqIdx).val2);
				}
				else {
					mEdgeModifyReqWithAR(reqSaveIdx++) = mEdgeModifyReqWithAR(reqIdx);
				}
			}else{
				//not exist in mOutVertex
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
		
		if(reduceBottom){
			//no need to move mEdgeModifyReqWithAR contents because when reduceBottom is true, reqSaveIdx points end of contents.
			/*MemoryChunk.copy(	//memmove
					mEdgeModifyReqWithAR.backingStore(),
					reqEndIdx + 1,
					mEdgeModifyReqWithAR.backingStore(),
					reqSaveIdx,
					mEdgeModifyReqWithAR.backingStore().size() - (reqEndIdx + 1));
			mEdgeModifyReqWithAR.setSize(mEdgeModifyReqWithAR.backingStore().size() + reqSaveIdx - (reqEndIdx + 1));*/
			
			mEdgeModifyReqWithAR.setSize(reqSaveIdx);
			mEdgeModifyReqOffset(localsrcid + 1L) = reqSaveIdx;
		}
		return reqSaveIdx - mEdgeModifyReqOffset(localsrcid+1L);
	}
	
/*	private static val RMVFRAG :byte = 0;
	private static val ADDFRAG :byte = 1;
	private static val MODFRAG :byte = 2;*/
	private @Inline static def ARM(l:Long) :Int {
		return ((l & req_INFO) >> reqshift) as Int;
	}
	
	// return current edges id list
	// if this method is called after edge modify, process may be slow
	// it is recommended to get edgelist before modifying, or cache modifies on local
	def outEdges(srcid :Long) :Tuple2[MemoryChunk[Long], MemoryChunk[E]] {
		val len = mOutOffset(srcid + 1L) - mOutOffset(srcid);
		if (mEdgeChanged) {			
			fixModifiedEdges(srcid);
			// optimizeReqEdge(srcid);
			val lenWithDiff = len + calcEdgeNumDifferential(srcid);
			
			mGetEdgeBuf.setSize(lenWithDiff);	//buffer
			mGetValBuf.setSize(lenWithDiff);
			updateOutEdge_temp(
					mGetEdgeBuf.raw(),
					mGetValBuf.raw(),
					mOutVertex.subpart(mOutOffset(srcid), len),
					mOutValue.subpart(mOutOffset(srcid), len),
					srcid);
			return new Tuple2[MemoryChunk[Long],MemoryChunk[E]](mGetEdgeBuf.raw(),mGetValBuf.raw());
		} else {
			return new Tuple2[MemoryChunk[Long],MemoryChunk[E]](
					mOutVertex.subpart(mOutOffset(srcid), len),
					mOutValue.subpart(mOutOffset(srcid), len));
		}
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
		val length = mInOffset(srcid + 1L) - start;
		return mInValue.subpart(start, length);
	}
	
	// edge modifications(add, remove, modify)
	
	def setOutEdges(srcid :Long, id :MemoryChunk[Long], value :MemoryChunk[E]) {
		clearOutEdges(srcid);
		addOutEdges(id, value);
		mEdgeChanged = true;
	}
	
	def clearOutEdges(srcid :Long) {
		val localsrcid = srcid - mStartSrcid;
		
		mEdgeModifyReqWithAR.setSize(mEdgeModifyReqOffset(localsrcid));	// delete all requests
		removeOutEdges(outEdgesId(srcid));
		mEdgeChanged = true;
	}
	
	def removeOutEdge(id :Long) {
		val defV = Utils.getDummyZeroValue[E]();
		mEdgeModifyReqWithAR.add(new Tuple2[Long,E](id,defV));
		mEdgeChanged = true;
	}
	
	def removeOutEdges(id :MemoryChunk[Long]) {
		val defV = Utils.getDummyZeroValue[E]();
		for (i in id.range()) {
			mEdgeModifyReqWithAR.add(new Tuple2[Long,E](id(i), defV));
		}
		mEdgeChanged = true;
	}

	def addOutEdge(id :Long, value :E) {
		mEdgeModifyReqWithAR.add(new Tuple2[Long,E](id | req_ADD,value));
		mEdgeChanged = true;
	}

	def addOutEdges(id :MemoryChunk[Long], value :MemoryChunk[E]) {
		assert(id.size() == value.size());
		for(i in id.range()){
			mEdgeModifyReqWithAR.add(new Tuple2[Long,E](id(i) | req_ADD, value(i)));
		}
		mEdgeChanged = true;
	}
	
	def modifyOutEdge(id :Long, value :E) {
		mEdgeModifyReqWithAR.add(new Tuple2[Long,E](id | req_MOD, value));
		mEdgeChanged = true;
	}

	def modifyOutEdges(id :MemoryChunk[Long], value :MemoryChunk[E]) {
		assert(id.size() == value.size());
		for(i in id.range()){
			mEdgeModifyReqWithAR.add(new Tuple2[Long,E](id(i) | req_MOD, value(i)));
		}
		mEdgeChanged = true;
	}
	
	// called after each vertex's compute method
	// this process is affect later compute
	def fixModifiedEdges(srcid :Long) {
		val localsrcid = srcid - mStartSrcid;
		mEdgeModifyReqOffset(localsrcid + 1L) = mEdgeModifyReqWithAR.size();
	}
	
	//this method intercepts EdgeProvider functions.
	static def updateInEdge[V,E](
			inEdge :GraphEdge[E],
			list :MemoryChunk[EdgeProvider[E]],
			ids :IdStruct,
			reqOffs :MemoryChunk[MemoryChunk[Long]],
			reqs :MemoryChunk[GrowableMemory[Tuple2[Long,E]]]) /*{ V haszero, E haszero }*/{
//		@Ifdef("PROF_XP") val mtimer = Config.get().profXPregel().timer(XP.MAIN_FRAME, 0);

		// stash
		// val arrat = new Array[Long](0);
		val tempReqOff = MemoryChunk.make[MemoryChunk[Long]](list.size());
		val tempReq = MemoryChunk.make[GrowableMemory[Tuple2[Long,E]]](list.size());
		for(i in list.range()){
			tempReqOff(i) = list(i).mEdgeModifyReqOffset;
			tempReq(i) = list(i).mEdgeModifyReqWithAR;
			//overwrite
			list(i).mEdgeModifyReqOffset = reqOffs(i);
			list(i).mEdgeModifyReqWithAR = reqs(i);
		}
		
		val numThreads = Runtime.NTHREADS;
		val numVertexes = ids.numberOfLocalVertexes();
		val offsetPerThread = MemoryChunk.make[Long](numThreads + 1L,0,true);

		val inOffset = inEdge.offsets;
		val inVertex = inEdge.vertexes;
		val inValue = (inEdge.vertexes.size() == inEdge.value.size()) ? inEdge.value : MemoryChunk.make[E](inEdge.vertexes.size());
		val newOffset = MemoryChunk.make[Long](numVertexes + 1L,0,false); //ensure not to be 0 initialized
		
		//optimize & calc newOffset's diff (== newVertex's index diff )
		newOffset(0) = 0L;
		WorkerPlaceGraph.foreachVertexes(numVertexes, (tid :Long, r :LongRange) => {
			if(r.min > r.max) {
				return;
			}
			val e = list(tid);
			//calc newOffset
			var count:Long = 0L;
			for(srcid in r) {
				val orgn_length = inOffset(srcid + 1L) - inOffset(srcid);			//moto no length
				newOffset(srcid+1L) = orgn_length + e.calcEdgeNumDifferential(srcid);	//A/R length diff
				
				// if (newOffset(srcid+1L) < 0L) {
				// 	Console.OUT.println("Error");
				// 	// throw new Exception("error ddd : " + newOffset(srcid) + ", " + srcid + ", " + inOffset(srcid) + ", " + inOffset(srcid + 1)); 
				// }
				
				//count
				count += newOffset(srcid+1L);
			}
			offsetPerThread(tid + 1L) += count;
		});
		//convert count to offset
		for(i in 0..(numThreads-1))
			offsetPerThread(i + 1L) += offsetPerThread(i);
		//calc new offset's value (== newVertex's index )
		WorkerPlaceGraph.foreachVertexes(numVertexes, (tid :Long, r :LongRange) => {
			if(r.min > r.max) {
				return;
			}
			newOffset(r.min) = offsetPerThread(tid);	//not "+="
			for(srcid in (r.min)..(r.max-1L))
				newOffset(srcid+1L) += newOffset(srcid);
		});
		newOffset(numVertexes) = offsetPerThread(numThreads);
		val newNumEdgesNum = offsetPerThread(numThreads);
		val newVertex = MemoryChunk.make[Long](newNumEdgesNum);
		val newValue = MemoryChunk.make[E](newNumEdgesNum);
//		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_UPDATE_OUT_EDGES_1); }
		
		WorkerPlaceGraph.foreachVertexes(numVertexes, (tid :Long, r :LongRange) => {
			if(r.min > r.max) {
				return;
			}
			val e = list(tid);
			for(srcid in r) {
				//vertex goto ni update
				val x = newOffset(srcid+1L);
				val y = newOffset(srcid);
				val newlen=newOffset(srcid+1L)-newOffset(srcid);
				val oldlen=inOffset(srcid+1L)-inOffset(srcid);
				
				// if (newlen < 0) {
				// 	throw new Exception("newlen is negative : " + newlen + ", " + srcid + ", " + newOffset(srcid) + ", " + newOffset(srcid + 1L));
				// }
				
				e.updateOutEdge_temp(
						newVertex.subpart(newOffset(srcid), newlen),
						newValue.subpart(newOffset(srcid), newlen),
						inVertex.subpart(inOffset(srcid), oldlen),
						inValue.subpart(inOffset(srcid), oldlen),
						srcid
				);
			}
			// kore hitsuyou
			e.mInOffset = newOffset;
			e.mInVertex = newVertex;
			e.mInValue = newValue;
			for(i in e.mEdgeModifyReqOffset.range())
				e.mEdgeModifyReqOffset(i) = e.mEdgeModifyReqWithAR.size();
			assert newOffset(r.max + 1L) == offsetPerThread(tid + 1L);
		});
//		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_UPDATE_OUT_EDGES_2); }
		inOffset.del();
		inVertex.del();
		inValue.del();
		inEdge.offsets = newOffset;
		inEdge.vertexes = newVertex;
		inEdge.value = newValue;
		
		// pop
		for(i in list.range()){
			list(i).mEdgeModifyReqOffset = tempReqOff(i);
			list(i).mEdgeModifyReqWithAR = tempReq(i);
		}
	}
}
