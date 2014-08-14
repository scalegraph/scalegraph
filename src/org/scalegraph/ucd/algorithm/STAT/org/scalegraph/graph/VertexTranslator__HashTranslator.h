#ifndef __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR_H
#define __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_NODEPS
#include <org/scalegraph/graph/VertexTranslator.h>
#undef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/DistMemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/DistMemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace util { namespace concurrent { 
class AtomicLong;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace org { namespace scalegraph { namespace graph { 
class VertexTranslatorBase;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class LongRange;
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
namespace x10 { namespace util { 
template<class TPMGL(T)> class Box;
} } 
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
namespace x10 { namespace util { 
class NoSuchElementException;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace org { namespace scalegraph { namespace util { 
class DistScatterGather;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk__Distributor;
} } } 
namespace org { namespace scalegraph { namespace graph { 

template<class TPMGL(T)> class VertexTranslator__HashTranslator;
template <> class VertexTranslator__HashTranslator<void>;
template<class TPMGL(T)> class VertexTranslator__HashTranslator : public org::scalegraph::graph::VertexTranslator<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    x10::util::concurrent::AtomicLong* FMGL(count);
    
    x10::lang::Fun_0_1<TPMGL(T), x10_int>* FMGL(hashFunc);
    
    org::scalegraph::util::HashMap<TPMGL(T), x10_long>* FMGL(table);
    
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> FMGL(vertexNamesAtt);
    
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* FMGL(vertexNames);
    
    x10_int FMGL(maxLocalId);
    
    virtual x10_boolean isTranslator();
    virtual x10_long sizeOfDictionary();
    void _constructor(x10::util::Team* team__, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNamesAtt__);
    
    static org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* _make(
             x10::util::Team* team__, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNamesAtt__);
    
    void _constructor(x10::util::Team* team__, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNamesAtt__,
                      x10::lang::Fun_0_1<TPMGL(T), x10_int>* hashFunc__);
    
    static org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* _make(
             x10::util::Team* team__, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNamesAtt__,
             x10::lang::Fun_0_1<TPMGL(T), x10_int>* hashFunc__);
    
    x10_long countToId(x10_long count);
    org::scalegraph::util::MemoryChunk<x10_long> putLocalAndTranslate(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices,
      org::scalegraph::util::MemoryChunk<x10_long> translated);
    org::scalegraph::util::MemoryChunk<x10_long> parallelPutLocalAndTranslate(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices,
      org::scalegraph::util::MemoryChunk<x10_long> translated);
    void putLocal(org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices);
    void translateLocal(org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices,
                        org::scalegraph::util::MemoryChunk<x10_long> translated);
    void innerPutWithAllAndTranslate(org::scalegraph::util::DistScatterGather scatterGather,
                                     org::scalegraph::util::MemoryChunk<TPMGL(T)> edges,
                                     org::scalegraph::util::MemoryChunk<x10_long> translated,
                                     x10_boolean withPut);
    virtual org::scalegraph::util::MemoryChunk<x10_long> translateWithAll(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> edges,
      x10_boolean withPut);
    virtual org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*
      org__scalegraph__graph__VertexTranslator__HashTranslator____this__org__scalegraph__graph__VertexTranslator__HashTranslator(
      );
    virtual void __fieldInitializers92967();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::graph::VertexTranslator__HashTranslator<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::graph::VertexTranslator<TPMGL(T)> >()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.graph.VertexTranslator.HashTranslator";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class VertexTranslator__HashTranslator<void> : public org::scalegraph::graph::VertexTranslator<void>
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR_H

namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class VertexTranslator__HashTranslator;
} } } 

#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR_H_NODEPS
#include <org/scalegraph/graph/VertexTranslator.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/util/concurrent/AtomicLong.h>
#include <x10/lang/Fun_0_1.h>
#include <org/scalegraph/util/HashMap.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/lang/Boolean.h>
#include <x10/util/Team.h>
#include <x10/lang/Any.h>
#include <org/scalegraph/graph/VertexTranslatorBase.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/LongRange.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/util/Box.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/util/NoSuchElementException.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <org/scalegraph/util/DistScatterGather.h>
#include <org/scalegraph/util/MemoryChunk__Distributor.h>
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR_H_GENERICS
#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR_H_GENERICS
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR_H_IMPLEMENTATION
#include <org/scalegraph/graph/VertexTranslator__HashTranslator.h>

#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<TPMGL(T), x10_int>::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(TPMGL(T) x) {
        
        //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
        return x10aux::hash_code(x);
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<TPMGL(T), x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<TPMGL(T), x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:111";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<TPMGL(T), x10_int>::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<TPMGL(T), x10_int> >, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long tid133497 = ((x10_long) (idx133499));
            
