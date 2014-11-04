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

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.blas.SparseMatrix;

final class GraphEdge[E] /*{ E haszero }*/ extends GraphEdgeBase {
//	var offsets :MemoryChunk[Long];
//	var vertexes :MemoryChunk[Long];
	var values : MemoryChunk[E];
	/*
	def this(m :SparseMatrix[E]) {
		val numEdges = m.vertexes.size();
		offsets = m.offsets;
		vertexes = m.vertexes;
		value = MemoryChunk.make[E](numEdges);
	}*/
	
	def this() {
		offsets = MemoryChunk[Long]();
		vertexes = MemoryChunk[Long]();
		values = MemoryChunk[E]();
	}
	
	def set(m :SparseMatrix[E]) {
		offsets = m.offsets;
		vertexes = m.vertexes;
		values = m.values;
	}
	def set(m :GraphEdge[E]) {
		offsets = m.offsets;
		vertexes = m.vertexes;
		values = m.values;
	}
	
	def set(off :MemoryChunk[Long], ver :MemoryChunk[Long], value :MemoryChunk[E]) {
		offsets = off;
		vertexes = ver;
		values = value;
	}
}
