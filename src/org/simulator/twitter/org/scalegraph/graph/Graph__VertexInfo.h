#ifndef __ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXINFO_H
#define __ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXINFO_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace org { namespace scalegraph { namespace graph { 
class VertexTranslatorBase;
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
class Boolean;
} } 
namespace org { namespace scalegraph { namespace graph { 

class Graph__VertexInfo   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::graph::Graph__VertexInfo* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::graph::Graph__VertexInfo > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::graph::Graph__VertexInfo _alloc(){org::scalegraph::graph::Graph__VertexInfo t; return t; }
    
    x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*>
      FMGL(vertexTranslator);
    
    x10_int FMGL(vertexType);
    
    x10_int FMGL(numberOfPlaces);
    
    x10_long FMGL(numberOfVertices);
    
    void _constructor(x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> vertexTranslator,
                      x10_int vertexType, x10_long numberOfVertices,
                      x10_int numberOfPlaces);
    
    static org::scalegraph::graph::Graph__VertexInfo _make(x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> vertexTranslator,
                                                           x10_int vertexType,
                                                           x10_long numberOfVertices,
                                                           x10_int numberOfPlaces);
    
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::graph::Graph__VertexInfo other) {
        
        //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(vertexTranslator),
                                      other->FMGL(vertexTranslator))) &&
        (x10aux::struct_equals((*this)->FMGL(vertexType),
                               other->FMGL(vertexType))) &&
        (x10aux::struct_equals((*this)->FMGL(numberOfPlaces),
                               other->FMGL(numberOfPlaces))) &&
        (x10aux::struct_equals((*this)->FMGL(numberOfVertices),
                               other->FMGL(numberOfVertices)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::graph::Graph__VertexInfo other) {
        
        //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(vertexTranslator),
                                      other->FMGL(vertexTranslator))) &&
        (x10aux::struct_equals((*this)->FMGL(vertexType),
                               other->FMGL(vertexType))) &&
        (x10aux::struct_equals((*this)->FMGL(numberOfPlaces),
                               other->FMGL(numberOfPlaces))) &&
        (x10aux::struct_equals((*this)->FMGL(numberOfVertices),
                               other->FMGL(numberOfVertices)));
        
    }
    org::scalegraph::graph::Graph__VertexInfo org__scalegraph__graph__Graph__VertexInfo____this__org__scalegraph__graph__Graph__VertexInfo(
      ) {
        
        //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    static void _serialize(org::scalegraph::graph::Graph__VertexInfo this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::graph::Graph__VertexInfo _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::graph::Graph__VertexInfo this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXINFO_H

namespace org { namespace scalegraph { namespace graph { 
class Graph__VertexInfo;
} } } 

#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXINFO_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXINFO_H_NODEPS
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXINFO_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXINFO_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXINFO_H_GENERICS
#endif // __ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXINFO_H_NODEPS
