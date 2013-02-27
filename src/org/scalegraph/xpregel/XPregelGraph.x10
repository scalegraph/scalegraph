package org.scalegraph.xpregel;
import org.scalegraph.xpregel.comm.WorkerPlaceGraph;
import x10.util.Team;
import org.scalegraph.xpregel.ComputationInterface;
import org.scalegraph.xpregel.comm.MessageCommunicationService;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.DistSparseMatrix;
/**
 * a main entry for processing 
 * graph with X-Pregel
 * 
 */
public class XPregelGraph[I,V,E]{I haszero, V haszero, E haszero} {
	
	var mWorkers:PlaceLocalHandle[WorkerPlaceGraph[I,V,E]];
	val mTeam:Team;
	
	public def this(team:Team, data: DistSparseMatrix) {
		mTeam = team;
		mWorkers = PlaceLocalHandle.makeFlat[WorkerPlaceGraph[I,V,E]](mTeam.placeGroup(),() => new WorkerPlaceGraph[I,V,E](mTeam,data));
	}
	
	public def constructAdjacencyListVertices(graph:Graph) {
		
	}
	
	/** 
	 * update the in edges 
	 * data at each worker
	 * 
	 */
	public def updateInEdge() {
		
	}
	
	public def do_computations[M](computation:ComputationInterface[M]) {
		val service = new MessageCommunicationService[M](mTeam,1000);
		val workers_ = mWorkers;
		mTeam.placeGroup().broadcastFlat(() => {
		//	workers_().run[M](computation,service);
			if (here.id == 2) {
				Console.OUT.println(here.id + " has " + workers_().getVerticesNumber() + " vertices");
				Console.OUT.println(here.id + " has " + workers_().getEdgesNumber(true) + " edges");
			}
		});
	}
	
}