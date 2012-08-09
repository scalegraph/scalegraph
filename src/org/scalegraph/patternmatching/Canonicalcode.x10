package org.scalegraph.patternmatching;

import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.Box;
import x10.util.Set;
import x10.util.Map.Entry;


public class Canonicalcode {
	
	private var dfs_code:ArrayList[FiveTuple] = new ArrayList[FiveTuple]();
	private var cid_to_gid:HashMap[Int,Int] = new HashMap[Int,Int](); // code id to candidate graph id
	private var gid_to_cid:HashMap[Int,Int] = new HashMap[Int,Int](); // candidate graph id to code id
	
	
	public def this(){
		
	}
	
	public def this(var ft:FiveTuple, var gi:Int,var gj:Int) {
		this.dfs_code.add(ft);
		this.cid_to_gid.put(ft.i, gi);
		this.cid_to_gid.put(ft.j, gj);
		this.gid_to_cid.put(gi, ft.i);
		this.gid_to_cid.put(gj, ft.j);
	}
	
	public def clone():Canonicalcode{
		var copy:Canonicalcode = new Canonicalcode();
		copy.setCode(this.dfs_code.clone());
		var ctog:HashMap[Int,Int] = new HashMap[Int,Int]();
		var ctogentry:Set[Entry[Int,Int]] = this.cid_to_gid.entries();
		for(i in ctogentry){
			ctog.put(i.getKey(),i.getValue());
		}
		var gtoc:HashMap[Int,Int] = new HashMap[Int,Int]();
		var gtocentry:Set[Entry[Int,Int]] = this.cid_to_gid.entries();
		for(i in gtocentry){
			gtoc.put(i.getKey(),i.getValue());
		}
		copy.setCidToGid(ctog);
		copy.setGidToCid(gtoc);
		return copy;
	}
	
	private def setCidToGid(var cid_to_gid:HashMap[Int,Int]){
		this.cid_to_gid = cid_to_gid;
	}
	
	private def setGidToCid(var gid_to_cid:HashMap[Int,Int]){
		this.gid_to_cid = gid_to_cid;
	}
	public def setCode(var code:ArrayList[FiveTuple]){
		this.dfs_code = code;
	}
	
	public def getCode():ArrayList[FiveTuple]{
		return this.dfs_code;
	}
	
	public def cid(var gi:Int):Int {
		var it:Box[Int]=this.gid_to_cid.get(gi);
		if(it==null) {
			return -1;
		}
		return it.value;
	}
	
	public def gid(var ci:Int):Int {
		var it:Box[Int]=this.cid_to_gid.get(ci);
		if(it==null) {
			return -1;
		}
		return it.value;
	}
	
	public def to_string():String{
		if (this.dfs_code.size() == 0) return "null";
		var t_str:String = "";

		for(var i:Int=0; i < this.dfs_code.size(); i++) {
			if(i == 0)
				t_str = t_str + this.dfs_code(i);
			else
				t_str = t_str + ":" +  this.dfs_code(i);
		}
		
		return t_str;
	}
	
	private def push_back(var tuple:FiveTuple) {
		this.dfs_code.add(tuple);
	}
	// append a dfs code, just by inserting this tuple at the end
	public def append(var tuple:FiveTuple){
		push_back(tuple);
	}
	// A member function to append a dfs code and create mapping between code id and graph id. 
	// override
	public def append(var tuple:FiveTuple, var gi:Int,var gj:Int){
		push_back(tuple);
		this.cid_to_gid.put(tuple.i, gi);
		this.cid_to_gid.put(tuple.j, gj);
		this.gid_to_cid.put(gi, tuple.i);
		this.gid_to_cid.put(gj, tuple.j);
	}

	public operator this < (rhs:Canonicalcode): Boolean{
		var i:Int=0;
		var j:Int=0;
		while(i<this.dfs_code.size() && j<rhs.dfs_code.size()) {
			if(this.dfs_code(i) < rhs.dfs_code(j))  // comparing individual edge
				return true;
			i++;
			j++;
		}
		return false; 
	}
	
}