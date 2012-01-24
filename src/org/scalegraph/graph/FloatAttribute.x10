package org.scalegraph.graph;

/**
 * This class represents Float attribute
 */
public class FloatAttribute extends Attribute {
	
	protected var name: String;
	protected var value: Float;
	
	private def this(){}
	
	public def this(name: String) {
		this.name = name;
	}
	
	public def this(name: String, value: Float) {
		this.name = name;
		this.value = value;
	}
	
	public def compareTo(id: Any): Int {
		if(isNumber(id) == false) {
			// Not a number, comparison based on type name
			return this.typeName().compareTo(id.typeName());
		}
		
		// Compare attribute name
		that: Attribute = id as Attribute;
		if(this.name.equals(that.getName()) == false) {
			return this.name.compareTo(that.getName());
		}
		
		// Compare value - convert value to double to preserve precision and then do comparison
		val thisValue: Double = this.value as Double;
		var thatValue: Double = 0;
		
		if(id instanceof ByteAttribute) {
			thatValue = (id as ByteAttribute).getValue() as Double;
		} else if(id instanceof ShortAttribute) {
			thatValue = (id as ShortAttribute).getValue() as Double;
		} else if(id instanceof IntAttribute) {
			thatValue = (id as IntAttribute).getValue() as Double;
		} else if(id instanceof LongAttribute) {
			thatValue = (id as LongAttribute).getValue() as Double;
		} else if(id instanceof FloatAttribute) {
			thatValue = (id as FloatAttribute).getValue() as Double;
		} else if(id instanceof DoubleAttribute) {
			thatValue = (id as DoubleAttribute).getValue();
		} else {
			throw new Exception("Uncaught exception");
		}
		
		return thisValue.compareTo(thatValue);
	}
	
	public def getName(): String {
		return this.name;
	}
	
	public def getValue(): Float {
		return this.value;
	}
	
	public def setValue(v: Any): void {
		this.value = v as Float;
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
	
	public def clone(): Attribute {
		return new FloatAttribute(this.name, this.value);
	}

}