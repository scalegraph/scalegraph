#ifndef __ORG_SCALEGRAPH_UTIL_RANDOM_RANDOM_H
#define __ORG_SCALEGRAPH_UTIL_RANDOM_RANDOM_H

#include <x10rt.h>


#define X10_IO_CUSTOMSERIALIZATION_H_NODEPS
#include <x10/io/CustomSerialization.h>
#undef X10_IO_CUSTOMSERIALIZATION_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_RANDOM_SPLITTABLE_MRG_H_NODEPS
#include <org/scalegraph/util/random/splittable_mrg.h>
#undef ORG_SCALEGRAPH_UTIL_RANDOM_SPLITTABLE_MRG_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_RANDOM_SPLITTABLE_MRG_H_NODEPS
#include <org/scalegraph/util/random/splittable_mrg.h>
#undef ORG_SCALEGRAPH_UTIL_RANDOM_SPLITTABLE_MRG_H_NODEPS
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace io { 
class SerialData;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
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
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace x10 { namespace lang { 
class Float;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace org { namespace scalegraph { namespace util { namespace random { 

class Random : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10aux::itable_entry _itables[3];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::io::CustomSerialization::itable<org::scalegraph::util::random::Random > _itable_0;
    
    static x10::lang::Any::itable<org::scalegraph::util::random::Random > _itable_1;
    
    mrg_state FMGL(state);
    
    void _constructor(x10_long seed1, x10_long seed2);
    
    static org::scalegraph::util::random::Random* _make(x10_long seed1, x10_long seed2);
    
    void _constructor(mrg_state orig);
    
    static org::scalegraph::util::random::Random* _make(mrg_state orig);
    
    void _constructor(x10::io::SerialData* data);
    
    static org::scalegraph::util::random::Random* _make(x10::io::SerialData* data);
    
    virtual x10::io::SerialData* serialize();
    x10_int random();
    virtual org::scalegraph::util::random::Random* clone();
    virtual void skip(x10_long n);
    virtual x10_int nextInt();
    virtual x10_long nextLong();
    virtual void nextBytes(org::scalegraph::util::MemoryChunk<x10_byte> buf);
    virtual x10_double nextDouble();
    virtual x10_float nextFloat();
    virtual x10_int nextInt(x10_int maxPlus1);
    virtual x10_long nextLong(x10_long maxPlus1);
    virtual x10_boolean nextBoolean();
    virtual org::scalegraph::util::random::Random* org__scalegraph__util__random__Random____this__org__scalegraph__util__random__Random(
      );
    virtual void __fieldInitializers81880();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // ORG_SCALEGRAPH_UTIL_RANDOM_RANDOM_H

namespace org { namespace scalegraph { namespace util { namespace random { 
class Random;
} } } } 

#ifndef ORG_SCALEGRAPH_UTIL_RANDOM_RANDOM_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_RANDOM_RANDOM_H_NODEPS
#ifndef ORG_SCALEGRAPH_UTIL_RANDOM_RANDOM_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_RANDOM_RANDOM_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_RANDOM_RANDOM_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_RANDOM_RANDOM_H_NODEPS
