#ifndef __TEST_SCALEGRAPH_PATTERNMATCHING_TESTPATTERNMATCHING_H
#define __TEST_SCALEGRAPH_PATTERNMATCHING_TESTPATTERNMATCHING_H

#include <x10rt.h>


#define X10_LANG_OBJECT_H_NODEPS
#include <x10/lang/Object.h>
#undef X10_LANG_OBJECT_H_NODEPS
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace org { namespace scalegraph { namespace patternmatching { 
class PatternMatching;
} } } 
namespace test { namespace scalegraph { namespace patternmatching { 
class FileSplitter;
} } } 
namespace org { namespace scalegraph { namespace util { 
class DirectoryInfo;
} } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace org { namespace scalegraph { namespace graph { 
class AttributedGraph;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace array { 
class Point;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
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
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace io { 
class WeightedGraphReader;
} } } 
namespace org { namespace scalegraph { namespace patternmatching { 
class PatternMatchingResult;
} } } 
namespace test { namespace scalegraph { namespace patternmatching { 

class TestPatternMatching : public x10::lang::Object   {
    public:
    RTT_H_DECLS_CLASS
    
    static void main(x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > args);
    virtual x10aux::ref<test::scalegraph::patternmatching::TestPatternMatching>
      test__scalegraph__patternmatching__TestPatternMatching____test__scalegraph__patternmatching__TestPatternMatching__this(
      );
    void _constructor();
    
    static x10aux::ref<test::scalegraph::patternmatching::TestPatternMatching> _make(
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
#endif // TEST_SCALEGRAPH_PATTERNMATCHING_TESTPATTERNMATCHING_H

namespace test { namespace scalegraph { namespace patternmatching { 
class TestPatternMatching;
} } } 

#ifndef TEST_SCALEGRAPH_PATTERNMATCHING_TESTPATTERNMATCHING_H_NODEPS
#define TEST_SCALEGRAPH_PATTERNMATCHING_TESTPATTERNMATCHING_H_NODEPS
#ifndef TEST_SCALEGRAPH_PATTERNMATCHING_TESTPATTERNMATCHING_H_GENERICS
#define TEST_SCALEGRAPH_PATTERNMATCHING_TESTPATTERNMATCHING_H_GENERICS
#endif // TEST_SCALEGRAPH_PATTERNMATCHING_TESTPATTERNMATCHING_H_GENERICS
#endif // __TEST_SCALEGRAPH_PATTERNMATCHING_TESTPATTERNMATCHING_H_NODEPS
