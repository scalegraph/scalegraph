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
	
	// Properties for AttributedGraph
	val attributedGraph: AttributedGraph;
	val vertexIdAndIndexMap: HashMap [Long, Int];
	
	// Properties for PlainGraph
	val plainGraph: PlainGraph;
	
	// Common properties
	val isNormalize: Boolean;
	val betweennessScore: Array[Double];
	val numVertex: Int;
	val maximumVertexId: Int;
	
	// var isEnableCache: Boolean = false;
	
	var cacheSize: Int = 2000;
	val ALLOC_SPACE = Runtime.MAX_THREADS;
	val globalCaches: Array[Cache];
	val aquireSpaceLock: Lock = new Lock();
	val freeSpaceAccessLock = new Lock();
	val updateScoreLock: Lock = new Lock();
	
	val freeSpace = new Array[Boolean](ALLOC_SPACE, (i : Int) => true);
	
	var globalTraverseQ: Array[ArrayList[Int]];
	var globalDistanceMap: Array[IndexedMemoryChunk[Long]];
	var globalGeodesicsMap: Array[IndexedMemoryChunk[Long]];
	var globalTempScore: Array[IndexedMemoryChunk[Double]];
	var globalPredecessorMap: Array[Array[IndexedMemoryStack[Int]]];
	var globalVertexStack: Array[IndexedMemoryStack[Int]];
	val neighborMap: HashMap[Long, Array[Long]];

	protected def this(g: AttributedGraph, inputVertexIdAndIndexMap: HashMap[Long, Int], isNormalize: Boolean) {
		// Keep datafrom user to instance's memeber
		this.attributedGraph = g;
		this.isNormalize = isNormalize;
		
		// Initialize data
		this.numVertex = this.attributedGraph.getVertexCount() as Int;
		this.betweennessScore = new Array[Double](numVertex, 0.0D);
		this.vertexIdAndIndexMap = inputVertexIdAndIndexMap;
		
		// Unuse properties
		this.plainGraph = null;
		this.maximumVertexId = 0;
		this.globalCaches = null;
		this.neighborMap = null;
	}

	protected def this(g: PlainGraph, nVertex: Long, maxVertexId: Long, isNormalize: Boolean, cacheSz: Int) {
		
		this.plainGraph = g;
		this.isNormalize = isNormalize;
		
		// Initialize data
		
		this.numVertex = nVertex as Int;
		this.maximumVertexId = maxVertexId as Int + 1; // Array start at zero
		this.betweennessScore = new Array[Double](this.maximumVertexId, 0.0D);
		this.cacheSize = cacheSz;
		this.globalCaches = new Array[Cache](ALLOC_SPACE, (i: Int) => new Cache(cacheSz));

		// Unuse properties
		this.vertexIdAndIndexMap = null;
		this.attributedGraph = null;
		this.neighborMap = new HashMap[Long, Array[Long]](numVertex);
	
		
	}
    /****************************************************************************
    *                                AttributedGraph                  *
    ****************************************************************************/

	public static def run(g: AttributedGraph, isNormalize: Boolean) : Array[Pair[Vertex, Double]] {
		
		val estimateVertices = new ArrayBuilder[Vertex]();
		// val g = graph as AttributedGraph;
		

		val localVertexIdAndIndexMap = new HashMap[Long, Int]();
		
		g.iterateOverVertices((v: Vertex) => {
			estimateVertices.add(v);
			val index = localVertexIdAndIndexMap.size();
			localVertexIdAndIndexMap.put(v.getInternalId(), index);
		});
		
		return runInternal(g, estimateVertices.result(), localVertexIdAndIndexMap, isNormalize);
	}
	
	public static def run(g: AttributedGraph, verticesToEstimate: Array[Vertex], isNormalize: Boolean) : Array[Pair[Vertex, Double]] {

		// val g = graph as AttributedGraph;
		
		val localVertexIdAndIndexMap = new HashMap[Long, Int]();
		g.iterateOverVertices((v: Vertex) => {
			val index = localVertexIdAndIndexMap.size();
			localVertexIdAndIndexMap.put(v.getInternalId(), index);
		});
		return runInternal(g, verticesToEstimate, localVertexIdAndIndexMap, isNormalize);
	}
	
	public static def runInternal(g: AttributedGraph, verticesToEstimate: Array[Vertex], vertexIdAndIndexMap:HashMap[Long, Int], isNormalize: Boolean): Array[Pair[Vertex, Double]] {
		
		val betweennessCentrality: PlaceLocalHandle[BetweennessCentrality] 
		= PlaceLocalHandle.make[BetweennessCentrality](Dist.makeUnique(), 
				() => { new BetweennessCentrality(g, vertexIdAndIndexMap, isNormalize) } );
		
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
		if(this.attributedGraph.isDirected() == false) {
			
			if(this.isNormalize) {
				// Undirected and normalize
				for(i in betweennessScore) {
					betweennessScore(i) /= ((numVertex -1) * (numVertex - 2)) as Double;
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
					betweennessScore(i)  /= (numVertex -1) * (numVertex - 2);
				}
			}
		}
		
		Team.WORLD.allreduce(here.id, betweennessScore, 0, betweennessScore, 0, numVertex, Team.ADD);
	}

	public def getIndex(v: Vertex): Int {
		
			val vertexId = vertexIdAndIndexMap.get(v.getInternalId()).value;
			return vertexId;
		
	}
	
	protected  def doBfsOnAttrGraph(source: Vertex): void {
		
		val traverseQ: ArrayList[Vertex] = new ArrayList[Vertex]();
		val distanceMap: Array[Long] = new Array[Long](maximumVertexId);;
		val geodesicsMap: Array[Long] = new Array[Long](numVertex);
		val tempScore: Array[Double] = new Array[Double](numVertex);
		val predecessorIdStack: Stack[Vertex] = new Stack[Vertex]();
		
		// Cleare previous data
		for(i in 0..(this.numVertex -1)) {
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
		
			neighbors: Array[Vertex] = this.attributedGraph.getNeighbors(actor);
		
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
			
			neighbors: Array[Vertex] = this.attributedGraph.getNeighbors(actor);
			
			for(i in neighbors) {
				neighbor: Vertex = neighbors(i);
				val neighborIndex: Int = getIndex(neighbor);
			
				if(distanceMap(neighborIndex) == distanceMap(actorIndex) - 1) {
					tempScore(neighborIndex) += (tempScore(actorIndex) + 1.0D) * 
					(geodesicsMap(neighborIndex) as Double) / (geodesicsMap(actorIndex) as Double);
				}
			}
		}
		updateScoreLock.lock();
			for(i in 0..(betweennessScore.size -1)) {
				betweennessScore(i) += tempScore(i);
			}
		
		updateScoreLock.unlock();
		
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

		return runInternal(g, verticesToEstimate, isNormalize, 20);

	}
	
	public static def run(g: PlainGraph, verticesToEstimate: Array[Long], isNormalize: Boolean, percentCache: Int) : Array[Pair[Long, Double]] {

		return runInternal(g, verticesToEstimate, isNormalize, percentCache);

	}
	
	public static def runInternal(g: PlainGraph, verticesToEstimate: Array[Long], isNormalize: Boolean, percentCache: Int): Array[Pair[Long, Double]] {
		
		val vertexCount = g.getVertexCount();
		val maximumVertexId= g.getMaximumVertexID();
		val cacheSize = ((percentCache / 100.0 * vertexCount)) as Int;
		val betweennessCentrality: PlaceLocalHandle[BetweennessCentrality] 
		= PlaceLocalHandle.make[BetweennessCentrality](Dist.makeUnique(), 
				() => { new BetweennessCentrality(g, vertexCount, maximumVertexId, isNormalize, cacheSize) } );
		
		finish {
			for(p in Place.places()) {
				at (p) async {
					Team.WORLD.barrier(here.id);
					betweennessCentrality().makeNeighbourMap();
					betweennessCentrality().calculateOnPlainGraph();
				}
			}
		}
		
		// Make result pairs
		val arrayBuilder: ArrayBuilder[Pair[Long, Double]] = new ArrayBuilder[Pair[Long, Double]]();
		for(i in verticesToEstimate) {
			val v = verticesToEstimate(i);
			val score = betweennessCentrality().betweennessScore(verticesToEstimate(i) as Int);
			val p: Pair[Long, Double] = new Pair[Long, Double](v, score);
			arrayBuilder.add(p);
		}
		return arrayBuilder.result();
	}
	
	protected def makeNeighbourMap() {
		val distVertexList:DistArray[Long] = plainGraph.getVertexList();
		finish {
			for(p:Place in Place.places()){
				
					val dat = at(p) {distVertexList.getLocalPortion()};
					
						for (i in dat) {
							val actor = dat(i);
							if(actor >= 0L) {
								val n = plainGraph.getOutNeighbours(actor);
								neighborMap.put(actor, n);
								Console.OUT.println("Add  neighbor " + actor);
							}
						}
					
				
			}
		}
	}
	
	protected def calculateOnPlainGraph() {
		
		
		
		finish {
			val distVertexList:DistArray[Long] = this.plainGraph.getVertexList();
			val data = distVertexList.getLocalPortion();
			var counter: Int = 0;
			
			
			
			// Init share space
			globalTraverseQ = new Array[ArrayList[Int]]
				(ALLOC_SPACE, (int: Int) => new ArrayList[Int]());
			
			globalDistanceMap = new Array[IndexedMemoryChunk[Long]]
				(ALLOC_SPACE, (i: Int) => IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId));
			
			globalGeodesicsMap = new Array[IndexedMemoryChunk[Long]]
				(ALLOC_SPACE, (i: Int) => IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId));
			
			globalTempScore = new Array[IndexedMemoryChunk[Double]]
				(ALLOC_SPACE, (i: Int) => IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId));
			
			globalPredecessorMap = new Array[Array[IndexedMemoryStack[Int]]]
				(ALLOC_SPACE, (i : Int) => 
					new Array[IndexedMemoryStack[Int]](maximumVertexId, (i: Int) => new IndexedMemoryStack[Int]()));
			
			globalVertexStack = new Array[IndexedMemoryStack[Int]]
				(ALLOC_SPACE, (i: Int) => new IndexedMemoryStack[Int]());
			
			for (i in data) {		
				val v = data(i);
				if(v >= 0) {
					//val spaceId = acquireSpaceId();
					Console.OUT.println("Run for source " + v);
					async doBfsOnPlainGraph( v);
				}
				
			}
			
			Console.OUT.println("***************************");
			Console.OUT.println("Reaching finish:" + here.id);
			Console.OUT.println("***************************");
		}
		Console.OUT.println("***************************");
		Console.OUT.println("Run for all source vertex" + here.id);
		Console.OUT.println("***************************");
		
		
		// if undirected graph divide by 2
		if(this.plainGraph.isDirected() == false) {
			
			if(this.isNormalize) {
				// Undirected and normalize
				betweennessScore.map(betweennessScore, (a: Double) => a / (((numVertex - 1) * (numVertex - 2))) );
			} else {
				// Undirected only
				betweennessScore.map(betweennessScore, (a: Double) => a / 2 );
			}
		} else {
			if(this.isNormalize) {
				// Directed and normalize
				betweennessScore.map(betweennessScore, (a: Double) => a / ((numVertex -1) * (numVertex - 2)) );
			}
		}
		
		Team.WORLD.allreduce(here.id, betweennessScore, 0, betweennessScore, 0, betweennessScore.size, Team.ADD);
	}
	
	
	
	protected def getNeighBours(cache: Cache, vertexId:Int) {
		
		return cache(vertexId, this.plainGraph);
	}
	
	protected def acquireSpaceId() {
		
		aquireSpaceLock.lock();
		
		var didAcquire: Boolean = false;
		var id: Int = -1;
		while(!didAcquire) {
			
			for(i in 0..(freeSpace.size - 1)) {
				if(freeSpace(i)) {
					// Space is available
					freeSpace(i) = false;
					id = i;
					didAcquire = true;
					break;
				}
			}
			System.sleep(1);
		}
		
		aquireSpaceLock.unlock();
		
		return id;
	}
	
	protected def releaseSpaceId(spaceId: Int) {
		freeSpace(spaceId) = true;
	}
	
	protected def doBfsOnPlainGraph( vertexId: Long) {

		// val traverseQ  = globalTraverseQ(spaceId);
		// val distanceMap = globalDistanceMap(spaceId);
		// val geodesicsMap = globalGeodesicsMap(spaceId);
		// val tempScore =  globalTempScore(spaceId);
		// val predecessorMap = globalPredecessorMap(spaceId);
		// val vertexStack = globalVertexStack(spaceId);
		// val cache = globalCaches(spaceId);
		
		val traverseQ: ArrayList[Int] = new ArrayList[Int]();
		val distanceMap = IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);;
		val geodesicsMap =  IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
		val tempScore =  IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
		val predecessorMap = new Array[Stack[Int]](maximumVertexId, (i: Int) => new Stack[Int]());
		val vertexStack: Stack[Int] = new Stack[Int]();
		// val cache = new Cache(this.cacheSize);
		
		// Cleare previous data
		finish {
			async distanceMap.clear(0, maximumVertexId);
			async geodesicsMap.clear(0, maximumVertexId);
			async tempScore.clear(0, maximumVertexId);
		}
		
		for(i in predecessorMap) {
			 predecessorMap(i).clear();
		}
		
		vertexStack.clear();
		
		// Get source vertex
		val source: Int = vertexId as Int;
		distanceMap(source) = 0L;
		geodesicsMap(source) = 1L;
		
		traverseQ.add(source);
		
		// Traverse the graph
		while(!traverseQ.isEmpty()) {
			
			val actor: int = traverseQ.removeFirst();
			var  neighbors: Array[Long] = null;

			// Runtime.probe();
			// neighbors = getNeighBours(cache, actor);
			// neighbors = this.plainGraph.getOutNeighbours(actor);
			if(neighborMap.containsKey(actor)) {
				neighbors = neighborMap.get(actor).value;
			} else {
				Console.OUT.println("Cant find the neighbor of node " + actor);
			}

			vertexStack.push(actor);
			
			if(neighbors == null)
				continue;
			
			for(i in neighbors) {
				val neighbor: Int = neighbors(i) as Int;
				
				if(geodesicsMap(neighbor) > 0) {
					// We found this node again, another shortest path
					if(distanceMap(neighbor) == distanceMap(actor) + 1) {
						geodesicsMap(neighbor) += geodesicsMap(actor);
						predecessorMap(neighbor).push(actor);
					}
				} else {
					// Found this node first time
					geodesicsMap(neighbor) += geodesicsMap(actor);
					distanceMap(neighbor) = distanceMap(actor) + 1;
					
					// if(distanceMap(neighbor) > 50)
					// 	continue;
					
					traverseQ.add(neighbor);
					predecessorMap(neighbor).push(actor);
				}
			}
		} // End of traversal
		
		// Calculate score
		while(!vertexStack.isEmpty()) {
			
			val actor: Int = vertexStack.pop();
			
			while(!predecessorMap(actor).isEmpty()) {
				val pred = predecessorMap(actor).pop();

				tempScore(pred) += (tempScore(actor) + 1.0D) * 
				(geodesicsMap(pred) as Double / geodesicsMap(actor) as Double);
				
			}
			
		}
		
		updateScoreLock.lock();
			for(i in 0..betweennessScore.size) {
				if(i == source)
					continue;
				betweennessScore(i) += tempScore(i);
			}
		updateScoreLock.unlock();
		
		// releaseSpaceId(spaceId);
		Console.OUT.println("End for src: " + source + " On place: " + here.id);
	}
	
	/****************************************************************************
	 *                              Inner Classes                     *
	 ****************************************************************************/
	
	protected static class Cache {
		
		var numData: Int = 0;
		val records: ArrayList[CacheRecord];
		val size: Int;
		val keyIndexMap: HashMap[Int, Int];

		def this(sz: Int) {
			numData = 0;
			size = sz;
			
			if(size <= 0) {
				records = null;
				keyIndexMap = null;
			} else {
				records = new ArrayList[CacheRecord](size);
				keyIndexMap = new HashMap[Int, Int](size);
			}
			
			
			for(i in 0..(size -1)) {
				records(i) = new CacheRecord();
			}
		}
		
		public def size() = size;
		
		public def getIndexForKey(key: Int) {
			
			if(numData <= 0)
				return -1;
			
			// for(i in 0..(numData -1)) {
			// 	val r = records(i);
			// 	if(r.key == key) {
			// 		return i;
			// 	}
			// }
			
			if(keyIndexMap.containsKey(key)) {
				return keyIndexMap(key).value;
			}
			
			
			return -1;
		}
		

		public def update(key: Int, g: PlainGraph) {
			
			val dat = g.getOutNeighbours(key);

			if(numData == size) {
				// Cache full
				records.sort((u: CacheRecord, v: CacheRecord)=> v.hit.compareTo(u.hit));
				numData = size - size / 3;
				
				keyIndexMap.clear();
				for(i in 0..(numData-1)) {
					records(i).hit = 0;
					keyIndexMap.put(records(i).key, i);
				}
			}
			
			val index = numData;
			val r = records(index);
			r.key = key;
			r.data = dat;
			++r.hit;
			++numData;
			
			keyIndexMap.put(key, index);
			
			return dat;
		}
		
		public operator this(key:Int, g:PlainGraph) {
			
			// cache is disabled
			if(size == 0) {
				return g.getOutNeighbours(key);
			}
				
			val i = getIndexForKey(key);
			if(i == -1) {
				val dat = update(key, g);
				return dat;
			}
			val dat = records(i).data;
			return dat;
		}
	}
	
	protected static class CacheRecord {
		var key: Int = -1;
		var data: Array[Long];
		var hit: Int = 0;
	}
	
	protected static class IndexedMemoryStack[T] { 
		
		val storage = new GrowableIndexedMemoryChunk[T]();

		
		public def clear() {
			storage.clear();
		}
		
		public def push(t: T) {
			storage.add(t);
		}
		
		public def pop(): T {
			
			data: T = storage(storage.length() - 1);
			storage.removeLast();
			return data;
		}
		
		public isEmpty() {
			return storage.length() == 0;
		}

	}
	
}
