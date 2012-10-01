package org.scalegraph.patternmatching; 
import x10.util.ArrayList;
import x10.util.Pair;
import x10.util.Box;
import x10.util.HashMap;
import x10.util.HashSet;

public class Isomorphism {
	
	public def check_isomorphism(val cand_pat:Pattern):Canonicalcode{
		var e:Cell[Int] = new Cell[Int](0); //least edge label
		var src_v:Cell[Int] = new Cell[Int](0);//least source vertex label
		var dest_v:Cell[Int] = new Cell[Int](0);//least destination label
		var ids:ArrayList[Pair[Int,Int]] = new ArrayList[Pair[Int,Int]]();//ids with least labelled edges

		//Console.OUT.println("check the canonical code is known or not");
		if (cand_pat.get_code_known() == true) {
			//Console.OUT.println("retrun canonical code that is already known");
			return cand_pat.get_canonical_code();
			
		}
		
		//Console.OUT.println("candidate pattern's canonical code is not known yet, so start to make new code");

		if (cand_pat.size() == 0) {
			assert(false):("ERROR: null patterns are not allowed");
		}
		//Console.OUT.println("cand_pat != 0");

		src_v() = cand_pat.label(0);  // src_v has the label of the least vertex in dfs walk
		//Console.OUT.println("finish get start vatex label");

		for(var j:Int = 0;j<cand_pat.size();j++){
			if(cand_pat.get_matrix()(0,j)==1){
				dest_v = cand_pat.label(j);// dest_v has the label of the second least vertex in dfs walk
				e = cand_pat.get_edge_label(0,j);
				break;
			}
		}
		//Console.OUT.println("if dest < src replace them");

		if (dest_v() < src_v()) {// if dest_v is smaller then src_v,swap. 
			var ch:Int = src_v();
			src_v = dest_v;
			dest_v = ch;
		}
		//Console.OUT.println("finish get sample edge's data that includes one particular vatex label");

		
		iso_startup(cand_pat, src_v, dest_v, e, ids);
		//Console.OUT.println("finish iso start up");

		// Each member of this vector corresponds to a minimal canonical code.
		// At the end of the minimal() method, this vector should have a single
		// element, which is *the* canonical code.
		var new_codes:ArrayList[Canonicalcode] = new ArrayList[Canonicalcode]();
		
		/*! This vector has one-to-one correspondence with the new_codes
		 * vector. Each element in this vector contains the set of edges
		 * that have already been added to the new_code, so that when
		 * we try to extend this new_code we know which edges we should
		 * not try. Each five_tuple in the set is represented in terms 
		 * of the pattern ids.
		 */
		var covered_edges:ArrayList[HashSet[FiveTuple]] = new ArrayList[HashSet[FiveTuple]]();

		//Console.OUT.println("create separate codes for each pair in ids");
		//Console.OUT.println("ids size:" + ids.size());

		// Create separate codes for each pair in ids.
		// Each such pair shall have to be tested for isomorphism.
		for(var i:Int=0; i<ids.size(); i++) {
			//Console.OUT.println("repeat times:" + i);
			// Add a minimal edge to new_codes.
			var cc_tuple:FiveTuple = new FiveTuple(0, 1, cand_pat.label(ids(i).first), 
					e(), cand_pat.label(ids(i).second));
			//Console.OUT.println("made five tuple");
			var new_cc:Canonicalcode = new Canonicalcode(cc_tuple, ids(i).first, ids(i).second);
			//Console.OUT.println("made new canonicalcode");

			new_codes.add(new_cc);
			//Console.OUT.println("complete add new code");

			// Correspondingly update the covered_edges vector.
			var g_tuple:FiveTuple = new FiveTuple(ids(i).first, ids(i).second, cc_tuple.li,
					cc_tuple.lij, cc_tuple.lj);
			//Console.OUT.println("made new tupple");

			var s:HashSet[FiveTuple] = new HashSet[FiveTuple]();
			s.add(g_tuple);
			//Console.OUT.println("added new hash set to store covered_edges");
			covered_edges.add(s);
			//Console.OUT.println("finish add covered_edges");

		}
		//Console.OUT.println("start select minimal");

		// Each of the above new codes, which are equivalent are passed to the
		// minimal routine. Minimal routine will add more edges 
		// and remove some of the candidate minimal codes until it comes up 
		// with a single min canonical code.
		minimal(new_codes, covered_edges, cand_pat);
		//Console.OUT.println("finish minimal");
		
		assert(new_codes(0) != null):"new code is null";
		cand_pat.set_canonical_code(new_codes(0));
		return new_codes(0);
	}
	
