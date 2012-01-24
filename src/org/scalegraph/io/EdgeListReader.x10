package org.scalegraph.io;

import x10.io.FileReader;
import x10.io.File;
import x10.io.IOException;
import x10.util.Pair;

import org.scalegraph.graph.PlainGraph; 

/**
 * Class EdgeListReader
 */
public class EdgeListReader {
    /**
     * Default constructor 
     */
    public def this(){
    	
    }
    
    public def loadFromFile(fileName: String) : PlainGraph{
    	var reader: FileReader = new FileReader(new File(fileName));
    	var result:PlainGraph = new PlainGraph();
    	var line:String = "";
    	
    	//Read the header
    	line = reader.readLine();
    	
    	if(!line.equals("DL")){
    		throw new Exception("The first line of an Edgelist file should be DL. File format unrecognized.");
    	}
    	
    	//Read the number of nodes
    	line = reader.readLine();
    	var strArr:Array[String] = line.split("=");
    	val n:Long = Long.parse(strArr(1).trim());
    	
    	if(n>1073741824){//This is 2^30
    		throw new Exception("The graph size is 1 billion Nodes. Please select a different method for loading.");
    	}

    	//Read the next line. The line should describe the format as EdgeList.
    	line = reader.readLine();
    	strArr = line.split(" ");
    	
    	if(!strArr(strArr.size - 1).equals("edgelist")){
    		throw new Exception("The format is not Edgelist.");
    	}

    	//Read the next line. The line should indicate that labels are embedded or not
    	line = reader.readLine();
    	
    	while(true){
    		try{
    			line = reader.readLine();
    			
    			if(line.indexOf("Data") != -1){
    				continue;
    			}
    			
    			var p:Object = line as Object;
    			Console.OUT.println("oooooooooo -->" + p);
    			result.addEdge(p);
    		}catch(IOException){
    			break;
    		}
    	}
    	
    	return result;
    }
}