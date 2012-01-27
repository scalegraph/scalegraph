#############################################################
# This is the Makefile for Testing the scalegraph packages
#############################################################

#Set the X10_HOME and class path
X10_HOME = /nfs/home/miyuru/workspace/x10trunk/x10.dist
CLASSPATH=$(X10_HOME)/../x10.gml/lib/native_gml.jar

#X10 runtime environment variables
X10_NPLACES=1
X10_HOSTFILE=machines.txt

APP_DIR=/nfs/home/charuwat/workspace/ScaleGraph
OUTPUT=./bin


#Test 1
test_attributed_graph:
	@echo "----------- Compile Attributed Graph Tester -----------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/graph/TestAttributedGraph.x10 \
	src/org/scalegraph/graph/AttributedGraph.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/Vertex.x10 \
	src/org/scalegraph/graph/Edge.x10 \
	src/org/scalegraph/graph/Attribute.x10 \
	src/org/scalegraph/graph/StringAttribute.x10 \
	src/org/scalegraph/graph/BooleanAttribute.x10 \
	src/org/scalegraph/graph/ByteAttribute.x10 \
	src/org/scalegraph/graph/ShortAttribute.x10 \
	src/org/scalegraph/graph/IntAttribute.x10 \
	src/org/scalegraph/graph/LongAttribute.x10 \
	src/org/scalegraph/graph/FloatAttribute.x10 \
	src/org/scalegraph/graph/DoubleAttribute.x10 \
	src/org/scalegraph/graph/CharAttribute.x10 \
	src/org/scalegraph/graph/DateAttribute.x10 \
	src/org/scalegraph/graph/AttributeSchema.x10 \
	src/org/scalegraph/util/Date.x10 \
	src/test/scalegraph/graph/AttributedGraphMock.x10;
	
	@echo "----------- Launch Attributed Graph Tester -----------";
	$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";
	
#Test 2	
test_betweenness_centrality:
	@echo "----------- Compile Betweenness Centrality Tester -----------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/metrics/centrality/TestBetweennessCentrality.x10 \
	src/org/scalegraph/metrics/centrality/BetweennessCentrality.x10 \
	src/org/scalegraph/graph/AttributedGraph.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/graph/Vertex.x10 \
	src/org/scalegraph/graph/Edge.x10 \
	src/org/scalegraph/graph/Attribute.x10 \
	src/org/scalegraph/graph/StringAttribute.x10 \
	src/org/scalegraph/graph/BooleanAttribute.x10 \
	src/org/scalegraph/graph/ByteAttribute.x10 \
	src/org/scalegraph/graph/ShortAttribute.x10 \
	src/org/scalegraph/graph/IntAttribute.x10 \
	src/org/scalegraph/graph/LongAttribute.x10 \
	src/org/scalegraph/graph/FloatAttribute.x10 \
	src/org/scalegraph/graph/DoubleAttribute.x10 \
	src/org/scalegraph/graph/CharAttribute.x10 \
	src/org/scalegraph/graph/DateAttribute.x10 \
	src/org/scalegraph/graph/AttributeSchema.x10 \
	src/org/scalegraph/util/Date.x10 \
	src/org/scalegraph/io/GMLReader.x10 \
	src/org/scalegraph/io/GMLEntry.x10 \
	src/org/scalegraph/io/GMLToken.x10;
	
	@echo "----------- Launch Betweenness Centrality Tester -----------";
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/TestScaleGraph;
	@echo "----------- Test Completed ---------------------------------";
	
#Test 3
test_gml_reader:
	@echo "----------- Compiile GML Reader Tester ---------------------";
	$(X10_HOME)/bin/x10c++  -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/io/TestGMLReader.x10 \
	src/org/scalegraph/io/GMLReader.x10 \
	src/org/scalegraph/io/GMLEntry.x10 \
	src/org/scalegraph/io/GMLToken.x10 \
	src/org/scalegraph/graph/AttributedGraph.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/Vertex.x10 \
	src/org/scalegraph/graph/Edge.x10 \
	src/org/scalegraph/graph/Attribute.x10 \
	src/org/scalegraph/graph/StringAttribute.x10 \
	src/org/scalegraph/graph/BooleanAttribute.x10 \
	src/org/scalegraph/graph/ByteAttribute.x10 \
	src/org/scalegraph/graph/ShortAttribute.x10 \
	src/org/scalegraph/graph/IntAttribute.x10 \
	src/org/scalegraph/graph/LongAttribute.x10 \
	src/org/scalegraph/graph/FloatAttribute.x10 \
	src/org/scalegraph/graph/DoubleAttribute.x10 \
	src/org/scalegraph/graph/CharAttribute.x10 \
	src/org/scalegraph/graph/DateAttribute.x10 \
	src/org/scalegraph/graph/AttributeSchema.x10 \
	src/org/scalegraph/util/Date.x10 \
	src/test/scalegraph/graph/AttributedGraphMock.x10;
	
	@echo "----------- Launch GML Reader Tester -----------------";
	#$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostlist $(X10_HOSTLIST) $(OUTPUT)/TestGMLReader;
	$(X10_HOME)/bin/X10Launcher $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";

