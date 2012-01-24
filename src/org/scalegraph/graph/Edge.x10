package org.scalegraph.graph;

import x10.compiler.Native;
import x10.util.*;
/**
 * This class represents an Edge in the graph.
 */
public class Edge implements Comparable[Edge]{
	
	protected var internalId: long;  // Library generated id
	protected var attributes: Array[Attribute];
	protected var from: Vertex;
	protected var to: Vertex;
	protected static val nextEdgeId:Long = 0; // Current vertex id to be assigned
	
	/**
	 * This cosnstructor just takes two Vertices and creates an Edge
	 * @param from - source Vertex
	 * @param to - destination Vertex
	 */
	public def this(from: Vertex,
					to: Vertex){
		this.from = from;
		this.to = to;
	}

	/**
	 * This constructor is the similar to above but adds an attribute
	 * as an additional paramater
	 * @param from - source Vertex
	 * @param to - destination Vertex
	 * @param attribute - An attribute. In this case the Edge has only one attribute.
	 */
	public def this(from: Vertex,
			to: Vertex,
			attribute:Attribute){
		this(from, to);
		this.attributes = new Array[Attribute](1);
		attributes(0) = attribute;
	}
	
	/**
	 * This constructor is similar to the above one but instead of an attribute
	 * it provides an array of attributes
	 * @param from - source Vertex
	 * @param to - destination Vertex
	 * @param attributes - An array of Attributes
	 */
	
	public def this(from: Vertex,
					to: Vertex,
					attributes: Array[Attribute]) {
		
		this(from, to);
		this.attributes = attributes;
	}
	
	/**
	 * Assigned the edge uniquely generated id,
	 * having id implies that the edge is under control of the library
	 */
	protected def assignInternalId() {
		this.internalId = nextEdgeId;
		increaseEdgeId();
	}
	
	/**
	 * Native method to change static vertax id
	 * The X10 langauge does not allow directly chaning static final field
	 */
	@Native("c++", "Edge::FMGL(nextEdgeId)++")
	protected static native def increaseEdgeId(): void;
		
	/**
	 * This method sets the current attribute to a different one
	 * by replacing it
	 * @param The new attribute that should be assigned
	 */
	public def setAttribute(newAttrib: Attribute) {
		var len:Int = attributes.size;
		
		for(i in 0..(len-1) ){
			if(attributes(i).getName() == newAttrib.getName()){
				attributes(i) = newAttrib;
				break;
			}
		}	
	}
	
	/**
	 * This method sets the entire set of attributes of the Edge to a different set
	 * @param new attributes to be set
	 */
	public def setAttributes(newAttribArray : Array[Attribute]){
		this.attributes = newAttribArray;
	}
		
	/**
	 * This method returns the attribute corresponding to the name given as a parameter
	 * @param The name of the attribute that needs to be returned. 
	 * @return the attribute corresponding to the name. If not found it returns just null.
	 */
	
	public def getAttribute(name:String){	
		var len:Int = attributes.size;
		
		for(i in 0..(len-1) ){
			if(attributes(i).getName() == name){
				return attributes(i);
			}
		}
		
		return null;
	}
	
	/**
	 * This method returns an array for attributes of the Edge
	 * @return an array for the attributes of the Edge
	 */
	public def getAttributes(){
		
		if(attributes == null) {
			return null;
		}
		
		var returnAttributes: Array[Attribute] = new Array[Attribute](attributes.size);
		Array.copy(attributes, returnAttributes);
		
		return returnAttributes;
	}
	
	/**
	 * This method returns the number of attributes the Edge contains
	 * @return an integer representing the number of Attributes
	 */
	public def getAttributesCount(){
		return attributes.size;
	}
	
	/**
	 * This method is used to check whether an Edge contains a particular Attribute. The comparison is done based on the name
	 * of the attribute.
	 */
	public def contains(attrib:Attribute) : Boolean{
		
		var len:Int = this.attributes.size;
		
		for(i:Int in 0..(len-1)){
			if(attributes(i).getName() == attrib.getName()){
				return true;
			}
		}
		
		return false;
	}
	
	/**
	 * This method compares this Edge with another Edge.
	 * @param an Edge that needs to be compared with this Edge
	 * @return an integer value. 0 - if they are equal, -1 if this preceeds that, 1 if this succeeds that
	 */
	public def compareTo(var that:org.scalegraph.graph.Edge):x10.lang.Int {
		//First the two edges should have the same start and end vertices
		if(!((this.from == that.from) && (this.to == that.to))){
			return -1;
		}
		
		//Next they both should have the same number of attributes		
		if(this.attributes.size < that.getAttributesCount()){
			return -1;
		}else if(this.attributes.size > that.getAttributesCount()){
			return 1;
		}

		//Finally each attribute of that Edge should be contained within this Edge
		var len:Int = this.attributes.size;
		
		for(i:Int in 0..(len-1)){
			if(!that.contains(this.attributes(i))){
				return -1;
			}
		}
		
		return 0;
	}
	
	/**
	 * This method returns the String representation of a given Edge
	 * @return a String of the following format "internal id:<EdgeID>; from:<from vertex string>; to:<to vertex string> <pairs of attribute name and value>"
	 */
	public def toString(): String{

		s: StringBuilder = new StringBuilder();
		s.add("[internal id: ");
		s.add(this.internalId);
		s.add("; from: ");
		s.add(this.from);
		s.add("; to: ");
		s.add(this.to);
		
		// Print attribute
		if(this.attributes != null) {
			s.add("; ");
			for( i in attributes) {
				s.add(attributes(i).toString());
				
			}
		}
		s.add("]");
		return s.result();
	}
	
	/**
	 * This method return library generated id of this Edge
	 * @return id generated by the library
	 */
	public def getInternalId():long{
		return this.internalId;
	}
	
	/**
	 * This method returns the starting Vertex of the Edge
	 * @return starting Vertex of the Edge
	 */
	public getFrom():Vertex{
		return this.from;
	}

	/**
	 * This method returns the ending Vertex of the Edge
	 * @return ending Vertex of the Edge
	 */
	public getTo():Vertex{
		return this.to;
	}
	
	/**
	 * This method returns true if the two Edges are equal
	 * @return true if given edge is equal to this edge, false if otherwise
	 */
	public def equals(var that:Any):Boolean{
		
		// different data type, return false
		if(this.typeName() != that.typeName()){
			return false;
		}
		
		if(this.compareTo(that as Edge) == 0){
			return true;
		}else{
			return false;
		}
	}
	
	/**
	 * This method deeply clone itself
	 */
	public def clone(): Edge {
		
		if(this.attributes == null) {
			return new Edge(this.from.clone(), this.to.clone());
		}
		
		var e: Edge;
		val len: Int = attributes.size;
		var newAttributes: ArrayList[Attribute] = new ArrayList[Attribute]();
		
		// Create new array of attributes
		for(var i:Int = 0; i < len; i++) {
			newAttributes.add(attributes(i).clone());
		}
		
		// Create vertex with same attributes and also copy id
		e = new Edge(this.from.clone(), this.to.clone(), newAttributes.toArray());
		
		return e;
	}
}