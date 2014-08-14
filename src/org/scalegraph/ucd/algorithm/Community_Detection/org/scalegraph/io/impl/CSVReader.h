#ifndef __ORG_SCALEGRAPH_IO_IMPL_CSVREADER_H
#define __ORG_SCALEGRAPH_IO_IMPL_CSVREADER_H

#include <x10rt.h>


namespace org { namespace scalegraph { namespace id { 
class ProfilingID__IO;
} } } 
namespace x10 { namespace util { 
class Team;
} } 
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace io { 
class NamedDistData;
} } } 
namespace x10 { namespace lang { 
class Runtime;
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
namespace org { namespace scalegraph { namespace io { namespace impl { 
class FileNameProvider;
} } } } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace io { 
class FileReader;
} } } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVReader__NativeCSVHeader;
} } } } 
namespace x10 { namespace io { 
class IOException;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVReader__CSVAttribute;
} } } } 
namespace org { namespace scalegraph { namespace id { 
class Type;
} } } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Byte;
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
namespace x10 { namespace compiler { 
class Ifndef;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class PlaceLocalHandle;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVReader__ReaderBuffer;
} } } } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class InputSplitter;
} } } } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class DoubleQuoatedCSVSplitter;
} } } } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class LineBreakSplitter;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace compiler { 
class NativeCPPCompilationUnit;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

class CSVReader : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static org::scalegraph::io::NamedDistData* read(x10::util::Team* team,
                                                    org::scalegraph::util::SString path,
                                                    x10::array::Array<x10_int>* columnDef,
                                                    x10::array::Array<x10::lang::String*>* columnNames,
                                                    x10_boolean includeHeader);
    virtual org::scalegraph::io::impl::CSVReader* org__scalegraph__io__impl__CSVReader____this__org__scalegraph__io__impl__CSVReader(
      );
    void _constructor();
    
    static org::scalegraph::io::impl::CSVReader* _make();
    
    
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
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVREADER_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVReader;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVREADER_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_CSVREADER_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVREADER_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_CSVREADER_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVREADER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_IMPL_CSVREADER_H_NODEPS
