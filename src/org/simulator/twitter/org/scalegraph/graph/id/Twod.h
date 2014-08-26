#ifndef __ORG_SCALEGRAPH_GRAPH_ID_TWOD_H
#define __ORG_SCALEGRAPH_GRAPH_ID_TWOD_H

#include <x10rt.h>


namespace org { namespace scalegraph { namespace graph { namespace id { 

class Twod : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual org::scalegraph::graph::id::Twod* org__scalegraph__graph__id__Twod____this__org__scalegraph__graph__id__Twod(
      );
    void _constructor();
    
    static org::scalegraph::graph::id::Twod* _make();
    
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // ORG_SCALEGRAPH_GRAPH_ID_TWOD_H

namespace org { namespace scalegraph { namespace graph { namespace id { 
class Twod;
} } } } 

#ifndef ORG_SCALEGRAPH_GRAPH_ID_TWOD_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ID_TWOD_H_NODEPS
#ifndef ORG_SCALEGRAPH_GRAPH_ID_TWOD_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_ID_TWOD_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_ID_TWOD_H_GENERICS
#endif // __ORG_SCALEGRAPH_GRAPH_ID_TWOD_H_NODEPS
