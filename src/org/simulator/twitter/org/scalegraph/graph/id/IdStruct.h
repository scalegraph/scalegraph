#ifndef __ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H
#define __ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H

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
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace org { namespace scalegraph { namespace graph { namespace id { 

class IdStruct   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::graph::id::IdStruct* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::graph::id::IdStruct > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::graph::id::IdStruct _alloc(){org::scalegraph::graph::id::IdStruct t; return t; }
    
    x10_int FMGL(lgr);
    
    x10_int FMGL(lgc);
    
    x10_int FMGL(lgl);
    
    x10_boolean FMGL(transpose);
    
    x10_long FMGL(numberOfLocalVertexes);
    
    x10_long FMGL(numberOfGlobalVertexes);
    
    void _constructor(x10_int lgr, x10_int lgc, x10_int lgl, x10_boolean transpose,
                      x10_long numberOfLocalVertexes, x10_long numberOfGlobalVertexes) {
        
        //#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": polyglot.ast.Empty_c
        ;
        
        //#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.AssignPropertyCall_c
        
        //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(lgr) = lgr;
        
        //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(lgc) = lgc;
        
        //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(lgl) = lgl;
        
        //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(transpose) = transpose;
        
        //#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(numberOfLocalVertexes) = numberOfLocalVertexes;
        
        //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(numberOfGlobalVertexes) = numberOfGlobalVertexes;
    }
    static org::scalegraph::graph::id::IdStruct _make(x10_int lgr,
                                                      x10_int lgc,
                                                      x10_int lgl,
                                                      x10_boolean transpose,
                                                      x10_long numberOfLocalVertexes,
                                                      x10_long numberOfGlobalVertexes)
    {
        org::scalegraph::graph::id::IdStruct this_; 
        this_->_constructor(lgr, lgc, lgl, transpose, numberOfLocalVertexes,
        numberOfGlobalVertexes);
        return this_;
    }
    
    x10_long numberOfLocalVertexes() {
        
        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return (*this)->FMGL(numberOfLocalVertexes);
        
    }
    x10_long numberOfGlobalVertexes() {
        
        //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return (*this)->FMGL(numberOfGlobalVertexes);
        
    }
    x10_long numberOfGlobalVertexes2N() {
        
        //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return ((x10_long) ((((x10_long)1ll)) << (0x3f & (((x10_int) ((((x10_int) (((*this)->
                                                                                      FMGL(lgc)) + ((*this)->
                                                                                                      FMGL(lgr))))) + ((*this)->
                                                                                                                         FMGL(lgl))))))));
        
    }
    x10_long numberOfLocalVertexes2N() {
        
        //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return ((x10_long) ((((x10_long)1ll)) << (0x3f & ((*this)->
                                                            FMGL(lgl)))));
        
    }
    x10_long numberOfLocalRVertexes2N() {
        
        //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return ((x10_long) ((((x10_long)1ll)) << (0x3f & (((x10_int) (((*this)->
                                                                         FMGL(lgr)) + ((*this)->
                                                                                         FMGL(lgl))))))));
        
    }
    x10_long numberOfLocalCVertexes2N() {
        
        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return ((x10_long) ((((x10_long)1ll)) << (0x3f & (((x10_int) (((*this)->
                                                                         FMGL(lgc)) + ((*this)->
                                                                                         FMGL(lgl))))))));
        
    }
    x10_long localIDMask() {
        
        //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return ((x10_long) (((*this)->org::scalegraph::graph::id::IdStruct::numberOfLocalVertexes2N()) - (((x10_long) (((x10_int)1))))));
        
    }
    x10_long localRIDMask() {
        
        //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return ((x10_long) (((*this)->org::scalegraph::graph::id::IdStruct::numberOfLocalRVertexes2N()) - (((x10_long) (((x10_int)1))))));
        
    }
    x10_long localCIDMask() {
        
        //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return ((x10_long) (((*this)->org::scalegraph::graph::id::IdStruct::numberOfLocalCVertexes2N()) - (((x10_long) (((x10_int)1))))));
        
    }
    x10_int localRbits() {
        
        //#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return ((x10_int) (((*this)->FMGL(lgr)) + ((*this)->
                                                     FMGL(lgl))));
        
    }
    x10_int localCbits() {
        
        //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return ((x10_int) (((*this)->FMGL(lgc)) + ((*this)->
                                                     FMGL(lgl))));
        
    }
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::graph::id::IdStruct other) {
        
        //#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(lgr),
                                      other->FMGL(lgr))) &&
        (x10aux::struct_equals((*this)->FMGL(lgc), other->
                                                     FMGL(lgc))) &&
        (x10aux::struct_equals((*this)->FMGL(lgl), other->
                                                     FMGL(lgl))) &&
        (x10aux::struct_equals((*this)->FMGL(transpose), other->
                                                           FMGL(transpose))) &&
        (x10aux::struct_equals((*this)->FMGL(numberOfLocalVertexes),
                               other->FMGL(numberOfLocalVertexes))) &&
        (x10aux::struct_equals((*this)->FMGL(numberOfGlobalVertexes),
                               other->FMGL(numberOfGlobalVertexes)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::graph::id::IdStruct other) {
        
        //#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(lgr),
                                      other->FMGL(lgr))) &&
        (x10aux::struct_equals((*this)->FMGL(lgc), other->
                                                     FMGL(lgc))) &&
        (x10aux::struct_equals((*this)->FMGL(lgl), other->
                                                     FMGL(lgl))) &&
        (x10aux::struct_equals((*this)->FMGL(transpose), other->
                                                           FMGL(transpose))) &&
        (x10aux::struct_equals((*this)->FMGL(numberOfLocalVertexes),
                               other->FMGL(numberOfLocalVertexes))) &&
        (x10aux::struct_equals((*this)->FMGL(numberOfGlobalVertexes),
                               other->FMGL(numberOfGlobalVertexes)));
        
    }
    org::scalegraph::graph::id::IdStruct org__scalegraph__graph__id__IdStruct____this__org__scalegraph__graph__id__IdStruct(
      ) {
        
        //#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    static void _serialize(org::scalegraph::graph::id::IdStruct this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::graph::id::IdStruct _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::graph::id::IdStruct this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H

namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct;
} } } } 

#ifndef ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_NODEPS
#ifndef ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_GENERICS
#endif // __ORG_SCALEGRAPH_GRAPH_ID_IDSTRUCT_H_NODEPS
