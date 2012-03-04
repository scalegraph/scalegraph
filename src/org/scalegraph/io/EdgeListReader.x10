package org.scalegraph.io;

import x10.io.FileReader;
import x10.io.File;
import x10.io.IOException;
import x10.util.Pair;

import org.scalegraph.graph.PlainGraph; 
import org.scalegraph.graph.GraphSizeCategory; 

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
    	var result:PlainGraph = new PlainGraph(GraphSizeCategory.MEDIUM); //This is a small graph
    	var line:String = "";
    	var bulkResult:String = "";
    	
    	//Read the header
    	line = reader.readLine();
    	
    	if(!(line.toLowerCase()).equals("dl")){
    		throw new Exception("The first line of an Edgelist file should be DL. File format unrecognized.");
    	}
    	
    	//Read the number of nodes
    	line = reader.readLine();
    	var strArr:Array[String] = line.split("=");
    	val n:Long = Long.parse(strArr(1).trim());
    	
    	if(n> (Math.pow(2, GraphSizeCategory.MEDIUM) * Place.MAX_PLACES)){
    		throw new Exception("The graph size is " + n + " Nodes. It exceeds the library's designed capacity of the compute cluster. Please select a different method for loading.");
    	}

    	//Read the next line. The line should describe the format as EdgeList.
    	line = reader.readLine();
    	strArr = line.split(" ");
    	
    	// if(!strArr(strArr.size - 1).equals("edgelist")){
    	// 	throw new Exception("The format is not Edgelist.");
    	// }

    	//Read the next line. The line should indicate that labels are embedded or not
    	line = reader.readLine();
    	val arraySize = 1000;
    	var bulkArr:Array[String] = new Array[String](arraySize);
    	var tempArr:Array[String] = new Array[String](arraySize);
    	var counter:Int = 0;
    	var totalLinesRead:Int = 0;
    	
	    	while(true){
	    		try{
	    			line = reader.readLine();
	    			
	    			if(line.indexOf("Data") != -1){
	    				continue;
	    			}
	    			
	    			totalLinesRead++;
	    			
	    			if (counter < arraySize){
	    				//Console.OUT.println("++-> " + line);
	    				bulkArr(counter) = line;
	    				counter++;
	    			}else{
	    				counter = 0;
	    				//Array.copy(bulkArr, tempArr);
	    				//async{
	    					//result.addEdges(tempArr);
	    				//}
	    				
	    				//async{
	    					result.addEdges(bulkArr);
	    				//}
	    				bulkArr = new Array[String](arraySize);
	    				bulkArr(counter) = line;//This is to account for 1000th line
	    				counter++;
	    			}
	    			
	    			// var p:Object = line as Object;
	    			// Console.OUT.println("oooooooooo -->" + p);
	    			//result.addEdge(p);    			
	    			
	    		}catch(IOException){  			
	    			if(counter != 0){
    					result.addEdges(bulkArr);
	    			}
	    			
	    			break;
	    		}
	    	}
	    	
    	return result;
    }
}