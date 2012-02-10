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
    		}else if((sizeCat == GraphSizeCategory.LARGE) || (sizeCat == GraphSizeCategory.MEDIUM)){
    			vertexIncrementFactor = GraphSizeCategory.MEDIUM;
    			nVertices = ScaleGraphMath.pow(2, vertexIncrementFactor as Int) as Int;
    			
    			Console.OUT.println("nVertices : " + nVertices);
    			
    			R2 = (1..Place.MAX_PLACES)*(1..nVertices);
    		}
    		    		
    		var b:Dist = Dist.makeBlock(R2);
    		adjacencyList = DistArray.make[PlainGraphRecord](b, new PlainGraphRecord());
    		
    		Console.OUT.println("Total graph size (vertices) : " + nVertices * Place.MAX_PLACES);
    		
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
    	
    	finish for(p in adjacencyList.dist.places()){
    		at(p)async{
    			var l:Array[PlainGraphRecord] = adjacencyList.getLocalPortion();
    			
    			for(item in l){
    				vCount()() += l(item(0),item(1)).id > 0 ? 1:0;
    			}
    		}
    	}
    	
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
	    			
	    			if(r.contains(pt)){
	    				if(adjacencyList(pt).id != -1l){
	    					//throw new UnsupportedOperationException("Vertex already exists in the Graph");
	    					return -1;
	    				}
	    				
	    				var rec:PlainGraphRecord = null;
	    				rec = new PlainGraphRecord();
	    				rec.id = vertex;
	    				rec.edges = new ArrayList[Long]();
	    				adjacencyList(pt) = rec;   				
	    			}
	    			
	    		}	
    		}else if(sizeCategory == GraphSizeCategory.MEDIUM){
    			if(vertex > (ScaleGraphMath.pow(2,sizeCategory) * Place.places().size())){
    				var message:String = "The vertex is not supported by the graph.";
    				message = message + " Current graph size is : " + sizeCategory;
    				throw new UnsupportedOperationException(message);
    			}else{
    				var v:Long = ScaleGraphMath.pow(2,sizeCategory);
    				val machine:Int = ScaleGraphMath.round(vertex/v) as Int;
    				internal_vertex = (vertex % v) as Int;

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
    								if(adjacencyList(pt).id != -1l){
    									//throw new UnsupportedOperationException("Vertex already exists in the Graph");
    									return; //Just return without adding, the Vertex exists in the Graph
    								}

    								rec = new PlainGraphRecord();
    								rec.id = vertex;
    								rec.edges = new ArrayList[Long]();
    								adjacencyList(pt) = rec;
    								//Console.OUT.println("Added : " + adjacencyList(pt).id);
    								//Console.OUT.println("rec is : " + rec.id);
    							}else{
    								Console.OUT.println("(" + pt(0) + "," + pt(1) + ") Not in the List...");
    							}
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
    	
    	finish for(var i:Int = 0; i < s; i = i + offset){
    		    var startPos:Int = i;
    		    var endPos:Int = i + offset;
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
    public def addEdge(var id:Object):void {
    	 var e:String = id as String;
    	 
    	 var strArr:Array[String] = e.split(" ");
    	 val from:Long = Long.parse(strArr(0));
    	 val to:Long = Long.parse(strArr(1));
    	 var vertex:Long = from > to ? from:to;
    	 
    	 //Just try adding the Vertices to make sure that they are properly added befoe creating the Edge

    	 //Try adding the vertices. They might exist in the graph, but don't worry.
    	 addVertex(strArr(0));
 		 addVertex(strArr(1));
    	 
    	 //Console.OUT.println("DDDDDD---->");
    	 
    	 //Check to see whether the graph supports the Vertex
    	 if(sizeCategory == GraphSizeCategory.SMALL){
    		 if(vertex > ScaleGraphMath.pow(2,sizeCategory)){
    			 var message:String = "The vertices of the edge does not exist in the graph size.";
    			 message = message + " Current graph size is : " + sizeCategory;
    			 message = message + " the edge was : " + e;
    			 throw new UnsupportedOperationException(message);
    		 }
    	 }else if(sizeCategory == GraphSizeCategory.MEDIUM){
    		 if(vertex > (ScaleGraphMath.pow(2,sizeCategory))*adjacencyList.dist.places().size()){
    			 var message:String = "The vertices of the edge does not exist in the graph size.";
    			 message = message + " Current graph size is : 2^" + sizeCategory + " * " + adjacencyList.dist.places().size();
    			 message = message + " the edge was : " + e;
    			 throw new UnsupportedOperationException(message);
    		 } 
    	 }

    	 var v:Long = ScaleGraphMath.pow(2,sizeCategory);
    	 val machine:Int = ScaleGraphMath.round(from/v) as Int;
    	 val internal_vertex:Int = (from % v) as Int;

    	 if(machine != 0){
    	 	Console.OUT.println("from vertex : " + from + " machine : " + machine);
    	 }
    	 
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
    					 //Console.OUT.println("from-->" + from + " to-->" + to);
    					 //Console.OUT.println("pt(0)" + pt(0) + " pt(1)" + pt(1));
    					 
    					 //Console.OUT.println("adjacencyList(pt).id-->" + adjacencyList(pt).id);
    					 if(!adjacencyList(pt).edges.contains(to)){
    					 	adjacencyList(pt).edges.add(to);
    					 }
    				 } else{
    					 throw new UnsupportedOperationException("from vertex does not exist");
    				 }
    			 }
    		 }
    	 }
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
    						Console.OUT.println("OOK2");
    						var locRes:Array[Long] = new Array[Long](adjacencyList(pt).edges.size());
    						var counter:Int = 0;
    						Console.OUT.println("OOK3");
    						for(item in adjacencyList(pt).edges){
    							locRes(counter) = item;
    						}
    						Console.OUT.println("OOK4");
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

}