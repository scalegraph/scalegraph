package org.scalegraph.io;

import x10.io.File;
import x10.io.FileNotFoundException;
import x10.io.FileWriter;
import x10.io.FileReader;
import x10.util.StringBuilder;
import x10.util.Map;
import x10.util.HashMap;
import x10.io.IOException;

import org.scalegraph.graph.AttributedGraph;
import org.scalegraph.graph.Vertex;
import org.scalegraph.graph.Edge;
import org.scalegraph.graph.Attribute;

import x10.compiler.Native;

public class GEXFWriter {
	

	protected static val headerFileName: String = "_header.dat";
	protected static val graphAttributePrefixFileName: String = "_gattr.dat";
	protected static val graphNodeEdgePrefixFileName: String = "_gnode_edge.dat";
	protected static val attributeKeyMap: HashMap[String, String] = new HashMap[String, String]();
	
	
	/**
	 * Write attributed graph to file
	 * @param filePath - full-path file name
	 * @param graphs - array of attributed graphs
	 */
	public static def writeToFile(filePath: String, graphs: Array[AttributedGraph]) {
	
		if(!checkFileIsWritable(filePath)) {
			throw new Exception("Can't open file to wrtie");
		}
		
		// Write XML header
		writeXMLHeader();
		
		// Write each graph
		len: Int = graphs.size;
		for(i in 0..(len - 1)) {
			writeGraph(graphs(i), i);
		}
		
		// Concat files
		outputWriter: FileWriter = new FileWriter( new File(filePath));
		
		// Concat header
		copyFileContent(outputWriter, headerFileName);
		
		for(i in 0..(len -1)) {

			copyFileContent(outputWriter, graphAttributePrefixFileName + i);
			copyFileContent(outputWriter, graphNodeEdgePrefixFileName + i);
		}

		// Write footer
		outputWriter.write("</gexf>\n".bytes());
		
		outputWriter.close();
		
		// Remove all temporary files
		removeFile(headerFileName);
		
		for(i in 0..(len -1)) {
			removeFile(graphAttributePrefixFileName + i);
			removeFile(graphNodeEdgePrefixFileName + i);
		}
		
		
	}
	
	
	/**
	 * c++ function to remove file from file system
	 */
	@Native("c++", "remove((#file)->c_str())")
	protected native static def removeFile(file: String): void;

	
	/**
	 * 
	 */
	protected static def checkFileIsWritable(filePath: String): Boolean {
		val outputFile: File = new File(filePath);
		
		// Should write to directory file type
		if(outputFile.isDirectory()) {
			return false;
		}
		
		return true;
	}
	
	/**
	 * 
	 */
	protected static def writeXMLHeader() {
		
		val headerFile: File = new File(headerFileName);
		val headerWriter: FileWriter = new FileWriter(headerFile);

		val h1: String;
		val h2: String;
		val h3: String;
		
		h1 = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
		h2 = "<gexf xmlns=\"http://www.gexf.net/1.2draft\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" ";
		h3 = "xsi:schemaLocation=\"http://www.gexf.net/1.2draft http://www.gexf.net/1.2draft/gexf.xsd\" version=\"1.2\">\n";
		
		headerWriter.write(h1.bytes());
		headerWriter.write(h2.bytes());
		headerWriter.write(h3.bytes());
		
		headerWriter.close();
		
	}
	
	
	/**
	 * 
	 */
	protected static def writeGraph(graph: AttributedGraph, index: Int) {
		
		// Clear attribute key mapping
		attributeKeyMap.clear();
		
		// Write vertex and Edge to temporary file
		var tempFile: File = new File(graphNodeEdgePrefixFileName + index);
		var writer: FileWriter = new FileWriter(tempFile);
		var stringBuilder: StringBuilder = new StringBuilder();
				
		stringBuilder.add("\t\t<nodes>\n");
		writer.write(stringBuilder.result().bytes());
		
		// Write nodes
		writeNodes(writer, graph);
		
		// Write edge
		writeEdges(writer, graph);
		
		// Write close tag of graph
		writer.write("\t</graph>\n".bytes());
		writer.close();
		
		// Write Attribute to atribute temporary file
		tempFile = new File(graphAttributePrefixFileName + index);
		writer = new FileWriter(tempFile);
		
		// Write open tag of graph
		if(graph.isDirected()) {
			writer.write("\t<graph defaultedgetype=\"directed\">\n".bytes());
		} else {
			writer.write("\t<graph defaultedgetype=\"undirected\">\n".bytes());
		}
		
		// Write attribute file if there is any attribute
		if(attributeKeyMap.size() > 0) {
			writeAttributes(writer);
		}
		
		writer.close();
		
	}
	
	
	/**
	 * 
	 */
	protected static def writeNodes(writer: FileWriter, graph: AttributedGraph) {
		
		val vertexIterator: Iterator[Map.Entry[Long, Vertex]] = graph.getVertexIterator();
		var entry:Map.Entry[Long, Vertex];
		var vertex: Vertex;
		var stringBuilder: StringBuilder;
		
		// Write nodes
		while(vertexIterator.hasNext()) {
			
			entry = vertexIterator.next();
			vertex = entry.getValue();
			
			val attributesCount = vertex.getAttributesCount();
			
			if(attributesCount == 0) {
				
				// Node does not have no attribute
				throw new Exception("Node does not have attribute");
			} 
			
			stringBuilder = new StringBuilder();
			var label: String;
			var isShortTag: Boolean = false;
			
			stringBuilder.add("\t\t\t<node id=\"");
			stringBuilder.add(vertex.getId());
			stringBuilder.add("\" ");
			
			if(vertex.contains(new Attribute("label", ""))) {
				
				// Node has only label
				label = (vertex.getAttribute("label") as Attribute).value;
				stringBuilder.add("label=\"" + label + "\" ");
				
				if(vertex.getAttributesCount() == 1) {
					// If no attribute other than "label" use short notation
					isShortTag = true;
				}
			}
			
			if(isShortTag) {
				stringBuilder.add("/>\n");
			} else {
				stringBuilder.add(">\n");
			}
			
			if(!isShortTag) {
				
				// Use long notation if imply that there is an attribute
				// Write attributes
				stringBuilder.add("\t\t\t\t<attvalues>\n");
				
				var attributes: Array[Attribute] = vertex.getAttributes();
				
				for(i in attributes) {
					
					if(attributes(i).name.toString().equals("label")) {
						continue;
					}
					
					val keyId: String = getAttributeKeyIdForName(attributes(i).name);
					val value: String = attributes(i).value;
					stringBuilder.add("\t\t\t\t\t<attvalue ");
					stringBuilder.add("for=\"" + keyId +"\" ");
					stringBuilder.add("value=\"" + value + "\" />\n");
					
				}
				stringBuilder.add("\t\t\t\t</attvalues>\n");
				stringBuilder.add("\t\t\t</node>\n");
			} 
			writer.write(stringBuilder.result().bytes());
			
		} // End while loop of each vertex
		
		writer.write("\t\t</nodes>\n".bytes());
	}
	
