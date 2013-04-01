#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
# Makefile for testing x10 based pregel framework #
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#

# setting for x10 threads
export X10_NTHREADS=5
export X10_STATIC_THREADS=true
export X10_NO_STEALS=false
export X10_NPLACES=4

# setting for x10 runtime variable
X10_NPLACES = 4
#comment out for running on sc
#X10_HOSTFILE=machines.txt
X10_NTHREADS = 10

OUTPUT_DIR = ./bin
INTERM_DIR = ./out

APP_DIR = /nfs/home/thienbao/Project/X10Pregel
HOSTFILE = machines.txt

#~~~~~~~~~~~~~~~~~Enviroment dependent settings~~~~~~~~~~~~~~~~~~~~~#
#Set the x10 home
#X10_HOME = /Users/thienbao/Applications/X10
# comment out for running on sc
X10_HOME=~/Applications/x10-trunk/trunk/x10.dist

CLASSPATH = $(X10_HOME)

#MPI home
MPI_HOME = /nfs/data0/miyuru/software/mpich2-1.4

# for Team Library
LABAPPHOME=/usr/global
#tsubame 
#LABAPPHOME=/home/usr1/11M38097/lab
X10_TEAM=$(LABAPPHOME)/x10/x10-trunk-custom/x10.dist
# tsubame x10 home
#X10_HOME=/home/usr1/11M38097/lab/x10/x10-trunk
MPAVICH2=$(LABAPPHOME)/x10/mvapich2-1.9a

#Test 1
test_1:
	@echo "---------------------Test for graph reader and round-robin partition------------------" ;
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT_DIR) -o $(OUTPUT_DIR)/Test1 \
	src/x10/pregel/test/TestAdjencyListReader.x10 ;
	@echo "---------------------Running Test 1---------------------------------------------------" ;
	$(X10_HOME)/bin/X10Launcher -np $(X10_PLACES) -hostfile $(APP_DIR)/$(HOSTFILE) $(OUTPUT_DIR)/Test1 ;

test_plh:
	@echo "---------------------Test PlaceLocalHandle------------------" ;
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT_DIR) -o $(OUTPUT_DIR)/TestPlaceLocalHandle \
	src/x10/pregel/test/TestPlaceLocalHandle.x10 ;
	@echo "---------------------Running Test PlaceLocalHandle---------------------------------------------------" ;
	$(X10_HOME)/bin/X10Launcher $(OUTPUT_DIR)/TestPlaceLocalHandle ;

test_hdfs:
	@echo "---------------------Test HDFS Reader and Writer-------------" ;
	$(X10_HOME)/bin/x10c++ -d $(OUTPUT_DIR) -o $(OUTPUT_DIR)/TestHdfs \
	-post "# # -L /usr/global/hadoop/lib/native -lhdfs -L /usr/global/hotspot/jre/lib/amd64/server -ljvm # -I /usr/global/hadoop/include -I /usr/global/hotspot/include -I /usr/global/hotspot/include/linux" \
	src/x10/pregel/test/TestHdfsFileSystem.x10 \
	src/x10/pregel/io/hdfs/HDFSFileSystem.x10 ;

test_xpregel_graph:
	@echo "--------------------- Test XPregel Graph In ScaleGraph--------";
	$(X10_TEAM)/bin/x10c++ -cxx-prearg -g -x10rt mpi -d $(OUTPUT_DIR) -o $(OUTPUT_DIR)/XPregelGraph \
	-sourcepath ./src ./src/org/scalegraph/xpregel/test/TestGraph.x10

xpregel_pagerank:
	@echo "--------------------- PageRank - XPregel - Scalegraph 2.0--------------------";
	$(X10_TEAM)/bin/x10c++ -cxx-prearg -g -x10rt mpi -d $(OUTPUT_DIR) -o $(OUTPUT_DIR)/PageRank \
	-sourcepath ./src ./src/org/scalegraph/xpregel/test/PageRank.x10 

xpregel_sssp:
	@echo "--------------------- SSSP - XPregel - Scalegraph 2.0 -----------------------";
	$(X10_TEAM)/bin/x10c++ -cxx-prearg -g -x10rt mpi -d $(OUTPUT_DIR) -o $(OUTPUT_DIR)/SSSP \
	-sourcepath ./src ./src/org/scalegraph/xpregel/test/SSSP.x10

xpregel_blondel:
	@echo "--------------------- Blondel - XPregel - Scalegraph 2.0 --------------------";
	$(X10_TEAM)/bin/x10c++ -cxx-prearg -g -x10rt mpi -d $(OUTPUT_DIR) -o $(OUTPUT_DIR)/Blondel \
	-sourcepath ./src ./src/org/scalegraph/xpregel/test/BlondelTest.x10

clean:
	rm -r $(OUTPUT_DIR)/*
	