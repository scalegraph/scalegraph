package org.scalegraph.xpregel;

import x10.util.Team;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.tuple.Tuple2;

import org.scalegraph.concurrent.Team2;
import org.scalegraph.concurrent.Parallel;

import org.scalegraph.graph.Graph;
import org.scalegraph.graph.DistSparseMatrix;
import org.scalegraph.graph.id.OnedC;
import org.scalegraph.graph.Attribute;

/**
 * a main entry for processing 
 * graph with X-Pregel
 * 
 */
public class XPregelGraph[V,E]{V haszero, E haszero} {

	var mWorkers :PlaceLocalHandle[WorkerPlaceGraph[V,E]];
	val mTeam :Team2;
	
	public def this(team :Team, data :DistSparseMatrix)
	{
		mTeam = new Team2(team);
		mWorkers = PlaceLocalHandle.makeFlat[WorkerPlaceGraph[V,E]](mTeam.placeGroup(),
				() => new WorkerPlaceGraph[V,E](team, data));
	}
	
	public def initVertexValue(value : V)
	{
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
	
	public def initVertexValue(compute :(realId :Long) => V)
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_();
				Parallel.iter(w.mVertexValue.range(), (tid :Long, r :LongRange) => {
					val StoV = new OnedC.StoV(w.mIds, w.mTeam.base.role()(0));
					for(i in r) w.mVertexValue(i) = compute(StoV(i));
				});
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	public def initVertexValue[T](a_ :DistMemoryChunk[T], compute :(realId :Long, v :T) => V){T haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_();
				val a = a_();
				Parallel.iter(w.mVertexValue.range(), (tid :Long, r :LongRange) => {
					val StoV = new OnedC.StoV(w.mIds, w.mTeam.base.role()(0));
					for(i in r) w.mVertexValue(i) = compute(StoV(i), a(i));
				});
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	public def initVertexValue[T1,T2](a1_ :DistMemoryChunk[T1], a2_ :DistMemoryChunk[T2], 
			compute :(Long, T1, T2) => V) {T1 haszero, T2 haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_();
				val a1 = a1_();
				val a2 = a2_();
				Parallel.iter(w.mVertexValue.range(), (tid :Long, r :LongRange) => {
					val StoV = new OnedC.StoV(w.mIds, w.mTeam.base.role()(0));
					for(i in r) w.mVertexValue(i) = compute(StoV(i), a1(i), a2(i));
				});
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	public def initVertexValue[T1,T2,T3](a1_ :DistMemoryChunk[T1], a2_ :DistMemoryChunk[T2], a3_ :DistMemoryChunk[T3],
			compute : (Long, T1, T2, T3) => V) {T1 haszero, T2 haszero, T3 haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_();
				val a1 = a1_();
				val a2 = a2_();
				val a3 = a3_();
				Parallel.iter(w.mVertexValue.range(), (tid :Long, r :LongRange) => {
					val StoV = new OnedC.StoV(w.mIds, w.mTeam.base.role()(0));
					for(i in r) w.mVertexValue(i) = compute(StoV(i), a1(i), a2(i), a3(i));
				});
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}

	public def initEdgeValue(value : E)
	{
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
			
	public def initEdgeValue[T] (a_ :DistMemoryChunk[T], compute :(T) => E) {T haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_().mOutEdge;
				val a = a_();
				Parallel.iter(w.value.range(), (tid :Long, r :LongRange) => {
					for(i in r) w.value(i) = compute(a(i));
				});
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	public def initEdgeValue[T1,T2] (a1_ :DistMemoryChunk[T1], a2_ :DistMemoryChunk[T2], 
			compute :(T1, T2) => E) {T1 haszero, T2 haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_().mOutEdge;
				val a1 = a1_();
				val a2 = a2_();
				Parallel.iter(w.value.range(), (tid :Long, r :LongRange) => {
					for(i in r) w.value(i) = compute(a1(i), a2(i));
				});
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
			
	public def initEdgeValue[T1,T2,T3] (a1_ :DistMemoryChunk[T1], a2_ :DistMemoryChunk[T2], a3_ :DistMemoryChunk[T3],
			compute :(T1, T2, T3) => E) {T1 haszero, T2 haszero, T3 haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_().mOutEdge;
				val a1 = a1_();
				val a2 = a2_();
				val a3 = a3_();
				Parallel.iter(w.value.range(), (tid :Long, r :LongRange) => {
					for(i in r) w.value(i) = compute(a1(i), a2(i), a3(i));
				});
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	/** 
	 * update the in edges 
	 * data at each worker
	 * 
	 */
	public def updateInEdge() {
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat(() => {
			try {
				workers_().updateInEdge();
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	public def updateInEdgeAndValue() {
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat(() => {
			try {
				workers_().updateInEdgeWithValue();
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	public def resetSholdBeActiveFlag() {
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat(() => {
			try {
				workers_().mVertexShouldBeActive.clear(true);
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
	}
	
	public def init(compute :(ctx :InitVertexContext[V,E]) => void) {
		val team_ = mTeam;
		val workers_ = mWorkers;
		Console.OUT.println("Start Init processing ...");
		team_.placeGroup().broadcastFlat( () => {
			try {
				workers_().run(compute);
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
		Console.OUT.println("End Init processing...");
	}
	
	public def iterate[M,A](
			compute :(ctx:VertexContext[V,E,M,A],messages:MemoryChunk[M]) => void, 
			aggregator :(MemoryChunk[A])=>A,
			end :(Int,A)=>Boolean){ M haszero, A haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		Console.OUT.println("Start processing ...");
		team_.placeGroup().broadcastFlat( () => {
			try {
				workers_().run[M,A](compute, aggregator, end);
			} catch (e :CheckedThrowable) { e.printStackTrace(); }
		});
		Console.OUT.println("End processing...");
	}
	
}
