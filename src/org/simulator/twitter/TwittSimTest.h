#ifndef __TWITTSIMTEST_H
#define __TWITTSIMTEST_H

#include <x10rt.h>


namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace org { namespace scalegraph { namespace util { 
class Dist2D;
} } } 
namespace x10 { namespace lang { 
class Int;
} } 
class TwitterSimulator1;
namespace org { namespace scalegraph { namespace util { namespace random { 
class Random;
} } } } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class EdgeList;
} } } 
namespace org { namespace scalegraph { namespace graph { 
class GraphGenerator;
} } } 
namespace org { namespace scalegraph { namespace graph { 
class Graph;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class DistSparseMatrix;
} } } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class XPregelGraph;
} } } 
namespace org { namespace simulator { namespace twitter { 
class TwitterUser;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class VertexContext;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { namespace tuple { 
template<class TPMGL(T1), class TPMGL(T2)> class Tuple2;
} } } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace org { namespace scalegraph { namespace util { 
class MathAppend;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
class TwittSimTest : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void main(x10::array::Array<x10::lang::String*>* args);
    virtual TwittSimTest* TwittSimTest____this__TwittSimTest();
    void _constructor();
    
    static TwittSimTest* _make();
    
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

#endif // TWITTSIMTEST_H

class TwittSimTest;

#ifndef TWITTSIMTEST_H_NODEPS
#define TWITTSIMTEST_H_NODEPS
#ifndef TWITTSIMTEST_H_GENERICS
#define TWITTSIMTEST_H_GENERICS
#endif // TWITTSIMTEST_H_GENERICS
#endif // __TWITTSIMTEST_H_NODEPS
