package org.scalegraph.clustering;

import x10.util.Box;
import x10.util.HashMap;
import x10.util.StringBuilder;

public class VertexInfo {
	
	val parent:Place = here;
	val minID = new Array[Long](Place.MAX_PLACES, Long.MAX_VALUE);
	val minIDX = new Array[Int](Place.MAX_PLACES, Int.MAX_VALUE);
	val gMinID = GlobalRef(minID);
	val gMinIDX = GlobalRef(minIDX);
	val IDtoIDX = DistArray.make[HashMap[Long, Int]](Dist.makeUnique(), (Point) => new HashMap[Long, Int]());
	val IDXtoID = DistArray.make[HashMap[Int, Long]](Dist.makeUnique(), (Point) => new HashMap[Int, Long]());
	
	public def getPlaceID(vertexID:Long): Int {
		var i:Int;
		for(i = Place.MAX_PLACES - 1; i >= 0; i--){
			if(minID(i) <= vertexID) break;
		}
		return i;
	}
	
	public def getPlaceID(vertexIDX:Int): Int {
		var i:Int;
		for(i = Place.MAX_PLACES - 1; i >= 0; i--){
			if(minIDX(i) <= vertexIDX) break;
		}
		return i;
	}
	
	public def getIDX(vertexID:Long): Box[Int] {
		val i = getPlaceID(vertexID);
		return at(IDtoIDX.dist(i)) IDtoIDX(i).get(vertexID);
	}
	
	public def getIDXFromHere(vertexID:Long): Box[Int] {
		return IDtoIDX(here.id).get(vertexID);
	}
	
	public def getID(vertexIDX:Int): Box[Long] {
		val i = getPlaceID(vertexIDX);
		return at(IDXtoID.dist(i)) IDXtoID(i).get(vertexIDX);
	}
	
	public def getIDFromHere(vertexIDX:Int): Box[Long] {
		return IDXtoID(here.id).get(vertexIDX);
	}
	
	public def toString(): String {
		val builder = new StringBuilder();
		builder.add("minID  = " + minID + "\n");
		builder.add("minIDX = " + minIDX + "\n");
		builder.add("---------- IDtoIDX ----------\n");
		builder.add(Tool.toString(IDtoIDX));
		builder.add("---------- IDXtoID ----------\n");
		builder.add(Tool.toString(IDXtoID));
		builder.add("-----------------------------\n");
		return builder.result();
	}
}