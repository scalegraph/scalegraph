#ifndef __ORG_SCALEGRAPH_IO_IMPL_CSVREADER__READERBUFFER_H
#define __ORG_SCALEGRAPH_IO_IMPL_CSVREADER__READERBUFFER_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_UTIL_MEMORYPOINTER_H_NODEPS
#include <org/scalegraph/util/MemoryPointer.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYPOINTER_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYPOINTER_H_NODEPS
#include <org/scalegraph/util/MemoryPointer.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYPOINTER_H_NODEPS
#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYPOINTER_H_NODEPS
#include <org/scalegraph/util/MemoryPointer.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYPOINTER_H_NODEPS
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
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVAttributeHandler;
} } } } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace array { 
class RectRegion1D;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { namespace tuple { 
template<class TPMGL(T1), class TPMGL(T2)> class Tuple2;
} } } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

class CSVReader__ReaderBuffer : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* FMGL(attHandler);
    
    x10::array::Array<x10::lang::Any*>* FMGL(buffer);
    
    x10_byte * * FMGL(elemPtrs);
    
    org::scalegraph::util::GrowableMemory<x10_long>* FMGL(chunkSize);
    
    x10_long FMGL(stride);
    
    x10_int FMGL(numElems);
    
    void _constructor(x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* attHandler);
    
    static org::scalegraph::io::impl::CSVReader__ReaderBuffer* _make(x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* attHandler);
    
    org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> nativeParseChunk(
      org::scalegraph::util::MemoryChunk<x10_byte> data);
    virtual void parse(org::scalegraph::util::MemoryChunk<x10_byte> data);
    virtual org::scalegraph::io::impl::CSVReader__ReaderBuffer* org__scalegraph__io__impl__CSVReader__ReaderBuffer____this__org__scalegraph__io__impl__CSVReader__ReaderBuffer(
      );
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVREADER__READERBUFFER_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVReader__ReaderBuffer;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVREADER__READERBUFFER_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_CSVREADER__READERBUFFER_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVREADER__READERBUFFER_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_CSVREADER__READERBUFFER_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVREADER__READERBUFFER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_IMPL_CSVREADER__READERBUFFER_H_NODEPS