            //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r133498 = i_range133503;
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i93309domain133492 = r133498;
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i93309min133493 = i93309domain133492->FMGL(min);
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i93309max133494 = i93309domain133492->FMGL(max);
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
            {
                x10_long i133495;
                for (
                     //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                     i133495 = i93309min133493; ((i133495) <= (i93309max133494));
                     
                     //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                     i133495 = ((x10_long) ((i133495) + (((x10_long)1ll)))))
                {
                    
                    //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_long i133496 = i133495;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index133489 = i133496;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value133490 = ((x10_long) ((saved_this->
                                                           FMGL(count)->x10::util::concurrent::AtomicLong::get()) + (i133496)));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret133491;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((newIds->FMGL(data)).isValid())) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index133489) < (((x10_long) (((x10_int)0))))) ||
                            ((index133489) >= (newIds->FMGL(data)->
                                                 FMGL(size)))) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133489), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (newIds->FMGL(data)).set(index133489, value133490);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133491 = value133490;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret133491;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1705) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1705)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1705);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1705);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx133499;
    x10::lang::LongRange i_range133503;
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this;
    org::scalegraph::util::MemoryChunk<x10_long> newIds;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx133499);
        buf.write(this->i_range133503);
        buf.write(this->saved_this);
        buf.write(this->newIds);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx133499 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range133503 = buf.read<x10::lang::LongRange>();
        org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_newIds = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >(that_idx133499, that_i_range133503, that_saved_this, that_newIds);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3(x10_int idx133499, x10::lang::LongRange i_range133503, org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this, org::scalegraph::util::MemoryChunk<x10_long> newIds) : idx133499(idx133499), i_range133503(i_range133503), saved_this(saved_this), newIds(newIds) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i74194domain133532 = i_range133540;
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i74194min133533 = i74194domain133532->FMGL(min);
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i74194max133534 = i74194domain133532->FMGL(max);
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_long i133535;
                for (
                     //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i133535 = i74194min133533; ((i133535) <= (i74194max133534));
                     
                     //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i133535 = ((x10_long) ((i133535) + (((x10_long)1ll)))))
                {
                    
                    //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long ii133536 = i133535;
                    
                    //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_long i133531 = ii133536;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index133526 = i133531;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value133527 = saved_this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::getOrThrow(
                                             (__extension__ ({
                                                 
                                                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                 x10_long index133528 =
                                                   i133531;
                                                 
                                                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                 TPMGL(T) ret133529;
                                                 {
                                                     
                                                     //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (!((vertices->
                                                              FMGL(data)).isValid()))
                                                     {
                                                         
                                                         //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                         if (true)
                                                         {
                                                             
                                                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                             if (true)
                                                             {
                                                                 
                                                                 //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                 x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                             }
                                                             
                                                         }
                                                         
                                                     }
                                                     
                                                     //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                     if (((index133528) < (((x10_long) (((x10_int)0))))) ||
                                                         ((index133528) >= (vertices->
                                                                              FMGL(data)->
                                                                              FMGL(size))))
                                                     {
                                                         
                                                         //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                         if (true)
                                                         {
                                                             
                                                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                             if (true)
                                                             {
                                                                 
                                                                 //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                 x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133528), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                             }
                                                             
                                                         }
                                                         
                                                     }
                                                     
                                                 }
                                                 
                                                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                 ret133529 =
                                                   (vertices->
                                                      FMGL(data))[index133528];
                                                 ret133529;
                                             }))
                                             );
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret133530;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((translated->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index133526) < (((x10_long) (((x10_int)0))))) ||
                            ((index133526) >= (translated->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133526), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (translated->FMGL(data)).set(index133526, value133527);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133530 = value133527;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret133530;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1710) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1710)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1710);
                {
                    
                    //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1710);
                {
                    
                    //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::LongRange i_range133540;
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices;
    org::scalegraph::util::MemoryChunk<x10_long> translated;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_range133540);
        buf.write(this->saved_this);
        buf.write(this->vertices);
        buf.write(this->translated);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::lang::LongRange that_i_range133540 = buf.read<x10::lang::LongRange>();
        org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_vertices = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_translated = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >(that_i_range133540, that_saved_this, that_vertices, that_translated);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4(x10::lang::LongRange i_range133540, org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this, org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices, org::scalegraph::util::MemoryChunk<x10_long> translated) : i_range133540(i_range133540), saved_this(saved_this), vertices(vertices), translated(translated) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:854";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long tid133568 = ((x10_long) (idx133570));
            
            //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r133569 = i_range133574;
            
            //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts133567 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                         ((x10_int) (tid133568)));
            
            //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i93347domain133562 = r133569;
            
            //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i93347min133563 = i93347domain133562->FMGL(min);
            
            //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i93347max133564 = i93347domain133562->FMGL(max);
            
            //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
            {
                x10_long i133565;
                for (
                     //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                     i133565 = i93347min133563; ((i133565) <= (i93347max133564));
                     
                     //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                     i133565 = ((x10_long) ((i133565) + (((x10_long)1ll)))))
                {
                    
                    //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_long i133566 = i133565;
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x133557 =
                      counts133567;
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_int y133558 = ((x10_int) ((x10::lang::Fun_0_1<TPMGL(T), x10_int>::__apply(x10aux::nullCheck(saved_this->
                                                                                                                      FMGL(hashFunc)), 
                      (__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index133559 = i133566;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          TPMGL(T) ret133560;
                          {
                              
                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((edges->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                      }
                                      
                                  }
                                  
                              }
                              
                              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((index133559) < (((x10_long) (((x10_int)0))))) ||
                                  ((index133559) >= (edges->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133559), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret133560 = (edges->FMGL(data))[index133559];
                          ret133560;
                      }))
                      )) & (sizeMask)));
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_int ret133561;
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_int r133554 = ((x10_int) (((__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index133555 = y133558;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret133556;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x133557->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index133555) < (((x10_int)0))) ||
                                ((((x10_long) (index133555))) >= (x133557->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133555), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret133556 = (x133557->FMGL(data))[index133555];
                        ret133556;
                    }))
                    ) + (((x10_int)1))));
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index133551 = y133558;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int value133552 = r133554;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret133553;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((x133557->FMGL(data)).isValid()))
                        {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index133551) < (((x10_int)0))) ||
                            ((((x10_long) (index133551))) >= (x133557->
                                                                FMGL(data)->
                                                                FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133551), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (x133557->FMGL(data)).set(index133551, value133552);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133553 = value133552;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret133553;
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133561 = r133554;
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Local_c
                    ret133561;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1715) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1715)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1715);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1715);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx133570;
    x10::lang::LongRange i_range133574;
    org::scalegraph::util::DistScatterGather scatterGather;
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> edges;
    x10_int sizeMask;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx133570);
        buf.write(this->i_range133574);
        buf.write(this->scatterGather);
        buf.write(this->saved_this);
        buf.write(this->edges);
        buf.write(this->sizeMask);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx133570 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range133574 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_edges = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        x10_int that_sizeMask = buf.read<x10_int>();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >(that_idx133570, that_i_range133574, that_scatterGather, that_saved_this, that_edges, that_sizeMask);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5(x10_int idx133570, x10::lang::LongRange i_range133574, org::scalegraph::util::DistScatterGather scatterGather, org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this, org::scalegraph::util::MemoryChunk<TPMGL(T)> edges, x10_int sizeMask) : idx133570(idx133570), i_range133574(i_range133574), scatterGather(scatterGather), saved_this(saved_this), edges(edges), sizeMask(sizeMask) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long tid133609 = ((x10_long) (idx133611));
            
            //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r133610 = i_range133615;
            
            //#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets133608 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                          ((x10_int) (tid133609)));
            
            //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i93366domain133603 = r133610;
            
            //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i93366min133604 = i93366domain133603->FMGL(min);
            
            //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i93366max133605 = i93366domain133603->FMGL(max);
            
            //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
            {
                x10_long i133606;
                for (
                     //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                     i133606 = i93366min133604; ((i133606) <= (i93366max133605));
                     
                     //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                     i133606 = ((x10_long) ((i133606) + (((x10_long)1ll)))))
                {
                    
                    //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_long i133607 = i133606;
                    
                    //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) e133596 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index133597 = i133607;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret133598;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((edges->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index133597) < (((x10_long) (((x10_int)0))))) ||
                                ((index133597) >= (edges->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133597), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret133598 = (edges->FMGL(data))[index133597];
                        ret133598;
                    }))
                    ;
                    
                    //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_int idx133599 = ((x10_int) (((__extension__ ({
                        
                        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x133600 =
                          offsets133608;
                        
                        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                        x10_int y133601 = ((x10_int) ((x10::lang::Fun_0_1<TPMGL(T), x10_int>::__apply(x10aux::nullCheck(saved_this->
                                                                                                                          FMGL(hashFunc)), 
                          e133596)) & (sizeMask)));
                        
                        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                        x10_int ret133602;
                        
                        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                        x10_int r133587 = ((x10_int) (((__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index133588 = y133601;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret133589;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x133600->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index133588) < (((x10_int)0))) ||
                                    ((((x10_long) (index133588))) >= (x133600->
                                                                        FMGL(data)->
                                                                        FMGL(size))))
                                {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133588), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret133589 = (x133600->FMGL(data))[index133588];
                            ret133589;
                        }))
                        ) + (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index133584 = y133601;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int value133585 = r133587;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret133586;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x133600->FMGL(data)).isValid()))
                            {
                                
                                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index133584) < (((x10_int)0))) ||
                                ((((x10_long) (index133584))) >= (x133600->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133584), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (x133600->FMGL(data)).set(index133584, value133585);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret133586 = value133585;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret133586;
                        
                        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                        ret133602 = r133587;
                        ret133602;
                    }))
                    ) - (((x10_int)1))));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index133590 = i133607;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int value133591 = idx133599;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret133592;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((indexes->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index133590) < (((x10_long) (((x10_int)0))))) ||
                            ((index133590) >= (indexes->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133590), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (indexes->FMGL(data)).set(index133590, value133591);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133592 = value133591;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret133592;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index133593 = idx133599;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value133594 = e133596;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret133595;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((partitioned->FMGL(data)).isValid()))
                        {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index133593) < (((x10_int)0))) ||
                            ((((x10_long) (index133593))) >= (partitioned->
                                                                FMGL(data)->
                                                                FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133593), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (partitioned->FMGL(data)).set(index133593, value133594);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133595 = value133594;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret133595;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1718) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1718)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1718);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1718);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx133611;
    x10::lang::LongRange i_range133615;
    org::scalegraph::util::DistScatterGather scatterGather;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> edges;
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this;
    x10_int sizeMask;
    org::scalegraph::util::MemoryChunk<x10_int> indexes;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> partitioned;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx133611);
        buf.write(this->i_range133615);
        buf.write(this->scatterGather);
        buf.write(this->edges);
        buf.write(this->saved_this);
        buf.write(this->sizeMask);
        buf.write(this->indexes);
        buf.write(this->partitioned);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx133611 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range133615 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_edges = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>();
        x10_int that_sizeMask = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_int> that_indexes = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_partitioned = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >(that_idx133611, that_i_range133615, that_scatterGather, that_edges, that_saved_this, that_sizeMask, that_indexes, that_partitioned);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6(x10_int idx133611, x10::lang::LongRange i_range133615, org::scalegraph::util::DistScatterGather scatterGather, org::scalegraph::util::MemoryChunk<TPMGL(T)> edges, org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this, x10_int sizeMask, org::scalegraph::util::MemoryChunk<x10_int> indexes, org::scalegraph::util::MemoryChunk<TPMGL(T)> partitioned) : idx133611(idx133611), i_range133615(i_range133615), scatterGather(scatterGather), edges(edges), saved_this(saved_this), sizeMask(sizeMask), indexes(indexes), partitioned(partitioned) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__6_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long tid133637 = ((x10_long) (idx133639));
            
            //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r133638 = i_range133643;
            
            //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i93385domain133632 = r133638;
            
            //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i93385min133633 = i93385domain133632->FMGL(min);
            
            //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i93385max133634 = i93385domain133632->FMGL(max);
            
            //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
            {
                x10_long i133635;
                for (
                     //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                     i133635 = i93385min133633; ((i133635) <= (i93385max133634));
                     
                     //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                     i133635 = ((x10_long) ((i133635) + (((x10_long)1ll)))))
                {
                    
                    //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_long i133636 = i133635;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index133625 = i133636;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value133626 = (__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index133627 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index133628 = i133636;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret133629;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((indexes->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index133628) < (((x10_long) (((x10_int)0))))) ||
                                    ((index133628) >= (indexes->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133628), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret133629 = (indexes->FMGL(data))[index133628];
                            ret133629;
                        }))
                        ;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret133630;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((recvTranslated->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index133627) < (((x10_int)0))) ||
                                ((((x10_long) (index133627))) >= (recvTranslated->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133627), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret133630 = (recvTranslated->FMGL(data))[index133627];
                        ret133630;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret133631;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((translated->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index133625) < (((x10_long) (((x10_int)0))))) ||
                            ((index133625) >= (translated->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133625), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (translated->FMGL(data)).set(index133625, value133626);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133631 = value133626;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret133631;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1721) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1721)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc1721);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1721);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__3__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx133639;
    x10::lang::LongRange i_range133643;
    org::scalegraph::util::MemoryChunk<x10_int> indexes;
    org::scalegraph::util::MemoryChunk<x10_long> recvTranslated;
    org::scalegraph::util::MemoryChunk<x10_long> translated;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx133639);
        buf.write(this->i_range133643);
        buf.write(this->indexes);
        buf.write(this->recvTranslated);
        buf.write(this->translated);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx133639 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range133643 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_int> that_indexes = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvTranslated = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_translated = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >(that_idx133639, that_i_range133643, that_indexes, that_recvTranslated, that_translated);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7(x10_int idx133639, x10::lang::LongRange i_range133643, org::scalegraph::util::MemoryChunk<x10_int> indexes, org::scalegraph::util::MemoryChunk<x10_long> recvTranslated, org::scalegraph::util::MemoryChunk<x10_long> translated) : idx133639(idx133639), i_range133643(i_range133643), indexes(indexes), recvTranslated(recvTranslated), translated(translated) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__7_CLOSURE

