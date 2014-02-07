#Release 2.2
##ScaleGraph
### Features and Improvements
* Make script for building X10 linkable library - user can create X10 linkable library of ScaleGraph using Makefile in ScaleGraph hone folder
* Explicit memory allocation - 
* New method for creating MemoryChunk - a MemoryChunk object must be created from the provided factory method  rather than using "new" operator
* Optimized HyperANF implementation - HyperANF implementation has been improved to support large graph
* org.scalegraph.Config class - a class for storing global configuration

##SX10
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
