#############################################################
# This is the Makefile for Testing the scalegraph packages
#############################################################

#================================= Fixed Settings ============================================
#Export the number of threads
export X10_NTHREADS=10
export X10_STATIC_THREADS=true
export X10_NO_STEALS=false

#X10 runtime environment variables
X10_NPLACES = 4
X10_HOSTFILE = machines.txt
X10_NTHERADS = 10

OUTPUT = ./bin

INTERM =./out

#================================= Environment Dependent Settings ============================================
#Set the X10_HOME and class path
X10_HOME = /nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist
CLASSPATH = $(X10_HOME)

APP_DIR = /nfs/home/charuwat/workspace/ScaleGraph

#Set MPI Home
MPI_HOME = /nfs/data0/miyuru/software/mpich2-1.4

#Set the LAPACK, BLAS, F2C locations
CLAPACK_LIB = /nfs/data1/scalegraph/lapack-3.4.0/liblapack.a
CBLAS_LIB = /nfs/data1/scalegraph/lapack-3.4.0/libblas.a
F2C_LIB = /nfs/data1/scalegraph/CLAPACK-3.2.1/F2CLIBS/libf2c.a

ATLAS_LAPACK_LIB = /nfs/data1/scalegraph/ATLAS/lib/libf77blas.a
ATLAS_LIB = /nfs/data1/scalegraph/ATLAS/lib/libatlas.a

#SCALAPACK location
SCALAPACK = /nfs/data1/scalegraph/scalapack-2.0.1/libscalapack.a

#Location of the GML Library
GML_DIST = /nfs/data1/scalegraph/X10_runtime/x10.gml
GML_PROPS = native_gml.properties
GML_JAR = lib/native_gml.jar

#For MPI
#GML_PROPS = native_mpi_gml.properties
#GML_JAR = lib/native_mpi_gml.jar

#Test 1
test_attributed_graph:
	@echo "----------- Compile Attributed Graph Tester -----------";
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-report postcompile=5 -x10rt mpi -v \
	-cxx-postarg '-O3' \
	-post $(MPI_HOME)/bin/mpic++ \
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
	src/org/scalegraph/io/GMLReader.x10 \
	src/org/scalegraph/io/GMLEntry.x10 \
	src/org/scalegraph/io/GMLToken.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/util/Date.x10 ;
	
	@echo "----------- Launch Attributed Graph Tester -----------";
	#$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	MV2_ENABLE_AFFINITY=0 MV2_NUM_HCAS=2 $(MPI_HOME)/bin/mpirun -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph $(TEST_FILE);
	@echo "----------- Test Completed ---------------------------";
	
#Test 2	
test_betweenness_centrality_attribute:
	@echo "----------- Compile Betweenness Centrality Tester -----------";
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/metrics/centrality/TestBetweennessCentralityAttribute.x10 \
	src/org/scalegraph/metrics/centrality/BetweennessCentrality.x10 \
	src/org/scalegraph/graph/AttributedGraph.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/PlainGraphRecord.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/Vertex.x10 \
	src/org/scalegraph/graph/Edge.x10 \
	src/org/scalegraph/graph/Attribute.x10 \
	src/org/scalegraph/io/GMLReader.x10 \
	src/org/scalegraph/io/GMLEntry.x10 \
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
	src/org/scalegraph/util/ScaleGraphMath.x10 \
	src/org/scalegraph/io/GMLToken.x10;
	
	@echo "----------- Launch Betweenness Centrality Tester -----------";
#	$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph $(TEST_FILE);
	@echo "----------- Test Completed ---------------------------------";
	
#Test 3
test_gml_reader:
	@echo "----------- Compiile GML Reader Tester ---------------------";
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
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
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/util/Date.x10 ;
		
	@echo "----------- Launch GML Reader Tester -----------------";
	#$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostlist $(X10_HOSTLIST) $(OUTPUT)/TestGMLReader;
	$(X10_HOME)/bin/X10Launcher $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";

#Test 4
test_gml_writer:
	@echo "----------- Compile GML Writer Tester -----------------";
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
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
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
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
	$(X10_HOME)/bin/x10c++ -O -VERBOSE_CHECKS -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
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
	$(X10_HOME)/bin/x10c++ -O -VERBOSE_CHECKS -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
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
	$(X10_HOME)/bin/x10c++ -O -VERBOSE_CHECKS -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
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
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT)  -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/graph/TestPlainGraph.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/PlainGraphRecord.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/util/ScaleGraphMath.x10 ;
	
	@echo "----------- Launch PlainGraph Tester -----------"; 
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	echo "----------- Test Completed -----------";

