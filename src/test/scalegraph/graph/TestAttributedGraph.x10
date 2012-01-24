package test.scalegraph.graph;

import org.scalegraph.graph.*;
import x10.util.*;

public class TestAttributedGraph {
	
    public static def main(args: Array[String]) {
    	Console.OUT.println("---------------------Start Attributed Graph Test--------------------");
    	
    	testAddVertex();
    	testAddEdge();
    	testConstructorWithVertexListParam();
    	testConstructorWithVertexListAndEdgeListParam();
    	testAddVertexExceptionMessage();
    	testAddEdgeExceptionMessage();
    	testAddEdgeDontFollowSchemaException();
    	
    	// Undirected graph and neigbor methods
    	testGetNeighborsUndirectedGraph();
    	testGetInNeighborsUndirectedGraph();
    	testGetOutNeighborsUndirectedGraph();
    	
    	// Directed graph and neighbor methods
    	testGetNeighborsDirectedGraph();
    	testGetInNeighborsDirectedGraph();
    	testGetOutNeighborsDirectedGraph();
    	
    	testAddVerticesAndAddEdges();
    	
    }
    
    private static def testAddVertex() {
    	
    	v1:Vertex = new Vertex( new StringAttribute("Label", "Tokyo"));
    	v2:Vertex = new Vertex( new StringAttribute("Label", "Blue Gene"));
    	g: AttributedGraphMock = new AttributedGraphMock();
    	
    	g.addVertex(v1);
    	g.addVertex(v2);
    	
    	g.printVertexList();
    	
    }
    
    private static def testAddEdge(){
    	Console.OUT.println("\n------testAddEdge--------");
    	
    	// Create schema
    	schema: AttributeSchema = new AttributeSchema();
    	schema.add("name", AttributeSchema.StringAttribute);
    	
    	v0:Vertex = new Vertex( new StringAttribute("name", "Tokyo"));
    	v1:Vertex = new Vertex( new StringAttribute("name", "Osaka"));
    	v2:Vertex = new Vertex( new StringAttribute("name", "Yokohama"));
    	v3:Vertex = new Vertex( new StringAttribute("name", "Kanagawa"));
    	v4:Vertex = new Vertex( new StringAttribute("name", "Meguro"));
    	v5:Vertex = new Vertex( new StringAttribute("name", "akibahara"));
    	
    	g: AttributedGraphMock = new AttributedGraphMock();
    	
    	g.setVertexAttributeSchema(schema);
    	g.addVertex(v0);
    	g.addVertex(v1);
    	g.addVertex(v2);
    	g.addVertex(v3);
    	g.addVertex(v4);
    	g.addVertex(v5);
    	
    	e0: Edge = new Edge(v1,v2);
    	e1: Edge = new Edge(v3,v4);
    	e2: Edge = new Edge(v5,v0);
    	e3: Edge = new Edge(v4,v2);
    	e4: Edge = new Edge(v1,v5);
    
    	g.addEdge(e0);
    	g.addEdge(e1);
    	g.addEdge(e2);
    	g.addEdge(e3);
    	g.addEdge(e4);
	    
	    g.printVertexList();
	    g.printSourceVertexList();
	    g.printDestinationVertexList();
    }
    
   private static def testConstructorWithVertexListParam() {
	   
	   Console.OUT.println("\n------testConstructorWithVertexListParam--------");
	   
	  	vertexList: ArrayList[Vertex] = new ArrayList[Vertex]();
   	vertexList.add(new Vertex( new StringAttribute("Brand", "Volkswagen") ));
   	vertexList.add(new Vertex( new StringAttribute("Brand", "BMW") ));
   	vertexList.add(new Vertex( new StringAttribute("Brand", "Honda") ));
   	g: AttributedGraph = new AttributedGraph(vertexList);
   	
   	AttributedGraphMock.printVertexList(g);
  
   }
   
   private static def testConstructorWithVertexListAndEdgeListParam() {
	   
	   Console.OUT.println("\n------testConstructorWithVertexListAndEdgeListParam--------");
	   
	   vertexList: ArrayList[Vertex] = new ArrayList[Vertex]();
   	vertexList.add(new Vertex( new StringAttribute("Brand", "Volkswagen") ));
   	vertexList.add(new Vertex( new StringAttribute("Brand", "BMW") ));
   	vertexList.add(new Vertex( new StringAttribute("Brand", "Honda") ));
   	
   	edgeList: ArrayList[Edge] = new ArrayList[Edge]();
   	
   	edgeList.add(
   			new Edge(new Vertex( new StringAttribute("Brand", "Volkswagen")),
   			new Vertex(new StringAttribute("Brand", "BMW")))
   			);
   	
   	edgeList.add(
   			new Edge(new Vertex( new StringAttribute("Brand", "BMW")),
   					new Vertex(new StringAttribute("Brand", "Honda")))
   		);
   	
   	g: AttributedGraph = new AttributedGraph(vertexList, edgeList);
   
   	
   	AttributedGraphMock.printVertexList(g);
   	AttributedGraphMock.printEdgeList(g);
   }
   
