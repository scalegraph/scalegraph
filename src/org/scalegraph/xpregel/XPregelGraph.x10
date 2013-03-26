package org.scalegraph.xpregel;
import org.scalegraph.xpregel.comm.WorkerPlaceGraph;
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
/**
 * a main entry for processing 
 * graph with X-Pregel
 * 
 */
public class XPregelGraph[V,E]{V haszero, E haszero} {

	var mWorkers:PlaceLocalHandle[WorkerPlaceGraph[V,E]];
	val mTeam:Team;
	var mContext:XpregelContext;
	var vertexAttributes : HashMap[String,Any];
	var edgeAttributes : HashMap[String,Any];
	
	public def this(team:Team, data: DistSparseMatrix) {
		mTeam = team;
		mContext = new XpregelContext(data.ids());
		val _context = mContext;
		mWorkers = PlaceLocalHandle.makeFlat[WorkerPlaceGraph[V,E]](mTeam.placeGroup(),() => new WorkerPlaceGraph[V,E](team,data(),_context));	
	}
	
	public def constructAdjacencyListVertices(graph:Graph) {
		
	}
	
	/** 
	 * update the in edges 
	 * data at each worker
	 * 
	 */
	public def updateInEdge() {
		val sendInComputation = new SendInEdgeCommunication[V,E]();
		do_computations[Tuple2[Long,E],Double](sendInComputation, null);
	}
	
	public def setVertexAttributes(attributes:HashMap[String,Any]) {
		vertexAttributes = attributes;
	}
	
	public def setEdgeAttributes(attributes:HashMap[String,Any]) {
		edgeAttributes = attributes;
	}
	
	public def do_computations[M,A](computation:ComputationInterface[V,E,M,A], aggregator : AggregatorInterface[A]) {
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
	
	public def do_computations[M,A](computation:(vertex:Vertex[V,E],messages:MemoryChunk[Tuple2[Long,M]],_appcontext:XContext[M,A]) => void, aggregator : AggregatorInterface[A]) {
		val _team = mTeam;
		val _context = mContext;
		val service = PlaceLocalHandle.makeFlat[MessageCommunicationService[M,A]](_team.placeGroup(),
				() => new MessageCommunicationService[M,A](_team,1000,_context));
		val workers_ = mWorkers;
		Console.OUT.println("Start processing ...");

		_team.placeGroup().broadcastFlat(() => {
			workers_().run[M,A](computation, aggregator, service());
			//workers_().test(service());
		});
		
		Console.OUT.println("End processing...");
	}
	
	public def setAttributes[T](name:String, value:DistGrowableMemory[T], vertexOrEdge:Boolean) {
		val _value = value;
		val _workers = mWorkers;
		_team.placeGroup().broadcastFlat(() => {
			_workers().setAttributes(name,_value(),vertexOrEdge);
		});
	}
	
}