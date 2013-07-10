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

package org.scalegraph.graph;

import x10.util.Team;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.Dist2D;

/** Distributed sparse matrix.
 */
public struct DistSparseMatrix {

	private static struct Data {
		public val dist :Dist2D;
		public val ids :IdStruct;
		public val matrix :SparseMatrix;
		
		public def this(dist :Dist2D, ids :IdStruct, matrix :SparseMatrix) {
			this.dist = dist;
			this.ids = ids;
			this.matrix = matrix;
		}
	}
	
	private val data :PlaceLocalHandle[Cell[Data]];
	
	/** Creates distributed sparse matrix. Currently there is a limitation that dist.parentTeam().role() must be the place 0.
	 * @param dist Distribution for sparse matrix
	 * @param init The closure that constructs sparse matrix for plane 0.
	 */
	public def this(dist :Dist2D, init :()=>Tuple2[IdStruct, SparseMatrix]) {
		// create z == 0 plane
		val data_ = PlaceLocalHandle.make[Cell[Data]](dist.allTeam().placeGroup(), ()=> {
			val r = init();
			return new Cell[Data](new Data(dist, r.get1(), r.get2()));
		});
		this.data = data_;
		
		// shortcut
		val cycles = dist.parentTeam().size() / dist.allTeam().size();
		if(cycles == 0) return ;
		
		// create z > 0 plane
		dist.allTeam().placeGroup().broadcastFlat(() => {
			val z = dist.parentTeam().role()(0) / dist.allTeam().size();
			if(z > 0) {
				val copy_from = dist.getCongruentPlace(0);
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
		data()() = Data(cache.dist, cache.ids, Zero.get[SparseMatrix]());
	}

	/** (Not implemented)
	 */
	public static def makeReplica[T](attribute :DistMemoryChunk[T], teamArray :Array[Team]) {
		// return PlaceLocalHandle[Rail[T]]...
	}
}
