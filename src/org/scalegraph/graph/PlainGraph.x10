package org.scalegraph.graph;

//import x10.matrix.dist.DistDenseMatrix;
//import x10.matrix.block.Grid;
import x10.util.Pair;
import x10.array.DistArray;
import x10.util.ArrayList;
import x10.util.StringBuilder;

import org.scalegraph.graph.GraphSizeCategory;
import org.scalegraph.util.ScaleGraphMath;

/**
 * The class PlainGraph represents an Attribute-less graph. Any of the Vertices or Edges of this Graph do not contain attributes. The PlainGraph has been modeled in an Adjacency Matrix.
 * The PlainGraph can increase/decrease it's size on demand. If there are multiple edges between two vertices (E.g. n), then the cell corresponding to the egdes contains n as the value.
 */
public class PlainGraph implements Graph{
	private var isDirected:Boolean = false;						//Indicates whether the Graph is a directed one or not. True - directed False - Indirected
	private var adjacencyListAtoB:DistArray[PlainGraphRecord]; 
	private var adjacencyListBtoA:DistArray[PlainGraphRecord];
	private var vertexIncrementFactor:Double = 3;		//This is the times the matrix is increased by its size
	private var sizeCategory:Short = -1;				//The size of the Graph
	private var nVertices:Int = -1;
	private var workerThreadCount:Int = 100;			//The number of threads that run simultaneously
	private var totalVertices:Long = 0l;				//This is the supported number of vertices
	private var edgeSplitSymbol:String = " ";
	private var addedCountTemp:Int = 0;
	private var v:Long = 0l;
	private var largestReportedVertex:Long = 0l;
	private var actualTotalVertices:Long = 0l;			//This is the total number of vertices
	private var actualTotalEdges:Long = 0l;			//This is the total number of edges
	private var uniqueVertexList:DistArray[Long] = null; //List of unique vertices
	private var uniqueVertexCounter:DistArray[Int] = null; //This array of integers keeps track of the unique vertices
	private var VERTEX_CACHE_SIZE:Int = 20;
	private var VERTEX_CACHE_DELWINDOW:Int = 5;
	private var VERTEX_CACHE_REFRESH_FREQ:Int = VERTEX_CACHE_SIZE * 1000;
	private var VERTEX_CACHE_THRESHOLD:Int = VERTEX_CACHE_SIZE - VERTEX_CACHE_DELWINDOW;
	private var cacheCounter:Int = 0;
	private var vertexCache:Array[VertexCacheRecord] = new Array[VertexCacheRecord](VERTEX_CACHE_SIZE);
	private val lrv = new Array[GlobalRef[Cell[Long]]](Place.MAX_PLACES);
	private var largestLocalVertex:Long = 0l;
	private var lrvFound:boolean = false;
	private val largeV = new GlobalRef[Cell[Long]](new Cell[Long](0l));
	private val curMachine = GlobalRef[Cell[Int]](new Cell[Int](0));
	private val curVertex = GlobalRef[Cell[Long]](new Cell[Long](0));
	
	/**
     * Default constructor 
     */
    public def this() {
    	//By default the graph size category is set to SMALL
    	this.sizeCategory = GraphSizeCategory.SMALL;
    	
    	//Set the initial row, column sizes
    	vertexIncrementFactor = sizeCategory; //In this case it will be a small Graph created in one single node.
    	    	
    	nVertices = ScaleGraphMath.pow(2, vertexIncrementFactor as Int) as Int;
    	Console.OUT.println(nVertices);
    	
    	var R2:Region = (1..1)*(1..nVertices);
    	var b:Dist = Dist.makeBlock(R2);
    	adjacencyListAtoB = DistArray.make[PlainGraphRecord](b, new PlainGraphRecord());
    	adjacencyListBtoA = DistArray.make[PlainGraphRecord](b, new PlainGraphRecord());
    }
    
    /**
     * This constructor accepts the size category of the graph
     * @param sizeCat the size cateegory of the Graph. This is one of the fields from GraphSizeCategory class. 
     */
    public def this(val sizeCat:Short) {
    	if((sizeCat == GraphSizeCategory.SMALL) || (sizeCat == GraphSizeCategory.MEDIUM) || (sizeCat == GraphSizeCategory.LARGE)){
    		//Set the size category of the Graph
    		this.sizeCategory = sizeCat;
    		var R2:Region = null;
    		
    		Console.OUT.println(Place.MAX_PLACES);
    		
    		if(sizeCat == GraphSizeCategory.SMALL){
    			vertexIncrementFactor = sizeCat;
    			nVertices = ScaleGraphMath.pow(2, vertexIncrementFactor as Int) as Int;
    			R2 = (1..1)*(1..nVertices);
    			totalVertices = nVertices;
    		}else if((sizeCat == GraphSizeCategory.LARGE) || (sizeCat == GraphSizeCategory.MEDIUM)){
    			vertexIncrementFactor = GraphSizeCategory.MEDIUM;
    			nVertices = ScaleGraphMath.pow(2, vertexIncrementFactor as Int) as Int;
    			totalVertices = Place.MAX_PLACES*nVertices as long;
    			v = ScaleGraphMath.pow(2,sizeCategory);
    			Console.OUT.println("vertices per place : " + nVertices);
    			Console.OUT.println("total supported vertices : " + totalVertices);
    			
    			R2 = (1..Place.MAX_PLACES)*(1..nVertices);
    			
    			for(p in Place.places()){
    				lrv(p.id) = at(p)GlobalRef[Cell[Long]](new Cell[Long](0l));
    			}
    		}
    		    		
    		var b:Dist = Dist.makeBlock(R2);
    		adjacencyListAtoB = DistArray.make[PlainGraphRecord](b, new PlainGraphRecord());
    		adjacencyListBtoA = DistArray.make[PlainGraphRecord](b, new PlainGraphRecord());
    		
    		//Initialize the Vertex Cache
    		for(item in vertexCache){
    			vertexCache(item) = new VertexCacheRecord();
    			vertexCache(item).id = -1;
    			vertexCache(item).nFound = 0;
    			vertexCache(item).nChecked = 1;
    		}
    		
    	}else{
    		throw new UnsupportedOperationException("Invalid Graph Size Category was specified : " + sizeCat);    		
    	}
    }
    
    public def init(){
    	finish for(p in adjacencyListAtoB.dist.places()){
    		val r:Region = adjacencyListAtoB.dist.get(p);
    		
    		async at(p){
    			for(point:Point in r){
    				adjacencyListAtoB(point) = new PlainGraphRecord();
    			}
    		}
    	}
    	
    	finish for(p in adjacencyListBtoA.dist.places()){
    		val r:Region = adjacencyListBtoA.dist.get(p);
    		
    		async at(p){
    			for(point:Point in r){
    				adjacencyListBtoA(point) = new PlainGraphRecord();
    			}
    		}
    	}
    	
    	Console.OUT.println("Done Init... ");
    }
    