   private static def testAddVertexExceptionMessage() {
	   
	   Console.OUT.println("\n------testAddVertexExceptionMessage--------");
	   try {
			g: AttributedGraphMock = new AttributedGraphMock();
			g.addVertex(new Vertex(new IntAttribute("Row", 13)));
			g.addVertex(new Vertex(new IntAttribute("Row", 13)));
	   } catch (e:Exception) {
		   Console.OUT.println(e);
	   }
   }
   
   private static def testAddEdgeExceptionMessage() {
	   
	   Console.OUT.println("\n------testAddEdgeExceptionMessage--------");
	   
	   /// Test source vertex
	   try {
			g: AttributedGraphMock = new AttributedGraphMock();
	   	g.addEdge(
	   		new Edge(
	   			new Vertex(new StringAttribute("city", "Tokyo")),
	   			new Vertex(new StringAttribute("city", "Osaka"))
	   			)		
	   		);

	   } catch (e:Exception) {
		   Console.OUT.println(e);
	   }
	   
	   // Test destination vertex
	   try {
		   g: AttributedGraphMock = new AttributedGraphMock();
	   g.addVertex(new Vertex(new StringAttribute("city", "Tokyo")));
	   g.addEdge(
			   new Edge(
					new Vertex(new StringAttribute("city", "Tokyo")),
					new Vertex(new StringAttribute("city", "Osaka"))
			   )		
	   );

	   } catch (e:Exception) {
		   Console.OUT.println(e);
	   }
   }
   
   private static def testAddEdgeDontFollowSchemaException() {
	   
	   Console.OUT.println("\n------testAddEdgeDontFollowSchemaException--------");
	   try {
		    g: AttributedGraphMock = new AttributedGraphMock();
	   	g.addVertex(new Vertex(new StringAttribute("city", "Tokyo")));
	   	g.addVertex(new Vertex(new StringAttribute("city", "Osaka")));
	   	g.addEdge(
			   new Edge(
					new Vertex(new StringAttribute("city", "Tokyo")),
					new Vertex(new StringAttribute("city", "Osaka"))
			   )
	   		);
	   	
	   	g.addEdge(
	   		new Edge(
	   			new Vertex(new StringAttribute("city", "Tokyo")),
	   			new Vertex(new StringAttribute("city", "Osaka")),
	   			new StringAttribute("Volk")
	   			)	   			
	   		);

	   } catch (e:Exception) {
		   Console.OUT.println(e);
	   }
   }
    
   private static def testGetNeighborsUndirectedGraph() {
	   
	   Console.OUT.println("\n------testGetNeighbors (undirected)--------");
	   g: AttributedGraph = new AttributedGraph();
   	val v1 = new Vertex(new StringAttribute("name", "Satoshi"));
   	val v2 = new Vertex(new StringAttribute("name", "Naoto"));
   	val v3 = new Vertex(new StringAttribute("name", "Aoi"));
   	val v4 = new Vertex(new StringAttribute("name", "Watanabe"));
   	g.addVertex(v1);
   	g.addVertex(v2);
   	g.addVertex(v3);
   	g.addVertex(v4);
   	
   	val e1: Edge = new Edge(v1, v2);
   	val e2: Edge = new Edge(v1, v3);
   	val e3: Edge = new Edge(v2, v4);
   	val e4: Edge = new Edge(v3, v4);
   	
   	g.addEdge(e1);
   	g.addEdge(e2);
   	g.addEdge(e3);
   	g.addEdge(e4);
   	
   	AttributedGraphMock.printGetNeighbors(g);
   	
   }
   
   private static def testGetInNeighborsUndirectedGraph() {
	   
	   Console.OUT.println("\n------testGetInNeighbors (undirected)--------");
	   g: AttributedGraph = new AttributedGraph();
	   val v1 = new Vertex(new StringAttribute("name", "Satoshi"));
	   val v2 = new Vertex(new StringAttribute("name", "Naoto"));

	   g.addVertex(v1);
	   g.addVertex(v2);
	   
	   val e1: Edge = new Edge(v1, v2);
	   g.addEdge(e1);
	   
	   // Undirected graph call getInNeighbors should throw UnsupportedOPerationException
	   try {
		   g.getInNeighbors(v1);
	   } catch (e: Exception) {
		   assert(e.typeName().equals((new UnsupportedOperationException()).typeName()));
		   Console.OUT.println("Passed");
		   return;
	   }
	   
	   // Test failed, we dont expect this line to run
	   assert false: "calling g.getInNeighbors should throw exceptin";
   }
   
   private static def testGetOutNeighborsUndirectedGraph() {
	   
	   Console.OUT.println("\n------testGetOutNeighbors (undirected)--------");
	   g: AttributedGraph = new AttributedGraph();
	   val v1 = new Vertex(new StringAttribute("name", "Satoshi"));
	   val v2 = new Vertex(new StringAttribute("name", "Naoto"));

	   g.addVertex(v1);
	   g.addVertex(v2);

	   val e1: Edge = new Edge(v1, v2);

	   g.addEdge(e1);

	   // Undirected graph call getInNeighbors should throw UnsupportedOPerationException
	   try {
		   g.getOutNeighbors(v1);
	   } catch (e: Exception) {
		   assert(e.typeName().equals((new UnsupportedOperationException()).typeName()));
		   Console.OUT.println("Passed");
		   return;
	   }
	   
	   // Test failed, we dont expect this line to run
	   assert false: "calling g.getInNeighbors should throw exceptin";
   }
   
