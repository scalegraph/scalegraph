#ifndef __ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__INPUTSPLIT_H
#define __ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__INPUTSPLIT_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#include <org/scalegraph/util/SString.h>
#undef ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#include <org/scalegraph/util/SString.h>
#undef ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace org { namespace scalegraph { namespace io { 
class FileReader;
} } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

class InputSplitter__InputSplit   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::io::impl::InputSplitter__InputSplit* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::io::impl::InputSplitter__InputSplit > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::io::impl::InputSplitter__InputSplit _alloc(){org::scalegraph::io::impl::InputSplitter__InputSplit t; return t; }
    
    org::scalegraph::util::SString FMGL(path);
    
    x10_long FMGL(start);
    
    x10_long FMGL(end);
    
    void _constructor(org::scalegraph::util::SString path, x10_long start,
                      x10_long end);
    
    static org::scalegraph::io::impl::InputSplitter__InputSplit _make(org::scalegraph::util::SString path,
                                                                      x10_long start,
                                                                      x10_long end);
    
    x10_long size() {
        
        //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/InputSplitter.x10": x10.ast.X10Return_c
        return ((x10_long) (((*this)->FMGL(end)) - ((*this)->
                                                      FMGL(start))));
        
    }
    org::scalegraph::io::FileReader* open();
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::io::impl::InputSplitter__InputSplit other) {
        
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/InputSplitter.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(path),
                                      other->FMGL(path))) &&
        (x10aux::struct_equals((*this)->FMGL(start), other->
                                                       FMGL(start))) &&
        (x10aux::struct_equals((*this)->FMGL(end), other->
                                                     FMGL(end)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::io::impl::InputSplitter__InputSplit other) {
        
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/InputSplitter.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(path),
                                      other->FMGL(path))) &&
        (x10aux::struct_equals((*this)->FMGL(start), other->
                                                       FMGL(start))) &&
        (x10aux::struct_equals((*this)->FMGL(end), other->
                                                     FMGL(end)));
        
    }
    org::scalegraph::io::impl::InputSplitter__InputSplit org__scalegraph__io__impl__InputSplitter__InputSplit____this__org__scalegraph__io__impl__InputSplitter__InputSplit(
      ) {
        
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/InputSplitter.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    static void _serialize(org::scalegraph::io::impl::InputSplitter__InputSplit this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::io::impl::InputSplitter__InputSplit _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::io::impl::InputSplitter__InputSplit this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__INPUTSPLIT_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
class InputSplitter__InputSplit;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__INPUTSPLIT_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__INPUTSPLIT_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__INPUTSPLIT_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__INPUTSPLIT_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__INPUTSPLIT_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__INPUTSPLIT_H_NODEPS