    /**
     * This constructor accepts the initial size of the Graph to be created. This can be used if the user has an idea the size
     * of the Graph he/she handles.
     * @param scale the scale of the graph to be created
     * @param sizeCat the size cateegory of the Graph. This is one of the fields from GraphSizeCategory class. 
     */
    public def this(val scale:Int, val sizeCat:Short){
    	
    	if((sizeCat == GraphSizeCategory.SMALL) || (sizeCat == GraphSizeCategory.MEDIUM) || (sizeCat == GraphSizeCategory.LARGE)){

    		if((sizeCat == GraphSizeCategory.SMALL) || (sizeCat == GraphSizeCategory.MEDIUM)){
    			if(scale > sizeCat){
    				throw new UnsupportedOperationException("The scale specified exceeds the Graph Size Category : " + sizeCat);    				
    			}
    		}
    		
    		if(sizeCat == GraphSizeCategory.SMALL){
    			vertexIncrementFactor = sizeCat;
    		}else if((sizeCat == GraphSizeCategory.LARGE) || (sizeCat == GraphSizeCategory.MEDIUM)){
    			vertexIncrementFactor = GraphSizeCategory.MEDIUM * Place.MAX_PLACES;
    		}
	    	
	    	nVertices = ScaleGraphMath.pow(2, vertexIncrementFactor as Int) as Int;
	    	var R2:Region = (1..1)*(1..nVertices);
	    	var b:Dist = Dist.makeBlock(R2);
	    	adjacencyListAtoB = DistArray.make[PlainGraphRecord](b, new PlainGraphRecord());
	    	adjacencyListBtoA = DistArray.make[PlainGraphRecord](b, new PlainGraphRecord());
    	}else{
    		throw new UnsupportedOperationException("Invalid Graph Size Category was specified : " + sizeCat);
    	}
    }
    
    
    /**
     * This method returns the Edge count of the PlainGraph
     */
    public def getEdgeCount():Long{
    	if(actualTotalEdges == 0l){
    		val eCount = GlobalRef[Cell[Long]](new Cell[Long](0));
    		vertexIncrementFactor = GraphSizeCategory.MEDIUM;
    		nVertices = ScaleGraphMath.pow(2, vertexIncrementFactor as Int) as Int;
    		val rlv = getMaximumVertexID();
    		var maxMachine:Int = (rlv/(nVertices)) as Int;
    		Console.OUT.println("largestReportedVertex : " + rlv);
    		
    		finish for(p in adjacencyListAtoB.dist.places()){
    			if(p.id <= maxMachine){
    				async at(p){
    					var l:Array[PlainGraphRecord] = adjacencyListAtoB.getLocalPortion();
    					
    					if(l != null){
    						if(l.size > 0){
    							for(item in l){
    								
    								if((item != null) && (item(1) > largestReportedVertex)){
    									Console.OUT.println("Found largest vertex, Now exitting...");
    									break;
    								}
    								
    								if(l(item(0),item(1)) != null){
    									atomic{
    										eCount()() += l(item(0),item(1)).edges != null ? l(item(0),item(1)).edges.size():0;
    									}
    								}else{
    									Console.OUT.println("IS NULL");
    								}
    							}
    						}else{
    							Console.OUT.println("The array is 0 size at place : " + here.id);
    						}
    					}else{
    						Console.OUT.println("The array is NULL at place : " + here.id);
    					}
    				}
    			}
    		}
    		
    		actualTotalEdges = eCount()(); 
    		
    		return eCount()();
    	}else{
    		return actualTotalEdges;
    	}    	
    }
    
    
    /**
     * This method returns the Vertex count of the PlainGraph
     */
    public def getVertexCount():Long{
    	if(actualTotalVertices == 0l){
	    	val vCount = GlobalRef[Cell[Long]](new Cell[Long](0));
	    	vertexIncrementFactor = GraphSizeCategory.MEDIUM;
	    	nVertices = ScaleGraphMath.pow(2, vertexIncrementFactor as Int) as Int;
	    	val lvr = getMaximumVertexID(); 
	    	
	    	var maxMachine:Int = (largestReportedVertex/(nVertices)) as Int;
	    	Console.OUT.println("largestReportedVertex : " + largestReportedVertex);
	    	
	    	finish for(p in adjacencyListAtoB.dist.places()){
	    		if(p.id <= maxMachine){
			    		async at(p){
			    			var l:Array[PlainGraphRecord] = adjacencyListAtoB.getLocalPortion();
			    			
			    			if(l != null){
				    			if(l.size > 0){
					    			for(item in l){
					    				
					    				if((item != null) && (item(1) > lvr)){
					    					Console.OUT.println("Found largest vertex, Now exitting...");
					    					break;
					    				}
					    				
					    				if(l(item(0),item(1)) != null){
					    					atomic{
					    						vCount()() += l(item(0),item(1)).id > 0 ? 1:0;
					    					}
					    				}else{
					    					Console.OUT.println("IS NULL");
					    				}
					    			}
				    			}else{
				    				Console.OUT.println("The array is 0 size at place : " + here.id);
				    			}
			    		}else{
			    			Console.OUT.println("The array is NULL at place : " + here.id);
			    		}
			    	 }
	    		}
	    	}
	    	
	    	actualTotalVertices = vCount()(); 
	    	
	    	return vCount()();
    	}else{
    		return actualTotalVertices;
    	}    	
    }    
    
    /**
     * This method is used to know whether the PlainGraph is directed or not
     * 
     * @return if true the PlainGraph is directed
     */
    public def isDirected():x10.lang.Boolean {
    	return isDirected;
    }

    /**
     * This method is used to set the PlainGraph as directed or undirected.
     * 
     * @param if true the Graph is considered as a directed PlainGraph
     */
    public def setDirected(var id:x10.lang.Boolean):void {
    	this.isDirected = id;
    }

    /**
     * Creates a new Graph having the same number of Vertices as the bigger Graph comparing this Graph with the input Graph.
     * 
     * @return a PlainGraph with the composition results
     */
    public def composition(org.scalegraph.graph.Graph):org.scalegraph.graph.PlainGraph {
    	throw new UnsupportedOperationException("Not implemented.");
    }

    /**
     * The method compares this PlainGraph with another PlainGraph.
     * 
     * @parem A PlainGraph object which need to be compared with this
     * @return 0 - If this PlainGraph is equivalent to the input PlainGraph. Total Equivalency of two PlainGraphs is
     *             determined by considering the similarity of the two Adjacency Matrices.
     *         1 - If this PlainGraph has more Vertices than the input Graph
     *         -1 - If this PlainGraph has less Vertices compared to the input
     */
    public def compareTo(var id:org.scalegraph.graph.Graph):x10.lang.Int {
    	throw new UnsupportedOperationException("Not implemented.");
    }

    /**
     * Creates a new PlainGraph which complements this PlainGraph.
     * 
     * @return A complement version of this PlainGraph
     */
    public def complement():org.scalegraph.graph.PlainGraph {
    	throw new UnsupportedOperationException("Not implemented.");
    }

    /**
     * The method defines how this PlainGraph is Equal to another PlainGraph.
     * 
     * @param a PlainGraph that need to be compared with this
     * @return true if the two plain Graphs are equivalent
     */
    public def equals(var that:org.scalegraph.graph.Graph):x10.lang.Boolean {
    	if(this.compareTo(that as PlainGraph) == 0){
    		return true;
    	}else{
    		return false;
    	}
    }

    /**
     * Creates a new Graph by taking the difference between a Graph with this Graph object considering their Vertices.
     * 
     * @param the PlainGraph that need to be subtracted
     * @return a PlainGraph that contains the subtracted result
     */
    public def substract(var id:org.scalegraph.graph.Graph):org.scalegraph.graph.PlainGraph {
		throw new UnsupportedOperationException("Not implemented.");
    }

