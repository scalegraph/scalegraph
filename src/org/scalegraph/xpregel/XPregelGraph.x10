package org.scalegraph.xpregel;

import x10.util.Team;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.tuple.Tuple2;

import org.scalegraph.util.Team2;
import org.scalegraph.util.Parallel;

import org.scalegraph.graph.Graph;
import org.scalegraph.graph.DistSparseMatrix;
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
	
	public def initDefaultVertexValue(value : V)
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_();
				Parallel.iter(w.mVertexValue.range(), (tid :Long, r :LongRange) => {
					for(i in r) w.mVertexValue(i) = value;
				});
			}
			catch (e :CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
	
	public def zipVertexValue[T](a_ :DistMemoryChunk[T], compute : (v:T) => V){T haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_();
				val a = a_();
				Parallel.iter(w.mVertexValue.range(), (tid :Long, r :LongRange) => {
					for(i in r) w.mVertexValue(i) = compute(a(i));
				});
			}
			catch (e :CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
	
	public def zipVertexValue[T1,T2](a1_ :DistMemoryChunk[T1], a2_ :DistMemoryChunk[T2], 
			compute :(T1, T2) => V) {T1 haszero, T2 haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_();
				val a1 = a1_();
				val a2 = a2_();
				Parallel.iter(w.mVertexValue.range(), (tid :Long, r :LongRange) => {
					for(i in r) w.mVertexValue(i) = compute(a1(i), a2(i));
				});
			}
			catch (e :CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
	
	public def zipVertexValue[T1,T2,T3](a1_ :DistMemoryChunk[T1], a2_ :DistMemoryChunk[T2], a3_ :DistMemoryChunk[T3],
			compute : (v1:T1,v2:T2,v3:T3) => V) {T1 haszero, T2 haszero, T3 haszero}
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
					for(i in r) w.mVertexValue(i) = compute(a1(i), a2(i), a3(i));
				});
			}
			catch (e :CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
			
	public def initDefaultEdgeValue(value : E)
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			try {
				val w = workers_().mOutEdge;
				Parallel.iter(w.value.range(), (tid :Long, r :LongRange) => {
					for(i in r) w.value(i) = value;
				});
			}
			catch (e :CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
			
	public def zipEdgeValue[T] (a_ :DistMemoryChunk[T], compute :(T) => E) {T haszero}
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
			}
			catch (e :CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
	
	public def zipEdgeValue[T1,T2] (a1_ :DistMemoryChunk[T1], a2_ :DistMemoryChunk[T2], 
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
			}
			catch (e :CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
			
	public def zipEdgeValue[T1,T2,T3] (a1_ :DistMemoryChunk[T1], a2_ :DistMemoryChunk[T2], a3_ :DistMemoryChunk[T3],
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
			}
			catch (e :CheckedThrowable) {
				e.printStackTrace();
			}
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
			}
			catch (e :CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
	
	public def updateInEdgeAndValue() {
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat(() => {
			try {
				workers_().updateInEdgeWithValue();
			}
			catch (e :CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
	
	public def do_computations[M,A](
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
			}
			catch (e :CheckedThrowable) {
				e.printStackTrace();
			}
		});
		Console.OUT.println("End processing...");
	}
	
}
