#ifndef __ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOV_H
#define __ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOV_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct;
} } } } 
namespace x10 { namespace lang { 
class Long;
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

class OnedR__StoV   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::graph::id::OnedR__StoV* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::graph::id::OnedR__StoV > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::graph::id::OnedR__StoV _alloc(){org::scalegraph::graph::id::OnedR__StoV t; return t; }
    
    x10_int FMGL(r);
    
    x10_int FMGL(lgr);
    
    void _constructor(org::scalegraph::graph::id::IdStruct ids, x10_int r);
    
    static org::scalegraph::graph::id::OnedR__StoV _make(org::scalegraph::graph::id::IdStruct ids,
                                                         x10_int r);
    
    x10_long __apply(x10_long id) {
        
        //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return ((x10_long) ((((x10_long) ((id) << (0x3f & ((*this)->
                                                             FMGL(lgr)))))) | (((x10_long) ((*this)->
                                                                                              FMGL(r))))));
        
    }
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::graph::id::OnedR__StoV other) {
        
        //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(r), other->
                                                          FMGL(r))) &&
        (x10aux::struct_equals((*this)->FMGL(lgr), other->
                                                     FMGL(lgr)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::graph::id::OnedR__StoV other) {
        
        //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(r), other->
                                                          FMGL(r))) &&
        (x10aux::struct_equals((*this)->FMGL(lgr), other->
                                                     FMGL(lgr)));
        
    }
    org::scalegraph::graph::id::OnedR__StoV org__scalegraph__graph__id__OnedR__StoV____this__org__scalegraph__graph__id__OnedR__StoV(
      ) {
        
        //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    static void _serialize(org::scalegraph::graph::id::OnedR__StoV this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::graph::id::OnedR__StoV _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::graph::id::OnedR__StoV this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOV_H

namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__StoV;
} } } } 

#ifndef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOV_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOV_H_NODEPS
#ifndef ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOV_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOV_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOV_H_GENERICS
#endif // __ORG_SCALEGRAPH_GRAPH_ID_ONEDR__STOV_H_NODEPS