    /**
     * This method checks whether a particular vertex exists in the Vertex cache
     * @param Vertex ID
     * @param true - if the vertex exists, false otherwise.
     */
    private def isInVertexCache(vertex:Long):Boolean{
    	var flag:Boolean = false;
    	var loc:Point = null;
    	var vertCachRec:VertexCacheRecord = null;
    	    	
    	for(item in vertexCache){
    		vertCachRec = vertexCache(item);
    		if(vertCachRec.id != -1L){
    			if(vertCachRec.id == vertex){
    				vertCachRec.nFound += 1;
    				vertCachRec.nChecked += 1;
    				flag = true;
    			}else{
    				vertCachRec.nChecked += 1;
    			}
    		}else{
    			if(loc == null){
    				loc = item;
    			}
    		}
    	}
    	
    	if((!flag)&&(loc!=null)){
    		vertCachRec = vertexCache(loc);
    		vertCachRec.id = vertex;
    		vertCachRec.nFound = 1;
    		vertCachRec.nChecked = 1;
    	}
    	cacheCounter++;

    
    	if(cacheCounter>VERTEX_CACHE_REFRESH_FREQ){
    		//Cache is stale, lets refresh
    		cacheCounter = 0;
    		var i:Int = 0;
    		
   			sortVertexCache();
    		
    		//Delete the low scoring cache records
    		for(item in vertexCache){
    			if(i>VERTEX_CACHE_THRESHOLD){
    				vertCachRec = vertexCache(item);
    				vertCachRec.id = -1;
    				vertCachRec.nFound = 0;
    				vertCachRec.nChecked = 1;
    			}else{
    				i++;
    			}
    		}
    	}

    	return flag;
    }
    