#Test 10
test_edge_reader:
	echo "----------- Testing EdgelistReader -----------";
	$(X10_HOME)/bin/x10c++ -d $(INTERM) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/io/TestEdgeListReader.x10 \
	src/org/scalegraph/io/EdgeListReader.x10 \
	src/org/scalegraph/io/EdgeListWriter.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/VertexArrays.x10 \
	src/org/scalegraph/graph/PlainGraphRecord.x10 \
	src/org/scalegraph/util/ScaleGraphMath.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10;
	
	@echo "----------- Launch ScaleGraphRandom Tester -----------";
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	#$(MPI_HOME)/bin/mpirun -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";

#Test 11
test_gen_rmat:
	echo "----------- Testing RMAT -----------"
	$(X10_HOME)/bin/x10c++ -O -d $(INTERM) -classpath $(CLASSPATH) -sourcepath src -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/generator/TestRMAT.x10 \
	src/org/scalegraph/generator/randomized/RMAT.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/io/EdgeListWriter.x10 \
	src/org/scalegraph/graph/Graph.x10;
	
	@echo "----------- Launch RMAT Test ------------------";
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";
	

#Test 12
test_attribute:
	@echo "----------- Compile Test Attribute tester -------------";
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
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
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
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
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/util/TestscalegraphMath.x10 \
	src/org/scalegraph/util/ScaleGraphMath.x10;
	
	@echo "----------- Launch scalegraphMath Tester -----------";
	$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";

#Test 15
test_date:
	@echo "----------- Compile Date Tester -----------";
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/util/TestDate.x10 \
	src/org/scalegraph/util/Date.x10 ;
	
	@echo "----------- Launch Date Tester -----------";
	$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";
	
#Test 16
test_rand:
	@echo "----------- Compile ScaleGraphRandom Tester -----------";
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/util/TestScaleGraphRandom.x10 \
	src/org/scalegraph/util/ScaleGraphRandom.x10;
	
	@echo "----------- Launch ScaleGraphRandom Tester -----------";
	$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";
	
#Test 17
test_degree:
	@echo "----------- Compile Degree Tester -----------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/metrics/TestDegree.x10 \
	src/org/scalegraph/metrics/Degree.x10 \
	src/org/scalegraph/util/DirectoryInfo.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/VertexArrays.x10 \
	src/org/scalegraph/graph/PlainGraphRecord.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/util/DirectoryInfo.x10 \
	src/org/scalegraph/io/ScatteredEdgeListReader.x10 \
	src/org/scalegraph/io/EdgeListReader.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/util/ScaleGraphMath.x10;
	
	@echo "----------- Launch scalegraphMath Tester -----------";
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";		
	
#Test 18
test_edge_scat:
	@echo "----------- Compile ScatteredEdgeListReader Tester -----------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/io/TestScatteredEdgeListReader.x10 \
	src/org/scalegraph/util/DirectoryInfo.x10 \
	src/org/scalegraph/io/ScatteredEdgeListReader.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/VertexArrays.x10 \
	src/org/scalegraph/util/ScaleGraphMath.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/graph/PlainGraphRecord.x10 \
	src/org/scalegraph/graph/Graph.x10;
	
	@echo "----------- Launch ScatteredEdgeListReader Tester -----------";
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";	

