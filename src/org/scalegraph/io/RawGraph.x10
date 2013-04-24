package org.scalegraph.io;

public struct RawGraph {
	
	public val vAttrName : Array[String];
	public val vAttrData : Array[Any];
	public val eAttrName : Array[String];
	public val eAttrData : Array[Any];
	
	public def this(vAttrName : Array[String], vAttrData : Array[Any], eAttrName : Array[String], eAttrData : Array[Any]) {
		this.vAttrName = vAttrName;
		this.vAttrData = vAttrData;
		this.eAttrName = eAttrName;
		this.eAttrData = eAttrData;
	}
}