    /**
     * This function sorts the vertex cache in Descending order based on their score frequencies
     */
    private def sortVertexCache(){
    	var len:Int = VERTEX_CACHE_SIZE;
    	var vertCacheRecord:VertexCacheRecord = null;
    	var j:Int = 0;
    	var curVal:Float = 0f;
    	
    	for(var i:Int = 1; i < len; i++){  		
    		j = i;
    		vertCacheRecord = vertexCache(i);
    		
    		while((j>0)&&((vertexCache(j-1).nFound/vertexCache(j-1).nChecked)<(vertCacheRecord.nFound/vertCacheRecord.nChecked))){
    			vertexCache(j) = vertexCache(j-1);
    			j--;
    		}
    		
            if(j > 0){
    			vertexCache(j) = vertCacheRecord;
            }else{
            	vertexCache(0) = vertCacheRecord;
            }
    	}
    }
    
    
    /**
     * Adds a new Vertex object to the PlainGraph.
     * 
     * @param the Vertex that needs to be added to the PlainGraph
     */
    public def addVertex(var id:Object):Int {
    	var e:String = id as String;
    	
    	if((e == null)||(e.equals(""))||(e.equals("0"))){
    		return -1;
    	}
    	
    	val vertex:Long = Long.parse(e);
    	
    	// if(isInVertexCache(vertex)){
    	// 	return -1;
    	// }   	
    	    	
    	val internal_vertex:Int;
    	  
    	if(sizeCategory == GraphSizeCategory.SMALL){
    		internal_vertex = vertex as Int; //In this case it is safe to cast the vertex to Int because it is in the scale of small Graph
    		
	    		if(here.id == 0)
	    		{
	    			val r:Region = adjacencyListAtoB.dist.get(here);
	    			val pt:Point = Point.make(1, internal_vertex);
	    			
	    			var flag:Boolean = false;
	    			
	    			for(item in r){				
	    				if((item(0) == pt(0)) && (item(1) == pt(1))){
	    					flag = true;
	    					break;
	    				}
	    			}	
	    			
	    			if(flag){
		    			if(adjacencyListAtoB(pt).id != -1l){
		    				return -1;
		    			}
		    			
		    			var rec:PlainGraphRecord = null;
		    			rec = new PlainGraphRecord();
		    			rec.id = vertex;
		    			rec.edges = new ArrayList[Long]();
		    			adjacencyListAtoB(pt) = rec;
	    			}else{
	    				Console.OUT.println("vertex : " + vertex + " not added");
	    			}
	    		}	
    		}else if(sizeCategory == GraphSizeCategory.MEDIUM){
    			if(vertex > (totalVertices)){
    				var message:String = "The vertex is not supported by the graph.";
    				message = message + " Current graph size is : " + sizeCategory;
    				throw new UnsupportedOperationException(message);
    			}else{
    				val machine:Int = ScaleGraphMath.round(vertex/v) as Int;
    				internal_vertex = (vertex % v) as Int;
 
    				val p:Place = Place.places()(machine);
    				
    					if((machine != 0)||((machine==0)&&(here.id != 0))){    						
    	
    							at(p){    
	    						val r:Region = adjacencyListAtoB.dist.get(p);
	    						val r2:Region = adjacencyListBtoA.dist.get(p);
	    						
	    						val pt:Point = Point.make(machine + 1, internal_vertex);
	    						
	    						if(r.size()==0){
	    							throw new UnsupportedOperationException("region does not have any data points");
	    						}
    						
    							var rec:PlainGraphRecord = null;
    							
    							if(r.contains(pt)){
    								if(adjacencyListAtoB(pt).id == -1l){
	    								rec = new PlainGraphRecord();
	    								rec.id = vertex;
	    								rec.edges = new ArrayList[Long]();
	    								adjacencyListAtoB(pt) = rec;
	    								
	    								if(lrv(p.id)()() < vertex){
	    									lrv(p.id)()() = vertex;
	    								}
    								}
    							}else{
    								Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
    							}
    							
    							if(r2.contains(pt)){
    								if(adjacencyListBtoA(pt).id == -1l){
	    								rec = new PlainGraphRecord();
	    								rec.id = vertex;
	    								rec.edges = new ArrayList[Long]();
	    								adjacencyListBtoA(pt) = rec;
	
	    								if(lrv(p.id)()() < vertex){
	    									lrv(p.id)()() = vertex;
	    								}
    								}
    							}else{
    								Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
    							}
    							
							};
    						
						}else {			
	 						try{
	 							val r:Region = adjacencyListAtoB.dist.get(p);
	 							val r2:Region = adjacencyListBtoA.dist.get(p);
	 							
	 							//val pt:Point = Point.make(machine + 1, internal_vertex + 1);
	 							val pt:Point = Point.make(machine + 1, internal_vertex);
	 							
	 							if(r.size()==0){
	 								throw new UnsupportedOperationException("region A->B does not have any data points");
	 							}

	 							if(r2.size()==0){
	 								throw new UnsupportedOperationException("region B->A does not have any data points");
	 							}
	 							
	 							var flag:Boolean = false;
	 							var rec:PlainGraphRecord = null;			
	 							
	 							if(adjacencyListAtoB(pt)!= null){
	 								flag = true;
	 							}
	 							 							
	 							if(flag){
	 								if(adjacencyListAtoB(pt).id == -1l){ 
	 								rec = new PlainGraphRecord();
	 								rec.id = vertex;
	 								rec.edges = new ArrayList[Long]();
	 									 								
	 								adjacencyListAtoB(pt) = rec;
	 								
	 								if(lrv(here.id)()() < vertex){
	 									lrv(here.id)()() = vertex;
	 								}
	 								}
	 							}else{
	 								Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
	 							}
	 							
	 							flag = false;
	 							
	 							if(adjacencyListBtoA(pt)!= null){
	 								flag = true;
	 							}
	 							
	 							if(flag){
	 								if(adjacencyListBtoA(pt).id == -1l){ 								
	 								rec = new PlainGraphRecord();
	 								rec.id = vertex;
	 								rec.edges = new ArrayList[Long]();
	 								
	 								adjacencyListBtoA(pt) = rec;
	 								
	 								if(lrv(here.id)()() < vertex){
	 									lrv(here.id)()() = vertex;
	 								}
	 								}
	 							}else{
	 								Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
	 							}
	 							
	 							
	 						}catch(ec:Exception){
	 							Console.OUT.println("Got the error : " + ec.getMessage());
	 							Console.OUT.println("Vertex is : |" + e + "|");
	 							Console.OUT.println("Here is : " + here.id + " machine is : " + machine);
	 						}
						}
					}
    			}
    	
    	return 0;
    }
   
    
    public def addVertexWithOutEdge(var id:Object, var edgeV:Object):Int {
    	var e:String = id as String;
    	
    	if((e == null)||(e.equals(""))||(e.equals("0"))){
    		return -1;
    	}
    	
    	val vertex:Long = Long.parse(e);
    	
    	// if(isInVertexCache(vertex)){
    	// 	return -1;
    	// }  
    	
    	var v2:String = edgeV as String;
    	
    	if((v2 == null)||(v2.equals(""))||(v2.equals("0"))){
    		return -1;
    	}
    	
    	val vertex2:Long = Long.parse(v2);    	
    	
    	val internal_vertex:Int;
    	val internal_vertex2:Int;
    	
    	if(sizeCategory == GraphSizeCategory.SMALL){
    		internal_vertex = vertex as Int; //In this case it is safe to cast the vertex to Int because it is in the scale of small Graph
    		
    		if(here.id == 0)
    		{
    			val r:Region = adjacencyListAtoB.dist.get(here);
    			val r2:Region = adjacencyListBtoA.dist.get(here);
    			
    			val pt:Point = Point.make(1, internal_vertex);
    			
    			var flag:Boolean = false;
    			
    			for(item in r){				
    				if((item(0) == pt(0)) && (item(1) == pt(1))){
    					flag = true;
    					break;
    				}
    			}	
    			
    			var rec:PlainGraphRecord = null;
    			
    			if(flag){
    				if(adjacencyListAtoB(pt).id != -1l){
    					atomic adjacencyListAtoB(pt).edges.add(vertex2);
    					return -1;
    				}    				    				
    				
    				rec = new PlainGraphRecord();
    				rec.id = vertex;
    				rec.edges = new ArrayList[Long]();
    				rec.edges.add(vertex2);
    				adjacencyListAtoB(pt) = rec;
    				
    				
    			}else{
    				Console.OUT.println("vertex : " + vertex + " not added");
    			}
    			
    			flag = false;    			
    			
    			for(item in r2){				
    				if((item(0) == pt(0)) && (item(1) == pt(1))){
    					flag = true;
    					break;
    				}
    			}
    			
    			if(flag){
    				if(adjacencyListBtoA(pt).id != -1l){
    					return -1;
    				}
    				
    				rec = new PlainGraphRecord();
    				rec.id = vertex;
    				rec.edges = new ArrayList[Long]();

    				adjacencyListBtoA(pt) = rec;
    			}else{
    				Console.OUT.println("vertex : " + vertex + " not added");
    			}
    		}	
    	}else if(sizeCategory == GraphSizeCategory.MEDIUM){
    		if(vertex > (totalVertices)){
    			var message:String = "The vertex is not supported by the graph.";
    			message = message + " Current graph size is : " + sizeCategory;
    			throw new UnsupportedOperationException(message);
    		}else{
    			val machine:Int = ScaleGraphMath.round(vertex/v) as Int;
    			internal_vertex = (vertex % v) as Int;
 
    			val p:Place = Place.places()(machine);
    			
    			if((machine != 0)||((machine==0)&&(here.id != 0))){    						
 	
    				at(p){    
   					
    					val r:Region = adjacencyListAtoB.dist.get(p);
    					val pt:Point = Point.make(machine + 1, internal_vertex);
    					
    					if(r.size()==0){
    						throw new UnsupportedOperationException("region does not have any data points");
    					}
    					
    					var rec:PlainGraphRecord = null;
    					
    					if(r.contains(pt)){
    						if(adjacencyListAtoB(pt).id == -1l){

    						rec = new PlainGraphRecord();
    						rec.id = vertex;
    						rec.edges = new ArrayList[Long]();
    						
    						rec.edges.add(vertex2);//Add the edge at the same time
    						
    						adjacencyListAtoB(pt) = rec;

    						if(lrv(p.id)()() < vertex){
    							lrv(p.id)()() = vertex;
    						}
    						}
    						else{
    							atomic{
    							adjacencyListAtoB(pt).edges.add(vertex2);
    							}
    						}
    					}else{
    						Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
    						//retval = -1;
    					}
    					    					
    				};
    				
    			} else {			
    				try{
    					val r:Region = adjacencyListAtoB.dist.get(p);
    					val pt:Point = Point.make(machine + 1, internal_vertex);
    					
    					if(r.size()==0){
    						throw new UnsupportedOperationException("region does not have any data points");
    					}

    					var flag:Boolean = false;
    					var rec:PlainGraphRecord = null;			
    					
    					/*---------- Important Optimization ---*/
    					if(adjacencyListAtoB(pt)!= null){
    						flag = true;
    					}
    					/*---------- Important Optimization ---*/
    					
    					if(flag){

    						
    						if(adjacencyListAtoB(pt).id == -1l){
    							rec = new PlainGraphRecord();
    							rec.id = vertex;
    							rec.edges = new ArrayList[Long]();
    							
    							rec.edges.add(vertex2);//Add the edge at the same time
    							
    							adjacencyListAtoB(pt) = rec;
    							
    							if(lrv(p.id)()() < vertex){
    								lrv(p.id)()() = vertex;
    							}
    						}
    						else{
    							atomic adjacencyListAtoB(pt).edges.add(vertex2);
    						}
    						
    					}else{
    						Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
    					}    					
    					
    				}catch(ec:Exception){
    					Console.OUT.println("Got the error : " + ec.getMessage());
    					Console.OUT.println("Vertex is : |" + e + "|");
    					Console.OUT.println("Here is : " + here.id + " machine is : " + machine);
    				}
    			}
    		
    		val machine2:Int = ScaleGraphMath.round(vertex2/v) as Int;
    		   		
    		internal_vertex2 = (vertex2 % v) as Int;
 
    		val p2:Place = Place.places()(machine2);    		
    		
    		if((machine2 != 0)||((machine2==0)&&(here.id != 0))){    						
    			
    			at(p2){    
    				
    				val r:Region = adjacencyListAtoB.dist.get(p2);
    				val pt:Point = Point.make(machine2 + 1, internal_vertex2);
    				
    				if(r.size()==0){
    					throw new UnsupportedOperationException("region does not have any data points");
    				}
    				
    				var rec:PlainGraphRecord = null;
    				
    				if(r.contains(pt)){
    					if(adjacencyListAtoB(pt).id == -1l){

    						rec = new PlainGraphRecord();
    						rec.id = vertex2;
    						rec.edges = new ArrayList[Long]();
    						    						
    						adjacencyListAtoB(pt) = rec;

    						if(lrv(p.id)()() < vertex2){
    							lrv(p.id)()() = vertex2;
    						}
    					}
    				}else{
    					Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
    				}
    				
    			};

    			
    		} else {			
    			try{
    				val r:Region = adjacencyListAtoB.dist.get(p);
    				val pt:Point = Point.make(machine2 + 1, internal_vertex2);
    				
    				if(r.size()==0){
    					throw new UnsupportedOperationException("region does not have any data points");
    				}

    				var flag:Boolean = false;
    				var rec:PlainGraphRecord = null;			
    				
    				/*---------- Important Optimization ---*/
    				if(adjacencyListAtoB(pt)!= null){
    					flag = true;
    				}
    				/*---------- Important Optimization ---*/
    				
    				if(flag){

    					
    					if(adjacencyListAtoB(pt).id == -1l){
    						rec = new PlainGraphRecord();
    						rec.id = vertex2;
    						rec.edges = new ArrayList[Long]();
 						
    						adjacencyListAtoB(pt) = rec;
    						
    						if(lrv(p.id)()() < vertex2){
    							lrv(p.id)()() = vertex2;
    						}
    					}
    				}else{
    					Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
    				}    					
    				
    			}catch(ec:Exception){
    				Console.OUT.println("Got the error : " + ec.getMessage());
    				Console.OUT.println("Vertex is : |" + e + "|");
    				Console.OUT.println("Here is : " + here.id + " machine is : " + machine2);
    			}
    		}
    	
    		
    		}
    		
    	}
    	
    	return 0;
    }
    
