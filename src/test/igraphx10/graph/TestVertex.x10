package test.scalegraph.graph;

import org.scalegraph.graph.*;
import org.scalegraph.util.Date;
import x10.util.*;

public class TestVertex {
	
    public static def main(args: Array[String]) {
  	
    	TestVertexEquality();
    	TestVertexToString();
    	Console.OUT.println("Passed all testcases");
    }
    
    public static def TestVertexEquality() {
    	
    	var a1: Attribute = new IntAttribute("My", 1024);
    	var a2: Attribute = new IntAttribute("My", 1024);
    	var v1: Vertex = new Vertex(a1);
    	var v2: Vertex = new Vertex(a2);
    
    	// Test against itself
    	assert(v1.equals(v1) == true);
    	assert(v1.compareTo(v1) == 0);
    	
    	// Same type, same name, sam value
    	assert(v1.equals(v2) == true);
    	assert(v1.compareTo(v2) == 0);
    	
    	// Number type, same name, same value
    	a1 = new IntAttribute("graph", 1024);
    	a2 = new LongAttribute("graph", 1024);
    	v1 = new Vertex(a1);
    	v2 = new Vertex(a2);
    	
    	assert(v1.equals(v2) == true);
    	assert(v1.compareTo(v2) == 0);
    	
    	// Number type, same name, same value
    	a1 = new ByteAttribute("load", 127);
    	a2 = new DoubleAttribute("load", 127.0D);
    	v1 = new Vertex(a1);
    	v2 = new Vertex(a2);
    	
    	assert(v1.equals(v2) == true);
    	assert(v1.compareTo(v2) == 0);
    	
    	// Number and String type, same name, same value
    	a1 = new ByteAttribute("load", 127);
    	a2 = new StringAttribute("load", "127");
    	v1 = new Vertex(a1);
    	v2 = new Vertex(a2);
    	
    	assert(v1.equals(v2) == false);
    	assert(v1.compareTo(v2) != 0);
 
    }
    
    public static def TestVertexToString() {
    	val attributes = new ArrayList[Attribute]();
    	
    	attributes.add(new IntAttribute("graph", 1024) as Attribute); 
    	attributes.add(new StringAttribute("Day", "Monday") as Attribute);
    	attributes.add(new DateAttribute("Date", new Date(2012, 1, 5)) as Attribute);
    	
    	v: Vertex = new Vertex(attributes);
    	
    	Console.OUT.println("-------Test Vertex.toString()---------");
    	Console.OUT.println(v);
    	Console.OUT.println(new Vertex(new IntAttribute("age", 18)));

    }
}