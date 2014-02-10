#Release 2.2

##Requirements
* MVAPICH2 with -fPIC enable
* Cmake 2.8 or above
* Apache ANT 1.7 or above

##ScaleGraph
### Features and Improvements
* Make script for building ScaleGraph linkable library - user can create X10 linkable library (x10lib) of ScaleGraph library using Makefile in ScaleGraph home folder
* Explicitly managed memory - for a large memory allocation request, MemoryChunk will allocate memory from outside of the GC heap, because BDWGC is not good at managing large memory regions. This feature reduces the memory consumption dramatically.
* New method for creating MemoryChunk - a MemoryChunk object must be created from the factory methods.
* Optimized HyperANF implementation - HyperANF implementation has been improved to support large graph
* org.scalegraph.Config class - a class for storing global configuration

##SX10
### Features and Improvements
* Fast compilation - user now can enable the parallel compilation of c++ source files by adding "-make -make-arg -j" option to the x10c++ command


#Release 2.1
The current stable release is ScaleGraph 2.1.

#Release 2.0b
## Features and Improvements
### ScaleGraph
* new xpregel
* graph generators (RMAT generator and Erdös-Renyi generator)
* fast binary io package
* multiple recursive random number generator
* betweenness centrality for weighted graph
* delta-stepping visitor
* degree distribution
* bitmap structure
* DistributedReader.read() accepts type parameter

### SX10
* Add FINISH_NONE annotation used for enclosing nested "at" statement (i.e., "at" statement within "at" statement)
* Team.WORLD initialized only on the FIRST_PLACE
* Add new PlaceLocalHandle constructor accepting PlaceGroup, init_here and init_there
* File__Native::list() returns sorted file list


## Bug Fixes
* [ScaleGraph] ArrayIndexOutOfBound when calling DistBetweennessCentrality.calculate
* [ScaleGraph] Fix bug in degree distribution
* [SX10] Fix memory leaks when allocating a large chunk of memory

There is a bug in degree distribution that generates wrong result when run on multiple places
