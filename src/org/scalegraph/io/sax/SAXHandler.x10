package org.scalegraph.io.sax;

/**
 * Interface for handling SAX events
 */
public interface SAXHandler {
	
	/**
	 * Handling event that open tag is found
	 */
	public def startElement(name: String, attributeCount: Int, attributeKey: Array[String], 
			attributeValue: Array[String], attributeType: Array[String]): void;
	
	/**
	 * Handling event that close tag is found
	 */
	public def endElement(name: String): void;
	
	/**
	 * Handling event that fatal error occurs
	 */
	public def fatalError(message: String): void;
	
	/**
	 * Handling event taht error occurs
	 */
	public def error(message: String): void;
	
	/**
	 * Handling event that warning occurs
	 */
	public def warning(message: String): void;
	


}