#ifndef __ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER_H
#define __ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_NODEPS
#include <org/scalegraph/util/SStringBuilder.h>
#undef ORG_SCALEGRAPH_UTIL_SSTRINGBUILDER_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
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
class FileWriter;
} } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Monitor;
} } } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace lang { 
class Byte;
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
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class Error;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Ordered;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

class CSVWriter__ParallelWriter : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder>
      FMGL(frontBuffer);
    
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder>
      FMGL(backBuffer);
    
    org::scalegraph::io::FileWriter* FMGL(fw);
    
    x10::util::ArrayList<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*>*
      FMGL(strClousure);
    
    x10::util::concurrent::Monitor* FMGL(monitor);
    
    x10_int FMGL(numLauchTasks);
    
    void _constructor(org::scalegraph::io::FileWriter* fw, x10::util::ArrayList<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*>* strClousure);
    
    static org::scalegraph::io::impl::CSVWriter__ParallelWriter* _make(
             org::scalegraph::io::FileWriter* fw, x10::util::ArrayList<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*>* strClousure);
    
    void cycleBuffers(x10_int numTasksToLaunch);
    void notifySubtaskCompletion();
    void makeString(x10::lang::LongRange range);
    void subtask();
    virtual void write(x10_long numLines);
    virtual org::scalegraph::io::impl::CSVWriter__ParallelWriter*
      org__scalegraph__io__impl__CSVWriter__ParallelWriter____this__org__scalegraph__io__impl__CSVWriter__ParallelWriter(
      );
    virtual void __fieldInitializers84968();
    
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
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVWriter__ParallelWriter;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER_H_NODEPS
