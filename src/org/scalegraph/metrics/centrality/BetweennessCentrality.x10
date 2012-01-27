package org.scalegraph.metrics.centrality;

import org.scalegraph.graph.*;
import x10.util.*;
import x10.lang.PlaceLocalHandle;
import x10.array.Dist;

/**
 * 
 */
public class BetweennessCentrality {
	
	val graph: AttributedGraph;
	val isNormalize: Boolean;
	val betweennessScore: Array[Double];
	val numNodes: Int;
	val vertexIdAndIndexMap: HashMap [Long, Int];
	var remoteVertexIdAndIndexMap: GlobalRef[HashMap[Long, Int]];
	// val verticesToEstimate: Array[Vertex];
	
	protected def this(graph: Graph, isNormalize: Boolean) {
		// Keep datafrom user to instance's memeber
		this.graph = graph as AttributedGraph;
		this.isNormalize = isNormalize;
		
		// Initialize data
		this.numNodes = this.graph.getVertexCount() as Int;
		this.betweennessScore = new Array[Double](numNodes, 0.0D);
		this.vertexIdAndIndexMap = new HashMap[Long, Int](numNodes);
	}
	
	public static def run(graph: Graph, isNormalize: Boolean) : Array[Pair[Vertex, Double]] {
		
		val estimateVertices = new ArrayBuilder[Vertex]();
		val g = graph as AttributedGraph;
		
		g.iterateOverVertices((v: Vertex) => {
			estimateVertices.add(v);
		});
		
		return runInternal(graph, estimateVertices.result(), isNormalize);
	}
	
	public static def run(graph: Graph, verticesToEstimate: Array[Vertex], isNormalize: Boolean) : Array[Pair[Vertex, Double]] {
		return runInternal(graph, verticesToEstimate, isNormalize);
	}
	
