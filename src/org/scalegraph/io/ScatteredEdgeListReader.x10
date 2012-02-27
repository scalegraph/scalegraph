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
	private val res = new GlobalRef[Cell[PlainGraph]](new Cell[PlainGraph](new PlainGraph(GraphSizeCategory.MEDIUM)));
	//private val res2 = new Array[GlobalRef[Cell[PlainGraph]]](Place.MAX_PLACES);
	//private val lrv = new Array[GlobalRef[Cell[Long]]](Place.MAX_PLACES);
	/**
	 * Default constructor 
	 */
	public def this(){		
		// for(p in Place.places()){
		// 	res2(p.id) = at(p)GlobalRef[Cell[PlainGraph]](new Cell[PlainGraph](new PlainGraph(GraphSizeCategory.MEDIUM)));
		// }
	}
	
	public def loadFromDir(dirName: String) : PlainGraph{
		val list:Array[String] = DirectoryInfo.listDirContents(dirName);
		var offset:Int = list.size/Place.MAX_PLACES;
		var placeID:Int = 0;
		val placeCount:Int = Place.MAX_PLACES;
		//val result:PlainGraph = new PlainGraph(GraphSizeCategory.MEDIUM); //We assume that the graph is medium size
		
		//val resnew = GlobalRef(result);
		
		//res()()  = result;
		
		var threadRes:Int = 0;
		var placeCounter:Int = 0;
		var totalFilesProcessed:Int = 0;
		var maxPlaces:Int = Place.MAX_PLACES;
		
		//finish for(fileName in list){
			finish for(fileName in list){
				val fullN:String = list(fileName).toString();
				val p:Place = Place.places()(placeCounter);
				
				placeCounter++;
				totalFilesProcessed++;
				
				Console.OUT.println("Total files processed : " + totalFilesProcessed);
				
				if(placeCounter > maxPlaces){
					placeCounter = 0;
				}
								
				
				//val id:Int = totalFilesProcessed;
				at(p){
				async {
					//finish{
					//var totalLinesProcessed:Int = 0;

					
				Console.OUT.println("At place : " + p.id + " Reading file : " + fullN);
				//Console.OUT.println("At place : " + id + " Reading file : " + list(fileName));
				
				var reader: FileReader = new FileReader(new File(fullN));
				var line:String = "";
				//var bulkResult:String = "";
						
				val arraySize = 1000;
				var bulkArr:Array[String] = new Array[String](arraySize);
				var counter:Int = 0;
				var fileReadCounter:Int = 0;
				
												
				//finish{
					while(true){
						//finish{
						try{
							//totalLinesProcessed++;
							
							// if((totalLinesProcessed%100)==0){
							// 	Console.OUT.println("Read file : " + fullN + " line : " + totalLinesProcessed);
							// }
							
							line = reader.readLine();
							fileReadCounter++;
							if(line==null){
								if(counter != 0){
									val rembulk = bulkArr;
									
									//at(res2(p.id)) res2(p.id)()().addEdges(rembulk);
									at(res) res()().addEdges(rembulk);
									//resnew().addEdges(bulkArr);
									//result.addEdges(bulkArr);
								}
								Console.OUT.println("At place : " + p.id + " Done Reading file : " + fullN);
								//System.sleep(20000);
								
								break;
							}
							
							
														
							if(line.indexOf("Data") != -1){
								continue;
							}
							
							//atomic{							
							if (counter < arraySize){
								bulkArr(counter) = line;
								counter++;
							}else{
								counter = 0;
								
								//async{
								val rembulk = bulkArr;
								
								//at(res2(p.id)) res2(p.id)()().addEdges(rembulk);
								at(res) res()().addEdges(rembulk);
									//res()().addEdges(bulkArr);
									//resnew().addEdges(bulkArr);
									//result.addEdges(bulkArr);
								//}
								
								bulkArr = new Array[String](arraySize);
							}		
							//}
						}catch(IOException){  			
							if(counter != 0){
								val rembulk = bulkArr;
								//at(res2(p.id)) res2(p.id)()().addEdges(rembulk);
								at(res) res()().addEdges(rembulk);
								//res()().addEdges(bulkArr);
								//resnew().addEdges(bulkArr);
								//result.addEdges(bulkArr);
							}
							Console.OUT.println("At place : " + p.id + " Done Reading file : " + fullN);
							//System.sleep(20000);
							break;
						}
						//}
					}
					//}
				}
				
			 };
			// placeID++;
			// 
			// if(placeID >= placeCount){
			// 	placeID = 0;
			// }
		}
			
		Console.OUT.println("Done Reading all the files. Now Returning...");
		
		//return res2(0)()();
		return res()();
		//return resnew();
		//return result;
	}
}