   private static def testGetNeighborsDirectedGraph() {
	   
	   Console.OUT.println("\n------testGetNeighbors (directed)--------");
	   
	   g: AttributedGraph = new AttributedGraph();
	   
	   // Set directed graph
	   g.setDirected(true);
	   
	   val v1 = new Vertex(new StringAttribute("name", "Satoshi"));
	   val v2 = new Vertex(new StringAttribute("name", "Naoto"));
	   val v3 = new Vertex(new StringAttribute("name", "Aoi"));
	   val v4 = new Vertex(new StringAttribute("name", "Watanabe"));
	   g.addVertex(v1);
	   g.addVertex(v2);
	   g.addVertex(v3);
	   g.addVertex(v4);
	   
	   val e1: Edge = new Edge(v1, v2);
	   val e2: Edge = new Edge(v1, v3);
	   val e3: Edge = new Edge(v2, v4);
	   val e4: Edge = new Edge(v3, v4);
	   
	   g.addEdge(e1);
	   g.addEdge(e2);
	   g.addEdge(e3);
	   g.addEdge(e4);
	   
	   AttributedGraphMock.printGetNeighbors(g);
	   
   }
   
   private static def testGetInNeighborsDirectedGraph() {
	   
	   Console.OUT.println("\n------testGetInNeighbors (directed)--------");
	   
	   g: AttributedGraph = new AttributedGraph();
	   
	   // Set directed graph
	   g.setDirected(true);
	   
	   val v1 = new Vertex(new StringAttribute("name", "Satoshi"));
	   val v2 = new Vertex(new StringAttribute("name", "Naoto"));
	   val v3 = new Vertex(new StringAttribute("name", "Aoi"));
	   val v4 = new Vertex(new StringAttribute("name", "Watanabe"));
	   g.addVertex(v1);
	   g.addVertex(v2);
	   g.addVertex(v3);
	   g.addVertex(v4);
	   
	   val e1: Edge = new Edge(v1, v2);
	   val e2: Edge = new Edge(v1, v3);
	   val e3: Edge = new Edge(v2, v4);
	   val e4: Edge = new Edge(v3, v4);
	   
	   g.addEdge(e1);
	   g.addEdge(e2);
	   g.addEdge(e3);
	   g.addEdge(e4);
	   
	   AttributedGraphMock.printGetInNeighbors(g);
	   
   }
   
   private static def testGetOutNeighborsDirectedGraph() {
	   
	   Console.OUT.println("\n------testGetOutNeighbors (directed)--------");
	   
	   g: AttributedGraph = new AttributedGraph();
	   
	   // Set directed graph
	   g.setDirected(true);
	   
	   val v1 = new Vertex(new StringAttribute("name", "Satoshi"));
	   val v2 = new Vertex(new StringAttribute("name", "Naoto"));
	   val v3 = new Vertex(new StringAttribute("name", "Aoi"));
	   val v4 = new Vertex(new StringAttribute("name", "Watanabe"));
	   g.addVertex(v1);
	   g.addVertex(v2);
	   g.addVertex(v3);
	   g.addVertex(v4);
	   
	   val e1: Edge = new Edge(v1, v2);
	   val e2: Edge = new Edge(v1, v3);
	   val e3: Edge = new Edge(v2, v4);
	   val e4: Edge = new Edge(v3, v4);
	   
	   g.addEdge(e1);
	   g.addEdge(e2);
	   g.addEdge(e3);
	   g.addEdge(e4);
	   
	   AttributedGraphMock.printGetOutNeighbors(g);
	   
   }
   
   private static def testAddVerticesAndAddEdges() {
	   Console.OUT.println("\n------testAddVerticesAndAddEdges--------");
	   
	   vertexList: ArrayList[Vertex] = new ArrayList[Vertex]();
	   vertexList.add(new Vertex( new StringAttribute("Brand", "Volkswagen") ));
	   vertexList.add(new Vertex( new StringAttribute("Brand", "BMW") ));
	   vertexList.add(new Vertex( new StringAttribute("Brand", "Honda") ));
	   
	   edgeList: ArrayList[Edge] = new ArrayList[Edge]();
	   
	   edgeList.add(
			   new Edge(new Vertex( new StringAttribute("Brand", "Volkswagen")),
					   new Vertex(new StringAttribute("Brand", "BMW")))
	   );
	   
	   edgeList.add(
			   new Edge(new Vertex( new StringAttribute("Brand", "BMW")),
					   new Vertex(new StringAttribute("Brand", "Honda")))
	   );
	   
	   g: AttributedGraph = new AttributedGraph();
	   g.addVertices(vertexList);
	   g.addEdges(edgeList);
	   
	   
	   AttributedGraphMock.printVertexList(g);
	   AttributedGraphMock.printEdgeList(g);
   }
   
}