    public def addVertexWithInEdge(var id:Object, var edgeV:Object):Int {
    	var e:String = id as String;
    	
    	if((e == null)||(e.equals(""))||(e.equals("0"))){
    		return -1;
    	}
    	
    	val vertex:Long = Long.parse(e);
    	
    	// if(isInVertexCache(vertex)){
    	// 	return -1;
    	// }  
    	
    	var v2:String = edgeV as String;
    	
    	if((v2 == null)||(v2.equals(""))||(v2.equals("0"))){
    		return -1;
    	}
    	
    	val vertex2:Long = Long.parse(v2);    	
    	
    	val internal_vertex:Int;
    	val internal_vertex2:Int;
    	
    	if(sizeCategory == GraphSizeCategory.SMALL){
    		internal_vertex = vertex as Int; //In this case it is safe to cast the vertex to Int because it is in the scale of small Graph
    		
    		if(here.id == 0)
    		{
    			val r:Region = adjacencyListAtoB.dist.get(here);
    			val r2:Region = adjacencyListBtoA.dist.get(here);
    			
    			val pt:Point = Point.make(1, internal_vertex);
    			
    			var flag:Boolean = false;
    			
    			for(item in r){				
    				if((item(0) == pt(0)) && (item(1) == pt(1))){
    					flag = true;
    					break;
    				}
    			}	
    			
    			var rec:PlainGraphRecord = null;
    			
    			if(flag){
    				if(adjacencyListAtoB(pt).id != -1l){
    					atomic adjacencyListAtoB(pt).edges.add(vertex2);
    					return -1;
    				}    				    				
    				
    				rec = new PlainGraphRecord();
    				rec.id = vertex;
    				rec.edges = new ArrayList[Long]();
    				rec.edges.add(vertex2);
    				adjacencyListAtoB(pt) = rec;
    				
    				
    			}else{
    				Console.OUT.println("vertex : " + vertex + " not added");
    			}
    			
    			flag = false;    			
    			
    			for(item in r2){				
    				if((item(0) == pt(0)) && (item(1) == pt(1))){
    					flag = true;
    					break;
    				}
    			}
    			
    			if(flag){
    				if(adjacencyListBtoA(pt).id != -1l){
    					return -1;
    				}
    				
    				rec = new PlainGraphRecord();
    				rec.id = vertex;
    				rec.edges = new ArrayList[Long]();
    				adjacencyListBtoA(pt) = rec;
    			}else{
    				Console.OUT.println("vertex : " + vertex + " not added");
    			}
    		}	
    	}else if(sizeCategory == GraphSizeCategory.MEDIUM){
    		if(vertex > (totalVertices)){
    			var message:String = "The vertex is not supported by the graph.";
    			message = message + " Current graph size is : " + sizeCategory;
    			throw new UnsupportedOperationException(message);
    		}else{
    			val machine:Int = ScaleGraphMath.round(vertex/v) as Int;
    			val machine2:Int = ScaleGraphMath.round(vertex2/v) as Int;

    			
    			internal_vertex = (vertex % v) as Int;
    			internal_vertex2 = (vertex2 % v) as Int;
    			 
    			val p:Place = Place.places()(machine);
    			val p2:Place = Place.places()(machine2);
    			
    			if((machine != 0)||((machine==0)&&(here.id != 0))){  	
    				at(p){      					
    					val r:Region = adjacencyListBtoA.dist.get(p);
    					val pt:Point = Point.make(machine + 1, internal_vertex);
   					
    					if(r.size()==0){
    						throw new UnsupportedOperationException("region does not have any data points");
    					}
    					
    					var rec:PlainGraphRecord = null;
    					
    					if(r.contains(pt)){
    						if(adjacencyListBtoA(pt).id == -1l){

    							rec = new PlainGraphRecord();
    							rec.id = vertex;
    							rec.edges = new ArrayList[Long]();
    							
    							rec.edges.add(vertex2);//Add the edge at the same time
    							
    							adjacencyListBtoA(pt) = rec;
    							
    							if(lrv(p.id)()() < vertex){
    								lrv(p.id)()() = vertex;
    							}
    						}
    						else{
    							atomic{
    								adjacencyListBtoA(pt).edges.add(vertex2);
    							}
    						}
    					}else{
    						Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
    					}
    					
    				};
    				
    			} else {			
    				try{
    					val r:Region = adjacencyListBtoA.dist.get(p);
    					val pt:Point = Point.make(machine + 1, internal_vertex);
    					
    					if(r.size()==0){
    						throw new UnsupportedOperationException("region does not have any data points");
    					}

    					var flag:Boolean = false;
    					var rec:PlainGraphRecord = null;			
    					
    					/*---------- Important Optimization ---*/
    					if(adjacencyListBtoA(pt)!= null){
    						flag = true;
    					}
    					/*---------- Important Optimization ---*/
    					
    					if(flag){
    						
    						if(adjacencyListBtoA(pt).id == -1l){
    							rec = new PlainGraphRecord();
    							rec.id = vertex;
    							rec.edges = new ArrayList[Long]();
    							
    							rec.edges.add(vertex2);//Add the edge at the same time
    							
    							adjacencyListBtoA(pt) = rec;
    							
    							if(lrv(p.id)()() < vertex){
    								lrv(p.id)()() = vertex;
    							}
    						}
    						else{
    							atomic adjacencyListBtoA(pt).edges.add(vertex2);
    						}
    						
    					}else{
    						Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
    					}    					
    					
    				}catch(ec:Exception){
    					Console.OUT.println("Got the error : " + ec.getMessage());
    					Console.OUT.println("Vertex is : |" + e + "|");
    					Console.OUT.println("Here is : " + here.id + " machine is : " + machine);
    				}
    			}
    			
    			
    			
    			if((machine2 != 0)||((machine2==0)&&(here.id != 0))){  	
    				at(p2){    
    					
    					val r:Region = adjacencyListBtoA.dist.get(p2);
    					val pt:Point = Point.make(machine + 1, internal_vertex);
    					
    					if(r.size()==0){
    						throw new UnsupportedOperationException("region does not have any data points");
    					}
    					
    					var rec:PlainGraphRecord = null;
    					
    					if(r.contains(pt)){
    						if(adjacencyListBtoA(pt).id == -1l){

    							rec = new PlainGraphRecord();
    							rec.id = vertex2;
    							rec.edges = new ArrayList[Long]();
    							
    							adjacencyListBtoA(pt) = rec;
    							
    							if(lrv(p.id)()() < vertex2){
    								lrv(p.id)()() = vertex2;
    							}
    						}
    					}else{
    						Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
    					}
    				};
    				
    			} else {			
    				try{
    					val r:Region = adjacencyListBtoA.dist.get(p2);
    					val pt:Point = Point.make(machine2 + 1, internal_vertex2);
    					
    					if(r.size()==0){
    						throw new UnsupportedOperationException("region does not have any data points");
    					}

    					var flag:Boolean = false;
    					var rec:PlainGraphRecord = null;			
    					
    					/*---------- Important Optimization ---*/
    					if(adjacencyListBtoA(pt)!= null){
    						flag = true;
    					}
    					/*---------- Important Optimization ---*/
    					
    					if(flag){
    						
    						if(adjacencyListBtoA(pt).id == -1l){
    							rec = new PlainGraphRecord();
    							rec.id = vertex2;
    							rec.edges = new ArrayList[Long]();
    							    							
    							adjacencyListBtoA(pt) = rec;
    							
    							if(lrv(p.id)()() < vertex2){
    								lrv(p.id)()() = vertex2;
    							}
    						}
    						
    					}else{
    						Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
    					}    					
    					
    				}catch(ec:Exception){
    					Console.OUT.println("Got the error : " + ec.getMessage());
    					Console.OUT.println("Vertex is : |" + e + "|");
    					Console.OUT.println("Here is : " + here.id + " machine is : " + machine);
    				}
    			}
    			
    		}
    	}
    	
    	return 0;
    }
    

