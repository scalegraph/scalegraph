package org.scalegraph.io;

import x10.io.FileReader;
import x10.io.File;
import x10.io.ReaderIterator;
import x10.io.IOException;
import x10.lang.Char;
import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.StringBuilder;
import x10.lang.Runtime.Worker;
import x10.lang.Runtime;

import org.scalegraph.graph.*;
import x10.util.concurrent.*;

public class GMLReader {
	
	protected val userIdAndVertexMap: HashMap[Long, Vertex] = new HashMap[Long, Vertex]();
	protected val gmlEntries: ArrayList[GMLEntry] = new ArrayList[GMLEntry]();
	protected var isGraphListFound: Boolean = false;
	protected var graph: AttributedGraph = null;
	protected var reader: FileReader;
	
	protected var elementPath: ArrayList[String] = new ArrayList[String]();
	
	protected var id: Long;
	protected var src: Long;
	protected var dst: Long;
	protected var attributes: ArrayList[Attribute] = new ArrayList[Attribute]();
	
	protected var numAddVertexAsync: AtomicInteger = new AtomicInteger();
	protected var numAddEdgeAsync: AtomicInteger = new AtomicInteger();
	
	protected var isFirstVertex: Boolean = true;
	protected var isFirstEdge: Boolean = true;
	
	protected val MAX_TASKS = 20;
	
	var numTab: Int = 0;
	
	/**
	 * Build attributed graph from GML file
	 * @param fileName - input GML file
	 * @return array of attributed graph
	 */
	public static def loadFromFile(fileName: String): AttributedGraph {
		
		val loader = new GMLReader();
		return loader.internalLoadFromFile(fileName, GraphSizeCategory.SMALL);
	}
	
	
	public static def loadFromFile(fileName: String, sizeCategory: Short): AttributedGraph {
		val loader = new GMLReader();
		return loader.internalLoadFromFile(fileName, sizeCategory);
	}
	
	public def internalLoadFromFile(fileName: String, sizeCategory: Short): AttributedGraph {
		
		numAddVertexAsync.set(0);
		numAddEdgeAsync.set(0);
		
		// Open file and read
		reader = new FileReader(new File(fileName));
		graph = AttributedGraph.make(sizeCategory);
		
		finish {
			parse(gmlEntries,false);
		}
		// constructGraph();
		reader.close();

		return graph;
	} 
	
	/**
	 * Parse raw GML data to array list of GMLEntry
	 * @param reader - opened file stream to read
	 * @param isBracketOpen - expression to parse is in between brackets
	 * @return ArrayList of GMLEntry
	 */
	protected def parse(rootElement:ArrayList[GMLEntry], var isBracketOpen: Boolean){
		
		buffer: ArrayList[String] = new ArrayList[String]();
		
		var node: GMLEntry;
		var token: GMLToken;
	
		for(;;) {
			
			var key: String;
			var value: Any;
			
			// Fetch token
			token = getNextToken(reader, buffer);
			
			
			if(token.getType() == GMLToken.END ) {
				// EOF but bracket is still opened
				if(isBracketOpen == true) {
					throw new Exception("Open bracket");
				}
				
				return rootElement;
				
			} else if(token.getType() == GMLToken.RIGHT_BRACKET ) {
				
				if(isBracketOpen == false) {
					//Bracket is closed but found right bracket
					throw new Exception("Too many brackets");
				}
				
				return rootElement;
				
			// Pair does not preceeding with key
			} else if(token.getType() != GMLToken.KEY) {
				Console.OUT.println();
				throw new Exception("Syntax error: invalid token type ->" + token.getType());
			}
			
			// Get key from token
			key = token.getValue();
			
			// fetch value
			token = getNextToken(reader, buffer);
			
			switch(token.getType()) {
			
				case GMLToken.INTEGER:
					value = Long.parse(token.getValue());
					node = new GMLEntry(key, value);
					rootElement.add(node);
					onEntry(node);
					break;
					
				case GMLToken.FLOAT:
					value = Double.parse(token.getValue());
					node = new GMLEntry(key, value);
					rootElement.add(node);
					onEntry(node);
					break;
					
				case GMLToken.STRING:
					value = token.getValue();
					node = new GMLEntry(key, value);
					rootElement.add(node);
					onEntry(node);
					break;
				
				case GMLToken.LEFT_BRACKET:
					val tmpList: ArrayList[GMLEntry] = new ArrayList[GMLEntry]();
					
					startList(key);
					parse(tmpList,true);
					endList(key);
					
					node = new GMLEntry(key, tmpList);
					rootElement.add(node);
					break;
					
				default:
					throw new Exception("Syntax error");
			
			}
		}
	}
	
