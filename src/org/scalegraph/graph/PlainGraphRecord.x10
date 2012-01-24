package org.scalegraph.graph;

import x10.util.ArrayList;

/**
 * Class PlainGraphRecord
 */
public class PlainGraphRecord {
	public var id:Long;
	public var edges:ArrayList[Long];
	
	public def this(){
		id = -1;
		//edges = new ArrayList[Long]();
	}
	
	public def this(val i:Long, val e:ArrayList[Long]){
		id = i;
		edges = e;
	}
	
	public def isEmpty():Boolean{
		if(id == -1l){
			return true;
		}else{
			return false;
		}
	}
	
}