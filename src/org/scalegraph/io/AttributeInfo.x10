package org.scalegraph.io;

import x10.util.Team;

import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;


class AttributeInfo {
	
	private val team : Team;
	private val info : Array[AttributeHandler];
	
	
	def this(team : Team, attr_id : Array[Int]) {
		this.team = team;
		this.info = new Array[AttributeHandler](attr_id.size);
		
		for(var i:Int = 0; i < attr_id.size; i++) {
			info(i) = AttributeHandler.makeFromId(team, attr_id(i));
		}
	}
	
	
	def this(team : Team, attr : Array[Any]) {
		this.team = team;
		this.info = new Array[AttributeHandler](attr.size);
		
		for(var i:Int = 0; i < info.size; i++) {
			this.info(i) = AttributeHandler.makeFromAny(team, attr(i));
		}
	}
	
	operator this(i : Int) = info(i);
}