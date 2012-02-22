package org.scalegraph.metrics;

import x10.array.Array;
import x10.util.HashMap;
import x10.util.Set;

import org.scalegraph.graph.Graph;
import org.scalegraph.graph.GraphSizeCategory;
import org.scalegraph.graph.PlainGraph;

public class Degree {
	
	var degreeScore:HashMap[Long, Long] = null;
	// val intermRes:HashMap[Long, Long] = new HashMap[Long, Long](); 
	// val intermRes2:HashMap[Long, Long] = new HashMap[Long, Long](); 
	
	//val vInterm = GlobalRef[Cell[HashMap[Long, Long]]](new Cell[HashMap[Long, Long]](new HashMap[Long, Long]()));
	
	public def getInDegree(val graph:Graph){
		
	}
	
	public def getOutDegree(val graph:Graph){
		
	}
	
	public def getInOutDegree(val graph:PlainGraph):HashMap[Long, Long]{
		var sizecat:Short = graph.getGraphSizeCategory();
		var totalVerts:Long = graph.getMaximumVertexID();
		
		// if (sizecat == GraphSizeCategory.MEDIUM){
		// 	totalVerts = Place.MAX_PLACES * Math.pow(2, sizecat) as long;	
		// }else{
		// 	totalVerts = Math.pow(2, sizecat) as long;
		// }
		
		
		//var edgeCount:Int = 0;
		//var neighbours:Array[Long] = null;
		Console.OUT.println("totalVerts : " + totalVerts);
				
		val uqverts:DistArray[Long] = graph.getVertexList();
		val pVerts:Array[Array[Long]] = new Array[Array[Long]](1); 
		var intermRes3:HashMap[Long, Long] = new HashMap[Long, Long](); 
		var intermRes4:HashMap[Long, Long] = new HashMap[Long, Long]();
		
		for(p:Place in Place.places()){
			val r:Region = uqverts.dist.get(p);
			//var len:Int = r.size();
			
			//Console.OUT.println("len : " + len);
			
			//pVerts(0) = new Array[Long](len);
			
			var intermRes2:HashMap[Long, Long] = null;

			intermRes2 = at(p){
				var c:Int = 0;
				val intermRes:HashMap[Long, Long] = new HashMap[Long, Long](); 
				
				for(point:Point in r){
					//Console.OUT.print("for vertex -> " + uqverts(point));
					var vertID:Long = uqverts(point);
					var edgeCount:Int = 0;
					
					
					if(vertID != -1l){
						var neighbours:Array[Long] = null;
						neighbours = graph.getNeighbours(vertID);

						if(neighbours != null){
							edgeCount = neighbours.size;
							
							//Console.OUT.println("Vertex : " + vertID + " has " + edgeCount + " neighbours.");
							
						}else{
							continue;
						}
						
						if(intermRes.containsKey(edgeCount)){
							intermRes.put(edgeCount, ((intermRes.get(edgeCount).value as Long) + 1)); 
						}else{
							intermRes.put(edgeCount, 1);
						}
						
						
						// pVerts(0)(c) = vertID;
						// c++;
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
			}
		}
		
		
		
		// for(var i:Long = 1l; i < totalVerts; i++){
		// 	neighbours = graph.getNeighbours(i);
		// 	if(neighbours != null){
		// 		edgeCount = neighbours.size;
		// 	}else{
		// 		continue;
		// 	}
		// 	
		// 	if(intermRes.containsKey(edgeCount)){
		// 		intermRes.put(edgeCount, ((intermRes.get(edgeCount).value as Long) + 1)); 
		// 	}else{
		// 		intermRes.put(edgeCount, 1);
		// 	}
		// }
			
		// var keys:Set[Long] = intermRes3.keySet();
		// val len:Long = keys.size();
		// val itr:Iterator[Long] = keys.iterator();
 	// 	
  //       while(itr.hasNext()){
		//  	var counter:Long = 0l;
		//  	var key:Long = itr.next();
		//  	var value:Object = null;
		//  	var vall:Long = 0l;
		//  	Console.OUT.println("key : " + key + " value : " + (intermRes3.get(key).value as Long));
		//  	for(var j:Long = 1l; j < totalVerts; j++){
		//  		value = intermRes3.get(j);
		//  		
		//  		if(( value != null)){
		//  			vall = Long.parse(value.toString());
		//  			if(vall == key){
		//  				counter++;
		//  			}
		//  		}
		//  	}
		//  	
		//  	if(counter >= 1){
		//  		intermRes4.put(vall, counter);
		//  		counter = 0;
		//  	}
		//  }
		
		// var keys:Set[Long] = vInterm()().keySet();
		// val len:Long = keys.size();
		// 
		// Console.OUT.println("Total number of keys : " + len);
		// 
		// val itr:Iterator[Long] = keys.iterator();
		// 
		// while(itr.hasNext()){
		// 	var key:Long = itr.next();
		// 	var value:Long = (vInterm()().get(key).value as Long);
		// 	
		// 	//Console.OUT.println("key : " + key + " value : " + value);
		// 	
		// 	if(intermRes2.containsKey(value)){
		// 		intermRes2.put(value, ((intermRes2.get(value).value as Long) + 1)); 
		// 	}else{
		// 		intermRes2.put(value, 1);
		// 	}
		// 	
		// }
				
		//return intermRes2;
		
		//return intermRes4;
		
		return intermRes3;
	}
}




