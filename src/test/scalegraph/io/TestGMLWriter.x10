package test.scalegraph.io;

import org.scalegraph.io.GMLWriter;
import org.scalegraph.io.GMLReader;
import org.scalegraph.graph.AttributedGraph;

public class TestGMLWriter {
	
	public static def main(args: Array[String]) {
		
		var graph: AttributedGraph;
		
		graph = GMLReader.loadFromFile("/nfs/data1/scalegraph/GML/gml_writer_t1.gml");
		GMLWriter.writeToFile("/nfs/data1/scalegraph/GML/out_gml_writer_t1.gml", graph);
		
		graph = GMLReader.loadFromFile("/nfs/data1/scalegraph/GML/gml_writer_t2.gml");
		GMLWriter.writeToFile("/nfs/data1/scalegraph/GML/out_gml_writer_t2.gml", graph);
		
		graph = GMLReader.loadFromFile("/nfs/data1/scalegraph/GML/gml_writer_t3.gml");
		GMLWriter.writeToFile("/nfs/data1/scalegraph/GML/out_gml_writer_t3.gml", graph);
		
		Console.OUT.println("Done");
	}
	
}