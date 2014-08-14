#ifndef __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H
#define __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H

#include <x10rt.h>

#include "CSVHelper.h"

#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class IllegalOperationException;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryPointer;
} } } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace org { namespace scalegraph { namespace util { 
class SStringBuilder;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
template<class TPMGL(T)> class CSVAttributeHandler__ChunkBuffer;
} } } } 
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
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
template<class TPMGL(T)> class CSVAttributeHandler__PrimitiveHandler;
} } } } 
namespace x10 { namespace lang { 
class Short;
} } 
namespace x10 { namespace lang { 
class Float;
} } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace x10 { namespace lang { 
class UByte;
} } 
namespace x10 { namespace lang { 
class UShort;
} } 
namespace x10 { namespace lang { 
class UInt;
} } 
namespace x10 { namespace lang { 
class ULong;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVAttributeHandler__StringHandler;
} } } } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace compiler { 
class NativeCPPInclude;
} } 
namespace x10 { namespace compiler { 
class NativeCPPCompilationUnit;
} } 
namespace org { namespace scalegraph { namespace io { namespace impl { 

class CSVAttributeHandler : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_int FMGL(typeId);
    
    x10_boolean FMGL(doubleQuoated);
    
    void _constructor();
    
    static org::scalegraph::io::impl::CSVAttributeHandler* _make();
    
    void _constructor(x10_int typeId, x10_boolean doubleQuoated);
    
    static org::scalegraph::io::impl::CSVAttributeHandler* _make(x10_int typeId,
                                                                 x10_boolean doubleQuoated);
    
