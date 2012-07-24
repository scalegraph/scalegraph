package org.scalegraph.metrics.centrality;

import org.scalegraph.graph.*;
import x10.util.*;
import x10.lang.PlaceLocalHandle;
import x10.lang.GlobalRef;
import x10.array.Dist;
import x10.util.concurrent.*;
import x10.io.File;
import x10.io.Printer;
import x10.io.FileWriter;


/**
 * 
 */
public class BetweennessCentrality {
	
	// Properties for AttributedGraph
	transient val attributedGraph: AttributedGraph;
	transient val vertexIdAndIndexMap: HashMap [Long, Int];
	
	// Properties for PlainGraph
	transient val plainGraph: PlainGraph;
	
	// Common properties
	transient val isNormalize: Boolean;
	transient val betweennessScore: IndexedMemoryChunk[Double];
	transient val numVertex: Long;
	transient val maximumVertexId: Long;
	
	transient val updateScoreLock: IndexedMemoryChunk[Lock];
	
	transient val neighborMap: IndexedMemoryChunk[IndexedMemoryChunk[Long]];
	transient val inNeighbourCountMap: IndexedMemoryChunk[Long];
	
	transient var refOfFirstPlace: GlobalRef[BetweennessCentrality];
	transient var syncScoreLock: Lock = new Lock();
	
	transient val cutoffDistance: Long;
	transient val iterations: Long;
	
	protected def this(g: AttributedGraph, inputVertexIdAndIndexMap: HashMap[Long, Int], isNormalize: Boolean, cutoff: Long, iterations: Long) {
		
		// Keep datafrom user to instance's memeber
		this.attributedGraph = g;
		this.isNormalize = isNormalize;
		
		// Initialize data
		if(cutoff < 0)
			throw new Exception("Cutoff value should be equal or more than 0");
		this.numVertex = this.attributedGraph.getVertexCount() as Int;
		this.betweennessScore = IndexedMemoryChunk.allocateZeroed[Double](numVertex);
		this.vertexIdAndIndexMap = inputVertexIdAndIndexMap;
		
		// Unuse properties
		this.plainGraph = null;
		this.maximumVertexId = 0;
		this.neighborMap = IndexedMemoryChunk.allocateZeroed[IndexedMemoryChunk[Long]](0);
		this.inNeighbourCountMap = IndexedMemoryChunk.allocateZeroed[Long](0);
		this.updateScoreLock = IndexedMemoryChunk.allocateZeroed[Lock](0);
		this.cutoffDistance = cutoff;
		this.iterations = iterations;
	}

	protected def this(g: PlainGraph, nVertex: Long, maxVertexId: Long, isNormalize: Boolean, cutoff: Long, iterations: Long) {
		
		this.plainGraph = g;
		this.isNormalize = isNormalize;
		
		// Initialize data
		if(cutoff < 0)
			throw new Exception("Cutoff value should be equal or more than 0");
		
		this.numVertex = nVertex as Int;
		this.maximumVertexId = maxVertexId as Int + 1; // Array start at zero
		this.betweennessScore = IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
		this.neighborMap = IndexedMemoryChunk.allocateZeroed[IndexedMemoryChunk[Long]](maximumVertexId as Int);
		this.inNeighbourCountMap = IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId as Int);
		this.updateScoreLock = IndexedMemoryChunk.allocateUninitialized[Lock](maximumVertexId);
		this.cutoffDistance = cutoff;
		this.iterations = iterations;
		
		for(var i: Long = 0; i < this.updateScoreLock.length(); ++i) {
			this.updateScoreLock(i) = new Lock();
		}
		
