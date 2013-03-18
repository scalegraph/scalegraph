package org.scalegraph.graph;

import x10.util.Team;
import x10.compiler.Ifndef;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.util.tuple.*;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.concurrent.Team2;

/** Sparse matrix representation.
 */
public struct SparseMatrix {
	public val offsets :MemoryChunk[Long];
	public val vertexes :MemoryChunk[Long];
	public val edgeIndexes :MemoryChunk[Long];
	
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
	
	public def vertexRange() = 0..(offsets.size()-1);
	
	private def this(offsets :MemoryChunk[Long], vertexes :MemoryChunk[Long], edgeIndexes :MemoryChunk[Long]) {
		this.offsets = offsets;
		this.vertexes = vertexes;
		this.edgeIndexes = edgeIndexes;
	}
	
	/** Constructs partial sparse matrix of the distributed sparse matrix.
	 * @param edges The edge list assigned to the current place.
	 * @param indexes The indexes corresponds to the edge list.
	 * @param ids IdStruct that provides the distribution information.
	 */
	public def this(edges :MemoryChunk[Tuple2[Long,Long]], indexes: MemoryChunk[Long], ids :IdStruct) {
		type EDGE = Tuple2[Long,Long];
		
		if(edges.size() == 0L) { // shortcut
			this.offsets = MemoryChunk.getNull[Long]();
			this.vertexes = MemoryChunk.getNull[Long]();
			this.edgeIndexes = MemoryChunk.getNull[Long]();
			return ;
		}
		
		val offsetLength = 1L << (ids.lgl + (ids.outerOrInner ? ids.lgr : ids.lgc));
		
		val counts = new MemoryChunk[Long](offsetLength);
		val offsets_ = new MemoryChunk[Long](offsetLength + 1);
		val vertexes_ = new MemoryChunk[Long](edges.size());
		
		Parallel.iter(edges.range(), (tid :Long, r :LongRange):void => {
			val lgsize = ids.lgr + ids.lgc;
			val rmask = (1L << ids.lgr) - 1;
			val cmask = (1L << lgsize) - 1 - rmask;
			val lgl = ids.lgl;
			val lgr = ids.lgr;
			// for debug
			val localRsize = 1L << (ids.lgl + ids.lgr);
			val localCsize = 1L << (ids.lgl + ids.lgc);
			
			if(ids.outerOrInner) {
				for(i in r) {
					val v0 = edges(i).get1();
					val v1 = edges(i).get2();
					// outer: convert RoundRobin to LocalR
					val v0_localR = ((v0 & rmask) << lgl) | (v0 >> lgsize);
					val v1_localC = (((v1 & cmask) >> lgr) << lgl) | (v1 >> lgsize);
					edges(i) = new Tuple2[Long, Long](v0_localR, v1_localC);
					assert (v0_localR < localRsize);
					assert (v1_localC < localCsize);
				}
			}
			else {
				for(i in r) {
					val v1 = edges(i).get1();
					val v0 = edges(i).get2();
					// inner: convert RoundRobin to LocalC
					val v0_localR = ((v0 & rmask) << lgl) | (v0 >> lgsize);
					val v1_localC = (((v1 & cmask) >> lgr) << lgl) | (v1 >> lgsize);
					edges(i) = new Tuple2[Long, Long](v1_localC, v0_localR);
					assert (v0_localR < localRsize);
					assert (v1_localC < localCsize);
				}
			}
		});
		
		Parallel.sort(edges, indexes, (e0:EDGE,e1:EDGE)=> e0.get1() - e1.get1());
		
		Parallel.iter(edges.range(), (tie :Long, r :LongRange) => {
			for(i in r)
				counts.atomicAdd(edges(i).get1(), 1);
		});
		
		Parallel.scan(1L..offsetLength, offsets_, 0L,
			(i:Long, v:Long) => counts(i-1) + v,
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
					
				Parallel.sort(vertexes_.subpart(off, len), indexes.subpart(off, len), 0,
					(v0:Long, v1:Long) => v0 - v1);
			}
		});
		
		this.offsets = offsets_;
		this.vertexes = vertexes_;
		this.edgeIndexes = indexes;
	}
	
	/** Constructs non-distributed sparse matrix.
	 * @param edges The edge list.
	 * @param indexes The indexes corresponds to the edge list.
	 * @param lgl The number of bits for the vertex ID.
	 */
	public def this(edges :MemoryChunk[Tuple2[Long,Long]], indexes: MemoryChunk[Long], lgl :Int) {
		type EDGE = Tuple2[Long,Long];
		
		if(edges.size() == 0L) { // shortcut
			this.offsets = MemoryChunk.getNull[Long]();
			this.vertexes = MemoryChunk.getNull[Long]();
			this.edgeIndexes = MemoryChunk.getNull[Long]();
			return ;
		}
		
		val offsetLength = 1L << lgl;
		
		val counts = new MemoryChunk[Long](offsetLength, 0, true);
		val offsets_ = new MemoryChunk[Long](offsetLength + 1);
		val vertexes_ = new MemoryChunk[Long](edges.size());
		
		Parallel.sort[EDGE, Long](edges, indexes, (e0:EDGE,e1:EDGE)=> e0.get1() - e1.get1());
		
		Parallel.iter(edges.range(), (tie :Long, r :LongRange) => {
			for(i in r)
				counts.atomicAdd(edges(i).get1(), 1);
		});
		
		Parallel.scan(1L..edges.size(), offsets_, 0L,
			(i:Long, v:Long) => counts(i-1) + v,
			(v1:Long, v2:Long) => v1 + v2);
		
		Parallel.iter(counts.range(), (tid :Long, r :LongRange) => {
			for(i in r) {
				val off = offsets_(i);
				val next = offsets_(i+1);
				val len = next - off;
				
				for(idx in off..(next-1))
					vertexes_(idx) = edges(idx).get2();
					
				Parallel.sort(vertexes_.subpart(off, len), indexes.subpart(off, len), 0,
					(v0:Long, v1:Long) => v0 - v1);
			}
		});

		this.offsets = offsets_;
		this.vertexes = vertexes_;
		this.edgeIndexes = indexes;
	}
	
	/** Creates replica of the sparse matrix on each place of team.
	 * @param sparseMatrix The sparse matrix that will be copied.
	 * @param team The sparse matrix is created on each place of the team.
	 */
	public static def makeReplica(sparseMatrix :SparseMatrix, team :Team) {
		val root = team.role()(0);
		val numVerts = sparseMatrix.offsets.size();
		val numEdges = sparseMatrix.vertexes.size();
		val ref_matrix = new GlobalRef[Cell[SparseMatrix]]
				(new Cell[SparseMatrix](sparseMatrix));
		
		return PlaceLocalHandle.make[Cell[SparseMatrix]](team.placeGroup(), () => {
			val offsets = new MemoryChunk[Long](numVerts);
			val vertexes = new MemoryChunk[Long](numEdges);
			val indexes = new MemoryChunk[Long](numEdges);
			
			val team2 = new Team2(team);
			if(ref_matrix.home == here) { // root
				team2.scatter(root, ref_matrix()().offsets, offsets);
				team2.scatter(root, ref_matrix()().vertexes, vertexes);
				team2.scatter(root, ref_matrix()().edgeIndexes, indexes);
			}
			else {
				team2.scatter(root, MemoryChunk.getNull[Long](), offsets);
				team2.scatter(root, MemoryChunk.getNull[Long](), vertexes);
				team2.scatter(root, MemoryChunk.getNull[Long](), indexes);
			}
			
			return new Cell[SparseMatrix](new SparseMatrix(offsets, vertexes, indexes));
		});
	}
}
