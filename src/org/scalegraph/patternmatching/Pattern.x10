package org.scalegraph.patternmatching;


import x10.util.ArrayList;
import x10.util.ListIterator;
import x10.util.Pair;


public class Pattern {
	private var _matrix:FullLabelAdjMatrix = null;
	private var _sup_ok:Int = 0; //!< 0=exact, +1: Super-Set of exact VAT, -1: Sub-Set of exact VAT
	private var _is_frequent:Boolean = false;
	private var _code_known:Boolean = false;
	private var _status_known:Boolean = false;
	private var _vat:ArrayList[Int] = new ArrayList[Int]();//!< contains the graph ids that has at least these edges
	private var _edges:ArrayList[Pair[Pair[Int,Int],Int]] = new ArrayList[Pair[Pair[Int,Int],Int]](); //!< store edge pattern of all edges
	private var _removable_edges:ArrayList[Pair[Int, Int]];  //!< removing these edges keeps the pattern connected. represented in two vertces id.
	private var _canonical_code:Canonicalcode;// modify after how to implemente cannonical_code 
	private var _removable_edge_known:Boolean = false;
	
	
	public def this(){
		_matrix = new FullLabelAdjMatrix(); //+Miyuru : Initialize the FullLabelAdjMatrix
		_sup_ok = -1;
		_is_frequent = false;
		_code_known=false;
		_status_known=false;
	}
	
	public def this(var labels:ArrayList[Int]){
		_matrix = new FullLabelAdjMatrix(labels);
		_sup_ok = -1;
		_is_frequent = false;
		_code_known = false;
		_status_known=false;
	}
	
	
	public def add_edge(var i:Int,var j:Int,var e:Int):void{
		//Console.OUT.println("start add edge");
		_matrix.addEdge(i,j,e);
		//Console.OUT.println("edge added to matrix");

		var v1:Int = _matrix.getLabel(i);
		var v2:Int = _matrix.getLabel(j);
		var edge:Pair[Pair[Int,Int],Int] = new Pair(Pair(-1 as Int,-1 as Int),-1 as Int);

		//Console.OUT.println("v1:" + v1 + " v2:" + v2);
		
		if(v1 < v2){
			edge = new Pair(Pair(v1,v2),e);
		}
		else{
			edge = new Pair(Pair(v2,v1),e);
		}

		_edges.add(edge);
		_sup_ok = 1;  // super-set of exact VAT
	}
	
	public def remove_edge(val a:Int,val b:Int):Pair[Pair[Int,Int],Int]{
		var v1:Int = this.label(a);
		var v2:Int = this.label(b);
		var e:Int = _matrix.getEdgeLabel(a,b);

		_matrix.removeEdge(a,b);
		var v_pair:Pair[Int,Int] = (v1 < v2) ? Pair(v1, v2) : Pair(v2,v1);
		var edge:Pair[Pair[Int,Int],Int] = Pair(v_pair, e);
		val eit = _edges.contains(edge);
		if (eit == false) {
			assert(false):"ERROR: request for non-existent edge removal";
		}
		_edges.remove(edge);
		_sup_ok = -1; //current VAT is sub-set of exact VAT
		
		
		return edge;
	}
	
	
	public def get_matrix():FullLabelAdjMatrix{
		return _matrix;
	}
	public def set_matrix(var matrix:FullLabelAdjMatrix){
		_matrix = matrix;
	}
	
	
	public def get_sup_ok():Int{
		return _sup_ok;
	}
	public def set_sup_status(var i:Int ) {
		_sup_ok=i;
	}

	
	public def get_is_frequent():Boolean{
		return _is_frequent;
	}
	public def set_is_frequent(var frequency:Boolean){
		_is_frequent = frequency;
	}
	
	
	public def get_code_known():Boolean{
		return _code_known;
	}
	public def set_code_known(var code_known:Boolean){
		_code_known = code_known;
	}
	
	public def get_status_known():Boolean{
		return _status_known;
	}
	public def set_status_known(var status_known:Boolean){
		_status_known = status_known;
	}
	
	public def get_vat():ArrayList[Int]{
		return _vat;
	}
	public def set_vat(var vat:ArrayList[Int]){
		_vat = vat;
	}
	
	
	public def get_edges():ArrayList[Pair[Pair[Int,Int],Int]]{
		return _edges;
	}
	public def set_edges(var edges:ArrayList[Pair[Pair[Int,Int],Int]]){
		_edges = edges;
	}
	
