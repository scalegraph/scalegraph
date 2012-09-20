package org.scalegraph.patternmatching;

import x10.util.ArrayBuilder;
import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.Map;
import x10.util.Set;
import x10.util.Pair;
import x10.lang.Iterator;

/**
 * full labeled adjacency matrix class for graph with labeled vertex and edge
 */
public class FullLabelAdjMatrix extends AdjMatrix {
	
	//private val entity:AdjMatrix[V_T];
	private var elabel:HashMap[Pair[Int, Int], Int];
	
	/**
	 * constructors
	 */
	//public def this(n:Int){
	//	entity = new AdjMatrix[V_T](n);
	//	elabel = null;
	//}
	
	public def this(){
		super();
		elabel = new HashMap[Pair[Int, Int], Int]();
	}
	
	public def this(labels:ArrayList[Int]){
		super(labels);
		//entity = new AdjMatrix[V_T](labels);
		elabel = new HashMap[Pair[Int, Int], Int]();
	}
	
	//public def this(m:FullLabelAdjMatrix[V_T, E_T]){
	//	this.entity = m.entity;
	//	this.elabel = m.elabel;
	//}
	
	public def getEdgeLabel(v1:Int, v2:Int): Int {
		if(v1 == v2 || v1 < 0 || this.getSize() <= v1 ||
				v2 < 0 || this.getSize() <= v2){
			assert(false):("error: FullLabelAdjMatrix.getEdgeLabel: requested edge label from invalid position");
		}
		val key = (v1 < v2) ? Pair[Int, Int](v1, v2) : Pair[Int, Int](v2, v1);
		val ret = this.elabel.get(key);
		if(ret == null){
			assert(false):("error: FullLabelAdjMatrix.getEdgeLabel: requested edge label from invalid position");

		}else{
			return ret();
		}
		return ret();
	}
	
	public def setEdgeLabel(v1:Int, v2:Int, e:Int): void {
		if(v1 == v2) return;
		val key = (v1 < v2) ? Pair[Int, Int](v1, v2) : Pair[Int, Int](v2, v1);
		val ret = this.elabel.put(key, e);
		if(ret != null){
			assert(false):("error: FullLabelAdjMatrix.setEdgeLabel: edge label insertion failed");
		}
	}
	
