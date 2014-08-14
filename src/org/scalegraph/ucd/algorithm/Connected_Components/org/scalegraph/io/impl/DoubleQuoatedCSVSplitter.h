#ifndef __ORG_SCALEGRAPH_IO_IMPL_DOUBLEQUOATEDCSVSPLITTER_H
#define __ORG_SCALEGRAPH_IO_IMPL_DOUBLEQUOATEDCSVSPLITTER_H

#include <x10rt.h>

#include "CSVHelper.h"

#define ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER_H_NODEPS
#include <org/scalegraph/io/impl/InputSplitter.h>
#undef ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER_H_NODEPS
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace org { namespace scalegraph { namespace io { 
class FileReader;
} } } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 
namespace x10 { namespace compiler { 
class NativeCPPCompilationUnit;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

class DoubleQuoatedCSVSplitter : public org::scalegraph::io::impl::InputSplitter
  {
    public:
    RTT_H_DECLS_CLASS
    
    virtual x10_long nextBreak(org::scalegraph::util::MemoryChunk<x10_byte> data,
                               x10_long offset);
    virtual org::scalegraph::util::MemoryChunk<x10_byte> nextBreak(
      org::scalegraph::io::FileReader* reader);
    virtual org::scalegraph::io::impl::DoubleQuoatedCSVSplitter* org__scalegraph__io__impl__DoubleQuoatedCSVSplitter____this__org__scalegraph__io__impl__DoubleQuoatedCSVSplitter(
      );
    void _constructor();
    
    static org::scalegraph::io::impl::DoubleQuoatedCSVSplitter* _make(
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
#endif // ORG_SCALEGRAPH_IO_IMPL_DOUBLEQUOATEDCSVSPLITTER_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
class DoubleQuoatedCSVSplitter;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_DOUBLEQUOATEDCSVSPLITTER_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_DOUBLEQUOATEDCSVSPLITTER_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_IMPL_DOUBLEQUOATEDCSVSPLITTER_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_DOUBLEQUOATEDCSVSPLITTER_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_IMPL_DOUBLEQUOATEDCSVSPLITTER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_IMPL_DOUBLEQUOATEDCSVSPLITTER_H_NODEPS
