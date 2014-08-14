#ifndef __ORG_SCALEGRAPH_ID_TYPE_H
#define __ORG_SCALEGRAPH_ID_TYPE_H

#include <x10rt.h>

#include "TypeHelper.h"

namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace lang { 
class Short;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace lang { 
class Float;
} } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace x10 { namespace lang { 
class UByte;
} } 
namespace x10 { namespace lang { 
class UShort;
} } 
namespace x10 { namespace lang { 
class UInt;
} } 
namespace x10 { namespace lang { 
class ULong;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 
namespace x10 { namespace compiler { 
class NativeCPPOutputFile;
} } 
namespace org { namespace scalegraph { namespace id { 

class Type : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_int FMGL(None);
    static void FMGL(None__do_init)();
    static void FMGL(None__init)();
    static volatile x10aux::StaticInitController::status FMGL(None__status);
    static x10::lang::CheckedThrowable* FMGL(None__exception);
    static x10_int FMGL(None__get)();
    
    static x10_int FMGL(Boolean);
    static void FMGL(Boolean__do_init)();
    static void FMGL(Boolean__init)();
    static volatile x10aux::StaticInitController::status FMGL(Boolean__status);
    static x10::lang::CheckedThrowable* FMGL(Boolean__exception);
    static x10_int FMGL(Boolean__get)();
    
    static x10_int FMGL(Byte);
    static void FMGL(Byte__do_init)();
    static void FMGL(Byte__init)();
    static volatile x10aux::StaticInitController::status FMGL(Byte__status);
    static x10::lang::CheckedThrowable* FMGL(Byte__exception);
    static x10_int FMGL(Byte__get)();
    
    static x10_int FMGL(Short);
    static void FMGL(Short__do_init)();
    static void FMGL(Short__init)();
    static volatile x10aux::StaticInitController::status FMGL(Short__status);
    static x10::lang::CheckedThrowable* FMGL(Short__exception);
    static x10_int FMGL(Short__get)();
    
    static x10_int FMGL(Int);
    static void FMGL(Int__do_init)();
    static void FMGL(Int__init)();
    static volatile x10aux::StaticInitController::status FMGL(Int__status);
    static x10::lang::CheckedThrowable* FMGL(Int__exception);
    static x10_int FMGL(Int__get)();
    
    static x10_int FMGL(Long);
    static void FMGL(Long__do_init)();
    static void FMGL(Long__init)();
    static volatile x10aux::StaticInitController::status FMGL(Long__status);
    static x10::lang::CheckedThrowable* FMGL(Long__exception);
    static x10_int FMGL(Long__get)();
    
    static x10_int FMGL(Float);
    static void FMGL(Float__do_init)();
    static void FMGL(Float__init)();
    static volatile x10aux::StaticInitController::status FMGL(Float__status);
    static x10::lang::CheckedThrowable* FMGL(Float__exception);
    static x10_int FMGL(Float__get)();
    
    static x10_int FMGL(Double);
    static void FMGL(Double__do_init)();
    static void FMGL(Double__init)();
    static volatile x10aux::StaticInitController::status FMGL(Double__status);
    static x10::lang::CheckedThrowable* FMGL(Double__exception);
    static x10_int FMGL(Double__get)();
    
    static x10_int FMGL(UByte);
    static void FMGL(UByte__do_init)();
    static void FMGL(UByte__init)();
    static volatile x10aux::StaticInitController::status FMGL(UByte__status);
    static x10::lang::CheckedThrowable* FMGL(UByte__exception);
    static x10_int FMGL(UByte__get)();
    
    static x10_int FMGL(UShort);
    static void FMGL(UShort__do_init)();
    static void FMGL(UShort__init)();
    static volatile x10aux::StaticInitController::status FMGL(UShort__status);
    static x10::lang::CheckedThrowable* FMGL(UShort__exception);
    static x10_int FMGL(UShort__get)();
    
    static x10_int FMGL(UInt);
    static void FMGL(UInt__do_init)();
    static void FMGL(UInt__init)();
    static volatile x10aux::StaticInitController::status FMGL(UInt__status);
    static x10::lang::CheckedThrowable* FMGL(UInt__exception);
    static x10_int FMGL(UInt__get)();
    
    static x10_int FMGL(ULong);
    static void FMGL(ULong__do_init)();
    static void FMGL(ULong__init)();
    static volatile x10aux::StaticInitController::status FMGL(ULong__status);
    static x10::lang::CheckedThrowable* FMGL(ULong__exception);
    static x10_int FMGL(ULong__get)();
    
    static x10_int FMGL(Char);
    static void FMGL(Char__do_init)();
    static void FMGL(Char__init)();
    static volatile x10aux::StaticInitController::status FMGL(Char__status);
    static x10::lang::CheckedThrowable* FMGL(Char__exception);
    static x10_int FMGL(Char__get)();
    
    static x10_int FMGL(String);
    static void FMGL(String__do_init)();
    static void FMGL(String__init)();
    static volatile x10aux::StaticInitController::status FMGL(String__status);
    static x10::lang::CheckedThrowable* FMGL(String__exception);
    static x10_int FMGL(String__get)();
    
    static x10_int FMGL(Date);
    static void FMGL(Date__do_init)();
    static void FMGL(Date__init)();
    static volatile x10aux::StaticInitController::status FMGL(Date__status);
    static x10::lang::CheckedThrowable* FMGL(Date__exception);
    static x10_int FMGL(Date__get)();
    
