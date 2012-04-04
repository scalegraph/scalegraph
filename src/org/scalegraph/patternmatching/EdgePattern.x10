package org.scalegraph.patternmatching;

public class EdgePattern {
	private var _srcl:Int;// source vertex label 
	private var _destl:Int;// destination vertex label
	private var _el:Int;// edge label
	
	
	public def this (var srcl:Int,var destl:Int,var el:Int){
		_srcl = srcl;
		_destl = destl;
		_el = el;
	}
	
	public def get_srcl():Int{
		return _srcl;
	}
	
	public def get_destl():Int{
		return _destl;
	}
	
	public def get_el():Int{
		return _el;
	}
	
	public def equals(var ep:EdgePattern){
		if(_srcl == ep.get_srcl() 
				&& _destl == ep.get_destl()
				&& _el == ep.get_el()){
			return true;
			
		}
		else{
			return false;
		}
				
	}
}