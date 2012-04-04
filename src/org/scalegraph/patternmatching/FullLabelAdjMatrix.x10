package org.scalegraph.patternmatching;

import x10.util.ArrayBuilder;
import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.Pair;

/**
 * full labeled adjacency matrix class for graph with labeled vertex and edge
 */
public class FullLabelAdjMatrix[V_T, E_T] extends AdjMatrix[V_T] {
	
	//private val entity:AdjMatrix[V_T];
	private val elabel:HashMap[Pair[Int, Int], E_T];
	
	/**
	 * constructors
	 */
	//public def this(n:Int){
	//	entity = new AdjMatrix[V_T](n);
	//	elabel = null;
	//}
	
	public def this(labels:ArrayList[V_T]){
		super(labels);
		//entity = new AdjMatrix[V_T](labels);
		elabel = null;
	}
	
	//public def this(m:FullLabelAdjMatrix[V_T, E_T]){
	//	this.entity = m.entity;
	//	this.elabel = m.elabel;
	//}
	
	public def getEdgeLabel(v1:Int, v2:Int): E_T {
		/*if(v1 == v2 || v1 < 0 || this.getSize() <= v1 ||
				v2 < 0 || this.getSize() <= v2){
			Console.OUT.println("error: FullLabelAdjMatrix.getEdgeLabel: requested edge label from invalid position");
			return Zero.get[E_T]();
		}*/
		val key = (v1 < v2) ? Pair[Int, Int](v1, v2) : Pair[Int, Int](v2, v1);
		val ret = this.elabel.get(key);
		/*if(ret == null){
			Console.OUT.println("error: FullLabelAdjMatrix.getEdgeLabel: requested edge label from invalid position");
			return Zero.get[E_T]();
		}else{
			return ret();
		}*/
		return ret();
	}
	
	public def setEdgeLabel(v1:Int, v2:Int, e:E_T): void {
		if(v1 == v2) return;
		val key = (v1 < v2) ? Pair[Int, Int](v1, v2) : Pair[Int, Int](v2, v1);
		val ret = this.elabel.put(key, e);
		if(ret == null){
			Console.OUT.println("error: FullLabelAdjMatrix.setEdgeLabel: edge label insertion failed");
		}
	}
	
	/* called from only 2 places */
	public def removeVertex(v:Int): void {
		Console.OUT.println("error: FullLabelAdjMatrix.removeVertex: not implemented");
	}
	
	/**
	 * add a new edge
	 */
	public def addEdge(v1:Int, v2:Int, e:E_T): void {
		Console.OUT.println("error: FullLabelAdjMatrix.addEdge: not implemented");
	}
	
	public def removeEdge(v1:Int, v2:Int): void {
		Console.OUT.println("error: FullLabelAdjMatrix.removeEdge: not implemented");
	}
}