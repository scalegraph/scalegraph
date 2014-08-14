#ifndef __ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY_H
#define __ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY_H

#include <x10rt.h>


namespace org { namespace scalegraph { namespace graph { 
class Graph;
} } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class AttributeProxy__ProxyImpl;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace lang { 
class Short;
} } 
namespace x10 { namespace lang { 
class Float;
} } 
namespace x10 { namespace lang { 
class Double;
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
namespace x10 { namespace lang { 
class Char;
} } 
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace x10 { namespace lang { 
class IllegalOperationException;
} } 
namespace org { namespace scalegraph { namespace graph { 

class AttributeProxy : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void setEdgeAttribute(org::scalegraph::graph::Graph* g, x10::lang::String* name,
                                  x10::lang::Any* values) = 0;
    virtual void setVertexAttribute(org::scalegraph::graph::Graph* g,
                                    x10::lang::String* name, x10::lang::Any* values) = 0;
    virtual void setVertexAttribute(org::scalegraph::graph::Graph* g,
                                    x10::lang::String* name, org::scalegraph::util::DistMemoryChunk<x10_long> ids,
                                    x10::lang::Any* values) = 0;
    static org::scalegraph::graph::AttributeProxy* make(x10_int typeId);
    virtual org::scalegraph::graph::AttributeProxy* org__scalegraph__graph__AttributeProxy____this__org__scalegraph__graph__AttributeProxy(
      );
    void _constructor();
    
    
    // Serialization
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY_H

namespace org { namespace scalegraph { namespace graph { 
class AttributeProxy;
} } } 

#ifndef ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY_H_NODEPS
#ifndef ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY_H_GENERICS
#endif // __ORG_SCALEGRAPH_GRAPH_ATTRIBUTEPROXY_H_NODEPS
