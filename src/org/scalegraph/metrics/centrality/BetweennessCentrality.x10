/*
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package org.scalegraph.metrics.centrality;

import org.scalegraph.graph.*;
import x10.array.Dist;
import x10.io.File;
import x10.io.Printer;
import x10.io.FileWriter;
import x10.lang.PlaceLocalHandle;
import x10.lang.GlobalRef;
import x10.util.*;
import x10.util.concurrent.*;

/**
 * A class for calcalculating betweenness centrality. Betweenness centrality is a measure
 * of vertex's centrality or importance in the graph
 * <p>
 * For exact betweenness centrality calculation, the algorithm is implement based on
 * one proposed by Brandes. For more information please refer [1]
 * 
 * <p>For approximation algorithm of betweeness centrality, the algorimth is implemented
 * based on one proposed by Geisberger. For more information please refer [2]
 *<p> 
 *@see
 * <ul>
 * <li><a href='http://www.inf.uni-konstanz.de/algo/publications/b-fabc-01.pdf'>
 * [1] U. Brandes. A Faster Algorithm for Betweenness Centrality. Journal of Mathematical 
 * Sociology, 25:163-177, 2001.
 * </a>
 * <p>
 * <li><a href='http://algo2.iti.kit.edu/1089.php'>
 * [2] R. Geisberger, P. Sanders, and D. Schultes. Better approximation of betweenness 
 * centrality. In 10th Workshop on Algorithm Engineering and Experimentation, 
 * pages 90-108, San Francisco, 2008. SIAM.
 * </a>
 * </ul>
 */
public class BetweennessCentrality {
    
    
    // Properties for PlainGraph
    
    transient private var plainGraph: PlainGraph;
    
    
    // Common properties
    
    
    // BC score for each place
    transient private val betweennessScore: IndexedMemoryChunk[Double];
    
    // Lock for updating betweennessScore, each lock for each vertex score
    transient private val updateScoreLock: IndexedMemoryChunk[Lock];
    
    // The number of vertices in the graph
    transient private val numVertex: Long;
    
    // The maximum id of the vertex in the graph
    transient private val maximumVertexId: Long;
    
    // A map between vertex id of its neighbour vertices
    transient private val neighbourMap: IndexedMemoryChunk[IndexedMemoryChunk[Long]];
    
    // A map between vertex id and its number of predecessor vertices
    transient private val predecessorCount: IndexedMemoryChunk[Long];
    
    // Global reference of the first-place BetweennessCentrality object 
    transient private var referenceOfFirstPlace: GlobalRef[BetweennessCentrality];
    
    // Normalization flag
    transient private val isNormalize: Boolean;
    
    // The maximum hops (PlainGraph) or wieght (AttributedGraph) to consider
    // when calculating betweenness centrality
    transient private val cutoffDistance: Long;
    
    // A number of pivots to select for estimating BC score
    transient private val iterations: Long;
    
    
    /* Betweenness Centrality for PlainGraph */
    
    /**
     * Create BetweennessCentrality object for PlainGraph and initalize fields
     *
     * @param g                 the PlainGraph object to analyze
     * @param numVertex         the number of vertices in the graph
     * @param maxVertexId       the maximum id of the vertex in the graph
     * @param isNormalize       whether to normalize BC score
     * @param cutoff            cutoff distance
     * @param iterations        the number of iterations
     * @exception               Exception
     */
    private def this(g: PlainGraph,
                     numVertex: Long,
                     maxVertexId: Long,
                     isNormalize: Boolean,
                     cutoff: Long,
                     iterations: Long) {
        
        // Initialize fields with given params
        
        if (cutoff < 0) {
            
            throw new Exception("Cutoff value should be zero or more");
        }
        
        if (iterations < 0) {
            
            throw new Exception("Iteration value should be zero or more");
        }
        
        this.plainGraph         = g;
        this.isNormalize        = isNormalize;
        this.numVertex          = numVertex;
        this.maximumVertexId    = maxVertexId + 1; // Array start at zero
        
        this.betweennessScore   = 
            IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
        
        this.neighbourMap       = 
            IndexedMemoryChunk.allocateZeroed[IndexedMemoryChunk[Long]]
                (maximumVertexId as Int);
        
        this.predecessorCount   = 
            IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId as Int);
        
