package org.scalegraph.io;

import x10.io.FileReader;
import x10.io.File;
import x10.io.ReaderIterator;
import x10.io.IOException;
import x10.lang.Char;
import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.StringBuilder;

import org.scalegraph.graph.AttributedGraph;
import org.scalegraph.graph.Vertex;
import org.scalegraph.graph.Attribute;
import org.scalegraph.graph.Edge;
import org.scalegraph.graph.LongAttribute;
import org.scalegraph.graph.StringAttribute;
import org.scalegraph.graph.DoubleAttribute;

public class GMLReader {
	
	protected static val userIdAndVertexMap: HashMap[Long, Vertex] = new HashMap[Long, Vertex]();
	
	/**
	 * Build attributed graph from GML file
	 * @param fileName - input GML file
	 * @return array of attributed graph
	 */
	public static def loadFromFile(fileName: String) : AttributedGraph {
		
		// Open file and read
		reader: FileReader = new FileReader(new File(fileName));
		val nodes = parse(reader, false);
		graph: AttributedGraph = constructGraph(nodes);
		reader.close();
		return graph;
	}
	
	/**
	 * Parse raw GML data to array list of GMLEntry
	 * @param reader - opened file stream to read
	 * @param isBracketOpen - expression to parse is in between brackets
	 * @return ArrayList of GMLEntry
	 */
	protected static def parse(reader: FileReader, var isBracketOpen: Boolean) : ArrayList[GMLEntry]{
		
		buffer: ArrayList[String] = new ArrayList[String]();
		var nodeList: ArrayList[GMLEntry] = new ArrayList[GMLEntry]();
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
				
				return nodeList;
				
			} else if(token.getType() == GMLToken.RIGHT_BRACKET ) {
				
				if(isBracketOpen == false) {
					//Bracket is closed but found right bracket
					throw new Exception("Too many brackets");
				}
				
				return nodeList;
				
			// Pair does not preceeding with key
			} else if(token.getType() != GMLToken.KEY) {
				Console.OUT.println(token.getType());
				throw new Exception("Syntax error");
			}
			
			// Get key from token
			key = token.getValue();
			
			// fetch value
			token = getNextToken(reader, buffer);
			
