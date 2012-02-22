package test.scalegraph.io;

import x10.util.StringBuilder;

import org.scalegraph.graph.PlainGraph;
import org.scalegraph.io.ScatteredEdgeListReader;

/**
 * This class tests the ScatteredEdgeListReader class
 */
public class TestScatteredEdgeListReader {

    public static def main(args: Array[String]) {
        var reader:ScatteredEdgeListReader = new ScatteredEdgeListReader();
        var graph:PlainGraph = null;
        
        Console.OUT.println("--------------------- Start ScatteredEdgeListReader Test --------------------");
        
        //graph = reader.loadFromDir("/nfs/data1/miyuru/Graph Data Sets/R-MAT/scale12-scattered");
        
        graph = reader.loadFromDir("/data0/t2gsuzumuralab/miyuru/data/scale12-scattered");
                
        var vcount:Long = graph.getVertexCount();
        
        Console.OUT.println("Total vertex count : " + vcount);
        
        // val uqverts:DistArray[Long] = graph.getVertexList();
        // 
        // for(p:Place in Place.places()){
        // 	val r:Region = uqverts.dist.get(p);
        // 	
        // 	at(p){
        // 		for(point:Point in r){
        // 			Console.OUT.print(uqverts(point) + ",");
        // 		} 			
        // 	};
        // }         
        
        var re:StringBuilder = new StringBuilder();
        
        for(p:Place in Place.places()){
        	re.add(graph.getEdgesAsString(p));
        }
        
        Console.OUT.println(re.toString());
        
        Console.OUT.println("--------------------- End ScatteredEdgeListReader Test --------------------");
    }
}