#Test 19
test_betweenness_centrality_plain:
	
	@echo "----------- Compile Betweenness Centrality Tester -----------";
	$(X10_HOME)/bin/x10c++ -O -NO_CHECKS -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-report postcompile=5 -x10rt mpi -v \
	-cxx-postarg '-O3' \
	-post $(MPI_HOME)/bin/mpic++ \
	src/test/scalegraph/metrics/centrality/TestBetweennessCentralityPlain.x10 \
	src/org/scalegraph/metrics/centrality/BetweennessCentrality.x10 \
	src/org/scalegraph/graph/AttributedGraph.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/VertexArrays.x10 \
	src/org/scalegraph/graph/PlainGraphRecord.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/Vertex.x10 \
	src/org/scalegraph/graph/Edge.x10 \
	src/org/scalegraph/graph/Attribute.x10 \
	src/org/scalegraph/io/GMLReader.x10 \
	src/org/scalegraph/io/GMLEntry.x10 \
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
	src/org/scalegraph/util/ScaleGraphMath.x10 \
	src/org/scalegraph/util/DirectoryInfo.x10 \
	src/org/scalegraph/io/ScatteredEdgeListReader.x10 \
	src/org/scalegraph/io/EdgeListReader.x10 \
	src/org/scalegraph/io/GMLToken.x10;
	
	@echo "----------- Launch Betweenness Centrality Tester -----------";
	#MV2_ENABLE_AFFINITY=0 MV2_NUM_HCAS=2 $(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph $(TEST_FILE);
	MV2_ENABLE_AFFINITY=0 MV2_NUM_HCAS=2 $(MPI_HOME)/bin/mpirun -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph $(TEST_FILE);
	#$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph $(TEST_FILE)
	@echo "----------- Test Completed ---------------------------------";


#Test 20
#	-cxx-prearg -I/data0/t2gsuzumuralab/ogata/Developments/CLAPACK-3.2.1-fpic/include
test_lapack:
	@echo "----------- Compile LAPACK Tester --------------------------";
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-cxx-postarg $(CLAPACK_LIB) \
	-cxx-postarg $(CBLAS_LIB) \
	-cxx-postarg $(F2C_LIB) \
	-cxx-postarg -lgfortran \
	src/test/scalegraph/clustering/TestLAPACK.x10 \
	src/org/scalegraph/clustering/LAPACK.x10;
	
	@echo "----------- Launch LAPACK Tester ---------------------------";
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------------";

#Test 21
# For some reason, LAPACK libraries and LAPACK.x10 is needed to use GML library.
test_gml:
	@echo "----------- Compile GML Tester --------------------------";
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-cxx-postarg $(CLAPACK_LIB) \
	-cxx-postarg $(CBLAS_LIB) \
	-cxx-postarg -lgfortran \
	-classpath $(GML_DIST)/$(GML_JAR) \
	-x10lib $(GML_DIST)/$(GML_PROPS) \
	src/test/scalegraph/clustering/TestGML.x10;
	
	@echo "----------- Launch GML Tester ---------------------------";
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
#for MPI	mpirun -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------------";

#Test 22
test_clustering:
	@echo "----------- Compile Spectral Clustering Tester --------------------------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-cxx-postarg $(CLAPACK_LIB) \
	-cxx-postarg $(CBLAS_LIB) \
	-cxx-postarg $(F2C_LIB) \
	-cxx-postarg $(ATLAS_LAPACK_LIB) \
	-cxx-postarg $(ATLAS_LIB) \
	-cxx-postarg -lgfortran \
	-classpath $(GML_DIST)/$(GML_JAR) \
	-x10lib $(GML_DIST)/$(GML_PROPS) \
	src/test/scalegraph/clustering/TestSpectralClustering.x10 \
	src/org/scalegraph/clustering/Clustering.x10 \
	src/org/scalegraph/clustering/DistSpectralClustering.x10 \
	src/org/scalegraph/clustering/SpectralClustering.x10 \
	src/org/scalegraph/clustering/ClusteringResult.x10 \
	src/org/scalegraph/clustering/LAPACK.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/PlainGraphRecord.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/io/EdgeListReader.x10 \
	src/org/scalegraph/io/ScatteredEdgeListReader.x10 \
	src/org/scalegraph/util/DirectoryInfo.x10 \
	src/org/scalegraph/util/ScaleGraphMath.x10;
	
	@echo "----------- Launch Spectral Clustering Tester ---------------------------";
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------------";

test_dir:
	@echo "----------- Compile DirInfo Tester -----------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/util/TestDirInfo.x10 \
	src/org/scalegraph/util/DirectoryInfo.x10;
	
	@echo "----------- Launch DirInfo Tester -----------";
	$(X10_HOME)/bin/X10Launcher  $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";	
	
