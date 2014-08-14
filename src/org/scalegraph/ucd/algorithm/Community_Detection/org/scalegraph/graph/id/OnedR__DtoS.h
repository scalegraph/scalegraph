#ifndef __ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOS_H
#define __ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOS_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct;
} } } } 
namespace x10 { namespace lang { 
class Int;
} } 
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
class Boolean;
} } 
namespace org { namespace scalegraph { namespace graph { namespace id { 

class OnedR__DtoS   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::graph::id::OnedR__DtoS* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::graph::id::OnedR__DtoS > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::graph::id::OnedR__DtoS _alloc(){org::scalegraph::graph::id::OnedR__DtoS t; return t; }
    
    x10_long FMGL(lmask);
    
    void _constructor(org::scalegraph::graph::id::IdStruct ids);
    
    static org::scalegraph::graph::id::OnedR__DtoS _make(org::scalegraph::graph::id::IdStruct ids);
    
    x10_long __apply(x10_long id) {
        
        //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return ((x10_long) ((id) & ((*this)->FMGL(lmask))));
        
    }
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::graph::id::OnedR__DtoS other) {
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(lmask), other->FMGL(lmask)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::graph::id::OnedR__DtoS other) {
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(lmask), other->FMGL(lmask)));
        
    }
    org::scalegraph::graph::id::OnedR__DtoS org__scalegraph__graph__id__OnedR__DtoS____this__org__scalegraph__graph__id__OnedR__DtoS(
      ) {
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    static void _serialize(org::scalegraph::graph::id::OnedR__DtoS this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::graph::id::OnedR__DtoS _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::graph::id::OnedR__DtoS this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOS_H

namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__DtoS;
} } } } 

#ifndef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOS_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOS_H_NODEPS
#ifndef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOS_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOS_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOS_H_GENERICS
#endif // __ORG_SCALEGRAPH_GRAPH_ID_ONEDR__DTOS_H_NODEPS
