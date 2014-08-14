#ifndef __ORG_SCALEGRAPH_UTIL_BITMAP_H
#define __ORG_SCALEGRAPH_UTIL_BITMAP_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_ULONG_H_NODEPS
#include <x10/lang/ULong.h>
#undef X10_LANG_ULONG_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace lang { 
class Boolean;
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
class Inline;
} } 
namespace org { namespace scalegraph { namespace util { 

class Bitmap : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_int FMGL(BitsPerWord);
    static void FMGL(BitsPerWord__do_init)();
    static void FMGL(BitsPerWord__init)();
    static volatile x10aux::StaticInitController::status FMGL(BitsPerWord__status);
    static x10::lang::CheckedThrowable* FMGL(BitsPerWord__exception);
    static x10_int FMGL(BitsPerWord__get)();
    
    org::scalegraph::util::MemoryChunk<x10_ulong> FMGL(mc);
    
    x10_long FMGL(size);
    
    void _constructor(x10_long size);
    
    static org::scalegraph::util::Bitmap* _make(x10_long size);
    
    void _constructor(x10_long size, x10_boolean initv);
    
    static org::scalegraph::util::Bitmap* _make(x10_long size, x10_boolean initv);
    
    void _constructor(org::scalegraph::util::MemoryChunk<x10_ulong> baseMemory);
    
    static org::scalegraph::util::Bitmap* _make(org::scalegraph::util::MemoryChunk<x10_ulong> baseMemory);
    
    virtual void del();
    virtual x10_long size();
    virtual org::scalegraph::util::MemoryChunk<x10_ulong> raw();
    static x10_long offset(x10_long i);
    static x10_ulong mask(x10_long i);
    static x10_long numWords(x10_long length);
    virtual x10_ulong word(x10_long offset);
    virtual void clear(x10_boolean initv);
    virtual x10_boolean __apply(x10_long i);
    virtual void __set(x10_long i, x10_boolean v);
    virtual void set(x10_long i);
    virtual void unset(x10_long i);
    virtual x10_boolean atomicSet(x10_long i);
    virtual x10_boolean atomicUnset(x10_long i);
    virtual org::scalegraph::util::Bitmap* org__scalegraph__util__Bitmap____this__org__scalegraph__util__Bitmap(
      );
    virtual void __fieldInitializers75269();
    
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
#endif // ORG_SCALEGRAPH_UTIL_BITMAP_H

namespace org { namespace scalegraph { namespace util { 
class Bitmap;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_BITMAP_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_BITMAP_H_NODEPS
#ifndef ORG_SCALEGRAPH_UTIL_BITMAP_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_BITMAP_H_GENERICS
inline x10_int org::scalegraph::util::Bitmap::FMGL(BitsPerWord__get)() {
    if (FMGL(BitsPerWord__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(BitsPerWord__init)();
    }
    return org::scalegraph::util::Bitmap::FMGL(BitsPerWord);
}

#endif // ORG_SCALEGRAPH_UTIL_BITMAP_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_BITMAP_H_NODEPS
