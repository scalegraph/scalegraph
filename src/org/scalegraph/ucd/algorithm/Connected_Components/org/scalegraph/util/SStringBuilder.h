#ifndef __ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H
#define __ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H

#include <x10rt.h>

#include "StringHelper.h"

#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
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
namespace org { namespace scalegraph { namespace util { 
class StringHelperImpl;
} } } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 
namespace x10 { namespace compiler { 
class NativeCPPOutputFile;
} } 
namespace x10 { namespace compiler { 
class NativeCPPCompilationUnit;
} } 
namespace org { namespace scalegraph { namespace util { 

class SStringBuilder   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::SStringBuilder* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::SStringBuilder > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::SStringBuilder _alloc(){org::scalegraph::util::SStringBuilder t; return t; }
    
    org::scalegraph::util::GrowableMemory<x10_byte>* FMGL(buffer);
    
    void _constructor();
    
    static org::scalegraph::util::SStringBuilder _make();
    
    void _constructor(org::scalegraph::util::SString str);
    
    static org::scalegraph::util::SStringBuilder _make(org::scalegraph::util::SString str);
    
    template<class TPMGL(T)> org::scalegraph::util::SStringBuilder add(TPMGL(T) x);
    template<class TPMGL(T1)> org::scalegraph::util::SStringBuilder add(org::scalegraph::util::SString fmt,
                                                                        TPMGL(T1) o1);
    template<class TPMGL(T1), class TPMGL(T2)> org::scalegraph::util::SStringBuilder
      add(org::scalegraph::util::SString fmt, TPMGL(T1) o1,
          TPMGL(T2) o2);
    template<class TPMGL(T1), class TPMGL(T2), class TPMGL(T3)>
    org::scalegraph::util::SStringBuilder add(org::scalegraph::util::SString fmt,
                                              TPMGL(T1) o1,
                                              TPMGL(T2) o2,
                                              TPMGL(T3) o3);
    template<class TPMGL(T1), class TPMGL(T2), class TPMGL(T3), class TPMGL(T4)>
    org::scalegraph::util::SStringBuilder add(org::scalegraph::util::SString fmt,
                                              TPMGL(T1) o1,
                                              TPMGL(T2) o2,
                                              TPMGL(T3) o3,
                                              TPMGL(T4) o4);
    template<class TPMGL(T1), class TPMGL(T2), class TPMGL(T3), class TPMGL(T4), class TPMGL(T5)>
    org::scalegraph::util::SStringBuilder add(org::scalegraph::util::SString fmt,
                                              TPMGL(T1) o1,
                                              TPMGL(T2) o2,
                                              TPMGL(T3) o3,
                                              TPMGL(T4) o4,
                                              TPMGL(T5) o5);
    template<class TPMGL(T1), class TPMGL(T2), class TPMGL(T3), class TPMGL(T4), class TPMGL(T5), class TPMGL(T6)>
    org::scalegraph::util::SStringBuilder add(org::scalegraph::util::SString fmt,
                                              TPMGL(T1) o1,
                                              TPMGL(T2) o2,
                                              TPMGL(T3) o3,
                                              TPMGL(T4) o4,
                                              TPMGL(T5) o5,
                                              TPMGL(T6) o6);
    x10_long capacity();
    void clear();
    void _kwd__delete(x10_int start, x10_int end);
    void grow(x10_int minCapacity);
    x10_int indexOf(org::scalegraph::util::SString str);
    x10_int indexOf(org::scalegraph::util::SString str, x10_int idx);
    x10_int lastIndexOf(org::scalegraph::util::SString str);
    x10_int lastIndexOf(org::scalegraph::util::SString str,
                        x10_int idx);
    org::scalegraph::util::SString result();
    void replace(x10_int start, x10_int end, org::scalegraph::util::SString str);
    void reverse();
    x10_long size();
    org::scalegraph::util::SString substring(x10_int start);
    org::scalegraph::util::SString substring(x10_int start,
                                             x10_int end);
    x10::lang::String* toString();
    void trimToSize();
    void _helper(int sh);
    x10::lang::String* typeName();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::util::SStringBuilder other) {
        
        //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(buffer),
                                      other->FMGL(buffer)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::SStringBuilder other) {
        
        //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(buffer),
                                      other->FMGL(buffer)));
        
    }
    org::scalegraph::util::SStringBuilder org__scalegraph__util__SStringBuilder____this__org__scalegraph__util__SStringBuilder(
      ) {
        
        //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    void __fieldInitializers104743();
    
    static void _serialize(org::scalegraph::util::SStringBuilder this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::SStringBuilder _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::SStringBuilder this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H

namespace org { namespace scalegraph { namespace util { 
class SStringBuilder;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Byte.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <org/scalegraph/util/SString.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <org/scalegraph/util/StringHelperImpl.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/compiler/NativeCPPOutputFile.h>
#include <x10/compiler/NativeCPPCompilationUnit.h>
#ifndef ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1149
#define ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1149
template<class TPMGL(T)> org::scalegraph::util::SStringBuilder org::scalegraph::util::SStringBuilder::add(
  TPMGL(T) x){
    return org::scalegraph::util::StringBuilderAdd_((*this),x);
}
#endif // ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1149
#ifndef ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1150
#define ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1150
template<class TPMGL(T1)> org::scalegraph::util::SStringBuilder org::scalegraph::util::SStringBuilder::add(
  org::scalegraph::util::SString fmt, TPMGL(T1) o1){
    return org::scalegraph::util::StringBuilderFmtAdd_((*this),(fmt).FMGL(content),o1);
}
#endif // ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1150
#ifndef ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1151
#define ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1151
template<class TPMGL(T1), class TPMGL(T2)> org::scalegraph::util::SStringBuilder
  org::scalegraph::util::SStringBuilder::add(org::scalegraph::util::SString fmt,
                                             TPMGL(T1) o1,
                                             TPMGL(T2) o2){
    return org::scalegraph::util::StringBuilderFmtAdd_((*this),(fmt).FMGL(content),o1,o2);
}
#endif // ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1151
#ifndef ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1152
#define ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1152
template<class TPMGL(T1), class TPMGL(T2), class TPMGL(T3)>
org::scalegraph::util::SStringBuilder org::scalegraph::util::SStringBuilder::add(
  org::scalegraph::util::SString fmt, TPMGL(T1) o1, TPMGL(T2) o2,
  TPMGL(T3) o3){
    return org::scalegraph::util::StringBuilderFmtAdd_((*this),(fmt).FMGL(content),o1,o2,o3);
}
#endif // ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1152
#ifndef ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1153
#define ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1153
template<class TPMGL(T1), class TPMGL(T2), class TPMGL(T3), class TPMGL(T4)>
org::scalegraph::util::SStringBuilder org::scalegraph::util::SStringBuilder::add(
  org::scalegraph::util::SString fmt, TPMGL(T1) o1, TPMGL(T2) o2,
  TPMGL(T3) o3, TPMGL(T4) o4){
    return org::scalegraph::util::StringBuilderFmtAdd_((*this),(fmt).FMGL(content),o1,o2,o3,o4);
}
#endif // ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1153
#ifndef ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1154
#define ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1154
template<class TPMGL(T1), class TPMGL(T2), class TPMGL(T3), class TPMGL(T4), class TPMGL(T5)>
org::scalegraph::util::SStringBuilder org::scalegraph::util::SStringBuilder::add(
  org::scalegraph::util::SString fmt, TPMGL(T1) o1, TPMGL(T2) o2,
  TPMGL(T3) o3, TPMGL(T4) o4, TPMGL(T5) o5){
    return org::scalegraph::util::StringBuilderFmtAdd_((*this),(fmt).FMGL(content),o1,o2,o3,o4,o5);
}
#endif // ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1154
#ifndef ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1155
#define ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1155
template<class TPMGL(T1), class TPMGL(T2), class TPMGL(T3), class TPMGL(T4), class TPMGL(T5), class TPMGL(T6)>
org::scalegraph::util::SStringBuilder org::scalegraph::util::SStringBuilder::add(
  org::scalegraph::util::SString fmt, TPMGL(T1) o1, TPMGL(T2) o2,
  TPMGL(T3) o3, TPMGL(T4) o4, TPMGL(T5) o5, TPMGL(T6) o6){
    return org::scalegraph::util::StringBuilderFmtAdd_((*this),(fmt).FMGL(content),o1,o2,o3,o4,o5,o6);
}
#endif // ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_add_1155
#endif // ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_NODEPS
