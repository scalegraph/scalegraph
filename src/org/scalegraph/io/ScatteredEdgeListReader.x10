package org.scalegraph.io;

import x10.io.FileReader;
import x10.io.File;
import x10.io.IOException;
import x10.util.Pair;

import org.scalegraph.graph.PlainGraph; 
import org.scalegraph.graph.GraphSizeCategory; 
import org.scalegraph.util.DirectoryInfo;

/**
 * Class ScatteredEdgeListreader
 */
public class ScatteredEdgeListReader {
	/**
	 * Default constructor 
	 */
	public def this(){
		
	}
	
	public def loadFromDir(dirName: String) : PlainGraph{
		val list:Array[String] = DirectoryInfo.listDirContents(dirName);
		var offset:Int = list.size/Place.MAX_PLACES;
		var placeID:Int = 0;
		val placeCount:Int = Place.MAX_PLACES;
		val result:PlainGraph = new PlainGraph(GraphSizeCategory.MEDIUM); //We assume that the graph is medium size
		
		finish for(fileName in list){
			async {
				
				Console.OUT.println("Reading file : " + list(fileName));
				
				var reader: FileReader = new FileReader(new File(list(fileName).toString()));
				var line:String = "";
				var bulkResult:String = "";
						
				val arraySize = 1000;
				var bulkArr:Array[String] = new Array[String](arraySize);
				var tempArr:Array[String] = new Array[String](arraySize);
				var counter:Int = 0;
												
				finish{
					while(true){
						try{
							line = reader.readLine();
														
							if(line.indexOf("Data") != -1){
								continue;
							}
							
							atomic{							
							if (counter < arraySize){
								bulkArr(counter) = line;
								counter++;
							}else{
								counter = 0;
								
								result.addEdges(bulkArr);
								
								bulkArr = new Array[String](arraySize);
							}		
							}
						}catch(IOException){  			
							if(counter != 0){
								result.addEdges(bulkArr);
							}
							
							break;
						}
					}
				}
			}
			placeID++;
			
			if(placeID >= placeCount){
				placeID = 0;
			}
		}
		
		return result;
	}
}