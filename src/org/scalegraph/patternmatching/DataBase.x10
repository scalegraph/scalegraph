package org.scalegraph.patternmatching;

import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.Pair;
import x10.util.Box;
import x10.util.HashSet;
import x10.util.Random;
import x10.util.Timer;
import x10.util.Map;
import x10.lang.Iterator;

public class DataBase {

	private var _ext_map:HashMap[Int,HashSet[Pair[Int,Int]]] = new HashMap[Int,HashSet[Pair[Int,Int]]]();
	//!< it remembers for each label, what are the possible other label at the other end of an edge (also store the edge label)
		// about ext_map, key is vertex label and value is a list that stores pair(vertex label,edgelabel)
	private var _edge_info:HashMap[EdgePattern,Pair[ArrayList[Int],Int]] = new HashMap[EdgePattern,Pair[ArrayList[Int],Int]](); //!< store information for all edges.
		// about _edge_info, key is edgepattern and value is pair(list that stores graph number(id) that has the edge pattern same to the map key, max number of edge occurances in each graph)	
	private var _graph_store:ArrayList[Pattern] = new ArrayList[Pattern]();  //!< store all the graph patterns
	private var _minsup:Int = 0; //!< store minimum support
	
	public def get_a_random_freq_edge():EdgePattern{
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
		var ep:EdgePattern = null;
		val it:Iterator[Map.Entry[EdgePattern,Pair[ArrayList[Int],Int]]] = _edge_info.entries().iterator();
		for(var i:Int = 0 ;i < idx;i++){
			ep = it.next().getKey();
		}
		return ep;
	}
	
	
	public def get_edge_vat(var edge:EdgePattern):ArrayList[Int]{
		var x:Box[Pair[ArrayList[Int],Int]] = _edge_info.get(edge);
		if(x != null){
			return x.value.first;
		}
		return null;
	}
	
	public def get_minsup():Int{
		return _minsup;
	}
	
	public def get_all_edge_info():HashMap[EdgePattern,Pair[ArrayList[Int],Int]]{
		return _edge_info;
	}

	
	public def get_neighbors(var src_v:Int):HashSet[Pair[Int,Int]]{
		var cit:HashSet[Pair[Int,Int]] = _ext_map.get(src_v).value;
			// about cit element of first is destination vertex label and second is edge label 
		return cit;
	}
	
	public def get_freq(var e:EdgePattern):Int{
		var cit:Box[Pair[ArrayList[Int],Int]] = _edge_info.get(e);
		if (cit != null) {
			return cit.value.second;
		}
		return -1;
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
			var ret_val:Boolean = UllMan_backtracking((pat.get_matrix()), (database_pat.get_matrix()), 
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
		
		
		assert(false):"not implemented yet";
		// not implemented yet
		return true;// need to modify
	}
	
}