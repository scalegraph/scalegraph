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

import x10.util.Team;
import org.scalegraph.graph.id.Twod;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.Dist2D;

/** Distributed sparse matrix.
 */
public final struct DistSparseMatrix[T] {

	private static struct Data[T] {
		public val dist :Dist2D;
		public val ids :IdStruct;
		public val matrix :SparseMatrix[T];
		
		public def this(dist :Dist2D, ids :IdStruct, matrix :SparseMatrix[T]) {
			this.dist = dist;
			this.ids = ids;
			this.matrix = matrix;
		}
	}
	
	private val data :PlaceLocalHandle[Cell[Data[T]]];
	
	/** Creates distributed sparse matrix. Currently there is a limitation that dist.parentTeam().role() must be the place 0.
	 * @param dist Distribution for sparse matrix
	 * @param init The closure that constructs sparse matrix for plane 0.
	 */
	public def this(dist :Dist2D, init :()=>Tuple2[IdStruct, SparseMatrix[T]]) {
		// create z == 0 plane
		val data_ = PlaceLocalHandle.make[Cell[Data[T]]](dist.allTeam().placeGroup(), ()=> {
			val r = init();
			return new Cell[Data[T]](new Data(dist, r.get1(), r.get2()));
		});
		this.data = data_;
		
		// shortcut
		val cycles = dist.parentTeam().size() / dist.allTeam().size();
		if(cycles == 0) return ;
		
		// create z > 0 plane
		dist.allTeam().placeGroup().broadcastFlat(() => {
			val z = dist.parentTeam().role() / dist.allTeam().size();
			if(z > 0) {
				val copy_from = dist.getCongruentPlace(0n);
				val r = at (copy_from) Tuple2(data_()().ids, data_()().matrix);
				data_()() = new Data(dist, r.get1(), r.get2());
			}
		});
	}
	
	/** Returns the distribution for this instance.
	 */
	public def dist() = data()().dist;
	
	/** Returns IdStruct for this instance.
	 */
	public def ids() = data()().ids;
	
	/** Returns the sparse matrix assigned for the current place.
	 */
	public operator this() = data()().matrix;

	/** Delete DistSparseMatrix and related objects.
	 * The all places in DistSparseMatrix must call this method.
	 */
	public def del() {
		val cache = data()();
		data()() = Data[T](cache.dist, cache.ids, Zero.get[SparseMatrix[T]]());
	}

	/** (Not implemented)
	 */
	public static def makeReplica[T](attribute :DistMemoryChunk[T], teamArray :Rail[Team]) {
		// return PlaceLocalHandle[Rail[T]]...
	}
	
	public def simplify(removeDuplicates :Boolean, removeSelfloops :Boolean, reduction :(MemoryChunk[T]) => T)
	{
		if(!removeDuplicates && !removeSelfloops) return ;
		
		data()().dist.allTeam().placeGroup().broadcastFlat(() => {
			val dist = data()().dist;
			val m = data()().matrix;
			val values_ = m.values;
			val ids = data()().ids;
			val StoV = Twod.StoV(ids, dist.r() as Int);
			val DtoV = Twod.DtoV(ids, dist.c() as Int);
			var dstIdx :Long = 0L;
			var cachedOffset :Long = m.offsets(0);
			
			// refactoring
			// 1. remove self loops on diagonal block
			// if removeDuplicates then
			// 		2. remove duplicates by reading and writing whole data
			// else
			//		2. move lator region data
			
			if(!ids.transpose) {
				for(i in 0L..(m.offsets.size()-2)) {
					val off = cachedOffset;
					val next = m.offsets(i+1);
					var prev :Long = -1L;
					var prev_idx :Long = -1L;
					for(var ei :Long = off; ei < next;) {
						val v = m.vertexes(ei);
						if(removeSelfloops && DtoV(v) == StoV(i)) ++ei; // !!
						else if(removeDuplicates && v == prev) {
							for( ++ei; ei < next; ++ei) {
								if(m.vertexes(ei) != prev) break;
							}
							m.values(dstIdx-1) = reduction(m.values.subpart(prev_idx, ei - prev_idx));
							continue;
						} else {
							prev = v;
							prev_idx = ei;
							m.vertexes(dstIdx) = v;
							values_(dstIdx) = values_(ei);
							++dstIdx; ++ei;
						}
					}
					cachedOffset = next;
					m.offsets(i+1) = dstIdx;
				}
			}
			else {
				for(i in 0L..(m.offsets.size()-2)) {
					val off = cachedOffset;
					val next = m.offsets(i+1);
					var prev :Long = -1L;
					var prev_idx :Long = -1L;
					for(var ei :Long = off; ei < next;) {
						val v = m.vertexes(ei);
						if(removeSelfloops && StoV(v) == DtoV(i)) ++ei; // !!
						else if(removeDuplicates && v == prev) {
							for( ++ei; ei < next; ++ei) {
								if(m.vertexes(ei) != prev) break;
							}
							m.values(dstIdx-1) = reduction(m.values.subpart(prev_idx, ei - prev_idx));
							continue;
						} else {
							prev = v;
							prev_idx = ei;
							m.vertexes(dstIdx) = v;
							values_(dstIdx) = values_(ei);
							++dstIdx; ++ei;
						}
					}
					cachedOffset = next;
					m.offsets(i+1) = dstIdx;
				}
			}
		});
	}
}