//#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10FieldDecl_c

//#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10FieldDecl_c

//#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10FieldDecl_c

//#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10FieldDecl_c

//#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10FieldDecl_c

//#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10FieldDecl_c

//#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::isTranslator(
  ) {
    
    //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return true;
    
}

//#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::sizeOfDictionary(
  ) {
    
    //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return ((x10_long) ((__extension__ ({
        
        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::HashMap<TPMGL(T), x10_long>* this133093 =
          this->FMGL(table);
        this133093->FMGL(size);
    }))
    ));
    
}

//#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_constructor(
                           x10::util::Team* team__, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNamesAtt__) {
    
    //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
    (this)->::org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_constructor(
      team__, vertexNamesAtt__, reinterpret_cast<x10::lang::Fun_0_1<TPMGL(T), x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<TPMGL(T), x10_int> >(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__2<TPMGL(T)>())));
    
}
template<class TPMGL(T)> org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_make(
                           x10::util::Team* team__, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNamesAtt__)
{
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)> >(), 0, sizeof(org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>))) org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>();
    this_->_constructor(team__, vertexNamesAtt__);
    return this_;
}



//#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_constructor(
                           x10::util::Team* team__, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNamesAtt__,
                           x10::lang::Fun_0_1<TPMGL(T), x10_int>* hashFunc__) {
    
    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::VertexTranslator<TPMGL(T)>* this133467 =
      this;
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team__133468 = team__;
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
    (this133467)->::org::scalegraph::graph::VertexTranslatorBase::_constructor(
      team__133468);
    
    //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.AssignPropertyCall_c
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::__fieldInitializers92967();
    
    //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(hashFunc) = hashFunc__;
    
    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(vertexNamesAtt) = vertexNamesAtt__;
    
    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(vertexNames) = (__extension__ ({
        
        //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(T)>* alloc93287 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(T)>))) org::scalegraph::util::GrowableMemory<TPMGL(T)>()))
        ;
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (alloc93287)->::org::scalegraph::util::GrowableMemory<TPMGL(T)>::_constructor(
          ((x10_long)0ll));
        alloc93287;
    }))
    ;
}
template<class TPMGL(T)> org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_make(
                           x10::util::Team* team__, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNamesAtt__,
                           x10::lang::Fun_0_1<TPMGL(T), x10_int>* hashFunc__)
{
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)> >(), 0, sizeof(org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>))) org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>();
    this_->_constructor(team__, vertexNamesAtt__, hashFunc__);
    return this_;
}



