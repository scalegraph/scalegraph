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

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.tuple.Tuple3;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.util.Bitmap;
import org.scalegraph.Config;

class EdgeProvider [E]/* {E haszero} */{
	private static type XP = org.scalegraph.id.ProfilingID.XPregel; 
	// srcid, offset
	val mDiffOffset :GrowableMemory[Tuple2[Long, Long]] = new GrowableMemory[Tuple2[Long, Long]]();
	val mDiffVertex :GrowableMemory[Long] = new GrowableMemory[Long]();
	val mDiffValue :GrowableMemory[E] = new GrowableMemory[E]();
	
	var mEdgeChanged :Boolean = false;
	var mOverrideEdge :Boolean = false;
	var mDiffStartOffset :Long = 0;
	var mOutOffset :MemoryChunk[Long];
	var mOutVertex :MemoryChunk[Long];
	var mOutValue :MemoryChunk[E];
	
	var mInOffset :MemoryChunk[Long];
	var mInVertex :MemoryChunk[Long];
	var mInValue :MemoryChunk[E];
	
	
	def this(outEdge :GraphEdge[E], inEdge :GraphEdge[E]) {
		mOutOffset = outEdge.offsets;
		mOutVertex = outEdge.vertexes;
		mOutValue = outEdge.value;
		mInOffset = inEdge.offsets;
		mInVertex = inEdge.vertexes;
		mInValue = inEdge.value;
	}
	
