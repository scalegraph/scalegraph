#ifndef __ORG_SCALEGRAPH_UTIL_SSTRING_H
#define __ORG_SCALEGRAPH_UTIL_SSTRING_H

#include <x10rt.h>

#include "StringHelper.h"

#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryPointer;
} } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class LongRange;
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
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class SString__TokenCollection;
} } } 
namespace x10 { namespace lang { 
class Float;
} } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace x10 { namespace lang { 
class Short;
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
namespace org { namespace scalegraph { namespace util { 
class StringHelperImpl;
} } } 
namespace org { namespace scalegraph { namespace util { 
class SStringBuilder;
} } } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class NativeCPPOutputFile;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 
namespace x10 { namespace compiler { 
class NativeCPPCompilationUnit;
} } 
namespace org { namespace scalegraph { namespace util { 

class SString   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::SString* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::SString > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::SString _alloc(){org::scalegraph::util::SString t; return t; }
    
    org::scalegraph::util::MemoryChunk<x10_byte> FMGL(content);
    
    x10_byte * nativeCstr();
    void _constructor(x10::lang::String* str);
    
    static org::scalegraph::util::SString _make(x10::lang::String* str);
    
    void _constructor(org::scalegraph::util::MemoryChunk<x10_byte> str);
    
    static org::scalegraph::util::SString _make(org::scalegraph::util::MemoryChunk<x10_byte> str);
    
    void _constructor(org::scalegraph::util::MemoryChunk<x10_char> r);
    
    static org::scalegraph::util::SString _make(org::scalegraph::util::MemoryChunk<x10_char> r);
    
    static org::scalegraph::util::SString __implicit_convert(x10::lang::String* str);
    org::scalegraph::util::MemoryChunk<x10_byte> raw() {
        
        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return (*this)->FMGL(content);
        
    }
    x10_boolean equals(x10::lang::Any* that);
    x10_boolean equals(org::scalegraph::util::SString that);
    x10_int hashCode();
    x10::lang::String* toString();
    x10_int size();
    x10_int charsCount();
    x10_byte * c_str() {
        
        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return org::scalegraph::util::StringCstr_((*this));
        
    }
    org::scalegraph::util::MemoryChunk<x10_char> chars() {
        
        //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return org::scalegraph::util::UTF8ToChars_((*this)->FMGL(content));
        
    }
    org::scalegraph::util::MemoryChunk<x10_byte> bytes() {
        
        //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return (*this)->FMGL(content);
        
    }
    org::scalegraph::util::SString substring(x10_int fromIndex, x10_int toIndex);
    org::scalegraph::util::SString substring(x10_int fromIndex);
    x10_int indexOf(x10_char ch) {
        
        //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), ch, ((x10_int)0));
        
    }
    x10_int indexOf(x10_char ch, x10_int idx);
    x10_int indexOf(org::scalegraph::util::SString str) {
        
        //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), (str).FMGL(content), ((x10_int)0));
        
    }
    x10_int indexOf(org::scalegraph::util::SString str, x10_int idx);
    x10_int lastIndexOf(x10_char ch) {
        
        //#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return org::scalegraph::util::StringLastIndexOf_(((*this)).FMGL(content), ch, ((x10_int)0));
        
    }
    x10_int lastIndexOf(x10_char ch, x10_int idx);
    x10_int lastIndexOf(org::scalegraph::util::SString str) {
        
        //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return org::scalegraph::util::StringLastIndexOf_(((*this)).FMGL(content), (str).FMGL(content), ((x10_int)0));
        
    }
    x10_int lastIndexOf(org::scalegraph::util::SString str, x10_int idx);
    org::scalegraph::util::SString replace(x10_char oldChar, x10_char newChar);
    org::scalegraph::util::SString replace(org::scalegraph::util::SString target,
                                           org::scalegraph::util::SString replacement);
    org::scalegraph::util::SString__TokenCollection<x10_char> split(
      x10_char ch);
    org::scalegraph::util::SString__TokenCollection<org::scalegraph::util::SString>
      split(org::scalegraph::util::SString str);
    org::scalegraph::util::SString trim();
    x10_int compareTo(org::scalegraph::util::SString str);
    x10_boolean startsWith(org::scalegraph::util::SString str);
    x10_boolean endsWith(org::scalegraph::util::SString str);
    x10_boolean toBoolean();
    x10_float toFloat();
    x10_double toDouble();
    x10_byte toByte();
    x10_short toShort();
    x10_int toInt();
    x10_long toLong();
    x10_ubyte toUByte();
    x10_ushort toUShort();
    x10_uint toUInt();
    x10_ulong toULong();
    void _helper(int sh, org::scalegraph::util::SStringBuilder sb);
    x10::lang::String* typeName();
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::SString other) {
        
        //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(content),
                                      other->FMGL(content)));
        
    }
    org::scalegraph::util::SString org__scalegraph__util__SString____this__org__scalegraph__util__SString(
      ) {
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    static void _serialize(org::scalegraph::util::SString this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::SString _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::SString this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_UTIL_SSTRING_H

namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#include <x10/lang/Any.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Char.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/util/MemoryPointer.h>
#include <x10/lang/String.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/LongRange.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/compiler/Ifndef.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <org/scalegraph/util/SString__TokenCollection.h>
#include <x10/lang/Float.h>
#include <x10/lang/Double.h>
#include <x10/lang/Short.h>
#include <x10/lang/UByte.h>
#include <x10/lang/UShort.h>
#include <x10/lang/UInt.h>
#include <x10/lang/ULong.h>
#include <org/scalegraph/util/StringHelperImpl.h>
#include <org/scalegraph/util/SStringBuilder.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/NativeCPPOutputFile.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/compiler/NativeCPPCompilationUnit.h>
#ifndef ORG_SCALEGRAPH_UTIL_SSTRING_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_SSTRING_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_SSTRING_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
