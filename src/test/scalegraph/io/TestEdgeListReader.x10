package test.scalegraph.io;

import org.scalegraph.io.EdgeListReader;
import org.scalegraph.io.EdgeListWriter;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.graph.VertexArrays;

/**
 * Class TestEdgeListReader
 */
public class TestEdgeListReader {
    /**
     * Main method 
     */
    public static def main(args: Array[String]) {
    	Console.OUT.println("--------------------- Start EdgeListReader Test --------------------");
    	
        val reader:EdgeListReader = new EdgeListReader();
        Console.OUT.println("Start loading at : " + System.currentTimeMillis());
        //val testG:PlainGraph = reader.loadFromFile("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale-8.dl");
        val testG:PlainGraph = reader.loadFromFile("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale-18-39322.dl");
        
        //val testG:PlainGraph = reader.loadFromFile("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale-16.dl");
        //var testG:PlainGraph = reader.loadFromFile("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale12/scale-12-3628.dl");
        
        //val testG:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-12-3628.dl");
        
        //val testG:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-16.dl");
        //val testG:PlainGraph = reader.loadFromFile("/nfs/data1/miyuru/Graph Data Sets/R-MAT/mini_graph.dl");
        
        //var testG:PlainGraph = reader.loadFromFile("/nfs/data1/miyuru/twitter-kaist/newdata.dl");
        //var testG:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/newdata.dl");
        
        //val testG:PlainGraph = reader.loadFromFile("/work0/t2gsuzumuralab/scalegraph/data/scale-8.dl");
        
        Console.OUT.println("Done loading at : " + System.currentTimeMillis());
        
        //testG.printCont();
        
        var vcount:Long = testG.getVertexCount();
                
        Console.OUT.println("Total vertex count : " + vcount);
        
        val uqverts:DistArray[Long] = testG.getVertexList();
        
        Console.OUT.print("Unique vertices array size");
        
       /* 
        for(p:Place in Place.places()){
        	val r:Region = uqverts.dist.get(p);
        	
        	at(p){
        		for(point:Point in r){
        			Console.OUT.print(uqverts(point) + ",");
        		} 			
        	};
        }    */
        

        
        finish for(p:Place in Place.places()){
        	val r:Region = uqverts.dist.get(p);
        	//Console.OUT.print("Got dist");
        	at(p){
        		for(point:Point in r){
        			if(uqverts(point) != -1l){
        				Console.OUT.print(uqverts(point) + ",");
//         			val re:Array[Long] = testG.getNeighbours(uqverts(point));
// 
//         			if(re != null){
//         				for(item in re){
//         					Console.OUT.print(re(item) + ",");
//         				}
//         			}

        			//Console.OUT.println();
        			}
        		} 			
        	};
        } 
        
        /*
        val uqverts:VertexArrays = testG.getVertexListDualArrays();
        
        finish for(p:Place in Place.places()){
        	val r:Region = uqverts.preArray.dist.get(p);
        	at(p){
        		for(point:Point in r){
        			if(uqverts.preArray(point) != -1l){
        				Console.OUT.print(uqverts.preArray(point) + ",");
        			}
        		} 			
        	};
        }
        
        for(item in uqverts.postArray){
        	Console.OUT.print(uqverts.postArray(item) + ",");
        }
        */
        // val edw:EdgeListWriter = new EdgeListWriter();
        // edw.writeToFile(("8-from-plain-graph.dl"), testG as PlainGraph);
        
        Console.OUT.println("--------------------- End EdgeListreader Test ----------------------");
    }
}