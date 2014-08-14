#ifndef __ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__SPLITTERCONTEXT_H
#define __ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__SPLITTERCONTEXT_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__INPUTSPLIT_H_NODEPS
#include <org/scalegraph/io/impl/InputSplitter__InputSplit.h>
#undef ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__INPUTSPLIT_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
namespace org { namespace scalegraph { namespace io { namespace impl { 
class InputSplitter;
} } } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Monitor;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace lang { 
class Runtime;
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
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class LongRange;
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
namespace org { namespace scalegraph { namespace io { 
class FileReader;
} } } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

class InputSplitter__SplitterContext : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    org::scalegraph::io::impl::InputSplitter* FMGL(out__);
    
    x10_int FMGL(nthreads);
    
    org::scalegraph::util::MemoryChunk<org::scalegraph::io::impl::InputSplitter__InputSplit>
      FMGL(splits);
    
    x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> >*
      FMGL(parse);
    
    x10::util::concurrent::Monitor* FMGL(monitor);
    
    x10_int FMGL(numLauchTasks);
    
    org::scalegraph::util::GrowableMemory<x10_byte>* FMGL(frontBuffer);
    
    org::scalegraph::util::GrowableMemory<x10_byte>* FMGL(backBuffer);
    
    void _constructor(org::scalegraph::io::impl::InputSplitter* out__,
                      org::scalegraph::util::MemoryChunk<org::scalegraph::io::impl::InputSplitter__InputSplit> splits,
                      x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> >* parse,
                      x10_int nthreads);
    
    static org::scalegraph::io::impl::InputSplitter__SplitterContext* _make(
             org::scalegraph::io::impl::InputSplitter* out__,
             org::scalegraph::util::MemoryChunk<org::scalegraph::io::impl::InputSplitter__InputSplit> splits,
             x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> >* parse,
             x10_int nthreads);
    
    void cycleBuffers(x10_int numTasksToLaunch);
    void notifySubtaskCompletion();
    void subtask();
    virtual void split();
    virtual org::scalegraph::io::impl::InputSplitter__SplitterContext*
      org__scalegraph__io__impl__InputSplitter__SplitterContext____this__org__scalegraph__io__impl__InputSplitter__SplitterContext(
      );
    virtual org::scalegraph::io::impl::InputSplitter* org__scalegraph__io__impl__InputSplitter__SplitterContext____this__org__scalegraph__io__impl__InputSplitter(
      );
    virtual void __fieldInitializers132776();
    
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
#endif // ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__SPLITTERCONTEXT_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
class InputSplitter__SplitterContext;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__SPLITTERCONTEXT_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__SPLITTERCONTEXT_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__SPLITTERCONTEXT_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__SPLITTERCONTEXT_H_GENERICS
#endif // ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__SPLITTERCONTEXT_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_IMPL_INPUTSPLITTER__SPLITTERCONTEXT_H_NODEPS
