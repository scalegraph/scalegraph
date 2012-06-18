package test.scalegraph.patternmatching;

import x10.util.ArrayList;

import org.scalegraph.patternmatching.PatternMatching;
import org.scalegraph.patternmatching.PatternMatchingResult;
import org.scalegraph.io.WeightedGraphReader;
import org.scalegraph.graph.Vertex;
import org.scalegraph.graph.Edge;
import org.scalegraph.graph.AttributedGraph;
import org.scalegraph.util.DirectoryInfo;


/**
 * Class TestPatternmatching
 */
public class TestPatternMatching {
    /**
     * Main method 
     */
    public static def main(args: Array[String]) {
    	/*val reader:EdgeListReader = new EdgeListReader();
    	var testG:PlainGraph = reader.loadFromFile("/data0/t2gsuzumuralab/miyuru/data/scale-16.dl");
    	var obj:PatternMatching = new PatternMatching();
    	var result:PatternMatchingResult = obj.run(testG);*/
    	
    	var obj:PatternMatching = new PatternMatching();
    	
    	//This code segment splits the data provided by Al Hasan et al.
    	var dataDir:String = "./temp_graphs";
    	var splitter:FileSplitter = new FileSplitter(); 
    	splitter.split("/nfs/data1/scalegraph/data/pattern-dataset/GRAPH_large.dat", dataDir);
    	
    	var list:Array[String] = DirectoryInfo.listDirContents(dataDir);
    	
    	var graphlist:ArrayList[AttributedGraph] = new ArrayList[AttributedGraph]();
    	
    	for(item in list){
    		Console.OUT.println("Reading file : " + list(item));
    		var rdr:WeightedGraphReader = new WeightedGraphReader();
    		var attrib:AttributedGraph = rdr.loadFromFile(list(item));
    		graphlist.add(attrib);
    		/*
    		//Just print the contents
    		var vertArray:Array[Vertex] = attrib.getVertexList();
    		
    		for(item2 in vertArray){
    			Console.OUT.println(vertArray(item2).toString());
    			
    			var listOfEdges:Array[Edge] = attrib.getEdgesByVertexId(vertArray(item2).getAttribute("id").getValue() as Int).toArray();
    			
    			for(item3 in listOfEdges){
    				Console.OUT.println(listOfEdges(item3).toString());
    			}
    		}
    		*/
    		
    	}
    	
    	obj.run(graphlist);
    }
}