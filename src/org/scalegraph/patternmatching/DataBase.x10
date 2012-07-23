package org.scalegraph.patternmatching;

import x10.util.ArrayList;
import x10.util.ListIterator;
import x10.util.HashMap;
import x10.util.Pair;
import x10.util.Box;
import x10.util.HashSet;
import x10.util.Random;
import x10.util.Timer;
import x10.util.Map;
import x10.lang.Iterator;
import x10.util.Set;
import org.scalegraph.graph.AttributedGraph;
import org.scalegraph.graph.Vertex;
import org.scalegraph.graph.Edge;


public class DataBase {

	private var _ext_map:HashMap[Int,HashSet[Pair[Int,Int]]] = new HashMap[Int,HashSet[Pair[Int,Int]]]();
	//!< it remembers for each label, what are the possible other label at the other end of an edge (also store the edge label)
		// about ext_map, key is vertex label and value is a list that stores pair(vertex label,edgelabel)
	private var _edge_info:HashMap[Pair[Pair[Int,Int],Int],Pair[ArrayList[Int],Int]] = new HashMap[Pair[Pair[Int,Int],Int],Pair[ArrayList[Int],Int]](); //!< store information for all edges.
		// about _edge_info, key is edgepattern and value is pair(list that stores graph number(id) that has the edge pattern same to the map key, max number of edge occurances in each graph)	
	private var _graph_store:ArrayList[Pattern] = new ArrayList[Pattern]();  //!< store all the graph patterns
	private var _minsup:Int = 0; //!< store minimum support
	private val subiso:Subiso = new Subiso();
	
	public def this(val attrglist:ArrayList[AttributedGraph]){
		var graph_no:Int = 0;
		var i:Int = 0;
		
		while (true) {
			var local_map:HashMap[Pair[Pair[Int,Int],Int],Int] = new HashMap[Pair[Pair[Int,Int],Int],Int]();
			var ret_val:Int = this.read_next(attrglist, graph_no, local_map); 
			vat_and_freq_update(local_map, graph_no);
			if (ret_val == -1) break;
			graph_no++;
		}
		Console.OUT.println("total graph in database:" + _graph_store.size());
		
	}
	
	private def read_next(val attrglist:ArrayList[AttributedGraph],var graph_no:Int,var local_map:HashMap[Pair[Pair[Int,Int],Int],Int]):Int{
		var debug:Int = 0;
				
		
		if(graph_no == attrglist.size()){
			return -1;
		}
		else if (attrglist(graph_no) == null){
			return -1;
		}
		
		//Console.OUT.println("loading graph no:" + graph_no);
		
		// loading vertex label set from Attributed graph. 
		var vertArray:Array[Vertex] = attrglist(graph_no).getVertexList();
		var vlabels:ArrayList[Int] = new ArrayList[Int](vertArray.size);
		
		for(var i:Int=0; i< vertArray.size;i++){
			vlabels(i) = vertArray(i).getAttribute("vattrib2").getValue() as Int;
		}
		
		//loading edge label set from Attributed graph and using them to make a graph pattern.
		var pat:Pattern = new Pattern(vlabels);
		
		
		
		for(item1 in vertArray){
			var fromId:Int = vertArray(item1).getAttribute("id").getValue() as Int;
			var fromLabel:Int = vertArray(item1).getAttribute("vattrib2").getValue() as Int;
			var listOfEdges:Array[Edge] = attrglist(graph_no).getEdgesByVertexId(fromId).toArray();
			/* useful for debugging
			for(item2 in listOfEdges){
				Console.OUT.print(listOfEdges(item2) + ",");
			}
			Console.OUT.println();
			*/
			
			
			for(item2 in listOfEdges){
				var toId:Int = listOfEdges(item2).getTo().getAttribute("id").getValue() as Int;

				var toLabel:Int =listOfEdges(item2).getTo().getAttribute("vattrib2").getValue() as Int;
				
				var eLabel:Int = listOfEdges(item2).getAttribute("eattrib1").getValue() as Int;

				//Console.OUT.println("fromId:" + fromId + " fromLabel:" + fromLabel + " toId:" + toId + " toLabel:" + toLabel + " elabel:" + eLabel);
				//Console.OUT.println(listOfEdges(item2).toString());
				
				if (fromId != toId){
					// when get edgelist from Attributedgraph indicated source vatex id may included in toId 
					pat.add_edge(fromId,toId,eLabel);
					
					this.ext_map_insert(fromLabel, toLabel, eLabel);
					var e:Pair[Pair[Int,Int],Int] = (fromLabel < toLabel)? new Pair(Pair(fromLabel, toLabel), eLabel) : new Pair(Pair(toLabel, fromLabel), eLabel);

					var s:Box[Int] = local_map.get(e);
					if(s == null){
						local_map.put(e,1);

					}
					else{
						local_map.put(e,s.value + 1);
					}
				}
				
				
			}
			
		}
		Console.OUT.println("from database");
		
		val x = pat.get_edges();
		Console.OUT.println("edge labels:");
		for(i in x){
			Console.OUT.println(i);
		}
		
		//Console.OUT.println("pattern matrix:");
		//Console.OUT.println(pat.get_matrix().toString());
		_graph_store.add(pat);
		
		return 1;
	}
	
