package org.scalegraph.graph;

/**
 * Class VertexArrays
 * 
 * This class 
 */
public class VertexArrays {
	public var preArray:DistArray[Long];
	public var postArray:Array[Long];
	
	public def this(){
		preArray = null;
		postArray = null;
	}
}