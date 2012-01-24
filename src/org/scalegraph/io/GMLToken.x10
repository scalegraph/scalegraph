package org.scalegraph.io;

/**
 * Repesent parsable GML data
 */
public struct GMLToken(tokenType: Int, value: String) {
	
	public static val INTEGER: Int = 1;
	public static val FLOAT: Int  = 2;
	public static val STRING: Int = 3;
	public static val KEY: Int = 4;
	public static val RIGHT_BRACKET = 5;
	public static val LEFT_BRACKET = 6;
	public static val END = 7;
	
	public def this(tokenType: Int, value: String) {
		property(tokenType, value);
	}
	
	public def getType() {
		return this.tokenType;
	}
	
	public def getValue() {
		return this.value;
	}
}