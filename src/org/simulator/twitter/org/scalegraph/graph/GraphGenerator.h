#ifndef __ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR_H
#define __ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class EdgeList;
} } } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace org { namespace scalegraph { namespace util { namespace random { 
class Random;
} } } } 
namespace org { namespace scalegraph { namespace util { 
class Parallel;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace org { namespace scalegraph { namespace util { 
class Team2;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace array { 
class Point;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace lang { 
class Error;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace lang { 
class Float;
} } 
namespace org { namespace scalegraph { namespace util { 
class MathAppend;
} } } 
namespace org { namespace scalegraph { namespace graph { 

class GraphGenerator : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static org::scalegraph::graph::EdgeList<x10_long> genGrid(x10_long rows,
                                                              x10_long columns);
    static org::scalegraph::graph::EdgeList<x10_long> genStar(x10_int scale);
    static org::scalegraph::graph::EdgeList<x10_long> genCircle(x10_int scale,
                                                                x10_int nodeOutDeg);
    static org::scalegraph::graph::EdgeList<x10_long> genFull(x10_int fanout,
                                                              x10_int levels,
                                                              x10_boolean childPointsToParent);
    static org::scalegraph::graph::EdgeList<x10_long> genTree(x10_int scale);
    static org::scalegraph::graph::EdgeList<x10_long> genRandomGraph(x10_int scale,
                                                                     x10_int edgefactor,
                                                                     org::scalegraph::util::random::Random* rnd);
    static org::scalegraph::util::DistMemoryChunk<x10_double>
      genRandomEdgeValue(x10::lang::Fun_0_0<x10_long>* getSize,
                         org::scalegraph::util::random::Random* rnd);
    static org::scalegraph::util::DistMemoryChunk<x10_double>
      genRandomEdgeValue(x10_int scale, x10_int edgefactor,
                         org::scalegraph::util::random::Random* rnd);
    static org::scalegraph::graph::EdgeList<x10_long> genRMAT(
      x10_int scale, x10_int edgefactor, x10_double A, x10_double B,
      x10_double C, org::scalegraph::util::random::Random* rnd);
    static org::scalegraph::graph::EdgeList<x10_long> genRMAT(
      x10_int scale, x10_int edgefactor, x10_double A, x10_double B,
      x10_double C, org::scalegraph::util::random::Random* rnd,
      x10_boolean permute);
    virtual org::scalegraph::graph::GraphGenerator* org__scalegraph__graph__GraphGenerator____this__org__scalegraph__graph__GraphGenerator(
      );
    void _constructor();
    
    static org::scalegraph::graph::GraphGenerator* _make(
             );
    
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR_H

namespace org { namespace scalegraph { namespace graph { 
class GraphGenerator;
} } } 

#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR_H_NODEPS
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR_H_GENERICS
#endif // __ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR_H_NODEPS