	private def iso_startup(var cand_pat:Pattern,var src_v:Cell[Int],var dest_v:Cell[Int],var e:Cell[Int],var ids:ArrayList[Pair[Int,Int]]):void{
		
		var swaped:Boolean = false;
		
		for(var i:Int = 0;i < cand_pat.get_matrix().getSize();i++){
			for(var j:Int = 0;j < i;j++){
				if(cand_pat.get_matrix()(i,j) == 1){
					var edge:Pair[Int,Int] = Pair(i,j);
					swaped=false;
					var v1:Int = cand_pat.label(edge.first); 
					var v2:Int = cand_pat.label(edge.second);
					var this_edge:Int =  cand_pat.get_edge_label(edge.first, edge.second);
					if (v1 > v2) {
						val x = v1;
						v1 = v2;
						v2 = x;
						swaped=true;
					}
					if(v1 > src_v()){// v1 should not sourece vartex
						continue;
					}
					if(v1 < src_v()){ // new source vertex found
						ids.clear();
						src_v() = v1; dest_v() = v2; e() = this_edge;
						if(src_v() == dest_v()){
							ids.add(Pair(edge.second, edge.first));     
							ids.add(edge);
						}
						else {
							if(swaped == true){
								ids.add(Pair(edge.second, edge.first));
							}
							else{
								ids.add(edge);
							}
						}
						continue;
					}
					if (v1 == src_v()) { // if v1 may be source vartex
						var e2:Int = this_edge;
						if (e2 > e()) continue;
						if (e2 < e()) { // new edge label found
							ids.clear();
							e() = e2;
							dest_v() = v2;
							if (src_v() == dest_v()) {
								ids.add(Pair(edge.second, edge.first));     
								ids.add(edge);
							}
							else {
								if (swaped == true){
									ids.add(Pair(edge.second, edge.first));
								}
								else{
									ids.add(edge);
								}
							}
						}
						if (e2 == e()) { // if e2 may be edge label of least label set
							if (v2 > dest_v()) continue;
							if (v2 < dest_v()) {  // new destination vertex found
								ids.clear(); 
								dest_v() = v2;
								if (src_v() == dest_v()) {
									ids.add(Pair(edge.second, edge.first));     
									ids.add(edge);
								}
								else {
									if (swaped == true){
										ids.add(Pair(edge.second, edge.first));
									}
									else
										ids.add(edge);
								}
							}
							else {  // all identically match
								if (src_v() == dest_v()) {
									ids.add(Pair(edge.second, edge.first));     
									ids.add(edge);
								}
								else {
									if (swaped == true){
										ids.add(Pair(edge.second, edge.first));
									}
									else{
										ids.add(edge);
									}
								}
							}
						}
					}
					
				}				
			}
			
		}
		
	}
			
			
	private def minimal(var new_codes:ArrayList[Canonicalcode],var covered_edges:ArrayList[HashSet[FiveTuple]],var cand_pat:Pattern):void{
		var go_ahead:Boolean = true;
		var s:Int = 0;
		// When none of the candidate codes can be extended,
		// its time to stop.
		while(go_ahead) {
			//Console.OUT.println("repeat time in minimal : " + s);
			s++;
			var orig_sz:Int = new_codes.size();
			//Console.OUT.println("orig_sz : " + orig_sz);
			var ret:Boolean = false;
			
			for(var i:Int = 0;i < orig_sz; i++) {
				var did_extend:Boolean = extend(new_codes, covered_edges, cand_pat, i);
				//Console.OUT.println("did_extend : "+did_extend + " repeat time : " + i);
				ret = (ret | did_extend);				
				//Console.OUT.println("ret : " + ret + " did_extend : "+did_extend);
			}
			
			// Even if one of the extend() succeeds then go_ahead.
			go_ahead = ret;
			
			// Check if there is one (or more) that is minimal. Remove the others.
			// check_minimality(new_codes, covered_edges);
			//
			
			// deleate codes that is not actually minimal from candidate codes
			for(var i:Int=0; i < new_codes.size()-1; i++) {
				//Console.OUT.println("deleate roop times : " + i);
				for(var j:Int=i+1; j < new_codes.size();) {
					
					if(new_codes(i) < new_codes(j)) {
						// deleate new_codes(j)
						if(j != new_codes.size()-1){
							var cc:Canonicalcode = new_codes.getLast();
							var ft:HashSet[FiveTuple] = covered_edges.getLast();
							
							new_codes(j) = cc;
							covered_edges(j) = ft;
						}
						new_codes.removeLast();
						covered_edges.removeLast();	
					}
					else if(new_codes(j) < new_codes(i)){
						// deleate new_codes(i);
						var cc:Canonicalcode = new_codes.getLast();
						var ft:HashSet[FiveTuple] = covered_edges.getLast();
						
						new_codes(i) = cc;
						covered_edges(i) = ft;
						
						new_codes.removeLast();
						covered_edges.removeLast();
						
						j=i+1;
					}
					else {
						j++;
					}
				}
				
			}
		}
	}
	
