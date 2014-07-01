package test.xpregel;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.Bitmap;

import x10.compiler.Inline;
import x10.compiler.NonEscaping;

public class VertexContext[V, E, M, A] {
	val edgeProvider :EdgeProvider[E];
	
	static class EdgeIterator[E] implements Iterator[Long] {
		var ids :MemoryChunk[Long];
		var values :MemoryChunk[E];
		var parent :EdgeProvider[E];
		
		var cur :Long;
		
		static def make[E](ids :MemoryChunk[Long], values :MemoryChunk[E], parent :EdgeProvider[E]) {
			return new EdgeIterator[E](ids, values, parent);
		}
		
		def this(ids :MemoryChunk[Long], values :MemoryChunk[E], parent :EdgeProvider[E]) {
			reconstruct(ids,values,parent);
		}
		
		@NonEscaping
		final def reconstruct(ids :MemoryChunk[Long], values :MemoryChunk[E], parent :EdgeProvider[E]) {
			this.ids = ids;
			this.values = values;
			this.parent = parent;
			this.cur = 0L;
		}
		
		public def release() {
			this.parent = null;
			this.cur = 0L;
		}
		
		public def hasNext() :Boolean = (cur < ids.size());
		public def next() :Long = ids(cur++);
		
		public def curId() :Long = ids(cur);
		public def curValue() :E = values(cur);
		
		public def remove() {
			parent.removeOutEdge(curId());
		}
		
		public def modifyValue(newValue :E) {
			parent.modifyOutEdge(curId(), newValue);
		}
	}
	
	private val iterPool : GrowableMemory[EdgeIterator[E]];
	private var numUsedIters :Long;
	
	public def this() {
		edgeProvider = null;
		
		iterPool = new GrowableMemory[EdgeIterator[E]]();
		numUsedIters = 0L;
	}
	
	def releaseAllIterators() {
		numUsedIters = 0L;
	}
	
	private def getIteratorBase(ids :MemoryChunk[Long], values :MemoryChunk[E]) {
		val idx = numUsedIters;
		numUsedIters++;
		
		if (iterPool.size() <= idx) {;
			iterPool.setSize(idx + 1);			
			iterPool(idx) = new EdgeIterator(ids, values, edgeProvider);
			
			return iterPool(idx);
		} else {
			iterPool(idx).reconstruct(ids, values, edgeProvider);
			return iterPool(idx);
		}
	}
	
	public def getOutEdgesIterator() {
		val outEdges = edgeProvider.outEdges(mSrcid);
		return getIteratorBase(outEdges.get1(), outEdges.get2());
	}	
}