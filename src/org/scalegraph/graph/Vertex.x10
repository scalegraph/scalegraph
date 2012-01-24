package org.scalegraph.graph;

import x10.util.ArrayList;
import x10.lang.Int;
import x10.compiler.Native;
import x10.util.StringBuilder;

/**
 * This class represents a Vertex in the Graph
 */
public class Vertex implements Comparable[Vertex] {
	
	protected var internalId: long = -1; // Library generated id, default = -1
	protected var attributes: Array[Attribute] = null;
	protected var hashCode: Int;
	protected static val nextVertexId:Long = 0; // Current vertex id to be assigned
	
	
	/**
	 * This constructor just takes an Attribute and constructs a Vertex with just that Attribute
	 * @param the attribute that the Vertex will contain at the begining
	 */
	public def this(attribute: Attribute){
		this.attributes = new Array[Attribute](1);
		attributes(0) = attribute;
		generateHashCode();
	}
	
	/**
	 * This constructor accepts a list of Attributes and constructs a Vertex
	 */
	public def this(attribList:ArrayList[Attribute]){
		this.attributes = attribList.toArray();
		generateHashCode();
	}
	
	
	/**
	 * Assigned the vertex uniquely generated id,
	 * having id implies that the vertex is under control of the library
	 */
	protected  def assignInternalId() {
		this.internalId = nextVertexId;
		increaseVertexId();
	}
	
	/**
	 * Native method to change static vertax id
	 * The X10 langauge does not allow directly chaning static final field
	 */
	@Native("c++", "Vertex::FMGL(nextVertexId)++")
	protected static native def increaseVertexId(): void;
	
	
	/**
	 * This method sets the current attribute to a different one
	 * by replacing it
	 * @param The new attribute that should be assigned
	 */
	public def setAttribute(newAttrib: Attribute) {
		
		if(internalId == -1L) {
			// The vertex is controlloed by the library
			throw new UnsupportedOperationException();
		}
		
		for(i in this.attributes ){
			if(attributes(i).getName() == newAttrib.getName()){
				attributes(i) = newAttrib;
				break;
			}
		}	
	}
	
	/**
	 * This method returns the attribute corresponding to the name given as a parameter
	 * @param The name of the attribute that needs to be returned. 
	 * @return the attribute corresponding to the name. If not found it returns just null.
	 */
	public def getAttribute(name:String) : Attribute {
		
		for(i in this.attributes){
			if(attributes(i).getName().equals(name)){
				return attributes(i);
			}
		}
		
		return null;
	}
	
	/**
	 * This method returns the String representation of a given Vertex
	 * @return a String of the following format "id:<VertexID>"
	 */
	public def toString(){
		s: StringBuilder = new StringBuilder();
		s.add("[internal id: ");
		s.add(this.internalId);
		
		// Print attribute
		if(this.attributes != null) {
			var firstAttribute: Boolean = true;
			s.add("; ");
			for( i in attributes) {
				s.add(attributes(i).toString());
				
			}
		}
		s.add("]");
		return s.result();
	}
	
	/**
	 * This method return library generated vertex id
	 * @return library generated vertex id
	 */
	public def getInternalId():long{
		return this.internalId;
	}
	
	/**
	 * This method is used to check whether a Vertex contains a particular Attribute. The comparison is done based on the name
	 * of the attribute.
	 */
	public def contains(attrib:Attribute) : Boolean{
		
		for( i in this.attributes){
			if(attributes(i).getName().equals(attrib.getName())){
				return true;
			}
		}
		return false;
	}
	
	/**
	 * This method returns the number of attributes the Vertex contains
	 * @return an integer representing the number of Attributes
	 */
	public def getAttributesCount(){
		return attributes.size;
	}
	
	/**
	 * This method compares this Vertex with another Vertex.
	 * @param an Edge that needs to be compared with this Edge
	 * @return an integer value. 0 - if they are equal, -1 if this preceeds that, 1 if this succeeds that
	 */
	public def compareTo(var that:Vertex): Int {
		//First both the vertices should have the same number of attributes		
		if(this.attributes.size < that.getAttributesCount()){
			return -1;
		}else if(this.attributes.size > that.getAttributesCount()){
			return 1;
		}

		//Next each attribute of that Vertex should be contained within this Vertex
		for(i in this.attributes) {
			var result: Int;
			thisAttribute: Attribute = this.attributes(i);
			thatAttribute: Attribute = that.getAttribute(thisAttribute.getName());
			
			if(thatAttribute == null) {
				// Did not found the same attribute name
				return -1;
			}
				
			result = thisAttribute.compareTo(thatAttribute);
			if(result != 0) {
				return result;
			}
		}
		return 0;
	}
	
	/**
	 * This method returns an array for attributes of the Vertex
	 * @return an array for the attributes of the Vertex
	 */
	public def getAttributes(): Array[Attribute] {
		
		if(attributes == null) {
			return null;
		}
		
		var returnAttributes: Array[Attribute] = new Array[Attribute](attributes.size);
		Array.copy(attributes, returnAttributes);
		
		return returnAttributes;
	}
	
	/**
	 * This method generates hash code for this vertex from its attributes
	 */
	private def generateHashCode(): void {
		var temp: Attribute;
		var minPos: Int;
		val len: Int = attributes.size;
		var phase: String = "";
		
		// According to Hash algorithms, the order of attribute has an effect on generating hash code
		// Sort Attribute by selection sort
		for( var i: Int = 0; i < len; i++) {
			minPos = i;
			for( var j: Int = i + 1; j < len; j++) {
				if(attributes(j).getName() < attributes(i).getName()) {
					minPos = j;
				}
			}
			
			if(minPos!= i) {
				temp = attributes(i);
				attributes(i) = attributes(minPos);
				attributes(minPos) = temp;
			}
		}

		// Create phase
		phaseBuilder: StringBuilder = new StringBuilder();
		for(var i: Int = 0; i < len; i++) {
			phaseBuilder.add("$" + attributes(i).getName() + "$" + attributes(i).getValue() + "$" + attributes(i).typeName());
		}
		
		// Same strings which have the same value have the hashcode
		// So use built-in function to calculate hascode
		hashCode = phaseBuilder.result().hashCode();
	}
	
	/**
	 * This method returns hashcode of the vertex
	 */
	public def getHashCode() : Int {
		return hashCode;
	}
	
	/**
	 * This method returns true if the two Vertices are equal
	 */
	public def equals(var that:Any):Boolean{
		
		// different data type, return false
		if(this.typeName().equals(that.typeName()) == false){
			return false;
		}
		
		if(this.compareTo(that as Vertex) == 0){
			return true;
		} else {
			return false;
		}
	}
	
	/**
	 * This method deeply clone itself
	 */
	public def clone(): Vertex {
		
		var newVertex: Vertex;
		val len: Int = attributes.size;
		var newAttributes: ArrayList[Attribute] = new ArrayList[Attribute]();
		
		// Create new array of attributes
		for(var i:Int = 0; i < len; i++) {
			newAttributes.add(this.attributes(i).clone());
		}
		
		// Create vertex with same attributes and also copy id
		newVertex = new Vertex(newAttributes);
		
		return newVertex;
	}
}