	private def extend(var new_codes:ArrayList[Canonicalcode],var covered_edges:ArrayList[HashSet[FiveTuple]],var cand_pat:Pattern,var idx:Int):Boolean{
		// extend new codes till all edges are covered
		
		// Denotes, if last edge in new_code was a fwd edge.
		var is_last_fwd:Boolean = (new_codes(idx).getCode().getLast().i < new_codes(idx).getCode().getLast().j);
		
		// If last edge is forward, last_vid=_j, otherwise 
		// last_vid = _i. 
		// This is the vid to which edge shall be added.
		var last_vid:Int;
		if(is_last_fwd){
			last_vid = new_codes(idx).getCode().getLast().j;
		}
		else{
			last_vid = new_codes(idx).getCode().getLast().i;
		}
		var g_src_id:Int=new_codes(idx).gid(last_vid);
		var g_src_lbl:Int = cand_pat.label(g_src_id);
		
		// This is the set of candidate edges, from g_src_id.
		var cand_edges:ArrayList[FiveTuple] = new ArrayList[FiveTuple]();
		
		// This is required for the forward edges. Since new
		// forward edges are not present in the canonical code
		// the gid() method returns -1. But we need the gid to
		// put it in covered_edges. So need to save it.
		var cid_gid_map:HashMap[Int,Int] = new HashMap[Int,Int]();
		
		// Negative ids are assigned so that they can be used 
		// with cid_gid_map. This is ultimately used to assign
		// gid at a later point.
		var curr_fwd_cid:Int = -1;
		
		do {
			curr_fwd_cid = -1;
			cid_gid_map.clear();
			for(var i:Int = 0;i < cand_pat.size();i++){
				if(cand_pat.get_matrix()(g_src_id,i) == 1){
					var g_dest_id:Int = i;
					var g_dest_lbl:Int = cand_pat.label(g_dest_id);
					var g_e_lbl:Int = cand_pat.get_edge_label(g_src_id,g_dest_id);
					
					// The call to cid returns -1 if the g_dest_id
					// is not in new_codes[idx]. Which means that
					// g_dest_id has not been added to the canonical code.
					var c_dest_id:Int = new_codes(idx).cid(g_dest_id);
					if (c_dest_id == -1) {
						c_dest_id = curr_fwd_cid;
						cid_gid_map.put(curr_fwd_cid,g_dest_id);
						curr_fwd_cid--;
					}
					
					val ftuple = new FiveTuple(g_src_id, g_dest_id, g_src_lbl, g_e_lbl, g_dest_lbl);
					val btuple = new FiveTuple(g_dest_id, g_src_id, g_dest_lbl, g_e_lbl, g_src_lbl);
					
					
					//Console.OUT.println("coverd tuple");
					//Console.OUT.println("size:" + covered_edges(idx).size());
					var iscontain:Boolean = false;
					/*
					Console.OUT.println("covered_edges(idx):");
					val x = covered_edges(idx);
					for(t in x){
						Console.OUT.println(t.toString());
					}
					*/
					iscontain = !((covered_edges(idx).contains(ftuple) == false) 
							&& (covered_edges(idx).contains(btuple) == false));
					/*for(s in covered_edges(idx)){
						//Console.OUT.println(s.toString());
						if(s.equals(ftuple) || s.equals(btuple)){
							iscontain = true;
						}
						
					}*/
					
					//Console.OUT.println("iscontain : " + iscontain);
					
					/*
					Console.OUT.println("checking tuple");
					Console.OUT.println(ftuple.toString());
					Console.OUT.println(btuple.toString());
					 * */
					
					if(iscontain == false) {		
						var new_tuple:FiveTuple = new FiveTuple(last_vid, c_dest_id, g_src_lbl, g_e_lbl, g_dest_lbl);
						
						cand_edges.add(new_tuple);
					}
					else{
						// if need, print out debug code
					}	
				}
			}
			
			
			//Console.OUT.println("cand_edges.size : " + cand_edges.size());
			
			// No extensions can be made from this node.
			if(cand_edges.size() == 0) {
				// TODO: This process can be speeded up by passing a set of vertices
				// for which all the out_edges have been explored.
				last_vid--;
				//Console.OUT.println("last_vid : " + last_vid);
				if(last_vid == -1) {  // All vertices have been explored but still no candidates.
					return false;
				} else {
					g_src_id=new_codes(idx).gid(last_vid);
					g_src_lbl = cand_pat.label(g_src_id);
				}
			}
		}while(cand_edges.size() == 0 && last_vid > -1);
		
		
		// sort candidate edges
		for(var i:Int = 0; i < (cand_edges.size()-1);i++){
			for(var j:Int = i + 1;j < cand_edges.size();j++){
				if (cand_edges(i) < cand_edges(j)){
					var s:FiveTuple = cand_edges(j);
					cand_edges(j) = cand_edges(i);
					cand_edges(i) = s;
				}
			}
		}
		
		var z:Int = 0;
		// Insert all the back edges.
		for(; z<cand_edges.size();z++){
			// The second condition in the && is present since we assign
			// negative weights to potential fwd edges.
			if((cand_edges(z).j < cand_edges(z).i) && cand_edges(z).j >= 0) {
				new_codes(idx).append(cand_edges(z));
				
				var src_id:Int = new_codes(idx).gid(cand_edges(z).i);
				var dest_id:Int = new_codes(idx).gid(cand_edges(z).j);
				covered_edges(idx).add(new FiveTuple(src_id, dest_id, cand_edges(z).li, 
						cand_edges(z).lij, cand_edges(z).lj));

			}
			else{
				break;
			}
		}
		
		// No forward edges.
		if(z == cand_edges.size()) {
			return true;
		}
		
		// For each minimal (after the sorting) forward edge that is 
		// identical, create a new canonical_code and insert it into 
		// new_codes.
		
		var first_fwd:Int = z;
		var first:Boolean = true;
		var new_code_copy:Canonicalcode = new_codes(idx).clone();
		var cov_edges_copy:HashSet[FiveTuple] = covered_edges(idx).clone();
		
		do {
			
			// First of the identical fwd edges.
			if(first) {

				var cc_it:FiveTuple = new_codes(idx).getCode().getLast();
				var is_last_fwd2:Boolean=(cc_it.i<cc_it.j);    // denotes, if last edge in new_code was a fwd edge
				var c_last_vid:Int=(is_last_fwd2)? cc_it.j: cc_it.i;        // vid to which edge shall be added  

				var c_new_dest_id:Int = c_last_vid+1; // Assign an id to the forward edge.
				var g_new_dest_id:Int = -1, g_new_src_id:Int = -1;
				g_new_src_id = new_codes(idx).gid(cand_edges(z).i);

				var itr:Box[Int] = cid_gid_map.get(cand_edges(z).j);
				if (itr != null){
					g_new_dest_id = itr.value;
				}
				else{
						Console.OUT.println( "Could not find " + cand_edges(z).j + " in cid_gid_map.");
				}
				new_codes(idx).append(new FiveTuple(cand_edges(z).i, c_new_dest_id, cand_edges(z).li,
						cand_edges(z).lij, cand_edges(z).lj), 
						g_new_src_id, g_new_dest_id);

				covered_edges(idx).add(new FiveTuple(g_new_src_id, g_new_dest_id, cand_edges(z).li,
						cand_edges(z).lij, cand_edges(z).lj));
			
				// The first fwd edge is inserted, subsequent insertions
				// will require inserting a new member into new_codes.
				first=false;

			} else {
				// This is the second (and onward) identical fwd edges.
				// For this one we need to add a new member to new_codes and 
				// likewise to covered_edges.
				
				// Copy the original new_codes and the covered_edges.
				var new_code_cand:Canonicalcode = new_code_copy.clone();
				var cov_edges_cand:HashSet[FiveTuple] = cov_edges_copy;

				// TODO: Can take these few lines out of the if..else.
				var cc_it:FiveTuple = new_codes(idx).getCode().getLast();
				var is_last_fwd2:Boolean=(cc_it.i<cc_it.j);    // denotes, if last edge in new_code was a fwd edge
				var c_last_vid:Int=(is_last_fwd2)? cc_it.j: cc_it.i;        // vid to which edge shall be added  

				
				var c_new_dest_id:Int = c_last_vid+1; // Assign an id to the forward edge.
				var g_new_dest_id:Int = -1, g_new_src_id:Int = -1;
				g_new_src_id = new_codes(idx).gid(cand_edges(z).i);
				var itr:Box[Int] = cid_gid_map.get(cand_edges(z).j);
				
				if(itr != null){
					g_new_dest_id = itr.value;
				}
				else{
					// if need print the debug code
				}

				new_code_cand.append(new FiveTuple(cand_edges(z).i, c_new_dest_id, cand_edges(z).li,
						cand_edges(z).lij, cand_edges(z).lj),
						g_new_src_id, g_new_dest_id);

				cov_edges_cand.add(new FiveTuple(g_new_src_id, g_new_dest_id, cand_edges(z).li,
						cand_edges(z).lij, cand_edges(z).lj));

				// Birth of more new codes. Add to new_codes and covered_edges.
				new_codes.add(new_code_cand);

				covered_edges.add(cov_edges_cand);
			}
			
			z++;
			
		} while(z < cand_edges.size() && cand_edges(z) == cand_edges(first_fwd));
			
		return true;
	}
	
	
	private def check_minimality(var new_codes:ArrayList[Canonicalcode],var covered_edges:ArrayList[HashSet[FiveTuple]]){
	
		for(var i:Int=0; i < new_codes.size()-1; i++) {
			for(var j:Int=i+1; j < new_codes.size();) {

				if(new_codes(i) < new_codes(j)) {

					// j is not the last element, so copy
					// the last element to j. In effect 
					// deleting the thing at index j.
					if(j != new_codes.size()-1) {
						var cc:Canonicalcode = new_codes.getLast();
						var ft:HashSet[FiveTuple] = covered_edges.getLast();

						new_codes(j) = cc;
						covered_edges(j) = ft;
					} else {
						new_codes.removeLast();
						covered_edges.removeLast();
					}

				} else if(new_codes(j) < new_codes(i)) {

					var cc:Canonicalcode = new_codes.getLast();
					var ft:HashSet[FiveTuple] = covered_edges.getLast();

					new_codes(i) = cc;
					covered_edges(i) = ft;

					new_codes.removeLast();
					covered_edges.removeLast();

					j = i+1;

				} else {
					j++;
				}
			}
		}
		
	
	}
	
}

