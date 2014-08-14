#ifndef __ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB_H
#define __ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace org { namespace scalegraph { namespace util { 
class Algorithm;
} } } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Ifndef;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace lang { 
class IntRange;
} } 
namespace org { namespace scalegraph { namespace util { 
class Team2;
} } } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace org { namespace scalegraph { namespace util { 

class ProfilingDB__DB : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_double FMGL(FREQ);
    static void FMGL(FREQ__do_init)();
    static void FMGL(FREQ__init)();
    static volatile x10aux::StaticInitController::status FMGL(FREQ__status);
    static x10::lang::CheckedThrowable* FMGL(FREQ__exception);
    static x10_double FMGL(FREQ__get)();
    
    x10_int FMGL(numFrames);
    
    x10_int FMGL(numThreads);
    
    x10_int FMGL(width);
    
    x10_int FMGL(totalPoints);
    
    org::scalegraph::util::MemoryChunk<x10_int> FMGL(numPoints);
    
    org::scalegraph::util::MemoryChunk<x10_int> FMGL(frameOffsets);
    
    org::scalegraph::util::MemoryChunk<x10_int> FMGL(pointIndex);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(step);
    
    org::scalegraph::util::MemoryChunk<x10_double> FMGL(result);
    
    void _constructor(x10::array::Array<x10_int>* numPoints_);
    
    static org::scalegraph::util::ProfilingDB__DB* _make(x10::array::Array<x10_int>* numPoints_);
    
    static org::scalegraph::util::MemoryChunk<x10_int> initOffset(org::scalegraph::util::MemoryChunk<x10_int> numPoints);
    virtual org::scalegraph::util::MemoryChunk<x10_long> get(x10_int frame,
                                                             x10_long tid);
    org::scalegraph::util::MemoryChunk<x10_double> resbuf(x10_int idx);
    void localMin(org::scalegraph::util::MemoryChunk<x10_long> buf, x10_int base);
    void localMax(org::scalegraph::util::MemoryChunk<x10_long> buf, x10_int base);
    void localSum(org::scalegraph::util::MemoryChunk<x10_long> buf, x10_int base);
    virtual void finishStep(org::scalegraph::util::Team2 team);
    virtual org::scalegraph::util::ProfilingDB__DB* org__scalegraph__util__ProfilingDB__DB____this__org__scalegraph__util__ProfilingDB__DB(
      );
    virtual void __fieldInitializers89180();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB_H

namespace org { namespace scalegraph { namespace util { 
class ProfilingDB__DB;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB_H_NODEPS
#ifndef ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB_H_GENERICS
inline x10_double org::scalegraph::util::ProfilingDB__DB::FMGL(FREQ__get)() {
    if (FMGL(FREQ__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(FREQ__init)();
    }
    return org::scalegraph::util::ProfilingDB__DB::FMGL(FREQ);
}

#endif // ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB_H_NODEPS
