 This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).

 This file is licensed to You under the Eclipse Public License (EPL);
 You may not use this file except in compliance with the License.
 You may obtain a copy of the License at
      http://www.opensource.org/licenses/eclipse-1.0.php

 (C) Copyright ScaleGraph Team 2011-2013.

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
