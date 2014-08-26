#ifndef __ORG_SCALEGRAPH_GRAPH_ID_ONEDC__DTOV_H
#define __ORG_SCALEGRAPH_GRAPH_ID_ONEDC__DTOV_H

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

class OnedC__DtoV   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::graph::id::OnedC__DtoV* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::graph::id::OnedC__DtoV > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::graph::id::OnedC__DtoV _alloc(){org::scalegraph::graph::id::OnedC__DtoV t; return t; }
    
    x10_int FMGL(c);
    
    x10_int FMGL(lgc);
    
    void _constructor(org::scalegraph::graph::id::IdStruct ids, x10_int c);
    
    static org::scalegraph::graph::id::OnedC__DtoV _make(org::scalegraph::graph::id::IdStruct ids,
                                                         x10_int c);
    
    x10_long __apply(x10_long id) {
        
        //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return ((x10_long) ((((x10_long) ((id) << (0x3f & ((*this)->
                                                             FMGL(lgc)))))) | (((x10_long) ((*this)->
                                                                                              FMGL(c))))));
        
    }
    x10_int c(x10_long id) {
        
        //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return (*this)->FMGL(c);
        
    }
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::graph::id::OnedC__DtoV other) {
        
        //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(c), other->
                                                          FMGL(c))) &&
        (x10aux::struct_equals((*this)->FMGL(lgc), other->
                                                     FMGL(lgc)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::graph::id::OnedC__DtoV other) {
        
        //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(c), other->
                                                          FMGL(c))) &&
        (x10aux::struct_equals((*this)->FMGL(lgc), other->
                                                     FMGL(lgc)));
        
    }
    org::scalegraph::graph::id::OnedC__DtoV org__scalegraph__graph__id__OnedC__DtoV____this__org__scalegraph__graph__id__OnedC__DtoV(
      ) {
        
        //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    static void _serialize(org::scalegraph::graph::id::OnedC__DtoV this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::graph::id::OnedC__DtoV _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::graph::id::OnedC__DtoV this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // ORG_SCALEGRAPH_GRAPH_ID_ONEDC__DTOV_H

namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedC__DtoV;
} } } } 

#ifndef ORG_SCALEGRAPH_GRAPH_ID_ONEDC__DTOV_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDC__DTOV_H_NODEPS
#ifndef ORG_SCALEGRAPH_GRAPH_ID_ONEDC__DTOV_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_ID_ONEDC__DTOV_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_ID_ONEDC__DTOV_H_GENERICS
#endif // __ORG_SCALEGRAPH_GRAPH_ID_ONEDC__DTOV_H_NODEPS
