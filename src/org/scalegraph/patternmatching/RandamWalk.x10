package org.scalegraph.patternmatching;



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
		Console.OUT.println("complete get one random one edge frequen pattern");
		var cc:Canonicalcode = _iso.check_isomorphism(p);
		Console.OUT.println("complete check iso");
		p.set_canonical_code(cc);
		Console.OUT.println("complete set canonical code");

		if (p.get_is_frequent()==false) {
			assert(false):("ERROR:this pattern is infrquent\n");
		}


		var ln:LatticeNode = create_lattice_node(p);
		Console.OUT.println("complete create lattice node");
		process_node(ln);
		Console.OUT.println("complete process_node");
		Console.OUT.println("complete inityalizing ranndom walk");
		
		return ln;
	}
	
	
	public def walk(var current:LatticeNode,var iter:Int):Boolean{
		var step:Int = 1;
		Console.OUT.println("walking step : " + step);

		while(true){
			Console.OUT.println("walking step : " + step);
			process_node(current);
			if(current.getneighbors().size() == 0){// if current has no neighbors return and start over again.
				return false;
			}
			
			var p:Pattern = current.getpattern();
			if(iter >= _maxiter){ //if iter over the maxiter that was designate, then finish.
				return true;
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
		Console.OUT.println("check the node is processed or not");
		if (n.getis_processed() == true) return;
		Console.OUT.println("the node is not processed yet, begini process");
		val p:Pattern = n.getpattern();
		assert(p.get_sup_ok() == 0);
		
		Console.OUT.println("not yet get super pattern");

		/*
		cout << "Current pattern:\n";
		cout << *p;
		*/

		var neighbors:ArrayList[Pattern] = new ArrayList[Pattern]();
		_pf.get_freq_super_patterns(p, neighbors);
		Console.OUT.println("get frequent super pattern");
		_pf.get_sub_patterns(p, neighbors);
		Console.OUT.println("get frequent sub pattern");

		for (var i:Int=0; i<neighbors.size(); i++) {
			Console.OUT.println("repeat time : " + i);
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
		Console.OUT.println("start create lattice node");
		var cc:Canonicalcode = _iso.check_isomorphism(p);

		Console.OUT.println("complete check iso");
		p.set_canonical_code(cc);
		Console.OUT.println("complete set code");
		var min_dfs_cc:String = cc.to_string(); // defined temporarily to avoid error in coding
		Console.OUT.println("complete convert code to string");
		var node:LatticeNode = exists(min_dfs_cc);
		Console.OUT.println("complete chedking lattice node is exist or not");
		if (node == null) {  // new pattern
			node = new LatticeNode(p);
			node.setis_processed(false);
			insert_lattice_node(min_dfs_cc, node);
		}
		else {
			p = node.getpattern();
		}
		Console.OUT.println("complete create lattice node");
		return node;
	}
	
	private def exists (var p:String):LatticeNode{
		val it:Box[LatticeNode] = _node_map.get(p);
		return (it == null)? null : it.value ;
	}
	
	private def insert_lattice_node(var p:String, var ln:LatticeNode):void {
		_node_map.put(p, ln);
	}
}