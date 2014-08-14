#ifndef __ORG_SCALEGRAPH_UTIL_PROFILINGDB__TIMER_H
#define __ORG_SCALEGRAPH_UTIL_PROFILINGDB__TIMER_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class Boolean;
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
class Int;
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

class ProfilingDB__Timer   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::ProfilingDB__Timer* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::ProfilingDB__Timer > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::ProfilingDB__Timer _alloc(){org::scalegraph::util::ProfilingDB__Timer t; return t; }
    
    org::scalegraph::util::MemoryChunk<x10_long> FMGL(span);
    
    void _constructor(org::scalegraph::util::MemoryChunk<x10_long> span);
    
    static org::scalegraph::util::ProfilingDB__Timer _make(org::scalegraph::util::MemoryChunk<x10_long> span);
    
    void start();
    void lap(x10_int kind);
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::util::ProfilingDB__Timer other) {
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(span), other->FMGL(span)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::ProfilingDB__Timer other) {
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(span), other->FMGL(span)));
        
    }
    org::scalegraph::util::ProfilingDB__Timer org__scalegraph__util__ProfilingDB__Timer____this__org__scalegraph__util__ProfilingDB__Timer(
      ) {
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    static void _serialize(org::scalegraph::util::ProfilingDB__Timer this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::ProfilingDB__Timer _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::ProfilingDB__Timer this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_UTIL_PROFILINGDB__TIMER_H

namespace org { namespace scalegraph { namespace util { 
class ProfilingDB__Timer;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_PROFILINGDB__TIMER_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_PROFILINGDB__TIMER_H_NODEPS
#ifndef ORG_SCALEGRAPH_UTIL_PROFILINGDB__TIMER_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_PROFILINGDB__TIMER_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_PROFILINGDB__TIMER_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_PROFILINGDB__TIMER_H_NODEPS
