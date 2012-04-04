package org.scalegraph.patternmatching;

import x10.util.ArrayBuilder;
import x10.util.ArrayList;

/**
 * adjacency matrix class for graph with labeled vertex
 */
public class AdjMatrix[V_T] extends SqrSymMatrix {
	
	public val vlabel:ArrayList[V_T];
	//private var edgeCount:Int;
	
	/**
	 * constructor
	 */
	public def this(n:Int){
		super(n);
		this.vlabel = new ArrayList[V_T](n);
	}
	
	public def this(labels:ArrayList[V_T]){
		this(labels.size());
		this.vlabel = labels.clone();
	}
	
	/**
	 * getter and setter
	 */
	public def getLabel(v:Int): V_T {
		/*if(0 <= v && v < this.vlabel.size()){
			return vlabel(v);
		}else{
			Console.OUT.println("error: AdjMatrix.getLabel: requested vertex label from invalid position");
			return Zero.get[V_T]();
		}*/
		return vlabel(v);
	}
	
	/* called from only 1 place */
	public def setLabel(v:Int, l:V_T): void {
		if(0 <= v && v < this.vlabel.size()){
			vlabel(v) = l;
		}else{
			Console.OUT.println("error: AdjMatrix.setLabel: vertex label assignment on invalid position");
		}
	}
	
	/**
	 * return degree of specified vertex
	 */
	public def getDegree(v:Int): Int {
		var d:Int = 0;
		for(var i:Int = 0; i < this.cols; i++){
			d += this(v, i);
		}
		return d;
	}
	
	/**
	 * return vertices whose label is l
	 */
	/* called from only 1 place */
	public def getVerticesFromLabel(l:V_T): Array[Int](1) {
		val builder = new ArrayBuilder[Int]();
		for(var i:Int = 0; i < this.vlabel.size(); i++){
			if(vlabel(i).equals(l)){
				builder.add(i);
			}
		}
		return builder.result();
	}
	
	/**
	 * add a new vertex
	 */	
	public def addVertex(l:V_T): Int {
		val ret = this.addVertex();
		this.vlabel.add(l);
		return ret;
	}
	
	/**
	 * add a new edge
	 */
	public def addEdge(v1:Int, v2:Int): void {
		this(v1, v2) = 1;
		this(v2, v1) = 1;
	}
	
	//public def getEdgeCount(): Int {}
}