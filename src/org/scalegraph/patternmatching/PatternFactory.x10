package org.scalegraph.patternmatching;

import x10.util.ArrayList;
import x10.util.Pair;
import x10.util.HashMap;
import x10.util.HashSet;
import x10.util.Map;
import x10.util.Set;
import x10.lang.Iterator;



public class PatternFactory {
	private var d:DataBase=null;
	private val iso:Isomorphism = new Isomorphism();
	
	public def this(var d:DataBase){
		this.d = d;
	}
	
	
	
	public def get_one_random_one_edge_frequent_pattern():Pattern{
		Console.OUT.println("get_one_random_one_edge_frequent_pattern");
		//Console.OUT.println("before get edge randomly");
		var edge:Pair[Pair[Int,Int],Int] = this.d.get_a_random_freq_edge();
		//Console.OUT.println("before make edge pattern from one random edge");
		Console.OUT.println("gotten random edge : " + edge.toString());
		var cand_pat:Pattern = make_single_edge_pattern(edge.first.first, edge.first.second,edge.second);
		//Console.OUT.println("complete to get one random edge");
		return cand_pat;
	}
	
	public def make_single_edge_pattern(var srcl:Int,var destl:Int,var el:Int):Pattern{
		var vlabels:ArrayList[Int] = new ArrayList[Int](2);
		//Console.OUT.println("srcl : " + srcl + " destl : " + destl + " el : " + el);
		if (srcl < destl) { 
			//Console.OUT.println("srcl < dest");
			vlabels.add(srcl);
			vlabels.add(destl);
		}
		else {
			//Console.OUT.println("dest <= srcl");
			vlabels.add(destl);
			vlabels.add(srcl);
		}
		
		//Console.OUT.println("make new pattern");
		//Console.OUT.println("vlabels" + vlabels.toString());
		var p:Pattern = new Pattern(vlabels);
		//Console.OUT.println("add edge");
		p.add_edge(0,1,el);
		//Console.OUT.println("make new edge pattern");
		//Console.OUT.println("from PatternFactory");
		val x = p.get_edges();
		/*
		Console.OUT.println("edge label:");
		for(i in x){
			Console.OUT.println(i);
		}
		*/
		//Console.OUT.println("pattern matrix:");
		//Console.OUT.println(p.get_matrix().toString());
		
		var edge:Pair[Pair[Int,Int],Int] = new Pair(Pair(vlabels(0),vlabels(1)),el);
		//Console.OUT.println("complete make new edge pattern");
		val vat:ArrayList[Int] = this.d.get_edge_vat(edge);
		assert(vat != null):"failure to get edge vat";
		p.set_vat(vat);
		p.set_sup_status(0);
		//Console.OUT.println("set minsup");
		var minsup:Int = this.d.get_minsup();
		//Console.OUT.println("check the pattern is frequent or not");
		if (vat.size() >= minsup){
			p.set_freq();
		}
		//Console.OUT.println("complete to make single edge pattern");
		return p;
	}
	
	
	
