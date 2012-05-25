package org.scalegraph.metrics;

import x10.array.Array;
import x10.util.HashMap;
import x10.util.Set;

import org.scalegraph.graph.Graph;
import org.scalegraph.graph.VertexArrays;
import org.scalegraph.graph.GraphSizeCategory;
import org.scalegraph.graph.PlainGraph;

public class Degree {
	
	var degreeScore:HashMap[Long, Long] = null;
	
	public def getInDegree(val graph:PlainGraph):HashMap[Long, Long]{
		var sizecat:Short = graph.getGraphSizeCategory();
		val totalVerts:Long = graph.getMaximumVertexID();
		//val unconnected = GlobalRef[Cell[Long]](new Cell[Long](0));
		
		Console.OUT.println("Getting the In Degree");
		
		//val uqverts:DistArray[Long] = graph.getVertexList();
		val uqverts:VertexArrays = graph.getVertexListDualArrays();
		
		Console.OUT.println("Got vertex lists");
		
		if(uqverts==null){
			Console.OUT.println("uqverts is NULL");
		}

		val pVerts:Array[Array[Long]] = new Array[Array[Long]](1); 
		var intermRes3:HashMap[Long, Long] = new HashMap[Long, Long](); 
		var intermRes4:HashMap[Long, Long] = new HashMap[Long, Long]();
		val unconnected = new Array[GlobalRef[Cell[Long]]](Place.MAX_PLACES);
		var placeCounter:Int = 0;
		
		//Console.OUT.println("KKK");
		
		//---preArray
		for(p:Place in Place.places()){
			val ii = placeCounter;
			//Console.OUT.println("Gssss000");
			val r:Region = uqverts.preArray.dist.get(p);
			//Console.OUT.println("Gssss2222");
			var len2:Int = r.size();
			//Console.OUT.println("Gssss222");
			var intermRes2:HashMap[Long, Long] = null;
			unconnected(placeCounter) = GlobalRef[Cell[Long]](new Cell[Long](0l));
			//Console.OUT.println("Gssss");
			intermRes2 = at(p){
				var c:Int = 0;
				val intermRes:HashMap[Long, Long] = new HashMap[Long, Long](); 
				
				for(point:Point in r){
					var vertID:Long = uqverts.preArray(point);
					var edgeCount:Int = 0;
					
					if(point(1) > totalVerts){
						break;
					}
					
					if(vertID != -1l){
						var neighbours:Array[Long] = null;
						neighbours = graph.getInNeighbours(vertID);

						if(neighbours != null){
							edgeCount = neighbours.size;
														
						}else{
							atomic{
								unconnected(ii)()() = unconnected(ii)()() + 1;
							}
							continue;
						}
						
						if(intermRes.containsKey(edgeCount)){
							intermRes.put(edgeCount, ((intermRes.get(edgeCount).value as Long) + 1)); 
						}else{
							intermRes.put(edgeCount, 1);
						}
						
					}					
				}
				
				return intermRes;
			};
			
			//Console.OUT.println("MMMM");
			if(intermRes2 != null){
				var keys:Set[Long] = intermRes2.keySet();
				val len:Long = keys.size();
				val itr:Iterator[Long] = keys.iterator();
				while(itr.hasNext()){
					var key:Long = itr.next();
					
					if(intermRes3.containsKey(key)){
						intermRes3.put(key, ((intermRes2.get(key).value as Long) + (intermRes3.get(key).value as Long))); 
					}else{
						intermRes3.put(key, (intermRes2.get(key).value as Long));
					}
				}
				
				intermRes3.put(0, unconnected(ii)()());
			}
			
			//Console.OUT.println("NNNN");
			
			placeCounter++;
		}//end for
		
		//--post array
		//val r:Region = uqverts.postArray.dist.get(p);
		//var len2:Int = r.size();
		
		//----- This is done at place 0
		//Console.OUT.println("PPP");
		var intermRes5:HashMap[Long, Long] = new HashMap[Long, Long]();
		unconnected(0) = GlobalRef[Cell[Long]](new Cell[Long](0l));
		
		//intermRes2 = at(p){
		var c:Int = 0;
		//val intermRes:HashMap[Long, Long] = new HashMap[Long, Long](); 
		
		for(item in uqverts.postArray){
			var vertID:Long = uqverts.postArray(item);
			var edgeCount:Int = 0;
			
			if(item(0) > totalVerts){
				break;
			}
			
			if(vertID != -1l){
				var neighbours:Array[Long] = null;
				neighbours = graph.getInNeighbours(vertID);
				
				if(neighbours != null){
					edgeCount = neighbours.size;
					
				}else{
					atomic{
						unconnected(0)()() = unconnected(0)()() + 1;
					}
					continue;
				}
				
				if(intermRes5.containsKey(edgeCount)){
					intermRes5.put(edgeCount, ((intermRes5.get(edgeCount).value as Long) + 1)); 
				}else{
					intermRes5.put(edgeCount, 1);
				}
				
			}					
		}
		
		//Console.OUT.println("QQQQQ");
		
		if(intermRes5 != null){
			var keys:Set[Long] = intermRes5.keySet();
			val len:Long = keys.size();
			val itr:Iterator[Long] = keys.iterator();
			while(itr.hasNext()){
				var key:Long = itr.next();
				
				if(intermRes3.containsKey(key)){
					intermRes3.put(key, ((intermRes5.get(key).value as Long) + (intermRes3.get(key).value as Long))); 
				}else{
					intermRes3.put(key, (intermRes5.get(key).value as Long));
				}
			}
			
			intermRes3.put(0, unconnected(0)()());
		}
		
		//Console.OUT.println("TTTTT");
		
		//------------------------------------
		return intermRes3;			
	}
	
