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
	// transient val betweennessScore: Array[Double];
	transient val betweennessScore: IndexedMemoryChunk[Double];
	transient val numVertex: Long;
	transient val maximumVertexId: Long;
	
	transient val updateScoreLock: IndexedMemoryChunk[Lock];
	
	// transient val updateTimeStatLock: Lock = new Lock();
	// transient var globalMakeMapTime: Long = 0;
	// transient var globalSpaceAllocTime: Long = 0;
	// transient var globalBfsTime: Long = 0;
	// transient var globalBacktrackTime: Long = 0;
	// transient var globalUpdateLocalTime: Long = 0;
	
	transient val neighborMap: Array[Array[Long]];
	transient val inNeighbourCountMap: Array[Long];
	
	transient var firstPlaceInstance: GlobalRef[BetweennessCentrality];
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
		// this.betweennessScore = new Array[Double](numVertex as Int, 0.0D);
		this.betweennessScore = IndexedMemoryChunk.allocateZeroed[Double](numVertex);
		this.vertexIdAndIndexMap = inputVertexIdAndIndexMap;
		
		
		
		// Unuse properties
		this.plainGraph = null;
		this.maximumVertexId = 0;
		this.neighborMap = null;
		this.inNeighbourCountMap = null;
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
		this.neighborMap = new Array[Array[Long]](maximumVertexId as Int);
		this.inNeighbourCountMap = new Array[Long](maximumVertexId as Int);
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
				
				val dat = at(p) {distVertexList.getLocalPortion()};
				async {
					for (i in dat) {
						// async {
							val actor = dat(i);
							if(actor >= 0L) {
								val n = plainGraph.getOutNeighbours(actor);
								neighborMap(actor as Int) = n;
								inNeighbourCountMap(actor as Int) = plainGraph.getInNeighboursCount(actor);	
							}
						// }
					}
				}
			}
		}
		
		// Manually set number of neighbor of 0th vertex, workaround!
		// inNeighbourCountMap(0) = 900;
		
		time = System.currentTimeMillis() - time;
		Console.OUT.println(here + ": Making neighbour map time(ms): " + time);
	}
	
	protected def calculateOnPlainGraph() {
		
		val distVertexList:DistArray[Long] = this.plainGraph.getVertexList();
		val localVertices = distVertexList.getLocalPortion();
		val numParallelBfsTasks = Runtime.NTHREADS;
		// val numParallelBfsTasks = 10;
		// var startIndex: Int = 0;
		
		val numLocalVertices: Int = localVertices.size;	
		Console.OUT.println("Assigned-Vertex count: " + numLocalVertices);
		
		finish {

			for(taskId in 0..(numParallelBfsTasks -1 )) {

				async doBfsOnPlainGraph(taskId, numParallelBfsTasks, localVertices);
				// async doBfsOnPlainGraphMultithreads(taskId, numParallelBfsTasks, cutoff, localVertices);
				
			}
			
		}
		Console.OUT.println("***************************");
		Console.OUT.println("Run for all source vertex " + here.id);
		Console.OUT.println("***************************");
		
		
		// if undirected graph divide by 2
		if(this.plainGraph.isDirected() == false) {
			
			if(this.isNormalize) {
				// Undirected and normalize
				// betweennessScore.map(betweennessScore, (a: Double) => a / (((numVertex - 1) * (numVertex - 2))) );
				val length = betweennessScore.length();
				val divider = (numVertex - 1) * (numVertex - 2);
				for(var i: Long = 0; i < length; ++i) {
					betweennessScore(i) /= divider;
				}
			} else {
				// Undirected only
				// betweennessScore.map(betweennessScore, (a: Double) => a / 2 );
				val length = betweennessScore.length();
				for(var i: Long = 0; i < length; ++i) {
					betweennessScore(i) /= 2;
				}
			}
		} else {
			if(this.isNormalize) {
				// Directed and normalize
				// betweennessScore.map(betweennessScore, (a: Double) => a / ((numVertex -1) * (numVertex - 2)) );
				val length = betweennessScore.length();
				val divider = (numVertex - 1) * (numVertex - 2);
				for(var i: Long = 0; i < length; ++i) {
					betweennessScore(i) /= divider;
				}
			}
		}
		
		// Console.OUT.println("All Allocation time(ms): " + globalSpaceAllocTime/numParallelBfsTasks);
		// Console.OUT.println("All BfsTime time(ms): " + globalBfsTime/numParallelBfsTasks);
		// Console.OUT.println("All Backtrack time(ms): " + globalBacktrackTime/numParallelBfsTasks);
		// Console.OUT.println("All UpdateLocalScore time(ms): " + globalUpdateLocalTime/numParallelBfsTasks);
		// 
		var time: Long = System.currentTimeMillis();
		if(Place.ALL_PLACES > 1) {
			synchronizeScore();
			// Team.WORLD.allreduce(here.id, betweennessScore, 0, betweennessScore, 0, betweennessScore.size, Team.ADD);
		}
		time = System.currentTimeMillis() - time;
		Console.OUT.println(here + ": Synch score time(ms): " + time);

	}
	
	protected def doBfsOnPlainGraph( taskId: Int, numParallelBfsTasks: Int, localVertices: Array[Long]) {
		
		var numProcessedSource: Long = 0;
		var lastPrintThroughput: Long =  System.currentTimeMillis();
		// var sumBfsTime: Long = 0;
		// var bfsTime: Long = 0;
		// var sumBacktrackTime: Long = 0;
		// var backtrackTime: Long = 0;
		// var updateLocalScoreTime: Long =0;
		// var sumUpdateLocalScoreTime: Long = 0;
		// 
		// var allocationTime: Long = System.currentTimeMillis();
		
		
		/**
		 * Create data structure for BC
		 */
		val traverseQ: FixedVertexQueue = new FixedVertexQueue(maximumVertexId);
		val distanceMap = IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
		val geodesicsMap =  IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
		val vertexStack: FixedVertexStack = new FixedVertexStack(maximumVertexId);
		val tempScore =  IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
		val predecessorMap =  IndexedMemoryChunk.allocateUninitialized[FixedVertexStack](maximumVertexId); 
				
		for(var i: Int = 0; i <predecessorMap.length(); ++i) {
			predecessorMap(i) = new FixedVertexStack(inNeighbourCountMap(i));
		}
		
		// allocationTime = System.currentTimeMillis() - allocationTime;
		
		// val writer = new FileWriter(new File("node_visit"));
		// val printer = new Printer(writer);
		
		
		
		/*
		 * localVertices can be accessed properly by Point only
		 * Iterate over localVertices and process only assigned vertices
		 */
		
		var indexCount: Int = 0;
		for(index in localVertices) {
			
			// bfsTime = System.currentTimeMillis();
		
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
			
			// Clear Previous Data
		 	// distanceMap.clear(0, maximumVertexId);
		 	for(var i: Int = 0; i < distanceMap.length() ; ++i)
		 		distanceMap(i) = -1L;
		 	
		 	geodesicsMap.clear(0, maximumVertexId);
		 	tempScore.clear(0, maximumVertexId);
		 	
		 	
			for(i in 0..(predecessorMap.length()-1)) {
				predecessorMap(i).clear();
			}
			
			traverseQ.clear();
			vertexStack.clear();
			
			distanceMap(source) = 0L;
			geodesicsMap(source) = 1L;
			
			traverseQ.add(source);
			// Runtime.probe();
			
			var neighbor: Long;
			var actor: Long;
			var neighbors: Array[Long]; 
			// var visitNodes: Long = 0;
			
			// Traverse the graph 
			while(!traverseQ.isEmpty()) {
				
				actor = traverseQ.removeFirst();
				
				if(cutoffDistance > 0 && distanceMap(actor) >= cutoffDistance) {
							break;
				}
				
				neighbors = neighborMap(actor as Int);
				vertexStack.push(actor);
				
				// ++visitNodes;
				
				if(neighbors == null)
					continue;
				
				
				 
				for(var i: Int = 0; i < neighbors.size; ++i) {
					
					neighbor = neighbors(i);
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
			// printer.println(source +","+ visitNodes);
			// bfsTime = System.currentTimeMillis() - bfsTime;
			// sumBfsTime += bfsTime;
			
			// backtrackTime = System.currentTimeMillis();
			
			// Calculate score
			while(!vertexStack.isEmpty()) {
				
				actor = vertexStack.pop();
				
				while(!predecessorMap(actor).isEmpty()) {
					val pred = predecessorMap(actor).pop();
	
					tempScore(pred) += (tempScore(actor) + 1.0D) * 
					(geodesicsMap(pred) as Double / geodesicsMap(actor) as Double);
					
				}
				
			}
			
			// backtrackTime = System.currentTimeMillis() - backtrackTime;
			// sumBacktrackTime += backtrackTime;
			
			// updateLocalScoreTime = System.currentTimeMillis();
			val length = betweennessScore.length();
			for(var i: Long = 0; i < length; ++i) {
				val score = tempScore(i);
				if( score == 0D || i == source)
					continue;
		
				val zonelock = updateScoreLock(i);
				zonelock.lock();
				betweennessScore(i) += tempScore(i);
				zonelock.unlock();
			}
			numProcessedSource++;
			
			// updateLocalScoreTime = System.currentTimeMillis()- updateLocalScoreTime;
			// sumUpdateLocalScoreTime += updateLocalScoreTime;
			
			// Print throuhgput every XX milliseconds
			val now = System.currentTimeMillis();
			val elapse = now - lastPrintThroughput;
			if( elapse > 60000) {
				val thr = numProcessedSource / ((elapse / 60000) as Double);
				Console.OUT.println(taskId + " Throughput (Processed Source/minute): " + thr);
				lastPrintThroughput = now;
				numProcessedSource = 0;
			}
				
			// Console.OUT.println("End for src: " + source + " On place: " + here.id);
		}
		// Console.OUT.println("Thread " + taskId + " has processed all assigned vertices");
		// // Print time info
		// Console.OUT.println(here + ":" + threadId + " sumBfsTime time(ms): " + sumBfsTime);
		// Console.OUT.println(here + ":" + threadId + " sumBacktrackTime neighbour time(ms): " + sumBacktrackTime);
		// Console.OUT.println(here + ":" + threadId + " sumUpdateLocalScoreTime time(ms): " + sumUpdateLocalScoreTime);
		
		// updateTimeStatLock.lock();
		// globalSpaceAllocTime += allocationTime;
		// globalBfsTime += sumBfsTime;
		// globalBacktrackTime += sumBacktrackTime;
		// globalUpdateLocalTime += sumUpdateLocalScoreTime;
		// updateTimeStatLock.unlock();
	}
	
// 	protected def doBfsOnPlainGraphMultithreads( taskId: Int, numParallelBfsTasks: Int, cutoff: Long, localVertices: Array[Long]) {
// 		
// 		var numProcessedSource: Long = 0;
// 		var lastPrintThroughput: Long =  System.currentTimeMillis();
// 
// 		/**
// 		 * Create data structure for BC
// 		 */
// 		// val traverseQ: FixedVertexQueue = new FixedVertexQueue(maximumVertexId);
// 		val distanceMap = IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
// 		val geodesicsMap =  IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
// 		val vertexStack: FixedVertexStack = new FixedVertexStack(maximumVertexId);
// 		val tempScore =  IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
// 		val predecessorMap =  IndexedMemoryChunk.allocateUninitialized[FixedVertexStack](maximumVertexId);
// 		
// 		val numTraverser: Int = 5;
// 		var queueToggle: Int = 0;
// 		val traverserQueues: Array[FixedVertexQueue] = new Array[FixedVertexQueue](numTraverser, 
// 											(i:Int) => new FixedVertexQueue((maximumVertexId+numTraverser) / numTraverser));
// 		
// 		val distributorQueue: Array[Array[FixedVertexQueue]] = new Array[Array[FixedVertexQueue]](2,
// 				(Int) => {
// 						new Array[FixedVertexQueue]
// 								(numTraverser, 
// 								(i:Int) => new FixedVertexQueue((maximumVertexId+numTraverser) / numTraverser))
// 				});
// 		
// 		for(var i: Int = 0; i <predecessorMap.length(); ++i) {
// 			predecessorMap(i) = new FixedVertexStack(inNeighbourCountMap(i));
// 		}
// 		
// 		val isQueueEmpty: Array[Boolean] = new Array[Boolean](2, (Int) => false);
// 		
// 		
// 		if(cutoff < 0)
// 			throw new Exception("Cutoff value should be equal or more than 0");
// 		
// 		/*
// 		 * localVertices can be accessed properly by Point only
// 		 * Iterate over localVertices and process only assigned vertices
// 		 */
// 		var indexCount: Int = 0;
// 		for(index in localVertices) {
// 
// 			if((indexCount++) % numParallelBfsTasks != taskId) {
// 				continue;
// 			}
// 			
// 			// Get source vertex
// 			val source = localVertices(index);
// 			
// 			if(source < 0) {
// 				// Source maybe -1 to indicate end of array
// 				continue;
// 			}
// 			
// 			if(source >= maximumVertexId) {
// 				throw new Exception("Vertex Id more than maximumVertexId");
// 			}
// 			
// 			// Clear Previous Data
// 			distanceMap.clear(0, maximumVertexId);
// 			for(var i: Int = 0; i < distanceMap.length() ; ++i)
// 				distanceMap(i) = -1L;
// 			
// 			geodesicsMap.clear(0, maximumVertexId);
// 			tempScore.clear(0, maximumVertexId);
// 			
// 			
// 			for(i in 0..(predecessorMap.length()-1)) {
// 				predecessorMap(i).clear();
// 			}
// 			
// 			for(var i: Int = 0; i < traverserQueues.size; ++i) {
// 				traverserQueues(i).clear();
// 				distributorQueue(0)(i).clear();
// 				distributorQueue(1)(i).clear();
// 			}
// 			
// 			isQueueEmpty(0) = false;
// 			isQueueEmpty(1) = false;
// 			
// 			// traverseQ.clear();
// 			vertexStack.clear();
// 			
// 			distanceMap(source) = 0L;
// 			geodesicsMap(source) = 1L;
// 			
// 			// traverseQ.add(source);
// 			// Runtime.probe();
// 			
// 			var neighbor: Long;
// 			var actor: Long;
// 			var neighbors: Array[Long]; 
// 			
// 			queueToggle = 0;
// 			distributorQueue(queueToggle)(0).add(source);
// 			
// 			// if there is data left in the queue
// 			while(!isQueueEmpty(0) || !isQueueEmpty(1)) {
// 				
// 				// Traverse the graph 
// 				for(var i: Int = 0; i < distributorQueue(queueToggle).size; ++i) {
// 					
// 					val currentQ = distributorQueue(queueToggle)(i);
// 					while(!currentQ.isEmpty()) {
// 						
// 						actor = currentQ.removeFirst();
// 						neighbors = neighborMap(actor as Int);
// 						vertexStack.push(actor);
// 
// 						if(neighbors == null)
// 							continue;
// 						
// 						val nextQSetIndex = (queueToggle == 0 ? 1: 0);
// 						
// 						// Assume there is data
// 						isQueueEmpty(nextQSetIndex) = false;
// 						
// 						val nextQSet = distributorQueue(nextQSetIndex);
// 						
// 						for(var k: Int = 0; k < neighbors.size; ++k) {
// 							
// 							// Put neighborsinto traverser Q 
// 							neighbor = neighbors(k);
// 							traverserQueues(k % numTraverser).add(neighbor);
// 							
// 						}
// 						
// 						// Closure for each traverser
// 						val traverse = (actor: Long, neighbourQ: FixedVertexQueue, nextQ: FixedVertexQueue) => {
// 								while(!neighbourQ.isEmpty()) {
// 									val neighbor = neighbourQ.removeFirst();
// 									val distanceFromSource = distanceMap(actor) + 1;
// 								
// 									if(distanceMap(neighbor) == -1L) {
// 										distanceMap(neighbor) = distanceFromSource;
// 										nextQ.add(neighbor);
// 									}
// 									
// 									if(distanceMap(neighbor) == distanceFromSource) {
// 										geodesicsMap(neighbor) += geodesicsMap(actor);
// 										predecessorMap(neighbor).push(actor); 
// 									}
// 								}
// 						};
// 						
// 						
// 						finish {
// 							for(var l: Int = 0; l < numTraverser; ++l) {
// 								val pos = l;
// 								async traverse(actor, traverserQueues(pos), nextQSet(pos));
// 							}
// 						}
// 					}
// 				}
// 				
// 				isQueueEmpty(queueToggle) = true;
// 				// toggle
// 				queueToggle = (queueToggle == 0 ? 1: 0);
// 				
// 			}
// 			
// 			
// 			// Calculate score
// 			while(!vertexStack.isEmpty()) {
// 				
// 				actor = vertexStack.pop();
// 				
// 				while(!predecessorMap(actor).isEmpty()) {
// 					val pred = predecessorMap(actor).pop();
// 					
// 					tempScore(pred) += (tempScore(actor) + 1.0D) * 
// 					(geodesicsMap(pred) as Double / geodesicsMap(actor) as Double);
// 					
// 				}
// 				
// 			}
// 			
// 			val length = betweennessScore.length();
// 			for(var i: Long = 0; i < length ; ++i) {
// 				val score = tempScore(i);
// 				if( score == 0D || i == source)
// 					continue;
// 				
// 				val zonelock = updateScoreLock(i);
// 				zonelock.lock();
// 				betweennessScore(i) += tempScore(i);
// 				zonelock.unlock();
// 			}
// 			
// 			++numProcessedSource;
// 			
// 			val now = System.currentTimeMillis();
// 			val elapse = now - lastPrintThroughput;
// 			if( elapse > 60000) {
// 				val thr = numProcessedSource / ((elapse / 60000) as Double);
// 				Console.OUT.println(taskId + " Throughput (Processed Source/minute): " + thr);
// 				lastPrintThroughput = now;
// 				numProcessedSource = 0;
// 			}
// 
// 		}
// 
// 	}
	
	protected def synchronizeScore() {
		
		if(here.id == 0) {
			// First place releases betweennessScoreFirst
			syncScoreLock.unlock();
		}
		
		if(here.id != 0) {
			val data = betweennessScore;
			firstPlaceInstance.evalAtHome((o: BetweennessCentrality) => {
				o.syncScoreLock.lock();
					val length = o.betweennessScore.length();
					for(var i: Long = 0; i < length; ++i) {
						o.betweennessScore(i) += data(i);
					}
				o.syncScoreLock.unlock();
				return 0;
			});
		}
		
		Team.WORLD.barrier(here.id);
	}
	
	protected def setInstanceHandler(handler: GlobalRef[BetweennessCentrality]) {
		this.firstPlaceInstance = handler;
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
			
			if(count >= space) {
				// Overflow
				throw new Exception("Data overflow");
			}
			
			storage(r) = vertexId;
			r = (r + 1) % space;
			++count;
		}
		
		public def removeFirst(): Long {
			
			if(count <= 0) {
				// Overflow
				throw new Exception("Data underflow");
			}
			
			val data = storage(f);
			f = (f + 1) % space;
			--count;
			return data;
		}
		
		public def clear() {
			f = 0;
			r = 0;
			count = 0;
		}
		
		public def isEmpty() {
			return count == 0L;
		}
	}
	
	public class FixedVertexStack {
	
		val storage: IndexedMemoryChunk[Long];
		var index: Long;
		
		def this(size: Long) {
			this.storage = IndexedMemoryChunk.allocateZeroed[Long](size);
			this.index = 0;
		}
		
		public def pop(): Long {
			if(index <= 0)
				throw new Exception("Stack underflow");

			return storage(--index);
		}
		
		public def push(vertexId: Long) {
			if(index >= storage.length())
				throw new Exception("Stack overflow size: " + storage.length() + " index: " + index );

			storage(index) = vertexId;
			++index;
		}
		
		public def clear() {
			index = 0;
		}
		
		public def isEmpty() {
			return index == 0L;
		}
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
					betweennessCentrality().calculateOnPlainGraph();
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
		// val numParallelBfsTasks = 10;
		// var startIndex: Int = 0;
		
		val numLocalVertices: Int = localVertices.size;	
		Console.OUT.println("Assigned-Vertex count: " + numLocalVertices);
		
		finish {

			for(taskId in 0..(numParallelBfsTasks -1 )) {

				async executePivot(taskId, numParallelBfsTasks, localVertices);
			}
			
		}
		Console.OUT.println("***************************");
		Console.OUT.println("Run for all source vertex " + here.id);
		Console.OUT.println("***************************");
		
		
		// if undirected graph divide by 2
		if(this.plainGraph.isDirected() == false) {
			
			if(this.isNormalize) {
				// Undirected and normalize
				// betweennessScore.map(betweennessScore, (a: Double) => a / (((numVertex - 1) * (numVertex - 2))) );
				val length = betweennessScore.length();
				val divider = (numVertex - 1) * (numVertex - 2);
				for(var i: Long = 0; i < length; ++i) {
					betweennessScore(i) /= divider;
				}
			} else {
				// Undirected only
				// betweennessScore.map(betweennessScore, (a: Double) => a / 2 );
				val length = betweennessScore.length();
				for(var i: Long = 0; i < length; ++i) {
					betweennessScore(i) /= 2;
				}
			}
		} else {
			if(this.isNormalize) {
				// Directed and normalize
				// betweennessScore.map(betweennessScore, (a: Double) => a / ((numVertex -1) * (numVertex - 2)) );
				val length = betweennessScore.length();
				val divider = (numVertex - 1) * (numVertex - 2);
				for(var i: Long = 0; i < length; ++i) {
					betweennessScore(i) /= divider;
				}
			}
		}
		
		// Console.OUT.println("All Allocation time(ms): " + globalSpaceAllocTime/numParallelBfsTasks);
		// Console.OUT.println("All BfsTime time(ms): " + globalBfsTime/numParallelBfsTasks);
		// Console.OUT.println("All Backtrack time(ms): " + globalBacktrackTime/numParallelBfsTasks);
		// Console.OUT.println("All UpdateLocalScore time(ms): " + globalUpdateLocalTime/numParallelBfsTasks);
		// 
		var time: Long = System.currentTimeMillis();
		if(Place.ALL_PLACES > 1) {
			synchronizeScore();
			// Team.WORLD.allreduce(here.id, betweennessScore, 0, betweennessScore, 0, betweennessScore.size, Team.ADD);
		}
		time = System.currentTimeMillis() - time;
		Console.OUT.println(here + ": Synch score time(ms): " + time);

	}
	
	protected def executePivot( taskId: Int, numParallelBfsTasks: Int, localVertices: Array[Long]) {
		
		var numProcessedSource: Long = 0;
		var lastPrintThroughput: Long =  System.currentTimeMillis();
		// var sumBfsTime: Long = 0;
		// var bfsTime: Long = 0;
		// var sumBacktrackTime: Long = 0;
		// var backtrackTime: Long = 0;
		// var updateLocalScoreTime: Long =0;
		// var sumUpdateLocalScoreTime: Long = 0;
		// 
		// var allocationTime: Long = System.currentTimeMillis();
		
		
		/**
		 * Create data structure for BC
		 */
		val traverseQ: FixedVertexQueue = new FixedVertexQueue(maximumVertexId);
		val distanceMap = IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
		val geodesicsMap =  IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
		val vertexStack: FixedVertexStack = new FixedVertexStack(maximumVertexId);
		val tempScore =  IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
		val predecessorMap =  IndexedMemoryChunk.allocateUninitialized[FixedVertexStack](maximumVertexId); 
		
		for(var i: Int = 0; i <predecessorMap.length(); ++i) {
			predecessorMap(i) = new FixedVertexStack(inNeighbourCountMap(i));
		}
		
		// allocationTime = System.currentTimeMillis() - allocationTime;
		
		// val writer = new FileWriter(new File("node_visit"));
		// val printer = new Printer(writer);
		
		
		
		/*
		 * localVertices can be accessed properly by Point only
		 * Iterate over localVertices and process only assigned vertices
		 */
		
		var indexCount: Int = 0;
		for(index in localVertices) {
			
			// bfsTime = System.currentTimeMillis();
			
			// Exit if we perform BC for specified pivots
			if(indexCount >= iterations) {
				break;
			}
			
			// Get source vertex
			val source = localVertices(index);
			
			if(source < 0) {
				// Source maybe -1 to indicate end of array
				continue;
			}
			
			// Skip a vertex which has zero if in- or out-neughtbor is zero
			if(this.plainGraph.getInNeighboursCount(source) == 0L  ||
				this.plainGraph.getOutNeighboursCount(source) == 0L) {
				
				continue;
			}
			
			if((indexCount++) % numParallelBfsTasks != taskId) {
				continue;
			}
			
			
			
			if(source >= maximumVertexId) {
				throw new Exception("Vertex Id more than maximumVertexId");
			}
			
			// Clear Previous Data
			// distanceMap.clear(0, maximumVertexId);
			for(var i: Int = 0; i < distanceMap.length() ; ++i)
				distanceMap(i) = -1L;
			
			geodesicsMap.clear(0, maximumVertexId);
			tempScore.clear(0, maximumVertexId);
			
			
			for(i in 0..(predecessorMap.length()-1)) {
				predecessorMap(i).clear();
			}
			
			traverseQ.clear();
			vertexStack.clear();
			
			distanceMap(source) = 0L;
			geodesicsMap(source) = 1L;
			
			traverseQ.add(source);
			// Runtime.probe();
			
			var neighbor: Long;
			var actor: Long;
			var neighbors: Array[Long]; 
			// var visitNodes: Long = 0;
			
			// Traverse the graph 
			while(!traverseQ.isEmpty()) {
				
				actor = traverseQ.removeFirst();
				
				neighbors = neighborMap(actor as Int);
				vertexStack.push(actor);
				
				// ++visitNodes;
				
				if(neighbors == null)
					continue;
				
				
				
				for(var i: Int = 0; i < neighbors.size; ++i) {
					
					neighbor = neighbors(i);
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
			// printer.println(source +","+ visitNodes);
			// bfsTime = System.currentTimeMillis() - bfsTime;
			// sumBfsTime += bfsTime;
			
			// backtrackTime = System.currentTimeMillis();
			
			// Calculate score
			while(!vertexStack.isEmpty()) {
				
				actor = vertexStack.pop();
				
				while(!predecessorMap(actor).isEmpty()) {
					val pred = predecessorMap(actor).pop();
					
					tempScore(pred) += (tempScore(actor) + 1.0D) * 
					(geodesicsMap(pred) as Double / geodesicsMap(actor) as Double);
					
				}
				
			}
			
			// backtrackTime = System.currentTimeMillis() - backtrackTime;
			// sumBacktrackTime += backtrackTime;
			
			// updateLocalScoreTime = System.currentTimeMillis();
			val length = betweennessScore.length();
			for(var i: Long = 0; i < length; ++i) {
				val score = tempScore(i);
				if( score == 0D || i == source)
					continue;
				
				val zonelock = updateScoreLock(i);
				zonelock.lock();
				betweennessScore(i) += tempScore(i);
				zonelock.unlock();
			}
			numProcessedSource++;
			
			// updateLocalScoreTime = System.currentTimeMillis()- updateLocalScoreTime;
			// sumUpdateLocalScoreTime += updateLocalScoreTime;
			
			// Print throuhgput every XX milliseconds
			val now = System.currentTimeMillis();
			val elapse = now - lastPrintThroughput;
			if( elapse > 60000) {
				val thr = numProcessedSource / ((elapse / 60000) as Double);
				Console.OUT.println(taskId + " Throughput (Processed Source/minute): " + thr);
				lastPrintThroughput = now;
				numProcessedSource = 0;
			}
			
			// Console.OUT.println("End for src: " + source + " On place: " + here.id);
		}
		// Console.OUT.println("Thread " + taskId + " has processed all assigned vertices");
		// // Print time info
		// Console.OUT.println(here + ":" + threadId + " sumBfsTime time(ms): " + sumBfsTime);
		// Console.OUT.println(here + ":" + threadId + " sumBacktrackTime neighbour time(ms): " + sumBacktrackTime);
		// Console.OUT.println(here + ":" + threadId + " sumUpdateLocalScoreTime time(ms): " + sumUpdateLocalScoreTime);
		
		// updateTimeStatLock.lock();
		// globalSpaceAllocTime += allocationTime;
		// globalBfsTime += sumBfsTime;
		// globalBacktrackTime += sumBacktrackTime;
		// globalUpdateLocalTime += sumUpdateLocalScoreTime;
		// updateTimeStatLock.unlock();
	}
	
}