    /**
     * Returns the intersection of this graph with that Graph
     * 
     * @param the PlainGraph that needs to be intersected.
     * @return a PlainGraph that corresponds to the intersection.
     */
    public def intersect(var that:org.scalegraph.graph.Graph):org.scalegraph.graph.PlainGraph {
    	throw new UnsupportedOperationException("Not implemented.");
    }
    
    
    public def addEdges(val edlst:Array[String]):void{
    	var s:Int = edlst.size;    	
    	var nThreads:Int = 4;
    	var offset:Int = s/nThreads;
    	var i:Int = 0;

    	for(var j:Int = 0; j < s; j++){
    		if(edlst(j) != null){
    			
    			//addEdge(edlst(j));
  			
    			val e:String = edlst(j);
    			
    			var strArr:Array[String] = e.split(edgeSplitSymbol);

    			if(strArr.size != 2){
    				if(edgeSplitSymbol.equals(" ")){
    					edgeSplitSymbol = "\t";
    					strArr = e.split(edgeSplitSymbol);
    				}else{
    					edgeSplitSymbol = " ";
    					strArr = e.split(edgeSplitSymbol);
    				}
    			}
    			
    			if(strArr.size == 2){
    				
    				//Just try adding the Vertices to make sure that they are properly added befoe creating the Edge
    				//Try adding the vertices. They might exist in the graph, but don't worry.

    				addVertexWithOutEdge(strArr(0),strArr(1));
    				addVertexWithInEdge(strArr(1),strArr(0));
    			}
    		}
    	}    	
    }
    
    /**
     * Adds a new Edge to a PlainGraph.
     * 
     * @param the id of the Edge to be added to the Graph
     */
    public def addEdge(var id:Object):Int {
    	 val e:String = id as String;
    	 
    	 var strArr:Array[String] = e.split(edgeSplitSymbol);

    	 if(strArr.size != 2){
    		 if(edgeSplitSymbol.equals(" ")){
    		 	edgeSplitSymbol = "\t";
    		 	strArr = e.split(edgeSplitSymbol);
    		 }else{
    			 edgeSplitSymbol = " ";
    			 strArr = e.split(edgeSplitSymbol);
    		 }
    	 }
    	 
    	 if(strArr.size != 2){
    		 return -1;
    	 }
 
    	 //Just try adding the Vertices to make sure that they are properly added befoe creating the Edge
    	 //Try adding the vertices. They might exist in the graph, but don't worry.
    	 addVertex(strArr(0));
    	 addVertex(strArr(1));
    	 
    	 var fromT:Long = 0l;
    	 var toT:Long = 0l;
    	 
    	 try{
    	 	fromT = Long.parse(strArr(0));
    	 	toT = Long.parse(strArr(1));
    	 }catch(exe:NumberFormatException){
    		 Console.OUT.println("Error adding the edge : " + e);
    		 
    		 return -1;
    	 }
    	 
    	 val from:Long = fromT;
    	 val to:Long = toT;
    	 
    	 
    	 var vertex:Long = from > to ? from:to;

    	 if(sizeCategory == GraphSizeCategory.SMALL){
    		 if(vertex > (Math.pow(2, sizeCategory) * adjacencyListAtoB.dist.places().size())){
    			 var message:String = "The vertices of the edge does not exist in the graph size.";
    			 message = message + " Current graph size is : " + sizeCategory;
    			 message = message + " the edge was : " + e;
    			 throw new UnsupportedOperationException(message);
    		 }
    		 
    		 var v:Long = ScaleGraphMath.pow(2,sizeCategory);
    		 val machine:Int = ScaleGraphMath.round(from/v) as Int;
    		 val internal_vertex:Int = (from % v) as Int;
    		 
    		 val r:Region = adjacencyListAtoB.dist.get(here);
    		 val pt:Point = Point.make(machine + 1, internal_vertex);

    		 if(r.size()==0){
    			 throw new UnsupportedOperationException("region does not have any data points");
    		 }
    		 
    		 var flag:Boolean = false;
    		 var rec:PlainGraphRecord = null;
    		 
    		 if(r.contains(pt)){
    			 atomic{
    			 	 if(!adjacencyListAtoB(pt).edges.contains(to)){
    					 adjacencyListAtoB(pt).edges.add(to);
    				 }
    			 }
    		 } else{
    			 throw new UnsupportedOperationException("from vertex does not exist");
    		 }
    		 
    		 
    		 
    	 }else if(sizeCategory == GraphSizeCategory.MEDIUM){
    		 if(vertex > (totalVertices)){
    			 var message:String = "The vertices of the edge does not exist in the graph size.";
    			 message = message + " Current graph size is : 2^" + sizeCategory + " * " + adjacencyListAtoB.dist.places().size();
    			 message = message + " Total Vertex : " + totalVertices;
    			 message = message + " the edge was : " + e;
    			 throw new UnsupportedOperationException(message);
    		 } 
    		 
    		 val machine:Int = ScaleGraphMath.round(from/v) as Int;
    		 val internal_vertex:Int = (from % v) as Int;
    		    		 
    		 val p:Place = Place.places()(machine);
    		 
    		 if((machine != 0)||((machine==0)&&(here.id != 0))){
    				 at(p){  
    					 try{
    					 val r:Region = adjacencyListAtoB.dist.get(p);
    					 val pt:Point = Point.make(machine + 1, internal_vertex);

    					 if(r.size()==0){
    						 throw new UnsupportedOperationException("region does not have any data points");
    					 }
    					 
    					 var flag:Boolean = false;
    					 var rec:PlainGraphRecord = null;
    					 
    					 if(r.contains(pt)){
    						 atomic{
    							 if((adjacencyListAtoB(pt).edges != null)&&(!adjacencyListAtoB(pt).edges.contains(to))){
    								 adjacencyListAtoB(pt).edges.add(to);
    							 }
    						 }
    					 } else{
    						 var message:String = "from vertex does not exist : ";
    						 message += "pt(0) : " + pt(0) + " pt(1) : " + pt(1);
    						 message += "from : " + from + " to : " + to;
    						 throw new UnsupportedOperationException(message);
    					 }
    					 }catch(ec:Exception){
    						 Console.OUT.println("DEF : " + ec.getMessage());
    						 Console.OUT.println("Here is : " + here.id + " machine is : " + machine);
    					 }
    				 }    				 
    			 }else{
    				 try{
    				 val r:Region = adjacencyListAtoB.dist.get(p);
    				 val pt:Point = Point.make(machine + 1, internal_vertex);

    				 if(r == null){
    					 return -1;
    				 }
    				 
    				 if(r.size()==0){
    					 throw new UnsupportedOperationException("region does not have any data points");
    				 }
    				 
    				 var flag:Boolean = false;
    				 var rec:PlainGraphRecord = null;
    				 
    				 if(r.contains(pt)){
    					 atomic{
    					 	if((adjacencyListAtoB(pt).edges != null)&&(!adjacencyListAtoB(pt).edges.contains(to))){
    							 adjacencyListAtoB(pt).edges.add(to);
    						 }
    					 }
    				 } else{
    					 var message:String = "from vertex does not exist : ";
    					 message += "pt(0) : " + pt(0) + " pt(1) : " + pt(1);
    					 message += "from : " + from + " to : " + to;
    					 throw new UnsupportedOperationException(message);
    				 }   
    				 }catch(ec:Exception){
    					 Console.OUT.println("ABC : " + ec.getMessage());
    					 Console.OUT.println("Here is : " + here.id + " machine is : " + machine);
    				 }
    			 }   		 
    		 
    		 val machine2:Int = ScaleGraphMath.round(to/v) as Int;
    		 val internal_vertex2:Int = (to % v) as Int;
    		 
    		 val p2 = Place.places()(machine2);
    		 
    		 if((machine2 != 0)||((machine2==0)&&(here.id != 0))){
    			 at(p2){    					 
    				 val r:Region = adjacencyListBtoA.dist.get(p2);
    				 val pt:Point = Point.make(machine2 + 1, internal_vertex2);

    				 if(r.size()==0){
    					 throw new UnsupportedOperationException("region does not have any data points");
    				 }
    				 
    				 var flag:Boolean = false;
    				 var rec:PlainGraphRecord = null;
    				 
    				 if(r.contains(pt)){
    					 atomic{
    						 if((adjacencyListBtoA(pt).edges != null)&&(!adjacencyListBtoA(pt).edges.contains(from))){
    							 adjacencyListBtoA(pt).edges.add(from);
    							 Console.OUT.println("Adding B - > A " + to + " " + from);
    						 }
    					 }
    				 } else{
    					 var message:String = "from vertex does not exist : ";
    					 message += "pt(0) : " + pt(0) + " pt(1) : " + pt(1);
    					 message += "from : " + from + " to : " + to;
    					 throw new UnsupportedOperationException(message);
    				 }
    			 }
    		 }else {
    			 val r:Region = adjacencyListBtoA.dist.get(p2);
    			 val pt:Point = Point.make(machine2 + 1, internal_vertex2);

    			 if(r == null){
    				 return -1;
    			 }

    			 if(r.size()==0){
    				 throw new UnsupportedOperationException("region does not have any data points");
    			 }

    			 var flag:Boolean = false;
    			 var rec:PlainGraphRecord = null;
    			 
    			 if(r.contains(pt)){
    				 atomic{
    					 if((adjacencyListBtoA(pt).edges != null)&&(!adjacencyListBtoA(pt).edges.contains(from))){
    						 adjacencyListBtoA(pt).edges.add(from);
    					 }
    				 }
    			 } else{
    				 var message:String = "from vertex does not exist : ";
    				 message += "pt(0) : " + pt(0) + " pt(1) : " + pt(1);
    				 message += "from : " + from + " to : " + to;
    				 throw new UnsupportedOperationException(message);
    			 }    			 
    		 }
    			 }  

    	 return 0;
    }

