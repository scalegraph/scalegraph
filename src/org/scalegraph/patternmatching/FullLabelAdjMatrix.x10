package org.scalegraph.patternmatching;

import x10.util.ArrayBuilder;
import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.Map;
import x10.util.Pair;
import x10.lang.Iterator;

/**
 * full labeled adjacency matrix class for graph with labeled vertex and edge
 */
public class FullLabelAdjMatrix extends AdjMatrix {
	
	//private val entity:AdjMatrix[V_T];
	private val elabel:HashMap[Pair[Int, Int], Int];
	
	/**
	 * constructors
	 */
	//public def this(n:Int){
	//	entity = new AdjMatrix[V_T](n);
	//	elabel = null;
	//}
	
	public def this(labels:ArrayList[Int]){
		super(labels);
		//entity = new AdjMatrix[V_T](labels);
		elabel = null;
	}
	
	//public def this(m:FullLabelAdjMatrix[V_T, E_T]){
	//	this.entity = m.entity;
	//	this.elabel = m.elabel;
	//}
	
	public def getEdgeLabel(v1:Int, v2:Int): Int {
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
	
	public def setEdgeLabel(v1:Int, v2:Int, e:Int): void {
		if(v1 == v2) return;
		val key = (v1 < v2) ? Pair[Int, Int](v1, v2) : Pair[Int, Int](v2, v1);
		val ret = this.elabel.put(key, e);
		if(ret == null){
			Console.OUT.println("error: FullLabelAdjMatrix.setEdgeLabel: edge label insertion failed");
		}
	}
	
	/* called from only 2 places */
	public def removeVertex(v:Int): void {
		var its_degree:Int = getDegree(v);
		assert(its_degree == 0);
		var v_pairs:ArrayList[Pair[Int,Int]] = new ArrayList[Pair[Int,Int]](elabel.size());
	 	var elabels:ArrayList[Int] = new ArrayList[Int](elabel.size());

	 	val it:Iterator[Map.Entry[Pair[Int, Int], Int]] = elabel.entries().iterator();
		while(it.hasNext()){
			val x:Map.Entry[Pair[Int, Int], Int] = it.next();
			var key:Pair[Int,Int] = x.getKey();
			var el:Int = x.getValue();
			if (key.first < v && key.second < v) {
				v_pairs.add(key); 
				elabels.add(el); 
			}
			else if (key.first < v && key.second > v) {
				v_pairs.add(Pair(key.first, key.second-1));
				elabels.add(el); 
			}
			else if (key.first > v && key.second > v) {
				v_pairs.add(Pair(key.first-1, key.second-1));
				elabels.add(el); 
			}
			else if (key.first == v || key.second == v) {
				continue;
			}
			else {
				assert(false):("ERROR: program should not come to this line");

			}
		}
		elabel.clear() ;
		var copy_v_pairs:Array[Pair[Int,Int]] = v_pairs.toArray();
		vlabel.remove(getLabel(v));
		changeAdjMatrix(getSize()-1,copy_v_pairs);
	
	}
	
	/**
	 * add a new edge
	 */
	public def addEdge(v1:Int, v2:Int, e:Int): void {
		this(v1,v2) = 1;
		this(v2,v1) = 1;
		setEdgeLabel(v1,v2,e);
	}
	
	public def removeEdge(v1:Int, v2:Int): void {
		this(v1,v2) = 0;
		this(v2,v1) = 0;
		
		// both vertex got isolated, happens only when we
		// are deleting an edge from an one-edge pattern
		if (this.data(v1).isEmpty() && this.data(v2).isEmpty()) {  
			assert(this.getSize() == 2); // we have only two vertices
			this.data.clear();
			this.vlabel.clear();
			this.elabel.clear();
			return;
		}
		var v_removed:Boolean=false;

		if (this.data(v1).isEmpty()) {
			removeVertex(v1);
			v_removed=true;
		}
		else if (this.data(v2).isEmpty()) {
			removeVertex(v2);
			v_removed=true;
		}
		if (v_removed==false) {
			var key:Pair[Int,Int];
			if(v1 < v2){
				key = new Pair[Int,Int](v1,v2);
			}
			else{
				key = new Pair[Int,Int](v2,v1);
			}
			elabel.remove(key);
		}
		Console.OUT.println("error: FullLabelAdjMatrix.removeEdge: not implemented");
	}
}