	/* called from only 2 places */
	public def removeVertex(v:Int): void {
		var its_degree:Int = getDegree(v);
		assert(its_degree == 0);
		var v_pairs:ArrayList[Pair[Int,Int]] = new ArrayList[Pair[Int,Int]](elabel.size());
	 	var elabels:ArrayList[Int] = new ArrayList[Int](elabel.size());

	 	val labelset:Set[Map.Entry[Pair[Int, Int], Int]] = elabel.entries();
		for(it in labelset){
			val x:Map.Entry[Pair[Int, Int], Int] = it;
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
	
	
	public def neighbors( i:Int, ret_val:ArrayList[Int]) :void {
		if (i > getSize()) {
			assert(false):"ERROR: Matrix::Requesting degree of non-existent vertex:";
		}
		for (var pos:Int = 0;pos < getSize();pos++){
			if(data(i)(pos) == 1){
			ret_val.add(pos);
			}
		}
	}
	
	
	public def matcher(val b:FullLabelAdjMatrix,M:Matrix):void{
		//Console.OUT.println("matcher");
		// match two matrix in one.
		Console.OUT.println(" matcher");
		var a:FullLabelAdjMatrix = this;
		var size1:Int = a.getSize(); 
		Console.OUT.println("matrix a:");
		Console.OUT.println(a.toString());
		Console.OUT.println(a.vlabel.toString());
		var size2:Int = b.getSize();
		Console.OUT.println("matrix b:");
		Console.OUT.println(b.toString());
		Console.OUT.println(b.vlabel.toString());
		if (size1 > size2) {
			return;
		}
		// using vertex label invariant
		for (var i:Int = 0; i < size1; i++) {
			var v1:Int = a.getLabel(i);
			for (var j:Int = 0; j < size2; j++) {
				var v2:Int = b.getLabel(j);
				if (v1 == v2) {
					M(i,j)=1;
				}
			}
		}
		
		//Console.OUT.println("complete initialize");

		var match_pair:ArrayList[Pair[Int,Int]] = new ArrayList[Pair[Int,Int]]();
		for (var i:Int = 0; i < size1; i++) {
			if (M.getRowSetCount(i)  == 0) return;
			if (M.getRowSetCount(i) == 1) continue;
			var d1:Int = a.getDegree(i); // d1 > 0
			for (var j:Int = 0; j < size2; j++) {
				if (M(i,j) == 0) continue;
				var d2:Int = b.getDegree(j); // d2 > 0
				if (d1 > d2)
					M(i,j)=0;
				else 
					match_pair.add(Pair(i,j)); 
			}
		}
		/*
		Console.OUT.println("complete check mathc_pair");
		for(i in match_pair){
			Console.OUT.println(i.toString());
		}
		 * */
		/*
		Console.OUT.println("elabel");
		val t = elabel.entries();
		for(i in t){
			Console.OUT.println("Key:" + i.getKey().toString() + " Value:" + i.getValue().toString());			
		}
		 */
		for (var idx:Int=0; idx < match_pair.size(); idx++) {
			var i:Int = match_pair(idx).first;
			var j:Int = match_pair(idx).second;
			var neighbors:ArrayList[Int] = new ArrayList[Int](); 
			a.neighbors(i, neighbors);
			var neigh_degree1:ArrayList[Int] = new ArrayList[Int]();
			var neigh_labels1:ArrayList[Pair[Int,Int]] = new ArrayList[Pair[Int,Int]]();
			
			//Console.OUT.println("complete initialize matching");
			//Console.OUT.println("neighbors size:" + neighbors.size());
			for(s in neighbors){
				//Console.OUT.println(s.toString());
			}
			//Console.OUT.println("matrix a's size:" + a.getSize());

			
			for (var k:Int=0; k < neighbors.size(); k++) {
				var d_n:Int = a.getDegree(neighbors(k));//d_n > 0
				var e_l:Int = a.getEdgeLabel(i,neighbors(k));
				neigh_labels1.add(Pair(a.getLabel(neighbors(k)), e_l));
				neigh_degree1.add(d_n); 
			}
			
			//Console.OUT.println("complete get neighbors degree and edege label");

			
			var neighbors2:ArrayList[Int] = new ArrayList[Int](); 
			b.neighbors(j, neighbors2);
			
			
			var neigh_degree2:ArrayList[Int] = new ArrayList[Int]();
			var neigh_labels2:ArrayList[Pair[Int,Int]] = new ArrayList[Pair[Int,Int]]();
			for (var k:Int=0; k < neighbors2.size(); k++) {
				var d_n:Int = b.getDegree(neighbors2(k));//d_n > 0
				var e_l:Int = b.getEdgeLabel(j,neighbors2(k));
				neigh_labels2.add(Pair(b.getLabel(neighbors2(k)), e_l));
				neigh_degree2.add(d_n); 
			}
			
			var isin:Boolean = true;
			
			for(x in neigh_degree1){
				var s:Boolean = false;
				for(y in neigh_degree2){
					if(x.equals(y)){
						s = true;
						break;
					}
				}
				if (s == false){
					isin = false;
					break;
				}
			}
			
			// first applying neighbor-label invariant
			if (isin == false) {
				// cout << "(1) setting " << i << " " << j << " to 0\n";
				M(i,j)=0;
				continue;
			}

			// now applying neighbor-degree invariant
			neigh_degree1.sort();
			neigh_degree2.sort();
			//cout << "DEGREE:\n";
			//std::copy(neigh_degree1.begin(), neigh_degree1.end(), ostream_iterator<int>(cout, " ")); cout << endl;
			//std::copy(neigh_degree2.begin(), neigh_degree2.end(), ostream_iterator<int>(cout, " ")); cout << endl;
			var k:Int = 0, l:Int = 0;
			while (k<neigh_degree1.size() && l<neigh_degree2.size()) {
				if (neigh_degree1(k) <= neigh_degree2(l)) {k++; l++;}
				else 
					break;
			}
			if (k < neigh_degree1.size()) {
				M(i, j) = 0; 
			}
		}
		
		Console.OUT.println("result of match:");
		Console.OUT.println(M.toString());
		return;
	}
	
	
	public def cloneFullLabelAdjMatrix() {
		var m:FullLabelAdjMatrix = new FullLabelAdjMatrix(this.vlabel);
		for(var i:Int = 0;i < rows;i++){
			for(var j:Int = 0;j < cols;j++){
				m(i,j) = this(i,j); 
			}
		}
		m.elabel = new HashMap[Pair[Int,Int],Int]();
		val x = this.elabel.entries();
		for(i in x){
			m.elabel.put(i.getKey(),i.getValue());
			
		}
		
		return m;
		
		
	}
}