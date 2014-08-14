#ifndef __ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER_H
#define __ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER_H

#include <x10rt.h>


#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
#define ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#include <org/scalegraph/util/SString.h>
#undef ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#include <org/scalegraph/util/SString.h>
#undef ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace org { namespace scalegraph { namespace io { 
class FileReader;
} } } 
namespace org { namespace scalegraph { namespace io { 
class FileWriter;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class FileNameProvider__NumberScatteredFileNameProvider;
} } } } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class FileNameProvider__SingleFileNameProvider;
} } } } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class FileNameProvider__DirectoryScatteredFileNameProvider;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

class FileNameProvider : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    org::scalegraph::util::SString FMGL(path);
    
    void _constructor(org::scalegraph::util::SString path);
    
    virtual x10_boolean isScattered() = 0;
    virtual org::scalegraph::util::SString fileName(x10_int index) = 0;
    virtual void mkdir();
    virtual void deleteFile() = 0;
    virtual org::scalegraph::io::FileReader* openRead(x10_int index) = 0;
    virtual org::scalegraph::io::FileWriter* openWrite(x10_int index) = 0;
    static org::scalegraph::io::impl::FileNameProvider* create(org::scalegraph::util::SString path,
                                                               x10_boolean isRead,
                                                               x10_boolean scattered);
    static org::scalegraph::io::impl::FileNameProvider* createForRead(
      org::scalegraph::util::SString path);
    static org::scalegraph::io::impl::FileNameProvider* createForWrite(
      org::scalegraph::util::SString path, x10_boolean scattered);
    virtual org::scalegraph::io::impl::FileNameProvider* org__scalegraph__io__impl__FileNameProvider____this__org__scalegraph__io__impl__FileNameProvider(
      );
    virtual x10::lang::Iterator<org::scalegraph::util::SString>*
      iterator() = 0;
    
    // Serialization
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
class FileNameProvider;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER_H_NODEPS