    virtual x10_boolean isSkip();
    virtual x10_int typeId();
    virtual x10_long localSizeOf(x10::lang::Any* any);
    virtual x10::lang::Any* createBlockGrowableMemory();
    virtual void parseElements(x10_byte * * elemPtrs, x10_int lines, x10::lang::Any* outBuf);
    virtual x10::lang::Any* mergeResult(x10::util::Team* team, x10_int nthreads,
                                        x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >* getChunkSize,
                                        x10::lang::Fun_0_1<x10_int, x10::lang::Any*>* getBuffer);
    virtual x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*
      makeStringClosure(x10::lang::Any* any);
    virtual void print(x10::util::Team* team, x10::lang::Any* any);
    template<class TPMGL(T)> static x10::lang::Any* mergeResultHelper(
      x10::util::Team* team, x10_int nthreads, x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >* getChunkSize,
      x10::lang::Fun_0_1<x10_int, x10::lang::Any*>* getBuffer);
    static org::scalegraph::io::impl::CSVAttributeHandler*
      create(x10_int typeId, x10_boolean doubleQuoated);
    virtual org::scalegraph::io::impl::CSVAttributeHandler*
      org__scalegraph__io__impl__CSVAttributeHandler____this__org__scalegraph__io__impl__CSVAttributeHandler(
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


} } } } 
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H

namespace org { namespace scalegraph { namespace io { namespace impl { 
class CSVAttributeHandler;
} } } } 

#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_NODEPS
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Any.h>
#include <x10/lang/IllegalOperationException.h>
#include <org/scalegraph/util/MemoryPointer.h>
#include <x10/lang/Byte.h>
#include <x10/util/Team.h>
#include <x10/lang/Fun_0_1.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/VoidFun_0_2.h>
#include <org/scalegraph/util/SStringBuilder.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <org/scalegraph/io/impl/CSVAttributeHandler__ChunkBuffer.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <org/scalegraph/io/impl/CSVAttributeHandler__PrimitiveHandler.h>
#include <x10/lang/Short.h>
#include <x10/lang/Float.h>
#include <x10/lang/Double.h>
#include <x10/lang/UByte.h>
#include <x10/lang/UShort.h>
#include <x10/lang/UInt.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Char.h>
#include <org/scalegraph/io/impl/CSVAttributeHandler__StringHandler.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/compiler/NativeCPPInclude.h>
#include <x10/compiler/NativeCPPCompilationUnit.h>
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_io_impl_CSVAttributeHandler__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<TPMGL(T)> __apply() {
        
        //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>*> buffers =
          org::scalegraph::util::MemoryChunk<org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* >::_make(((x10_long) (nthreads)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_int i132166max133632 = ((x10_int) ((nthreads) - (((x10_int)1))));
        
        //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.For_c
        {
            x10_int i133633;
            for (
                 //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                 i133633 = ((x10_int)0); ((i133633) <= (i132166max133632));
                 
                 //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                 i133633 = ((x10_int) ((i133633) + (((x10_int)1)))))
            {
                
                //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int tid133634 = i133633;
                
                //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* ch133611 =
                  (__extension__ ({
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index133612 = tid133634;
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* ret133613;
                    {
                        
                        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((buffers->FMGL(data)).isValid()))
                        {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index133612) < (((x10_int)0))) ||
                            ((((x10_long) (index133612))) >= (buffers->
                                                                FMGL(data)->
                                                                FMGL(size))))
                        {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133612), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133613 = (buffers->FMGL(data))[index133612];
                    ret133613;
                }))
                ;
                
                //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(ch133611)->FMGL(buf) = (x10aux::class_cast<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>(x10::lang::Fun_0_1<x10_int, x10::lang::Any*>::__apply(x10aux::nullCheck(getBuffer), 
                                                            tid133634)));
                
                //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(ch133611)->FMGL(chunkSize) =
                  x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >::__apply(x10aux::nullCheck(getChunkSize), 
                  tid133634);
                
                //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(ch133611)->FMGL(offset) =
                  ((x10_long)0ll);
            }
        }
        
        //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_long totalSize = ((x10_long) (((x10_int)0)));
        
        //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_int i132184max133635 = ((x10_int) ((nthreads) - (((x10_int)1))));
        
        //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.For_c
        {
            x10_int i133636;
            for (
                 //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                 i133636 = ((x10_int)0); ((i133636) <= (i132184max133635));
                 
                 //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                 i133636 = ((x10_int) ((i133636) + (((x10_int)1)))))
            {
                
                //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int tid133637 = i133636;
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                totalSize = ((x10_long) ((totalSize) + ((__extension__ ({
                    
                    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::GrowableMemory<TPMGL(T)>* this133614 =
                      x10aux::nullCheck((__extension__ ({
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_int index133615 = tid133637;
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* ret133616;
                          {
                              
                              //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((buffers->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                  }
                                  
                              }
                              
                              //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((index133615) < (((x10_int)0))) ||
                                  ((((x10_long) (index133615))) >= (buffers->
                                                                      FMGL(data)->
                                                                      FMGL(size))))
                              {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133615), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret133616 = (buffers->FMGL(data))[index133615];
                          ret133616;
                      }))
                      )->FMGL(buf);
                    x10aux::nullCheck(this133614)->FMGL(size);
                }))
                )));
            }
        }
        
        //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> outbuf =
          org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(totalSize, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_long numChunks = (__extension__ ({
            
            //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this133447 =
              x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >::__apply(x10aux::nullCheck(getChunkSize), 
              ((x10_int)0));
            this133447->FMGL(data)->FMGL(size);
        }))
        ;
        
        //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_long offset = ((x10_long) (((x10_int)0)));
        
        //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_long i132220min133638 = ((x10_long) (((x10_int)0)));
        
        //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_long i132220max133639 = ((x10_long) ((numChunks) - (((x10_long) (((x10_int)1))))));
        
        //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.For_c
        {
            x10_long i133640;
            for (
                 //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                 i133640 = i132220min133638; ((i133640) <= (i132220max133639));
                 
                 //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                 i133640 = ((x10_long) ((i133640) + (((x10_long)1ll)))))
            {
                
                //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_long ich133641 = i133640;
                
                //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int i132202max133627 = ((x10_int) ((nthreads) - (((x10_int)1))));
                
                //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.For_c
                {
                    x10_int i133628;
                    for (
                         //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                         i133628 = ((x10_int)0); ((i133628) <= (i132202max133627));
                         
                         //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                         i133628 = ((x10_int) ((i133628) + (((x10_int)1)))))
                    {
                        
                        //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                        x10_int tid133629 = i133628;
                        
                        //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* ch133619 =
                          (__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index133620 = tid133629;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* ret133621;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((buffers->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index133620) < (((x10_int)0))) ||
                                    ((((x10_long) (index133620))) >= (buffers->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133620), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret133621 = (buffers->FMGL(data))[index133620];
                            ret133621;
                        }))
                        ;
                        
                        //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                        x10_long copySize133622 = (__extension__ ({
                            
                            //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_long> this133623 =
                              x10aux::nullCheck(ch133619)->
                                FMGL(chunkSize);
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index133624 = ich133641;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret133625;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((this133623->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index133624) < (((x10_long) (((x10_int)0))))) ||
                                    ((index133624) >= (this133623->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133624), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret133625 = (this133623->FMGL(data))[index133624];
                            ret133625;
                        }))
                        ;
                        
                        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<TPMGL(T)> buf133626 =
                          x10aux::nullCheck(x10aux::nullCheck(ch133619)->
                                              FMGL(buf))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::raw();
                        
                        //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::util::MemoryChunk<void>::copy<TPMGL(T) >(
                          buf133626, x10aux::nullCheck(ch133619)->
                                       FMGL(offset), outbuf,
                          offset, copySize133622);
                        
                        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                        offset = ((x10_long) ((offset) + (copySize133622)));
                        
                        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* x133617 =
                          ch133619;
                        
                        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                        x10_long y133618 = copySize133622;
                        
                        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                        x10aux::nullCheck(x133617)->FMGL(offset) =
                          ((x10_long) ((x10aux::nullCheck(x133617)->
                                          FMGL(offset)) + (y133618)));
                    }
                }
                
            }
        }
        
        //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_int i132238max133642 = ((x10_int) ((nthreads) - (((x10_int)1))));
        
        //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.For_c
        {
            x10_int i133643;
            for (
                 //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                 i133643 = ((x10_int)0); ((i133643) <= (i132238max133642));
                 
                 //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                 i133643 = ((x10_int) ((i133643) + (((x10_int)1)))))
            {
                
                //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int tid133644 = i133643;
                
                //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(x10aux::nullCheck((__extension__ ({
                                      
                                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                      x10_int index133630 =
                                        tid133644;
                                      
                                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                      org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* ret133631;
                                      {
                                          
                                          //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (!((buffers->
                                                   FMGL(data)).isValid()))
                                          {
                                              
                                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                              if (true) {
                                                  
                                                  //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                              }
                                              
                                          }
                                          
                                          //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                          if (((index133630) < (((x10_int)0))) ||
                                              ((((x10_long) (index133630))) >= (buffers->
                                                                                  FMGL(data)->
                                                                                  FMGL(size))))
                                          {
                                              
                                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                              if (true) {
                                                  
                                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133630), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                              }
                                              
                                          }
                                          
                                      }
                                      
                                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                      ret133631 = (buffers->
                                                     FMGL(data))[index133630];
                                      ret133631;
                                  }))
                                  )->FMGL(buf))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::del();
            }
        }
        
        //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Assert_c
        #ifndef NO_ASSERTIONS
        if (x10aux::x10__assertions_enabled)
            x10aux::x10__assert((x10aux::struct_equals(offset,
                                                       totalSize)));
        #endif//NO_ASSERTIONS
        
        //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
        return outbuf;
        
    }
    
    // captured environment
    x10_int nthreads;
    x10::lang::Fun_0_1<x10_int, x10::lang::Any*>* getBuffer;
    x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >* getChunkSize;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->nthreads);
        buf.write(this->getBuffer);
        buf.write(this->getChunkSize);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_nthreads = buf.read<x10_int>();
        x10::lang::Fun_0_1<x10_int, x10::lang::Any*>* that_getBuffer = buf.read<x10::lang::Fun_0_1<x10_int, x10::lang::Any*>*>();
        x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >* that_getChunkSize = buf.read<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >*>();
        org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T) >(that_nthreads, that_getBuffer, that_getChunkSize);
        return this_;
    }
    
    org_scalegraph_io_impl_CSVAttributeHandler__closure__1(x10_int nthreads, x10::lang::Fun_0_1<x10_int, x10::lang::Any*>* getBuffer, x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >* getChunkSize) : nthreads(nthreads), getBuffer(getBuffer), getChunkSize(getChunkSize) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10:79-114";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T) > >org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T) >::__apply, &org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >, &org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_GENERICS
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_GENERICS
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_mergeResultHelper_1554
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_mergeResultHelper_1554
template<class TPMGL(T)> x10::lang::Any* org::scalegraph::io::impl::CSVAttributeHandler::mergeResultHelper(
  x10::util::Team* team, x10_int nthreads, x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >* getChunkSize,
  x10::lang::Fun_0_1<x10_int, x10::lang::Any*>* getBuffer) {
    
    //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> ret =
      org::scalegraph::util::DistMemoryChunk<void>::template make<TPMGL(T) >(
        x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(sizeof(org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T)>)))org_scalegraph_io_impl_CSVAttributeHandler__closure__1<TPMGL(T)>(nthreads, getBuffer, getChunkSize))));
    
    //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return x10aux::class_cast_unchecked<x10::lang::Any*>(ret);
    
}
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_mergeResultHelper_1554
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_NODEPS