#Test 23
test_pattern:
	@echo "----------- Compile Graph Pattern Matching -----------------";
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	src/test/scalegraph/patternmatching/TestPatternMatching.x10 \
	src/test/scalegraph/patternmatching/FileSplitter.x10 \
	src/org/scalegraph/util/DirectoryInfo.x10 \
	src/org/scalegraph/patternmatching/PatternMatching.x10 \
	src/org/scalegraph/patternmatching/PatternMatchingResult.x10 \
	src/org/scalegraph/patternmatching/DataBase.x10 \
	src/org/scalegraph/patternmatching/RandamWalk.x10 \
	src/org/scalegraph/patternmatching/PatternFactory.x10 \
	src/org/scalegraph/patternmatching/Pattern.x10 \
	src/org/scalegraph/patternmatching/LatticeNode.x10 \
	src/org/scalegraph/patternmatching/Isomorphism.x10 \
	src/org/scalegraph/patternmatching/Canonicalcode.x10 \
	src/org/scalegraph/patternmatching/FiveTuple.x10 \
	src/org/scalegraph/patternmatching/EdgePattern.x10 \
	src/org/scalegraph/patternmatching/Matrix.x10 \
	src/org/scalegraph/patternmatching/SqrSymMatrix.x10 \
	src/org/scalegraph/patternmatching/AdjMatrix.x10 \
	src/org/scalegraph/patternmatching/FullLabelAdjMatrix.x10 \
	src/org/scalegraph/patternmatching/Subiso.x10 \
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
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/io/Reader.x10 \
	src/org/scalegraph/io/WeightedGraphReader.x10 \
	src/org/scalegraph/util/Date.x10 \
	src/org/scalegraph/util/ScaleGraphMath.x10;
	
	
	@echo "----------- Launch Graph Pattern Matching ------------------";
	$(X10_HOME)/bin/X10Launcher $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------";
	
# Test 24
test_randomwalk:
	@echo "----------- Compile Random Walk with Restart Tester --------------------------";
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-x10rt mpi \
	-post $(MPI_HOME)/bin/mpic++ \
	-cxx-postarg $(SCALAPACK) \
	-cxx-postarg $(CLAPACK_LIB) \
	-cxx-postarg $(CBLAS_LIB) \
	-cxx-postarg $(F2C_LIB) \
	-cxx-postarg $(ATLAS_LAPACK_LIB) \
	-cxx-postarg $(ATLAS_LIB) \
	-cxx-postarg -lgfortran \
	-cxx-postarg -lifcore \
	-cxx-postarg -lifport \
	-classpath $(GML_DIST)/$(GML_JAR) \
	-x10lib $(GML_DIST)/$(GML_PROPS) \
	src/test/scalegraph/clustering/StopWatch.x10 \
	src/test/scalegraph/clustering/Tool.x10 \
	src/org/scalegraph/communities/RandomWalk.x10 \
	src/org/scalegraph/communities/RandomWalkResult.x10 \
	src/org/scalegraph/communities/LongToIntMap.x10 \
	src/test/scalegraph/communities/TestRandomWalk.x10 \
	src/org/scalegraph/communities/LAPACK.x10 \
	src/org/scalegraph/util/ScaleGraphMath.x10 \
	src/org/scalegraph/util/DirectoryInfo.x10 \
	src/org/scalegraph/util/VertexInfo.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/VertexArrays.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/PlainGraphRecord.x10 \
	src/org/scalegraph/io/EdgeListReader.x10 \
	src/org/scalegraph/io/ScatteredEdgeListReader.x10 \
	src/org/scalegraph/clustering/MPISpectralClustering.x10 \
	src/org/scalegraph/clustering/ClusteringResult.x10 \
	src/org/scalegraph/clustering/Clustering.x10 \
	src/org/scalegraph/clustering/VertexInfo.x10 \
	src/org/scalegraph/clustering/Vector.x10 \
	src/org/scalegraph/clustering/ScaLAPACK.x10 \
	src/org/scalegraph/clustering/BLACS.x10 \
	src/org/scalegraph/clustering/MPI.x10 \
	
	@echo "----------- Launch Random Walk with Restart Tester ---------------------------";
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------------";