			switch(token.getType()) {
			
				case GMLToken.INTEGER:
					value = Long.parse(token.getValue());
					node = new GMLEntry(key, value);
					nodeList.add(node);
					break;
					
				case GMLToken.FLOAT:
					value = Double.parse(token.getValue());
					node = new GMLEntry(key, value);
					nodeList.add(node);
					break;
					
				case GMLToken.STRING:
					value = token.getValue();
					node = new GMLEntry(key, value);
					nodeList.add(node);
					break;
				
				case GMLToken.LEFT_BRACKET:
					val tmpList: ArrayList[GMLEntry] = parse(reader, true);
					node = new GMLEntry(key, tmpList);
					nodeList.add(node);
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
	
	/**
	 * Construct attributed graph
	 * @param gmlEntries - array list of gmlEntry
	 * @return array of attributed graph
	 */
	protected static def constructGraph(gmlEntries: ArrayList[GMLEntry]): AttributedGraph {
		
		val graphIterator: Iterator[GMLEntry] = gmlEntries.iterator();
		var entry: GMLEntry;
		var graph: AttributedGraph = null;
		
		// user id and internal id mapping data
		userIdAndVertexMap.clear();

		while(graphIterator.hasNext()) {
			entry = graphIterator.next();
			
			if(entry.getKey().toLowerCase().equals("graph")) {
				// Graph entry
				
				if(graph != null) {
					// We found another graph, throw exception
					throw new Exception("Many graphs in one file");
				}
				
				graph = new AttributedGraph();
						
				val graphDataIterator: Iterator[GMLEntry] = entry.getList().iterator();
				while(graphDataIterator.hasNext()) {
					entry = graphDataIterator.next();
					
					if(entry.getKey().toLowerCase().equals("node")) {
						// node entry
						
						if(entry.isList() == false) {
							// the value of node key must be list  type
							throw new Exception("Invalid input");
						}
						addVertexToGraph(graph, entry.getList());
						
					}
					
					if(entry.getKey().toLowerCase().equals("edge")) {
						
						addEdgeToGraph(graph, entry.getList());
						// edge entry
					}
					
					if(entry.getKey().toLowerCase().equals("directed")) {
						// set directness
						if( entry.getValue() as Long == 1L) {
							graph.setDirected(true);
						} else if (entry.getValue() as Long == 0L) {
							graph.setDirected(false);
						} else {
							
							// Invalid number
							throw new UnsupportedOperationException("Invalid input for 'graph.directed'");
						}
					}
				}
				
			} // graph entry

		} // end of fetching node from iterator
		
		if(graph == null){
			// There is no graph
			throw new Exception("Cannot find graph");
		}
		
		return graph;
		
	}
	
	/**
	 * Create vertex from given array list of GMLEntry
	 * @param entries - array list of GMLEntry
	 * @return Vextex
	 */
	protected static def addVertexToGraph(g: AttributedGraph, entries:ArrayList[GMLEntry]) {
		
		var entryIterator: Iterator[GMLEntry] = entries.iterator();
		var entry: GMLEntry;
		var vertex: Vertex;
		var attributeList: ArrayList[Attribute] = new ArrayList[Attribute]();
		var attribute: Attribute = null;
		var vertexId: Long = -1L;
		
		while(entryIterator.hasNext()) {
			entry = entryIterator.next();
			
			if(entry.getKey().toLowerCase().equals("id")) {
				// Get user specified vertex id
				try {
					vertexId = entry.getValue() as Long;
					
					if(vertexId < 0) {
						throw new Exception("Invalid node id");
					}
					
				} catch(e:NumberFormatException) {
					throw new Exception("Invalid node id");
				}
			}
			
			// Create attribute based on its type
			var attributeValue: Any = entry.getValue();
			
			if(attributeValue instanceof Long) {
				
				attribute = new LongAttribute(entry.getKey(), attributeValue as Long);
				
			} else if(attributeValue instanceof Double) {
				
				attribute = new DoubleAttribute(entry.getKey(), attributeValue as Double);
				
			} else if(attributeValue instanceof String) {
				
				attribute = new StringAttribute(entry.getKey(), attributeValue as String);
				
			} else {
				// Default case, Here should be exevuted
				throw new Exception("Unexpected exception");
			}
			
			attributeList.add(attribute);
		}
		
		if(vertexId == -1L) {
			// User does not specified node id
			throw new Exception("Node id was node specified");
		}
		
		// Create vertex
		vertex = new Vertex(attributeList);
		
		g.addVertex(vertex);
		
		// Create Mapping between user id and itnernal id
		userIdAndVertexMap.put(vertexId, vertex);
		

	}
	
	/**
	 * Add edge to graph
	 * @param g - attributed graph to add edge
	 * @param entries - array list of GMLEntry
	 */
	protected static def addEdgeToGraph(g:AttributedGraph, entries:ArrayList[GMLEntry]) {
		
		var entryIterator: Iterator[GMLEntry] = entries.iterator();
		var entry: GMLEntry;
		var edge: Edge = null;
		var attributeList: ArrayList[Attribute] = new ArrayList[Attribute]();
		var attribute: Attribute;
		var from: Long = -1L; // -1 means unset
		var to:Long = -1L; // -1 means unset
		
		while(entryIterator.hasNext()) {
			entry = entryIterator.next();
			
			if(entry.getKey().toLowerCase().equals("source")) {
				// source vertex id
				from = entry.getValue() as Long;
			} else if(entry.getKey().toLowerCase().equals("target")) {
				// target vertex id
				to = entry.getValue() as Long;
			} else {
				
				// Create attribute based on its type
				var attributeValue: Any = entry.getValue();
				
				if(attributeValue instanceof Long) {
					
					attribute = new LongAttribute(entry.getKey(), attributeValue as Int);
					
				} else if(attributeValue instanceof Double) {
					
					attribute = new DoubleAttribute(entry.getKey(), attributeValue as Double);
					
				} else if(attributeValue instanceof String) {
					
					attribute = new StringAttribute(entry.getKey(), attributeValue as String);
					
				} else {
					// Default case, Here should be exevuted
					throw new Exception("Unknown entry type ");
				}
				attributeList.add(attribute);
			}
		}
		
		if(from == -1L || to == -1L) {
			throw new Exception("source or target were not defined");
		}
		
		// Get vertex we previously added
		val fromVertex: Vertex = userIdAndVertexMap.get(from).value;
		val toVertex: Vertex = userIdAndVertexMap.get(to).value;
		var e: Edge;
		
		if(attributeList.size() > 0) {
			e = new Edge(fromVertex, toVertex, attributeList.toArray());
		} else {
			e = new Edge(fromVertex, toVertex);
		}
		
		g.addEdge(e);
	}
	
}