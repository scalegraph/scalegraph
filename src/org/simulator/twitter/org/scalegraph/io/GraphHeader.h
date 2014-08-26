#ifndef __ORG_SCALEGRAPH_IO_GRAPHHEADER_H
#define __ORG_SCALEGRAPH_IO_GRAPHHEADER_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace org { namespace scalegraph { namespace io { 

class GraphHeader : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(numVertexes);
    
    x10_long FMGL(numEdges);
    
    x10_int FMGL(numVertexAttributes);
    
    x10_int FMGL(numEdgeAttributes);
    
    void _constructor(x10_long numVertexes, x10_long numEdges, x10_int numVertexAttributes,
                      x10_int numEdgeAttributes);
    
    static org::scalegraph::io::GraphHeader* _make(x10_long numVertexes,
                                                   x10_long numEdges,
                                                   x10_int numVertexAttributes,
                                                   x10_int numEdgeAttributes);
    
    virtual org::scalegraph::io::GraphHeader* org__scalegraph__io__GraphHeader____this__org__scalegraph__io__GraphHeader(
      );
    virtual void __fieldInitializers67431();
    
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
#endif // ORG_SCALEGRAPH_IO_GRAPHHEADER_H

namespace org { namespace scalegraph { namespace io { 
class GraphHeader;
} } } 

#ifndef ORG_SCALEGRAPH_IO_GRAPHHEADER_H_NODEPS
#define ORG_SCALEGRAPH_IO_GRAPHHEADER_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_GRAPHHEADER_H_GENERICS
#define ORG_SCALEGRAPH_IO_GRAPHHEADER_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_GRAPHHEADER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_GRAPHHEADER_H_NODEPS
