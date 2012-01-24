package org.scalegraph.graph;

/**
 * This class reprenents boolean attribute
 */
public class BooleanAttribute extends Attribute {
	
	protected var name: String;
	protected var value: Boolean;
	
	private def this(){}
	
	public def this(name: String) {
		this.name = name;
	}
	
	public def this(name: String, value: Boolean) {
		this.name = name;
		this.value = value;
	}
	
	public def compareTo(id: Any): Int {
		// Compare type
		if(this.typeName().equals(id.typeName()) == false) {
			return this.typeName().compareTo(id.typeName());
		}
		
		// Compare attribute name
		that: BooleanAttribute = id as BooleanAttribute;
		if(this.name.equals(that.getName()) == false) {
			return this.name.compareTo(that.getName());
		}
		
		// Compare value
		return this.value.compareTo(that.getValue());
	}
	
	public def getName(): String {
		return this.name;
	}
	
	public def getValue(): Boolean {
		return this.value;
	}
	
	public def setValue(v: Any): void {
		this.value = v as Boolean;
	}
	
	public def toString(): String {
		return this.name + ": " + this.value.toString(); 
	}
	
	public def equals(that: Any): Boolean {
		if(this.compareTo(that) == 0) {
			return true;
		}
		return false;
	}
	
	public def clone():Attribute {
		return new BooleanAttribute(this.name, this.value);
	}

}