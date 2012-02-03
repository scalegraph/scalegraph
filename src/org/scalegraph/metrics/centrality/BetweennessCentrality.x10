package org.scalegraph.metrics.centrality;

import org.scalegraph.graph.*;
import x10.util.*;
import x10.lang.PlaceLocalHandle;
import x10.array.Dist;
import x10.util.concurrent.*;

/**
 * 
 */
public class BetweennessCentrality {
	
	val graph: AttributedGraph;
	val isNormalize: Boolean;
	val betweennessScore: Array[Double];
	val numNodes: Int;
	val vertexIdAndIndexMap: HashMap [Long, Int];

	// var remoteVertexIdAndIndexMap: GlobalRef[HashMap[Long, Int]];
	// var remoteGetIndexlock: GlobalRef[Lock];
	

	
	protected def this(graph: Graph, inputVertexIdAndIndexMap: HashMap[Long, Int], isNormalize: Boolean) {
		// Keep datafrom user to instance's memeber
		this.graph = graph as AttributedGraph;
		this.isNormalize = isNormalize;
		
		// Initialize data
		this.numNodes = this.graph.getVertexCount() as Int;
		this.betweennessScore = new Array[Double](numNodes, 0.0D);
		this.vertexIdAndIndexMap = inputVertexIdAndIndexMap;
	}
	
	public static def run(graph: Graph, isNormalize: Boolean) : Array[Pair[Vertex, Double]] {
		
		val estimateVertices = new ArrayBuilder[Vertex]();
		val g = graph as AttributedGraph;
		

		val localVertexIdAndIndexMap = new HashMap[Long, Int]();
		
		g.iterateOverVertices((v: Vertex) => {
			estimateVertices.add(v);
			val index = localVertexIdAndIndexMap.size();
			localVertexIdAndIndexMap.put(v.getInternalId(), index);
		});
		
		return runInternal(graph, estimateVertices.result(), localVertexIdAndIndexMap, isNormalize);
	}
	
	public static def run(graph: Graph, verticesToEstimate: Array[Vertex], isNormalize: Boolean) : Array[Pair[Vertex, Double]] {

		val g = graph as AttributedGraph;
		
		val localVertexIdAndIndexMap = new HashMap[Long, Int]();
		g.iterateOverVertices((v: Vertex) => {
			val index = localVertexIdAndIndexMap.size();
			localVertexIdAndIndexMap.put(v.getInternalId(), index);
		});
		return runInternal(graph, verticesToEstimate, localVertexIdAndIndexMap, isNormalize);
	}
	
	public static def runInternal(graph: Graph, verticesToEstimate: Array[Vertex], vertexIdAndIndexMap:HashMap[Long, Int], isNormalize: Boolean): Array[Pair[Vertex, Double]] {
		
		val betweennessCentrality: PlaceLocalHandle[BetweennessCentrality] 
		= PlaceLocalHandle.make[BetweennessCentrality](Dist.makeUnique(), 
				() => { new BetweennessCentrality(graph, vertexIdAndIndexMap, isNormalize) } );
		
		// val refVertexIdAndIndexMap =  GlobalRef[HashMap[Long, Int]](new HashMap[Long, Int]());
		// val getIndexLock = GlobalRef[Lock](new Lock());
		
		// Create internalId and Array Index Map

		
		
		finish {
						
			for([p] in 0..(Place.MAX_PLACES -1)) {
				at (Place(p)) async {
					
					// betweennessCentrality().remoteVertexIdAndIndexMap = refVertexIdAndIndexMap;
					// betweennessCentrality().remoteGetIndexlock = getIndexLock;
					betweennessCentrality().calculate();
					
				}
			}
			
			Console.OUT.println("Wait for other nodes");
		}
		
		// // Make result pairs
		val arrayBuilder: ArrayBuilder[Pair[Vertex, Double]] = new ArrayBuilder[Pair[Vertex, Double]]();
		for(i in verticesToEstimate) {
			val v = verticesToEstimate(i);
			val score = betweennessCentrality().betweennessScore(betweennessCentrality().getIndex(verticesToEstimate(i)));
			val p: Pair[Vertex, Double] = new Pair[Vertex, Double](v, score);
			arrayBuilder.add(p);
		}
		return arrayBuilder.result();
	}
	
