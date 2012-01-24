package org.scalegraph.graph;

import x10.util.*;

public class DistAttributedGraph extends AttributedGraph {
	
	transient var wrappedGraph: AttributedGraph;
	
	var idAndIndexMap: HashMap[Int, Int];
	var data: DistArray[AttributedGraphCell];
	var dist: Dist;
	
	private def this(g:AttributedGraph) {
		
		idAndIndexMap = new HashMap[Int, Int]();
		this.wrappedGraph = g;
		
	}
	
	public static def make(g:AttributedGraph): DistAttributedGraph {
		val distAttributedGraph = new DistAttributedGraph(g);
		distAttributedGraph.distribute();
		return distAttributedGraph;
	}
	
	private def distribute() {
		
		val verticesCount = wrappedGraph.getVertexCount();
		val numPlaces = Place.MAX_PLACES;
		val region = 0..(verticesCount as Int - 1);
		var index: Int = 0;
		
		dist = Dist.makeBlock(region);
		data = DistArray.make[AttributedGraphCell](dist);
		
		val vertexIterator: Iterator[Map.Entry[Long, Vertex]] = wrappedGraph.idAndVertexMap.entries().iterator();
		var entry: Map.Entry[Long, Vertex];
		// val dataMap: Array[ArrayList[AttributedGraphCell]] 
		// 	= new Array[ArrayList[AttributedGraphCell]](numPlaces, 
		// 			(i: Int) => new ArrayList[AttributedGraphCell]());
		
		finish {	
			
			var buffer: ArrayList[AttributedGraphCell] = new ArrayList[AttributedGraphCell]();
			var placeForCurrentCell: Int = 0;
			var placeForPreviousCell: Int = 0;
			var firstData: Boolean = true;
			var indexBuffer:ArrayList[Int] = new ArrayList[Int]();
			
			while(vertexIterator.hasNext()) {
				entry = vertexIterator.next();
				
				val outEdges: Array[Edge] = wrappedGraph.srcVertexIdAndEdgesMap(entry.getKey()).value.toArray();
				val inEdges: Array[Edge] = wrappedGraph.dstVertexIdAndEdgesMap(entry.getKey()).value.toArray();
				val v = entry.getValue();
				val cell = new AttributedGraphCell(v, outEdges, inEdges);
				
				
				
				idAndIndexMap.put(v.getInternalId() as Int, index);
				
				// Clear list
				
					placeForCurrentCell = dist(index).id;
					
					if(firstData) {
						placeForPreviousCell = placeForCurrentCell;
						firstData = false;
					} 
					
					
					if(placeForPreviousCell == placeForCurrentCell) {
						
						buffer.add(cell);
						indexBuffer.add(index);
					} 

					if(placeForPreviousCell != placeForCurrentCell || vertexIterator.hasNext() == false || buffer.size() >= 10){
						Console.OUT.println("Yatta");
						val sentBuf = buffer.toArray();
						val sentIndex = indexBuffer.toArray();
						val globData = data;
						val targetPlace = dist(sentIndex(0));  
						
						
							async at (targetPlace) async {
								
								Console.OUT.println("Here ==>" + here.id);
								
								for(i in 0..(sentBuf.size -1)) {
									 data( sentIndex(i) ) = sentBuf(i);
								 }
							}
							Console.OUT.println("Yoshi");
						placeForPreviousCell = placeForCurrentCell;
						
						while(!buffer.isEmpty()) {
							buffer.removeFirst();
						}
						
						while(!indexBuffer.isEmpty()) {
							indexBuffer.removeFirst();
						}
						
						buffer.add(cell);
						indexBuffer.add(index);
					}
				
				
				//d2(cell, index);
				
				++index;
	
			}
		}
		
		Console.OUT.println("Numnode: " + index );
	}
	

	
	private def d2(cell: AttributedGraphCell, index: Int) {
		
		val p = dist(index);
		
		async at(p)  {
			data(index) = cell;
			Console.OUT.println(index);
		}
		
	}
	
}