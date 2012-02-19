package test.scalegraph.generator;

import org.scalegraph.generator.randomized.RMAT;
import org.scalegraph.graph.Graph;
import org.scalegraph.graph.PlainGraph;

import org.scalegraph.io.EdgeListWriter;

import x10.util.Random;

public class TestRMAT{
	
    public static def main(args: Array[String]) {
    	Console.OUT.println("--------------------- Start RMAT Generator Test --------------------");
    	Console.OUT.println("Start generatin at : " + System.currentTimeMillis());
    	val gen:RMAT = new RMAT();
    	val scale:Int = 12;
    	val a:double = 0.1;
    	val b:double = 0.2;
    	val c:double = 0.3;
    	val d:double = 0.4;
    	val seed:Long = 2;
    	
    	Console.OUT.println("scale = " + scale);
    	val graph:Graph = gen.generate(scale, a, b, c, d, seed);
    	
    	Console.OUT.println("Done generatin at : " + System.currentTimeMillis());
    	
    	//(graph as PlainGraph).printCont();
    	
    	val edw:EdgeListWriter = new EdgeListWriter();
    	edw.writeToFile(("rmat_" + scale + ".dl"), (graph as PlainGraph));
    	
    	Console.OUT.println("--------------------- End RMAT Generator Test ----------------------");
    } 
}