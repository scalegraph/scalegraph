package org.scalegraph.io;

import x10.io.File;
import x10.io.FileNotFoundException;
import x10.io.FileWriter;
import x10.util.Map;
import x10.util.StringBuilder;

import org.scalegraph.graph.*;;

public class GMLWriter {

    
    /**
     * Write attributed graph to file
     * @param filePath - full-path file name
     * @param graph - attributed graphs
     */
    public static def writeToFile(filePath: String, graph: AttributedGraph) {
    	
    	writer : FileWriter = openFileToWrite(filePath);
    	writeGraph(writer, graph);
    	writer.close();
    
    }
    
    /**
     * Create file writer from given file path
     * @param filePath - full-path file name to open
     * @return FileWriter
     */
    public static def openFileToWrite(filePath: String) : FileWriter {
    	var outputFile: File = new File(filePath);
    	var writer: FileWriter;
    	
    	// Do not write to directory file
    	if(outputFile.isDirectory()) {
    		throw new Exception("Can't write to directory");
    	}
    	
    	writer = new FileWriter(outputFile);
    	return writer;
    }
    
    /**
     * Write graph to opened filewriter stream
     * @param graph - attributed graph to write
     */
    protected static def writeGraph(writer: FileWriter, graph: AttributedGraph) {
    	
    	// Write graph object
    	writer.write("graph [\n".bytes());
    	
    	var attributes: Array[Attribute];
    	var stringBuilder: StringBuilder;
   
    	// Write graph directness
    	if(graph.isDirected() == true) {
    		writer.write("    directed 1\n".bytes());
    	} else {
    		writer.write("    directed 0\n".bytes());
    	}
    	
    	// write vertices
    	vertexIterator: Iterator[Map.Entry[Long, Vertex]] = graph.getVertexIterator();
    	var entry:Map.Entry[Long, Vertex];
    	var vertex: Vertex;
    	
    	while(vertexIterator.hasNext()) {
    		entry = vertexIterator.next();
    		vertex = entry.getValue();    		
    		
    		stringBuilder = new StringBuilder();
    		stringBuilder.add("    node [\n");
    		 		
    		// Write attributes
    		attributes = vertex.getAttributes();
    		for(i in attributes) {
    			stringBuilder.add(getAttributeString(attributes(i)));
    		}
    		stringBuilder.add("    ]\n");
    		writer.write(stringBuilder.result().bytes());
    	}
    	
    	// Write edges
    	edgeIterator: Iterator[Edge] = graph.getEdgeIterator();
    	var edge: Edge;
    	var from: Long = -1L;
    	var to: Long = -1L;
    	
    	while(edgeIterator.hasNext()) {
    		
    		edge = edgeIterator.next();
    		
    		fromIdAttribute: Attribute = edge.getFrom().getAttribute("id");
    		toIdAttribute: Attribute = edge.getTo().getAttribute("id");
    		
    		// Check whether vertex id was defined or not
    		if(fromIdAttribute == null || toIdAttribute == null) {
    			throw new Exception("id was not defined");
    		}
    		
    		// Convert id attribute to long
    		if(fromIdAttribute instanceof LongAttribute ||
    			fromIdAttribute instanceof IntAttribute ||
    			fromIdAttribute instanceof ShortAttribute ||
    			fromIdAttribute instanceof ByteAttribute) {
    			from = fromIdAttribute.getValue() as Long;
    		} else {
    			// Invalid id attribute type
    			throw new Exception("Invalid id attribute type");
    		}
    		if(toIdAttribute instanceof LongAttribute ||
    			toIdAttribute instanceof IntAttribute ||
    			toIdAttribute instanceof ShortAttribute ||
    			toIdAttribute instanceof ByteAttribute) {
    			to = toIdAttribute.getValue() as Long;
    		} else {
    			// Invalid id attribute type
    			throw new Exception("Invalid id attribute type");
    		}
    		
    		stringBuilder = new StringBuilder();
    		stringBuilder.add("    edge [\n");
    		stringBuilder.add("        source ");
    		stringBuilder.add(from);
    		stringBuilder.add('\n');
    		
    		stringBuilder.add("        target ");
    		stringBuilder.add(to);
    		stringBuilder.add('\n');
    		
    		// Write attributes
    		attributes = edge.getAttributes();
    		if(attributes != null) {
    			for(i in attributes) {
    				stringBuilder.add(getAttributeString(attributes(i)));
    			}
    		}
    		stringBuilder.add("    ]\n");
    		writer.write(stringBuilder.result().bytes());
    	}
    
    	// End of graph
    	writer.write("]\n".bytes());
    	
    }
    
    protected static def getAttributeString(a: Attribute): String {
    	
    	stringBuilder: StringBuilder = new StringBuilder();
    	var name: String = a.getName();
    	var value: String;
    	
    	if(a instanceof ByteAttribute ||
    			a instanceof ShortAttribute ||
    			a instanceof IntAttribute ||
    			a instanceof LongAttribute ||
    			a instanceof FloatAttribute ||
    			a instanceof DoubleAttribute) { 
    		// Number type
    		value = a.getValue().toString();
    	} else {
    		// Other type treat as string
    		value = "\"" + a.getValue().toString() + "\"";
    	}
    	
    	stringBuilder.add("        ");
    	stringBuilder.add(name);
    	stringBuilder.add(' ');
    	stringBuilder.add(value);
    	stringBuilder.add('\n');
    	
    	return stringBuilder.result();
    }
}