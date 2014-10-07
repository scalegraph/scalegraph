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

class GraphEdgeBase /*{ E haszero }*/ {
	var offsets :MemoryChunk[Long];
	var vertexes :MemoryChunk[Long];
	
	def this(off :MemoryChunk[Long], ver :MemoryChunk[Long]) {
		offsets = off;
		vertexes = ver;
	}
	
	def this() {
		offsets = MemoryChunk[Long]();
		vertexes = MemoryChunk[Long]();
	}	
}
