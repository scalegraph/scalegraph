CC			=x10c++
BIN_PATH	=bin/
SRC_PATH	=../src/example/

CFLAGS		=-x10rt mpi -cxx-prearg -I../../include -d build -sourcepath ../src

SRC			=DegreeDistributionExample.x10
OBJS 		=$(SRC:%.x10=%)
OBJECTS		=$(addprefix $(BIN_PATH), $(OBJS))

all:
	@echo "Please choose target wether  build or run";


build: $(OBJECTS)

clean: 
	rm -f bin/*

.PHONY: build clean

bin/%:
	echo $(notdir $@)
	$(CC) $(CFLAGS) -o $@ $(SRC_PATH)/$(addsuffix .x10, $(notdir $@))
%.x10:
	@echo $@
