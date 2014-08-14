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
    virtual void __fieldInitializers93920();
    
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
            x10_long tid131836 = ((x10_long) (idx131838));
            
            //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r131837 = i_range131842;
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i94262domain131831 = r131837;
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i94262min131832 = i94262domain131831->FMGL(min);
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i94262max131833 = i94262domain131831->FMGL(max);
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
            {
                x10_long i131834;
                for (
                     //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                     i131834 = i94262min131832; ((i131834) <= (i94262max131833));
                     
                     //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                     i131834 = ((x10_long) ((i131834) + (((x10_long)1ll)))))
                {
                    
                    //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_long i131835 = i131834;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index131828 = i131835;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value131829 = ((x10_long) ((saved_this->
                                                           FMGL(count)->x10::util::concurrent::AtomicLong::get()) + (i131835)));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret131830;
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
                        if (((index131828) < (((x10_long) (((x10_int)0))))) ||
                            ((index131828) >= (newIds->FMGL(data)->
                                                 FMGL(size)))) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131828), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (newIds->FMGL(data)).set(index131828, value131829);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131830 = value131829;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret131830;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1510) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1510)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1510);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1510);
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
    x10_int idx131838;
    x10::lang::LongRange i_range131842;
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this;
    org::scalegraph::util::MemoryChunk<x10_long> newIds;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx131838);
        buf.write(this->i_range131842);
        buf.write(this->saved_this);
        buf.write(this->newIds);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx131838 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range131842 = buf.read<x10::lang::LongRange>();
        org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<x10_long> that_newIds = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >(that_idx131838, that_i_range131842, that_saved_this, that_newIds);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3(x10_int idx131838, x10::lang::LongRange i_range131842, org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this, org::scalegraph::util::MemoryChunk<x10_long> newIds) : idx131838(idx131838), i_range131842(i_range131842), saved_this(saved_this), newIds(newIds) { }
    
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
            x10::lang::LongRange i75975domain131871 = i_range131879;
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i75975min131872 = i75975domain131871->FMGL(min);
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i75975max131873 = i75975domain131871->FMGL(max);
            
            //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_long i131874;
                for (
                     //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i131874 = i75975min131872; ((i131874) <= (i75975max131873));
                     
                     //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i131874 = ((x10_long) ((i131874) + (((x10_long)1ll)))))
                {
                    
                    //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long ii131875 = i131874;
                    
                    //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_long i131870 = ii131875;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index131865 = i131870;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value131866 = saved_this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::getOrThrow(
                                             (__extension__ ({
                                                 
                                                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                 x10_long index131867 =
                                                   i131870;
                                                 
                                                 //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                 TPMGL(T) ret131868;
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
                                                     if (((index131867) < (((x10_long) (((x10_int)0))))) ||
                                                         ((index131867) >= (vertices->
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
                                                                 x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131867), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                             }
                                                             
                                                         }
                                                         
                                                     }
                                                     
                                                 }
                                                 
                                                 //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                 ret131868 =
                                                   (vertices->
                                                      FMGL(data))[index131867];
                                                 ret131868;
                                             }))
                                             );
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret131869;
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
                        if (((index131865) < (((x10_long) (((x10_int)0))))) ||
                            ((index131865) >= (translated->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131865), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (translated->FMGL(data)).set(index131865, value131866);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131869 = value131866;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret131869;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1515) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1515)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1515);
                {
                    
                    //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1515);
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
    x10::lang::LongRange i_range131879;
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices;
    org::scalegraph::util::MemoryChunk<x10_long> translated;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_range131879);
        buf.write(this->saved_this);
        buf.write(this->vertices);
        buf.write(this->translated);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::lang::LongRange that_i_range131879 = buf.read<x10::lang::LongRange>();
        org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_vertices = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_translated = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >(that_i_range131879, that_saved_this, that_vertices, that_translated);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4(x10::lang::LongRange i_range131879, org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this, org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices, org::scalegraph::util::MemoryChunk<x10_long> translated) : i_range131879(i_range131879), saved_this(saved_this), vertices(vertices), translated(translated) { }
    
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
            x10_long tid131907 = ((x10_long) (idx131909));
            
            //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r131908 = i_range131913;
            
            //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts131906 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                         ((x10_int) (tid131907)));
            
            //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i94300domain131901 = r131908;
            
            //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i94300min131902 = i94300domain131901->FMGL(min);
            
            //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i94300max131903 = i94300domain131901->FMGL(max);
            
            //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
            {
                x10_long i131904;
                for (
                     //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                     i131904 = i94300min131902; ((i131904) <= (i94300max131903));
                     
                     //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                     i131904 = ((x10_long) ((i131904) + (((x10_long)1ll)))))
                {
                    
                    //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_long i131905 = i131904;
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x131896 =
                      counts131906;
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_int y131897 = ((x10_int) ((x10::lang::Fun_0_1<TPMGL(T), x10_int>::__apply(x10aux::nullCheck(saved_this->
                                                                                                                      FMGL(hashFunc)), 
                      (__extension__ ({
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index131898 = i131905;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          TPMGL(T) ret131899;
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
                              if (((index131898) < (((x10_long) (((x10_int)0))))) ||
                                  ((index131898) >= (edges->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131898), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                      }
                                      
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret131899 = (edges->FMGL(data))[index131898];
                          ret131899;
                      }))
                      )) & (sizeMask)));
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_int ret131900;
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_int r131893 = ((x10_int) (((__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index131894 = y131897;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret131895;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x131896->FMGL(data)).isValid()))
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
                            if (((index131894) < (((x10_int)0))) ||
                                ((((x10_long) (index131894))) >= (x131896->
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
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131894), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret131895 = (x131896->FMGL(data))[index131894];
                        ret131895;
                    }))
                    ) + (((x10_int)1))));
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index131890 = y131897;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int value131891 = r131893;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret131892;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((x131896->FMGL(data)).isValid()))
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
                        if (((index131890) < (((x10_int)0))) ||
                            ((((x10_long) (index131890))) >= (x131896->
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
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131890), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (x131896->FMGL(data)).set(index131890, value131891);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131892 = value131891;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret131892;
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131900 = r131893;
                    
                    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Local_c
                    ret131900;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1520) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1520)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1520);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1520);
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
    x10_int idx131909;
    x10::lang::LongRange i_range131913;
    org::scalegraph::util::DistScatterGather scatterGather;
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> edges;
    x10_int sizeMask;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx131909);
        buf.write(this->i_range131913);
        buf.write(this->scatterGather);
        buf.write(this->saved_this);
        buf.write(this->edges);
        buf.write(this->sizeMask);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx131909 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range131913 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_edges = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        x10_int that_sizeMask = buf.read<x10_int>();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >(that_idx131909, that_i_range131913, that_scatterGather, that_saved_this, that_edges, that_sizeMask);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5(x10_int idx131909, x10::lang::LongRange i_range131913, org::scalegraph::util::DistScatterGather scatterGather, org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this, org::scalegraph::util::MemoryChunk<TPMGL(T)> edges, x10_int sizeMask) : idx131909(idx131909), i_range131913(i_range131913), scatterGather(scatterGather), saved_this(saved_this), edges(edges), sizeMask(sizeMask) { }
    
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
            x10_long tid131948 = ((x10_long) (idx131950));
            
            //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r131949 = i_range131954;
            
            //#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets131947 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                          ((x10_int) (tid131948)));
            
            //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i94319domain131942 = r131949;
            
            //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i94319min131943 = i94319domain131942->FMGL(min);
            
            //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i94319max131944 = i94319domain131942->FMGL(max);
            
            //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
            {
                x10_long i131945;
                for (
                     //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                     i131945 = i94319min131943; ((i131945) <= (i94319max131944));
                     
                     //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                     i131945 = ((x10_long) ((i131945) + (((x10_long)1ll)))))
                {
                    
                    //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_long i131946 = i131945;
                    
                    //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) e131935 = (__extension__ ({
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index131936 = i131946;
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        TPMGL(T) ret131937;
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
                            if (((index131936) < (((x10_long) (((x10_int)0))))) ||
                                ((index131936) >= (edges->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131936), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret131937 = (edges->FMGL(data))[index131936];
                        ret131937;
                    }))
                    ;
                    
                    //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_int idx131938 = ((x10_int) (((__extension__ ({
                        
                        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x131939 =
                          offsets131947;
                        
                        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                        x10_int y131940 = ((x10_int) ((x10::lang::Fun_0_1<TPMGL(T), x10_int>::__apply(x10aux::nullCheck(saved_this->
                                                                                                                          FMGL(hashFunc)), 
                          e131935)) & (sizeMask)));
                        
                        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                        x10_int ret131941;
                        
                        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                        x10_int r131926 = ((x10_int) (((__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index131927 = y131940;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret131928;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x131939->FMGL(data)).isValid()))
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
                                if (((index131927) < (((x10_int)0))) ||
                                    ((((x10_long) (index131927))) >= (x131939->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131927), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret131928 = (x131939->FMGL(data))[index131927];
                            ret131928;
                        }))
                        ) + (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index131923 = y131940;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int value131924 = r131926;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret131925;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x131939->FMGL(data)).isValid()))
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
                            if (((index131923) < (((x10_int)0))) ||
                                ((((x10_long) (index131923))) >= (x131939->
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
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131923), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (x131939->FMGL(data)).set(index131923, value131924);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret131925 = value131924;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret131925;
                        
                        //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                        ret131941 = r131926;
                        ret131941;
                    }))
                    ) - (((x10_int)1))));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index131929 = i131946;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int value131930 = idx131938;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret131931;
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
                        if (((index131929) < (((x10_long) (((x10_int)0))))) ||
                            ((index131929) >= (indexes->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131929), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (indexes->FMGL(data)).set(index131929, value131930);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131931 = value131930;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret131931;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index131932 = idx131938;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) value131933 = e131935;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) ret131934;
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
                        if (((index131932) < (((x10_int)0))) ||
                            ((((x10_long) (index131932))) >= (partitioned->
                                                                FMGL(data)->
                                                                FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131932), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (partitioned->FMGL(data)).set(index131932, value131933);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131934 = value131933;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret131934;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1523) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1523)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc1523);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1523);
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
    x10_int idx131950;
    x10::lang::LongRange i_range131954;
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
        buf.write(this->idx131950);
        buf.write(this->i_range131954);
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
        x10_int that_idx131950 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range131954 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_edges = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>();
        x10_int that_sizeMask = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_int> that_indexes = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_partitioned = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >(that_idx131950, that_i_range131954, that_scatterGather, that_edges, that_saved_this, that_sizeMask, that_indexes, that_partitioned);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6(x10_int idx131950, x10::lang::LongRange i_range131954, org::scalegraph::util::DistScatterGather scatterGather, org::scalegraph::util::MemoryChunk<TPMGL(T)> edges, org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this, x10_int sizeMask, org::scalegraph::util::MemoryChunk<x10_int> indexes, org::scalegraph::util::MemoryChunk<TPMGL(T)> partitioned) : idx131950(idx131950), i_range131954(i_range131954), scatterGather(scatterGather), edges(edges), saved_this(saved_this), sizeMask(sizeMask), indexes(indexes), partitioned(partitioned) { }
    
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
            x10_long tid131976 = ((x10_long) (idx131978));
            
            //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r131977 = i_range131982;
            
            //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i94338domain131971 = r131977;
            
            //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i94338min131972 = i94338domain131971->FMGL(min);
            
            //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i94338max131973 = i94338domain131971->FMGL(max);
            
            //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
            {
                x10_long i131974;
                for (
                     //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                     i131974 = i94338min131972; ((i131974) <= (i94338max131973));
                     
                     //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                     i131974 = ((x10_long) ((i131974) + (((x10_long)1ll)))))
                {
                    
                    //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_long i131975 = i131974;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index131964 = i131975;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value131965 = (__extension__ ({
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index131966 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index131967 = i131975;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret131968;
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
                                if (((index131967) < (((x10_long) (((x10_int)0))))) ||
                                    ((index131967) >= (indexes->
                                                         FMGL(data)->
                                                         FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131967), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret131968 = (indexes->FMGL(data))[index131967];
                            ret131968;
                        }))
                        ;
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret131969;
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
                            if (((index131966) < (((x10_int)0))) ||
                                ((((x10_long) (index131966))) >= (recvTranslated->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131966), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret131969 = (recvTranslated->FMGL(data))[index131966];
                        ret131969;
                    }))
                    ;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret131970;
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
                        if (((index131964) < (((x10_long) (((x10_int)0))))) ||
                            ((index131964) >= (translated->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131964), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (translated->FMGL(data)).set(index131964, value131965);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131970 = value131965;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret131970;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1526) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1526)) {
                x10::lang::Error* __lowerer__var__2__ = static_cast<x10::lang::Error*>(__exc1526);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__2__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__3__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1526);
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
    x10_int idx131978;
    x10::lang::LongRange i_range131982;
    org::scalegraph::util::MemoryChunk<x10_int> indexes;
    org::scalegraph::util::MemoryChunk<x10_long> recvTranslated;
    org::scalegraph::util::MemoryChunk<x10_long> translated;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx131978);
        buf.write(this->i_range131982);
        buf.write(this->indexes);
        buf.write(this->recvTranslated);
        buf.write(this->translated);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_idx131978 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range131982 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::MemoryChunk<x10_int> that_indexes = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvTranslated = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_translated = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >(that_idx131978, that_i_range131982, that_indexes, that_recvTranslated, that_translated);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7(x10_int idx131978, x10::lang::LongRange i_range131982, org::scalegraph::util::MemoryChunk<x10_int> indexes, org::scalegraph::util::MemoryChunk<x10_long> recvTranslated, org::scalegraph::util::MemoryChunk<x10_long> translated) : idx131978(idx131978), i_range131982(i_range131982), indexes(indexes), recvTranslated(recvTranslated), translated(translated) { }
    
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
        org::scalegraph::util::HashMap<TPMGL(T), x10_long>* this131432 =
          this->FMGL(table);
        this131432->FMGL(size);
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
    org::scalegraph::graph::VertexTranslator<TPMGL(T)>* this131806 =
      this;
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team__131807 = team__;
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
    (this131806)->::org::scalegraph::graph::VertexTranslatorBase::_constructor(
      team__131807);
    
    //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.AssignPropertyCall_c
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::__fieldInitializers93920();
    
    //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(hashFunc) = hashFunc__;
    
    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(vertexNamesAtt) = vertexNamesAtt__;
    
    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(vertexNames) = (__extension__ ({
        
        //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(T)>* alloc94240 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(T)>))) org::scalegraph::util::GrowableMemory<TPMGL(T)>()))
        ;
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (alloc94240)->::org::scalegraph::util::GrowableMemory<TPMGL(T)>::_constructor(
          ((x10_long)0ll));
        alloc94240;
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
    x10::lang::LongRange i94243domain131824 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((vertices->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i94243max131825 = i94243domain131824->FMGL(max);
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
    {
        x10_long i131826;
        for (
             //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
             i131826 = ((x10_long)0ll); ((i131826) <= (i94243max131825));
             
             //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
             i131826 = ((x10_long) ((i131826) + (((x10_long)1ll)))))
        {
            
            //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i131827 = i131826;
            
            //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            TPMGL(T) key131817 = (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index131818 = i131827;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) ret131819;
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
                    if (((index131818) < (((x10_long) (((x10_int)0))))) ||
                        ((index131818) >= (vertices->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131818), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret131819 = (vertices->FMGL(data))[index131818];
                ret131819;
            }))
            ;
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10If_c
            if ((__extension__ ({
                    
                    //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::HashMap<TPMGL(T), x10_long>* this131820 =
                      this->FMGL(table);
                    
                    //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                    TPMGL(T) key131821 = key131817;
                    ((this131820->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::getEntryIndex(
                        key131821)) >= (((x10_int)0)));
                }))
                ) {
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index131808 = i131827;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value131809 = this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::getOrThrow(
                                         key131817);
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret131810;
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
                    if (((index131808) < (((x10_long) (((x10_int)0))))) ||
                        ((index131808) >= (translated->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131808), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (translated->FMGL(data)).set(index131808, value131809);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret131810 = value131809;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret131810;
            } else {
                
                //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long count131822 = this->FMGL(count)->x10::util::concurrent::AtomicLong::getAndAdd(
                                         ((x10_long) (((x10_int)1))));
                
                //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long id131823 = this->countToId(count131822);
                
                //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::HashMap<TPMGL(T), x10_long>* this131811 =
                  this->FMGL(table);
                
                //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) k131812 = key131817;
                
                //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                x10_long v131813 = id131823;
                
                //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
                this131811->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::putInternal(
                  k131812, v131813);
                
                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::add(
                  key131817);
                
                //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Assert_c
                #ifndef NO_ASSERTIONS
                if (x10aux::x10__assertions_enabled)
                    x10aux::x10__assert((x10aux::struct_equals(((x10_long) ((x10aux::nullCheck(this->
                                                                                                 FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::size()) - (((x10_long) (((x10_int)1)))))),
                                                               count131822)));
                #endif//NO_ASSERTIONS
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index131814 = i131827;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value131815 = id131823;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret131816;
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
                    if (((index131814) < (((x10_long) (((x10_int)0))))) ||
                        ((index131814) >= (translated->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131814), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (translated->FMGL(data)).set(index131814, value131815);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret131816 = value131815;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret131816;
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
    x10::lang::LongRange range131852 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((newIds->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size131848 = ((x10_long) ((((x10_long) ((range131852->
                                                        FMGL(max)) - (range131852->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads131849 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size131850 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a131851 = ((x10_long) ((((x10_long) ((((x10_long) ((size131848) + (((x10_long) (nthreads131849)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads131849)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a131851) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a131851);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var164 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable132046 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i76030max131845 = ((x10_int) ((nthreads131849) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i131846;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i131846 = ((x10_int)0); ((i131846) <= (i76030max131845));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i131846 = ((x10_int) ((i131846) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i131847 = i131846;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx131838 = i131847;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start131839 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a131840 = ((x10_long) ((range131852->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b131841 = ((x10_long) ((range131852->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i131847))) * (chunk_size131850))))));
                                    ((a131840) < (b131841))
                                      ? (a131840) : (b131841);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range131842 =
                                  x10::lang::LongRange::_make(i_start131839, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a131843 = range131852->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b131844 = ((x10_long) ((((x10_long) ((i_start131839) + (chunk_size131850)))) - (((x10_long) (((x10_int)1))))));
                                    ((a131843) < (b131844))
                                      ? (a131843) : (b131844);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T)>(idx131838, i_range131842, this, newIds))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1511) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1511);
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
            catch (x10::lang::CheckedThrowable* __exc1512) {
                if (true) {
                    x10::lang::CheckedThrowable* formal132047 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1512);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable132046 = formal132047;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable132046)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable132046))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable132046));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var164);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable132046)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable132046)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable132046));
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
    x10::lang::LongRange i94281domain131861 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((vertices->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i94281max131862 = i94281domain131861->FMGL(max);
    
    //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
    {
        x10_long i131863;
        for (
             //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
             i131863 = ((x10_long)0ll); ((i131863) <= (i94281max131862));
             
             //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
             i131863 = ((x10_long) ((i131863) + (((x10_long)1ll)))))
        {
            
            //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i131864 = i131863;
            
            //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            TPMGL(T) key131856 = (__extension__ ({
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index131857 = i131864;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) ret131858;
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
                    if (((index131857) < (((x10_long) (((x10_int)0))))) ||
                        ((index131857) >= (vertices->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131857), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret131858 = (vertices->FMGL(data))[index131857];
                ret131858;
            }))
            ;
            
            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long count131859 = this->FMGL(count)->x10::util::concurrent::AtomicLong::getAndAdd(
                                     (__extension__ ({
                                         vertices->FMGL(data)->
                                           FMGL(size);
                                     }))
                                     );
            
            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long id131860 = this->countToId(count131859);
            
            //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::HashMap<TPMGL(T), x10_long>* this131853 =
              this->FMGL(table);
            
            //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            TPMGL(T) k131854 = key131856;
            
            //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
            x10_long v131855 = id131860;
            
            //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10Call_c
            this131853->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::putInternal(
              k131854, v131855);
            
            //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(this->FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::add(
              key131856);
            
            //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals(x10aux::nullCheck(this->
                                                                               FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::size(),
                                                           count131859)));
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
        x10::lang::LongRange range131889 = (__extension__ ({
            x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((vertices->
                                                                         FMGL(data)->
                                                                         FMGL(size)) - (((x10_long)1ll)))));
        }))
        ;
        
        //#line 848 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long size131885 = ((x10_long) ((((x10_long) ((range131889->
                                                            FMGL(max)) - (range131889->
                                                                            FMGL(min))))) + (((x10_long) (((x10_int)1))))));
        
        //#line 849 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int nthreads131886 = x10::lang::Runtime::FMGL(NTHREADS__get)();
        
        //#line 850 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size131887 = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a131888 = ((x10_long) ((((x10_long) ((((x10_long) ((size131885) + (((x10_long) (nthreads131886)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads131886)))));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
            ;
            ((a131888) < (((x10_long)1ll))) ? (((x10_long)1ll))
              : (a131888);
        }))
        ;
        {
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var165 = x10::lang::Runtime::startFinish();
            {
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable132049 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i75994max131882 = ((x10_int) ((nthreads131886) - (((x10_int)1))));
                            
                            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i131883;
                                for (
                                     //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i131883 = ((x10_int)0);
                                     ((i131883) <= (i75994max131882));
                                     
                                     //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i131883 = ((x10_int) ((i131883) + (((x10_int)1)))))
                                {
                                    
                                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i131884 = i131883;
                                    
                                    //#line 852 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start131876 =
                                      (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a131877 =
                                          ((x10_long) ((range131889->
                                                          FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b131878 =
                                          ((x10_long) ((range131889->
                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i131884))) * (chunk_size131887))))));
                                        ((a131877) < (b131878))
                                          ? (a131877) : (b131878);
                                    }))
                                    ;
                                    
                                    //#line 853 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range131879 =
                                      x10::lang::LongRange::_make(i_start131876, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a131880 =
                                          range131889->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b131881 =
                                          ((x10_long) ((((x10_long) ((i_start131876) + (chunk_size131887)))) - (((x10_long) (((x10_int)1))))));
                                        ((a131880) < (b131881))
                                          ? (a131880) : (b131881);
                                    }))
                                    );
                                    
                                    //#line 854 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T)>(i_range131879, this, vertices, translated))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc1516) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1516);
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
                catch (x10::lang::CheckedThrowable* __exc1517) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal132050 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1517);
                        {
                            
                            //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable132049 = formal132050;
                        }
                    } else
                    throw;
                }
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable132049)))
                {
                    
                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable132049))
                    {
                        
                        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable132049));
                    }
                    
                }
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var165);
                }
                
                //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable132049)))
                {
                    
                    //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable132049)))
                    {
                        
                        //#line 851 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable132049));
                    }
                    
                }
                
            }
        }
    }
    catch (x10::lang::CheckedThrowable* __exc1518) {
        if (x10aux::instanceof<x10::util::NoSuchElementException*>(__exc1518)) {
            x10::util::NoSuchElementException* e = static_cast<x10::util::NoSuchElementException*>(__exc1518);
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
    x10::lang::LongRange range131992 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((edges->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size131919 = ((x10_long) ((((x10_long) ((range131992->
                                                        FMGL(max)) - (range131992->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads131920 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size131921 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a131922 = ((x10_long) ((((x10_long) ((((x10_long) ((size131919) + (((x10_long) (nthreads131920)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads131920)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a131922) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a131922);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var166 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable132052 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i76030max131916 = ((x10_int) ((nthreads131920) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i131917;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i131917 = ((x10_int)0); ((i131917) <= (i76030max131916));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i131917 = ((x10_int) ((i131917) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i131918 = i131917;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx131909 = i131918;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start131910 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a131911 = ((x10_long) ((range131992->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b131912 = ((x10_long) ((range131992->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i131918))) * (chunk_size131921))))));
                                    ((a131911) < (b131912))
                                      ? (a131911) : (b131912);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range131913 =
                                  x10::lang::LongRange::_make(i_start131910, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a131914 = range131992->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b131915 = ((x10_long) ((((x10_long) ((i_start131910) + (chunk_size131921)))) - (((x10_long) (((x10_int)1))))));
                                    ((a131914) < (b131915))
                                      ? (a131914) : (b131915);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T)>(idx131909, i_range131913, scatterGather, this, edges, sizeMask))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1521) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1521);
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
            catch (x10::lang::CheckedThrowable* __exc1522) {
                if (true) {
                    x10::lang::CheckedThrowable* formal132053 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1522);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable132052 = formal132053;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable132052)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable132052))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable132052));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var166);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable132052)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable132052)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable132052));
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
    x10::lang::LongRange range131993 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((edges->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size131960 = ((x10_long) ((((x10_long) ((range131993->
                                                        FMGL(max)) - (range131993->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads131961 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size131962 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a131963 = ((x10_long) ((((x10_long) ((((x10_long) ((size131960) + (((x10_long) (nthreads131961)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads131961)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a131963) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a131963);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var167 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable132055 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i76030max131957 = ((x10_int) ((nthreads131961) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i131958;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i131958 = ((x10_int)0); ((i131958) <= (i76030max131957));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i131958 = ((x10_int) ((i131958) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i131959 = i131958;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx131950 = i131959;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start131951 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a131952 = ((x10_long) ((range131993->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b131953 = ((x10_long) ((range131993->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i131959))) * (chunk_size131962))))));
                                    ((a131952) < (b131953))
                                      ? (a131952) : (b131953);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range131954 =
                                  x10::lang::LongRange::_make(i_start131951, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a131955 = range131993->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b131956 = ((x10_long) ((((x10_long) ((i_start131951) + (chunk_size131962)))) - (((x10_long) (((x10_int)1))))));
                                    ((a131955) < (b131956))
                                      ? (a131955) : (b131956);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T)>(idx131950, i_range131954, scatterGather, edges, this, sizeMask, indexes, partitioned))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1524) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__1__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1524);
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
            catch (x10::lang::CheckedThrowable* __exc1525) {
                if (true) {
                    x10::lang::CheckedThrowable* formal132056 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1525);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable132055 = formal132056;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable132055)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable132055))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable132055));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var167);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable132055)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable132055)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable132055));
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
    x10::lang::LongRange range131994 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((edges->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size131988 = ((x10_long) ((((x10_long) ((range131994->
                                                        FMGL(max)) - (range131994->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads131989 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size131990 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a131991 = ((x10_long) ((((x10_long) ((((x10_long) ((size131988) + (((x10_long) (nthreads131989)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads131989)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a131991) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a131991);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var168 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable132058 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i76030max131985 = ((x10_int) ((nthreads131989) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i131986;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i131986 = ((x10_int)0); ((i131986) <= (i76030max131985));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i131986 = ((x10_int) ((i131986) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i131987 = i131986;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx131978 = i131987;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start131979 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a131980 = ((x10_long) ((range131994->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b131981 = ((x10_long) ((range131994->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i131987))) * (chunk_size131990))))));
                                    ((a131980) < (b131981))
                                      ? (a131980) : (b131981);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range131982 =
                                  x10::lang::LongRange::_make(i_start131979, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a131983 = range131994->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b131984 = ((x10_long) ((((x10_long) ((i_start131979) + (chunk_size131990)))) - (((x10_long) (((x10_int)1))))));
                                    ((a131983) < (b131984))
                                      ? (a131983) : (b131984);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T)>(idx131978, i_range131982, indexes, recvTranslated, translated))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1527) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__2__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1527);
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
            catch (x10::lang::CheckedThrowable* __exc1528) {
                if (true) {
                    x10::lang::CheckedThrowable* formal132059 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1528);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable132058 = formal132059;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable132058)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable132058))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable132058));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var168);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable132058)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable132058)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable132058));
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
            org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>* alloc131769 =
               ((new (memset(x10aux::alloc<org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>))) org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>()))
            ;
            
            //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> outer131995 =
              edges;
            
            //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc131769->FMGL(offset) = ((x10_long) (((x10_int)0)));
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc131769->FMGL(outer) = outer131995;
            alloc131769;
        }))
        ;
    }))
    ;
    
    //#line 249 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__Distributor<x10_long>* translatedDist =
      (__extension__ ({
        (__extension__ ({
            
            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk__Distributor<x10_long>* alloc131774 =
               ((new (memset(x10aux::alloc<org::scalegraph::util::MemoryChunk__Distributor<x10_long> >(), 0, sizeof(org::scalegraph::util::MemoryChunk__Distributor<x10_long>))) org::scalegraph::util::MemoryChunk__Distributor<x10_long>()))
            ;
            
            //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> outer131996 =
              translated;
            
            //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc131774->FMGL(offset) = ((x10_long) (((x10_int)0)));
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc131774->FMGL(outer) = outer131996;
            alloc131774;
        }))
        ;
    }))
    ;
    
    //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i94357min131999 = ((x10_long) (((x10_int)0)));
    
    //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i94357max132000 = ((x10_long) ((iterations) - (((x10_long) (((x10_int)1))))));
    
    //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
    {
        x10_long i132001;
        for (
             //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
             i132001 = i94357min131999; ((i132001) <= (i94357max132000));
             
             //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
             i132001 = ((x10_long) ((i132001) + (((x10_long)1ll)))))
        {
            
            //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long it132002 = i132001;
            
            //#line 251 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long size131997 = (__extension__ ({
                
                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                
                //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long b131998 = edgesDist->remain();
                ((((x10_long)4194304ll)) < (b131998)) ? (((x10_long)4194304ll))
                  : (b131998);
            }))
            ;
            
            //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
            this->innerPutWithAllAndTranslate(scatterGather,
                                              edgesDist->next(
                                                size131997),
                                              translatedDist->next(
                                                size131997),
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
                                        org::scalegraph::util::HashMap<TPMGL(T), x10_long>* this131781 =
                                          this->FMGL(table);
                                        this131781->FMGL(size);
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
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::__fieldInitializers93920(
  ) {
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(count) = x10::util::concurrent::AtomicLong::_make(((x10_long) (((x10_int)0))));
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(table) = (__extension__ ({
        
        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::HashMap<TPMGL(T), x10_long>* alloc94241 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::HashMap<TPMGL(T), x10_long> >(), 0, sizeof(org::scalegraph::util::HashMap<TPMGL(T), x10_long>))) org::scalegraph::util::HashMap<TPMGL(T), x10_long>()))
        ;
        
        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
        (alloc94241)->::org::scalegraph::util::HashMap<TPMGL(T), x10_long>::_constructor();
        alloc94241;
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
