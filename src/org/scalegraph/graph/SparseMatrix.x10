package org.scalegraph.graph;

import x10.util.Team;
import x10.compiler.Ifndef;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.graph.id.Twod;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.Parallel;
import org.scalegraph.util.Team2;

/** Sparse matrix representation.
 */
public struct SparseMatrix[T] {
	public val offsets :MemoryChunk[Long];
	public val vertexes :MemoryChunk[Long];
	public val values :MemoryChunk[T];

	/** Returns the adjacency edge list for the specified vertex.
	 * @param localV The vertex ID in the local ID format.
	 */
	public def adjacency(localV :Long) =
		vertexes.subpart(offsets(localV), offsets(localV+1) - offsets(localV));

	/** Returns the attribute values corresponds to the adjacency edges for the specified vertex.
	 * @param values Attribute values assigned for the current place.
	 * @param localV The vertex ID in the local ID format.
	 */
	public def attribute[T](values :MemoryChunk[T], localV :Long) =
		values.subpart(offsets(localV), offsets(localV+1) - offsets(localV));

	public def vertexRange() = 0..(offsets.size()-2);

	private def this(offsets :MemoryChunk[Long], vertexes :MemoryChunk[Long], values :MemoryChunk[T]) {
		this.offsets = offsets;
		this.vertexes = vertexes;
		this.values = values;
	}

	/** Constructs partial sparse matrix of the distributed sparse matrix.
	 * @param edges The edge list assigned to the current place.
	 * @param values The edge values corresponds to the edge list.
	 * @param ids IdStruct that provides the distribution information.
	 */
	public def this(srcV :MemoryChunk[Long], dstV :MemoryChunk[Long], values: MemoryChunk[T], ids :IdStruct) {
		type EDGE = Tuple2[Long,Long];

		if(srcV.size() == 0L) { // shortcut
			this.offsets = MemoryChunk.getNull[Long]();
			this.vertexes = MemoryChunk.getNull[Long]();
			this.values = MemoryChunk.getNull[T]();
			return ;
		}

		Parallel.iter(srcV.range(), (tid :Long, r :LongRange):void => {
			val VtoS = Twod.VtoS(ids);
			val VtoD = Twod.VtoD(ids);

			for(i in r) {
				srcV(i) = VtoS(srcV(i));
				dstV(i) = VtoD(dstV(i));
			}
		});

		val offsetLength = 1L << (ids.lgl + (ids.outerOrInner ? ids.lgr : ids.lgc));

		val counts = new MemoryChunk[Long](offsetLength);
		val offsets_ = new MemoryChunk[Long](offsetLength + 1);
		val origin = new MemoryChunk[Long](srcV.size());
		val target = new MemoryChunk[Long](srcV.size());
		val values_ = new MemoryChunk[T](srcV.size());
		
		// if gathering outer edges, origin is source and target is destination.
		// if gathering inner edges, origin is destination and target is source.

		if(ids.outerOrInner)
			Parallel.sort(ids.lgl + ids.lgr, srcV, dstV, values, origin, target, values_);
		else
			Parallel.sort(ids.lgl + ids.lgc, dstV, srcV, values, origin, target, values_);

		Parallel.iter(edges.range(), (tie :Long, r :LongRange) => {
			for(i in r)
				counts.atomicAdd(edges(i).get1(), 1);
		});

		Parallel.scan(counts.range(), offsets_, 0L,
			(i:Long, v:Long) => counts(i) + v,
			(v1:Long, v2:Long) => v1 + v2);

		Parallel.iter(counts.range(), (tid :Long, r :LongRange) => {
			for(i in r) {
				val off = offsets_(i);
				val next = offsets_(i+1);
				val len = next - off;

				for(idx in off..(next-1)) {
					assert (edges(idx).get1() == i);
					vertexes_(idx) = edges(idx).get2();
				}

				Parallel.sort(vertexes_.subpart(off, len), values.subpart(off, len), 0,
					(v0:Long, v1:Long) => (v0.compareTo(v1)));
			}
		});

		this.offsets = offsets_;
		this.vertexes = vertexes_;
		this.values = values;
	}

	/** Constructs non-distributed sparse matrix.
	 * @param edges The edge list.
	 * @param indexes The indexes corresponds to the edge list.
	 * @param lgl The number of bits for the vertex ID.
	 */
	public def this(edges :MemoryChunk[Tuple2[Long,Long]], values: MemoryChunk[T], lgl :Int) {
		type EDGE = Tuple2[Long,Long];

		if(edges.size() == 0L) { // shortcut
			this.offsets = MemoryChunk.getNull[Long]();
			this.vertexes = MemoryChunk.getNull[Long]();
			this.values = MemoryChunk.getNull[T]();
			return ;
		}

		val offsetLength = 1L << lgl;

		val counts = new MemoryChunk[Long](offsetLength, 0, true);
		val offsets_ = new MemoryChunk[Long](offsetLength + 1);
		val vertexes_ = new MemoryChunk[Long](edges.size());

		Parallel.sort[EDGE, T](edges, values, (e0:EDGE,e1:EDGE)=> (e0.get1().compareTo(e1.get1())));

		Parallel.iter(edges.range(), (tie :Long, r :LongRange) => {
			for(i in r)
				counts.atomicAdd(edges(i).get1(), 1);
		});

		Parallel.scan(counts.range(), offsets_, 0L,
			(i:Long, v:Long) => counts(i) + v,
			(v1:Long, v2:Long) => v1 + v2);

		Parallel.iter(counts.range(), (tid :Long, r :LongRange) => {
			for(i in r) {
				val off = offsets_(i);
				val next = offsets_(i+1);
				val len = next - off;

				for(idx in off..(next-1))
					vertexes_(idx) = edges(idx).get2();

				Parallel.sort(vertexes_.subpart(off, len), values.subpart(off, len), 0,
					(v0:Long, v1:Long) => (v0.compareTo(v1)));
			}
		});

		this.offsets = offsets_;
		this.vertexes = vertexes_;
		this.values = values;
	}

	/** Creates replica of the sparse matrix on each place of team.
	 * @param sparseMatrix The sparse matrix that will be copied.
	 * @param team The sparse matrix is created on each place of the team.
	 */
	public static def makeReplica[T](sparseMatrix :SparseMatrix[T], team :Team) {
		val root = team.role()(0);
		val numVerts = sparseMatrix.offsets.size();
		val numEdges = sparseMatrix.vertexes.size();
		val ref_matrix = new GlobalRef[Cell[SparseMatrix[T]]]
				(new Cell[SparseMatrix[T]](sparseMatrix));

		return PlaceLocalHandle.make[Cell[SparseMatrix[T]]](team.placeGroup(), () => {
			val offsets = new MemoryChunk[Long](numVerts);
			val vertexes = new MemoryChunk[Long](numEdges);
			val values = new MemoryChunk[T](numEdges);

			val team2 = new Team2(team);
			if(ref_matrix.home == here) { // root
				team2.scatter(root, ref_matrix()().offsets, offsets);
				team2.scatter(root, ref_matrix()().vertexes, vertexes);
				team2.scatter(root, ref_matrix()().values, values);
			}
			else {
				team2.scatter(root, MemoryChunk.getNull[Long](), offsets);
				team2.scatter(root, MemoryChunk.getNull[Long](), vertexes);
				team2.scatter(root, MemoryChunk.getNull[T](), values);
			}

			return new Cell[SparseMatrix[T]](new SparseMatrix[T](offsets, vertexes, values));
		});
	}
}