//#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::countToId(
  x10_long count) {
    
    //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return ((x10_long) ((((x10_long) ((count) * (((x10_long) (this->
                                                                FMGL(teamSize))))))) + (((x10_long) (this->
                                                                                                       FMGL(teamRank))))));
    
}

//#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::putLocalAndTranslate(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices, org::scalegraph::util::MemoryChunk<x10_long> translated) {
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i93290domain133485 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((vertices->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i93290max133486 = i93290domain133485->FMGL(max);
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
    {
        x10_long i133487;
        for (
             //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
             i133487 = ((x10_long)0ll); ((i133487) <= (i93290max133486));
             
             //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
             i133487 = ((x10_long) ((i133487) + (((x10_long)1ll)))))
        {
            
            //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i133488 = i133487;
            
            //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            TPMGL(T) key133478 = (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index133479 = i133488;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) ret133480;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((vertices->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index133479) < (((x10_long) (((x10_int)0))))) ||
                        ((index133479) >= (vertices->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133479), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret133480 = (vertices->FMGL(data))[index133479];
                ret133480;
            }))
            ;
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10If_c
            if ((__extension__ ({
                    
                    //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::HashMap<TPMGL(T), x10_long>* this133481 =
                      this->FMGL(table);
                    
                    //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) key133482 = key133478;
                    ((this133481->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::getEntryIndex(
                        key133482)) >= (((x10_int)0)));
                }))
                ) {
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index133469 = i133488;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value133470 = this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::getOrThrow(
                                         key133478);
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret133471;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((translated->FMGL(data)).isValid()))
                    {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index133469) < (((x10_long) (((x10_int)0))))) ||
                        ((index133469) >= (translated->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133469), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (translated->FMGL(data)).set(index133469, value133470);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret133471 = value133470;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret133471;
            } else {
                
                //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long count133483 = this->FMGL(count)->x10::util::concurrent::AtomicLong::getAndAdd(
                                         ((x10_long) (((x10_int)1))));
                
                //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long id133484 = this->countToId(count133483);
                
                //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::HashMap<TPMGL(T), x10_long>* this133472 =
                  this->FMGL(table);
                
                //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) k133473 = key133478;
                
                //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long v133474 = id133484;
                
                //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                this133472->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::putInternal(
                  k133473, v133474);
                
                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::add(
                  key133478);
                
                //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Assert_c
                #ifndef NO_ASSERTIONS
                if (x10aux::x10__assertions_enabled)
                    x10aux::x10__assert((x10aux::struct_equals(((x10_long) ((x10aux::nullCheck(this->
                                                                                                 FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::size()) - (((x10_long) (((x10_int)1)))))),
                                                               count133483)));
                #endif//NO_ASSERTIONS
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index133475 = i133488;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value133476 = id133484;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret133477;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((translated->FMGL(data)).isValid()))
                    {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index133475) < (((x10_long) (((x10_int)0))))) ||
                        ((index133475) >= (translated->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133475), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (translated->FMGL(data)).set(index133475, value133476);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret133477 = value133476;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret133477;
            }
            
        }
    }
    
    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return translated;
    
}

