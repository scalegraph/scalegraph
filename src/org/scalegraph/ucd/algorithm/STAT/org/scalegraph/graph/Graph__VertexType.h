#ifndef __ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXTYPE_H
#define __ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXTYPE_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace graph { 

class Graph__VertexType : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_int FMGL(Long);
    static void FMGL(Long__do_init)();
    static void FMGL(Long__init)();
    static volatile x10aux::StaticInitController::status FMGL(Long__status);
    static x10::lang::CheckedThrowable* FMGL(Long__exception);
    static x10_int FMGL(Long__get)();
    
    static x10_int FMGL(Double);
    static void FMGL(Double__do_init)();
    static void FMGL(Double__init)();
    static volatile x10aux::StaticInitController::status FMGL(Double__status);
    static x10::lang::CheckedThrowable* FMGL(Double__exception);
    static x10_int FMGL(Double__get)();
    
    static x10_int FMGL(String);
    static void FMGL(String__do_init)();
    static void FMGL(String__init)();
    static volatile x10aux::StaticInitController::status FMGL(String__status);
    static x10::lang::CheckedThrowable* FMGL(String__exception);
    static x10_int FMGL(String__get)();
    
    virtual org::scalegraph::graph::Graph__VertexType* org__scalegraph__graph__Graph__VertexType____this__org__scalegraph__graph__Graph__VertexType(
      );
    void _constructor();
    
    static org::scalegraph::graph::Graph__VertexType* _make();
    
    
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
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXTYPE_H

namespace org { namespace scalegraph { namespace graph { 
class Graph__VertexType;
} } } 

#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXTYPE_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXTYPE_H_NODEPS
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXTYPE_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXTYPE_H_GENERICS
inline x10_int org::scalegraph::graph::Graph__VertexType::FMGL(Long__get)() {
    if (FMGL(Long__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Long__init)();
    }
    return org::scalegraph::graph::Graph__VertexType::FMGL(Long);
}

inline x10_int org::scalegraph::graph::Graph__VertexType::FMGL(Double__get)() {
    if (FMGL(Double__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Double__init)();
    }
    return org::scalegraph::graph::Graph__VertexType::FMGL(Double);
}

inline x10_int org::scalegraph::graph::Graph__VertexType::FMGL(String__get)() {
    if (FMGL(String__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(String__init)();
    }
    return org::scalegraph::graph::Graph__VertexType::FMGL(String);
}

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXTYPE_H_GENERICS
#endif // __ORG_SCALEGRAPH_GRAPH_GRAPH__VERTEXTYPE_H_NODEPS