    /**
     * Get the Union of two Plain Graphs
     * 
     * @return a PlainGraph representing the union of this Graph with that
     */
    public def union(var that:org.scalegraph.graph.Graph):org.scalegraph.graph.PlainGraph {
    	throw new UnsupportedOperationException("Not implemented.");
    }
    
    /**
     * Test method
     * This method prints the contents of the Graph.
     */
    public def printCont(){   	
    	val rlv = getMaximumVertexID();
    	
    	Console.OUT.println("Printing A -> B");
    	finish for(p in adjacencyListAtoB.dist.places()){
    		async at(p){
    			var l:Array[PlainGraphRecord] = adjacencyListAtoB.getLocalPortion();
    			val r:Region = l.region;
    			var len:Int = r.size();
    			
    			for(point:Point in r){		
    				 if(point(1) > rlv){
    				 	break;
    				 }
    				
    				if (l(point).id != -1l){
    					var lst:ArrayList[Long] = (l(point).edges as ArrayList[Long]);
    					
    					Console.OUT.print("" + l(point).id + "->");
    					if(lst.size() != 0){
    						for (item in lst){
    							Console.OUT.print(item + ",");
    						}
    						Console.OUT.println();
    					}
    					Console.OUT.println();
    				}
    			}
    		}
    	}
    	
    	Console.OUT.println("Printing B -> A");
    	
    	finish for(p in adjacencyListBtoA.dist.places()){
    		async at(p){
    			var l:Array[PlainGraphRecord] = adjacencyListBtoA.getLocalPortion();
    			val r:Region = l.region;
    			var len:Int = r.size();
    			
    			Console.OUT.println("b->a len : " + len);
    			
    			for(point:Point in r){		
    				
    				//This is an optimization
    				 if(point(1) > rlv){
    				 	break;
    				 }
    				
    				if (l(point).id != -1l){
    					var lst:ArrayList[Long] = (l(point).edges as ArrayList[Long]);
    					
    					Console.OUT.print("" + l(point).id + "->");
    					if(lst.size() != 0){
    						for (item in lst){
    							Console.OUT.print(item + ",");
    						}
    						Console.OUT.println();
    					}
    					Console.OUT.println();
    				}
    			}
    		}
    	}
    	
    	
    	Console.OUT.println("Done..");
    }
    
    public def getEdgesAsString(var p:Place):String{
    	val res = GlobalRef[Cell[StringBuilder]](new Cell[StringBuilder](null));
    	
    	finish{
	   		async at(p){
	    			var l:Array[PlainGraphRecord] = adjacencyListAtoB.getLocalPortion();
	    			val r:Region = l.region;
	    			var len:Int = r.size();
	    			var locRes:StringBuilder = new StringBuilder();
	    			
	    			if(len != 0){
			    			for(point:Point in r){	
			    				
			    				if(point(1) > largestReportedVertex){
			    					break;
			    				}
			    				
			    				if (l(point).id != -1l){
			    					var lst:ArrayList[Long] = (l(point).edges as ArrayList[Long]);
			    					if(lst.size() != 0){
			    						for (item in lst){
			    							locRes.add("" + l(point).id + " " + item + "\r\n");	
			    						}
			    					}
			    				}
			    			
			    			 	res()() = locRes;
			    		}
	    			}
	    }
    	}
    	    	
    	return res()() == null ? null:res()().toString();
    }