	public def get_freq_super_patterns(var pat:Pattern,var super_patterns:ArrayList[Pattern]):void{
		Console.OUT.println("get_freq_super_patterns");
		var edge:Pattern = new Pattern();
		var cand_pat:Pattern = new Pattern();
		
		var this_edge:Pair[Pair[Int,Int],Int] = Pair(Pair(-1 as Int,-1 as Int),-1 as Int);
		var minsup:Int = this.d.get_minsup();
		
		Console.OUT.println("pattern size:" + pat.size());
		Console.OUT.println("	super_pattern size:" + super_patterns.size());
		
		if (pat.size() == 0) {
			val eim:HashMap[Pair[Pair[Int,Int],Int],Pair[ArrayList[Int],Int]] = this.d.get_all_edge_info();
			val eimentry = eim.entries();
			for (cit in eimentry) {
				var p:Pattern = make_single_edge_pattern(cit.getKey().first.first, cit.getKey().first.second, cit.getKey().second);
				super_patterns.add(p);
			}
			return;
		}
		
		Console.OUT.println("coplete initilize");
		Console.OUT.println("number of super pattern:" + super_patterns.size());

		Console.OUT.println("	super_pattern size after initialize:" + super_patterns.size());

		for (var vid:Int =0; vid<pat.size(); vid++) {  // extentions from all vertices
			// vid is a vertex id stored in matrix of this pattern
			var src_v:Int=pat.label(vid);
			Console.OUT.println("complete get source vertex label");
			Console.OUT.println("vid : " + vid);
			Console.OUT.println("vlabel : " + src_v);
			Console.OUT.println("pattern size : " + pat.size());
			var nbrs:HashSet[Pair[Int,Int]]= this.d.get_neighbors(src_v);
				// about nbrs element of first is destination label and second is edeg label
			Console.OUT.println("complete get neighbors");
			Console.OUT.println("nbrs:");
			for(i in nbrs){
				Console.OUT.println(i.toString());
			}
			
			for(x in nbrs){// trying extension on a vertex for all posible neighbor edge type
				// first get a one neighbor edge pattern
				Console.OUT.println("neighbor:"+x.toString());
				var dest_v:Int = x.first;
				var e_label:Int = x.second;
				
				if (src_v < dest_v){
					this_edge = new Pair(Pair(src_v,dest_v),e_label);
				}
				else {
					this_edge = new Pair(Pair(dest_v,src_v),e_label);
				}
				var frequency:Int = pat.edge_counter(this_edge);
				var max_freq:Int = this.d.get_freq(this_edge);
				if (frequency > max_freq) {
					continue;
				}
				
				edge = make_single_edge_pattern(src_v, dest_v, e_label);
				Console.OUT.println("	super_pattern size before check forward edge:" + super_patterns.size());
				Console.OUT.println("start checking forward edge");
				// trying fwd-extension from this vertex
				cand_pat = pat.clone();
				var lvid:Int = cand_pat.add_vertex(dest_v);
				cand_pat.add_edge(vid, lvid, e_label);
				cand_pat.join_vat(edge);
				Console.OUT.println("cand_pat.get_vat().size():"+cand_pat.get_vat().size());
				if (cand_pat.get_vat().size() < minsup) {
					cand_pat = null;
				}
				else {
					var freq:Boolean = this.d.get_exact_sup_optimal(cand_pat);
					Console.OUT.println("sup_optimal:" + freq);
					if (freq == true) { // is the pattern frequent?
						super_patterns.add(cand_pat);
					}
					else {
						cand_pat = null;
					}
				}
				Console.OUT.println("	super_pattern size before checking backedge:" + super_patterns.size());
				Console.OUT.println("start checking backedge");
				// trying all the possible back-edges
				// first get information(id of destination vertex) of possible backedges
				var dest_vids:ArrayList[Int] = new ArrayList[Int]();
				pat.get_vids_for_this_label(dest_v, dest_vids);
				var i:Int = 0;
				Console.OUT.println("number of dest_vids:" + dest_vids.size());
				Console.OUT.println("dest_vids:" + dest_vids.toString());
				while (i < dest_vids.size()) {
					if (dest_vids(i) <= vid || pat.edge_exist(vid, dest_vids(i))){
						dest_vids.removeAt(i);
					}
					else{ 
						i++;
					}
				}
				Console.OUT.println("number of dest_vids:" + dest_vids.size());

				Console.OUT.println("join back edge");
				// try to join the backedge
				for (i=0; i < dest_vids.size(); i++) {
					Console.OUT.println("a");
					cand_pat = pat.clone();
					Console.OUT.println("b");
					cand_pat.add_edge(vid,dest_vids(i), e_label);
					Console.OUT.println("c");
					cand_pat.join_vat(edge);
					Console.OUT.println("number of dest_vids" + dest_vids.size());
					if (cand_pat.get_vat().size() < minsup) {
						cand_pat = null;
					}
					else {
						var freq:Boolean = this.d.get_exact_sup_optimal(cand_pat);
						Console.OUT.println("sup_optimal:" + freq);
						if (freq == true) { // is the pattern frequent?

							super_patterns.add(cand_pat);
						}
						else {
							cand_pat = null;
						}
					}
					
				}// finish join backedge
				
				Console.OUT.println("complete check backedge");
			}// finish extension about one vertex in this pattern
		}// finish extension about all vartex in this pattern
		Console.OUT.println("	super_pattern size before remove same pattern:" + super_patterns.size());
		 // sometimes few neighbors are actually unique, need to check that
		 var codes:HashSet[String] = new HashSet[String]();
		 Console.OUT.println("a");
		 var i:Int = 0;
		 Console.OUT.println("b");
		 while (i < super_patterns.size()) {
			 iso.check_isomorphism(super_patterns(i));
			 Console.OUT.println("c");
			 Console.OUT.println("super_patterns size:" + super_patterns.size());
			 Console.OUT.println("i:" + i);
			 var pattern:Pattern = super_patterns(i);
			 Console.OUT.println("x");
			 var cc:Canonicalcode = pattern.get_canonical_code();
			 Console.OUT.println("is_codekonwn:" + pattern.get_code_known());
			 Console.OUT.println("code stattus : " + cc);
			 var cc_str:String = cc.to_string();
		 
			 Console.OUT.println("d");
			
			 
			 if (codes.contains(cc_str) == true) {
				 super_patterns.removeAt(i);
				 Console.OUT.println("et");
			 }
			 else {
				 codes.add(cc_str);
				 Console.OUT.println("ef");
				 i++;
			 }
		 }
	}
	
	
	public def get_sub_patterns(val pat:Pattern,var sub_patterns:ArrayList[Pattern]):void{
		// if pattern size is too small the pattern don't have sub pattern
		if (pat.size() <= 2) {
			// it has no sub puttern
			// if want to use null pattern,please implement
			return;
		}
		pat.find_removable_edges();
		val re:ArrayList[Pair[Int,Int]] = pat.get_removable_edges();
		var codes:HashSet[String] = new HashSet[String]();
		
		
		for(var i:Int = 0;i < re.size();i++){
			var sub_pat:Pattern = pattern_with_edge_removed(pat,re(i).first,re(i).second);
			iso.check_isomorphism(sub_pat);
			var cc_str:String = sub_pat.get_canonical_code().to_string();
			
			
			if(codes.add(cc_str) == false){
				sub_patterns.add(sub_pat);
			}	
		}
	}
	
