#ifndef __ORG_SCALEGRAPH_UTIL_STOPWATCH_H
#define __ORG_SCALEGRAPH_UTIL_STOPWATCH_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace org { namespace scalegraph { namespace test { 
class STest;
} } } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { 

class StopWatch : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(startTime);
    
    x10_long FMGL(prevTime);
    
    void _constructor();
    
    static org::scalegraph::util::StopWatch* _make();
    
    virtual void start();
    virtual void lap(x10::lang::String* message);
    virtual org::scalegraph::util::StopWatch* org__scalegraph__util__StopWatch____this__org__scalegraph__util__StopWatch(
      );
    virtual void __fieldInitializers50932();
    
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
#endif // ORG_SCALEGRAPH_UTIL_STOPWATCH_H

namespace org { namespace scalegraph { namespace util { 
class StopWatch;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_STOPWATCH_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_STOPWATCH_H_NODEPS
#ifndef ORG_SCALEGRAPH_UTIL_STOPWATCH_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_STOPWATCH_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_STOPWATCH_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_STOPWATCH_H_NODEPS
