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

package org.scalegraph.xpregel;

import x10.util.Team;
import x10.io.Printer;
import x10.compiler.Inline;
import x10.compiler.Ifndef;
import x10.compiler.Ifdef;

import org.scalegraph.Config;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.tuple.Tuple2;
import org.scalegraph.util.Team2;
import org.scalegraph.util.Parallel;
import org.scalegraph.test.STest;

import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.id.OnedC;
import org.scalegraph.graph.id.IdStruct;

/**
 * a main entry for processing 
 * graph with X-Pregel
 * 
 * V: Vertex value type
 * E: Edge value type
 */
public final class XPregelGraph[V,E] /*{V haszero,E haszero}*/ implements Iterable[Vertex[V, E]]  {
	private static type XP = org.scalegraph.id.ProfilingID.XPregel;

	val mWorkers :PlaceLocalHandle[WorkerPlaceGraph[V,E]];
	val mTeam :Team2;
	
	public def this(ids :IdStruct)
	{
		val team = Config.get().worldTeam();
		mTeam = new Team2(team);
		mWorkers = PlaceLocalHandle.makeFlat[WorkerPlaceGraph[V,E]](mTeam.placeGroup(),
				() => new WorkerPlaceGraph[V,E](team, ids));
	}
	
	public def this(edgeIndexMatrix :DistSparseMatrix[Long])
	{
		val team = Config.get().worldTeam();
		mTeam = new Team2(team);
		mWorkers = PlaceLocalHandle.makeFlat[WorkerPlaceGraph[V,E]](mTeam.placeGroup(),
				() => new WorkerPlaceGraph[V,E](team, edgeIndexMatrix.ids()));
		setGraph(edgeIndexMatrix);
	}
	
	private def this(team :Team, workers :PlaceLocalHandle[WorkerPlaceGraph[V,E]])
	{
		mTeam = new Team2(team);
		mWorkers = workers;
	}
	
	public static def make[V, E](graph :DistSparseMatrix[E]) /*{V haszero, E haszero}*/ {
		val team = Config.get().worldTeam();
		val g = new XPregelGraph[V, E](team, PlaceLocalHandle.makeFlat[WorkerPlaceGraph[V,E]]
			(team.placeGroup(), () => new WorkerPlaceGraph[V, E](team, graph.ids())));
		g.setGraphAndEdgeValue(graph);
		return g;
	}
	
	public static def make[V, E](graph :DistSparseMatrix[E], iv :V) /*{V haszero, E haszero}*/ {
		val team = Config.get().worldTeam();
		val g = new XPregelGraph[V, E](team, PlaceLocalHandle.makeFlat[WorkerPlaceGraph[V,E]]
		(team.placeGroup(), () => new WorkerPlaceGraph[V, E](team, graph.ids())));
		g.setGraphAndEdgeValue(graph);
		g.initVertexValue(iv);
		return g;
	}
	