	public def getOutDegree(val graph:PlainGraph):HashMap[Long, Long]{
		var sizecat:Short = graph.getGraphSizeCategory();
		val totalVerts:Long = graph.getMaximumVertexID();
		Console.OUT.println("Getting the Out Degree");
		
		//val uqverts:DistArray[Long] = graph.getVertexList();
		val uqverts:VertexArrays = graph.getVertexListDualArrays();
		
		Console.OUT.println("Got vertex list");
		
		if(uqverts==null){
			Console.OUT.println("uqverts is NULL");
		}
		
		val pVerts:Array[Array[Long]] = new Array[Array[Long]](1); 
		var intermRes3:HashMap[Long, Long] = new HashMap[Long, Long](); 
		var intermRes4:HashMap[Long, Long] = new HashMap[Long, Long]();
		
		val unconnected = new Array[GlobalRef[Cell[Long]]](Place.MAX_PLACES);
		var placeCounter:Int = 0;
		
		finish for(p:Place in Place.places()){
			val ii = placeCounter;
			val r:Region = uqverts.preArray.dist.get(p);
			var len2:Int = r.size();
			var intermRes2:HashMap[Long, Long] = null;
			unconnected(placeCounter) = GlobalRef[Cell[Long]](new Cell[Long](0l));
			
			//Console.OUT.println("Place is : " + p.id);
			//Console.OUT.println("ii is : " + ii);
			
			intermRes2 = at(p){
				//Console.OUT.println("Entered to : " + p.id);
				var c:Int = 0;
				val intermRes:HashMap[Long, Long] = new HashMap[Long, Long](); 
				
				for(point:Point in r){
					var vertID:Long = uqverts.preArray(point);
					var edgeCount:Int = 0;
					
					if(point(1) > totalVerts){
						break;
					}

					if(vertID != -1l){
						var neighbours:Array[Long] = null;
						//Console.OUT.println("Neighbours of : " + vertID);
						neighbours = graph.getOutNeighbours(vertID);
						//Console.OUT.println("Got neighbours");

						if(neighbours != null){
							edgeCount = neighbours.size;
							//Console.OUT.println("edgeCount : " + edgeCount);
						}else{
							//unconnected()() = unconnected()() + 1;
							atomic{
								//Console.OUT.println("at : " + here.id + " ii is : " + ii);
								unconnected(ii)()() = unconnected(ii)()() + 1;
							}
							//Console.OUT.println("Continuing...");
							continue;
						}			
						
						
						//Console.OUT.println("Came here");
						
						if(intermRes.containsKey(edgeCount)){
							intermRes.put(edgeCount, ((intermRes.get(edgeCount).value as Long) + 1)); 
						}else{
							intermRes.put(edgeCount, 1);
						}
						
						//Console.OUT.println("Came here 2");
					}					
				}
				
				return intermRes;
			};
			
			//Console.OUT.println("Next Atep AAAAA");
			if(intermRes2 != null){
				var keys:Set[Long] = intermRes2.keySet();
				val len:Long = keys.size();
				val itr:Iterator[Long] = keys.iterator();
				while(itr.hasNext()){
					var key:Long = itr.next();
					
					if(intermRes3.containsKey(key)){
						intermRes3.put(key, ((intermRes2.get(key).value as Long) + (intermRes3.get(key).value as Long))); 
					}else{
						intermRes3.put(key, (intermRes2.get(key).value as Long));
					}
				}
				
				intermRes3.put(0, unconnected(ii)()());
			}
			
			placeCounter++;
		}
		//Console.OUT.println("Next Atep Done");
		//----- This is done at place 0
		
		var intermRes5:HashMap[Long, Long] = new HashMap[Long, Long]();
		//unconnected(placeCounter) = GlobalRef[Cell[Long]](new Cell[Long](0l));
		
		//intermRes2 = at(p){
		var c:Int = 0;
		//val intermRes:HashMap[Long, Long] = new HashMap[Long, Long](); 
		//Console.OUT.println("22222");
		for(item in uqverts.postArray){
			//Console.OUT.println("MUMU");
			var vertID:Long = uqverts.postArray(item);
			var edgeCount:Int = 0;
			//Console.OUT.println("AAAAA");
			if(item(0) > totalVerts){
				break;
			}
			//Console.OUT.println("BBBB");
			if(vertID != -1l){
				var neighbours:Array[Long] = null;
				//Console.OUT.println("CCCC");
				neighbours = graph.getInNeighbours(vertID);
				
				if(neighbours != null){
					edgeCount = neighbours.size;
					
				}else{
					atomic{
					//	Console.OUT.println("dddd");
						unconnected(0)()() = unconnected(0)()() + 1; //Olny place 0
						//Console.OUT.println("EEEEE");
					}
					continue;
				}
				
				//Console.OUT.println("FFFF");
				
				if(intermRes5.containsKey(edgeCount)){
					intermRes5.put(edgeCount, ((intermRes5.get(edgeCount).value as Long) + 1)); 
				}else{
					intermRes5.put(edgeCount, 1);
				}
				//Console.OUT.println("GGGGGG");
			}					
		}
		
		//Console.OUT.println("Next BBBB");
		
		if(intermRes5 != null){
			var keys:Set[Long] = intermRes5.keySet();
			val len:Long = keys.size();
			val itr:Iterator[Long] = keys.iterator();
			while(itr.hasNext()){
				var key:Long = itr.next();
				
				if(intermRes3.containsKey(key)){
					intermRes3.put(key, ((intermRes5.get(key).value as Long) + (intermRes3.get(key).value as Long))); 
				}else{
					intermRes3.put(key, (intermRes5.get(key).value as Long));
				}
			}
			
			intermRes3.put(0, unconnected(0)()());
		}		

		return intermRes3;		
	}
	
