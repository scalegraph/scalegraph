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
	private var isDirected:Boolean;						//Indicates whether the Graph is a directed one or not
	private var adjacencyList:DistArray[PlainGraphRecord]; 
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
	private var uniqueVertexList:DistArray[Long] = null; //List of unique vertices
	private var uniqueVertexCounter:DistArray[Int] = null; //This array of integers keeps track of the unique vertices
	
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
    	adjacencyList = DistArray.make[PlainGraphRecord](b, new PlainGraphRecord());
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
    			Console.OUT.println("nVertices : " + nVertices);
    			Console.OUT.println("totalVertices : " + totalVertices);
    			
    			R2 = (1..Place.MAX_PLACES)*(1..nVertices);
    		}
    		    		
    		var b:Dist = Dist.makeBlock(R2);
    		adjacencyList = DistArray.make[PlainGraphRecord](b, new PlainGraphRecord());
    		
    		Console.OUT.println("Total graph size (vertices) : " + ((nVertices * Place.MAX_PLACES) as long));
    		
    	}else{
    		throw new UnsupportedOperationException("Invalid Graph Size Category was specified : " + sizeCat);    		
    	}
    }
    
    public def init(){
    	finish for(p in adjacencyList.dist.places()){
    		val r:Region = adjacencyList.dist.get(p);
    		
    		async at(p){
    			for(point:Point in r){
    				adjacencyList(point) = new PlainGraphRecord();
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
	    	adjacencyList = DistArray.make[PlainGraphRecord](b, new PlainGraphRecord());
    	}else{
    		throw new UnsupportedOperationException("Invalid Graph Size Category was specified : " + sizeCat);
    	}
    }
    
    
    /**
     * This method returns the Vertex count of the PlainGraph
     */
    public def getVertexCount():Long{
    	val vCount = GlobalRef[Cell[Long]](new Cell[Long](0));
    	vertexIncrementFactor = GraphSizeCategory.MEDIUM;
    	nVertices = ScaleGraphMath.pow(2, vertexIncrementFactor as Int) as Int;
    	var maxMachine:Int = (largestReportedVertex/(nVertices)) as Int;
    	
    	Console.OUT.println("maxMachine : " + maxMachine);
    	Console.OUT.println("largestReportedVertex : " + largestReportedVertex);
    	
    	finish for(p in adjacencyList.dist.places()){
    		if(p.id <= maxMachine){
		    		async at(p){
		    			var l:Array[PlainGraphRecord] = adjacencyList.getLocalPortion();
		    			
		    			if(l != null){
			    			if(l.size > 0){
				    			for(item in l){
				    				
				    				if((item != null) && (item(1) > largestReportedVertex)){
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
     * Adds a new Vertex object to the PlainGraph.
     * 
     * @param the Vertex that needs to be added to the PlainGraph
     */
    public def addVertex(var id:Object):Int {
    	var e:String = id as String;
    	val vertex:Long = Long.parse(e);
    	val internal_vertex:Int;
    	  
    	if(sizeCategory == GraphSizeCategory.SMALL){
    		internal_vertex = vertex as Int; //In this case it is safe to cast the vertex to Int because it is in the scale of small Graph
    		
	    		if(here.id == 0)
	    		{
	    			val r:Region = adjacencyList.dist.get(here);
	    			val pt:Point = Point.make(1, internal_vertex);
	    			
	    			var flag:Boolean = false;
	    			
	    			for(item in r){				
	    				if((item(0) == pt(0)) && (item(1) == pt(1))){
	    					flag = true;
	    					break;
	    				}
	    			}	
	    			
	    			if(flag){
		    			if(adjacencyList(pt).id != -1l){
		    				return -1;
		    			}
		    	
		    			addedCountTemp++;
		    			
		    			var rec:PlainGraphRecord = null;
		    			rec = new PlainGraphRecord();
		    			rec.id = vertex;
		    			rec.edges = new ArrayList[Long]();
		    			adjacencyList(pt) = rec;
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

    				for(p in adjacencyList.dist.places()){
    					if((machine != 0)&&(p.id == machine)){

    						at(p){    							
	    						val r:Region = adjacencyList.dist.get(p);
	    						val pt:Point = Point.make(machine + 1, internal_vertex);
	    						
	    						if(r.size()==0){
	    							throw new UnsupportedOperationException("region does not have any data points");
	    						}
    						
    							var flag:Boolean = false;
    							var rec:PlainGraphRecord = null;
    							
    							if(r.contains(pt)){
    								if(adjacencyList(pt).id != -1l){
    									return; //Just return without adding, the Vertex exists in the Graph
    								}

    								rec = new PlainGraphRecord();
    								rec.id = vertex;
    								rec.edges = new ArrayList[Long]();
    								adjacencyList(pt) = rec;
    							}else{
    								Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
    							}
							}
    						
						}else if((machine == 0) && (p.id == machine))
						{						
							val r:Region = adjacencyList.dist.get(p);
							val pt:Point = Point.make(machine + 1, internal_vertex);
													
							if(r.size()==0){
								throw new UnsupportedOperationException("region does not have any data points");
							}
							
							var flag:Boolean = false;
							var rec:PlainGraphRecord = null;
							
							for(item in r){				
								if((item(0) == pt(0)) && (item(1) == pt(1))){
									flag = true;
									break;
								}
							}							
							
							if(flag){
								if(adjacencyList(pt).id != -1l){
									return -1; //Just return without adding, the Vertex exists in the Graph
								}

								rec = new PlainGraphRecord();
								rec.id = vertex;
								rec.edges = new ArrayList[Long]();
								adjacencyList(pt) = rec;
								
								if(largestReportedVertex < vertex){
									largestReportedVertex = vertex;
								}
								
							}else{
								Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
							}

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
    
    
    public def addEdges(var edlst:Array[String]):void{
    	var s:Int = edlst.size;
    	    	
    	var nThreads:Int = 100;
    	var offset:Int = s/nThreads;
    	var startPos:Int = 0;
    	var endPos:Int = 0;
    	var i:Int = 0;
    	   	
    	for(i = 0; i < s; i = i + offset){
		    startPos = i;
		    endPos = i + offset;

    		for(var j:Int = startPos; j < endPos; j++){
    			if(edlst(j) != null){
    				addEdge(edlst(j));
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
    	 var e:String = id as String;
    	     	 
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
    	 
    	 //Just try adding the Vertices to make sure that they are properly added befoe creating the Edge
    	 //Try adding the vertices. They might exist in the graph, but don't worry.
    	 addVertex(strArr(0));
 		 addVertex(strArr(1));
    	 //Check to see whether the graph supports the Vertex
    	 if(sizeCategory == GraphSizeCategory.SMALL){
    		 if(vertex > (Math.pow(2, sizeCategory) * adjacencyList.dist.places().size())){
    			 var message:String = "The vertices of the edge does not exist in the graph size.";
    			 message = message + " Current graph size is : " + sizeCategory;
    			 message = message + " the edge was : " + e;
    			 throw new UnsupportedOperationException(message);
    		 }
    		 
    		 var v:Long = ScaleGraphMath.pow(2,sizeCategory);
    		 val machine:Int = ScaleGraphMath.round(from/v) as Int;
    		 val internal_vertex:Int = (from % v) as Int;
    		 
    		 val r:Region = adjacencyList.dist.get(here);
    		 val pt:Point = Point.make(machine + 1, internal_vertex);

    		 if(r.size()==0){
    			 throw new UnsupportedOperationException("region does not have any data points");
    		 }
    		 
    		 var flag:Boolean = false;
    		 var rec:PlainGraphRecord = null;
    		 
    		 if(r.contains(pt)){
    			 atomic{
    			 	 if(!adjacencyList(pt).edges.contains(to)){
    					 adjacencyList(pt).edges.add(to);
    				 }
    			 }
    		 } else{
    			 throw new UnsupportedOperationException("from vertex does not exist");
    		 }
    		 
    		 
    		 
    	 }else if(sizeCategory == GraphSizeCategory.MEDIUM){
    		 //if(vertex > (Math.pow(2, sizeCategory) * adjacencyList.dist.places().size())){
    		 if(vertex > (totalVertices)){
    			 var message:String = "The vertices of the edge does not exist in the graph size.";
    			 message = message + " Current graph size is : 2^" + sizeCategory + " * " + adjacencyList.dist.places().size();
    			 message = message + " Total Vertex : " + totalVertices;
    			 message = message + " the edge was : " + e;
    			 throw new UnsupportedOperationException(message);
    		 } 
    		 
    		 //var v:Long = ScaleGraphMath.pow(2,sizeCategory);
    		 val machine:Int = ScaleGraphMath.round(from/v) as Int;
    		 //Console.OUT.println("v : " + v + " machine : " + machine);
    		 val internal_vertex:Int = (from % v) as Int;
    		 
    		 if(machine != 0){
    			 Console.OUT.println("from vertex : " + from + " machine : " + machine);
    		 }
    		 
    		 for(p in adjacencyList.dist.places()){
    			 if((machine != 0) && (p.id == machine)){
    				 at(p){    					 
    					 val r:Region = adjacencyList.dist.get(p);
    					 val pt:Point = Point.make(machine + 1, internal_vertex);

    					 if(r.size()==0){
    						 throw new UnsupportedOperationException("region does not have any data points");
    					 }
    					 
    					 var flag:Boolean = false;
    					 var rec:PlainGraphRecord = null;
    					 
    					 if(r.contains(pt)){
    						 atomic{
    							 if(!adjacencyList(pt).edges.contains(to)){
    								 adjacencyList(pt).edges.add(to);
    							 }
    						 }
    					 } else{
    						 throw new UnsupportedOperationException("from vertex does not exist");
    					 }
    				 }
    			 }else if((machine == 0)&& (p.id == machine)){
    				 val r:Region = adjacencyList.dist.get(p);
    				 val pt:Point = Point.make(machine + 1, internal_vertex);

    				 if(r.size()==0){
    					 throw new UnsupportedOperationException("region does not have any data points");
    				 }
    				 
    				 var flag:Boolean = false;
    				 var rec:PlainGraphRecord = null;
    				 
    				 if(r.contains(pt)){
    					 atomic{
    					 	if(!adjacencyList(pt).edges.contains(to)){
    							 adjacencyList(pt).edges.add(to);
    						 }
    					 }
    				 } else{
    					 throw new UnsupportedOperationException("from vertex does not exist");
    				 }    			 
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
    	
    	finish for(p in adjacencyList.dist.places()){
    		async at(p){
    			var l:Array[PlainGraphRecord] = adjacencyList.getLocalPortion();
    			val r:Region = l.region;
    			var len:Int = r.size();
    			
    			for(point:Point in r){			   				
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
	    			var l:Array[PlainGraphRecord] = adjacencyList.getLocalPortion();
	    			val r:Region = l.region;
	    			var len:Int = r.size();
	    			var locRes:StringBuilder = new StringBuilder();
	    			
	    			if(len != 0){
			    			for(point:Point in r){	
			    				if (l(point).id != -1l){
			    					var lst:ArrayList[Long] = (l(point).edges as ArrayList[Long]);
			    					if(lst.size() != 0){
			    						for (item in lst){
			    							locRes.add("" + l(point).id + " " + item + "\r\n");	
			    						}
			    					}
			    				}
			    			
			    			if(locRes != null){
			    				res()() = locRes;
			    			}
			    		}
	    			}
	    }
    	}
    	    	
    	return res()() == null ? null:res()().toString();
    }

    public def getGraphSizeCategory():Short{
    	return sizeCategory;
    }
    
    public def getNeighbours(val vertexID:Long):Array[Long]{
    	val result = GlobalRef[Cell[Array[Long]]](new Cell[Array[Long]](null));
    	
    	var v:Long = ScaleGraphMath.pow(2,sizeCategory);
    	val machine:Int = ScaleGraphMath.round(vertexID/v) as Int;
    	val internal_vertex:Int = (vertexID % v) as Int;
    	
    	for(p in adjacencyList.dist.places()){
    		if(p.id == machine){
    			at(p){
    				val r:Region = adjacencyList.dist.get(p);
    				val pt:Point = Point.make(machine + 1, internal_vertex);

    				if(r.size()==0){
    					throw new UnsupportedOperationException("region does not have any data points");
    				}
    				
    				var flag:Boolean = false;
    				var rec:PlainGraphRecord = null;
    				
    				if(r.contains(pt)){
    					if((adjacencyList(pt) != null) && (adjacencyList(pt).edges != null) && (adjacencyList(pt).edges.size() > 0)){
    						var locRes:Array[Long] = new Array[Long](adjacencyList(pt).edges.size());
    						var counter:Int = 0;
    						for(item in adjacencyList(pt).edges){
    							locRes(counter) = item;
    						}
    						result()() = locRes;
    					}
    					
    				} else{
    					throw new UnsupportedOperationException("The vertex does not exist");
    				}
    			}
    		}
    	}
    	
    	return result()();
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
    	val curMachine = GlobalRef[Cell[Int]](new Cell[Int](0));
    	val curVertex = GlobalRef[Cell[Long]](new Cell[Long](0));
    	
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

	    	uniqueVertexList = DistArray.make[Long](b, 0l);
	    	uniqueVertexCounter = DistArray.make[Int](b2, 1l);
	    	
	    	val refval = GlobalRef[Cell[boolean]](new Cell[boolean](false));
	    	
	    	for(p:Place in Place.places()){
	    		val rAdjList:Region = adjacencyList.dist.get(p);
	    		
	    		at(p){
	    			for(point:Point in rAdjList){
	    				
	    				//This optimization might be helpful for small network loaded to large graph space
	    				if(point(1) > largestReportedVertex){
	    					break;
	    				}
	    				
	    				if (adjacencyList(point).id != -1l){	
	    					
	    					curVertex()() = adjacencyList(point).id;
	    					
	    					for(p2:Place in Place.places()){
	    						
	    						if(curMachine()()==p2.id){
	    							val myVal = curVertex()();
	    						
	    						at(p2){
	    							val rVertList:Region = uniqueVertexList.dist.get(p2);
	    							val rVertCounter:Region = uniqueVertexCounter.dist.get(p2);
	    							
		    						for(point2:Point in rVertCounter){

		    							if((uniqueVertexCounter(point2) <= nv)){
		    								uniqueVertexList((p2.id + 1), (uniqueVertexCounter(point2))) = myVal;
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
    	
    	return uniqueVertexList;
    }

}