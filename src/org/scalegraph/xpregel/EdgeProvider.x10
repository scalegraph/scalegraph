package org.scalegraph.xpregel;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.concurrent.Parallel;

class EdgeProvider [E] {E haszero} {
	// modified out edges
	// srcid, offset
	val mDiffOffset :GrowableMemory[Tuple2[Long, Long]] = new GrowableMemory[Tuple2[Long, Long]]();
	val mDiffVertex :GrowableMemory[Long] = new GrowableMemory[Long]();
	val mDiffValue :GrowableMemory[E] = new GrowableMemory[E]();
	
	var mEdgeChanged :Boolean = false;
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
	
	static def updateOutEdge[E](outEdge :GraphEdge[E], list :Array[EdgeProvider[E]](1), ids :IdStruct) {E haszero} {
		var changed :Boolean = false;
		for([i] in list) {
			if(list(i).mDiffOffset.size() > 0) {
				changed = true; break;
			}
		}
		if(!changed) return;
		
		val numThreads = Runtime.NTHREADS;
		val numVertexes = ids.numberOfLocalVertexes();
		val offsetPerThread = new MemoryChunk[Long](numThreads + 1, 0L);
		val outOffset = outEdge.offsets;
		
		Parallel.iter(0..(numVertexes-1), (tid :Long, r :LongRange) => {
			val e = list(tid);
			var diffIndex :Long = 0;
			var numEdges :Long = 0;
			
			e.mDiffOffset.add(new Tuple2[Long, Long](0, e.mDiffVertex.size()));
			
			val diffOffset = e.mDiffOffset.data();
			
			for(srcid in r) {
				if(diffOffset(diffIndex).get1() == srcid) {
					numEdges += diffOffset(diffIndex + 1).get2() - diffOffset(diffIndex).get2();
					++diffIndex;
				}
				else {
					numEdges += outOffset(srcid + 1) - outOffset(srcid);
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
		
		Parallel.iter(0..(numVertexes-1), (tid :Long, r :LongRange) => {
			val e = list(tid);
			var diffIndex :Long = 0;
			var offset :Long = offsetPerThread(tid);

			val diffOffset = e.mDiffOffset.data();
			val diffVertex = e.mDiffVertex.data();
			val diffValue = e.mDiffValue.data();
			val outOffset = e.mOutOffset;
			val outVertex = e.mOutVertex;
			val outValue = e.mOutValue;
			
			for(srcid in r) {
				if(e.mDiffOffset(diffIndex).get1() == srcid) {
					val start = diffOffset(diffIndex).get2();
					val length = diffOffset(diffIndex + 1).get2() - start;
					MemoryChunk.copy(diffVertex, start, newVertex, offset, length);
					MemoryChunk.copy(diffValue, start, newValue, offset, length);
					offset += length;
					++diffIndex;
				}
				else {
					val start = outOffset(diffIndex);
					val length = outOffset(diffIndex + 1) - start;
					MemoryChunk.copy(outVertex, start, newVertex, offset, length);
					MemoryChunk.copy(outValue, start, newValue, offset, length);
					offset += length;
				}
				newOffset(srcid + 1) = offset;
			}
			
			assert newOffset(r.max + 1) == offsetPerThread(tid + 1);
		});

		outEdge.offsets = newOffset;
		outEdge.vertexes = newVertex;
		outEdge.value = newValue;
	}
	
	def fixModifiedEdges(srcid :Long) {
		assert mEdgeChanged == true;
		mDiffOffset.add(new Tuple2[Long, Long](srcid, mDiffStartOffset));
		mDiffStartOffset = mDiffVertex.size();
		mEdgeChanged = false;
	}

	def outEdges(srcid :Long) :Tuple2[MemoryChunk[Long], MemoryChunk[E]] {
		if(mEdgeChanged) {
			val start = mDiffStartOffset;
			val length = mDiffVertex.size() - start;
			return new Tuple2[MemoryChunk[Long], MemoryChunk[E]](
					mDiffVertex.data().subpart(start, length),
					mDiffValue.data().subpart(start, length));
		}
		else {
			val start = mOutOffset(srcid);
			val length = mOutOffset(srcid + 1) - start;
			return new Tuple2[MemoryChunk[Long], MemoryChunk[E]](
					mOutVertex.subpart(start, length),
					mOutValue.subpart(start, length));
		}
	}

	def outEdgesId(srcid :Long) {
		if(mEdgeChanged) {
			val start = mDiffStartOffset;
			val length = mDiffVertex.size() - start;
			return mDiffVertex.data().subpart(start, length);
		}
		else {
			val start = mOutOffset(srcid);
			val length = mOutOffset(srcid + 1) - start;
			return mOutVertex.subpart(start, length);
		}
	}

	def outEdgesValue(srcid :Long) {
		if(mEdgeChanged) {
			val start = mDiffStartOffset;
			val length = mDiffValue.size() - start;
			return mDiffValue.data().subpart(start, length);
		}
		else {
			val start = mOutOffset(srcid);
			val length = mOutOffset(srcid + 1) - start;
			return mOutValue.subpart(start, length);
		}
	}

	def inEdgesId(srcid :Long) {
		val start = mOutOffset(srcid);
		val length = mOutOffset(srcid + 1) - start;
		return mInVertex.subpart(start, length);
	}

	def inEdgesValue(srcid :Long) {
		val start = mOutOffset(srcid);
		val length = mOutOffset(srcid + 1) - start;
		return mInValue.subpart(start, length);
	}
	
	def setOutEdges(id :MemoryChunk[Long], value :MemoryChunk[E]) {
		mDiffVertex.setSize(mDiffStartOffset);
		mDiffValue.setSize(mDiffStartOffset);
		mDiffVertex.add(id);
		mDiffValue.add(value);
		mEdgeChanged = true;
	}
	
	def clearOutEdges() {
		mDiffVertex.setSize(mDiffStartOffset);
		mDiffValue.setSize(mDiffStartOffset);
		mEdgeChanged = true;
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
}