	private def vat_and_freq_update(var local:HashMap[Pair[Pair[Int,Int],Int],Int],var graph_no:Int){
		var lentrylist:Set[Map.Entry[Pair[Pair[Int,Int],Int],Int]]=local.entries();
		for(cit in lentrylist){
			val ret:Boolean = _edge_info.containsKey(cit.getKey());
			
			if(ret == false){
				var vat:ArrayList[Int] = new ArrayList[Int]();
				vat.add(graph_no);
				_edge_info.put(cit.getKey(), Pair(vat, cit.getValue()));
			}
			else{  // info about this edge exist
				var info:Box[Pair[ArrayList[Int],Int]] = _edge_info.get(cit.getKey()); 
				info.value.first.add(graph_no);
				if (cit.getValue() > info.value.second) { // update max frequency of the edge pattern
					_edge_info.put(cit.getKey(),Pair(info.value.first,cit.getValue()));
				}
				
			}
		}

	}
	
	private def ext_map_insert(val vl1:Int, val vl2:Int, val el:Int) :void{
		
		var it:Box[HashSet[Pair[Int,Int]]] = _ext_map.get(vl1);
		if (it == null) {
			val nbrs:HashSet[Pair[Int,Int]] = new HashSet[Pair[Int,Int]]();
			nbrs.add(Pair(vl2 as Int, el as Int)); 
			_ext_map.put(vl1, nbrs);
		}
		else {
			it.value.add(Pair(vl2 as Int, el as Int));
		}
		if (vl1 == vl2) return;
		// now doing the same for the other end (NOTE: for directed you need to do only one)
		it = _ext_map.get(vl2);
		if (it == null) {
			var nbrs:HashSet[Pair[Int,Int]] = new HashSet[Pair[Int,Int]]();
			nbrs.add(Pair(vl1 as Int , el as Int)); 
			_ext_map.put(vl2, nbrs);
		}
		else {
			it.value.add(Pair(vl1 as Int, el as Int));
		}
	}
	
	public def set_minsup(val minsup:Int){
		
		if (minsup > _graph_store.size()) {	
			assert(false):"minimum suppport is greater than database size; No pattern is frequent";
		}
		_minsup = minsup;
	}

