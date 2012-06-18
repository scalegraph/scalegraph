package org.scalegraph.patternmatching;

public class EdgePattern {
	private var _srcl:Int = 0;// source vertex label 
	private var _destl:Int = 0;// destination vertex label
	private var _el:Int = 0;// edge label
	

	
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
	
	
}