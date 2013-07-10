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

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.graph.SparseMatrix;

class GraphEdge [E] {E haszero} {
	var offsets :MemoryChunk[Long];
	var vertexes :MemoryChunk[Long];
	var value : MemoryChunk[E];
	
	def this(m :SparseMatrix) {
		val numEdges = m.vertexes.size();
		offsets = m.offsets;
		vertexes = m.vertexes;
		value = new MemoryChunk[E](numEdges);
	}
	
	def this() { }
}