    static x10_int FMGL(TypeCount);
    static void FMGL(TypeCount__do_init)();
    static void FMGL(TypeCount__init)();
    static volatile x10aux::StaticInitController::status FMGL(TypeCount__status);
    static x10::lang::CheckedThrowable* FMGL(TypeCount__exception);
    static x10_int FMGL(TypeCount__get)();
    
    static x10_int attTypeId(x10_int typeId);
    static x10_int attTypeId(x10_int typeId, x10_int flags);
    static x10_int typeId(x10::lang::Any* dmc);
    static x10_boolean checkType(x10::lang::Any* dmc, x10_int id);
    static x10_int typeId(x10::lang::String* typeName);
    static org::scalegraph::util::SString typeNameStr(x10_int typeId);
    virtual org::scalegraph::id::Type* org__scalegraph__id__Type____this__org__scalegraph__id__Type(
      );
    void _constructor();
    
    static org::scalegraph::id::Type* _make();
    
    
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
#endif // ORG_SCALEGRAPH_ID_TYPE_H

namespace org { namespace scalegraph { namespace id { 
class Type;
} } } 

#ifndef ORG_SCALEGRAPH_ID_TYPE_H_NODEPS
#define ORG_SCALEGRAPH_ID_TYPE_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Any.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Short.h>
#include <x10/lang/Long.h>
#include <x10/lang/Float.h>
#include <x10/lang/Double.h>
#include <x10/lang/UByte.h>
#include <x10/lang/UShort.h>
#include <x10/lang/UInt.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Char.h>
#include <org/scalegraph/util/SString.h>
#include <x10/lang/Exception.h>
#include <x10/lang/String.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/compiler/NativeCPPOutputFile.h>
#ifndef ORG_SCALEGRAPH_ID_TYPE_H_GENERICS
#define ORG_SCALEGRAPH_ID_TYPE_H_GENERICS
inline x10_int org::scalegraph::id::Type::FMGL(None__get)() {
    if (FMGL(None__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(None__init)();
    }
    return org::scalegraph::id::Type::FMGL(None);
}

inline x10_int org::scalegraph::id::Type::FMGL(Boolean__get)() {
    if (FMGL(Boolean__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Boolean__init)();
    }
    return org::scalegraph::id::Type::FMGL(Boolean);
}

inline x10_int org::scalegraph::id::Type::FMGL(Byte__get)() {
    if (FMGL(Byte__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Byte__init)();
    }
    return org::scalegraph::id::Type::FMGL(Byte);
}

inline x10_int org::scalegraph::id::Type::FMGL(Short__get)() {
    if (FMGL(Short__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Short__init)();
    }
    return org::scalegraph::id::Type::FMGL(Short);
}

inline x10_int org::scalegraph::id::Type::FMGL(Int__get)() {
    if (FMGL(Int__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Int__init)();
    }
    return org::scalegraph::id::Type::FMGL(Int);
}

inline x10_int org::scalegraph::id::Type::FMGL(Long__get)() {
    if (FMGL(Long__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Long__init)();
    }
    return org::scalegraph::id::Type::FMGL(Long);
}

inline x10_int org::scalegraph::id::Type::FMGL(Float__get)() {
    if (FMGL(Float__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Float__init)();
    }
    return org::scalegraph::id::Type::FMGL(Float);
}

inline x10_int org::scalegraph::id::Type::FMGL(Double__get)() {
    if (FMGL(Double__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Double__init)();
    }
    return org::scalegraph::id::Type::FMGL(Double);
}

inline x10_int org::scalegraph::id::Type::FMGL(UByte__get)() {
    if (FMGL(UByte__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(UByte__init)();
    }
    return org::scalegraph::id::Type::FMGL(UByte);
}

inline x10_int org::scalegraph::id::Type::FMGL(UShort__get)() {
    if (FMGL(UShort__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(UShort__init)();
    }
    return org::scalegraph::id::Type::FMGL(UShort);
}

inline x10_int org::scalegraph::id::Type::FMGL(UInt__get)() {
    if (FMGL(UInt__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(UInt__init)();
    }
    return org::scalegraph::id::Type::FMGL(UInt);
}

inline x10_int org::scalegraph::id::Type::FMGL(ULong__get)() {
    if (FMGL(ULong__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(ULong__init)();
    }
    return org::scalegraph::id::Type::FMGL(ULong);
}

inline x10_int org::scalegraph::id::Type::FMGL(Char__get)() {
    if (FMGL(Char__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Char__init)();
    }
    return org::scalegraph::id::Type::FMGL(Char);
}

inline x10_int org::scalegraph::id::Type::FMGL(String__get)() {
    if (FMGL(String__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(String__init)();
    }
    return org::scalegraph::id::Type::FMGL(String);
}

inline x10_int org::scalegraph::id::Type::FMGL(Date__get)() {
    if (FMGL(Date__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Date__init)();
    }
    return org::scalegraph::id::Type::FMGL(Date);
}

inline x10_int org::scalegraph::id::Type::FMGL(TypeCount__get)() {
    if (FMGL(TypeCount__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(TypeCount__init)();
    }
    return org::scalegraph::id::Type::FMGL(TypeCount);
}

#endif // ORG_SCALEGRAPH_ID_TYPE_H_GENERICS
#endif // __ORG_SCALEGRAPH_ID_TYPE_H_NODEPS
