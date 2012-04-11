package org.scalegraph.patternmatching;


import org.scalegraph.graph.PlainGraph;
import x10.util.Random;
import x10.util.Timer;
import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.Box;


public class RandamWalk {// random walk on pattern space

	private var _maxiter:Int = 0;
	private var _last:Pattern = null;//<! store last node of the random walk.
	private var _pf:PatternFactory = null;
	private var _node_map:HashMap[String,LatticeNode] = new HashMap[String,LatticeNode]();//<! store all lattice node.
	private var _iso:Isomorphism = new Isomorphism();
	private var _freq_cnt:HashMap[String,Int] = new HashMap[String,Int]();// key is CanonicalCode represented in String,and value is frequency.
	
	public def this(var d:DataBase,var iter:Int){
		_last = null;
		_pf = new PatternFactory(d);
		_maxiter = iter;
	}
	
	public def initialize():LatticeNode{//make new Lattice Node contains the graph pattern that is consist of only one frequent edge, before walk
		var p:Pattern = _pf.get_one_random_one_edge_frequent_pattern();
		
		var cc:Canonicalcode = _iso.check_isomorphism(p);
		p.set_canonical_code(cc);
		if (p.get_is_frequent()==false) {
			assert(false):("ERROR:this pattern is infrquent\n");
		}
		var ln:LatticeNode = create_lattice_node(p);
		process_node(ln);
		return ln;
	}
	
	
	public def walk(var current:LatticeNode,var iter:Int){
		var step:Int = 1;
	
		while(true){
			process_node(current);
			if(current.getneighbors().size() == 0){// if current has no neighbors return and start over again.
				return 0;
			}
			
			var p:Pattern = current.getpattern();
			if(iter >= _maxiter){ //if iter over the maxiter that was designate, then finish.
				return 1;
			}
			
			
			
			if(step >= 10){ // assuming after 10 steps, the walk mixes to uniformity
				iter++;
				var cc:String = p.get_canonical_code().to_string();
				var freq:Box[Int] = _freq_cnt.get(cc);
				if (freq != null){
					val x:Int = freq.value + 1;
					_freq_cnt.remove(cc);
					_freq_cnt.put(cc,x);
				}
				else{
					_freq_cnt.put(cc,1);
				}
				
			}
			
			var next:LatticeNode = getnext(current);
			_last = p;
			current = next;
			step++;
			
		}
		
	}
	
	private def getnext(var current:LatticeNode):LatticeNode{
		val total:Int = current.getneighbors().size();
		val prob = new Array[Double](total + 1);
	
	
		prob(0) = current.getneighbor_prob()(0);
		for(var i:Int = 1;i<total;i++){
			prob(i)=prob(i-1)+current.getneighbor_prob()(i);
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
		
		return current.getneighbors()(idx);
	}
	
	private def process_node(var n:LatticeNode){
		if (n.getis_processed() == true) return;
		
		val p:Pattern = n.getpattern();
		assert(p.get_sup_ok() == 0);
		
		var neighbors:ArrayList[Pattern] = new ArrayList[Pattern]();
		_pf.get_freq_super_patterns(p, neighbors);
		_pf.get_sub_patterns(p, neighbors);
		
		for (var i:Int=0; i<neighbors.size(); i++) {
			var one_neighbor:Pattern = neighbors(i);
			var its_degree:Int =  _pf.get_super_degree(one_neighbor) + _pf.get_sub_degree(one_neighbor);
			
			var prob:Double = 1.0 / (its_degree>neighbors.size()? its_degree : neighbors.size());
			var ln:LatticeNode = create_lattice_node(one_neighbor);
			n.getneighbors().add(ln);
			n.getneighbor_prob().add(prob);
			
			var cc:Canonicalcode = _iso.check_isomorphism(p);
			one_neighbor.set_canonical_code(cc);
		}
		n.setis_processed(true);
	}

	
	private def create_lattice_node(var p:Pattern):LatticeNode{
		var cc:Canonicalcode = _iso.check_isomorphism(p);
		p.set_canonical_code(cc);
		var min_dfs_cc:String = cc.to_string(); // defined temporarily to avoid error in coding
		var node:LatticeNode = exists(min_dfs_cc);
		if (node == null) {  // new pattern
			node = new LatticeNode(p);
			node.setis_processed(false);
			insert_lattice_node(min_dfs_cc, node);
		}
		else {
			p = node.getpattern();
		}
		return node;
	}
	
	private def exists (var p:String):LatticeNode{
		val it:LatticeNode = _node_map.get(p).value;
		return it;
	}
	
	private def insert_lattice_node(var p:String, var ln:LatticeNode):void {
		_node_map.put(p, ln);
	}
}