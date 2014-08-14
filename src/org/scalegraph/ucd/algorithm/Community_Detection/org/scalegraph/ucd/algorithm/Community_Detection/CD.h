#ifndef __ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD_H
#define __ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_NODEPS
#include <org/scalegraph/test/AlgorithmTest.h>
#undef ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_NODEPS
#define X10_LANG_FLOAT_H_NODEPS
#include <x10/lang/Float.h>
#undef X10_LANG_FLOAT_H_NODEPS
#define X10_LANG_FLOAT_H_NODEPS
#include <x10/lang/Float.h>
#undef X10_LANG_FLOAT_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class XPregelGraph;
} } } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class VertexContext;
} } } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(M)> class MessageCommunicator;
} } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Box;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace org { namespace scalegraph { namespace util { 
class MathAppend;
} } } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace org { namespace scalegraph { namespace graph { 
class Graph;
} } } 
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class DistSparseMatrix;
} } } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace org { namespace scalegraph { namespace util { 
class Dist2D;
} } } 
namespace org { namespace scalegraph { namespace test { 
class STest;
} } } 
namespace org { namespace scalegraph { namespace ucd { namespace algorithm { namespace Community_Detection { 

class CD : public org::scalegraph::test::AlgorithmTest   {
    public:
    RTT_H_DECLS_CLASS
    
    using org::scalegraph::test::AlgorithmTest::run;
    
    x10_float FMGL(labelScore);
    
    x10::util::HashMap<x10_float, x10_float>* FMGL(neighboursLabels);
    
    x10::util::HashMap<x10_float, x10_float>* FMGL(labelMaxScore);
    
    x10_float FMGL(oldLabel);
    
    x10_float FMGL(aggScore);
    
    x10_float FMGL(maxScore);
    
    virtual void perform_CD(org::scalegraph::xpregel::XPregelGraph<x10_float, x10_double>* g,
                            x10_float delta);
    x10_float getNewLabel(org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>* vtx);
    virtual x10_boolean run(x10::array::Array<x10::lang::String*>* args,
                            org::scalegraph::graph::Graph* g);
    static void main(x10::array::Array<x10::lang::String*>* args);
    virtual org::scalegraph::ucd::algorithm::Community_Detection::CD*
      org__scalegraph__ucd__algorithm__Community_Detection__CD____this__org__scalegraph__ucd__algorithm__Community_Detection__CD(
      );
    void _constructor();
    
    static org::scalegraph::ucd::algorithm::Community_Detection::CD* _make(
             );
    
    virtual void __fieldInitializers50713();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } } } 
#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD_H

namespace org { namespace scalegraph { namespace ucd { namespace algorithm { namespace Community_Detection { 
class CD;
} } } } } 

#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD_H_NODEPS
#define ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD_H_NODEPS
#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD_H_GENERICS
#define ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD_H_GENERICS
#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD_H_GENERICS
#endif // __ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD_H_NODEPS
