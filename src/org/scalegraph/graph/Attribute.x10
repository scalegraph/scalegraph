package org.scalegraph.graph;

/**
 * This abstract class represents an attribute of a Vetrex or an Edge. 
 */
public abstract class Attribute implements Comparable[Any] {
	
	abstract public def getName(): String;
	abstract public def getValue(): Any;
	abstract public def setValue(Any): void;
	abstract public def toString(): String;
	abstract public def equals(Any): Boolean;
	abstract public def clone(): Attribute;
	
	/**
	 * This method determines whether input parameter is an instance of number attribute or not
	 * @return true if input parameter is an instance of ByteAttribute, ShortAttribute, 
	 * IntAttrubute, LongAttribute, FloatAttribute or DoulbeAttribute, false if otherwise
	 */
	protected def isNumber(id: Any): Boolean {
		if(id instanceof ByteAttribute ||
				id instanceof ShortAttribute ||
				id instanceof IntAttribute ||
				id instanceof LongAttribute ||
				id instanceof FloatAttribute ||
				id instanceof DoubleAttribute) {
			return true;
		}
		return false;
	}	
}