	protected static def writeEdges(writer: FileWriter, graph: AttributedGraph) {
		
		val edgeIterator: Iterator[ Edge ] = graph.getEdgeIterator();
		var e:Edge;
		var stringBuilder: StringBuilder = new StringBuilder();
		
		stringBuilder.add("\t\t<edges>\n");
		writer.write(stringBuilder.result().bytes());
		
		// Write nodes
		while(edgeIterator.hasNext()) {
			
			e = edgeIterator.next();
			
			stringBuilder = new StringBuilder();
			stringBuilder.add("\t\t\t<edge id=\"");
			stringBuilder.add(e.getId());
			stringBuilder.add("\" source=\"");
			stringBuilder.add(e.getFrom().getId());
			stringBuilder.add("\" target=\"");
			stringBuilder.add(e.getTo().getId());
			stringBuilder.add("\" />\n");
			
			writer.write(stringBuilder.result().bytes());
			
		} // End while loop of each vertex
		
		writer.write("\t\t</edges>\n".bytes());
	}
	
	/**
	 * 
	 */
	protected static def getAttributeKeyIdForName(name:String): String {
		
		if(attributeKeyMap.containsKey(name)) {
			return attributeKeyMap.get(name).value;
		}
		size: Int = attributeKeyMap.size();
		attributeKeyMap.put(name, size.toString());
		return size.toString();
	}
	
	
	/**
	 * 
	 */
	protected static def writeAttributes(writer: FileWriter) {
		
		var stringBuilder: StringBuilder = new StringBuilder();
		
		stringBuilder.add("\t\t<attrbutes class=\"node\">\n");
		
		val attributesIterator:Iterator[Map.Entry[String, String]]  = attributeKeyMap.entries().iterator();
		var entry: Map.Entry[String, String];
		
		while(attributesIterator.hasNext()) {
			
			entry = attributesIterator.next();
			stringBuilder.add("\t\t\t<attribute id=\"");
			stringBuilder.add(entry.getValue());
			stringBuilder.add("\" title=\"");
			stringBuilder.add(entry.getKey());
			stringBuilder.add("\" type=\"string\" />\n");
			
		}
		
		stringBuilder.add("\t\t</attrbutes>\n");
		writer.write(stringBuilder.result().bytes());
		
	}
	
	
	/**
	 * 
	 */
	protected static def copyFileContent(outputWriter: FileWriter, sourceFileName: String) {
		
		reader: FileReader = new FileReader(new File(sourceFileName));
		var line: String;
		
		try {
			
			while(true) {
				line = reader.readLine();
				outputWriter.write(line.bytes());
				outputWriter.write("\n".bytes());
			}
			
		} catch(e:IOException) {
			// When end of file is reached, reader throws IOException
		}
		
		reader.close();
	}
	
}