#Test 4
test_gml_writer:
	@echo "----------- Compile GML Writer Tester -----------------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/io/TestGMLWriter.x10 \
	src/org/scalegraph/io/GMLWriter.x10 \
	src/org/scalegraph/io/GMLReader.x10 \
	src/org/scalegraph/io/GMLEntry.x10 \
	src/org/scalegraph/io/GMLToken.x10 \
	src/org/scalegraph/graph/AttributedGraph.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/Vertex.x10 \
	src/org/scalegraph/graph/Edge.x10 \
	src/org/scalegraph/graph/Attribute.x10 \
	src/org/scalegraph/graph/StringAttribute.x10 \
	src/org/scalegraph/graph/BooleanAttribute.x10 \
	src/org/scalegraph/graph/ByteAttribute.x10 \
	src/org/scalegraph/graph/ShortAttribute.x10 \
	src/org/scalegraph/graph/IntAttribute.x10 \
	src/org/scalegraph/graph/LongAttribute.x10 \
	src/org/scalegraph/graph/FloatAttribute.x10 \
	src/org/scalegraph/graph/DoubleAttribute.x10 \
	src/org/scalegraph/graph/DateAttribute.x10 \
	src/org/scalegraph/graph/AttributeSchema.x10 \
	src/org/scalegraph/util/Date.x10 \
	src/org/scalegraph/graph/CharAttribute.x10 ;
	
	@echo "----------- Launch GML Writer Tester ------------------"
	$(X10_HOME)/bin/X10Launcher $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";
	
#Test 5
test_sax_parser:
	@echo "----------- Compile SAX Parser Tester -----------------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-cxx-prearg -Isrc/org/scalegraph/io/ \
	-cxx-prearg -I/nfs/home/charuwat/software/xerces/include \
	-cxx-postarg /nfs/home/charuwat/software/xerces/lib/libxerces-c.a \
	src/test/scalegraph/io/TestSAXParser.x10 \
	src/org/scalegraph/io/SAXParser.x10 \
	src/org/scalegraph/io/SAXHandler.x10;
	
	@echo "----------- Launch SAX Parser Tester ------------------";
	$(X10_HOME)/bin/X10Launcher $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";
	
#Test 6
test_gexf_reader:
	@echo "----------- Compile GEXF Reader Tester ---------------";
	$(X10_HOME)/bin/x10c++ -VERBOSE_CHECKS -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-cxx-prearg -Isrc/org/scalegraph/io/ \
	-cxx-prearg -I/nfs/home/charuwat/software/xerces/include \
	-cxx-postarg /nfs/home/charuwat/software/xerces/lib/libxerces-c.a \
	src/test/scalegraph/io/TestGEXFReader.x10 \
	src/test/scalegraph/graph/AttributedGraphMock.x10 \
	src/org/scalegraph/io/GEXFReader.x10 \
	src/org/scalegraph/io/sax/SAXParser.x10 \
	src/org/scalegraph/io/sax/SAXHandler.x10 \
	src/org/scalegraph/graph/AttributedGraph.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/Vertex.x10 \
	src/org/scalegraph/graph/Edge.x10 \
	src/org/scalegraph/graph/Attribute.x10;
	
	@echo "----------- Launch GEXF Reader Tester ----------------"; 
	$(X10_HOME)/bin/X10Launcher $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";

#Test 7
test_gexf_writer:
	@echo "----------- Compile GEXF Writer Tester ----------------";
	$(X10_HOME)/bin/x10c++ -VERBOSE_CHECKS -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-cxx-prearg -Isrc/org/scalegraph/io/ \
	-cxx-prearg -I/nfs/home/charuwat/software/xerces/include \
	-cxx-postarg /nfs/home/charuwat/software/xerces/lib/libxerces-c.a \
	src/test/scalegraph/io/TestGEXFWriter.x10 \
	src/test/scalegraph/graph/AttributedGraphMock.x10 \
	src/org/scalegraph/io/GEXFWriter.x10 \
	src/org/scalegraph/io/GEXFReader.x10 \
	src/org/scalegraph/io/SAXParser.x10 \
	src/org/scalegraph/io/SAXHandler.x10 \
	src/org/scalegraph/graph/AttributedGraph.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/Vertex.x10 \
	src/org/scalegraph/graph/Edge.x10 \
	src/org/scalegraph/graph/Attribute.x10;
	
	@echo "----------- Launch GEXF Writer Tester -------------"; 
	$(X10_HOME)/bin/X10Launcher $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed -------------------------";
	