	public def calculate() {
		// graph.iterateOverVerticesLocally((v: Vertex) => {Console.OUT.println("Here: " + here.id + " v: " + v);});
		
		finish {
			graph.iterateOverVerticesLocally((v: Vertex) => {
				Console.OUT.println("Run for source: " + v);
				async doBfs(v);
			});
		}
		// if undirected graph divide by 2
		if(this.graph.isDirected() == false) {
			
			if(this.isNormalize) {
				// Undirected and normalize
				for(i in betweennessScore) {
					betweennessScore(i) /= ((numNodes -1) * (numNodes - 2)) as Double;
				}
			} else {
				// Undirected only
				for(i in betweennessScore) {
					betweennessScore(i) /= 2.0D;
				}
			}
		} else {
			if(this.isNormalize) {
				// Directed and normalize
				for(i in betweennessScore) {
					betweennessScore(i)  /= (numNodes -1) * (numNodes - 2);
				}
			}
		}
		
		Team.WORLD.allreduce(here.id, betweennessScore, 0, betweennessScore, 0, numNodes, Team.ADD);
	}
	
	protected  def doBfs(source: Vertex): void {
		
		val traverseQ: ArrayList[Vertex] = new ArrayList[Vertex](100);
		val distanceMap: Array[Long] = new Array[Long](numNodes);;
		val geodesicsMap: Array[Long] = new Array[Long](numNodes);
		val tempScore: Array[Double] = new Array[Double](numNodes);
		val predecessorIdStack: Stack[Vertex] = new Stack[Vertex]();
		
		// Cleare previous data
		for(i in 0..(this.numNodes -1)) {
			distanceMap(i) = 0;
			geodesicsMap(i) = 0;
			tempScore(i) = 0;
		}
		while(!predecessorIdStack.isEmpty()) {
			predecessorIdStack.pop();
		}
		
		// Get source vertex
		val sourceIndex: Int = getIndex(source);
		distanceMap(sourceIndex) = 0;
		geodesicsMap(sourceIndex) = 1;
		
		traverseQ.add(source);
		
		// Traverse the graph
		while(!traverseQ.isEmpty()) {
			
			actor: Vertex = traverseQ.removeFirst();
			actorIndex: Int = getIndex(actor);
		
			neighbors: Array[Vertex] = this.graph.getNeighbors(actor);
		
			for(i in neighbors) {
				neighbor: Vertex = neighbors(i);
				val neighborIndex: Int = getIndex(neighbor);
		
				if(geodesicsMap(neighborIndex) > 0) {
					// We found this node again, another shortest path
					if(distanceMap(neighborIndex) == distanceMap(actorIndex) + 1) {
						geodesicsMap(neighborIndex) += geodesicsMap(actorIndex);
					}
				} else {
					// Found this node first time
					geodesicsMap(neighborIndex) += geodesicsMap(actorIndex);
					distanceMap(neighborIndex) = distanceMap(actorIndex) + 1;
					traverseQ.add(neighbor);
					predecessorIdStack.push(neighbor);
				}
			}
		} // End of traversal
		
		// Calculate score
		while(!predecessorIdStack.isEmpty()) {
			
			val actor: Vertex = predecessorIdStack.pop();
			val actorIndex: Int = getIndex(actor);
			
			// Skip process the source
			if(distanceMap(actorIndex) <= 1) {
				continue;
			}
			
			neighbors: Array[Vertex] = this.graph.getNeighbors(actor);
			
			for(i in neighbors) {
				neighbor: Vertex = neighbors(i);
				val neighborIndex: Int = getIndex(neighbor);
			
				if(distanceMap(neighborIndex) == distanceMap(actorIndex) - 1) {
					tempScore(neighborIndex) += (tempScore(actorIndex) + 1.0D) * 
					(geodesicsMap(neighborIndex) as Double) / (geodesicsMap(actorIndex) as Double);
				}
			}
		} // End calculate score
		atomic {
			for(i in 0..(betweennessScore.size -1)) {
				betweennessScore(i) += tempScore(i);
			}
		}
		
		Console.OUT.println("End for src: " + source);
	}
	
	public def getIndex(v: Vertex): Int {
		
			// val inputId = v.getInternalId();
// 			
// 			if(vertexIdAndIndexMap.containsKey(inputId)) {
// 				val id = vertexIdAndIndexMap.get(inputId).value;
// 
// 				return id;
// 			}
// 			
			// val vertexId = at(remoteVertexIdAndIndexMap.home()) {
			// 	
			// 	// remoteGetIndexlock().lock();
			// 	atomic {
			// 	val hashmap = remoteVertexIdAndIndexMap();
			// 	val box = hashmap.get(inputId);
			// 	if(box != null) {
			// 		remoteGetIndexlock().unlock();
			// 		return box.value;
			// 	}
			// 	
			// 	val mapsize = hashmap.size();
			// 	hashmap.put(inputId, mapsize);
			// 	// remoteGetIndexlock().unlock();
			// 	
			// 	return mapsize;}
			// };
			// 
			// 	// vertexIdAndIndexMap.put(inputId, vertexId);
			
			val vertexId = vertexIdAndIndexMap.get(v.getInternalId()).value;
			return vertexId;
		
	}
}