//#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::parallelPutLocalAndTranslate(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices, org::scalegraph::util::MemoryChunk<x10_long> translated) {
    
    //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> newKeys =
      this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::newKeys(
        vertices, ((x10_long)-1ll));
    
    //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> newIds =
      org::scalegraph::util::MemoryChunk<x10_long >::_make((__extension__ ({
        newKeys->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range133513 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((newIds->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size133509 = ((x10_long) ((((x10_long) ((range133513->
                                                        FMGL(max)) - (range133513->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads133510 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size133511 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a133512 = ((x10_long) ((((x10_long) ((((x10_long) ((size133509) + (((x10_long) (nthreads133510)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads133510)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a133512) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a133512);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var168 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable133707 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i74249max133506 = ((x10_int) ((nthreads133510) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i133507;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i133507 = ((x10_int)0); ((i133507) <= (i74249max133506));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i133507 = ((x10_int) ((i133507) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i133508 = i133507;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx133499 = i133508;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start133500 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a133501 = ((x10_long) ((range133513->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b133502 = ((x10_long) ((range133513->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i133508))) * (chunk_size133511))))));
                                    ((a133501) < (b133502))
                                      ? (a133501) : (b133502);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range133503 =
                                  x10::lang::LongRange::_make(i_start133500, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a133504 = range133513->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b133505 = ((x10_long) ((((x10_long) ((i_start133500) + (chunk_size133511)))) - (((x10_long) (((x10_int)1))))));
                                    ((a133504) < (b133505))
                                      ? (a133504) : (b133505);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T)>(idx133499, i_range133503, this, newIds))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1706) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1706);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1707) {
                if (true) {
                    x10::lang::CheckedThrowable* formal133708 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1707);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable133707 = formal133708;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable133707)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable133707))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable133707));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var168);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable133707)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable133707)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable133707));
                }
                
            }
            
        }
    }
    
    //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::put(
      newKeys, newIds);
    
    //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    this->FMGL(count)->x10::util::concurrent::AtomicLong::getAndAdd(
      (__extension__ ({
          newKeys->FMGL(data)->FMGL(size);
      }))
      );
    
    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> _translated =
      this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::get(
        vertices, ((x10_long)-1ll));
    
    //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<x10_long >(
      _translated, ((x10_long)0ll), translated, ((x10_long)0ll),
      (__extension__ ({
          _translated->FMGL(data)->FMGL(size);
      }))
      );
    
    //#line 169 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return translated;
    
}