        this.updateScoreLock    = 
            IndexedMemoryChunk.allocateUninitialized[Lock](maximumVertexId);
        
        this.cutoffDistance = cutoff;
        this.iterations = iterations;
        
        val len = this.updateScoreLock.length();
        
        for(var i: Long = 0; i < len; ++i) {
            
            this.updateScoreLock(i) = new Lock();
        }
    }
    
    /* API Methods */
    
    /**
     * Calculate Betweenness Centrality for PlainGraph for all vertices without distance
     * cutoff
     * 
     * @param g             the PlainGraph object o analyze
     * @param isNormalize   whether to normalize BC score
     * @return              an array of Pairs between all vertex id in the graph and 
     *                      its betweenness Cetrality score
     */
    public static def run(g: PlainGraph, isNormalize: Boolean): 
                Array[Pair[Long, Double]] {
        
        // cutoff = 0 mean no cutoff
       return run(g, isNormalize, 0);
    }
    
    /**
     * Calculate Betweenness Centrality for PlainGraph for all vertices with distance
     * cutoff
     * 
     * @param g             the PlainGraph object to analyze
     * @param isNormalize   whether to normalize BC score
     * @param cutoff        cutoff distance
     * @return              an array of Pair vertex id in the graph and 
     *                      its betweenness Cetrality score
     */
    public static def run(g: PlainGraph, isNormalize: Boolean, cutoff: Long):
                Array[Pair[Long, Double]] {
        
        val distVertexList:DistArray[Long] = g.getVertexList();
        val numVertices = g.getVertexCount() as Int;
        val vertexListBuilder: ArrayBuilder[Long] = new ArrayBuilder[Long](numVertices);
        
        // Build an array of vertex to estimate
        finish {
            
            for (p: Place in Place.places()){
                
                async {
                    
                    val dat = at(p) { distVertexList.getLocalPortion() };
                    
                    atomic {
                        
                        for (i in dat) {
                            
                            val temp = dat(i);
                            
                            if (temp >= 0L) {
                                
                                vertexListBuilder.add(temp);
                            }
                        }
                    }
                }
            }
        }
        
        // cutoff = 0 mean no cutoff
        return runInternal(g, vertexListBuilder.result(), isNormalize, cutoff);
    }
    
    /**
     * Calculate Betweenness Centrality for PlainGraph for vertices given by vertex ids
     * without distance cutoff. Note the computation takes time equally to calcalting 
     * betweenness centrality for all vertices.
     * 
     * @param g             the PlainGraph object to analyze
     * @param verticesToCal the array of vertex ids to get betweenness centrality score
     * @param isNormalize   whether to normalize BC score
     * @return              an array of Pair between vertex id and its betweenness 
     *                      cetrality score
     */
    public static def run(g: PlainGraph,
                          verticesToCal:Array[Long],
                          isNormalize: Boolean):
                                  Array[Pair[Long, Double]] {
        
        // cutoff = 0 mean no cutoff
        return runInternal(g, verticesToCal, isNormalize, 0);
    }
    
    
    /**
     * Calculate Betweenness Centrality for PlainGraph for vertices given by vertex ids
     * with distance cutoff. Note the computation takes time equally to calculating 
     * betweenness centrality for all vertices.
     * 
     * @param g             the PlainGraph object to analyze
     * @param verticesToCal the array of vertex ids to get betweenness centrality score
     * @param isNormalize   whether to normalize BC score
     * @param cutoff        cutoff distance
     * @return              an array of Pair between vertex id and its betweenness 
     *                      cetrality score
     */
    public static def run(g: PlainGraph,
                          verticesToCal: Array[Long],
                          isNormalize: Boolean,
                          cutoff: Int):
                                  Array[Pair[Long, Double]] {
        
        return runInternal(g, verticesToCal, isNormalize, cutoff);
    }
    
    
    /* Implementation */
    
    
    /**
     * Internal method which calculates betweenness centrality on single palce or multiple
     * places
     * 
     * @param g             the PlainGraph object to analyze
     * @param verticesToCal the array of vertex ids to get betweenness centrality score
     * @param isNormalize   whether to normalize BC score
     * @param cutoff        cutoff distance
     * @return              an array of Pair between vertex id and its betweenness 
     *                      cetrality score
     */
    private static def runInternal(g: PlainGraph,
                                   verticesToCal: Array[Long],
                                   isNormalize: Boolean,
                                   cutoff: Long):
                                           Array[Pair[Long, Double]] {
        
        val vertexCount = g.getVertexCount();
        val maximumVertexId= g.getMaximumVertexID();
        
        // no need to specify iterations for exact BC calculation
        val iterations = 0; 
        
        // Create BetweennessCentrality object on each place.
        val betweennessCentrality: PlaceLocalHandle[BetweennessCentrality] =
            PlaceLocalHandle.make[BetweennessCentrality](Dist.makeUnique(), 
                () => { new BetweennessCentrality(g, 
                                                  vertexCount,
                                                  maximumVertexId,
                                                  isNormalize,
                                                  cutoff, 
                                                  iterations) } );
        
        finish {
            
            // Create GlobalRef of first-place object.
            val firstPlaceInstance = new GlobalRef(betweennessCentrality());
            
            // Calculate BC on each place
            for (p in Place.places()) {
                
                if (p == here) {
                    
                    // If first-place, invoke directly. 
                    async {
                        
                        betweennessCentrality().makeNeighbourMap();
                        betweennessCentrality().calculateForPlainGraph();
                    }
                } else {
                    
                    at (p) async {
                        
                        // Pass the reference of the first-place object to another place 
                        betweennessCentrality().setReferenceOfFirstPlace(
                                                                     firstPlaceInstance);
                        betweennessCentrality().makeNeighbourMap();
                        betweennessCentrality().calculateForPlainGraph();
                    }
                }
            }
        }
        
        // Normalize score
        betweennessCentrality().normalizePlainGraphScore();
        
        // Make result
        val arrayBuilder: ArrayBuilder[Pair[Long, Double]] =
                new ArrayBuilder[Pair[Long, Double]]();
        
        for(i in verticesToCal) {
            
            val v = verticesToCal(i);
            val score = betweennessCentrality().betweennessScore(v);
            val p = new Pair[Long, Double](v, score);
            arrayBuilder.add(p);
        }
        
        return arrayBuilder.result();
    }
    
    /**
     * Make a map between vertex id and its neighbour vertices
     */
    private def makeNeighbourMap() {
        
        val distVertexList:DistArray[Long] = plainGraph.getVertexList();
        
        finish {
            
            for (p:Place in Place.places()){
                
                // Get vertices on each place and then get neighbours for each vertex
                
                val dat = at(p) { distVertexList.getLocalPortion() };
                
                async {
                    
                    for (i in dat) {
                        
                        val actor = dat(i);
                        
                        if (actor >= 0L) {
                            
                            val n = plainGraph.getOutNeighbours(actor);
                            
                            if (n == null) {
                                
                                neighbourMap(actor) =
                                    IndexedMemoryChunk.allocateZeroed[Long](0);
                                
                            } else {
                                
                                // Convert from Array of Long to IMC for 
                                // access performance and for Long integer indexing.
                                val len = n.size;
                                val r = IndexedMemoryChunk.allocateZeroed[Long](len);
                                
                                for([x] in 0..(len-1)) {
                                    r(x) = n(x);
                                }
                                neighbourMap(actor) = r;
                            }
                            
                            // Make predecessor map
                            predecessorCount(actor) =
                                plainGraph.getInNeighboursCount(actor);	
                        }
                    }
                }
            }
        }
    }
    
    /**
     * Distribute pivots for each thread
     */
    private def calculateForPlainGraph() {
        
        // currently pivot distributing based on getVertexList() method
        val distVertexList:DistArray[Long] = this.plainGraph.getVertexList();
        
        // Get vertices in current place
        val localVertices = distVertexList.getLocalPortion();
        val numParallelBfsTasks = Runtime.NTHREADS;
        val numLocalVertices: Int = localVertices.size;
        
        // Run SSSP task in parallel
        finish {
            
            for (taskId in 0..(numParallelBfsTasks -1 )) {
                
                async doBfs(taskId, numParallelBfsTasks, localVertices);
            }
        }
        
        if(Place.ALL_PLACES > 1) {
            
            // Synchronize when there are more one place to avoid overhead.
            synchronizeScore();
        }
    }
    
    /**
     * Normalize betweenness centrality score for PlainGraph.
     * Normalization factor = (n - 1) * (n -2)
     * where n is the number of vertices in the graph
     */
    private def normalizePlainGraphScore() {
                
        if (this.plainGraph.isDirected() == false) {
            
            if (this.isNormalize) {
                
                // Undirected PlainGraph and normalize
                val length = betweennessScore.length();
                val divider = (numVertex - 1) * (numVertex - 2);
                
                for(var i: Long = 0; i < length; ++i) {
                    
                    betweennessScore(i) /= divider;
                }
                
            } else {
                
                // Undirected PlainGraph, simply divide by 2
                val length = betweennessScore.length();
                
                for(var i: Long = 0; i < length; ++i) {
                    
                    betweennessScore(i) /= 2;
                }
                
            }
        } else {
            
            if(this.isNormalize) {
                
                // Directed PlainGRaph and normalize
                val length = betweennessScore.length();
                val divider = (numVertex - 1) * (numVertex - 2);
                
                for(var i: Long = 0; i < length; ++i) {
                    
                    betweennessScore(i) /= divider;
                }
            }
        }
    }
    
    /**
     * Do Breadth-First Search and aggregate pair depedencies of assigned vertices
     * 
     * @param taskId                id of current task
     * @param numParallelBfsTasks   the number of BFS tasks runing in parallel on current
     *                              place
     * @param localVertices         the local portion of distributed array of vertex ids
     */
    private def doBfs(taskId: Long, 
                      numParallelBfsTasks: Long,
                      localVertices: Array[Long]) {
        
        // var numProcessedSource: Long = 0;
        // var lastPrintThroughput: Long =  System.currentTimeMillis();
        
        // Create data structure
        val traverseQ: FixedVertexQueue = new FixedVertexQueue(maximumVertexId);
        val distanceMap = IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
        val geodesicsMap = IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
        val vertexStack: FixedVertexStack = new FixedVertexStack(maximumVertexId);
        val localScore = IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
        val touchVertex: FixedVertexStack = new FixedVertexStack(maximumVertexId);
        val scoreOfCurrentIteration = 
                IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
        val predecessorMap =  
                IndexedMemoryChunk.allocateUninitialized[FixedVertexStack]
                    (maximumVertexId);
        
        var indexCount: Long = 0;
        
        // Initailize data
        for (var i: Long = 0; i < maximumVertexId; ++i) {
            
            predecessorMap(i) = new FixedVertexStack(predecessorCount(i));
            distanceMap(i) = -1;
        }
        
        /*
         * LocalVertices can be accessed properly by Point only.
         * Iterate over localVertices and process only assigned vertices
         */
        for (index in localVertices) {
            
            // Use modulo to check whether current vertex is assigned for current task
            if ((indexCount++) % numParallelBfsTasks != taskId) {
                
                continue;
            }
            
            // For each assigned pivots
            
            // Get source vertex
            val source = localVertices(index);
            
            if (source < 0) {
                
                // Source maybe -1 to indicate end of array
                continue;
            }
            
            if (source >= maximumVertexId) {
                
                throw new Exception("Vertex Id more than maximumVertexId");
            }
            
            // Clear only touched vertices, this improves performance for sparse graph
            while (!touchVertex.isEmpty()){
                
                val i = touchVertex.pop();
                
                predecessorMap(i).clear();
                geodesicsMap(i) = 0;
                scoreOfCurrentIteration(i) = 0;
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
                
                // Distance more than cutoff, stop
                if (cutoffDistance > 0 && distanceMap(actor) >= cutoffDistance) {
                    
                    break;
                }
                
                val neighbors = neighbourMap(actor);
                val len: Long = neighbors.length();
                
                vertexStack.push(actor);
                
                if (len == 0L) {
                    
                    // No neighbour, continue
                    continue;
                }
                
                for (var i: Long = 0; i < len; ++i) {
                    
                    // For each neighbour
                    
                    val neighbor = neighbors(i);
                    val distanceFromSource = distanceMap(actor) + 1;
                    
                    if (distanceMap(neighbor) == -1L) {
                        
                        // Found the vertex first time
                        distanceMap(neighbor) = distanceFromSource;
                        traverseQ.add(neighbor);
                    }
                    
                    if (distanceMap(neighbor) == distanceFromSource) {
                        
                        // Found another shortest path
                        geodesicsMap(neighbor) += geodesicsMap(actor);
                        predecessorMap(neighbor).push(actor); 
                    }
                }
            }
            
            // Calculate pair dependencies
            while (!vertexStack.isEmpty()) {
                
                val actor = vertexStack.pop();
                
                while (!predecessorMap(actor).isEmpty()) {
                    
                    val pred = predecessorMap(actor).pop();
                    
                    scoreOfCurrentIteration(pred) += 
                        (scoreOfCurrentIteration(actor) + 1.0D) * 
                        (geodesicsMap(pred) as Double / geodesicsMap(actor) as Double);
                }
            }
            
            val length = scoreOfCurrentIteration.length();
            
            for (var i: Long = 0; i < length; ++i) {
                
                val score = scoreOfCurrentIteration(i);
                
                if (score == 0D || i == source) {
                    
                    continue;
                }
                
                localScore(i) += score;
            }
        }
        
        // Sum score of current thread to score of place
        val length = betweennessScore.length();
        
        for (var i: Long = 0; i < length; ++i) {
            
            val score = localScore(i);
            
            if(score == 0D) {
                
                continue;
            }
            
            val zonelock = updateScoreLock(i);
            
            zonelock.lock();
            betweennessScore(i) += score;
            zonelock.unlock();
        }
    }
    
    /**
     * Send score from current place to First place 
     */
    private def synchronizeScore() {
        
        if (here.id != 0) {
            
            val data = betweennessScore;
            
            referenceOfFirstPlace.evalAtHome((o: BetweennessCentrality) => {
                
                val length = o.betweennessScore.length();
                
                for (var i: Long = 0; i < length; ++i) {
                    
                    val zonelock = o.updateScoreLock(i);
                    
                    zonelock.lock();
                    o.betweennessScore(i) += data(i);
                    zonelock.unlock();
                }
                return 0;
            });
        }
    }
    
    /**
     * Set reference to BetweennessCentrality object on the first place
     * 
     * @param ref Global reference of BetweennessCentrality object on the first place
     */
    public def setReferenceOfFirstPlace(ref: GlobalRef[BetweennessCentrality]) {
        
        this.referenceOfFirstPlace = ref;
    }
    
    
    /* Betweenness Centrality Estimator */
    
    
    /* API Methodes */
    
    /**
     * Estimate Betweenness Centrality for PlainGraph for all vertices use Linear-Scaling
     * technique
     * 
     * @param g                 the PlainGraph object to analyze
     * @param isNormalize       whether to normalize BC score
     * @param iterations        the number of iterations (pivots)
     * @exception               Exception
     */
    public static def estimate(g: PlainGraph,
                               iteration: Long):
                                   Array[Pair[Long, Double]] {
        
        val distVertexList:DistArray[Long] = g.getVertexList();
        val numVertices = g.getVertexCount() as Int;
        val vertexListBuilder: ArrayBuilder[Long] = new ArrayBuilder[Long](numVertices);
        
        // Build an array of vertex to estimate
        finish {
            
            for (p: Place in Place.places()){
                
                async {
                    
                    val dat = at(p) { distVertexList.getLocalPortion() };
                    
                    atomic {
                        
                        for (i in dat) {
                            
                            val temp = dat(i);
                            
                            if (temp >= 0L) {
                                
                                vertexListBuilder.add(temp);
                            }
                        }
                    }
                }
            }
        }
        
        return estimateInternal(g, vertexListBuilder.result(), iteration);
    }
    
    /**
     * Estimate Betweenness Centrality for PlainGraph for all vertices use linear-scaling
     * technique. Note the computation takes time equally to estimating betweenness 
     * centrality for all vertices.
     * 
     * @param g                     the PlainGraph object to analyze
     * @param verticesToEstimate    the array of vertex ids to get betweenness centrality 
     *                              score
     * @param iterations            the number of iterations (pivots)
     * @exception                   Exception
     */
    public static def estimate(g: PlainGraph,
                               verticesToEstimate: Array[Long],
                               iteration: Long):
                                           Array[Pair[Long, Double]] {
        
        return estimateInternal(g, verticesToEstimate, iteration);
    }
    
    
    /* Estimator implementation */
    
    
    /**
     * Internal method for estimating Betweenness Centrality for directed PlainGraph.
     * 
     * @param g                     the PlainGraph object to analyze
     * @param verticesToEstimate    the array of vertex ids to get betweenness centrality 
     *                              score
     * @param iterations            the number of iterations (pivots)
     * @exception                   Exception, UnsupportedOperationException
     */
    private static def estimateInternal(g: PlainGraph,
                                       verticesToEstimate: Array[Long],
                                       iterations: Long):
                                               Array[Pair[Long, Double]] {
        
        if (g.isDirected() == false) {
            
            // Currently support only directed PlainGraph
            throw new UnsupportedOperationException("g must be directed graph");
        }
        
        val vertexCount = g.getVertexCount();
        val maximumVertexId= g.getMaximumVertexID();
        
        // No need for estimation
        val cutoff = 0;     
        val isNormalize = false;
        
        // Create BetweennessCentrality object on each place.
        val betweennessCentrality: PlaceLocalHandle[BetweennessCentrality] =
            PlaceLocalHandle.make[BetweennessCentrality](Dist.makeUnique(), 
                () => { new BetweennessCentrality(g,
                                                  vertexCount,
                                                  maximumVertexId,
                                                  isNormalize,
                                                  cutoff,
                                                  iterations) } );
        
        finish {
            
            // Create GlobalRef of first-place object.
            val firstPlaceInstance = new GlobalRef(betweennessCentrality());
            
            // Calculate BC on each place
            for (p in Place.places()) {
                
                if (p == here) {
                    
                    // If first-place, invoke directly. 
                    async {
                        
                        betweennessCentrality().makeNeighbourMap();
                        betweennessCentrality().estimateForPlainGraph();
                    }
                } else {
                
                    at (p) async {
                        
                        // Pass the reference of the first-place object to another place 
                        betweennessCentrality().setReferenceOfFirstPlace(
                                                                     firstPlaceInstance);
                        betweennessCentrality().makeNeighbourMap();
                        betweennessCentrality().estimateForPlainGraph();
                    }
                }
            }
        }
        
        // Currently, no proper way for normalizing approximate score
        
        // Make result
        val arrayBuilder: ArrayBuilder[Pair[Long, Double]] =
                new ArrayBuilder[Pair[Long, Double]]();
        
        for (i in verticesToEstimate) {
            
            val v = verticesToEstimate(i);
            val score = betweennessCentrality().betweennessScore(v);
            val p: Pair[Long, Double] = new Pair[Long, Double](v, score);
            
            arrayBuilder.add(p);
        }
        
        return arrayBuilder.result();
    }
    
    
    /**
     * Distribute pivots for each thread
     */
    private def estimateForPlainGraph() {
        
        // currently pivot distributing based on getVertexList() method
        val distVertexList:DistArray[Long] = this.plainGraph.getVertexList();
        
        // Get vertices in current place
        val localVertices = distVertexList.getLocalPortion();
        val numParallelBfsTasks = Runtime.NTHREADS;
        val numPlaces = Place.MAX_PLACES;
        val numLocalVertices: Int = localVertices.size;
        
        // Calculate the number of pivots for current place
        val itForCurrentPlace = 
            this.iterations / numPlaces + (here.id < this.iterations % numPlaces? 1: 0);
        
        // Run SSSP in parallel
        finish {
            
            for (taskId in 0..(numParallelBfsTasks -1 )) {
                
                // Calculate the number of pivots for each thread
                val itForCurrentTask =
                        itForCurrentPlace / numParallelBfsTasks +
                            (taskId < itForCurrentPlace % numParallelBfsTasks ? 1 : 0);
                
                async executePivot(taskId,
                                   numParallelBfsTasks,
                                   itForCurrentTask,
                                   localVertices);
            }
            
        }
        
        if (Place.ALL_PLACES > 1) {
            
            // Synchronize when there are more one place to avoid overhead
            synchronizeScore();
        } 
    }
    
    /**
     * Do Breadth-First Search and aggregate pair depedencies of assigned vertices using
     * Linear-scaling algorithm
     * 
     * @param taskId                id of current task
     * @param numParallelBfsTasks   the number of BFS tasks runing in parallel on current
     *                              place
     * @param it                    the number of iterations assigned for current task
     * @param localVertices         the local portion of distributed array of vertex ids
     */
    private def executePivot(taskId: Long,
                             numParallelBfsTasks: Long,
                             it: Long,
                             localVertices: Array[Long]) {
        
        // var numProcessedSource: Long = 0;
        // var lastPrintThroughput: Long =  System.currentTimeMillis();
        
        // Create data structure
        val traverseQ: FixedVertexQueue = new FixedVertexQueue(maximumVertexId);
        val distanceMap = IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
        val geodesicsMap =  IndexedMemoryChunk.allocateZeroed[Long](maximumVertexId);
        val vertexStack: FixedVertexStack = new FixedVertexStack(maximumVertexId);
        val iterScore =  IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
        val localScore = IndexedMemoryChunk.allocateZeroed[Double](maximumVertexId);
        val predecessorMap =
                IndexedMemoryChunk.allocateUninitialized[FixedVertexStack]
                    (maximumVertexId); 
        val touchVertex: FixedVertexStack = new FixedVertexStack(maximumVertexId);
        
        var indexCount: Long = 0;
        
        // Remaining vertices that have not been selected for current task
        var remainingVertices: Long =
                localVertices.size / numParallelBfsTasks +
                    (localVertices.size % numParallelBfsTasks > taskId ? 1: 0);
        
        val random = new Random();
        
        // Remaining pivots or vertices to analyze
        var remainingIter: long = it;
        
        // Initailize data
        for(var i: Long = 0; i < maximumVertexId; ++i) {
            
            predecessorMap(i) = new FixedVertexStack(predecessorCount(i));
            distanceMap(i) = -1;
        }
        
        /*
         * localVertices can be accessed properly by Point only
         * Iterate over localVertices and process only assigned vertices
         */
        for (index in localVertices) {
            
            // Use modulo to check whether current vertex is assigned for current task
            if ((indexCount++) % numParallelBfsTasks != taskId) {
                
                continue;
            }
            
            // Randomly select pivot based on remain iteraions and remaining vertices 
            val prob = random.nextDouble();
            
            if (prob < 1.0D - (remainingIter as Double / remainingVertices)) {

                // This pivot was not selected
                --remainingVertices;
                continue;
            }
            
            // The pivot as selected
            
            --remainingVertices;
            --remainingIter;
            
            // Get source vertex
            val source = localVertices(index);
            
            if (source < 0) {
                
                // Source maybe -1 to indicate end of array
                continue;
            }
            
            if (source >= maximumVertexId) {
                
                throw new Exception("Vertex Id more than maximumVertexId");
            }
            
            // Clear only touched vertices, this improves performance for sparse graph
            while (!touchVertex.isEmpty()) {
                
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
                val neighbors = neighbourMap(actor);
                val len: Long = neighbors.length();
                
                touchVertex.push(actor);
                vertexStack.push(actor);
                
                if (len == 0L) {
                    
                    // No neighbour, continue
                    continue;
                }
                
                for (var i: Long = 0; i < len; ++i) {
                    
                    // For each neighbour
                    
                    val neighbor = neighbors(i);
                    val distanceFromSource = distanceMap(actor) + 1;
                    
                    if( distanceMap(neighbor) == -1L) {
                        
                        // Found the vertex first time
                        distanceMap(neighbor) = distanceFromSource;
                        traverseQ.add(neighbor);
                    }
                    
                    if (distanceMap(neighbor) == distanceFromSource) {
                        
                        // Found another shortest path
                        geodesicsMap(neighbor) += geodesicsMap(actor);
                        predecessorMap(neighbor).push(actor); 
                    }
                }
            }
            
            // Calculate pair dependencies
            while (!vertexStack.isEmpty()) {
                
                val actor = vertexStack.pop();
                
                while (!predecessorMap(actor).isEmpty()) {
                    
                    val pred = predecessorMap(actor).pop();
                    val scalingFactor = distanceMap(pred) as Double / distanceMap(actor);
                    
                    iterScore(pred) +=
                        (iterScore(actor) + 1.0D ) *
                            (geodesicsMap(pred) as Double /
                             geodesicsMap(actor) as Double) * scalingFactor;
                }
            }
            
            val length = iterScore.length();
            
            for (var i: Long = 0; i < length; ++i) {
                
                val score = iterScore(i);
                
                if (score == 0D || i == source) {
                    
                    continue;
                }
                
                localScore(i) += score ;
            }
        }
        
        // Sum score of current thread to score of place
        val length = betweennessScore.length();
        
        for (var i: Long = 0; i < length; ++i) {
            
            val score = localScore(i);
            
            if (score == 0D) {
                
                continue;
            }
            
            val zonelock = updateScoreLock(i);
            
            zonelock.lock();
            betweennessScore(i) += score;
            zonelock.unlock();
        }
    }
    
    /**
     * Internal queue
     */
    private class FixedVertexQueue {
        
        var space: Long;                        // the number of allocted space
        var count: Long;                        // the number of current items in queue
        var storage: IndexedMemoryChunk[Long];  // internal storage
        var f:Long;                             // front pointer
        var r: Long;                            // rear pointer
        
        /**
         * Create queue with pre-allocated space
         * 
         * @param space the number of pre-allocated space
         */
        def this(space: Long) {
            
            this.space = space;
            this.storage = IndexedMemoryChunk.allocateZeroed[Long](space);
            f = 0;
            r = 0;
            count = 0;
        }
        
        /**
         * Add vertex id into the queue
         * 
         * @param vertexId vertex id to add
         */
        protected def add(vertexId: Long) {
            
            assert(count < space);
            
            storage(r) = vertexId;
            r = (r + 1) % space;
            ++count;
        }
        
        /**
         * Get first item and remove it from the queue
         * 
         * @return first item in queue
         */
        protected def removeFirst(): Long {
            
            assert(count > 0);
            
            val data = storage(f);
            
            f = (f + 1) % space;
            --count;
            
            return data;
        }
        
        /**
         * Reset queue
         */
        protected def clear() = {
            
            f = 0;
            r = 0;
            count = 0;
        };
        
        /**
         * Determine wether queue is empty
         */
        protected def isEmpty() = count == 0L;
    }
    
    /**
     * Internal stack
     */
    private class FixedVertexStack {
        
        val storage: IndexedMemoryChunk[Long];              // internal storage for stack
        val size: Long;                                     // the size of stack
        var index: Long;                                    // top pointer
        
        /**
         * Create stack with pre-allocated space
         * 
         * @param size the number of pre-allocated space
         */
        def this(size: Long) {
            
            this.size = size;
            this.storage = IndexedMemoryChunk.allocateZeroed[Long](size);
            this.index = 0;
        }
        
        /**
         * Pop and return the last value in stack
         */
        protected def pop(): Long {
            
            assert(index > 0);
            
            return storage(--index);
        }
        
        /**
         * Push item into stack
         */
        protected def push(vertexId: Long) {
            
            assert(index < size);
            
            storage(index) = vertexId;
            ++index;
        }
        
        /**
         * Clear stack
         */
        protected def clear() = index = 0;
        
        /**
         * Determine wether stack is empty
         */
        protected def isEmpty() = index == 0L;
    }
}