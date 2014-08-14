#ifndef __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR_H
#define __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_NODEPS
#include <org/scalegraph/graph/VertexTranslator.h>
#undef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_NODEPS
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { 
class Parallel;
} } } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
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
namespace org { namespace scalegraph { namespace graph { 
class VertexTranslatorBase;
} } } 
namespace org { namespace scalegraph { namespace graph { 

class VertexTranslator__NoTraslator : public org::scalegraph::graph::VertexTranslator<x10_long>
  {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor(x10::util::Team* team__);
    
    static org::scalegraph::graph::VertexTranslator__NoTraslator* _make(
             x10::util::Team* team__);
    
    virtual x10_boolean isTranslator();
    virtual x10_long sizeOfDictionary();
    virtual org::scalegraph::util::MemoryChunk<x10_long> translateWithAll(
      org::scalegraph::util::MemoryChunk<x10_long> vertexes, x10_boolean withPut);
    virtual org::scalegraph::graph::VertexTranslator__NoTraslator*
      org__scalegraph__graph__VertexTranslator__NoTraslator____this__org__scalegraph__graph__VertexTranslator__NoTraslator(
      );
    
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
#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR_H

namespace org { namespace scalegraph { namespace graph { 
class VertexTranslator__NoTraslator;
} } } 

#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR_H_NODEPS
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR_H_GENERICS
#endif // __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__NOTRASLATOR_H_NODEPS
