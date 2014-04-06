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

/**
 * A main entry for XPregelGraph, which is an optimized implementation of Google's Pregel.
 * To use the XPregel, follow the instruction described below.
 * <ul>
 * <li>1. Load and create a distributed sparse matrix with a compatible distribution, 
 * which can be obtain by Config.get().distXPregel() method.</li>
 * <li>2. Create an XPregelGraph object. You can use a XPregelGraph.make method as well as a constructor of 
 * XPregelGraph class.</li>
 * <li>3. Invoke iterate(), once() and output() methods as many times as you want to.</li>
 * <li>4. Take out the output with stealOutput() method.</li>
 * </ul>
 * @param <V> Vertex value type
 * @param <E> Edge value type
 */
public final class XPregelGraph[V,E] /*{V haszero,E haszero}*/ implements Iterable[Vertex[V, E]]  {
	/** The alias of region identification class for the profilier. */
	private static type XP = org.scalegraph.id.ProfilingID.XPregel;

	val mWorkers :PlaceLocalHandle[WorkerPlaceGraph[V,E]];
	val mTeam :Team2;
	
	/**
	 * Creates an instance with an unweighted graph,
	 * If you want to input a weighted graph, use make() method.
	 * 
	 * @param edgeIndexMatrix an input graph
	 */
	public def this(edgeIndexMatrix :DistSparseMatrix[Long])
	{
		val team = Config.get().worldTeam();
		mTeam = new Team2(team);
		mWorkers = PlaceLocalHandle.makeFlat[WorkerPlaceGraph[V,E]](mTeam.placeGroup(),
				() => new WorkerPlaceGraph[V,E](team, edgeIndexMatrix));
	}
	
	private def this(team :Team, workers :PlaceLocalHandle[WorkerPlaceGraph[V,E]])
	{
		mTeam = new Team2(team);
		mWorkers = workers;
	}

	/**
	 * Creates an instance with a weighted graph.
	 * 
	 * @param graph an weighted graph
	 * @param <V> Vertex value type
	 * @param <E> Edge value type
	 */
	public static def make[V, E](graph :DistSparseMatrix[E]) /*{V haszero, E haszero}*/ {
		val team = Config.get().worldTeam();
		val g = new XPregelGraph[V, E](team, PlaceLocalHandle.makeFlat[WorkerPlaceGraph[V,E]]
			(team.placeGroup(), () => new WorkerPlaceGraph[V, E](team, graph.ids())));
		g.setGraphAndEdgeValue(graph);
		return g;
	}
	
	/**
	 * Created an instance with a weighted graph and an initial vertex value.
	 * 
	 * @param graph an weighted graph
	 * @param iv an initial vertex value
	 * @param <V> Vertex value type
	 * @param <E> Edge value type
	 */
	public static def make[V, E](graph :DistSparseMatrix[E], iv :V) /*{V haszero, E haszero}*/ {
		val team = Config.get().worldTeam();
		val g = new XPregelGraph[V, E](team, PlaceLocalHandle.makeFlat[WorkerPlaceGraph[V,E]]
		(team.placeGroup(), () => new WorkerPlaceGraph[V, E](team, graph.ids())));
		g.setGraphAndEdgeValue(graph);
		g.initVertexValue(iv);
		return g;
	}
	
	private def setGraphAndEdgeValue(graph :DistSparseMatrix[E])
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_();
				// TODO: check whether the graph id is equivalent to the current graph id.
				w.mOutEdge.set(graph());
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	private def ensurePlaceRoot() {
		if(mTeam.role() != 0) {
			throw new IllegalOperationException("This method can be called on only the FIRST_PLACE.");
		}
	}
	
	/**
	 * The XPregel logs are printed using the specified printer object.
	 * If it is not provided, The XPregel logs are not printed.
	 * 
	 * @param printer The printer object that is used to output the XPregel logs
	 * @param level The level of detail. With the lower level, the more detail logs are printed.
	 */
	public def setLogPrinter(printer :Printer, level :Int) {
		ensurePlaceRoot();
		mWorkers().mLogPrinter = printer;
		mWorkers().mLogLevel = level;
	}
	
	/**
	 * Returns the vertex id converter which the XPregel is using.
	 */
	public def ids() = mWorkers().mIds;
	
	/** (Deprecated) */
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

	/** (Deprecated) */
	public def initEdgeValue(value : E)
	{
		ensurePlaceRoot();
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_().mOutEdge;
				Parallel.iter(w.value.range(), (tid :Long, r :LongRange) => {
					for(i in r) w.value(i) = value;
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
			if(index < 0 || index > size())
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
	public def edgeValues() = mWorkers().mOutEdge.value;
	
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
	 * 
	 * 
	 * The combiner and aggregator are optional parameters. You can pass null for these two parameters.
	 * 
	 *  
	 * @param compute A compute closure.
	 * @param aggregator An aggreagator closure.
	 * @param combiner A combiner closure. 
	 * @param end An end closure. If the end closure returns true, the iteration is terminated.
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
	public def once(compute :(ctx:VertexContext[V,E,Any,Any]) => void)
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
					(ctx:VertexContext[V,E,Any,Any],messages:MemoryChunk[Any])
					=> { compute(ctx); };
				workers_().run[Any,Any](actual_compute, null, null, (Int,Any) => true);
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
}