#Test 25
test_scalapack:
	@echo "----------- Compile ScaLAPACK Tester --------------------------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-x10rt mpi \
	-post $(MPI_HOME)/bin/mpic++ \
	-cxx-postarg $(SCALAPACK) \
	-cxx-postarg $(CLAPACK_LIB) \
	-cxx-postarg $(CBLAS_LIB) \
	-cxx-postarg -lgfortran \
	-cxx-postarg -lifcore \
	-cxx-postarg -lifport \
	src/test/scalegraph/clustering/TestScaLAPACK.x10 \
	src/org/scalegraph/clustering/ScaLAPACK.x10 \
	src/org/scalegraph/clustering/BLACS.x10 \
	src/org/scalegraph/clustering/MPI.x10;
	
	@echo "----------- Launch ScaLAPACK Tester ---------------------------";
	MV2_ENABLE_AFFINITY=0 MV2_NUM_HCAS=2 $(MPI_HOME)/bin/mpirun -np $(X10_NPLACES) -f $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------------";
	
#Test 26
test_mpiclustering:
	@echo "----------- Compile MPI Spectral Clustering Tester --------------------------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-x10rt mpi \
	-post $(MPI_HOME)/bin/mpic++ \
	-cxx-postarg $(SCALAPACK) \
	-cxx-postarg $(CLAPACK_LIB) \
	-cxx-postarg $(CBLAS_LIB) \
	-cxx-postarg -lgfortran \
	-cxx-postarg -lifcore \
	-cxx-postarg -lifport \
	src/test/scalegraph/clustering/TestMPISpectralClustering.x10 \
	src/test/scalegraph/clustering/StopWatch.x10 \
	src/test/scalegraph/clustering/Tool.x10 \
	src/org/scalegraph/clustering/MPISpectralClustering.x10 \
	src/org/scalegraph/clustering/ClusteringResult.x10 \
	src/org/scalegraph/clustering/Clustering.x10 \
	src/org/scalegraph/clustering/VertexInfo.x10 \
	src/org/scalegraph/clustering/Vector.x10 \
	src/org/scalegraph/clustering/ScaLAPACK.x10 \
	src/org/scalegraph/clustering/BLACS.x10 \
	src/org/scalegraph/clustering/MPI.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/PlainGraphRecord.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/graph/VertexArrays.x10 \
	src/org/scalegraph/io/EdgeListReader.x10 \
	src/org/scalegraph/io/ScatteredEdgeListReader.x10 \
	src/org/scalegraph/util/DirectoryInfo.x10 \
	src/org/scalegraph/util/ScaleGraphMath.x10;
	
	@echo "----------- Launch MPI Spectral Clustering Tester ---------------------------";
	MV2_ENABLE_AFFINITY=0 MV2_NUM_HCAS=2 $(MPI_HOME)/bin/mpirun -np $(X10_NPLACES) -f $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------------";

# Test 27
test_pagerank:
	@echo "----------- Compile Random Walk with Restart Tester --------------------------";
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-cxx-postarg $(CLAPACK_LIB) \
	-cxx-postarg $(CBLAS_LIB) \
	-cxx-postarg $(F2C_LIB) \
	-cxx-postarg $(ATLAS_LAPACK_LIB) \
	-cxx-postarg $(ATLAS_LIB) \
	-cxx-postarg -lgfortran \
	-classpath $(GML_DIST)/$(GML_JAR) \
	-x10lib $(GML_DIST)/$(GML_PROPS) \
	src/test/scalegraph/metrics/centrality/TestPagerank.x10 \
	src/org/scalegraph/metrics/centrality/Pagerank.x10 \
	src/org/scalegraph/metrics/centrality/PagerankResult.x10 \
	src/org/scalegraph/communities/LongToIntMap.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/VertexArrays.x10 \
	src/org/scalegraph/util/ScaleGraphMath.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/graph/PlainGraphRecord.x10 \
	src/org/scalegraph/io/ScatteredEdgeListReader.x10 \
	src/org/scalegraph/io/EdgeListReader.x10 \
	src/org/scalegraph/util/DirectoryInfo.x10 \
	
	@echo "----------- Launch Random Walk with Restart Tester ---------------------------";
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------------";