	public static def runInternal(graph: Graph, verticesToEstimate: Array[Vertex], isNormalize: Boolean): Array[Pair[Vertex, Double]] {
		
		val betweennesCentrality: PlaceLocalHandle[BetweennessCentrality] 
		= PlaceLocalHandle.make[BetweennessCentrality](Dist.makeUnique(), 
				() => { new BetweennessCentrality(graph, isNormalize) } );
		

		val refVertexIdAndIndexMap =  GlobalRef[HashMap[Long, Int]](new HashMap[Long, Int]());
		
		finish {
						
			for([p] in 0..(Place.MAX_PLACES -1)) {
				at (Place(p)) async {
					
					betweennesCentrality().remoteVertexIdAndIndexMap = refVertexIdAndIndexMap;
					betweennesCentrality().calculate();
					
				}
			}
			
			Console.OUT.println("Wait for other nodes");
		}
		
		// // Make result pairs
		val arrayBuilder: ArrayBuilder[Pair[Vertex, Double]] = new ArrayBuilder[Pair[Vertex, Double]]();
		for(i in verticesToEstimate) {
			val v = verticesToEstimate(i);
			val score = betweennesCentrality().betweennessScore(betweennesCentrality().getIndex(verticesToEstimate(i)));
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
		
		// if(vertexIdAndIndexMap.containsKey(v.getInternalId())) {
		// 	return vertexIdAndIndexMap.get(v.getInternalId()).value;
		// }
		// val mapSize = vertexIdAndIndexMap.size();
		// vertexIdAndIndexMap.put(v.getInternalId(), mapSize);
		// 
		// return mapSize;
		
		val vertexId = remoteVertexIdAndIndexMap.evalAtHome((h: HashMap[Long, Int]) => {
			if(h.containsKey(v.getInternalId())) {
				return h.get(v.getInternalId()).value;
			}
			val mapSize = h.size();
			h.put(v.getInternalId(), mapSize);
			
			return mapSize;
		});
		
		return vertexId;
	}
	
	
	
	//public def runAlgorithms
	
	// public def start() {
	// 	Console.OUT.println("Place: " + here.id);
	// 	for( i in betweennessScore) {
	// 		betweennessScore(i) = 1.0;
	// 	}
	// 	Team.WORLD.allreduce(here.id, betweennessScore, 0, betweennessScore, 0, numNodes, Team.ADD);
	// }
	
// 	val graph: DistAttributedGraph;
// 	val isNormalize: Boolean;
// 	val betweennessScore: Array[Double];
// 	val numNodes: Int;
// 	val vertexIdAndIndexMap: HashMap [Long, Int];
// 	val verticesToEstimate: Array[Vertex];
// 	
// 	/**
// 	 * 
// 	 */
// 	protected def this(graph: Graph, verticesToEstimate: Array[Vertex], isNormalize: Boolean) {
// 		// Keep datafrom user to instance's memeber
// 		this.graph = graph as DistAttributedGraph;
// 		this.isNormalize = isNormalize;
// 		this.verticesToEstimate = verticesToEstimate;
// 		
// 		// Initialize data
// 		this.numNodes = this.graph.getVertexCount() as Int;
// 		this.betweennessScore = new Array[Double](numNodes, 0.0D);
// 		this.vertexIdAndIndexMap = new HashMap[Long, Int](numNodes);
// 		// this.traverseQ = new ArrayList[Vertex](100);
// 		// this.distanceMap = new Array[Long](numNodes);
// 		// this.geodesicsMap = new Array[Long](numNodes);
// 		// this.tempScore = new Array[Double](numNodes);
// 		// this.predecessorIdStack = new Stack[Vertex]();
// 	}
// 	
// 	
// 	/**
// 	 * 
// 	 */
// 	public static def run(graph: Graph, isNormalize: Boolean) : 
// 		Array[Pair[Vertex, Double]] {
// 	
// 		// User didn't specify which vertex to cal BC
// 		// So assume whole graph
// 		
// 		// Build array of vertices
// 		val g: DistAttributedGraph = graph as DistAttributedGraph;
// 		val arrayBuilder: ArrayBuilder[Vertex] = new ArrayBuilder[Vertex]();
// 		// val iterator: Iterator[Map.Entry[long, Vertex]] = g.getVertexIterator();
// 		// 
// 		// while(iterator.hasNext()) {
// 		// 	val entry: Map.Entry[long, Vertex] = iterator.next();
// 		// 	arrayBuilder.add(entry.getValue());
// 		// }
// 		
// 		val handler = (v: Vertex) => {
// 			arrayBuilder.add(v);
// 			return;
// 		};	
// 		
// 		g.iterateOverVertices(handler);
// 		
// 		// Run BC calculation
// 		return run(graph, arrayBuilder.result(), isNormalize);
// 		
// 	}
// 	
// 	public static def run(graph: Graph, vertices: Array[Vertex], isNormalize: Boolean) 
// 		: Array[Pair[Vertex, Double]] {
// 	
// 		val worker: BetweennessCentrality = new BetweennessCentrality(graph, vertices, isNormalize);
// 		return worker.runInternal();
// 	}
// 	
// 	
// 	protected def runInternal() : Array[Pair[Vertex, Double]]{
// 		
// 		val handler = (source: Vertex) => {
// 				Console.OUT.println("Run for source: " + source);
// 				doBfsLocally(source);
// 			return;
// 		};		
// 		
// 		this.graph.iterateOverVertices(handler);
// 	// 	// Calculate BC for each vertex as a source
// 	// 	vertexEntryInterator: Iterator[Map.Entry[Long, Vertex]] = graph.getVertexIterator();
// 	// 
// 	// 	var count: Int = 0;
// 	// 	finish {
// 	// 		while(vertexEntryInterator.hasNext()) {
// 	// 			entry: Map.Entry[Long, Vertex] = vertexEntryInterator.next();
// 	// 			source: Vertex = entry.getValue();
// 	// 			
// 	// 				async {
// 	// 					atomic ++count;
// 	// 					Console.OUT.println("Run for source: " + source + " Remaining Vertices: " + (this.numNodes - count));
// 	// 					doBfsLocally(source);
// 	// 				}
// 	// 			
// 	// 		}
// 	// 	}
// 
// 		// if undirected graph divide by 2
// 		if(this.graph.isDirected() == false) {
// 			
// 			if(this.isNormalize) {
// 				// Undirected and normalize
// 				for(i in betweennessScore) {
// 					betweennessScore(i) /= ((numNodes -1) * (numNodes - 2)) as Double;
// 				}
// 			} else {
// 				// Undirected only
// 				for(i in betweennessScore) {
// 					betweennessScore(i) /= 2.0D;
// 				}
// 			}
// 		} else {
// 			if(this.isNormalize) {
// 				// Directed and normalize
// 				for(i in betweennessScore) {
// 					betweennessScore(i)  /= (numNodes -1) * (numNodes - 2);
// 				}
// 			}
// 		}
// 		
// 		// Make result pairs
// 		val arrayBuilder: ArrayBuilder[Pair[Vertex, Double]] = new ArrayBuilder[Pair[Vertex, Double]]();
// 		for(i in verticesToEstimate) {
// 			val v = verticesToEstimate(i);
// 			val score = betweennessScore(getIndex(verticesToEstimate(i)));
// 			val p: Pair[Vertex, Double] = new Pair[Vertex, Double](v, score);
// 			arrayBuilder.add(p);
// 		}
// 		
// 		return arrayBuilder.result();
// 	}
// 	
// 	public def getIndex(v: Vertex): Int {
// 		
// 		if(vertexIdAndIndexMap.containsKey(v.getInternalId())) {
// 			return vertexIdAndIndexMap.get(v.getInternalId()).value;
// 		}
// 		val mapSize = vertexIdAndIndexMap.size();
// 		vertexIdAndIndexMap.put(v.getInternalId(), mapSize);
// 		
// 		return mapSize;
// 	}
// 	
// 	protected  def doBfsLocally(source: Vertex): void {
// 		
// 		val traverseQ: ArrayList[Vertex] = new ArrayList[Vertex](100);
// 		val distanceMap: Array[Long] = new Array[Long](numNodes);;
// 		val geodesicsMap: Array[Long] = new Array[Long](numNodes);
// 		val tempScore: Array[Double] = new Array[Double](numNodes);
// 		val predecessorIdStack: Stack[Vertex] = new Stack[Vertex]();
// 		
// 		// Cleare previous data
// 		for(i in 0..(this.numNodes -1)) {
// 			distanceMap(i) = 0;
// 			geodesicsMap(i) = 0;
// 			tempScore(i) = 0;
// 		}
// 		while(!predecessorIdStack.isEmpty()) {
// 			predecessorIdStack.pop();
// 		}
// 		
// 		// Get source vertex
// 		val sourceIndex: Int = getIndex(source);
// 		distanceMap(sourceIndex) = 0;
// 		geodesicsMap(sourceIndex) = 1;
// 		
// 		traverseQ.add(source);
// 
// 		// Traverse the graph
// 		while(!traverseQ.isEmpty()) {
// 			
// 			actor: Vertex = traverseQ.removeFirst();
// 			actorIndex: Int = getIndex(actor);
// 		
// 			neighbors: Array[Vertex] = this.graph.getNeighbors(actor);
// 			for(i in neighbors) {
// 				neighbor: Vertex = neighbors(i);
// 				val neighborIndex: Int = getIndex(neighbor);
// 				
// 				if(geodesicsMap(neighborIndex) > 0) {
// 					// We found this node again, another shortest path
// 					if(distanceMap(neighborIndex) == distanceMap(actorIndex) + 1) {
// 						geodesicsMap(neighborIndex) += geodesicsMap(actorIndex);
// 					}
// 				} else {
// 					// Found this node first time
// 					geodesicsMap(neighborIndex) += geodesicsMap(actorIndex);
// 					distanceMap(neighborIndex) = distanceMap(actorIndex) + 1;
// 					traverseQ.add(neighbor);
// 					predecessorIdStack.push(neighbor);
// 				}
// 			}
// 		} // End of traversal
// 		
// 
// 		// Calculate score
// 		while(!predecessorIdStack.isEmpty()) {
// 			
// 			val actor: Vertex = predecessorIdStack.pop();
// 			val actorIndex: Int = getIndex(actor);
// 			
// 			// Skip process the source
// 			if(distanceMap(actorIndex) <= 1) {
// 				continue;
// 			}
// 			
// 			neighbors: Array[Vertex] = this.graph.getNeighbors(actor);
// 			
// 			for(i in neighbors) {
// 				neighbor: Vertex = neighbors(i);
// 				val neighborIndex: Int = getIndex(neighbor);
// 				
// 				if(distanceMap(neighborIndex) == distanceMap(actorIndex) - 1) {
// 					tempScore(neighborIndex) += (tempScore(actorIndex) + 1.0D) * 
// 						(geodesicsMap(neighborIndex) as Double) / (geodesicsMap(actorIndex) as Double);
// 				}
// 			}
// 		} // End calculate score
// 		
// 		Console.OUT.println("Update score");
// 		for(i in 0..(betweennessScore.size -1)) {
// 			betweennessScore(i) += tempScore(i);
// 			Console.OUT.print(betweennessScore(i) + " ");
// 		}
// 		Console.OUT.println();
// 
// 	}
}
// package org.scalegraph.metrics.centrality;
// 
// import org.scalegraph.graph.Graph;
// import org.scalegraph.graph.Attribute;
// import org.scalegraph.graph.Vertex;
// import org.scalegraph.graph.AttributedGraph;
// import x10.util.ArrayList;
// import x10.util.HashMap;
// import x10.util.Map;
// import x10.util.Stack;
// import x10.util.ArrayBuilder;
// import x10.util.Pair;
// 
// /**
//  * 
//  */
// public class BetweennessCentrality {
// 	
// 	var graph: AttributedGraph;
// 	var isNormalize: Boolean;
// 	var betweennessScore: Array[Double];
// 	var numNodes: Int;
// 	var vertexIdAndIndexMap: HashMap [Long, Int];
// 	var traverseQ: ArrayList[Vertex];
// 	var distanceMap: Array[Long];
// 	var geodesicsMap: Array[Long];
// 	var tempScore: Array[Double];
// 	var predecessorIdStack: Stack[Vertex];
// 	var verticesToEstimate: Array[Vertex];
// 	
// 	/**
// 	 * 
// 	 */
// 	protected def this(graph: Graph, verticesToEstimate: Array[Vertex], isNormalize: Boolean) {
// 		// Keep datafrom user to instance's memeber
// 		this.graph = graph as AttributedGraph;
// 		this.isNormalize = isNormalize;
// 		this.verticesToEstimate = verticesToEstimate;
// 		
// 		// Initialize data
// 		this.numNodes = this.graph.getNodesCount() as Int;
// 		this.betweennessScore = new Array[Double](numNodes, 0.0D);
// 		this.vertexIdAndIndexMap = new HashMap[Long, Int](numNodes);
// 		this.traverseQ = new ArrayList[Vertex](100);
// 		this.distanceMap = new Array[Long](numNodes);
// 		this.geodesicsMap = new Array[Long](numNodes);
// 		this.tempScore = new Array[Double](numNodes);
// 		this.predecessorIdStack = new Stack[Vertex]();
// 	}
// 	
// 	
// 	/**
// 	 * 
// 	 */
// 	public static def run(graph: Graph, isNormalize: Boolean) : 
// 		Array[Pair[Vertex, Double]] {
// 	
// 		// User didn't specify which vertex to cal BC
// 		// So assume whole graph
// 		
// 		// Build array of vertices
// 		val g: AttributedGraph = graph as AttributedGraph;
// 		val arrayBuilder: ArrayBuilder[Vertex] = new ArrayBuilder[Vertex]();
// 		val iterator: Iterator[Map.Entry[long, Vertex]] = g.getVertexIterator();
// 		
// 		while(iterator.hasNext()) {
// 			val entry: Map.Entry[long, Vertex] = iterator.next();
// 			arrayBuilder.add(entry.getValue());
// 		}
// 		
// 		// Run BC calculation
// 		return run(graph, arrayBuilder.result(), isNormalize);
// 		
// 	}
// 	
// 	public static def run(graph: Graph, vertices: Array[Vertex], isNormalize: Boolean) 
// 		: Array[Pair[Vertex, Double]] {
// 	
// 		val worker: BetweennessCentrality = new BetweennessCentrality(graph, vertices, isNormalize);
// 		return worker.runInternal();
// 	}
// 	
// 	
// 	protected def runInternal() : Array[Pair[Vertex, Double]]{
// 		
// 		
// 		// Calculate BC for each vertex as a source
// 		vertexEntryInterator: Iterator[Map.Entry[Long, Vertex]] = graph.getVertexIterator();
// 
// 		while(vertexEntryInterator.hasNext()) {
// 			entry: Map.Entry[Long, Vertex] = vertexEntryInterator.next();
// 			source: Vertex = entry.getValue();
// 			doBfsLocally(source);
// 		}
// 		
// 		
// 		// if undirected graph divide by 2
// 		if(this.graph.isDirected() == false) {
// 			
// 			if(this.isNormalize) {
// 				// Undirected and normalize
// 				for(i in betweennessScore) {
// 					betweennessScore(i) /= ((numNodes -1) * (numNodes - 2)) as Double;
// 				}
// 			} else {
// 				// Undirected only
// 				for(i in betweennessScore) {
// 					betweennessScore(i) /= 2.0D;
// 				}
// 			}
// 		} else {
// 			if(this.isNormalize) {
// 				// Directed and normalize
// 				for(i in betweennessScore) {
// 					betweennessScore(i)  /= (numNodes -1) * (numNodes - 2);
// 				}
// 			}
// 		}
// 		
// 		// Make result pairs
// 		val arrayBuilder: ArrayBuilder[Pair[Vertex, Double]] = new ArrayBuilder[Pair[Vertex, Double]]();
// 		
// 		for(i in verticesToEstimate) {
// 			val v = verticesToEstimate(i);
// 			val score = betweennessScore(getIndex(verticesToEstimate(i)));
// 			val p: Pair[Vertex, Double] = new Pair[Vertex, Double](v, score);
// 			arrayBuilder.add(p);
// 		}
// 		
// 		return arrayBuilder.result();
// 	}
// 	
// 	public def getIndex(v: Vertex): Int {
// 		
// 		if(vertexIdAndIndexMap.containsKey(v.getInternalId())) {
// 			return vertexIdAndIndexMap.get(v.getInternalId()).value;
// 		}
// 		val mapSize = vertexIdAndIndexMap.size();
// 		vertexIdAndIndexMap.put(v.getInternalId(), mapSize);
// 		
// 		return mapSize;
// 	}
// 	
// 	protected  def doBfsLocally(source: Vertex) {
// 		
// 		// Cleare previous data
// 		for(i in 0..(this.numNodes -1)) {
// 			distanceMap(i) = 0;
// 			geodesicsMap(i) = 0;
// 			tempScore(i) = 0;
// 		}
// 		
// 		while(!predecessorIdStack.isEmpty()) {
// 			predecessorIdStack.pop();
// 		}
// 		
// 		// Get source vertex
// 		// val g: AttributedGraph = graph as AttributedGraph;
// 		val sourceIndex: Int = getIndex(source);
// 		distanceMap(sourceIndex) = 0;
// 		geodesicsMap(sourceIndex) = 1;
// 		
// 		traverseQ.add(source);
// 		
// 		// Traverse the graph
// 		while(!traverseQ.isEmpty()) {
// 			
// 			actor: Vertex = traverseQ.removeFirst();
// 		actorIndex: Int = getIndex(actor);
// 		
// 		neighbors: Array[Vertex] = this.graph.getNeighbors(actor);
// 		
// 			for(i in neighbors) {
// 				neighbor: Vertex = neighbors(i);
// 				val neighborIndex: Int = getIndex(neighbor);
// 				
// 				if(geodesicsMap(neighborIndex) > 0) {
// 					// We found this node again, another shortest path
// 					if(distanceMap(neighborIndex) == distanceMap(actorIndex) + 1) {
// 						geodesicsMap(neighborIndex) += geodesicsMap(actorIndex);
// 					}
// 				} else {
// 					// Found this node first time
// 					geodesicsMap(neighborIndex) += geodesicsMap(actorIndex);
// 					distanceMap(neighborIndex) = distanceMap(actorIndex) + 1;
// 					traverseQ.add(neighbor);
// 					predecessorIdStack.push(neighbor);
// 				}
// 			}
// 		} // End of traversal
// 		
// 		
// 		// Calculate score
// 		while(!predecessorIdStack.isEmpty()) {
// 			
// 			val actor: Vertex = predecessorIdStack.pop();
// 			val actorIndex: Int = getIndex(actor);
// 			
// 			// Skip process the source
// 			if(distanceMap(actorIndex) <= 1) {
// 				continue;
// 			}
// 			
// 			neighbors: Array[Vertex] = this.graph.getNeighbors(actor);
// 			
// 			for(i in neighbors) {
// 				neighbor: Vertex = neighbors(i);
// 				val neighborIndex: Int = getIndex(neighbor);
// 				
// 				if(distanceMap(neighborIndex) == distanceMap(actorIndex) - 1) {
// 					tempScore(neighborIndex) += (tempScore(actorIndex) + 1.0D) * 
// 						(geodesicsMap(neighborIndex) as Double) / (geodesicsMap(actorIndex) as Double);
// 				}
// 			}
// 		} // End calculate score
// 		
// 		for(i in 0..(betweennessScore.size -1)) {
// 			betweennessScore(i) += tempScore(i);
// 		}
// 	}
// 	
// 	
// 	// protected def printDetail(g: AttributedGraph) {
// 	// 	
// 	// 	vertexEntryInterator: Iterator[Map.Entry[Long, Vertex]] = g.getVertexIterator();
// 	// 
// 	// 	// Iterate over entry
// 	// 	while(vertexEntryInterator.hasNext()) {
// 	// 		
// 	// 		e: Map.Entry[Long, Vertex] = vertexEntryInterator.next();
// 	// 		v: Vertex = e.getValue();
// 	// 		id: String = (v.getAttribute("id") as Attribute).value;
// 	// 		vertexIndex: Int = getIndex(v);
// 	// 		distance: Long = distanceMap(vertexIndex);
// 	// 		geodesic: Long = geodesicsMap(vertexIndex);
// 	// 		score: Double = betweennessScore(vertexIndex);
// 	// 		Console.OUT.println("id: " + id + 
// 	// 				"\tdistance: " + distance + 
// 	// 				"\tgeodesics: " + geodesic + 
// 	// 				"\tscore: " + score);
// 	// 	}
// 	// }
// }