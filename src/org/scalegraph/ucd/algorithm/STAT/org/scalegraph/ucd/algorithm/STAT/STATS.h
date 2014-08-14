#ifndef __ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS_H
#define __ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_NODEPS
#include <org/scalegraph/test/AlgorithmTest.h>
#undef ORG_SCALEGRAPH_TEST_ALGORITHMTEST_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class XPregelGraph;
} } } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace org { namespace scalegraph { namespace util { 
class StopWatch;
} } } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace x10 { namespace compiler { 
class Ifdef;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class VertexContext;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct;
} } } } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class WorkerPlaceGraph;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace org { namespace scalegraph { namespace util { 
class MathAppend;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
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
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(M)> class MessageCommunicator;
} } } 
namespace org { namespace scalegraph { namespace util { namespace tuple { 
template<class TPMGL(T1), class TPMGL(T2)> class Tuple2;
} } } } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace compiler { 
class Ifndef;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace org { namespace scalegraph { namespace graph { 
class Graph;
} } } 
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class DistSparseMatrix;
} } } 
namespace org { namespace scalegraph { namespace util { 
class Dist2D;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace test { 
class STest;
} } } 
namespace org { namespace scalegraph { namespace ucd { namespace algorithm { namespace STAT { 

class STATS : public org::scalegraph::test::AlgorithmTest   {
    public:
    RTT_H_DECLS_CLASS
    
    using org::scalegraph::test::AlgorithmTest::run;
    
    x10_long FMGL(edgesTotal);
    
    x10_long FMGL(lccAverage);
    
    x10_int FMGL(counter);
    
    x10_long FMGL(verticesTotal);
    
    x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > FMGL(LCC);
    
    virtual void perform_STATS(org::scalegraph::xpregel::XPregelGraph<x10_long, x10_double>* g);
    x10_long calculateLCC(org::scalegraph::xpregel::XPregelGraph<x10_long, x10_double>* g);
    virtual x10_boolean run(x10::array::Array<x10::lang::String*>* args, org::scalegraph::graph::Graph* g);
    static void main(x10::array::Array<x10::lang::String*>* args);
    virtual org::scalegraph::ucd::algorithm::STAT::STATS* org__scalegraph__ucd__algorithm__STAT__STATS____this__org__scalegraph__ucd__algorithm__STAT__STATS(
      );
    void _constructor();
    
    static org::scalegraph::ucd::algorithm::STAT::STATS* _make();
    
    virtual void __fieldInitializers50695();
    
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
#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS_H

namespace org { namespace scalegraph { namespace ucd { namespace algorithm { namespace STAT { 
class STATS;
} } } } } 

#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS_H_NODEPS
#define ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS_H_NODEPS
#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS_H_GENERICS
#define ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS_H_GENERICS
#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS_H_GENERICS
#endif // __ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS_H_NODEPS
