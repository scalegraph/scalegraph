package org.scalegraph.metrics;

import x10.array.Array;
import x10.util.HashMap;
import x10.util.Set;

import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphSizeCategory;
import org.scalegraph.graph.PlainGraph;

public class Degree {
	
	var degreeScore:HashMap[Long, Long] = null;
	val intermRes:HashMap[Long, Long] = new HashMap[Long, Long](); 
	val intermRes2:HashMap[Long, Long] = new HashMap[Long, Long](); 
	
	public def getInDegree(val graph:Graph){
		
	}
	
	public def getOutDegree(val graph:Graph){
		
	}
	
	public def getInOutDegree(val graph:PlainGraph):HashMap[Long, Long]{
		var sizecat:Short = graph.getGraphSizeCategory();
		var totalVerts:Long = 0;
		
		if (sizecat == GraphSizeCategory.MEDIUM){
			totalVerts = Place.MAX_PLACES * Math.pow(2, sizecat) as long;	
		}else{
			totalVerts = Math.pow(2, sizecat) as long;
		}
		
		
		var edgeCount:Int = 0;
		var neighbours:Array[Long] = null;
		Console.OUT.println("totalVerts : " + totalVerts);
		
		for(var i:Long = 1l; i < totalVerts; i++){
			neighbours = graph.getNeighbours(i);
			if(neighbours != null){
				edgeCount = neighbours.size;
			}else{
				continue;
			}
			
			if(intermRes.containsKey(edgeCount)){
				intermRes.put(edgeCount, ((intermRes.get(edgeCount).value as Long) + 1)); 
			}else{
				intermRes.put(edgeCount, 1);
			}
		}
			
		// var keys:Set[Long] = intermRes.keySet();
		// val len:Long = keys.size();
		// val itr:Iterator[Long] = keys.iterator();
		// 		
		// while(itr.hasNext()){
		// 	var counter:Long = 0l;
		// 	var key:Long = itr.next();
		// 	var value:Object = null;
		// 	var vall:Long = 0l;
		// 	Console.OUT.println("key : " + key + " value : " + (intermRes.get(key).value as Long));
		// 	for(var j:Long = 1l; j < totalVerts; j++){
		// 		value = intermRes.get(j);
		// 		
		// 		if(( value != null)){
		// 			vall = Long.parse(value.toString());
		// 			if(vall == key){
		// 				counter++;
		// 			}
		// 		}
		// 	}
		// 	
		// 	if(counter >= 1){
		// 		intermRes2.put(vall, counter);
		// 	}
		// }
		
		var keys:Set[Long] = intermRes.keySet();
		val len:Long = keys.size();
		val itr:Iterator[Long] = keys.iterator();
		
		while(itr.hasNext()){
			var key:Long = itr.next();
			var value:Long = (intermRes.get(key).value as Long);
			
			//Console.OUT.println("key : " + key + " value : " + value);
			
			if(intermRes2.containsKey(value)){
				intermRes2.put(value, ((intermRes2.get(value).value as Long) + 1)); 
			}else{
				intermRes2.put(value, 1);
			}
			
		}
				
		return intermRes2;		
	}
}