	public def remove_infrequent_edges(){
		// identifying infrquent edges
		var entry:Set[Map.Entry[Pair[Pair[Int,Int],Int],Pair[ArrayList[Int],Int]]] = _edge_info.entries();
		for(cit in entry){
			if(cit.getValue().first.size() < _minsup){
				var e:Pair[Pair[Int,Int],Int] = cit.getKey();
				var vl1:Int = e.first.first;
				var vl2:Int = e.first.second;
				var el:Int = e.second;
				_edge_info.remove(e);
				var it:Box[HashSet[Pair[Int,Int]]]=_ext_map.get(vl1);
				if(it == null){
					assert(false):"ERROR: this v-label should have been found";
				}
				var ngbr:HashSet[Pair[Int,Int]] = it.value;
				var removed_cnt:Boolean = ngbr.remove(Pair(vl2,el));
				if(removed_cnt == false){
					assert(false):("ERROR: this edge (" + vl1 + "," + vl2 + "," + el + ") should have been found");
				}
				if(vl1 == vl2) continue;
				it = _ext_map.get(vl2);
				if(it == null){
					assert(false):"ERROR: this v-label should have been found";
				}
				var ngbr2:HashSet[Pair[Int,Int]] = it.value;
				removed_cnt = ngbr2.remove(Pair(vl1,el));
				if(removed_cnt == false){
					assert(false):("ERROR: this edge (" + vl1 + "," + vl2 + "," + el + ") should have been found");
				}
			}
			else{
				
			}
		}

		Console.OUT.println("level one frequent:" + _edge_info.size());
		
		val x = _edge_info.entries();
		Console.OUT.println("_edge_info" );
		for(i in x){
			Console.OUT.println(i.getKey().toString() + " " +i.getValue().toString());
		}
		val y = _ext_map.entries();
		Console.OUT.println("_ext_map" );
		for(i in y){
			Console.OUT.println(i.getKey().toString());
			val z =i.getValue();
			for(j in z){
				Console.OUT.println(j.toString());
			}
		}
	}
	
	
	public def get_a_random_freq_edge():Pair[Pair[Int,Int],Int]{
		val total:Int = _edge_info.size();
		val prob = new ArrayList[Double](total + 1);
		prob(0) = 1.0 / total;
		for(var i:Int = 1;i < total;i++){
			prob(i) = prob(i-1) + 1.0 / total; 
		}
		assert(prob(total-1)<=1.00001);
		prob(total) = 1;
		
		var idx:Int = 1;
		do{
			val random = new Random(Timer.milliTime());
			val r = random.nextDouble();
			var x:Int;
			for(x = 0;x < total;x++){
				if(prob(x) >= r){
					break;
				}
			}
			idx = x;
		}while(idx == total);
		var ep:Pair[Pair[Int,Int],Int] = Pair(Pair(-1 as Int,-1 as Int),-1 as Int);
		val it:Iterator[Map.Entry[Pair[Pair[Int,Int],Int],Pair[ArrayList[Int],Int]]] = _edge_info.entries().iterator();
		for(var i:Int = 0 ;i <= idx;i++){
			ep = it.next().getKey();
		}
		return ep;
	}
	
	
	public def get_edge_vat(var edge:Pair[Pair[Int,Int],Int]):ArrayList[Int]{
		Console.OUT.println("get edge vat method");
		val t = _edge_info.entries();
		/*
		for(i in t){
			val s = i.getValue().first;
			Console.OUT.println("key is " + i.getKey().toString());
			for (j in s){
				Console.OUT.println("vat is " + j);

			}
		}
		 * */
		
		var x:Box[Pair[ArrayList[Int],Int]] = _edge_info.get(edge);
		if(x != null){
			return x.value.first;
		}
		return new ArrayList[Int]();//return dummy data
	}
	
	public def get_minsup():Int{
		return _minsup;
	}
	
	public def get_all_edge_info():HashMap[Pair[Pair[Int,Int],Int],Pair[ArrayList[Int],Int]]{
		return _edge_info;
	}

	
	public def get_neighbors(var src_v:Int):HashSet[Pair[Int,Int]]{
		var cit:HashSet[Pair[Int,Int]] = _ext_map.get(src_v).value;
			// about cit element of first is destination vertex label and second is edge label 
		return cit;
	}
	