#Test 8
test_graphml_reader:
	@echo "----------- Compile GraphML Reader Tester ---------";
	$(X10_HOME)/bin/x10c++ -VERBOSE_CHECKS -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-cxx-prearg -Isrc/org/scalegraph/io/ \
	-cxx-prearg -I/nfs/home/charuwat/software/xerces/include \
	-cxx-postarg /nfs/home/charuwat/software/xerces/lib/libxerces-c.a \
	src/test/scalegraph/io/TestGraphMLReader.x10 \
	src/test/scalegraph/graph/AttributedGraphMock.x10 \
	src/org/scalegraph/io/GraphMLReader.x10 \
	src/org/scalegraph/io/SAXParser.x10 \
	src/org/scalegraph/io/SAXHandler.x10 \
	src/org/scalegraph/graph/AttributedGraph.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/Vertex.x10 \
	src/org/scalegraph/graph/Edge.x10 \
	src/org/scalegraph/graph/Attribute.x10;
	
	@echo "----------- Launch GraphML Reader Tester -----------"; 
	$(X10_HOME)/bin/X10Launcher $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed --------------------------";

#Test 9
test_plain_graph :
	echo "----------- Testing PlainGraph -----------" 
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT)  -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/graph/TestPlainGraph.x10 \
	src/org/scalegraph/util/scalegraphMath.x10 \
	-x10lib $(X10_HOME)/../x10.gml/native_gml.properties \
	-classpath $(CLASSPATH) -sourcepath src -post 'g++ -L/nfs/data0/miyuru/software/lapack-3.4.0/lib -lblas';
	@echo "----------- Launch PlainGraph Tester -----------"; 
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	echo "----------- Test Completed -----------";

#Test 10
test_edge_reader :
	echo "----------- Testing EdgelistReader -----------" 
	$(X10_HOME)/bin/x10c++ src/test/scalegraph/io/TestEdgeListReader.x10 -d $(OUTPUT) -x10lib $(X10_HOME)/../x10.gml/native_gml.properties -classpath $(CLASSPATH) -sourcepath src -post 'g++ -L/nfs/data0/miyuru/software/lapack-3.4.0/lib -lblas' -o $(OUTPUT)/Testscalegraph;
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	echo "----------- Test Completed -----------";

#Test 11
test_gen_rmat:
	echo "----------- Testing RMAT -----------"
	$(X10_HOME)/bin/x10c++ src/test/scalegraph/generator/TestRMAT.x10 -d $(OUTPUT) -x10lib $(X10_HOME)/../x10.gml/native_gml.properties -classpath $(CLASSPATH) -sourcepath src -post 'g++ -L/nfs/data0/miyuru/software/lapack-3.4.0/lib -lblas' -o $(OUTPUT)/Testscalegraph;
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;

#Test 12
test_attribute:
	@echo "----------- Compile Test Attribute tester -------------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/graph/TestAttribute.x10 \
	src/org/scalegraph/graph/Attribute.x10 \
	src/org/scalegraph/graph/StringAttribute.x10 \
	src/org/scalegraph/graph/BooleanAttribute.x10 \
	src/org/scalegraph/graph/ByteAttribute.x10 \
	src/org/scalegraph/graph/ShortAttribute.x10 \
	src/org/scalegraph/graph/IntAttribute.x10 \
	src/org/scalegraph/graph/LongAttribute.x10 \
	src/org/scalegraph/graph/FloatAttribute.x10 \
	src/org/scalegraph/graph/DoubleAttribute.x10 \
	src/org/scalegraph/graph/CharAttribute.x10 ;
	
	@echo "----------- Launch Attribute Tester ------------------";
	$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";
	
#Test 13
test_vertex:
	@echo "----------- Compile Attributed Graph Tester -----------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/graph/TestVertex.x10 \
	src/org/scalegraph/graph/Attribute.x10 \
	src/org/scalegraph/graph/StringAttribute.x10 \
	src/org/scalegraph/graph/BooleanAttribute.x10 \
	src/org/scalegraph/graph/ByteAttribute.x10 \
	src/org/scalegraph/graph/ShortAttribute.x10 \
	src/org/scalegraph/graph/IntAttribute.x10 \
	src/org/scalegraph/graph/LongAttribute.x10 \
	src/org/scalegraph/graph/FloatAttribute.x10 \
	src/org/scalegraph/graph/DoubleAttribute.x10 \
	src/org/scalegraph/graph/CharAttribute.x10 \
	src/org/scalegraph/graph/DateAttribute.x10 \
	src/org/scalegraph/util/Date.x10 \
	src/org/scalegraph/graph/Vertex.x10 ;
	
	@echo "----------- Launch Attributed Graph Tester -----------";
	$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";

