package org.scalegraph.clustering.psc;

import x10.util.Box;
import x10.util.HashMap;
import x10.util.Set;
import x10.util.StringBuilder;

import org.scalegraph.graph.PlainGraph;

public class Numbering {
	
	public val nEntries:Int;
	private val IDtoIDX = new HashMap[Long, Int]();
	private val IDXtoID = new HashMap[Int, Long]();
	
	public def this(graph:PlainGraph){
		val vertexList:DistArray[Long] = graph.getVertexListDualArrays(4).preArray;
		//val globalIDtoIDX = GlobalRef[HashMap[Long, Int]](IDtoIDX);
		//val globalIDXtoID = GlobalRef[HashMap[Int, Long]](IDXtoID);
		var counter:Int = 0;
		//val there = here;
		for(p in vertexList.dist.places()){
			for(vpt in vertexList.dist.get(p)){
				val vertexID:Long = at(p) vertexList(vpt);
				if(vertexID != -1l){
					//globalIDtoIDX().put(vertexID, counter);
					//globalIDXtoID().put(counter, vertexID);
					IDtoIDX.put(vertexID, counter);
					IDXtoID.put(counter, vertexID);
					counter++;
				}
			}
		}
		this.nEntries = counter;
	}
	
	private def put(id:Long, idx:Int){
		IDtoIDX.put(id, idx);
		IDXtoID.put(idx, id);
	}
	
	public def getIDX(id:Long): Box[Int] {
		return IDtoIDX.get(id);
	}
	
	public def getID(idx:Int): Box[Long] {
		return IDXtoID.get(idx);
	}
	
	public def getIDs(): Set[Long] {
		return IDtoIDX.keySet();
	}
	
	public def getIDXs(): Set[Int] {
		return IDXtoID.keySet();
	}
	
	public def size(): Int {
		return nEntries;
	}
	
	public def toString(): String {
		val builder = new StringBuilder();
		for(entry in IDtoIDX.entries()){
			builder.add(entry.getKey() + " -> " + entry.getValue() + "\n");
		}
		return builder.result();
	}
}