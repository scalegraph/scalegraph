#ifndef __ORG_SCALEGRAPH_IO_FILEREADER_H
#define __ORG_SCALEGRAPH_IO_FILEREADER_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_IO_NATIVEFILE_H_NODEPS
#include <org/scalegraph/io/NativeFile.h>
#undef ORG_SCALEGRAPH_IO_NATIVEFILE_H_NODEPS
#define ORG_SCALEGRAPH_IO_NATIVEFILE_H_NODEPS
#include <org/scalegraph/io/NativeFile.h>
#undef ORG_SCALEGRAPH_IO_NATIVEFILE_H_NODEPS
#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace io { 
class EOFException;
} } 
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
class Char;
} } 
namespace org { namespace scalegraph { namespace io { 

class FileReader : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_int FMGL(BUFFER_SIZE);
    static void FMGL(BUFFER_SIZE__do_init)();
    static void FMGL(BUFFER_SIZE__init)();
    static volatile x10aux::StaticInitController::status FMGL(BUFFER_SIZE__status);
    static x10::lang::CheckedThrowable* FMGL(BUFFER_SIZE__exception);
    static x10_int FMGL(BUFFER_SIZE__get)();
    
    org::scalegraph::io::NativeFile FMGL(nf);
    
    org::scalegraph::util::GrowableMemory<x10_byte>* FMGL(buffer);
    
    x10_long FMGL(offset);
    
    x10_long FMGL(length);
    
    x10_long FMGL(fileOffset);
    
    void _constructor(org::scalegraph::util::SString path);
    
    static org::scalegraph::io::FileReader* _make(org::scalegraph::util::SString path);
    
    virtual void reset();
    virtual void skip(x10_long n);
    virtual x10_long read(org::scalegraph::util::MemoryChunk<x10_byte> r);
    virtual x10_byte read();
    virtual void close();
    virtual x10_long available();
    x10_long fillBuffer();
    virtual x10_long currentOffset();
    void replaceBuffer(x10_long new_size);
    void shrinkBuffer();
    void growBuffer(x10_long request);
    org::scalegraph::util::MemoryChunk<x10_byte> internalReadLine();
    virtual org::scalegraph::util::SString readLine();
    virtual org::scalegraph::util::SString fastReadLine();
    virtual org::scalegraph::io::FileReader* org__scalegraph__io__FileReader____this__org__scalegraph__io__FileReader(
      );
    virtual void __fieldInitializers126599();
    
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
#endif // ORG_SCALEGRAPH_IO_FILEREADER_H

namespace org { namespace scalegraph { namespace io { 
class FileReader;
} } } 

#ifndef ORG_SCALEGRAPH_IO_FILEREADER_H_NODEPS
#define ORG_SCALEGRAPH_IO_FILEREADER_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_FILEREADER_H_GENERICS
#define ORG_SCALEGRAPH_IO_FILEREADER_H_GENERICS
inline x10_int org::scalegraph::io::FileReader::FMGL(BUFFER_SIZE__get)() {
    if (FMGL(BUFFER_SIZE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(BUFFER_SIZE__init)();
    }
    return org::scalegraph::io::FileReader::FMGL(BUFFER_SIZE);
}

#endif // ORG_SCALEGRAPH_IO_FILEREADER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_FILEREADER_H_NODEPS