	public def pattern_with_edge_removed(var p:Pattern,var a:Int,var b:Int):Pattern{
		var clone:Pattern = p.clone();
		var edge:Pair[Pair[Int,Int],Int] = clone.remove_edge(a,b);
		this.d.get_exact_sup_from_super_pat_vat(clone);
	
		return clone;
	}
	
	public def get_super_degree(var pat:Pattern):Int{
		var edge:Pattern = null;
		var cand_pat:Pattern = null;
		var ret_val:Int = 0;
		
		var this_edge:Pair[Pair[Int,Int],Int];
		var minsup:Int = this.d.get_minsup();
		
		assert(false):"get_super_degree";

		
		if (pat.size() == 0) {
			var eim:HashMap[Pair[Pair[Int,Int],Int],Pair[ArrayList[Int],Int]] = this.d.get_all_edge_info();
			return eim.size();
		}
		
		for (var vid:Int =0; vid<pat.size(); vid++) {  // extentions from all vertices and counting
			// vid is a vertex id stored in matrix of this pattern
			var src_v:Int=pat.label(vid);
			var nbrs:HashSet[Pair[Int,Int]] = this.d.get_neighbors(src_v);
			// about nbrs element of first is destination label and second is edeg label
			
			
			var nit:Iterator[Pair[Int,Int]] = nbrs.iterator();
			while(nit.hasNext()==true){// trying extension on a vertex for all posible neighbor edge type and couting
				// first get a one neighbor edge pattern
				x:Pair[Int,Int] = nit.next();
				var dest_v:Int = x.first;
				var e_label:Int = x.second;
			
				if (src_v < dest_v){
					this_edge = new Pair(Pair(src_v,src_v),e_label);
				}
				else {
					this_edge = new Pair(Pair(dest_v,src_v),e_label);
				}
				var frequency:Int = pat.edge_counter(this_edge);
				var max_freq:Int = this.d.get_freq(this_edge);
				if (frequency > max_freq) {
					continue;
				}
				
				edge = make_single_edge_pattern(src_v, dest_v, e_label);
				
				// trying fwd-extension from this vertex and counting
				cand_pat = pat.clone();	
				var lvid:Int = cand_pat.add_vertex(dest_v);
				cand_pat.add_edge(vid, lvid, e_label);
				cand_pat.join_vat(edge);
				if (cand_pat.get_vat().size() < minsup) {
					cand_pat = null;
				}
				else {
					var freq:Boolean = this.d.get_exact_sup_optimal(cand_pat);
					if (freq == true) { // is the pattern frequent?
						cand_pat = null;
						ret_val++;
					}
					else {
						cand_pat = null;
					}	
				}
				
				// trying all the possible back-edges and counting
				// first get information(id of destination vertex) of possible backedges
				var dest_vids:ArrayList[Int] = new ArrayList[Int]();
				pat.get_vids_for_this_label(dest_v, dest_vids);
				var i:Int = 0;
				while (i < dest_vids.size()) {
					if (dest_vids(i) <= vid || pat.edge_exist(vid, dest_vids(i))){
						dest_vids.removeAt(i);
					}
					else{ 
						i++;
					}
				}
			
				// next try to join the backedge	
				for (i=0; i < dest_vids.size(); i++) {
					cand_pat = pat.clone();
					cand_pat.add_edge(vid,dest_vids(i), e_label);
					cand_pat.join_vat(edge);	
					if (cand_pat.get_vat().size() < minsup) {
						cand_pat = null;	
					}	
					else {
						var freq:Boolean = this.d.get_exact_sup_optimal(cand_pat);
						if (freq == true) { // is the pattern frequent
							cand_pat = null;;
							ret_val++;
						}
						else {
							cand_pat = null;
						}
					}
				}// finish counting about joined backedge
			}// finish counting about extentiond one vertex in this pattern
		}// finish extension about all vartex in this pattern
		
		return ret_val;
	}
	
	public def get_sub_degree(var pat:Pattern):Int{
		if (pat.size() == 0) {
			assert(false):("ERROR: we are not allowing any null pattern, exiting");
		}
		if (pat.size() <= 2) {
			return 1;
		}
		pat.find_removable_edges();
		val re:ArrayList[Pair[Int,Int]] = pat.get_removable_edges();
		return re.size();
	}
	
	
	
	
}
