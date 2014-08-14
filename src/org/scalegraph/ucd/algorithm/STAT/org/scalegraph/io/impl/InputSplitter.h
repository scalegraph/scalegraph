#ifndef __ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER_H
#define __ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER_H

#include <x10rt.h>


namespace org { namespace scalegraph { namespace id { 
class ProfilingID__IO;
} } } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace io { 
class FileReader;
} } } 
namespace x10 { namespace util { 
class Team;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class FileNameProvider;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class InputSplitter__InputSplit;
} } } } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class IOException;
} } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class InputSplitter__SplitterContext;
} } } } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

class InputSplitter : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_int FMGL(T_CHUNK_SIZE);
    static void FMGL(T_CHUNK_SIZE__do_init)();
    static void FMGL(T_CHUNK_SIZE__init)();
    static volatile x10aux::StaticInitController::status FMGL(T_CHUNK_SIZE__status);
    static x10::lang::CheckedThrowable* FMGL(T_CHUNK_SIZE__exception);
    static x10_int FMGL(T_CHUNK_SIZE__get)();
    
    virtual x10_long nextBreak(org::scalegraph::util::MemoryChunk<x10_byte> data,
                               x10_long offset) = 0;
    virtual org::scalegraph::util::MemoryChunk<x10_byte> nextBreak(
      org::scalegraph::io::FileReader* reader) = 0;
    virtual void split(x10::util::Team* team, org::scalegraph::io::impl::FileNameProvider* fman,
                       x10_long offset, x10_int nthreads,
                       x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> >* parse);
    virtual org::scalegraph::io::impl::InputSplitter* org__scalegraph__io__impl__InputSplitter____this__org__scalegraph__io__impl__InputSplitter(
      );
    void _constructor();
    
    
    // Serialization
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } } 
#endif // ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
class InputSplitter;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER_H_GENERICS
inline x10_int org::scalegraph::io::impl::InputSplitter::FMGL(T_CHUNK_SIZE__get)() {
    if (FMGL(T_CHUNK_SIZE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(T_CHUNK_SIZE__init)();
    }
    return org::scalegraph::io::impl::InputSplitter::FMGL(T_CHUNK_SIZE);
}

#endif // ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER_H_NODEPS