//#line 172 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::putLocal(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices) {
    
    //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i93328domain133522 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((vertices->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i93328max133523 = i93328domain133522->FMGL(max);
    
    //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
    {
        x10_long i133524;
        for (
             //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
             i133524 = ((x10_long)0ll); ((i133524) <= (i93328max133523));
             
             //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
             i133524 = ((x10_long) ((i133524) + (((x10_long)1ll)))))
        {
            
            //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i133525 = i133524;
            
            //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            TPMGL(T) key133517 = (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index133518 = i133525;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) ret133519;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((vertices->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index133518) < (((x10_long) (((x10_int)0))))) ||
                        ((index133518) >= (vertices->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133518), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret133519 = (vertices->FMGL(data))[index133518];
                ret133519;
            }))
            ;
            
            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long count133520 = this->FMGL(count)->x10::util::concurrent::AtomicLong::getAndAdd(
                                     (__extension__ ({
                                         vertices->FMGL(data)->
                                           FMGL(size);
                                     }))
                                     );
            
            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long id133521 = this->countToId(count133520);
            
            //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::HashMap<TPMGL(T), x10_long>* this133514 =
              this->FMGL(table);
            
            //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            TPMGL(T) k133515 = key133517;
            
            //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long v133516 = id133521;
            
            //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
            this133514->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::putInternal(
              k133515, v133516);
            
            //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(this->FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::add(
              key133517);
            
            //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals(x10aux::nullCheck(this->
                                                                               FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::size(),
                                                           count133520)));
            #endif//NO_ASSERTIONS
            
        }
    }
    
}

//#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::translateLocal(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices, org::scalegraph::util::MemoryChunk<x10_long> translated) {
    
    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Try_c
    try {
        
        //#line 847 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange range133550 = (__extension__ ({
            x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((vertices->
                                                                         FMGL(data)->
                                                                         FMGL(size)) - (((x10_long)1ll)))));
        }))
        ;
        
        //#line 848 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long size133546 = ((x10_long) ((((x10_long) ((range133550->
                                                            FMGL(max)) - (range133550->
                                                                            FMGL(min))))) + (((x10_long) (((x10_int)1))))));
        
        //#line 849 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int nthreads133547 = x10::lang::Runtime::FMGL(NTHREADS__get)();
        
        //#line 850 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size133548 = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a133549 = ((x10_long) ((((x10_long) ((((x10_long) ((size133546) + (((x10_long) (nthreads133547)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads133547)))));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
            ;
            ((a133549) < (((x10_long)1ll))) ? (((x10_long)1ll))
              : (a133549);
        }))
        ;
        {
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var169 = x10::lang::Runtime::startFinish();
            {
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable133710 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i74213max133543 = ((x10_int) ((nthreads133547) - (((x10_int)1))));
                            
                            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i133544;
                                for (
                                     //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i133544 = ((x10_int)0);
                                     ((i133544) <= (i74213max133543));
                                     
                                     //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i133544 = ((x10_int) ((i133544) + (((x10_int)1)))))
                                {
                                    
                                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i133545 = i133544;
                                    
                                    //#line 852 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start133537 =
                                      (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a133538 =
                                          ((x10_long) ((range133550->
                                                          FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b133539 =
                                          ((x10_long) ((range133550->
                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i133545))) * (chunk_size133548))))));
                                        ((a133538) < (b133539))
                                          ? (a133538) : (b133539);
                                    }))
                                    ;
                                    
                                    //#line 853 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range133540 =
                                      x10::lang::LongRange::_make(i_start133537, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a133541 =
                                          range133550->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b133542 =
                                          ((x10_long) ((((x10_long) ((i_start133537) + (chunk_size133548)))) - (((x10_long) (((x10_int)1))))));
                                        ((a133541) < (b133542))
                                          ? (a133541) : (b133542);
                                    }))
                                    );
                                    
                                    //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T)>(i_range133540, this, vertices, translated))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc1711) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1711);
                            {
                                
                                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__0__);
                                
                                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc1712) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal133711 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1712);
                        {
                            
                            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable133710 = formal133711;
                        }
                    } else
                    throw;
                }
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable133710)))
                {
                    
                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable133710))
                    {
                        
                        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable133710));
                    }
                    
                }
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var169);
                }
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable133710)))
                {
                    
                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable133710)))
                    {
                        
                        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable133710));
                    }
                    
                }
                
            }
        }
    }
    catch (x10::lang::CheckedThrowable* __exc1713) {
        if (x10aux::instanceof<x10::util::NoSuchElementException*>(__exc1713)) {
            x10::util::NoSuchElementException* e = static_cast<x10::util::NoSuchElementException*>(__exc1713);
            {
                
                //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("Invalid vertex ID")));
                
                //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(e));
            }
        } else
        throw;
    }
}