	/**
	 * Extract token from GMLE file
	 * @param reader - opened file stream to read
	 * @param buffer - where to store the rest of the line
	 * @return GMLToken
	 */
	protected static def getNextToken(reader: FileReader, buffer: ArrayList[String]) : GMLToken {
		
		var line:String = null;

		// If there is data left from previus getNextToken call
		if(buffer.size() > 0) {
			line = buffer.removeFirst().trim();
		}
		// No data left in buffer, fetch from ReaderIterator
		if(line == null) {
			
			// Loop until we get line to parse
			while(line == null) {

				// Get line and remove white space
				try {
					line = reader.readLine().trim();
				} catch(e: IOException) {
					// No more line left
					// As reader.available() is not reliable
					// so use catching exception
					return new GMLToken(GMLToken.END, null);
				}
			
				// if blank line, fecth new one
				if(line.length() == 0) {
					line = null;
					continue;
				}
				// Skip comment
				if(line(0) == '#') {
					line = null;
				}
			}
		}

		// Determine type of token by first character
		if(isNumber(line)) {
			
			// integer or float token
			len: Int = line.length();
			var stringNum: String;
			var i: Int = 0;
			var isFloat: Boolean = false;
			
			for(; i < len; i++) {
				if(line(i) == '.' || line(i) == 'E') {
					isFloat = true;
				}
				// if found seperator, break
				if(line(i).isWhitespace() || line(i) == '[' || line(i) == ']'){
					break;
				}
			}
			
			if(i == len) {
				// entire line is string of number
				stringNum = line;
			} else {
				//  Partial line is string of number, put the rest into list
				stringNum = line.substring(0, i - 1);
				line = line.substring(i);
				buffer.add(line);
			}
			
			// Create token and return
			var token: GMLToken;
			if(isFloat) {
				token = new GMLToken(GMLToken.FLOAT, stringNum);
			} else {
				token = new GMLToken(GMLToken.INTEGER, stringNum);
			}
			return token;
			
		} else if(isString(line)) {
			
			// string token
			len: Int = line.length();
			var string: StringBuilder = new StringBuilder();
			var i: Int = 1; // Skip '"'
			
			while( i < len && line(i) != '"') {
				
				//+charuwat : Shoud be implmented to support ISO character
				
				string.add(line(i));
				i++;
			}
			if(i == len) {
				// Double quote not found
				throw new Exception("Double quote mismatched");
			} else if(i + 1 < len) {
				// Double quote found before end of line
				line = line.substring(i + 1);
				buffer.add(line);
			}
			
			// Return string token
			return new GMLToken(GMLToken.STRING, string.result());
			
		} else if(isKey(line)) {
			
			// key token
			len: Int = line.length();
			var key: StringBuilder = new StringBuilder();
			var i: Int = 0;
			
			while(i < len && ( line(i).isLetterOrDigit() || line(i) == '_') ) {
				key.add(line(i));
				i++;
			}
			
			// Skip loop before go to end of line
			if( i < len) {
				if(line(i).isWhitespace()) {
					line = line.substring(i);
					buffer.add(line);
				} else {
					// Invalid character in key name
					throw new Exception("Invalid key identifer");
				}
			}
			
			return new GMLToken(GMLToken.KEY, key.result());
			
		} else if (line(0) == '[') {
			
			// Left bracket
			if(line.length() > 1) {
				line = line.substring(1);
				buffer.add(line);
			}
			return new GMLToken(GMLToken.LEFT_BRACKET, null);
			
		} else if (line(0) == ']') {
			
			// Right bracket
			if(line.length() > 1) {
				line = line.substring(1);
				buffer.add(line);
			}
			return new GMLToken(GMLToken.RIGHT_BRACKET, null);
		} 
			
		// Unexpected
		throw new Exception("Unexpected exception");	

	}
	
	/**
	 * Check input string is likely to be number
	 * @param s - string to check
	 * @return true if it is likely to be number, false otherwise
	 */
	protected static def isNumber(s: String): Boolean{
		if( s(0).isDigit() || s(0) == '.' || s(0) == '+' || s(0) == '-') {
			return true;
		}
		return false;
	}

