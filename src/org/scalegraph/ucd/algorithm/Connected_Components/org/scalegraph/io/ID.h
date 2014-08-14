#ifndef __ORG_SCALEGRAPH_IO_ID_H
#define __ORG_SCALEGRAPH_IO_ID_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace org { namespace scalegraph { namespace io { 

class ID : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_int FMGL(VERSION);
    static void FMGL(VERSION__do_init)();
    static void FMGL(VERSION__init)();
    static volatile x10aux::StaticInitController::status FMGL(VERSION__status);
    static x10::lang::CheckedThrowable* FMGL(VERSION__exception);
    static x10_int FMGL(VERSION__get)();
    
    static x10_byte FMGL(HEADER_NONE);
    static void FMGL(HEADER_NONE__do_init)();
    static void FMGL(HEADER_NONE__init)();
    static volatile x10aux::StaticInitController::status FMGL(HEADER_NONE__status);
    static x10::lang::CheckedThrowable* FMGL(HEADER_NONE__exception);
    static x10_byte FMGL(HEADER_NONE__get)();
    
    static x10_byte FMGL(HEADER_GRAPH);
    static void FMGL(HEADER_GRAPH__do_init)();
    static void FMGL(HEADER_GRAPH__init)();
    static volatile x10aux::StaticInitController::status FMGL(HEADER_GRAPH__status);
    static x10::lang::CheckedThrowable* FMGL(HEADER_GRAPH__exception);
    static x10_byte FMGL(HEADER_GRAPH__get)();
    
    static x10_byte FMGL(HEADER_MATRIX);
    static void FMGL(HEADER_MATRIX__do_init)();
    static void FMGL(HEADER_MATRIX__init)();
    static volatile x10aux::StaticInitController::status FMGL(HEADER_MATRIX__status);
    static x10::lang::CheckedThrowable* FMGL(HEADER_MATRIX__exception);
    static x10_byte FMGL(HEADER_MATRIX__get)();
    
    static x10_byte FMGL(HEADER_VECTOR);
    static void FMGL(HEADER_VECTOR__do_init)();
    static void FMGL(HEADER_VECTOR__init)();
    static volatile x10aux::StaticInitController::status FMGL(HEADER_VECTOR__status);
    static x10::lang::CheckedThrowable* FMGL(HEADER_VECTOR__exception);
    static x10_byte FMGL(HEADER_VECTOR__get)();
    
    static x10_byte FMGL(HEADER_ANY);
    static void FMGL(HEADER_ANY__do_init)();
    static void FMGL(HEADER_ANY__init)();
    static volatile x10aux::StaticInitController::status FMGL(HEADER_ANY__status);
    static x10::lang::CheckedThrowable* FMGL(HEADER_ANY__exception);
    static x10_byte FMGL(HEADER_ANY__get)();
    
    static x10::lang::String* FMGL(NAME_SOURCE);
    static void FMGL(NAME_SOURCE__do_init)();
    static void FMGL(NAME_SOURCE__init)();
    static volatile x10aux::StaticInitController::status FMGL(NAME_SOURCE__status);
    static x10::lang::CheckedThrowable* FMGL(NAME_SOURCE__exception);
    static x10::lang::String* FMGL(NAME_SOURCE__get)();
    
    static x10::lang::String* FMGL(NAME_TARGET);
    static void FMGL(NAME_TARGET__do_init)();
    static void FMGL(NAME_TARGET__init)();
    static volatile x10aux::StaticInitController::status FMGL(NAME_TARGET__status);
    static x10::lang::CheckedThrowable* FMGL(NAME_TARGET__exception);
    static x10::lang::String* FMGL(NAME_TARGET__get)();
    
    static x10::lang::String* FMGL(NAME_WEIGHT);
    static void FMGL(NAME_WEIGHT__do_init)();
    static void FMGL(NAME_WEIGHT__init)();
    static volatile x10aux::StaticInitController::status FMGL(NAME_WEIGHT__status);
    static x10::lang::CheckedThrowable* FMGL(NAME_WEIGHT__exception);
    static x10::lang::String* FMGL(NAME_WEIGHT__get)();
    
    virtual org::scalegraph::io::ID* org__scalegraph__io__ID____this__org__scalegraph__io__ID(
      );
    void _constructor();
    
    static org::scalegraph::io::ID* _make();
    
    
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
#endif // ORG_SCALEGRAPH_IO_ID_H

namespace org { namespace scalegraph { namespace io { 
class ID;
} } } 

#ifndef ORG_SCALEGRAPH_IO_ID_H_NODEPS
#define ORG_SCALEGRAPH_IO_ID_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/lang/Byte.h>
#include <x10/lang/String.h>
#ifndef ORG_SCALEGRAPH_IO_ID_H_GENERICS
#define ORG_SCALEGRAPH_IO_ID_H_GENERICS
inline x10_int org::scalegraph::io::ID::FMGL(VERSION__get)() {
    if (FMGL(VERSION__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(VERSION__init)();
    }
    return org::scalegraph::io::ID::FMGL(VERSION);
}

inline x10_byte org::scalegraph::io::ID::FMGL(HEADER_NONE__get)() {
    if (FMGL(HEADER_NONE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(HEADER_NONE__init)();
    }
    return org::scalegraph::io::ID::FMGL(HEADER_NONE);
}

inline x10_byte org::scalegraph::io::ID::FMGL(HEADER_GRAPH__get)() {
    if (FMGL(HEADER_GRAPH__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(HEADER_GRAPH__init)();
    }
    return org::scalegraph::io::ID::FMGL(HEADER_GRAPH);
}

inline x10_byte org::scalegraph::io::ID::FMGL(HEADER_MATRIX__get)() {
    if (FMGL(HEADER_MATRIX__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(HEADER_MATRIX__init)();
    }
    return org::scalegraph::io::ID::FMGL(HEADER_MATRIX);
}

inline x10_byte org::scalegraph::io::ID::FMGL(HEADER_VECTOR__get)() {
    if (FMGL(HEADER_VECTOR__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(HEADER_VECTOR__init)();
    }
    return org::scalegraph::io::ID::FMGL(HEADER_VECTOR);
}

inline x10_byte org::scalegraph::io::ID::FMGL(HEADER_ANY__get)() {
    if (FMGL(HEADER_ANY__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(HEADER_ANY__init)();
    }
    return org::scalegraph::io::ID::FMGL(HEADER_ANY);
}

inline x10::lang::String* org::scalegraph::io::ID::FMGL(NAME_SOURCE__get)() {
    if (FMGL(NAME_SOURCE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(NAME_SOURCE__init)();
    }
    return org::scalegraph::io::ID::FMGL(NAME_SOURCE);
}

inline x10::lang::String* org::scalegraph::io::ID::FMGL(NAME_TARGET__get)() {
    if (FMGL(NAME_TARGET__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(NAME_TARGET__init)();
    }
    return org::scalegraph::io::ID::FMGL(NAME_TARGET);
}

inline x10::lang::String* org::scalegraph::io::ID::FMGL(NAME_WEIGHT__get)() {
    if (FMGL(NAME_WEIGHT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(NAME_WEIGHT__init)();
    }
    return org::scalegraph::io::ID::FMGL(NAME_WEIGHT);
}

#endif // ORG_SCALEGRAPH_IO_ID_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_ID_H_NODEPS
