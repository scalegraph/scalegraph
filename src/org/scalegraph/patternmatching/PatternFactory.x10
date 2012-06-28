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
		Console.OUT.println("before get edge randomly");
		var edge:EdgePattern = this.d.get_a_random_freq_edge();
		Console.OUT.println("before make edge pattern form one random edge");
		var cand_pat:Pattern = make_single_edge_pattern(edge.get_srcl(), edge.get_destl(),edge.get_el());
		return cand_pat;
	}
	
	public def make_single_edge_pattern(var srcl:Int,var destl:Int,var el:Int):Pattern{
		var vlabels:ArrayList[Int] = new ArrayList[Int]();
		if (srcl < destl) { 
			vlabels.add(srcl);
			vlabels.add(destl);
		}
		else {
			vlabels.add(destl);
			vlabels.add(srcl);
		}
		var p:Pattern = new Pattern(vlabels);
		p.add_edge(0,1,el);
		var edge:EdgePattern = new EdgePattern(srcl,destl,el);
		var vat:ArrayList[Int] = this.d.get_edge_vat(edge);
		p.set_vat(vat);
		p.set_sup_status(0);
		var minsup:Int = this.d.get_minsup();
		if (vat.size() >= minsup)
			p.set_freq();
		return p;
	}
	
	
	
	public def get_freq_super_patterns(val pat:Pattern,var super_patterns:ArrayList[Pattern]):void{
		var edge:Pattern = null;
		var cand_pat:Pattern = null;
		
		var this_edge:EdgePattern;
		var minsup:Int = this.d.get_minsup();
		
		if (pat.size() == 0) {
			var eim:HashMap[EdgePattern,Pair[ArrayList[Int],Int]] = this.d.get_all_edge_info();
			val cit:Iterator[Map.Entry[EdgePattern,Pair[ArrayList[Int],Int]]] = eim.entries().iterator();
			
			while (cit.hasNext()) {
				val x:Map.Entry[EdgePattern,Pair[ArrayList[Int],Int]] = cit.next();
				var p:Pattern = make_single_edge_pattern(x.getKey().get_srcl(), x.getKey().get_destl(), x.getKey().get_el());
				super_patterns.add(p);
			}
			return;
		}
		
		
		for (var vid:Int =0; vid<pat.size(); vid++) {  // extentions from all vertices
			// vid is a vertex id stored in matrix of this pattern
			var src_v:Int=pat.label(vid);
			var nbrs:HashSet[Pair[Int,Int]]= this.d.get_neighbors(src_v);
				// about nbrs element of first is destination label and second is edeg label
			
			
			var nit:Iterator[Pair[Int,Int]] = nbrs.iterator();
			while(nit.hasNext()==true){// trying extension on a vertex for all posible neighbor edge type
				// first get a one neighbor edge pattern
				x:Pair[Int,Int] = nit.next();
				var dest_v:Int = x.first;
				var e_label:Int = x.second;
				
				if (src_v < dest_v){
					this_edge = new EdgePattern(src_v,src_v,e_label);
				}
				else {
					this_edge = new EdgePattern(dest_v,src_v,e_label);
				}
				var frequency:Int = pat.edge_counter(this_edge);
				var max_freq:Int = this.d.get_freq(this_edge);
				if (frequency > max_freq) {
					continue;
				}
				
				edge = make_single_edge_pattern(src_v, dest_v, e_label);
				
				// trying fwd-extension from this vertex
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
						super_patterns.add(cand_pat);
					}
					else {
						cand_pat = null;
					}
				}
				
				// trying all the possible back-edges
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
				
				// try to join the backedge
				for (i=0; i < dest_vids.size(); i++) {
					cand_pat = pat.clone();
					cand_pat.add_edge(vid,dest_vids(i), e_label);
					cand_pat.join_vat(edge);
					if (cand_pat.get_vat().size() < minsup) {
						cand_pat = null;
					}
					else {
						var freq:Boolean = this.d.get_exact_sup_optimal(cand_pat);
						if (freq == true) { // is the pattern frequent?

							super_patterns.add(cand_pat);
						}
						else {
							cand_pat = null;
						}
					}
					
				}// finish join backedge
			}// finish extension about one vertex in this pattern
		}// finish extension about all vartex in this pattern
		
		 // sometimes few neighbors are actually unique, need to check that
		 var codes:HashSet[String] = new HashSet[String]();
		 var i:Int = 0;
		 while (i < super_patterns.size()) {
			 iso.check_isomorphism(super_patterns(i));
			 var cc_str:String = super_patterns(i).get_canonical_code().to_string();
		 
			 
			
			 
			 if (codes.add(cc_str) == false) {
				 super_patterns.removeAt(i);
			 }
			 else {
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
		return clone;
	}
	
	public def get_super_degree(var pat:Pattern):Int{
		var edge:Pattern = null;
		var cand_pat:Pattern = null;
		var ret_val:Int = 0;
		
		var this_edge:EdgePattern;
		var minsup:Int = this.d.get_minsup();
		
		if (pat.size() == 0) {
			var eim:HashMap[EdgePattern,Pair[ArrayList[Int],Int]] = this.d.get_all_edge_info();
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
					this_edge = new EdgePattern(src_v,src_v,e_label);
				}
				else {
					this_edge = new EdgePattern(dest_v,src_v,e_label);
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