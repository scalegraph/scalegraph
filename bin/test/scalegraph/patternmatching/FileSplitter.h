#ifndef __TEST_SCALEGRAPH_PATTERNMATCHING_FILESPLITTER_H
#define __TEST_SCALEGRAPH_PATTERNMATCHING_FILESPLITTER_H

#include <x10rt.h>


#define X10_LANG_OBJECT_H_NODEPS
#include <x10/lang/Object.h>
#undef X10_LANG_OBJECT_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace org { namespace scalegraph { namespace util { 
class DirectoryInfo;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace io { 
class FileReader;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace io { 
class Reader;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace io { 
class FileWriter;
} } 
namespace x10 { namespace io { 
class OutputStreamWriter;
} } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace io { 
class IOException;
} } 
namespace test { namespace scalegraph { namespace patternmatching { 

class FileSplitter : public x10::lang::Object   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void split(x10aux::ref<x10::lang::String> fileName, x10aux::ref<x10::lang::String> outDir);
    virtual x10aux::ref<test::scalegraph::patternmatching::FileSplitter> test__scalegraph__patternmatching__FileSplitter____test__scalegraph__patternmatching__FileSplitter__this(
      );
    void _constructor();
    
    static x10aux::ref<test::scalegraph::patternmatching::FileSplitter> _make(
             );
    
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10aux::ref<x10::lang::Reference> _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

} } } 
#endif // TEST_SCALEGRAPH_PATTERNMATCHING_FILESPLITTER_H

namespace test { namespace scalegraph { namespace patternmatching { 
class FileSplitter;
} } } 

#ifndef TEST_SCALEGRAPH_PATTERNMATCHING_FILESPLITTER_H_NODEPS
#define TEST_SCALEGRAPH_PATTERNMATCHING_FILESPLITTER_H_NODEPS
#ifndef TEST_SCALEGRAPH_PATTERNMATCHING_FILESPLITTER_H_GENERICS
#define TEST_SCALEGRAPH_PATTERNMATCHING_FILESPLITTER_H_GENERICS
#endif // TEST_SCALEGRAPH_PATTERNMATCHING_FILESPLITTER_H_GENERICS
#endif // __TEST_SCALEGRAPH_PATTERNMATCHING_FILESPLITTER_H_NODEPS
