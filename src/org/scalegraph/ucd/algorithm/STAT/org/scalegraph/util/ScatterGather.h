#ifndef __ORG_SCALEGRAPH_UTIL_SCATTERGATHER_H
#define __ORG_SCALEGRAPH_UTIL_SCATTERGATHER_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk__Distributor;
} } } 
namespace x10 { namespace lang { 
class Int;
} } 
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
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace org { namespace scalegraph { namespace util { 

class ScatterGather   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::ScatterGather* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::ScatterGather > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::ScatterGather _alloc(){org::scalegraph::util::ScatterGather t; return t; }
    
    x10_long FMGL(nChunk);
    
    x10_long FMGL(maxThreads);
    
    x10_long FMGL(bufferWidth);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(threadCounts);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(threadOffsets);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(sendCounts);
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(sendOffsets);
    
    x10_long FMGL(CACHE_LINE);
    
    void _constructor(x10_long nChunk);
    
    static org::scalegraph::util::ScatterGather _make(x10_long nChunk);
    
    org::scalegraph::util::MemoryChunk<x10_long> counts(x10_int tid);
    org::scalegraph::util::MemoryChunk<x10_long> offsets(x10_int tid);
    void sum();
    x10_long sendCount();
    void check(x10_int size);
    org::scalegraph::util::MemoryChunk<x10_long> offsets() {
        
        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
        return (*this)->FMGL(sendOffsets);
        
    }
    org::scalegraph::util::MemoryChunk<x10_long> counts() {
        
        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
        return (*this)->FMGL(sendCounts);
        
    }
    x10_long size();
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::util::ScatterGather other) {
        
        //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(nChunk), other->FMGL(nChunk))) &&
        (x10aux::struct_equals((*this)->FMGL(maxThreads), other->
                                                            FMGL(maxThreads))) &&
        (x10aux::struct_equals((*this)->FMGL(bufferWidth),
                               other->FMGL(bufferWidth))) &&
        (x10aux::struct_equals((*this)->FMGL(threadCounts),
                               other->FMGL(threadCounts))) &&
        (x10aux::struct_equals((*this)->FMGL(threadOffsets),
                               other->FMGL(threadOffsets))) &&
        (x10aux::struct_equals((*this)->FMGL(sendCounts),
                               other->FMGL(sendCounts))) &&
        (x10aux::struct_equals((*this)->FMGL(sendOffsets),
                               other->FMGL(sendOffsets))) &&
        (x10aux::struct_equals((*this)->FMGL(CACHE_LINE),
                               other->FMGL(CACHE_LINE)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::ScatterGather other) {
        
        //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(nChunk),
                                      other->FMGL(nChunk))) &&
        (x10aux::struct_equals((*this)->FMGL(maxThreads),
                               other->FMGL(maxThreads))) &&
        (x10aux::struct_equals((*this)->FMGL(bufferWidth),
                               other->FMGL(bufferWidth))) &&
        (x10aux::struct_equals((*this)->FMGL(threadCounts),
                               other->FMGL(threadCounts))) &&
        (x10aux::struct_equals((*this)->FMGL(threadOffsets),
                               other->FMGL(threadOffsets))) &&
        (x10aux::struct_equals((*this)->FMGL(sendCounts),
                               other->FMGL(sendCounts))) &&
        (x10aux::struct_equals((*this)->FMGL(sendOffsets),
                               other->FMGL(sendOffsets))) &&
        (x10aux::struct_equals((*this)->FMGL(CACHE_LINE),
                               other->FMGL(CACHE_LINE)));
        
    }
    org::scalegraph::util::ScatterGather org__scalegraph__util__ScatterGather____this__org__scalegraph__util__ScatterGather(
      ) {
        
        //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    void __fieldInitializers112243() {
        
        //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(CACHE_LINE) = ((x10_long)64ll);
    }
    
    static void _serialize(org::scalegraph::util::ScatterGather this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::ScatterGather _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::ScatterGather this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_UTIL_SCATTERGATHER_H

namespace org { namespace scalegraph { namespace util { 
class ScatterGather;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_SCATTERGATHER_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SCATTERGATHER_H_NODEPS
#ifndef ORG_SCALEGRAPH_UTIL_SCATTERGATHER_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_SCATTERGATHER_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_SCATTERGATHER_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_SCATTERGATHER_H_NODEPS
