package org.scalegraph.blas;

import org.scalegraph.util.DistMemoryChunk;

public final struct DistDiagonalMatrix[T] {
	private val data :DistMemoryChunk[T];
	
	public def this(data :DistMemoryChunk[T]) {
		this.data = data;
	}
	
	public operator this() = data;
}
