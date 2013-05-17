package org.scalegraph.xpregel;

import x10.util.Team;
import org.scalegraph.xpregel.ComputationInterface;
import org.scalegraph.xpregel.comm.MessageCommunicationService;
import org.scalegraph.xpregel.comm.SendInEdgeCommunication;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.DistSparseMatrix;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.tuple.Tuple2;
import x10.util.HashMap;
import org.scalegraph.graph.Attribute;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.xpregel.comm.AggregatorInterface;
import org.scalegraph.concurrent.Team2;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.concurrent.Parallel;

/**
 * a main entry for processing 
 * graph with X-Pregel
 * 
 */
public class XPregelGraph[V,E]{V haszero, E haszero} {

	var mWorkers :PlaceLocalHandle[WorkerPlaceGraph[V,E]];
	val mTeam :Team2;
//	var mContext:XpregelContext;
	var vertexAttributes :HashMap[String, Any];
	var edgeAttributes :HashMap[String, Any];
	
	public def this(team :Team, data :DistSparseMatrix)
	{
		mTeam = new Team2(team);
//		mContext = new XpregelContext(data.ids());
//		val _context = mContext;
		mWorkers = PlaceLocalHandle.makeFlat[WorkerPlaceGraph[V,E]](mTeam.placeGroup(),
				() => new WorkerPlaceGraph[V,E](team, data));
	}
	
	public def initDefaultVertexValue(value : V)
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			val w = workers_();
			Parallel.iter(w.mVertexValue.range(), (tid :Long, r :LongRange) => {
				for(i in r) w.mVertexValue(i) = value;
			});
		});
	}
	
	public def zipVertexValue[T](a_ :DistMemoryChunk[T], compute : (v:T) => V){T haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			val w = workers_();
			val a = a_();
			Parallel.iter(w.mVertexValue.range(), (tid :Long, r :LongRange) => {
				for(i in r) w.mVertexValue(i) = compute(a(i));
			});
		});
	}
	
	public def zipVertexValue[T1,T2](a1_ :DistMemoryChunk[T1], a2_ :DistMemoryChunk[T2], 
			compute :(T1, T2) => V) {T1 haszero, T2 haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			val w = workers_();
			val a1 = a1_();
			val a2 = a2_();
			Parallel.iter(w.mVertexValue.range(), (tid :Long, r :LongRange) => {
				for(i in r) w.mVertexValue(i) = compute(a1(i), a2(i));
			});
		});
	}
	
	public def zipVertexValue[T1,T2,T3](a1_ :DistMemoryChunk[T1], a2_ :DistMemoryChunk[T2], a3_ :DistMemoryChunk[T3],
			compute : (v1:T1,v2:T2,v3:T3) => V) {T1 haszero, T2 haszero, T3 haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			val w = workers_();
			val a1 = a1_();
			val a2 = a2_();
			val a3 = a3_();
			Parallel.iter(w.mVertexValue.range(), (tid :Long, r :LongRange) => {
				for(i in r) w.mVertexValue(i) = compute(a1(i), a2(i), a3(i));
			});
		});
	}
			
	public def initDefaultEdgeValue(value : E)
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			val w = workers_();
			Parallel.iter(w.mOutEdgesValue.range(), (tid :Long, r :LongRange) => {
				for(i in r) w.mOutEdgesValue(i) = value;
			});
		});
	}
			
	public def zipEdgeValue[T] (a_ :DistMemoryChunk[T], compute :(T) => E) {T haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			val w = workers_();
			val a = a_();
			Parallel.iter(w.mOutEdgesValue.range(), (tid :Long, r :LongRange) => {
				for(i in r) w.mOutEdgesValue(i) = compute(a(i));
			});
		});
	}
	
	public def zipEdgeValue[T1,T2] (a1_ :DistMemoryChunk[T1], a2_ :DistMemoryChunk[T2], 
			compute :(T1, T2) => E) {T1 haszero, T2 haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			val w = workers_();
			val a1 = a1_();
			val a2 = a2_();
			Parallel.iter(w.mOutEdgesValue.range(), (tid :Long, r :LongRange) => {
				for(i in r) w.mOutEdgesValue(i) = compute(a1(i), a2(i));
			});
		});
	}
			
	public def zipEdgeValue[T1,T2,T3] (a1_ :DistMemoryChunk[T1], a2_ :DistMemoryChunk[T2], a3_ :DistMemoryChunk[T3],
			compute :(T1, T2, T3) => E) {T1 haszero, T2 haszero, T3 haszero}
	{
		val team_ = mTeam;
		val workers_ = mWorkers;
		team_.placeGroup().broadcastFlat( () => {
			val w = workers_();
			val a1 = a1_();
			val a2 = a2_();
			val a3 = a3_();
			Parallel.iter(w.mOutEdgesValue.range(), (tid :Long, r :LongRange) => {
				for(i in r) w.mOutEdgesValue(i) = compute(a1(i), a2(i), a3(i));
			});
		});
	}
	
	/** 
	 * update the in edges 
	 * data at each worker
	 * 
	 */
	public def updateInEdge(enableValue :Boolean) {
		val _team = mTeam;
		val _context = mContext;
		val sendInComputation = new SendInEdgeCommunication[V,E]();
		val service = PlaceLocalHandle.makeFlat[MessageCommunicationService[Tuple2[Long,E],Double]](_team.placeGroup(),
				() => new MessageCommunicationService[Tuple2[Long,E],Double](_team,1000,_context));
		val _workers = mWorkers;
		_team.placeGroup().broadcastFlat(() => {
			_workers().run[Tuple2[Long,E],Double](sendInComputation,null,service());
		});
		_team.placeGroup().broadcastFlat(() => {
			_workers().initInEdge(service());
		});
	}
	
	public def do_computations[M,A](computation:ComputationInterface[V,E,M,A], aggregator : AggregatorInterface[A]){ M haszero, A haszero} {
		val _team = mTeam;
		val _context = mContext;
		val service = PlaceLocalHandle.makeFlat[MessageCommunicationService[M,A]](_team.placeGroup(),
				() => new MessageCommunicationService[M,A](_team,1000,_context));
		val workers_ = mWorkers;
		Console.OUT.println("Start processing ...");
		_team.placeGroup().broadcastFlat(() => {
			workers_().run[M,A](computation, aggregator, service());
		});
		Console.OUT.println("End processing...");
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
			workers_().run[M,A](compute, aggregator, end);
		});
		Console.OUT.println("End processing...");
	}
	
}