	//TODO: mOverrideEdge process
	static def updateOutEdge[E](outEdge :GraphEdge[E], list :MemoryChunk[EdgeProvider[E]], ids :IdStruct) /*{E haszero}*/ {
		@Ifdef("PROF_XP") val mtimer = Config.get().profXPregel().timer(XP.MAIN_FRAME, 0);
		var changed :Boolean = false;
		for(i in list.range()) {
			if(list(i).mDiffOffset.size() > 0) {
				changed = true; break;
			}
		}
		if(!changed) return;
		
		val numThreads = Runtime.NTHREADS;
		val numVertexes = ids.numberOfLocalVertexes();
		val offsetPerThread = new MemoryChunk[Long](numThreads + 1, 0);
		offsetPerThread(0) = 0L;
		
		val g_outOffset = outEdge.offsets;
		
		WorkerPlaceGraph.foreachVertexes(numVertexes, (tid :Long, r :LongRange) => {
			val e = list(tid);
			var diffIndex :Long = 0L;
			var numEdges :Long = 0L;
			e.mDiffOffset.add(new Tuple2[Long, Long](-1L, e.mDiffVertex.size()));
			val diffOffset = e.mDiffOffset.raw();
			
			for(srcid in r) {
				if(!e.mOverrideEdge) {
					numEdges += g_outOffset(srcid + 1) - g_outOffset(srcid);
				}
				if(diffOffset(diffIndex).get1() == srcid) {
					// detect edge modify
					numEdges += diffOffset(diffIndex + 1).get2() - diffOffset(diffIndex).get2();
					++diffIndex;
				}
			}
			offsetPerThread(tid + 1) = numEdges;
		});
		
		for(i in 0..(numThreads-1)) {
			offsetPerThread(i + 1) += offsetPerThread(i);
		}
		
		val newNumEdges = offsetPerThread(numThreads);
		val newOffset = new MemoryChunk[Long](numVertexes + 1);
		val newVertex = new MemoryChunk[Long](newNumEdges);
		val newValue = new MemoryChunk[E](newNumEdges);
		newOffset(0) = 0L;
		
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_UPDATE_OUT_EDGES_1); }
		
		WorkerPlaceGraph.foreachVertexes(numVertexes, (tid :Long, r :LongRange) => {
			val e = list(tid);
			var diffIndex :Long = 0;
			var offset :Long = offsetPerThread(tid);

			val diffOffset = e.mDiffOffset.raw();
			val diffVertex = e.mDiffVertex.raw();
			val diffValue = e.mDiffValue.raw();
			val outOffset = e.mOutOffset;
			val outVertex = e.mOutVertex;
			val outValue = e.mOutValue;
			
			for(srcid in r) {
				if(!e.mOverrideEdge){
					val start = outOffset(srcid);
					val length = outOffset(srcid + 1) - start;
					MemoryChunk.copy(outVertex, start, newVertex, offset, length);
					MemoryChunk.copy(outValue, start, newValue, offset, length);
					offset += length;
				}
				if(e.mDiffOffset(diffIndex).get1() == srcid) {
					// detect edge modify
					val start = diffOffset(diffIndex).get2();
					val length = diffOffset(diffIndex + 1).get2() - start;
					MemoryChunk.copy(diffVertex, start, newVertex, offset, length);
					MemoryChunk.copy(diffValue, start, newValue, offset, length);
					offset += length;
					++diffIndex;
				}
				newOffset(srcid + 1) = offset;
			}
			e.mOutOffset = newOffset;
			e.mOutVertex = newVertex;
			e.mOutValue = newValue;
			
			assert newOffset(r.max + 1) == offsetPerThread(tid + 1);

		});
		@Ifdef("PROF_XP") { mtimer.lap(XP.MAIN_UPDATE_OUT_EDGES_2); }

		outEdge.offsets = newOffset;
		outEdge.vertexes = newVertex;
		outEdge.value = newValue;
		
		for(tid in 0..(numThreads-1)) {
			val e = list(tid);
			e.mDiffOffset.clear();
			e.mDiffVertex.clear();
			e.mDiffValue.clear();
			e.mDiffStartOffset = 0L;
			e.mEdgeChanged = false;
			e.mOverrideEdge = false;
		}
	}
	
	//called after each vertex's compute method
	//this process is affect later compute
	def fixModifiedEdges(srcid :Long) {
		assert mEdgeChanged == true;
		mDiffOffset.add(new Tuple2[Long, Long](srcid, mDiffStartOffset));
		mDiffStartOffset = mDiffVertex.size();
		mEdgeChanged = false;
	}
	
	//return current edges id list
	//if this method is called after edge modify, process may be slow
	//it is recommended to get edgelist before modify and cache modifies on local
	def outEdges(srcid :Long) :Tuple2[MemoryChunk[Long], MemoryChunk[E]] {
		if(!mOverrideEdge){
			val oldstart = mOutOffset(srcid);
			val oldlength = mOutOffset(srcid + 1) - oldstart;
			val oldEdgeList = new Tuple2[MemoryChunk[Long], MemoryChunk[E]](
					mOutVertex.subpart(oldstart, oldlength),
					mOutValue.subpart(oldstart, oldlength));
			
			if(!mEdgeChanged)
				return oldEdgeList;
			
			//need modified list
			val start = mDiffStartOffset;
			val length = mDiffVertex.size() - start;
			val newEdgeList =  new Tuple2[MemoryChunk[Long], MemoryChunk[E]](
					mDiffVertex.raw().subpart(start, length),
					mDiffValue.raw().subpart(start, length));
			
			val newEdgesVtx = new MemoryChunk[Long](oldlength + length);
			MemoryChunk.copy(oldEdgeList.get1(), 0L, newEdgesVtx, 0L, oldlength);
			MemoryChunk.copy(newEdgeList.get1(), 0L, newEdgesVtx, oldlength, length);
			val newEdgesVal = new MemoryChunk[E](oldlength + length);
			MemoryChunk.copy(oldEdgeList.get2(), 0L, newEdgesVal, 0L, oldlength);
			MemoryChunk.copy(newEdgeList.get2(), 0L, newEdgesVal, oldlength, length);
			return new Tuple2[MemoryChunk[Long], MemoryChunk[E]](newEdgesVtx, newEdgesVal);
		}else{
			val start = mDiffStartOffset;
			val length = mDiffVertex.size() - start;
			return new Tuple2[MemoryChunk[Long], MemoryChunk[E]](
					mDiffVertex.raw().subpart(start, length),
					mDiffValue.raw().subpart(start, length));
		}
	}
	
	def outEdgesId(srcid :Long) {
		if(!mOverrideEdge){
			val oldstart = mOutOffset(srcid);
			val oldlength = mOutOffset(srcid + 1) - oldstart;
			val oldEdgeIdList = mOutVertex.subpart(oldstart, oldlength);
			if(!mEdgeChanged)
				return oldEdgeIdList;
			
			//need modified list
			val start = mDiffStartOffset;
			val length = mDiffVertex.size() - start;
			val newEdgeIdList = mDiffVertex.raw().subpart(start, length);
			
			val newEdgesVtx = new MemoryChunk[Long](oldlength + length);
			MemoryChunk.copy(oldEdgeIdList, 0L, newEdgesVtx, 0L, oldlength);
			MemoryChunk.copy(newEdgeIdList, 0L, newEdgesVtx, oldlength, length);
			return newEdgesVtx;
		}else{
			val start = mDiffStartOffset;
			val length = mDiffVertex.size() - start;
			return mDiffVertex.raw().subpart(start, length);
		}
	}

	def outEdgesValue(srcid :Long) {
		if(!mOverrideEdge){
			val oldstart = mOutOffset(srcid);
			val oldlength = mOutOffset(srcid + 1) - oldstart;
			val oldEdgeValList = mOutValue.subpart(oldstart, oldlength);
			if(!mEdgeChanged)
				return oldEdgeValList;
			//need modified list
			val start = mDiffStartOffset;
			val length = mDiffValue.size() - start;
			val newEdgeValList = mDiffValue.raw().subpart(start, length);
			val newEdgesVal = new MemoryChunk[E](oldlength + length);
			MemoryChunk.copy(oldEdgeValList, 0L, newEdgesVal, 0L, oldlength);
			MemoryChunk.copy(newEdgeValList, 0L, newEdgesVal, oldlength, length);
			return newEdgesVal;
		}else{
			val start = mDiffStartOffset;
			val length = mDiffValue.size() - start;
			return mDiffValue.raw().subpart(start, length);
		}
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
	
	def setOutEdges(id :MemoryChunk[Long], value :MemoryChunk[E]) {
		mDiffVertex.setSize(mDiffStartOffset);
		mDiffValue.setSize(mDiffStartOffset);
		mDiffVertex.add(id);
		mDiffValue.add(value);
		mEdgeChanged = true;
		//no need to clear mOut** due to following flag
		mOverrideEdge = true;
	}
	
	def clearOutEdges() {
		mDiffVertex.setSize(mDiffStartOffset);
		mDiffValue.setSize(mDiffStartOffset);
		mEdgeChanged = true;
		//no need to clear mOut** due to following flag
		mOverrideEdge = true;
	}
	
	def removeOutEdges(srcid :Long, id :MemoryChunk[Long]) {
		//TODO: sort ids (dareka tukutteta)
		val oldOutEdges = outEdges(srcid);
		val len = oldOutEdges.get1().size();
		
		//sort
		
		//clear current out edges
		clearOutEdges();
		var sIndex:Long = 0L;
		
		for(numid in id){
			val removeIndex = binariSearch(oldOutEdges.get1(), numid, sIndex);
			if(removeIndex<0L)	//not found
				continue;
			if(removeIndex-sIndex != 0L){	//need to copy
				addOutEdges(
					oldOutEdges.get1().subpart(sIndex,removeIndex-sIndex),
					oldOutEdges.get2().subpart(sIndex,removeIndex-sIndex));
			}
			sIndex = removeIndex + 1L;
		}
		addOutEdges(
				oldOutEdges.get1().subpart(sIndex,len-sIndex),
				oldOutEdges.get2().subpart(sIndex,len-sIndex));
		mEdgeChanged = true;
		mOverrideEdge = true;
	}

	def addOutEdge(id :Long, value :E) {
		mDiffVertex.add(id);
		mDiffValue.add(value);
		mEdgeChanged = true;
	}

	def addOutEdges(id :MemoryChunk[Long], value :MemoryChunk[E]) {
		mDiffVertex.add(id);
		mDiffValue.add(value);
		mEdgeChanged = true;
	}
	
	private static def binariSearch(id :MemoryChunk[Long], num :Long, fleft:Long) :Long{
		var l :Long = fleft;
		var r :Long = id.size() - 1L;
		var m :Long;
		var value :Long = -1L;
		
		while(l<=r){
			m = (l+r) >> 1;
			if(id(m) < num){
				l = m + 1;
			}else if(id(m) > num){
				r = m - 1;
			}else{
				value = m;
				break;
			}
		}
		return value;
	}
}



















