#ifndef __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATORBASE_H
#define __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATORBASE_H

#include <x10rt.h>


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
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace graph { 

class VertexTranslatorBase : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10::util::Team* FMGL(team);
    
    x10_int FMGL(teamRank);
    
    x10_int FMGL(teamSize);
    
    x10_long FMGL(maxVertexID);
    
    void _constructor(x10::util::Team* team__);
    
    virtual x10_boolean isTranslator() = 0;
    virtual x10_long sizeOfDictionary() = 0;
    virtual x10_long maxVertexID();
    virtual org::scalegraph::graph::VertexTranslatorBase* org__scalegraph__graph__VertexTranslatorBase____this__org__scalegraph__graph__VertexTranslatorBase(
      );
    virtual void __fieldInitializers48843();
    
    // Serialization
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATORBASE_H

namespace org { namespace scalegraph { namespace graph { 
class VertexTranslatorBase;
} } } 

#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATORBASE_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATORBASE_H_NODEPS
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATORBASE_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATORBASE_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATORBASE_H_GENERICS
#endif // __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATORBASE_H_NODEPS
