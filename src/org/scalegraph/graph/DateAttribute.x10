package org.scalegraph.graph;

import org.scalegraph.util.Date;

/**
 * This class represents Date attribute
 */
public class DateAttribute extends Attribute {
	
	protected var name: String;
	protected var value: Date = null;
	
	private def this(){}
	
	public def this(name: String) {
		this.name = name;
	}
	
	public def this(name: String, value: Date) {
		this.name = name;
		this.value = value;
	}
	
	public def getName():String {
		return name;
	}
	
	public def getValue():Date {
		return this.value;
	}
	
	public def setValue(value: Any): void {
		this.value = value as Date;
		
	}
	
	public def compareTo(id: Any): Int {
		
		if(this.typeName() != id.typeName()) {
			return this.typeName().compareTo(id.typeName());
		}
		
		that: Date = id as Date;
		return this.value.compareTo(that);
	}
	
	public def equals(id: Any): Boolean {
		if(this.compareTo(id) == 0) {
			return true;
		}
		return false;
	}
	
	public def toString(): String {
		return this.name + ": " + this.value.toString();
	}
	
	public def clone():Attribute {
		return new DateAttribute(this.name, this.value.clone());
	}


}