	/**
	 * Check input string is likely to be string
	 * @param s - string to check
	 * @return true if it is likely to be string, false otherwise
	 */
	protected static def isString(s: String) : Boolean{
		if(s(0) == '"') {
			return true;
		}
		return false;
	}
	
	/**
	 * Check input string is likely to be key
	 * @param s - string to check
	 * @return true if it is likely to be key, false otherwise
	 */
	protected static def isKey(s: String): Boolean {
		if(s(0).isLetter() || s(0) == '_') {
			return true;
		}
		return false;
	}
	
	protected def startList(name: String) {

		elementPath.add(name);
		
		// Reset data
		if(elementPath.size() == 2 && elementPath(0).equals("graph")) {
			if(elementPath(1).equals("node") || elementPath(1).equals("edge")) {
				while(!attributes.isEmpty()) {
					attributes.removeFirst();
				}
				
				id = src = dst = -1;
			}
		}
		
	}
	
	protected def endList(name: String) {
		
		if(elementPath.size() == 2 && elementPath(0).equals("graph")) {
			
			if(elementPath(1).equals("node")) {
				if(id == -1L) {
					// User does not specified node id
					throw new Exception("Node id was node specified");
				}
				
				// Create vertex
				val v = new Vertex(this.attributes.clone());
				
				// Add first vertex sequebcialy to create schema
				if(isFirstVertex) {
					graph.addVertex(v);
					isFirstVertex = false;
				}
				else {
					// while(numAddVertexAsync.get() >= MAX_TASKS) {
					// 	System.sleep(100);
					// 	Console.OUT.println("Sleep add node");
					// }

					numAddVertexAsync.getAndIncrement();
					// async {
						graph.addVertex(v);
						numAddVertexAsync.getAndDecrement();
						// Console.OUT.println("End Add node");
					// }
					
				}
			} 
			
			if(elementPath(1).equals("edge")) {
				
				// Console.OUT.println("Add Edge");
				
				if(src == -1L || dst == -1L) {
					throw new Exception("source or target were not defined");
				}
				
				val attr: Array[Attribute] = this.attributes.size() == 0 ? null : this.attributes.clone().toArray();
				
				if(isFirstEdge) {
					// when(numAddVertexAsync.get() == 0);
					graph.addEdge(src as Int, dst as Int, attr);
					isFirstEdge = false;
				} else {
					
					// while(numAddEdgeAsync.get() >= MAX_TASKS) {
					// 	Console.OUT.println("Sleep add edge");
					// 	System.sleep(100);
					// }
						
					numAddEdgeAsync.getAndIncrement();
					
					// Copy src and data
					val tempSrc = src;
					val tempDst = dst;

					// async {
						// Used Array.clone to avoid conflict data between thread
						graph.addEdge(tempSrc as Int, tempDst as Int, attr);
						numAddEdgeAsync.getAndDecrement();
					// }	
				}
					
			}
		}
		
		elementPath.removeLast();
	}
	
	protected def onEntry(entry: GMLEntry) {

		if(elementPath.size() == 2 && elementPath(0).equals("graph")) {
			
			if(elementPath(1).equals("node")) {
				if(entry.getKey().equals("id")) {
					id = entry.getValue() as Long;
				}
				
				this.attributes.add(makeAttributeFromEntry(entry));
			} 
			
			if(elementPath(1).equals("edge")) {
				
				if(entry.getKey().equals("source")) {
					src = entry.getValue() as Long;
				} else if(entry.getKey().equals("target")) {
					dst = entry.getValue() as Long;
				} else {
					this.attributes.add(makeAttributeFromEntry(entry));
				}
			}
		}
	}
	
	protected def makeAttributeFromEntry(entry: GMLEntry): Attribute {
		
		var attribute: Attribute = null;
		var attributeValue: Any = entry.getValue();
		if(attributeValue instanceof Long) {
			
			attribute = new LongAttribute(entry.getKey(), attributeValue as Long);
			
		} else if(attributeValue instanceof Double) {
			
			attribute = new DoubleAttribute(entry.getKey(), attributeValue as Double);
			
		} else if(attributeValue instanceof String) {
			
			attribute = new StringAttribute(entry.getKey(), attributeValue as String);
			
		} else {
			// Default case, Here should no be executed
			throw new Exception("Cant find suitable attribute for " + attribute.typeName());
		}
		
		return attribute;
	}
}
