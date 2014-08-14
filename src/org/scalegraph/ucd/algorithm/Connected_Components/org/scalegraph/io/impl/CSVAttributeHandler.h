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
        x10_int i130617max132083 = ((x10_int) ((nthreads) - (((x10_int)1))));
        
        //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.For_c
        {
            x10_int i132084;
            for (
                 //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                 i132084 = ((x10_int)0); ((i132084) <= (i130617max132083));
                 
                 //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                 i132084 = ((x10_int) ((i132084) + (((x10_int)1)))))
            {
                
                //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int tid132085 = i132084;
                
                //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* ch132062 =
                  (__extension__ ({
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index132063 = tid132085;
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* ret132064;
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
                        if (((index132063) < (((x10_int)0))) ||
                            ((((x10_long) (index132063))) >= (buffers->
                                                                FMGL(data)->
                                                                FMGL(size))))
                        {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index132063), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret132064 = (buffers->FMGL(data))[index132063];
                    ret132064;
                }))
                ;
                
                //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(ch132062)->FMGL(buf) = (x10aux::class_cast<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>(x10::lang::Fun_0_1<x10_int, x10::lang::Any*>::__apply(x10aux::nullCheck(getBuffer), 
                                                            tid132085)));
                
                //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(ch132062)->FMGL(chunkSize) =
                  x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >::__apply(x10aux::nullCheck(getChunkSize), 
                  tid132085);
                
                //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(ch132062)->FMGL(offset) =
                  ((x10_long)0ll);
            }
        }
        
        //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_long totalSize = ((x10_long) (((x10_int)0)));
        
        //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_int i130635max132086 = ((x10_int) ((nthreads) - (((x10_int)1))));
        
        //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.For_c
        {
            x10_int i132087;
            for (
                 //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                 i132087 = ((x10_int)0); ((i132087) <= (i130635max132086));
                 
                 //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                 i132087 = ((x10_int) ((i132087) + (((x10_int)1)))))
            {
                
                //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int tid132088 = i132087;
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                totalSize = ((x10_long) ((totalSize) + ((__extension__ ({
                    
                    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::GrowableMemory<TPMGL(T)>* this132065 =
                      x10aux::nullCheck((__extension__ ({
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_int index132066 = tid132088;
                          
                          //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* ret132067;
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
                              if (((index132066) < (((x10_int)0))) ||
                                  ((((x10_long) (index132066))) >= (buffers->
                                                                      FMGL(data)->
                                                                      FMGL(size))))
                              {
                                  
                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index132066), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret132067 = (buffers->FMGL(data))[index132066];
                          ret132067;
                      }))
                      )->FMGL(buf);
                    x10aux::nullCheck(this132065)->FMGL(size);
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
            org::scalegraph::util::MemoryChunk<x10_long> this131898 =
              x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >::__apply(x10aux::nullCheck(getChunkSize), 
              ((x10_int)0));
            this131898->FMGL(data)->FMGL(size);
        }))
        ;
        
        //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_long offset = ((x10_long) (((x10_int)0)));
        
        //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_long i130671min132089 = ((x10_long) (((x10_int)0)));
        
        //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_long i130671max132090 = ((x10_long) ((numChunks) - (((x10_long) (((x10_int)1))))));
        
        //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.For_c
        {
            x10_long i132091;
            for (
                 //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                 i132091 = i130671min132089; ((i132091) <= (i130671max132090));
                 
                 //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                 i132091 = ((x10_long) ((i132091) + (((x10_long)1ll)))))
            {
                
                //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_long ich132092 = i132091;
                
                //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int i130653max132078 = ((x10_int) ((nthreads) - (((x10_int)1))));
                
                //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.For_c
                {
                    x10_int i132079;
                    for (
                         //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                         i132079 = ((x10_int)0); ((i132079) <= (i130653max132078));
                         
                         //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                         i132079 = ((x10_int) ((i132079) + (((x10_int)1)))))
                    {
                        
                        //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                        x10_int tid132080 = i132079;
                        
                        //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* ch132070 =
                          (__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index132071 = tid132080;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* ret132072;
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
                                if (((index132071) < (((x10_int)0))) ||
                                    ((((x10_long) (index132071))) >= (buffers->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index132071), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret132072 = (buffers->FMGL(data))[index132071];
                            ret132072;
                        }))
                        ;
                        
                        //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                        x10_long copySize132073 = (__extension__ ({
                            
                            //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_long> this132074 =
                              x10aux::nullCheck(ch132070)->
                                FMGL(chunkSize);
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index132075 = ich132092;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret132076;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((this132074->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index132075) < (((x10_long) (((x10_int)0))))) ||
                                    ((index132075) >= (this132074->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index132075), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret132076 = (this132074->FMGL(data))[index132075];
                            ret132076;
                        }))
                        ;
                        
                        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<TPMGL(T)> buf132077 =
                          x10aux::nullCheck(x10aux::nullCheck(ch132070)->
                                              FMGL(buf))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::raw();
                        
                        //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::util::MemoryChunk<void>::copy<TPMGL(T) >(
                          buf132077, x10aux::nullCheck(ch132070)->
                                       FMGL(offset), outbuf,
                          offset, copySize132073);
                        
                        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                        offset = ((x10_long) ((offset) + (copySize132073)));
                        
                        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* x132068 =
                          ch132070;
                        
                        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                        x10_long y132069 = copySize132073;
                        
                        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                        x10aux::nullCheck(x132068)->FMGL(offset) =
                          ((x10_long) ((x10aux::nullCheck(x132068)->
                                          FMGL(offset)) + (y132069)));
                    }
                }
                
            }
        }
        
        //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
        x10_int i130689max132093 = ((x10_int) ((nthreads) - (((x10_int)1))));
        
        //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.For_c
        {
            x10_int i132094;
            for (
                 //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                 i132094 = ((x10_int)0); ((i132094) <= (i130689max132093));
                 
                 //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10LocalAssign_c
                 i132094 = ((x10_int) ((i132094) + (((x10_int)1)))))
            {
                
                //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int tid132095 = i132094;
                
                //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(x10aux::nullCheck((__extension__ ({
                                      
                                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                      x10_int index132081 =
                                        tid132095;
                                      
                                      //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                      org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<TPMGL(T)>* ret132082;
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
                                          if (((index132081) < (((x10_int)0))) ||
                                              ((((x10_long) (index132081))) >= (buffers->
                                                                                  FMGL(data)->
                                                                                  FMGL(size))))
                                          {
                                              
                                              //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                              if (true) {
                                                  
                                                  //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index132081), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                              }
                                              
                                          }
                                          
                                      }
                                      
                                      //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                      ret132082 = (buffers->
                                                     FMGL(data))[index132081];
                                      ret132082;
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
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_mergeResultHelper_1586
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_mergeResultHelper_1586
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
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_mergeResultHelper_1586
#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER_H_NODEPS
