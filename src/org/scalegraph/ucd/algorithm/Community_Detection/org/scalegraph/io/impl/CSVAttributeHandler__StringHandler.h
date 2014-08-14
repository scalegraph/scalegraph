#ifndef __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__STRINGHANDLER_H
#define __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__STRINGHANDLER_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H_NODEPS
#include <org/scalegraph/io/impl/CSVAttributeHandler__BaseHandler.h>
#undef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__BASEHANDLER_H_NODEPS
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVAttributeHandler;
} } } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryPointer;
} } } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace org { namespace scalegraph { namespace util { 
class SStringBuilder;
} } } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
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
namespace org { namespace scalegraph { namespace io { namespace impl { 

class CSVAttributeHandler__StringHandler : public org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<org::scalegraph::util::SString>
  {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(x10_int typeId, x10_boolean doubleQuoated);
    
    static org::scalegraph::io::impl::CSVAttributeHandler__StringHandler* _make(
             x10_int typeId, x10_boolean doubleQuoated);
    
    virtual void parseElements(x10_byte * * elemPtrs, x10_int lines,
                               x10::lang::Any* outBuf);
    virtual x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*
      makeStringClosure(x10::lang::Any* any);
    virtual org::scalegraph::io::impl::CSVAttributeHandler__StringHandler*
      org__scalegraph__io__impl__CSVAttributeHandler__StringHandler____this__org__scalegraph__io__impl__CSVAttributeHandler__StringHandler(
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
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__STRINGHANDLER_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVAttributeHandler__StringHandler;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__STRINGHANDLER_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__STRINGHANDLER_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__STRINGHANDLER_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__STRINGHANDLER_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__STRINGHANDLER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__STRINGHANDLER_H_NODEPS