	public def get_canonical_code():Canonicalcode{
		return _canonical_code;
	}
	public def set_canonical_code(var canonical_code:Canonicalcode){
		_canonical_code = canonical_code;
		assert(canonical_code != null):"canonical_code is null";
		set_code_known(true);
	}
	
	public def set_freq(){
		_sup_ok=0;
		_is_frequent = true;
	}
	
	public def size():Int{
		if (_matrix != null)
			return _matrix.getSize();
		else
			return 0;
	}
	
	public def label(var i:Int) {
		return _matrix.getLabel(i);
	}
	
	
	public def get_edge_label(var i:Int,var j:Int):Int{
		return _matrix.getEdgeLabel(i,j);
	}
	
	public def edge_counter(var e:Pair[Pair[Int,Int],Int]):Int{//counting how many edges same to parameter in this graph pattern
		var i:Int = 0;
		var count:Int = 0;
		for (i=0;i < _edges.size() ;i++){
			if(e.equals(_edges(i))){
				count++;
			}
		}
		return count;
	}
	
	public def add_vertex(var v:Int):Int{
		return _matrix.addVertex(v);
	}
	
	public def join_vat(var p:Pattern){// join the new edge pattern
		// not implemennted yet
		var out_vector:ArrayList[Int] = new ArrayList[Int]();
		for(var i:Int = 0;i < _vat.size();i++){
			for(var j:Int = 0;j < p.get_vat().size();j++){
				if(_vat(i).equals(p.get_vat()(j))){
					out_vector.add(_vat(i));
				}
			}
		}
		
		_vat = out_vector;
	}
	
	public def get_vids_for_this_label(var label:Int,var ret_val:ArrayList[Int]):void{
		// get id of vertices that have the label
		
		val x = _matrix.getVerticesFromLabel(label);
		for(i in x){
			ret_val.add(i);
		}
	}
	
	
	public def edge_exist(var i:Int,var j:Int):Boolean{// use id of two vertices to check existance of edge
		if(_matrix(i,j) == 0){
			return false;
		}
		else{
			return true;
		}
	}
	
	
	public def find_removable_edges():Int{
		// find removable edges and remember
		if (_removable_edge_known == true) return _removable_edges.size();
	
		for (var i:Int = 0;i < _matrix.getSize();i++) {
			for(var j:Int = 0;j < i;j++){
				if(_matrix(i,j) == 1){
					var edge:Pair[Int,Int] = Pair(i,j);
					if (! _matrix.isEssentialEdge(i,j)) {
						// cout << "edge (" << edge.first << "," << edge.second << ") is removable\n";
						_removable_edges.add(edge); 
					}
				}
			}
		}
		_removable_edge_known = true;
		return _removable_edges.size();
	}
	
	public def get_removable_edges():ArrayList[Pair[Int,Int]]{
		// return removable edes
		return _removable_edges;
	}
	
	public def clone():Pattern{
		var x:Pattern = new Pattern();
		x.set_matrix(this.get_matrix().cloneFullLabelAdjMatrix());
		x.set_sup_status(this.get_sup_ok());
		x.set_is_frequent(this.get_is_frequent());
		x.set_code_known(this.get_code_known());
		x.set_status_known(this.get_status_known());
		x.set_vat(this.get_vat().clone());
		x.set_edges(this.get_edges().clone());
		x.set_canonical_code(this.get_canonical_code());
		return x;
	}
	
	
	public def is_super_pattern(var pat:Pattern):Boolean{
		val mset:ArrayList[Pair[Pair[Int,Int],Int]] = pat.get_edges();
		var included:Boolean = true;
		for (i in mset){
			if(_edges.contains(i) == false){
				included = false;
				break;
			}
		}
		
		if (included == true) {
			return true;
		}
		else {
			return false;
		}
	}

	public def add_tid_to_vat(var tid:Int) :void {
		var it:ListIterator[Int] = _vat.iterator();
		for(;it.previousIndex()<_vat.size();it.next()){
			if(_vat(it.previousIndex()) >= tid){
				break;
			}
		}
		
		_vat.addBefore(it.previousIndex(),tid);
	}
	
}