	/** set out edges of this instance with a given graph represented by an edge index matrix.
	 * The edge value after this method call is undefined. Users should initialize the edge values after setGraph().
	 * All of the vertex value, vertex state and output buffer, are remain unchanged.
	 */
	public def setGraph(edgeIndexMatrix :DistSparseMatrix[Long]) {
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_();
				w.setOutEdge(edgeIndexMatrix);
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	/** set out edges of this instance with a given graph represented by a DistSparseMatrix.
	 * The edge values are also initizlized with values from a given DistSparseMatrix.
	  * All of the vertex value, vertex state and output buffer, are remain unchanged.
	 */
	public def setGraphAndEdgeValue(graph :DistSparseMatrix[E]) {
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_();
				w.setOutEdgeWithValue(graph);
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	private def ensurePlaceRoot() {
		if(mTeam.role() != 0) {
			throw new IllegalOperationException("This method can be called on only the FIRST_PLACE.");
		}
	}
	
	public def setLogPrinter(printer :Printer, level :Int) {
		ensurePlaceRoot();
		mWorkers().mLogPrinter = printer;
		mWorkers().mLogLevel = level;
	}
	
	public def ids() = mWorkers().mIds;
	
	public def addVertex(numVertices :Long, newVal :V) {
		ensurePlaceRoot();
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_();
				val newLocalVertices = (numVertices / team_.size()) +
					((numVertices % team_.size()) > team_.role() ? 1l : 0l);
				val numNewLocalVertices = w.mIds.numberOfLocalVertexes() + newLocalVertices;
				val numGlobalVertices = team_.allreduce(numNewLocalVertices, Team.MAX) * team_.size();
				val newIds = Config.get().dist1d().getIds(numGlobalVertices, numNewLocalVertices, false);
				
				w.addVertex(newIds, newVal);
				
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	public def initVertexValue(value : V)
	{
		ensurePlaceRoot();
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_();
				Parallel.iter(w.mVertexValue.range(), (tid :Long, r :LongRange) => {
					for(i in r) w.mVertexValue(i) = value;
				});
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	public def initEdgeValue(value : E)
	{
		ensurePlaceRoot();
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_().mOutEdge;
				Parallel.iter(w.values.range(), (tid :Long, r :LongRange) => {
					for(i in r) w.values(i) = value;
				});
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}

	/** Returns the place group that this XPregelGraph is spread on.
	 */
	public def placeGroup() = mTeam.placeGroup();
	
	/** Returns the number of local vertexes.
	 */
	public def size() = mWorkers().mIds.numberOfLocalVertexes();
	
	/** Returns the interface of the i-th local vertex.
	 */
	public @Inline operator this(index :Long) {
		@Ifndef("NO_BOUNDS_CHECKS") {
			if(index < 0 || index >= size())
				throw new ArrayIndexOutOfBoundsException("index (" + index + ") not contained in MemoryChunk");
		}
		return Vertex[V, E](mWorkers(), index);
	}
	
	/** Returns the range.
	 */
	public def range() = 0L..(size()-1L);
	
	private static class VertexIterator[V, E] /*{ V haszero, E haszero }*/ implements Iterator[Vertex[V, E]] 
	{
		val mWorker :WorkerPlaceGraph[V, E];
		var cur :Long;
		
		public def this(worker :WorkerPlaceGraph[V, E]) {
			mWorker = worker;
			cur = 0L;
		}
		
		public def hasNext() :Boolean = (cur < mWorker.mIds.numberOfLocalVertexes());
		public def next() :Vertex[V, E] = new Vertex[V, E](mWorker, cur++);
	}

	/** Returns the iterator over the local vertexes.
	 */
	public def iterator() = new VertexIterator[V, E](mWorkers());
	
	/** Returns local edge data */
	public def edgeOffsets() = mWorkers().mOutEdge.offsets;
	/** Returns local edge data */
	public def edgeIds() = mWorkers().mOutEdge.vertexes;
	/** Returns local edge data */
	public def edgeValues() = mWorkers().mOutEdge.values;
	
	/** Detatch the index-th ouput and return it as a DistMemoryChunk.
	 */
	public def stealOutput[T](index :Int) :DistMemoryChunk[T] {
		ensurePlaceRoot();
		return DistMemoryChunk.make[T](mTeam.placeGroup(),
				() => mWorkers().stealOutput[T](index));
	}
	
	public def stealOutput[T]() :DistMemoryChunk[T] = stealOutput[T](0);
	
	/** Returns the aggregated value by the last superstep of previous iteration.
	 */
	public def aggregatedValue[T]() = mWorkers().mLastAggVal as T;
	
	/** 
	 * update in-edges
	 * This method only create the in-edge destination vertex id.
	 * The edge value of each in-edge will not be touched or cleared.
	 */
	public def updateInEdge() {
		ensurePlaceRoot();
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat(() => {
			try {
				workers_().updateInEdge();
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	/**
	 * update out-edges
	 * This method update the in-edge destination vertex id and in-edge values also.
	 */
	public def updateInEdgeAndValue() { E haszero } {
		ensurePlaceRoot();
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat(() => {
			try {
				workers_().updateInEdgeWithValue();
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	/**
	 * Reset shold-be-active flag. This is setting true for all the vertexes,
	 * since the default value of shold-be-active flag is true.
	 */
	public def resetSholdBeActiveFlag() {
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat(() => {
			try {
				workers_().mVertexShouldBeActive.clear(true);
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	/**
	 * Execute superstep.
	 */
	public def iterate[M,A](
			compute :(VertexContext[V,E,M,A], MemoryChunk[M]) => void,
			aggregator :(MemoryChunk[A])=>A,
			combiner :(MemoryChunk[M]) => M,
			end :(Int,A)=>Boolean) { M haszero, A haszero}
	{
		ensurePlaceRoot();
		if(compute == null) {
			throw new IllegalArgumentException ("compute closure cannot be null");
		}
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				workers_().run[M,A](compute, aggregator, combiner, end);
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	/**
	 * Execute superstep with Aggregator, but withour Combiner.
	 */
	public def iterate[M,A](
			compute :(ctx:VertexContext[V,E,M,A],messages:MemoryChunk[M]) => void, 
			aggregator :(MemoryChunk[A])=>A,
			end :(Int,A)=>Boolean) { M haszero, A haszero}
	{
		ensurePlaceRoot();
		if(compute == null) {
			throw new IllegalArgumentException ("compute closure cannot be null");
		}
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				workers_().run[M,A](compute, aggregator, null, end);
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	/**
	 * Execute only one superstep
	 */
	public def once(compute :(ctx:VertexContext[V,E,Byte,Byte]) => void)
	{
		ensurePlaceRoot();
		if(compute == null) {
			throw new IllegalArgumentException ("compute closure cannot be null");
		}
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val actual_compute =
					(ctx:VertexContext[V,E,Byte,Byte],messages:MemoryChunk[Byte])
					=> { compute(ctx); };
				workers_().run[Byte,Byte](actual_compute, null, null, (Int,Byte) => true);
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
}