		// Unuse properties
		this.vertexIdAndIndexMap = null;
		this.attributedGraph = null;
		
		
	}
    /****************************************************************************
    *                                AttributedGraph                  *
    ****************************************************************************/

	public static def run(g: AttributedGraph, isNormalize: Boolean, cutoff: Long) : Array[Pair[Vertex, Double]] {
		
		val estimateVertices = new ArrayBuilder[Vertex]();
		// val g = graph as AttributedGraph;
		
		val localVertexIdAndIndexMap = new HashMap[Long, Int]();
		
		g.iterateOverVertices((v: Vertex) => {
			estimateVertices.add(v);
			val index = localVertexIdAndIndexMap.size();
			localVertexIdAndIndexMap.put(v.getInternalId(), index);
		});
		
		return runInternal(g, estimateVertices.result(), localVertexIdAndIndexMap, isNormalize, cutoff);
	}
	
	public static def run(g: AttributedGraph, verticesToEstimate: Array[Vertex], isNormalize: Boolean, cutoff: Long) : Array[Pair[Vertex, Double]] {

		// val g = graph as AttributedGraph;
		
		val localVertexIdAndIndexMap = new HashMap[Long, Int]();
		g.iterateOverVertices((v: Vertex) => {
			val index = localVertexIdAndIndexMap.size();
			localVertexIdAndIndexMap.put(v.getInternalId(), index);
		});
		return runInternal(g, verticesToEstimate, localVertexIdAndIndexMap, isNormalize, cutoff);
	}
	
	public static def runInternal(g: AttributedGraph, verticesToEstimate: Array[Vertex], vertexIdAndIndexMap:HashMap[Long, Int], isNormalize: Boolean, cutoff: Long): Array[Pair[Vertex, Double]] {
		
		val betweennessCentrality: PlaceLocalHandle[BetweennessCentrality] 
		= PlaceLocalHandle.make[BetweennessCentrality](Dist.makeUnique(), 
				() => { new BetweennessCentrality(g, vertexIdAndIndexMap, isNormalize, cutoff, 0) } );
		
		finish {
						
			for([p] in 0..(Place.MAX_PLACES -1)) {
				at (Place(p)) async {
					
					betweennessCentrality().calculateOnAttrGraph();
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


	protected def calculateOnAttrGraph() {
		
		finish {
			attributedGraph.iterateOverVerticesLocally((v: Vertex) => {
				Console.OUT.println("Run for source: " + v);
				async doBfsOnAttrGraph(v);
			});
		}
		// if undirected graph divide by 2
		// if(this.attributedGraph.isDirected() == false) {
		// 	
		// 	if(this.isNormalize) {
		// 		// Undirected and normalize
		// 		for(i in betweennessScore) {
		// 			betweennessScore(i) /= ((numVertex -1) * (numVertex - 2)) as Double;
		// 		}
		// 	} else {
		// 		// Undirected only
		// 		for(i in betweennessScore) {
		// 			betweennessScore(i) /= 2.0D;
		// 		}
		// 	}
		// } else {
		// 	if(this.isNormalize) {
		// 		// Directed and normalize
		// 		for(i in betweennessScore) {
		// 			betweennessScore(i)  /= (numVertex -1) * (numVertex - 2);
		// 		}
		// 	}
		// }
		// 
		// Team.WORLD.allreduce(here.id, betweennessScore, 0, betweennessScore, 0, numVertex as Int, Team.ADD);
	}

	public def getIndex(v: Vertex): Int {
		
			val vertexId = vertexIdAndIndexMap.get(v.getInternalId()).value;
			return vertexId;
		
	}
	
	protected  def doBfsOnAttrGraph(source: Vertex): void {
		
		// val traverseQ: ArrayList[Vertex] = new ArrayList[Vertex]();
		// val distanceMap: Array[Long] = new Array[Long](maximumVertexId);;
		// val geodesicsMap: Array[Long] = new Array[Long](numVertex);
		// val tempScore: Array[Double] = new Array[Double](numVertex);
		// val predecessorIdStack: Stack[Vertex] = new Stack[Vertex]();
		// 
		// // Cleare previous data
		// for(i in 0..(this.numVertex -1)) {
		// 	distanceMap(i) = 0;
		// 	geodesicsMap(i) = 0;
		// 	tempScore(i) = 0;
		// }
		// while(!predecessorIdStack.isEmpty()) {
		// 	predecessorIdStack.pop();
		// }
		// 
		// // Get source vertex
		// val sourceIndex: Int = getIndex(source);
		// distanceMap(sourceIndex) = 0;
		// geodesicsMap(sourceIndex) = 1;
		// 
		// traverseQ.add(source);
		// 
		// // Traverse the graph
		// while(!traverseQ.isEmpty()) {
		// 	
		// 	actor: Vertex = traverseQ.removeFirst();
		// 	actorIndex: Int = getIndex(actor);
		// 
		// 	neighbors: Array[Vertex] = this.attributedGraph.getNeighbors(actor);
		// 
		// 	for(i in neighbors) {
		// 		neighbor: Vertex = neighbors(i);
		// 		val neighborIndex: Int = getIndex(neighbor);
		// 
		// 		if(geodesicsMap(neighborIndex) > 0) {
		// 			// We found this node again, another shortest path
		// 			if(distanceMap(neighborIndex) == distanceMap(actorIndex) + 1) {
		// 				geodesicsMap(neighborIndex) += geodesicsMap(actorIndex);
		// 			}
		// 		} else {
		// 			// Found this node first time
		// 			geodesicsMap(neighborIndex) += geodesicsMap(actorIndex);
		// 			distanceMap(neighborIndex) = distanceMap(actorIndex) + 1;
		// 			traverseQ.add(neighbor);
		// 			predecessorIdStack.push(neighbor);
		// 		}
		// 	}
		// } // End of traversal
		// 
		// // Calculate score
		// while(!predecessorIdStack.isEmpty()) {
		// 	
		// 	val actor: Vertex = predecessorIdStack.pop();
		// 	val actorIndex: Int = getIndex(actor);
		// 	
		// 	// Skip process the source
		// 	if(distanceMap(actorIndex) <= 1) {
		// 		continue;
		// 	}
		// 	
		// 	neighbors: Array[Vertex] = this.attributedGraph.getNeighbors(actor);
		// 	
		// 	for(i in neighbors) {
		// 		neighbor: Vertex = neighbors(i);
		// 		val neighborIndex: Int = getIndex(neighbor);
		// 	
		// 		if(distanceMap(neighborIndex) == distanceMap(actorIndex) - 1) {
		// 			tempScore(neighborIndex) += (tempScore(actorIndex) + 1.0D) * 
		// 			(geodesicsMap(neighborIndex) as Double) / (geodesicsMap(actorIndex) as Double);
		// 		}
		// 	}
		// }
		// Todo: update updateScoreLock from object of leck to indexedMemoryChunk of lock 
		// updateScoreLock.lock();
		// 	for(i in 0..(betweennessScore.size -1)) {
		// 		betweennessScore(i) += tempScore(i);
		// 	}
		// 
		// updateScoreLock.unlock();
		
		Console.OUT.println("End for src: " + source);
	}
	
    /****************************************************************************
    *                               PlainGraph                        *
    ****************************************************************************/
   
	public static def run(g: PlainGraph, isNormalize: Boolean) : Array[Pair[Long, Double]] {
		
		//return runInternal(g, , isNormalize);
        return null;
	}
	
	public static def run(g: PlainGraph, verticesToEstimate: Array[Long], isNormalize: Boolean) : Array[Pair[Long, Double]] {

		return runInternal(g, verticesToEstimate, isNormalize, 0);

	}
	
	public static def run(g: PlainGraph, verticesToEstimate: Array[Long], isNormalize: Boolean, cutoff: Int) : Array[Pair[Long, Double]] {

		return runInternal(g, verticesToEstimate, isNormalize, cutoff);

	}
	
	public static def runInternal(g: PlainGraph, verticesToEstimate: Array[Long], isNormalize: Boolean, cutoff: Long): Array[Pair[Long, Double]] {
		
		var elapse: Long = System.currentTimeMillis();
		
		val vertexCount = g.getVertexCount();
		val maximumVertexId= g.getMaximumVertexID();
		val betweennessCentrality: PlaceLocalHandle[BetweennessCentrality] 
		= PlaceLocalHandle.make[BetweennessCentrality](Dist.makeUnique(), 
				() => { new BetweennessCentrality(g, vertexCount, maximumVertexId, isNormalize, cutoff, 0) } );
		
		finish {
			val firstPlaceInstance = new GlobalRef(betweennessCentrality());
			for(p in Place.places()) {
				if(p == here) {
					async {
						
						betweennessCentrality().makeNeighbourMap();
						
						// Force first place to lock score array
						// prevent other places altering betweennessScore array during first place runing BC
						betweennessCentrality().syncScoreLock.lock();
						betweennessCentrality().calculateOnPlainGraph();

					}
				} else
				at (p) async {
					
					betweennessCentrality().setInstanceHandler(firstPlaceInstance);
					betweennessCentrality().makeNeighbourMap();
					betweennessCentrality().calculateOnPlainGraph();
				}
			}
		}
		elapse = System.currentTimeMillis() - elapse;
		Console.OUT.println("---------------------------------------------------------------------");
		Console.OUT.println("Elapse time(ms): " + elapse);
		
		// Make result pairs
		val arrayBuilder: ArrayBuilder[Pair[Long, Double]] = new ArrayBuilder[Pair[Long, Double]]();
		for(i in verticesToEstimate) {
			val v = verticesToEstimate(i);
			val score = betweennessCentrality().betweennessScore(verticesToEstimate(i));
			val p: Pair[Long, Double] = new Pair[Long, Double](v, score);
			arrayBuilder.add(p);
		}
		return arrayBuilder.result();
	}
	
	protected def makeNeighbourMap() {
		
		var time: Long = System.currentTimeMillis();
		val distVertexList:DistArray[Long] = plainGraph.getVertexList();
		
		finish {
			
			for(p:Place in Place.places()){
				
				val dat = at(p) { distVertexList.getLocalPortion() };
				
				async {
					
					for (i in dat) {
						
						val actor = dat(i);
						if(actor >= 0L) {
							
							val n = plainGraph.getOutNeighbours(actor);
							if(n == null) {
								
								neighborMap(actor) = IndexedMemoryChunk.allocateZeroed[Long](0);
								
							} else {
								
								val len = n.size;
								val r = IndexedMemoryChunk.allocateZeroed[Long](len);
								
								for([x] in 0..(len-1)) {
									r(x) = n(x);
								}		
								neighborMap(actor) = r;
							}
							
							inNeighbourCountMap(actor) = plainGraph.getInNeighboursCount(actor);	
						}
					}
				}
			}
		}
				
		time = System.currentTimeMillis() - time;
		Console.OUT.println(here + ": Making neighbour map time(ms): " + time);
	}
	
	protected def calculateOnPlainGraph() {
		
		val distVertexList:DistArray[Long] = this.plainGraph.getVertexList();
		val localVertices = distVertexList.getLocalPortion();
		val numParallelBfsTasks = Runtime.NTHREADS;
		
		val numLocalVertices: Int = localVertices.size;	
		Console.OUT.println("Assigned-Vertex count: " + numLocalVertices);
		
		finish {

			for(taskId in 0..(numParallelBfsTasks -1 )) {
				async doBfsOnPlainGraph(taskId, numParallelBfsTasks, localVertices);				
			}
			
		}
		Console.OUT.println("***************************");
		Console.OUT.println("Run for all source vertex " + here.id);
		Console.OUT.println("***************************");
		
		// if undirected graph divide by 2
		if(this.plainGraph.isDirected() == false) {
			
			if(this.isNormalize) {
				// Undirected and normalize
				val length = betweennessScore.length();
				val divider = (numVertex - 1) * (numVertex - 2);
				for(var i: Long = 0; i < length; ++i) {
					betweennessScore(i) /= divider;
				}
			} else {
				// Undirected only
				val length = betweennessScore.length();
				for(var i: Long = 0; i < length; ++i) {
					betweennessScore(i) /= 2;
				}
			}
		} else {
			if(this.isNormalize) {
				// Directed and normalize
				val length = betweennessScore.length();
				val divider = (numVertex - 1) * (numVertex - 2);
				for(var i: Long = 0; i < length; ++i) {
					betweennessScore(i) /= divider;
				}
			}
		}
		
		var time: Long = System.currentTimeMillis();
		if(Place.ALL_PLACES > 1) {
			synchronizeScore();
		}
		else {
			// First place release lock
			syncScoreLock.unlock();
		}
		time = System.currentTimeMillis() - time;
		Console.OUT.println(here + ": Synch score time(ms): " + time);
	}
	
	protected def doBfsOnPlainGraph( taskId: Long, numParallelBfsTasks: Long, localVertices: Array[Long]) {
		
		// var numProcessedSource: Long = 0;
		// var lastPrintThroughput: Long =  System.currentTimeMillis();
		
		/**
		 * Create data structure for BC
		 */
		val traverseQ: FixedVertexQueue = new FixedVertexQueue(maximumVertexId);
		val distanceMap = IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
		val geodesicsMap =  IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
		val vertexStack: FixedVertexStack = new FixedVertexStack(maximumVertexId);
		val iterScore =  IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
		val localScore = IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
		val predecessorMap =  IndexedMemoryChunk.allocateUninitialized[FixedVertexStack](maximumVertexId); 
		val touchVertex: FixedVertexStack = new FixedVertexStack(maximumVertexId);
		
		// Initailize data
		for(var i: Long = 0; i < maximumVertexId; ++i) {
			predecessorMap(i) = new FixedVertexStack(inNeighbourCountMap(i));
			distanceMap(i) = -1;
		}
		
		/*
		 * localVertices can be accessed properly by Point only
		 * Iterate over localVertices and process only assigned vertices
		 */
		
		var indexCount: Long = 0;
		for(index in localVertices) {
		
			if((indexCount++) % numParallelBfsTasks != taskId) {
				continue;
			}
			
			// Get source vertex
			val source = localVertices(index);
			
			if(source < 0) {
				// Source maybe -1 to indicate end of array
				continue;
			}
			
			if(source >= maximumVertexId) {
				throw new Exception("Vertex Id more than maximumVertexId");
			}
			
			while(!touchVertex.isEmpty()){
				val i = touchVertex.pop();
				predecessorMap(i).clear();
				geodesicsMap(i) = 0;
				iterScore(i) = 0;
				distanceMap(i) = -1;
			}
			
			traverseQ.clear();
			vertexStack.clear();
			
			distanceMap(source) = 0L;
			geodesicsMap(source) = 1L;
			
			traverseQ.add(source);
			
			// Traverse the graph 
			while(!traverseQ.isEmpty()) {
				
				val actor = traverseQ.removeFirst();
				touchVertex.push(actor);
				
				if(cutoffDistance > 0 && distanceMap(actor) >= cutoffDistance) {
							break;
				}
				
				val neighbors = neighborMap(actor);
				vertexStack.push(actor);
				
				val len: Long = neighbors.length();
				if(len == 0L)
					continue;
					
				for(var i: Long = 0; i < len; ++i) {
					
					val neighbor = neighbors(i);
					val distanceFromSource = distanceMap(actor) + 1;
					
					if(distanceMap(neighbor) == -1L) {
						distanceMap(neighbor) = distanceFromSource;
						traverseQ.add(neighbor);
					}
					
					if(distanceMap(neighbor) == distanceFromSource) {
						geodesicsMap(neighbor) += geodesicsMap(actor);
						// try {
							predecessorMap(neighbor).push(actor); 
							// } catch(e: Exception) {
							// 	// Console.OUT.println();
							// 	Console.OUT.print(e);
							// 	throw new Exception("E==> A(Pred): " + actor + "; N: " + 
							// 			neighbor + "; N of Pred: " + plainGraph.getInNeighboursCount(neighbor) +
							// 			" Hash: " + inNeighbourCountMap(neighbor as Int));
							// }
					}
				}
			}
			
			// Calculate score
			while(!vertexStack.isEmpty()) {
				
				val actor = vertexStack.pop();
				while(!predecessorMap(actor).isEmpty()) {
					val pred = predecessorMap(actor).pop();
	
					iterScore(pred) += (iterScore(actor) + 1.0D) * 
					(geodesicsMap(pred) as Double / geodesicsMap(actor) as Double);
				}
			}
			
			val length = iterScore.length();
			for(var i: Long = 0; i < length; ++i) {
				val score = iterScore(i);
				if(score == 0D || i == source)
					continue;
				localScore(i) += score;
			}
			
			// numProcessedSource++;
			// 
			// // Print throuhgput every XX milliseconds
			// val now = System.currentTimeMillis();
			// val elapse = now - lastPrintThroughput;
			// if( elapse > 60000) {
			// 	val thr = numProcessedSource / ((elapse / 60000) as Double);
			// 	Console.OUT.println(taskId + " Throughput (Processed Sources/minute): " + thr);
			// 	lastPrintThroughput = now;
			// 	numProcessedSource = 0;
			// }
		}
		
		val length = betweennessScore.length();
		for(var i: Long = 0; i < length; ++i) {
			val score = localScore(i);
			if(score == 0D)
				continue;
			
			val zonelock = updateScoreLock(i);
			zonelock.lock();
			betweennessScore(i) += score;
			zonelock.unlock();
		}
	}
	
	protected def synchronizeScore() {
		
		if(here.id == 0) {
			// First place releases betweennessScoreFirst
			syncScoreLock.unlock();
		}
		
		if(here.id != 0) {
			val data = betweennessScore;
			refOfFirstPlace.evalAtHome((o: BetweennessCentrality) => {
				o.syncScoreLock.lock();
					val length = o.betweennessScore.length();
					for(var i: Long = 0; i < length; ++i) {
						o.betweennessScore(i) += data(i);
					}
				o.syncScoreLock.unlock();
				return 0;
			});
		}
		// Team.WORLD.barrier(here.id);
	}
	
	protected def setInstanceHandler(handler: GlobalRef[BetweennessCentrality]) {
		
		this.refOfFirstPlace = handler;
	}
	
	// Estimated BC for plain Graph
	
	public static def estimate(g: PlainGraph, verticesToEstimate: Array[Long], isNormalize: Boolean, iteration: Long) : Array[Pair[Long, Double]] {

		return estimateInternal(g, verticesToEstimate, isNormalize, iteration);
	}
	
	public static def estimateInternal(g: PlainGraph, verticesToEstimate: Array[Long], isNormalize: Boolean, iterations: Long): Array[Pair[Long, Double]] {
		
		var elapse: Long = System.currentTimeMillis();
		
		val vertexCount = g.getVertexCount();
		val maximumVertexId= g.getMaximumVertexID();
		val betweennessCentrality: PlaceLocalHandle[BetweennessCentrality] 
		= PlaceLocalHandle.make[BetweennessCentrality](Dist.makeUnique(), 
				() => { new BetweennessCentrality(g, vertexCount, maximumVertexId, isNormalize, 0, iterations) } );
		
		finish {
			val firstPlaceInstance = new GlobalRef(betweennessCentrality());
			for(p in Place.places()) {
				if(p == here) {
					async {
						
						betweennessCentrality().makeNeighbourMap();
						
						// Force first place to lock score array
						// prevent other places altering betweennessScore array during first place runing BC
						betweennessCentrality().syncScoreLock.lock();
						betweennessCentrality().estimateOnPlainGraph();

					}
				} else
					at (p) async {
					
					betweennessCentrality().setInstanceHandler(firstPlaceInstance);
					betweennessCentrality().makeNeighbourMap();
					betweennessCentrality().estimateOnPlainGraph();
				}
			}
		}
		elapse = System.currentTimeMillis() - elapse;
		Console.OUT.println("---------------------------------------------------------------------");
		Console.OUT.println("Elapse time(ms): " + elapse);
		Console.OUT.println("Iterations: " + iterations);
		
		// Make result pairs
		val arrayBuilder: ArrayBuilder[Pair[Long, Double]] = new ArrayBuilder[Pair[Long, Double]]();
		for(i in verticesToEstimate) {
			val v = verticesToEstimate(i);
			val score = betweennessCentrality().betweennessScore(verticesToEstimate(i));
			val p: Pair[Long, Double] = new Pair[Long, Double](v, score);
			arrayBuilder.add(p);
		}
		return arrayBuilder.result();
	}
	
	
	protected def estimateOnPlainGraph() {
		
		val distVertexList:DistArray[Long] = this.plainGraph.getVertexList();
		val localVertices = distVertexList.getLocalPortion();
		val numParallelBfsTasks = Runtime.NTHREADS;
		val numPlaces = Place.MAX_PLACES;
		
		val numLocalVertices: Int = localVertices.size;	
		Console.OUT.println("Assigned-Vertex count: " + numLocalVertices);
		
		val itForCurrentPlace = this.iterations / numPlaces +
			(here.id < this.iterations % numPlaces? 1: 0);
		
		
		finish {

			for(taskId in 0..(numParallelBfsTasks -1 )) {
				val itForCurrentTask = itForCurrentPlace / numParallelBfsTasks
					+ (taskId < itForCurrentPlace % numParallelBfsTasks ? 1 : 0);
					
				async executePivot(taskId, numParallelBfsTasks, itForCurrentTask, localVertices);				
			}
			
		}
		Console.OUT.println("***************************");
		Console.OUT.println("Run for all source vertex " + here.id);
		Console.OUT.println("***************************");
		
		// if undirected graph divide by 2
		if(this.plainGraph.isDirected() == false) {
			
			// Current implementation does not support undirected graph yet
			throw new UnsupportedOperationException();
			
		} else {
			if(this.isNormalize) {
				// Directed and normalize
				val length = betweennessScore.length();
				val divider = (numVertex - 1) * (numVertex - 2);
				for(var i: Long = 0; i < length; ++i) {
					betweennessScore(i) /= divider;
				}
			}
		}
		
		var time: Long = System.currentTimeMillis();
		if(Place.ALL_PLACES > 1) {
			synchronizeScore();
		} 
		else {
			// First place release lock
			syncScoreLock.unlock();
		}
		time = System.currentTimeMillis() - time;
		Console.OUT.println(here + ": Synch score time(ms): " + time);
	}
	
	protected def executePivot( taskId: Long, numParallelBfsTasks: Long, it: Long, localVertices: Array[Long]) {
		// var numProcessedSource: Long = 0;
		// var lastPrintThroughput: Long =  System.currentTimeMillis();
		
		/**
		 * Create data structure for BC
		 */
		val traverseQ: FixedVertexQueue = new FixedVertexQueue(maximumVertexId);
		val distanceMap = IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
		val geodesicsMap =  IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
		val vertexStack: FixedVertexStack = new FixedVertexStack(maximumVertexId);
		val iterScore =  IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
		val localScore = IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
		val predecessorMap =  IndexedMemoryChunk.allocateUninitialized[FixedVertexStack](maximumVertexId); 
		val touchVertex: FixedVertexStack = new FixedVertexStack(maximumVertexId);
		
		// Initailize data
		for(var i: Long = 0; i < maximumVertexId; ++i) {
			predecessorMap(i) = new FixedVertexStack(inNeighbourCountMap(i));
			distanceMap(i) = -1;
		}
		
		/*
		 * localVertices can be accessed properly by Point only
		 * Iterate over localVertices and process only assigned vertices
		 */
		var indexCount: Long = 0;
		var remainingVertices: Long = localVertices.size / numParallelBfsTasks 
			+ (localVertices.size % numParallelBfsTasks > taskId ? 1: 0);
		
		val random = new Random();
		var remainingIter: long = it;
		
		for(index in localVertices) {
			
			if((indexCount++) % numParallelBfsTasks != taskId) {
				continue;
			}
			
			// Random
			val prob = random.nextDouble();
			if(prob < 1.0D - (remainingIter as Double/remainingVertices)) {
				// This pivot was not selected
				--remainingVertices;
				continue;
			}
			
			--remainingVertices;
			--remainingIter;
			
			// Get source vertex
			val source = localVertices(index);
			
			if(source < 0) {
				// Source maybe -1 to indicate end of array
				continue;
			}
			
			if(source >= maximumVertexId) {
				throw new Exception("Vertex Id more than maximumVertexId");
			}
			
			while(!touchVertex.isEmpty()){
				val i = touchVertex.pop();
				predecessorMap(i).clear();
				geodesicsMap(i) = 0;
				iterScore(i) = 0;
				distanceMap(i) = -1;
			}
			
			traverseQ.clear();
			vertexStack.clear();
			
			distanceMap(source) = 0L;
			geodesicsMap(source) = 1L;
			
			traverseQ.add(source);
			
			// Traverse the graph 
			while(!traverseQ.isEmpty()) {
				
				val actor = traverseQ.removeFirst();
				touchVertex.push(actor);
				
				// if(cutoffDistance > 0 && distanceMap(actor) >= cutoffDistance) {
				// 			break;
				// }
				
				val neighbors = neighborMap(actor);
				vertexStack.push(actor);
				
				val len: Long = neighbors.length();
				if(len == 0L)
					continue;
				
				for(var i: Long = 0; i < len; ++i) {
					
					val neighbor = neighbors(i);
					val distanceFromSource = distanceMap(actor) + 1;
					
					if(distanceMap(neighbor) == -1L) {
						distanceMap(neighbor) = distanceFromSource;
						traverseQ.add(neighbor);
					}
					
					if(distanceMap(neighbor) == distanceFromSource) {
						geodesicsMap(neighbor) += geodesicsMap(actor);
						// try {
						predecessorMap(neighbor).push(actor); 
						// } catch(e: Exception) {
						// 	// Console.OUT.println();
						// 	Console.OUT.print(e);
						// 	throw new Exception("E==> A(Pred): " + actor + "; N: " + 
						// 			neighbor + "; N of Pred: " + plainGraph.getInNeighboursCount(neighbor) +
						// 			" Hash: " + inNeighbourCountMap(neighbor as Int));
						// }
					}
				}
			}
			
			// Calculate score
			while(!vertexStack.isEmpty()) {
				
				val actor = vertexStack.pop();
				while(!predecessorMap(actor).isEmpty()) {
					val pred = predecessorMap(actor).pop();
					
					iterScore(pred) += (iterScore(actor) + 1.0D ) * 
					(geodesicsMap(pred) as Double / geodesicsMap(actor) as Double) *
					(distanceMap(pred) as Double / distanceMap(actor));
				}
			}
			
			val length = iterScore.length();
			for(var i: Long = 0; i < length; ++i) {
				val score = iterScore(i);
				if(score == 0D || i == source)
					continue;
				localScore(i) += score ;
			}
			
			// numProcessedSource++;
			// 
			// // Print throuhgput every XX milliseconds
			// val now = System.currentTimeMillis();
			// val elapse = now - lastPrintThroughput;
			// if( elapse > 60000) {
			// 	val thr = numProcessedSource / ((elapse / 60000) as Double);
			// 	Console.OUT.println(taskId + " Throughput (Processed Sources/minute): " + thr);
			// 	lastPrintThroughput = now;
			// 	numProcessedSource = 0;
			// }
		}
		
		val length = betweennessScore.length();
		for(var i: Long = 0; i < length; ++i) {
			val score = localScore(i);
			if(score == 0D)
				continue;
			
			val zonelock = updateScoreLock(i);
			zonelock.lock();
			betweennessScore(i) += score;
			zonelock.unlock();
		}
	}
	
	public class FixedVertexQueue {
		var space: Long;
		var count: Long;
		var storage: IndexedMemoryChunk[Long];
		var index: Long;
		var f:Long;
		var r: Long;
		
		def this(space: Long) {
			
			this.space = space;
			this.storage = IndexedMemoryChunk.allocateZeroed[Long](space);
			f = 0;
			r = 0;
			count = 0;
		}
		
		
		public def add(vertexId: Long) {
			
			// if(count >= space) {
			// 	// Overflow
			// 	throw new Exception("Data overflow");
			// }
			
			storage(r) = vertexId;
			r = (r + 1) % space;
			++count;			
		}
		
		public def removeFirst(): Long {
			
			// if(count <= 0) {
			// 	// Overflow
			// 	throw new Exception("Data underflow");
			// }
			
			val data = storage(f);
			f = (f + 1) % space;
			--count;
			
			return data;
		}
		
		public def clear() = {
			f = 0;
			r = 0;
			count = 0;
		};
		
		public def isEmpty() = count == 0L;
	}
	
	public class FixedVertexStack {
		
		val storage: IndexedMemoryChunk[Long];
		var index: Long;
		
		def this(size: Long) {
			this.storage = IndexedMemoryChunk.allocateZeroed[Long](size);
			this.index = 0;
		}
		
		public def pop(): Long {
			// if(index <= 0)
			// 	throw new Exception("Stack underflow");

			return storage(--index);
		}
		
		public def push(vertexId: Long) {
			// if(index >= storage.length())
			// 	throw new Exception("Stack overflow size: " + storage.length() + " index: " + index );

			storage(index) = vertexId;
			++index;
		}
		
		public def clear() = index = 0;
		
		public def isEmpty() = index == 0L;
	}
	
}