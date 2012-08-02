package org.scalegraph.patternmatching;

import x10.util.ArrayBuilder;
import x10.util.ArrayList;

/**
 * adjacency matrix class for graph with labeled vertex
 */
public class AdjMatrix extends SqrSymMatrix {

	public var vlabel:ArrayList[Int];
	//private var edgeCount:Int;
	
	public def this(){
		super();
		vlabel = new ArrayList[Int]();
	}
	
	/**
	 * constructor
	 */
	public def this(n:Int){
		super(n);
		this.vlabel = new ArrayList[Int](n);
	}
	
	public def this(labels:ArrayList[Int]){
		this(labels.size());
		this.vlabel = labels.clone();
	}
	
	/**
	 * getter and setter
	 */
	public def getLabel(v:Int): Int {
		/*if(0 <= v && v < this.vlabel.size()){
			return vlabel(v);
		}else{
			Console.OUT.println("error: AdjMatrix.getLabel: requested vertex label from invalid position");
			return Zero.get[V_T]();
		}*/
		return vlabel(v);
	}
	
	/* called from only 1 place */
	public def setLabel(v:Int, l:Int): void {
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
	public def getVerticesFromLabel(l:Int): ArrayList[Int] {
		val ret_val = new ArrayList[Int]();
		for(var i:Int = 0; i < this.vlabel.size(); i++){
			if(vlabel(i).equals(l)){
				ret_val.add(i);
			}
		}
		return ret_val;
	}
	
	/**
	 * add a new vertex
	 */	
	public def addVertex(l:Int): Int {
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
	
	public def cloneAdjMatrix(){
		var m:AdjMatrix = new AdjMatrix(this.rows);
		
		for(var i:Int = 0;i < rows;i++){
			for(var j:Int = 0;j < cols;j++){
				m(i,j) = this(i,j); 
			}
		}
		m.vlabel = this.vlabel.clone();
		
		return m;
	}
	
	//public def getEdgeCount(): Int {}
}