	/**
	 * This method is constructed by getting in and out degree lists and merging them together
	 */
	public def getInOutDegree(val graph:PlainGraph):HashMap[Long, Long]{

		var intermRes2:HashMap[Long, Long] = new HashMap[Long, Long](); 
		
		var outDeg:HashMap[Long, Long] = getOutDegree(graph);
		var inDeg:HashMap[Long, Long] = getInDegree(graph);
		
		var outKeys:Set[Long] = outDeg.keySet();
		var inKeys:Set[Long] = inDeg.keySet();
		
		Console.OUT.println("outKeys.size() : "+outKeys.size());
		Console.OUT.println("inKeys.size() : "+inKeys.size());
		
		val outItr:Iterator[Long] = outKeys.iterator();
		val inItr:Iterator[Long] = inKeys.iterator();
		
		while(outItr.hasNext()){
			val key:Long = outItr.next();

			val value = (outDeg.get(key).value as Long);
				
				if(intermRes2.containsKey(key)){
					intermRes2.put(key, ((intermRes2.get(key).value as Long) + value));
				}else{
					intermRes2.put(key, value);
				}
			}

		while(inItr.hasNext()){
			val key:Long = inItr.next();
			val value:Long = (inDeg.get(key).value as Long);
			
			if(intermRes2.containsKey(key)){
				intermRes2.put(key, ((intermRes2.get(key).value as Long) + value)); 
			}else{
				intermRes2.put(key, value);
			}
		}
	
		return intermRes2;
		//return null;
	}
}




