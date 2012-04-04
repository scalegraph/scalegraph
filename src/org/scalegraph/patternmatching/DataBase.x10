package org.scalegraph.patternmatching;

import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.Pair;
import x10.util.Set;
import x10.util.Box;


public class DataBase {

	private var _ext_map:HashMap[Int,Set[Pair[Int,Int]]];  //!< it remembers for each label, what are the possible other label at the other end of an edge (also store the edge label)
		// about ext_map, key is vertex label and value is a pair(vertex label,edgelabel)
	private var _edge_info:HashMap[EdgePattern,Pair[ArrayList[Int],Int]]; //!< store information for all edges.
		// about _edge_info, key is edgepattern and value is pair(list that stores graph number(id) that has the edge pattern same to the map key, max number of edge occurances in each graph)	
	private var _graph_store:ArrayList[Pattern];  //!< store all the graph patterns
	private var _minsup:Int; //!< store minimum support
	
	public def get_a_random_freq_edge():EdgePattern{
		return null;
	}
	
	
	public def get_edge_vat(var edge:EdgePattern):ArrayList[Int]{
	
		return null;
	}
	
	public def get_minsup():Int{
		return 0;
	}
	
	public def get_all_edge_info():HashMap[EdgePattern,Pair[ArrayList[Int],Int]]{
		return _edge_info;
	}
	
	public def get_neighbors(var src_v:Int):Set[Pair[Int,Int]]{
		var cit:Set[Pair[Int,Int]] = _ext_map.get(src_v).value;
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
		return true;// need to modify
	}
	
}