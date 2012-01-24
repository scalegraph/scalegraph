package org.scalegraph.graph;

/**
 * This class represents string attribute 
 */
public class StringAttribute extends Attribute {
	
	protected var name: String;
	protected var value: String = "";
	
	private def this(){}
	
	public def this(name: String) {
		this.name = name;
	}
	
	/**
	 * An attribute can be created by prividing its name and a value
	 * @param name - a String representing the name of the object
	 * @param value - the String that is held by this Attribute
	 */	
	public def this(name: String, value: String) {
		this.name = name;
		this.value = value;
	}
	
	/**
	 * 
	 */
	public def getName(): String {
		return this.name;
	}
	
	/**
	 * 
	 */
	public def getValue(): String {
		return this.value;
	}
	
	public def setValue(v: Any): void {
		this.value = v as String;
	}
	
	/**
	 * The equality of two Attributes is defined by both having the same name and same value
	 * @param the Attribute to be compared to
	 * @return zero if the attribute is equal to this Attribute or -1 if they are not equal.
	 */
	public def compareTo(id: Any): Int {
		
		// Compare type
		if(this.typeName().equals(id.typeName()) == false) {
			return this.typeName().compareTo(id.typeName());
		}
		
		that: StringAttribute = id as StringAttribute;
		// Compare attribute name
		if(this.name.equals(that.getName()) == false) {
			return this.name.compareTo(that.getName());
		}

		// Compare value
		return this.value.compareTo(that.getValue());
	}
	
	/**
	 * The string representation of an Attribute
	 * @return a String of the format "<name> : <String representation of value>" 
	 */
	public def toString(): String {
		return this.name + ": \"" + this.value.toString() + "\"";
	}
	
	/**
	 * This method returns true if the two Attributes are equal
	 */
	public def equals(that:Any):Boolean{
		
		// Check whether they are the same type
		if(this.compareTo(that) == 0) {
			return true;
		}
		return false;
	}
	
	public def clone(): Attribute {
		return new StringAttribute(this.name, this.value);
	}
}