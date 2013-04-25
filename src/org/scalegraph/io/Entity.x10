package org.scalegraph.io;

public struct Entity {
	
	public val name : Array[String];
	public val data : Array[Any];
	
	public def this(name : Array[String], data : Array[Any]){name.size == data.size} {
		this.name = name;
		this.data = data;
	}
}