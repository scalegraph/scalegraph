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


package org.scalegraph.blas;

import org.scalegraph.util.DistMemoryChunk;

public final struct DistDiagonalMatrix[T] {
	private val data :DistMemoryChunk[T];
	
	public def this(data :DistMemoryChunk[T]) {
		this.data = data;
	}
	
	public operator this() = data;
}