#Test 14
test_math:
	@echo "----------- Compile scalegraphMath Tester -----------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/util/TestscalegraphMath.x10 \
	src/org/scalegraph/util/scalegraphMath.x10;
	
	@echo "----------- Launch scalegraphMath Tester -----------";
	$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";

#Test 15
test_date:
	@echo "----------- Compile Date Tester -----------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/util/TestDate.x10 \
	src/org/scalegraph/util/Date.x10 ;
	
	@echo "----------- Launch Date Tester -----------";
	$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";
		
#Test 16
test_matrix:
	@echo "----------- Compile Matrix Tester -----------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/util/TestMatrix.x10 \
	src/org/scalegraph/util/Matrix.x10 ;
	
	@echo "----------- Launch Date Tester -----------";
	$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";
	
test_dist_attributed_graph:
	@echo "----------- Compile Dist Attributed Graph Tester -----------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/graph/TestDistAttributedGraph.x10 \
	src/org/scalegraph/io/GMLReader.x10 \
	src/org/scalegraph/io/GMLEntry.x10 \
	src/org/scalegraph/io/GMLToken.x10 \
	src/org/scalegraph/graph/DistAttributedGraph.x10 \
	src/org/scalegraph/graph/AttributedGraph.x10 \
	src/org/scalegraph/graph/AttributedGraphCell.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/Vertex.x10 \
	src/org/scalegraph/graph/Edge.x10 \
	src/org/scalegraph/graph/Attribute.x10 \
	src/org/scalegraph/graph/StringAttribute.x10 \
	src/org/scalegraph/graph/BooleanAttribute.x10 \
	src/org/scalegraph/graph/ByteAttribute.x10 \
	src/org/scalegraph/graph/ShortAttribute.x10 \
	src/org/scalegraph/graph/IntAttribute.x10 \
	src/org/scalegraph/graph/LongAttribute.x10 \
	src/org/scalegraph/graph/FloatAttribute.x10 \
	src/org/scalegraph/graph/DoubleAttribute.x10 \
	src/org/scalegraph/graph/CharAttribute.x10 \
	src/org/scalegraph/graph/DateAttribute.x10 \
	src/org/scalegraph/graph/AttributeSchema.x10 \
	src/org/scalegraph/util/Date.x10 \
	src/test/scalegraph/graph/AttributedGraphMock.x10;
	
	@echo "----------- Launch Dist Attributed Graph Tester -----------";
#	$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	time $(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";
	
#Test 16
test_matrix:
	@echo "----------- Compile Matrix Tester -----------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/util/TestMatrix.x10 \
	src/org/scalegraph/util/Matrix.x10 ;
	
	@echo "----------- Launch Date Tester -----------";
	$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";

help:
	@echo '---- scalegraph build help -------'
	@echo 'Usage : make <command>'

	@echo '<command> can be one of the followings'
	#Test 1
	@echo 'test_attributed_graph : Test the AttributedGraph class'
	#Test 2	
	@echo 'test_betweenness_centrality : Test the BetweennessCentrality class'
	#Test 3
	@echo 'test_gml_reader : Test the GMLReader class'
	#Test 4
	@echo 'test_gml_writer : Test the GMLWriter class'
	#Test 5
	@echo 'test_sax_parser : Test the SAXParser class'
	#Test 6
	@echo 'test_gexf_reader : Test the GEXFReader class'
	#Test 7
	@echo 'test_gexf_writer : Test the GEXFWriter class'
	#Test 8
	@echo 'test_graphml_reader : Test the GraphMLReader class'
	#Test 9
	@echo 'test_plain_graph : Test the PlainGraph class'
	#Test 10
	@echo 'test_edge_reader : Test the EdgeListReader class'
	#Test 11
	@echo 'test_gen_rmat : Test the RMAT class'
	#Test 12
	@echo 'test_attribute : Test Attribute related classes'
	#Test 13
	@echo 'test_vertex : Test Vertex classes'
	#Test 14
	@echo 'test_math : Test scalegraphMath class'
	#Test 15
	@echo 'test_date : Test Date class'
	#Test 16
	@echo 'test_matrix : Test Matrix class'	
	@echo 'clean : To clean the build'
	@echo '---------------------------------';

clean:
	rm -r $(OUTPUT)/*