    public def getGraphSizeCategory():Short{
    	return sizeCategory;
    }
    
    public def getInNeighbours(val vertexID:Long):Array[Long]{
    	val result2:Array[Array[Long]]=new Array[Array[Long]](1);
    	
    	var v:Long = ScaleGraphMath.pow(2,sizeCategory);
    	val machine:Int = ScaleGraphMath.round(vertexID/v) as Int; 	
    	
    	val internal_vertex:Int = (vertexID % v) as Int;
    	val p2:Place = Place.places()(machine);
    	val pt:Point = Point.make(machine + 1, internal_vertex);
    	
    	var resultTotal:Array[Long] = null; 
    	
    	resultTotal = at(p2){
					var l:Array[PlainGraphRecord] = adjacencyListBtoA.getLocalPortion();
					val r:Region = l.region;
					var len:Int = r.size();

					if((l(pt) != null)&&(l(pt).id != -1l)){
						if(l(pt).edges != null){
							var lst:ArrayList[Long] = (l(pt).edges as ArrayList[Long]);
							if(lst.size() != 0){
								var resultFin:Array[Long] = new Array[Long](lst.size());
								
								var counter:Int = 0;
								for (item in lst){
									resultFin(counter) = item;
									counter++;	
								}
								
								return resultFin;
							}
						}
					}
					
					return null;
    			};
    			
    	return resultTotal;
    }
    
    public def getOutNeighbours(val vertexID:Long):Array[Long]{
    	val result2:Array[Array[Long]]=new Array[Array[Long]](1);
    	
    	var v:Long = ScaleGraphMath.pow(2,sizeCategory);
    	val machine:Int = ScaleGraphMath.round(vertexID/v) as Int; 	
    	
    	val internal_vertex:Int = (vertexID % v) as Int;
    	val p2:Place = Place.places()(machine);
    	val pt:Point = Point.make(machine + 1, internal_vertex);
    	
    	var resultTotal:Array[Long] = null; 
    	
    	resultTotal = at(p2){
    		var l:Array[PlainGraphRecord] = adjacencyListAtoB.getLocalPortion();
    		val r:Region = l.region;
    		var len:Int = r.size();

    		if((l(pt) != null)&&(l(pt).id != -1l)){
    			if(l(pt).edges != null){
    				var lst:ArrayList[Long] = (l(pt).edges as ArrayList[Long]);
    				if(lst.size() != 0){
    					var resultFin:Array[Long] = new Array[Long](lst.size());
    					
    					var counter:Int = 0;
    					for (item in lst){
    						resultFin(counter) = item;
    						counter++;	
    					}
    					
    					return resultFin;
    				}
    			}
    		}
    		
    		return null;
    	};
    	
    	return resultTotal;
    }    
    
    /**
     * Returns the list of unique vertices from a graph
     * 
     * @return a DistArray of vertices. The vertices are distributed among places evenly
     * for efficient use of memory
     */
    
    public def getVertexList():DistArray[Long]{
    	var R1:Region = null;
    	var R2:Region = null;
    	var nvl:Int = 0;
    	val doneFill = GlobalRef[Cell[Int]](new Cell[Int](0));
    	
    	if(uniqueVertexList == null){    	
	    	if(actualTotalVertices == 0l){
	    		actualTotalVertices = getVertexCount();
	    	}
	    	    	
	    	if(this.sizeCategory == GraphSizeCategory.SMALL){
	    		vertexIncrementFactor = this.sizeCategory;
	    		nvl = actualTotalVertices as Int; // Here we know that the total number of vertices is an Int
	    		R1 = (1..1)*(1..1);
	    		R2 = (1..1)*(1..nvl);	
	    	}else if((this.sizeCategory == GraphSizeCategory.LARGE) || (this.sizeCategory == GraphSizeCategory.MEDIUM)){
	    		vertexIncrementFactor = GraphSizeCategory.MEDIUM;
	    		nVertices = ScaleGraphMath.pow(2, vertexIncrementFactor as Int) as Int;
	    		totalVertices = Place.MAX_PLACES*nVertices as long;
	    		v = ScaleGraphMath.pow(2,sizeCategory);
	    		
	    		nvl = Math.ceil((actualTotalVertices/(Place.MAX_PLACES)) as Double) as Int; // Again we know that the number of vertices is an Int per place
	    		
	    		//Just add one more to make space in the unique vertices array
	    		nvl += 1;
	    		Console.OUT.println("nv is : " + nvl);
	    		
	    		R1 = (1..Place.MAX_PLACES)*(1..1);
	    		R2 = (1..Place.MAX_PLACES)*(1..nvl);
	    	}
	    	
	    	val nv:Int = nvl;
	    	var b:Dist = Dist.makeBlock(R2);
	    	var b2:Dist = Dist.makeBlock(R1);

	    	uniqueVertexList = DistArray.make[Long](b, -1l);
	    	uniqueVertexCounter = DistArray.make[Int](b2, 0l);
	    	
	    	val refval = GlobalRef[Cell[boolean]](new Cell[boolean](false));	    	
	    	val largestVert = getMaximumVertexID();
	    	
	    	Console.OUT.println("largestVert : " + largestVert);	    	
	    	
	    	for(p:Place in Place.places()){
	    		val rAdjListAtoB:Region = adjacencyListAtoB.dist.get(p);
	    		
	    		at(p){
	    			for(point:Point in rAdjListAtoB){
	    				
	    				//This optimization might be helpful for small network loaded to large graph space
	    				if(point(1) > largestVert){
	    					break;
	    				}
	    				
	    				if (adjacencyListAtoB(point).id != -1l){	
	    						    					
	    					curVertex()() = adjacencyListAtoB(point).id;
	    					
	    					for(p2:Place in Place.places()){
	    						
	    						if(curMachine()()==p2.id){
	    							val myVal = curVertex()();
	    						
	    						at(p2){
	    							val rVertList:Region = uniqueVertexList.dist.get(p2);
	    							val rVertCounter:Region = uniqueVertexCounter.dist.get(p2);
	    							
		    						for(point2:Point in rVertCounter){

		    							if((uniqueVertexCounter(point2) <= nv)){//There is more space there...
		    								uniqueVertexList((p2.id + 1), (uniqueVertexCounter(point2) + 1)) = myVal;
		    								uniqueVertexCounter(point2) += 1;
		    							}else{
	    									at (p) {curMachine()() = p2.id + 1;}
	    									break;
		    							}
		    						}
	    						}
	    						
	    					}
	    					}

	    				}
	    				
	    			}	    			
	    		}
	    	} 
    }

    	
    	Console.OUT.println("Returning the list of unique vertices");
    	
    	return uniqueVertexList;
    }

    public def getMaximumVertexID():Long{
    	val lvalue=at(Place.places()(0))largeV()();
    	
    	if(lvalue==0l){
    		for(p in Place.places()){
    			val tmp = at(p) { lrv(p.id)};
    			
    			if(largestReportedVertex < (at(tmp) tmp()())){
    				largestReportedVertex = at(tmp) tmp()();
    			}
    		}

    		val tmp2 = largestReportedVertex;
    		at(Place.places()(0)){largeV()()=tmp2;} 
    		return at(Place.places()(0))largeV()();
    	}else{
    		return lvalue;
    	}
    }
}

/**
 * This class supports the vertex caching mechanism.
 */
class VertexCacheRecord{
	public var id:Long = -1l;
	public var nFound:Long = -1l;
	public var nChecked:Long = -1l;
}