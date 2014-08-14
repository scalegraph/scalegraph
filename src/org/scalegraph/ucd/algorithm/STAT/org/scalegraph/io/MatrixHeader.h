#ifndef __ORG_SCALEGRAPH_IO_MATRIXHEADER_H
#define __ORG_SCALEGRAPH_IO_MATRIXHEADER_H

#include <x10rt.h>


namespace org { namespace scalegraph { namespace io { 

class MatrixHeader : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual org::scalegraph::io::MatrixHeader* org__scalegraph__io__MatrixHeader____this__org__scalegraph__io__MatrixHeader(
      );
    void _constructor();
    
    static org::scalegraph::io::MatrixHeader* _make();
    
    
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
#endif // ORG_SCALEGRAPH_IO_MATRIXHEADER_H

namespace org { namespace scalegraph { namespace io { 
class MatrixHeader;
} } } 

#ifndef ORG_SCALEGRAPH_IO_MATRIXHEADER_H_NODEPS
#define ORG_SCALEGRAPH_IO_MATRIXHEADER_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_MATRIXHEADER_H_GENERICS
#define ORG_SCALEGRAPH_IO_MATRIXHEADER_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_MATRIXHEADER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_MATRIXHEADER_H_NODEPS
