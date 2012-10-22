package test.scalegraph.clustering.psc;

import x10.io.File;
import x10.io.FileWriter;
import x10.io.Printer;
import x10.util.ArrayBuilder;
import x10.util.HashMap;
import x10.util.Random;

import org.scalegraph.clustering.ClusteringResult;
import org.scalegraph.clustering.psc.DistClusteringResult;
import org.scalegraph.clustering.psc.ParallelSpectralClustering;
import org.scalegraph.graph.PlainGraph;
import org.scalegraph.io.EdgeListReader;
import org.scalegraph.io.ScatteredEdgeListReader;
import org.scalegraph.util.VertexInfo;
import org.scalegraph.util.Stopwatch;

public class TestParallelSpectralClustering {
    public static def main(args: Array[String]) {
    	val test_vertexInfo = false;
    	
    	val sw = new Stopwatch();
    	sw.start();
    	
    	//val dir:String = "/nfs/data1/miyuru/Graph Data Sets/R-MAT/";
    	//val dir:String = "/nfs/home/ogata/workspace/data/";
    	val dir:String = "/work0/t2gsuzumuralab/scalegraph/data/";
    	//val dir:String = "/work0/t2gsuzumuralab/ogata/Developments/data/";
    	
    	val reader:EdgeListReader = new EdgeListReader();
    	//val reader:ScatteredEdgeListReader = new ScatteredEdgeListReader();
    	
    	//val graph:PlainGraph = reader.loadFromFile(dir + "internet.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "powergrid.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "blogcatalog3.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "kronecker-40333924.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "scale-22-142055.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "scale-20-82792.dl");
    	val graph:PlainGraph = reader.loadFromFile(dir + "scale-18-39322.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "scale-16-14164.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "scale-14-5900.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "scale-12.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "scale-8.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "simple_graph.dl");
    	//val graph:PlainGraph = reader.loadFromFile(dir + "mini_graph.dl");
    	
    	//val graph:PlainGraph = reader.loadFromDir(dir + "flickr");
    	//val graph:PlainGraph = reader.loadFromDir(dir + "scattered_kronecker");
    	//val graph:PlainGraph = reader.loadFromDir(dir + "twitter-5");
    	//val graph:PlainGraph = reader.loadFromDir(dir + "twitter-10");
    	//val graph:PlainGraph = reader.loadFromDir(dir + "twitter-100");
    	//val graph:PlainGraph = reader.loadFromDir(dir + "scattered_twitter11M");
    	
    	//val graph:PlainGraph = reader.loadFromFile(dir + "simple_graph.dl");
    	
    	sw.print("graph loading finished");
    	
    	if(test_vertexInfo){
    		graph.getVertexList();
    		sw.print("get vertex list");
	    	testVertexInfo(graph);
	    	sw.print("VertexInfo.make() finished");
    	}else{
	    	val nClusters = 2;
	    	val psc = new ParallelSpectralClustering(graph, nClusters);
	    	val result = psc.run();
	    	
	    	sw.print("spectral clustering finished");
	    	Console.OUT.println(result);
	    	
	    	//write(result);
	    	
	    	/* calculate normalized cut */
	    	//printNormalizedCut(graph, result);
	    	//printNormalizedCut(graph, makeRandomClusteringResult(graph, nClusters));
	    }
    }
    
    /*private static def write(result:ClusteringResult){
    	val printer:Printer = new Printer(new FileWriter(new File("/data0/t2gsuzumuralab/ogata/ScaleGraph/result.txt")));
    	for(p in Place.places()){
    		val entries = at(p) result.VtoC().entries();
    		for(entry in entries){
    			printer.printf("%d:%d\n", entry.getKey(), entry.getValue());
    		}
    	}
    	printer.close();
    }*/
    
    private static def printNormalizedCut(graph:PlainGraph, result:ClusteringResult): Double {
    	var ncut:Double = 0.0;
    	for(var i:Int = 0; i < (result as DistClusteringResult).nClusters; i++){
    		var cut:Int = 0;
    		var deg:Int = 0;
    		val vertexList = result.getVertices(i);
    		for(vpt in vertexList){
    			val vertexID = vertexList(vpt);
    			val neighbours = graph.getNeighbours(vertexID);
    			for(npt in neighbours){
    				val neighbourID = neighbours(npt);
    				//val boxCluster = result.tryGetCluster(neighbourID);
   					deg++;
   					/*if(!contains(vertexList, neighbourID)){
   						cut++;
   					}*/
   					val box = result.tryGetCluster(neighbourID);
   					if(box == null) continue;
   					if(box() != i){
   						cut++;
   					}
    			}
    		}
    		Console.OUT.println([i] + ": cut = " + cut + ", deg = " + deg);
    		ncut += cut / (deg as Double);
    	}
    	Console.OUT.println("ncut = " + ncut);
    	return ncut;
    }
    /*private static def printNormalizedCut(graph:PlainGraph, result:ClusteringResult): Double {
    	var ncut:Double = 0.0;
    	for(var i:Int = 0; i < result.nClusters; i++){
    		var cut:Int = 0;
    		var deg:Int = 0;
    		val vertexList = result.getVertices(i);
    		for(vpt in vertexList){
    			val vertexID = vertexList(vpt);
    			val neighbours = graph.getNeighbours(vertexID);
    			for(npt in neighbours){
    				val neighbourID = neighbours(npt);
    				val boxCluster = result.tryGetCluster(neighbourID);
    				if(boxCluster != null){
    					deg++;
    					if(boxCluster() != i){
    						cut++;
    					}
    				}
    			}
    		}
    		Console.OUT.println([i] + ": cut = " + cut + ", deg = " + deg);
    		ncut += cut / (deg as Double);
    	}
    	Console.OUT.println("ncut = " + ncut);
    	return ncut;
    }
    
    private static def makeRandomClusteringResult(graph:PlainGraph, nClusters:Int): ClusteringResult {
    	val VtoC = new HashMap[Long, Int]();
    	val CtoV = new HashMap[Int, Array[Long]](nClusters);
    	val tmpLists = new Array[ArrayBuilder[Long]](nClusters, (Int) => new ArrayBuilder[Long]());
    	
    	val r = new Random();
    	val vertexList = graph.getVertexList();
    	for(p in Place.places()){
	    	for(vpt in vertexList | p){
	    		val vertexID = at(p) vertexList(vpt);
	    		if(vertexID < 0) continue;
	    		val clusterNum = r.nextInt(nClusters);
	    		VtoC.put(vertexID, clusterNum);
	    		tmpLists(clusterNum).add(vertexID);
	    	}
    	}
    	for([i] in tmpLists){
    		CtoV.put(i, tmpLists(i).result());
    	}
    	
    	return new ClusteringResult(VtoC, CtoV);
    }*/
    
    private static def contains(array:Array[Long], value:Long): Boolean {
    	for(i in array){
    		if(array(i) == value) return true;
    	}
    	return false;
    }
    
    private static def testVertexInfo(g:PlainGraph){
    	val vertexInfo = VertexInfo.make(g);
    }
}