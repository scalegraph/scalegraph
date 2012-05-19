package org.scalegraph.io;

import x10.io.IOException;
import x10.io.File;
import x10.io.FileReader;
import x10.util.ArrayList;

import org.scalegraph.graph.Attribute;
import org.scalegraph.graph.IntAttribute;
import org.scalegraph.graph.AttributedGraph;
import org.scalegraph.graph.AttributeSchema;
import org.scalegraph.graph.Vertex;
import org.scalegraph.graph.Edge;
import org.scalegraph.graph.GraphSizeCategory;

/**
 * Class WeightedGraphReader
 */
public class WeightedGraphReader implements Reader{
	/**
	 * Default constructor 
	 */
	public def this(){
		
	}
	
	public def loadFromFile(fileName: String) : AttributedGraph{
		var g:AttributedGraph = AttributedGraph.make(GraphSizeCategory.MEDIUM);
		
		//Create VertexAttribute Schema : Note here it only supports one Vertex attribute. Some thing need to be fixed in future...
		var schema:AttributeSchema = new AttributeSchema();
		schema.add("id", AttributeSchema.IntAttribute);
		schema.add("vattrib2", AttributeSchema.IntAttribute);
		g.setVertexAttributeSchema(schema);
		
		//Create VertexAttribute Schema : Note here it only supports one Vertex attribute. Some thing need to be fixed in future...
		schema = new AttributeSchema();
		schema.add("eattrib1", AttributeSchema.IntAttribute);
		g.setEdgeAttributeSchema(schema);
		
		var reader: FileReader = new FileReader(new File(fileName));
		var line:String = "";
		var vertArray:Array[Vertex] = null;
		
		while(true){
			try{
				line = reader.readLine();
				
				if(line.indexOf("v ") != -1){
					var strArr:Array[String] = line.split(" ");
					var attrArray:ArrayList[Attribute] = new ArrayList[Attribute]();
					var a1:IntAttribute = new IntAttribute("id", Int.parse(strArr(strArr.size - 2)));
					var a2:IntAttribute = new IntAttribute("vattrib2", Int.parse(strArr(strArr.size - 1))); 
					
					attrArray.add(a1);
					attrArray.add(a2);
					var v1:Vertex = new Vertex(attrArray);
					g.addVertex(v1);
					
				}else if(line.indexOf("e ") != -1){
					//Note : We make the assumption that the file specifies all the list of vertices of the graph prior listing the edges
					//This way by the time the code reaches here, the graph object will have all the vertex objects
					if(vertArray == null){
						vertArray = g.getVertexList();
					}
					var strArr:Array[String] = line.split(" ");
					var attrArray:ArrayList[Attribute] = new ArrayList[Attribute]();
					attrArray.add(new IntAttribute("eattrib1", Int.parse(strArr(strArr.size - 1))));
					var v1Attrib1:IntAttribute = new IntAttribute("id", Int.parse(strArr(strArr.size - 3)));
					var v2Attrib1:IntAttribute = new IntAttribute("id", Int.parse(strArr(strArr.size - 2)));
					var v1:Vertex = null;
					var v2:Vertex = null;

					for(item in vertArray){
						if(((vertArray(item).getAttribute("id")) as IntAttribute).equals(v1Attrib1)){
							v1 = vertArray(item);
						}else if(((vertArray(item).getAttribute("id")) as IntAttribute).equals(v2Attrib1)){
							v2 = vertArray(item);
						}

						if((v1 != null)&&(v2 != null)){
							//e1:Edge = new Edge(v1, v2, attrArray); 
							//+Miyuru : Need to change the Array to ArrayList in this method
							g.addEdge(v1.getInternalId() as Int, v2.getInternalId() as Int, attrArray.toArray());
							break;
						}
					}
				}
			}catch(IOException){  			
				break;
			}
		}

		reader.close();
		
		return g;
	}
}