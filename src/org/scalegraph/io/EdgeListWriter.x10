package org.scalegraph.io;

import x10.io.FileWriter;
import x10.io.File;

import org.scalegraph.graph.PlainGraph;

/**
 * Class EdgeListWriter
 */
public class EdgeListWriter {
    /**
     * This class writes a PlainGraph in to an edgelist file
     */
    public def this() {

    }
    
    public def writeToFile(filePath:String, graph:PlainGraph){
    	writer : FileWriter = openFile(filePath);
        write(writer, graph);
        writer.close();
    }
    
    private def openFile(filePath:String):FileWriter{
    	var outFile: File = new File(filePath);
    	var writer: FileWriter;
    	

    	if(outFile.isDirectory()) {
    		throw new Exception("Can't write to a directory. Please chack the file's path.");
    	}
    	
    	writer = new FileWriter(outFile);
    	return writer;
    }
    
    private def write(writer:FileWriter, graph:PlainGraph){
    	writer.write("DL\n".bytes());
    	writer.write("n = ".bytes());
    	writer.write((""+(graph.getGraphSizeCategory()*Place.MAX_PLACES) + "\n").bytes());
    	writer.write("Format = edgelist\n".bytes());
    	writer.write("Labels embedded\n".bytes());
    	writer.write("Data:\n".bytes());
    	
    	for(p in Place.places()){
    		edges:String = graph.getEdgesAsString(p);
    		
    		if(edges != null){
    			writer.write(edges.bytes());
    		}
    	}   	
    }
    
}
