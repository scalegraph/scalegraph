package org.scalegraph.graph;

import x10.util.Team;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.Dist2D;

/** Distributed sparse matrix.
 */
public struct DistSparseMatrix[T] {

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
		data()() = Data[T](cache.dist, cache.ids, Zero.get[SparseMatrix[T]]());
	}

	/** (Not implemented)
	 */
	public static def makeReplica[T](attribute :DistMemoryChunk[T], teamArray :Array[Team]) {
		// return PlaceLocalHandle[Rail[T]]...
	}
}
