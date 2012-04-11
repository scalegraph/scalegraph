package org.scalegraph.patternmatching;

import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.Box;

public class Canonicalcode {
	
	private var _dfs_code:ArrayList[FiveTuple] = new ArrayList[FiveTuple]();
	private var _cid_to_gid:HashMap[Int,Int] = new HashMap[Int,Int](); // code id to candidate graph id
	private var _gid_to_cid:HashMap[Int,Int] = new HashMap[Int,Int](); // candidate graph id to code id
	
	public def this(var ft:FiveTuple, var gi:Int,var gj:Int) {
		_dfs_code.add(ft);
		_cid_to_gid.put(ft._i, gi);
		_cid_to_gid.put(ft._j, gj);
		_gid_to_cid.put(gi, ft._i);
		_gid_to_cid.put(gj, ft._j);
	}
	
	public def getCode():ArrayList[FiveTuple]{
		return _dfs_code;
	}
	
	public def cid(var gi:Int):Int {
		var it:Box[Int]=_gid_to_cid.get(gi);
		if(it==null) {
			return -1;
		}
		return it.value;
	}
	
	public def gid(var ci:Int):Int {
		var it:Box[Int]=_cid_to_gid.get(ci);
		if(it==null) {
			return -1;
		}
		return it.value;
	}
	
	public def to_string():String{
		if (_dfs_code.size() == 0) return "null";
		var t_str:String = null;

		for(var i:Int=0; i < _dfs_code.size(); i++) {
			if(i == 0)
				t_str = t_str + _dfs_code(i);
			else
				t_str = t_str + ":" +  _dfs_code(i);
		}
		
		return t_str;
	}
	
	private def push_back(var tuple:FiveTuple) {
		_dfs_code.add(tuple);
	}
	// append a dfs code, just by inserting this tuple at the end
	public def append(var tuple:FiveTuple){
		push_back(tuple);
	}
	// A member function to append a dfs code and create mapping between code id and graph id. 
	// override
	public def append(var tuple:FiveTuple, var gi:Int,var gj:Int){
		push_back(tuple);
		_cid_to_gid.put(tuple._i, gi);
		_cid_to_gid.put(tuple._j, gj);
		_gid_to_cid.put(gi, tuple._i);
		_gid_to_cid.put(gj, tuple._j);
	}
	
	public operator this < (rhs:Canonicalcode): Boolean{
		var i:Int=0;
		var j:Int=0;
		while(i<_dfs_code.size() && j<rhs._dfs_code.size()) {
			if(_dfs_code(i) < rhs._dfs_code(j))  // comparing individual edge
				return true;
			i++;
			j++;
		}
		return false; 
	}
	
}