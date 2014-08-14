#ifndef __ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER__NUMBERSCATTEREDFILENAMEPROVIDER_H
#define __ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER__NUMBERSCATTEREDFILENAMEPROVIDER_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER_H_NODEPS
#include <org/scalegraph/io/impl/FileNameProvider.h>
#undef ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER_H_NODEPS
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
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
namespace org { namespace scalegraph { namespace io { namespace impl { 
class FileNameProvider__PathIterator;
} } } } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

class FileNameProvider__NumberScatteredFileNameProvider : public org::scalegraph::io::impl::FileNameProvider
  {
    public:
    RTT_H_DECLS_CLASS
    
    static x10aux::itable_entry _itables[3];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Iterable<org::scalegraph::util::SString>::itable<org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider > _itable_0;
    
    static x10::lang::Any::itable<org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider > _itable_1;
    
    void _constructor(org::scalegraph::util::SString path);
    
    static org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider* _make(
             org::scalegraph::util::SString path);
    
    virtual x10_boolean isScattered();
    virtual org::scalegraph::util::SString fileName(x10_int index);
    virtual void deleteFile();
    virtual org::scalegraph::io::FileReader* openRead(x10_int index);
    virtual org::scalegraph::io::FileWriter* openWrite(x10_int index);
    virtual x10::lang::Iterator<org::scalegraph::util::SString>*
      iterator();
    virtual org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider*
      org__scalegraph__io__impl__FileNameProvider__NumberScatteredFileNameProvider____this__org__scalegraph__io__impl__FileNameProvider__NumberScatteredFileNameProvider(
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
#endif // ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER__NUMBERSCATTEREDFILENAMEPROVIDER_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
class FileNameProvider__NumberScatteredFileNameProvider;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER__NUMBERSCATTEREDFILENAMEPROVIDER_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER__NUMBERSCATTEREDFILENAMEPROVIDER_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER__NUMBERSCATTEREDFILENAMEPROVIDER_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER__NUMBERSCATTEREDFILENAMEPROVIDER_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER__NUMBERSCATTEREDFILENAMEPROVIDER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_IMPL_FILENAMEPROVIDER__NUMBERSCATTEREDFILENAMEPROVIDER_H_NODEPS