	public def get_freq(var e:Pair[Pair[Int,Int],Int]):Int{
		var cit:Box[Pair[ArrayList[Int],Int]] = _edge_info.get(e);
		if (cit != null) {
			return cit.value.second;
		}
		return -1;
	}

	
	public def get_exact_sup_from_super_pat_vat(var pat:Pattern):Boolean{
		var mset:ArrayList[Pair[Pair[Int,Int],Int]] = pat.get_edges();
		var prev:Pair[Pair[Int,Int],Int] = mset.getFirst();
		var sup_list:ArrayList[Int] = get_edge_vat(prev);
		
		var out_list:ArrayList[Int] = new ArrayList[Int]();
		for(cit in mset) {
			// cout << "Inside this for loop:" << endl;
			if (prev.equals(cit) == false) {
				prev = cit;
				val its_vat:ArrayList[Int] = get_edge_vat(prev);
				vat_join(its_vat, sup_list, out_list);
				sup_list = out_list; 
				out_list.clear();
			}
		}
		
		val cur_vat:ArrayList[Int] = pat.get_vat();
		
		var it2:ListIterator[Int] = cur_vat.iterator();
		var it3:ListIterator[Int] = null;
		for (it in sup_list) {
			var s:Int = it2.previousIndex();
			for(;s < cur_vat.size();s++){
				if(cur_vat(s) >= cur_vat(it2.previousIndex())){
					it3 = cur_vat.iteratorFrom(s);
					break;
				}
			}
			if(s >= cur_vat.size()){
				it3 = null;
			}
			if (it3 == null || cur_vat(it3.previousIndex()) != it) {  // not exists
				var database_pat:Pattern = _graph_store(it);
				if (database_pat.is_super_pattern(pat) == true) {
					out_list.add(it); 
				}
			}
			it2 = it3;	
	
		}
		
		for (var i:Int=0; i<out_list.size(); i++) {
			var database_pat:Pattern = _graph_store(out_list(i));
			var m:Matrix = new Matrix(pat.size(), database_pat.size());
			pat.get_matrix().matcher(database_pat.get_matrix(), m);
			var ret_val:Boolean = subiso.UllMan_backtracking(pat.get_matrix(), database_pat.get_matrix(), m ,false);
			if (ret_val == true){
				// cout << "adding " << out_list[i] << " to vatlist" << endl;
				pat.add_tid_to_vat(out_list(i));
			}
		}
		
		val c_vat:ArrayList[Int] = pat.get_vat();
		
		pat.set_sup_status(0);
		
		if (c_vat.size() >= _minsup) {
			pat.set_freq();
			return true;
		}
		else {
			return false;
		}
		
	}

	
	public def vat_join(val v1:ArrayList[Int],val v2:ArrayList[Int], var out_list:ArrayList[Int]):void {
		var i:Int=0,j:Int=0;
		while (i<v1.size() && j<v2.size()) {
			if (v1(i) < v2(j)) {
				i++; 
			}
			else if(v2(j) < v1(i)) { 
				j++;
			}
			else {
				out_list.add(v1(i));
				i++;j++;
			}
		}
	}
	
	public def get_exact_sup_optimal(var pat:Pattern):Boolean{
		var sup_list:ArrayList[Int] = new ArrayList[Int]();
		val its_vat:ArrayList[Int] = pat.get_vat();
		for (it in its_vat) {
			var database_pat:Pattern = _graph_store(it);
			if (database_pat.is_super_pattern(pat) == false)  continue;
			sup_list.add(it); 
		}
		
		var max_sup_possible:Int = sup_list.size();
		if (max_sup_possible < _minsup) return false;
		
		
	
		var temp:ArrayList[Int] = new ArrayList[Int](sup_list.size());
		for (var i:Int =0; i<max_sup_possible; i++) {
			var database_pat:Pattern = _graph_store(sup_list(i));
			var m:Matrix = new Matrix(pat.size(), database_pat.size());
			
	
			(pat.get_matrix()).matcher((database_pat.get_matrix()),m);
			var ret_val:Boolean = subiso.UllMan_backtracking((pat.get_matrix()), (database_pat.get_matrix()), 
					m, false);
			if (ret_val == false)  {
				
				var t:Int = max_sup_possible-1-i+temp.size();
				if (t<_minsup) {
					return false;
				}
			}
			else {
				temp.add(sup_list(i));  
			}
		}
		pat.set_vat(temp); 
		pat.set_sup_status(0);
		pat.set_freq();
		
		
		return true;// need to modify
	}
	
}