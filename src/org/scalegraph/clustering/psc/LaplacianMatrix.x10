package org.scalegraph.clustering.psc;

import x10.util.ArrayBuilder;
import x10.util.ArrayList;
import x10.util.Box;
import x10.util.StringBuilder;
import x10.util.Pair;

import org.scalegraph.graph.PlainGraph;

/*
 * Laplacian matrix constructed by using Compressed Row Storage
 */
public class LaplacianMatrix extends SparseMatrix {
	
	var num:Numbering;
	var degree:Array[Int];
	
	public def this(graph:PlainGraph){
		this(graph, new Numbering(graph));
	}
	
	public def this(graph:PlainGraph, num:Numbering){
		this.size = num.size();
		this.num = num;
		this.degree = new Array[Int](num.size());
		
		val firstColumnIndexBuilder = new ArrayBuilder[Int]();
		val entriesBuilder = new ArrayBuilder[Pair[Int, Double]]();
		
		for(var i:Int = 0; i < num.size(); i++){
			val vertexID:Long = num.getID(i)();
			if(vertexID < 0) continue;
			
			degree(i) = graph.getNeighbours(vertexID).size;
		}
		
		var j:Int = 0;
		for(var vertexIDX:Int = 0; vertexIDX < num.size(); vertexIDX++){
			val vertexID:Long = num.getID(vertexIDX)();
			if(vertexID < 0) continue;
			
			val neighbours = graph.getNeighbours(vertexID);
			
			firstColumnIndexBuilder.add(j);
			entriesBuilder.add(Pair[Int, Double](vertexIDX, 1.0));
			j++;
			if(neighbours != null){
				//Console.OUT.println("neighbour of " + vertexID + " is " + neighbours);
				for(npt in neighbours){
					val neighbourID:Long = neighbours(npt);
					val boxNeighbourIDX:Box[Int] = num.getIDX(neighbourID);
					if(boxNeighbourIDX != null){
						val neighbourIDX = boxNeighbourIDX();
						entriesBuilder.add(Pair[Int, Double](neighbourIDX, -1 / Math.sqrt(degree(vertexIDX) * degree(neighbourIDX))));
						j++;
					}
				}
			}
		}
		firstColumnIndexBuilder.add(j);
		this.firstColumnIndex = firstColumnIndexBuilder.result();
		this.entries = entriesBuilder.result();
	}
	
	public def toString(): String {
		val builder = new StringBuilder();
		builder.add(num.toString());
		builder.add(super.toString());
		return builder.result();
	}
}