#ifndef __ORG_SCALEGRAPH_IO_IMPL_CSVWRITER_H
#define __ORG_SCALEGRAPH_IO_IMPL_CSVWRITER_H

#include <x10rt.h>


namespace org { namespace scalegraph { namespace id { 
class ProfilingID__IO;
} } } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace org { namespace scalegraph { namespace io { 
class NamedDistData;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class FileNameProvider;
} } } } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVAttributeHandler;
} } } } 
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
class Any;
} } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
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
namespace org { namespace scalegraph { namespace io { 
class FileWriter;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace org { namespace scalegraph { namespace id { 
class Type;
} } } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVWriter__ParallelWriter;
} } } } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

class CSVWriter : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_int FMGL(CHUNK_SIZE);
    static void FMGL(CHUNK_SIZE__do_init)();
    static void FMGL(CHUNK_SIZE__init)();
    static volatile x10aux::StaticInitController::status FMGL(CHUNK_SIZE__status);
    static x10::lang::CheckedThrowable* FMGL(CHUNK_SIZE__exception);
    static x10_int FMGL(CHUNK_SIZE__get)();
    
    static void write(x10::util::Team* team, org::scalegraph::util::SString path,
                      org::scalegraph::io::NamedDistData* data, x10_boolean putIdFlag);
    virtual org::scalegraph::io::impl::CSVWriter* org__scalegraph__io__impl__CSVWriter____this__org__scalegraph__io__impl__CSVWriter(
      );
    void _constructor();
    
    static org::scalegraph::io::impl::CSVWriter* _make();
    
    
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
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVWRITER_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVWriter;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVWRITER_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_CSVWRITER_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVWRITER_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_CSVWRITER_H_GENERICS
inline x10_int org::scalegraph::io::impl::CSVWriter::FMGL(CHUNK_SIZE__get)() {
    if (FMGL(CHUNK_SIZE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(CHUNK_SIZE__init)();
    }
    return org::scalegraph::io::impl::CSVWriter::FMGL(CHUNK_SIZE);
}

#endif // ORG_SCALEGRAPH_IO_IMPL_CSVWRITER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_IMPL_CSVWRITER_H_NODEPS
