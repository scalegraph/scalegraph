#ifndef __ORG_SCALEGRAPH_IO_FILEWRITER_H
#define __ORG_SCALEGRAPH_IO_FILEWRITER_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_IO_NATIVEFILE_H_NODEPS
#include <org/scalegraph/io/NativeFile.h>
#undef ORG_SCALEGRAPH_IO_NATIVEFILE_H_NODEPS
#define ORG_SCALEGRAPH_IO_NATIVEFILE_H_NODEPS
#include <org/scalegraph/io/NativeFile.h>
#undef ORG_SCALEGRAPH_IO_NATIVEFILE_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace org { namespace scalegraph { namespace io { 

class FileWriter : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    org::scalegraph::io::NativeFile FMGL(nf);
    
    x10_long FMGL(fileOffset);
    
    void _constructor(org::scalegraph::util::SString path, x10_int fileMode);
    
    static org::scalegraph::io::FileWriter* _make(org::scalegraph::util::SString path,
                                                  x10_int fileMode);
    
    virtual void reset();
    virtual void skip(x10_long n);
    virtual void close();
    virtual x10_long currentOffset();
    virtual void write(org::scalegraph::util::MemoryChunk<x10_byte> b);
    virtual org::scalegraph::io::FileWriter* org__scalegraph__io__FileWriter____this__org__scalegraph__io__FileWriter(
      );
    virtual void __fieldInitializers133906();
    
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
#endif // ORG_SCALEGRAPH_IO_FILEWRITER_H

namespace org { namespace scalegraph { namespace io { 
class FileWriter;
} } } 

#ifndef ORG_SCALEGRAPH_IO_FILEWRITER_H_NODEPS
#define ORG_SCALEGRAPH_IO_FILEWRITER_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_FILEWRITER_H_GENERICS
#define ORG_SCALEGRAPH_IO_FILEWRITER_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_FILEWRITER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_FILEWRITER_H_NODEPS
