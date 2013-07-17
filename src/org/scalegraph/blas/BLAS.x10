package org.scalegraph.blas;

import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.Team2;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.Parallel;

public class BLAS {
	
	/** C <- alpha * op(A) * op(B) + beta * C */
	public static def mult[T](alpha :T, A :DistSparseMatrix[T], transA :Boolean, B :DistSparseMatrix[T], transB :Boolean, beta :T, C :DistSparseMatrix[T])
	{ T haszero, T <: Arithmetic[T] }
	{
		throw new UnsupportedOperationException();
	}

	/** C <- alpha * op(A) * op(B) + beta * C */
	public static def mult[T](alpha :T, A :DistDiagonalMatrix[T], B :DistSparseMatrix[T], transB :Boolean, beta :T, C :DistSparseMatrix[T])
	{ T haszero, T <: Arithmetic[T] }
	{
		val allTeam = Team2(B.dist().allTeam());
		
		if(transB) throw new UnsupportedOperationException();
		if(B.ids().outerOrInner) throw new UnsupportedOperationException();
		if(B != C) throw new UnsupportedOperationException();
		
		allTeam.placeGroup().broadcastFlat(() => {
			try {
				val dist = B.dist();
				val ids = B.ids();
			//	val R = dist.R();
			//	val C = dist.C();
			//	val localSize = 1L << ids.lgl;
				val localWidth = 1L << (ids.lgl + ids.lgr);
				val localHeight = 1L << (ids.lgl + ids.lgc);
				val B_ = B();
			//	val C_ = C();
				val columnTeam = Team2(B.dist().columnTeam());
			//	val rowTeam = Team2(B.dist().rowTeam());
				//
				val refVector = new MemoryChunk[T](localWidth);
				
				columnTeam.allgather(A()(), refVector);

				Parallel.iter(0L..(localHeight-1), (tid :Long, range :LongRange) => {
					for(i in range) {
						val off = B_.offsets(i);
						val next = B_.offsets(i+1);
						for(ei in off..(next-1)) {
							B_.values(ei) = B_.values(ei) * refVector(B_.vertexes(ei));
						}
					}
				});
				
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	/** y <- alpha * op(A) * x + beta * y */
	public static def mult[T](alpha :T, A :DistSparseMatrix[T], trans :Boolean, x :DistMemoryChunk[T], beta :T, y :DistMemoryChunk[T])
	{ T haszero, T <: Arithmetic[T] }
	{
		val allTeam = Team2(A.dist().allTeam());
		
		if(trans) throw new UnsupportedOperationException();
		if(A.ids().outerOrInner) throw new UnsupportedOperationException();
		
		allTeam.placeGroup().broadcastFlat(() => {
			try {
				val dist = A.dist();
				val ids = A.ids();
				val R = dist.R();
				val C = dist.C();
				val localSize = 1L << ids.lgl;
				val localWidth = 1L << (ids.lgl + ids.lgr);
				val localHeight = 1L << (ids.lgl + ids.lgc);
				val A_ = A();
				val y_ = y();
				val columnTeam = Team2(A.dist().columnTeam());
				val rowTeam = Team2(A.dist().rowTeam());
				//
				val refVector = new MemoryChunk[T](localWidth);
				val tmpSendVector = new MemoryChunk[T](localHeight);
				val tmpRecvVector = new MemoryChunk[T](localHeight);
				
				columnTeam.allgather(x(), refVector);

				Parallel.iter(0L..(localHeight-1), (tid :Long, range :LongRange) => {
					for(i in range) {
						val off = A_.offsets(i);
						val next = A_.offsets(i+1);
						var sum :T = Zero.get[T]();
						for(ei in off..(next-1)) {
							sum += A_.values(ei) * refVector(A_.vertexes(ei));
						}
						tmpSendVector(i) = sum;
					}
				});
				
				rowTeam.alltoall(tmpSendVector, tmpRecvVector);

				Parallel.iter(0L..(localSize-1), (tid :Long, range :LongRange) => {
					for(i in range) {
						var sum :T = Zero.get[T]();
						for(j in 0L..(C-1)) {
							sum += tmpRecvVector(i + j * localSize);
						}
						y_(i) = alpha * sum + beta * y_(i);
					}
				});

				refVector.del();
				tmpSendVector.del();
				tmpRecvVector.del();
				
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	public static def mult_[T](alpha :T, A :DistSparseMatrix[T], trans :Boolean, x :DistMemoryChunk[T], beta :T, y :DistMemoryChunk[T])
	{ T haszero, T <: Arithmetic[T] }
	{
		val allTeam = Team2(A.dist().allTeam());
		
		if(trans) throw new UnsupportedOperationException();
		if(A.ids().outerOrInner) throw new UnsupportedOperationException();
		
			try {
				val dist = A.dist();
				val ids = A.ids();
				val R = dist.R();
				val C = dist.C();
				val localSize = 1L << ids.lgl;
				val localWidth = 1L << (ids.lgl + ids.lgr);
				val localHeight = 1L << (ids.lgl + ids.lgc);
				val A_ = A();
				val y_ = y();
				val columnTeam = Team2(A.dist().columnTeam());
				val rowTeam = Team2(A.dist().rowTeam());
				//
				val refVector = new MemoryChunk[T](localWidth);
				val tmpSendVector = new MemoryChunk[T](localHeight);
				val tmpRecvVector = new MemoryChunk[T](localHeight);
				
				columnTeam.allgather(x(), refVector);

				Parallel.iter(0L..(localHeight-1), (tid :Long, range :LongRange) => {
					for(i in range) {
						val off = A_.offsets(i);
						val next = A_.offsets(i+1);
						var sum :T = Zero.get[T]();
						for(ei in off..(next-1)) {
							sum += A_.values(ei) * refVector(A_.vertexes(ei));
						}
						tmpSendVector(i) = sum;
					}
				});
				
				rowTeam.alltoall(tmpSendVector, tmpRecvVector);

				Parallel.iter(0L..(localSize-1), (tid :Long, range :LongRange) => {
					for(i in range) {
						var sum :T = Zero.get[T]();
						for(j in 0L..(C-1)) {
							sum += tmpRecvVector(i + j * localSize);
						}
						y_(i) = alpha * sum + beta * y_(i);
					}
				});

				refVector.del();
				tmpSendVector.del();
				tmpRecvVector.del();
				
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
	}
	
	/** B <- alpha * A + beta * B */
	public static def add[T](alpha :T, A :IdentityMatrix, beta :T, B: DistSparseMatrix[T])
	{ T haszero, T <: Arithmetic[T] }
	{
		throw new UnsupportedOperationException();
	}
}