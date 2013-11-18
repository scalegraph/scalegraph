CC			=x10c++
BIN_PATH	=bin/
SRC_PATH	=../src/example/

ARPACK_LIB_FLAG	= -cxx-postarg -larpack_LINUX -cxx-postarg -lparpack_MPI-LINUX
CFLAGS		=-x10rt mpi -cxx-prearg -I../../include -d build -cxx-prearg -L../../lib/  -sourcepath ../src $(ARPACK_LIB_FLAG)

SRC			=DegreeDistributionExample.x10 DeltaSteppingVisitorExample.x10 DistBetweennessCentralityUnweightedExample.x10 DistBetweennessCentralityWeightedExample.x10  LsBfsVisitorExample.x10 MaximumFlowExample.x10 MinimumSpanningTreeExample.x10 PageRankExample.x10 PageRankSimple.x10 SpectralClusteringExample.x10 StronglyConnectedComponentExample.x10
OBJS 		=$(SRC:%.x10=%)
OBJECTS		=$(addprefix $(BIN_PATH), $(OBJS))

all:
	@echo "Please choose target wether  build, clean  or run";


build: init $(OBJECTS)

init:
	mkdir -p bin build

run:
	./run.sh

clean: 
	rm -f bin/*

.PHONY: init build clean

bin/%:
	echo $(notdir $@)
	$(CC) $(CFLAGS) -o $@ $(SRC_PATH)/$(addsuffix .x10, $(notdir $@))
%.x10:
	@echo $@