# Test 28
test_matrixpagerank:
	@echo "----------- Compile Random Walk with Restart Tester --------------------------";
	$(X10_HOME)/bin/x10c++ -O -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-x10rt mpi \
	-post $(MPI_HOME)/bin/mpic++ \
	-cxx-postarg $(CLAPACK_LIB) \
	-cxx-postarg $(CBLAS_LIB) \
	-cxx-postarg $(F2C_LIB) \
	-cxx-postarg $(ATLAS_LAPACK_LIB) \
	-cxx-postarg $(ATLAS_LIB) \
	-cxx-postarg -lgfortran \
	-classpath $(GML_DIST)/$(GML_JAR) \
	-x10lib $(GML_DIST)/$(GML_PROPS) \
	src/test/scalegraph/metrics/centrality/TestMatrixPagerank.x10 \
	src/org/scalegraph/metrics/centrality/MatrixPagerank.x10 \
	src/org/scalegraph/metrics/centrality/MatrixMap.x10 \
	src/org/scalegraph/metrics/centrality/PagerankResult.x10 \
	src/org/scalegraph/metrics/centrality/BufferedHashMap.x10 \
	src/org/scalegraph/communities/LongToIntMap.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/VertexArrays.x10 \
	src/org/scalegraph/util/ScaleGraphMath.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/graph/PlainGraphRecord.x10 \
	src/org/scalegraph/io/ScatteredEdgeListReader.x10 \
	src/org/scalegraph/io/EdgeListReader.x10 \
	src/org/scalegraph/util/DirectoryInfo.x10 \
	src/org/scalegraph/util/VertexInfo.x10 \
	src/test/scalegraph/clustering/Tool.x10 \
	
	@echo "----------- Launch Random Walk with Restart Tester ---------------------------";
	MV2_ENABLE_AFFINITY=0 MV2_NUM_HCAS=2 $(MPI_HOME)/bin/mpirun -np $(X10_NPLACES) -f $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------------";

#Test 29
test_estimated_betweenness_centrality_plain:
	
	@echo "----------- Compile Betweenness Centrality Tester -----------";
	$(X10_HOME)/bin/x10c++ -O -NO_CHECKS -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-report postcompile=5 -x10rt mpi -v \
	-cxx-postarg '-O3' \
	-post $(MPI_HOME)/bin/mpic++ \
	src/test/scalegraph/metrics/centrality/TestEstimatedBetweennessCentralityPlain.x10 \
	src/org/scalegraph/metrics/centrality/BetweennessCentrality.x10 \
	src/org/scalegraph/graph/AttributedGraph.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/VertexArrays.x10 \
	src/org/scalegraph/graph/PlainGraphRecord.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/Vertex.x10 \
	src/org/scalegraph/graph/Edge.x10 \
	src/org/scalegraph/graph/Attribute.x10 \
	src/org/scalegraph/io/GMLReader.x10 \
	src/org/scalegraph/io/GMLEntry.x10 \
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
	src/org/scalegraph/util/ScaleGraphMath.x10 \
	src/org/scalegraph/util/DirectoryInfo.x10 \
	src/org/scalegraph/io/ScatteredEdgeListReader.x10 \
	src/org/scalegraph/io/EdgeListReader.x10 \
	src/org/scalegraph/io/GMLToken.x10;
	
	@echo "----------- Launch Betweenness Centrality Tester -----------";
	#MV2_ENABLE_AFFINITY=0 MV2_NUM_HCAS=2 $(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph $(TEST_FILE);
	MV2_ENABLE_AFFINITY=0 MV2_NUM_HCAS=2 $(MPI_HOME)/bin/mpirun -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph $(TEST_FILE);
	#$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph $(TEST_FILE)
	@echo "----------- Test Completed ---------------------------------";

#Test 30
test_big_graph:
	
	@echo "----------- Compile Betweenness Centrality Tester -----------";
	$(X10_HOME)/bin/x10c++ -O -NO_CHECKS -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-report postcompile=5 -x10rt mpi -v \
	-cxx-postarg '-O3' \
	-post $(MPI_HOME)/bin/mpic++ \
	src/test/scalegraph/graph/TestBigGraph.x10 \
	src/org/scalegraph/graph/BigGraph.x10 \
	src/org/scalegraph/util/BigArray.x10  ;
	
	
	@echo "----------- Launch Betweenness Centrality Tester -----------";
	MV2_ENABLE_AFFINITY=0 MV2_NUM_HCAS=2 $(MPI_HOME)/bin/mpirun -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph $(TEST_FILE);
	@echo "----------- Test Completed ---------------------------------";

