package org.scalegraph.blas;

import org.scalegraph.Config;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.Team2;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.ProfilingDB;

public final class BLAS {
	
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
		
		if(B != C) throw new UnsupportedOperationException();
		
		if( (!transB && B.ids().isCSR()) ||
			(transB && B.ids().isCSC()) ) {
			// OK
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
					//	val columnTeam = Team2(B.dist().columnTeam());
					val rowTeam = Team2(B.dist().rowTeam());
					//
					//	val refVector = new MemoryChunk[T](localWidth);
					val refVector = new MemoryChunk[T](localHeight);
					
					//	columnTeam.allgather(A()(), refVector);
					rowTeam.allgather(A()(), refVector);

					Parallel.iter(0L..(localHeight-1), (tid :Long, range :LongRange) => {
						for(i in range) {
							val off = B_.offsets(i);
							val next = B_.offsets(i+1);
							for(ei in off..(next-1)) {
								//	B_.values(ei) = B_.values(ei) * refVector(B_.vertexes(ei));
								B_.values(ei) = B_.values(ei) * refVector(i);
							}
						}
					});
					
				} catch (e :CheckedThrowable) { e.printStackTrace(); }
			});
		}
		else {
			// NG
			throw new UnsupportedOperationException();
		}
		
	}
	
	/** y <- alpha * op(A) * x + beta * y */
	public static def mult[T](alpha :T, A :DistSparseMatrix[T], trans :Boolean, x :DistMemoryChunk[T], beta :T, y :DistMemoryChunk[T])
	{ T haszero, T <: Arithmetic[T] }
	{
		val allTeam = Team2(A.dist().allTeam());
		
		if( (!trans && A.ids().isCSR()) ||
			(trans && A.ids().isCSC()) ) {
			// OK
			allTeam.placeGroup().broadcastFlat(() => {
				mult_[T](alpha, A, trans, x, beta, y);
			});
		}
		else {
			// NG
			throw new UnsupportedOperationException();
		}
		
	}
	
	public static def mult_[T](alpha :T, A :DistSparseMatrix[T], trans :Boolean, x :DistMemoryChunk[T], beta :T, y :DistMemoryChunk[T])
	{ T haszero, T <: Arithmetic[T] }
	{
		val prof = Config.get().profBLAS();
		val all  = prof.timer(0, 0);
		val calc = prof.timer(1, 0);
		val comm = prof.timer(3, 0);
		val localCalc = new MemoryChunk[ProfilingDB.Timer](
				Runtime.NTHREADS, (i:Long) => prof.timer(2, i));
		
		all.start();
		
		val allTeam = Team2(A.dist().allTeam());
		
		if( (!trans && A.ids().isCSR()) ||
		    (trans && A.ids().isCSC()) ) {
			// OK
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
				
				comm.start();
				columnTeam.allgather(x(), refVector);
				comm.lap(0);
				
				/*
				val team = A.dist().allTeam();
				for(p in team.placeGroup()) {
					if(here == p) {
						Console.OUT.println(here);
						Console.OUT.println("A_.offsets.size() = " + A_.offsets.size());
						Console.OUT.println("A_.vertexes.size() = " + A_.vertexes.size());
						Console.OUT.println("A_.values.size() = " + A_.values.size());
						Console.OUT.println("localWidth = " + localWidth);
						Console.OUT.println("localHeight = " + localHeight);
					}
					team.barrier(team.role()(0));
				}
				*/
				calc.start();
				Parallel.iter(0L..(localHeight-1), (tid :Long, range :LongRange) => {
					localCalc(tid).start();
					for(i in range) {
						val off = A_.offsets(i);
						val next = A_.offsets(i+1);
						var sum :T = Zero.get[T]();
						for(ei in off..(next-1)) {
							sum += A_.values(ei) * refVector(A_.vertexes(ei));
						}
						tmpSendVector(i) = sum;
					}
					localCalc(tid).lap(0);
				});
				calc.lap(0);
				
				comm.start();
				rowTeam.alltoall(tmpSendVector, tmpRecvVector);
				comm.lap(0);
				
				calc.start();
				Parallel.iter(0L..(localSize-1), (tid :Long, range :LongRange) => {
					localCalc(tid).start();
					for(i in range) {
						var sum :T = Zero.get[T]();
						for(j in 0L..(C-1)) {
							sum += tmpRecvVector(i + j * localSize);
						}
						y_(i) = alpha * sum + beta * y_(i);
					}
					localCalc(tid).lap(1);
				});
				calc.lap(1);
				
				refVector.del();
				tmpSendVector.del();
				tmpRecvVector.del();
				
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		}
		else {
			// NG
			throw new UnsupportedOperationException();
		}
		all.lap(0);
	}
	
	/** B <- alpha * A + beta * B */
	public static def add[T](alpha :T, A :IdentityMatrix, beta :T, B: DistSparseMatrix[T])
	{ T haszero, T <: Arithmetic[T] }
	{
		throw new UnsupportedOperationException();
	}
}
