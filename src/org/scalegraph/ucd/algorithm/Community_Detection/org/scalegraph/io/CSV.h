#ifndef __ORG_SCALEGRAPH_IO_CSV_H
#define __ORG_SCALEGRAPH_IO_CSV_H

#include <x10rt.h>


namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace io { 
class NamedDistData;
} } } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVReader;
} } } } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVWriter;
} } } } 
namespace org { namespace scalegraph { namespace io { 

class CSV : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static org::scalegraph::io::NamedDistData* read(org::scalegraph::util::SString path,
                                                    x10::array::Array<x10_int>* columnDef,
                                                    x10_boolean includeHeader);
    static org::scalegraph::io::NamedDistData* read(org::scalegraph::util::SString path,
                                                    x10::array::Array<x10_int>* columnDef,
                                                    x10::array::Array<x10::lang::String*>* columnNames);
    static void write(org::scalegraph::util::SString path,
                      org::scalegraph::io::NamedDistData* data,
                      x10_boolean setNumFlag);
    virtual org::scalegraph::io::CSV* org__scalegraph__io__CSV____this__org__scalegraph__io__CSV(
      );
    void _constructor();
    
    static org::scalegraph::io::CSV* _make();
    
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_IO_CSV_H

namespace org { namespace scalegraph { namespace io { 
class CSV;
} } } 

#ifndef ORG_SCALEGRAPH_IO_CSV_H_NODEPS
#define ORG_SCALEGRAPH_IO_CSV_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_CSV_H_GENERICS
#define ORG_SCALEGRAPH_IO_CSV_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_CSV_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_CSV_H_NODEPS
