package org.scalegraph.metrics;

import x10.array.Array;
import x10.util.HashMap;
import x10.util.Set;

import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphSizeCategory;
import org.scalegraph.graph.PlainGraph;

public class Degree {
	
	var degreeScore:HashMap[Long, Long] = null;
	
	public def getInDegree(val graph:PlainGraph):HashMap[Long, Long]{
		var sizecat:Short = graph.getGraphSizeCategory();
		val totalVerts:Long = graph.getMaximumVertexID();
		val unconnected = GlobalRef[Cell[Long]](new Cell[Long](0));
		
		Console.OUT.println("Getting the In Degree");
		
		val uqverts:DistArray[Long] = graph.getVertexList();
		
		if(uqverts==null){
			Console.OUT.println("uqverts is NULL");
		}

		val pVerts:Array[Array[Long]] = new Array[Array[Long]](1); 
		var intermRes3:HashMap[Long, Long] = new HashMap[Long, Long](); 
		var intermRes4:HashMap[Long, Long] = new HashMap[Long, Long]();
		
		for(p:Place in Place.places()){
			val r:Region = uqverts.dist.get(p);
			var len2:Int = r.size();
			
			var intermRes2:HashMap[Long, Long] = null;

			intermRes2 = at(p){
				var c:Int = 0;
				val intermRes:HashMap[Long, Long] = new HashMap[Long, Long](); 
				
				for(point:Point in r){
					var vertID:Long = uqverts(point);
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
							unconnected()() = unconnected()() + 1;
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
				
				intermRes3.put(0, unconnected()());
			}
		}
		
		return intermRes3;			
	}
	
	public def getOutDegree(val graph:PlainGraph):HashMap[Long, Long]{
		var sizecat:Short = graph.getGraphSizeCategory();
		val totalVerts:Long = graph.getMaximumVertexID();
		Console.OUT.println("Getting the Out Degree");
		
		val uqverts:DistArray[Long] = graph.getVertexList();
		
		if(uqverts==null){
			Console.OUT.println("uqverts is NULL");
		}
		
		val pVerts:Array[Array[Long]] = new Array[Array[Long]](1); 
		var intermRes3:HashMap[Long, Long] = new HashMap[Long, Long](); 
		var intermRes4:HashMap[Long, Long] = new HashMap[Long, Long]();
		val unconnected = GlobalRef[Cell[Long]](new Cell[Long](0));
		
		for(p:Place in Place.places()){
			val r:Region = uqverts.dist.get(p);
			var len2:Int = r.size();
			var intermRes2:HashMap[Long, Long] = null;


			intermRes2 = at(p){
				var c:Int = 0;
				val intermRes:HashMap[Long, Long] = new HashMap[Long, Long](); 
				
				for(point:Point in r){
					var vertID:Long = uqverts(point);
					var edgeCount:Int = 0;
					
					if(point(1) > totalVerts){
						break;
					}
					
					if(vertID != -1l){
						var neighbours:Array[Long] = null;
						neighbours = graph.getOutNeighbours(vertID);

						if(neighbours != null){
							edgeCount = neighbours.size;
						}else{
							unconnected()() = unconnected()() + 1;
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
				
				intermRes3.put(0, unconnected()());
			}
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
	}
}




