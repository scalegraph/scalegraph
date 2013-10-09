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