#Test 31
test_big_array:
	
	@echo "----------- Compile Betweenness Centrality Tester -----------";
	$(X10_HOME)/bin/x10c++ -O -NO_CHECKS -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-report postcompile=5 -x10rt mpi -v \
	-cxx-postarg '-O3' \
	-post $(MPI_HOME)/bin/mpic++ \
	src/test/scalegraph/util/TestBigArray.x10 \
	src/org/scalegraph/util/BigArray.x10 ;
	
	
	@echo "----------- Launch Betweenness Centrality Tester -----------";
	MV2_ENABLE_AFFINITY=0 MV2_NUM_HCAS=2 $(MPI_HOME)/bin/mpirun -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph $(TEST_FILE);
	@echo "----------- Test Completed ---------------------------------";

# Test 32
test_psc:
	@echo "----------- Compile Parallel Spectral Clustering Tester --------------------------";
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT) -o $(OUTPUT)/Testscalegraph \
	-cxx-postarg /work0/t2gsuzumuralab/ogata/Developments/ARPACK/libarpack_LINUX.a \
	-cxx-postarg $(CBLAS_LIB) \
	-cxx-postarg $(CLAPACK_LIB) \
	-cxx-postarg -lgfortran \
	src/test/scalegraph/clustering/psc/TestParallelSpectralClustering.x10 \
	src/org/scalegraph/clustering/psc/ParallelSpectralClustering.x10 \
	src/org/scalegraph/clustering/psc/SparseMatrix.x10 \
	src/org/scalegraph/clustering/psc/ARPACK.x10 \
	src/org/scalegraph/clustering/Clustering.x10 \
	src/org/scalegraph/clustering/ClusteringResult.x10 \
	src/org/scalegraph/clustering/Vector.x10 \
	src/test/scalegraph/clustering/Tool.x10 \
	src/test/scalegraph/clustering/StopWatch.x10 \
	src/org/scalegraph/graph/Graph.x10 \
	src/org/scalegraph/graph/PlainGraph.x10 \
	src/org/scalegraph/graph/PlainGraphRecord.x10 \
	src/org/scalegraph/graph/GraphSizeCategory.x10 \
	src/org/scalegraph/graph/VertexArrays.x10 \
	src/org/scalegraph/io/EdgeListReader.x10 \
	src/org/scalegraph/io/ScatteredEdgeListReader.x10 \
	src/org/scalegraph/util/DirectoryInfo.x10 \
	src/org/scalegraph/util/ScaleGraphMath.x10 \
	src/org/scalegraph/util/VertexInfo.x10;
	
	@echo "----------- Launch Parallel Spectral Clustering Tester ---------------------------";
	$(X10_HOME)/bin/X10Launcher -np $(X10_NPLACES) -hostfile $(APP_DIR)/$(X10_HOSTFILE) $(OUTPUT)/Testscalegraph;
	@echo "----------- Test Completed ---------------------------------";
	
help:
	@echo '---- scalegraph build help -------'
	@echo 'Usage : make <command>'

	@echo '<command> can be one of the followings'
	#Test 1
	@echo 'test_attributed_graph : Test the AttributedGraph class'
	#Test 2	
	@echo 'test_betweenness_centrality : Test the BetweennessCentrality class for AttributedGraph'
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
	@echo 'test_rand : Test ScaleGraphRandom class'
	#Test 17
	@echo 'test_degree : Test Degree class'
	#Test 18
	@echo 'test_edge_scat : Test ScatteredEdgeListReader class'
	#Test 19
	@echo 'test_betweenness_centrality_plain : Test Betweenness Centrality for PlainGraph'
	#Test 20
	@echo 'test_lapack : Test LAPACK class'
	#Test 21
	@echo 'test_gml : Test GML library'
	#Test 22
	@echo 'test_clustering : Test SpectralClustering class'
	#Test 23
	@echo 'test_pattern : Test Graph Pattern Matching'
	#Test 24
	@echo 'test_randomwalk : Test Random walk with restart'
	#Test 25
	@echo 'test_scalapack : Test ScaLAPACK'
	#Test 27
	@echo 'test_pagerank : Test Pagerank'
	#Test 29
	@echo 'test_estimated_betweenness_centrality_plain: Test estimated bc for large graph'
	@echo 'clean : To clean the build'
	@echo '---------------------------------';

clean:
	rm -r $(OUTPUT)/*