//#line 197 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::innerPutWithAllAndTranslate(
  org::scalegraph::util::DistScatterGather scatterGather,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> edges, org::scalegraph::util::MemoryChunk<x10_long> translated,
  x10_boolean withPut) {
    
    //#line 199 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_int sizeMask = ((x10_int) ((this->FMGL(teamSize)) - (((x10_int)1))));
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range133653 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((edges->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size133580 = ((x10_long) ((((x10_long) ((range133653->
                                                        FMGL(max)) - (range133653->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads133581 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size133582 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a133583 = ((x10_long) ((((x10_long) ((((x10_long) ((size133580) + (((x10_long) (nthreads133581)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads133581)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a133583) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a133583);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var170 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable133713 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i74249max133577 = ((x10_int) ((nthreads133581) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i133578;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i133578 = ((x10_int)0); ((i133578) <= (i74249max133577));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i133578 = ((x10_int) ((i133578) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i133579 = i133578;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx133570 = i133579;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start133571 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a133572 = ((x10_long) ((range133653->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b133573 = ((x10_long) ((range133653->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i133579))) * (chunk_size133582))))));
                                    ((a133572) < (b133573))
                                      ? (a133572) : (b133573);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range133574 =
                                  x10::lang::LongRange::_make(i_start133571, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a133575 = range133653->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b133576 = ((x10_long) ((((x10_long) ((i_start133571) + (chunk_size133582)))) - (((x10_long) (((x10_int)1))))));
                                    ((a133575) < (b133576))
                                      ? (a133575) : (b133576);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T)>(idx133570, i_range133574, scatterGather, this, edges, sizeMask))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1716) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1716);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1717) {
                if (true) {
                    x10::lang::CheckedThrowable* formal133714 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1717);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable133713 = formal133714;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable133713)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable133713))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable133713));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var170);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable133713)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable133713)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable133713));
                }
                
            }
            
        }
    }
    
    //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    scatterGather->org::scalegraph::util::DistScatterGather::sum();
    
    //#line 206 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> partitioned =
      org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make((__extension__ ({
        edges->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> indexes =
      org::scalegraph::util::MemoryChunk<x10_int >::_make((__extension__ ({
        edges->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range133654 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((edges->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size133621 = ((x10_long) ((((x10_long) ((range133654->
                                                        FMGL(max)) - (range133654->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads133622 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size133623 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a133624 = ((x10_long) ((((x10_long) ((((x10_long) ((size133621) + (((x10_long) (nthreads133622)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads133622)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a133624) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a133624);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var171 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable133716 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i74249max133618 = ((x10_int) ((nthreads133622) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i133619;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i133619 = ((x10_int)0); ((i133619) <= (i74249max133618));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i133619 = ((x10_int) ((i133619) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i133620 = i133619;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx133611 = i133620;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start133612 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a133613 = ((x10_long) ((range133654->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b133614 = ((x10_long) ((range133654->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i133620))) * (chunk_size133623))))));
                                    ((a133613) < (b133614))
                                      ? (a133613) : (b133614);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range133615 =
                                  x10::lang::LongRange::_make(i_start133612, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a133616 = range133654->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b133617 = ((x10_long) ((((x10_long) ((i_start133612) + (chunk_size133623)))) - (((x10_long) (((x10_int)1))))));
                                    ((a133616) < (b133617))
                                      ? (a133616) : (b133617);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T)>(idx133611, i_range133615, scatterGather, edges, this, sizeMask, indexes, partitioned))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1719) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1719);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__1__);
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1720) {
                if (true) {
                    x10::lang::CheckedThrowable* formal133717 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1720);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable133716 = formal133717;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable133716)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable133716))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable133716));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var171);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable133716)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable133716)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable133716));
                }
                
            }
            
        }
    }
    
    //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> remoteData =
      scatterGather->template scatter<TPMGL(T) >(partitioned);
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (partitioned->FMGL(data)).del();
    
    //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> remoteTranslated =
      org::scalegraph::util::MemoryChunk<x10_long >::_make((__extension__ ({
        remoteData->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10If_c
    if (withPut) {
        
        //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
        this->putLocalAndTranslate(remoteData, remoteTranslated);
    } else {
        
        //#line 224 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
        this->translateLocal(remoteData, remoteTranslated);
    }
    
    //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> recvTranslated =
      org::scalegraph::util::MemoryChunk<x10_long >::_make((__extension__ ({
        edges->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    scatterGather->template gather<x10_long >(remoteTranslated,
                                              recvTranslated);
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (remoteTranslated->FMGL(data)).del();
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range133655 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((edges->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size133649 = ((x10_long) ((((x10_long) ((range133655->
                                                        FMGL(max)) - (range133655->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads133650 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size133651 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a133652 = ((x10_long) ((((x10_long) ((((x10_long) ((size133649) + (((x10_long) (nthreads133650)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads133650)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a133652) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a133652);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var172 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable133719 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i74249max133646 = ((x10_int) ((nthreads133650) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i133647;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i133647 = ((x10_int)0); ((i133647) <= (i74249max133646));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i133647 = ((x10_int) ((i133647) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i133648 = i133647;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx133639 = i133648;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start133640 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a133641 = ((x10_long) ((range133655->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b133642 = ((x10_long) ((range133655->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i133648))) * (chunk_size133651))))));
                                    ((a133641) < (b133642))
                                      ? (a133641) : (b133642);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range133643 =
                                  x10::lang::LongRange::_make(i_start133640, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a133644 = range133655->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b133645 = ((x10_long) ((((x10_long) ((i_start133640) + (chunk_size133651)))) - (((x10_long) (((x10_int)1))))));
                                    ((a133644) < (b133645))
                                      ? (a133644) : (b133645);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T)>(idx133639, i_range133643, indexes, recvTranslated, translated))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1722) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__2__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1722);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__2__);
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1723) {
                if (true) {
                    x10::lang::CheckedThrowable* formal133720 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1723);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable133719 = formal133720;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable133719)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable133719))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable133719));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var172);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable133719)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable133719)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable133719));
                }
                
            }
            
        }
    }
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (indexes->FMGL(data)).del();
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (recvTranslated->FMGL(data)).del();
}

//#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::translateWithAll(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> edges, x10_boolean withPut) {
    
    //#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long iterations = x10aux::nullCheck(this->FMGL(team))->allreduce(
                            this->FMGL(teamRank), ((x10_long) ((((x10_long) ((((x10_long) (((__extension__ ({
                                edges->FMGL(data)->FMGL(size);
                            }))
                            ) + (((x10_long)4194304ll))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long)4194304ll)))),
                            ((x10_int)9));
    
    //#line 246 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistScatterGather scatterGather =
       org::scalegraph::util::DistScatterGather::_alloc();
    
    //#line 246 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
    (scatterGather)->::org::scalegraph::util::DistScatterGather::_constructor(
      this->FMGL(team));
    
    //#line 247 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> translated =
      org::scalegraph::util::MemoryChunk<x10_long >::_make((__extension__ ({
        edges->FMGL(data)->FMGL(size);
    }))
    , 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 248 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>* edgesDist =
      (__extension__ ({
        (__extension__ ({
            
            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>* alloc133430 =
               ((new (memset(x10aux::alloc<org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>))) org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>()))
            ;
            
            //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> outer133656 =
              edges;
            
            //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc133430->FMGL(offset) = ((x10_long) (((x10_int)0)));
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc133430->FMGL(outer) = outer133656;
            alloc133430;
        }))
        ;
    }))
    ;
    
    //#line 249 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__Distributor<x10_long>* translatedDist =
      (__extension__ ({
        (__extension__ ({
            
            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk__Distributor<x10_long>* alloc133435 =
               ((new (memset(x10aux::alloc<org::scalegraph::util::MemoryChunk__Distributor<x10_long> >(), 0, sizeof(org::scalegraph::util::MemoryChunk__Distributor<x10_long>))) org::scalegraph::util::MemoryChunk__Distributor<x10_long>()))
            ;
            
            //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> outer133657 =
              translated;
            
            //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc133435->FMGL(offset) = ((x10_long) (((x10_int)0)));
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc133435->FMGL(outer) = outer133657;
            alloc133435;
        }))
        ;
    }))
    ;
    
    //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i93404min133660 = ((x10_long) (((x10_int)0)));
    
    //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i93404max133661 = ((x10_long) ((iterations) - (((x10_long) (((x10_int)1))))));
    
    //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
    {
        x10_long i133662;
        for (
             //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
             i133662 = i93404min133660; ((i133662) <= (i93404max133661));
             
             //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
             i133662 = ((x10_long) ((i133662) + (((x10_long)1ll)))))
        {
            
            //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long it133663 = i133662;
            
            //#line 251 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long size133658 = (__extension__ ({
                
                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                
                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long b133659 = edgesDist->remain();
                ((((x10_long)4194304ll)) < (b133659)) ? (((x10_long)4194304ll))
                  : (b133659);
            }))
            ;
            
            //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
            this->innerPutWithAllAndTranslate(scatterGather,
                                              edgesDist->next(
                                                size133658),
                                              translatedDist->next(
                                                size133658),
                                              withPut);
        }
    }
    
    //#line 255 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10If_c
    if (withPut) {
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(maxVertexID) = x10aux::nullCheck(this->
                                                      FMGL(team))->reduce(
                                    this->FMGL(teamRank),
                                    ((x10_int)0), ((x10_long) ((((x10_long) ((((x10_long) ((__extension__ ({
                                        
                                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::util::HashMap<TPMGL(T), x10_long>* this133442 =
                                          this->FMGL(table);
                                        this133442->FMGL(size);
                                    }))
                                    ))) * (((x10_long) (this->
                                                          FMGL(teamSize))))))) + (((x10_long) (this->
                                                                                                 FMGL(teamRank)))))),
                                    ((x10_int)9));
        
        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
        this->FMGL(vertexNamesAtt)->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__set(
          x10aux::nullCheck(this->FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::raw());
    }
    
    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    edgesDist->checkFinish();
    
    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    translatedDist->checkFinish();
    
    //#line 263 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return translated;
    
}

//#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*
  org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::org__scalegraph__graph__VertexTranslator__HashTranslator____this__org__scalegraph__graph__VertexTranslator__HashTranslator(
  ) {
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::__fieldInitializers92967(
  ) {
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(count) = x10::util::concurrent::AtomicLong::_make(((x10_long) (((x10_int)0))));
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(table) = (__extension__ ({
        
        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::HashMap<TPMGL(T), x10_long>* alloc93288 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::HashMap<TPMGL(T), x10_long> >(), 0, sizeof(org::scalegraph::util::HashMap<TPMGL(T), x10_long>))) org::scalegraph::util::HashMap<TPMGL(T), x10_long>()))
        ;
        
        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
        (alloc93288)->::org::scalegraph::util::HashMap<TPMGL(T), x10_long>::_constructor();
        alloc93288;
    }))
    ;
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(maxLocalId) = ((x10_int)0);
}
template<class TPMGL(T)> const x10aux::serialization_id_t org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::graph::VertexTranslator<TPMGL(T)>::_serialize_body(buf);
    buf.write(this->FMGL(count));
    buf.write(this->FMGL(hashFunc));
    buf.write(this->FMGL(table));
    buf.write(this->FMGL(vertexNamesAtt));
    buf.write(this->FMGL(vertexNames));
    buf.write(this->FMGL(maxLocalId));
    
}

template<class TPMGL(T)> x10::lang::Reference* org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)> >(), 0, sizeof(org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>))) org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::VertexTranslator<TPMGL(T)>::_deserialize_body(buf);
    FMGL(count) = buf.read<x10::util::concurrent::AtomicLong*>();
    FMGL(hashFunc) = buf.read<x10::lang::Fun_0_1<TPMGL(T), x10_int>*>();
    FMGL(table) = buf.read<org::scalegraph::util::HashMap<TPMGL(T), x10_long>*>();
    FMGL(vertexNamesAtt) = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
    FMGL(vertexNames) = buf.read<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>();
    FMGL(maxLocalId) = buf.read<x10_int>();
}

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR_H_NODEPS
