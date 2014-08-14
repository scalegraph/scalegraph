#ifndef __ORG_SCALEGRAPH_UTIL_UTILS_H
#define __ORG_SCALEGRAPH_UTIL_UTILS_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class BadPlaceException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace org { namespace scalegraph { namespace util { 

class Utils : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void ensureOnFirst();
    static void debugPrintln(x10::lang::String* pkg, x10::lang::String* str);
    virtual org::scalegraph::util::Utils* org__scalegraph__util__Utils____this__org__scalegraph__util__Utils(
      );
    void _constructor();
    
    static org::scalegraph::util::Utils* _make();
    
    
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
#endif // ORG_SCALEGRAPH_UTIL_UTILS_H

namespace org { namespace scalegraph { namespace util { 
class Utils;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_UTILS_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_UTILS_H_NODEPS
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/BadPlaceException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#ifndef ORG_SCALEGRAPH_UTIL_UTILS_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_UTILS_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_UTILS_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_UTILS_H_NODEPS
