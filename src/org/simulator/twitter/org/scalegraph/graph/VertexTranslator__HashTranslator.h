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
namespace x10 { namespace util { 
template<class TPMGL(T)> class Box;
} } 
namespace org { namespace scalegraph { namespace util { 
class Parallel;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
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
namespace x10 { namespace lang { 
class Math;
} } 
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
    virtual void __fieldInitializers48962();
    
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
#include <x10/util/Box.h>
#include <org/scalegraph/util/Parallel.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/util/NoSuchElementException.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <org/scalegraph/util/DistScatterGather.h>
#include <org/scalegraph/util/MemoryChunk__Distributor.h>
#include <x10/lang/Math.h>
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
        
        //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:111";
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
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i49285domain49439 = r;
        
        //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i49285min49440 = i49285domain49439->FMGL(min);
        
        //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i49285max49441 = i49285domain49439->FMGL(max);
        
        //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
        {
            x10_long i49442;
            for (
                 //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                 i49442 = i49285min49440; ((i49442) <= (i49285max49441));
                 
                 //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                 i49442 = ((x10_long) ((i49442) + (((x10_long)1ll))))) {
                
                //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long i49443 = i49442;
                
                //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                newIds->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  i49443, ((x10_long) ((saved_this->FMGL(count)->x10::util::concurrent::AtomicLong::get()) + (i49443))));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> newIds;
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->newIds);
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_newIds = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >(that_newIds, that_saved_this);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3(org::scalegraph::util::MemoryChunk<x10_long> newIds, org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this) : newIds(newIds), saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:160-164";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_1<x10_long>::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long i) {
        
        //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
        translated->org::scalegraph::util::MemoryChunk<x10_long>::__set(i,
                                                                        saved_this->
                                                                          FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::getOrThrow(
                                                                          vertices->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                                            i)));
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> translated;
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->translated);
        buf.write(this->saved_this);
        buf.write(this->vertices);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_translated = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_vertices = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >(that_translated, that_saved_this, that_vertices);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4(org::scalegraph::util::MemoryChunk<x10_long> translated, org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this, org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices) : translated(translated), saved_this(saved_this), vertices(vertices) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_1<x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_1<x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:186-188";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_1<x10_long>::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_1<x10_long> >, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> counts = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                               ((x10_int) (tid)));
        
        //#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i49319domain49456 = r;
        
        //#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i49319min49457 = i49319domain49456->FMGL(min);
        
        //#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i49319max49458 = i49319domain49456->FMGL(max);
        
        //#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
        {
            x10_long i49459;
            for (
                 //#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                 i49459 = i49319min49457; ((i49459) <= (i49319max49458));
                 
                 //#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                 i49459 = ((x10_long) ((i49459) + (((x10_long)1ll)))))
            {
                
                //#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long i49460 = i49459;
                
                //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> x49453 =
                  counts;
                
                //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_int y49454 = ((x10_int) ((x10::lang::Fun_0_1<TPMGL(T), x10_int>::__apply(x10aux::nullCheck(saved_this->
                                                                                                                 FMGL(hashFunc)), 
                  edges->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                    i49460))) & (sizeMask)));
                
                //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Empty_c
                ;
                
                //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_int ret49455;
                
                //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_int r49452 = ((x10_int) ((x49453->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                y49454)) + (((x10_int)1))));
                
                //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                x49453->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                  y49454, r49452);
                
                //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                ret49455 = r49452;
                
                //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Local_c
                ret49455;
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> edges;
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this;
    x10_int sizeMask;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->edges);
        buf.write(this->saved_this);
        buf.write(this->sizeMask);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_edges = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>();
        x10_int that_sizeMask = buf.read<x10_int>();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >(that_scatterGather, that_edges, that_saved_this, that_sizeMask);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5(org::scalegraph::util::DistScatterGather scatterGather, org::scalegraph::util::MemoryChunk<TPMGL(T)> edges, org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this, x10_int sizeMask) : scatterGather(scatterGather), edges(edges), saved_this(saved_this), sizeMask(sizeMask) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:200-204";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 209 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> offsets = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                ((x10_int) (tid)));
        
        //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i49336domain49467 = r;
        
        //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i49336min49468 = i49336domain49467->FMGL(min);
        
        //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i49336max49469 = i49336domain49467->FMGL(max);
        
        //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
        {
            x10_long i49470;
            for (
                 //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                 i49470 = i49336min49468; ((i49470) <= (i49336max49469));
                 
                 //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                 i49470 = ((x10_long) ((i49470) + (((x10_long)1ll)))))
            {
                
                //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long i49471 = i49470;
                
                //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) e49462 = edges->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                    i49471);
                
                //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_int idx49463 = ((x10_int) (((__extension__ ({
                    
                    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x49464 =
                      offsets;
                    
                    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_int y49465 = ((x10_int) ((x10::lang::Fun_0_1<TPMGL(T), x10_int>::__apply(x10aux::nullCheck(saved_this->
                                                                                                                     FMGL(hashFunc)), 
                      e49462)) & (sizeMask)));
                    
                    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_int ret49466;
                    
                    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                    x10_int r49461 = ((x10_int) ((x49464->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                    y49465)) + (((x10_int)1))));
                    
                    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                    x49464->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                      y49465, r49461);
                    
                    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                    ret49466 = r49461;
                    ret49466;
                }))
                ) - (((x10_int)1))));
                
                //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                indexes->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                  i49471, idx49463);
                
                //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                partitioned->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                  idx49463, e49462);
            }
        }
        
    }
    
    // captured environment
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
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_edges = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* that_saved_this = buf.read<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>();
        x10_int that_sizeMask = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_int> that_indexes = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_partitioned = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >(that_scatterGather, that_edges, that_saved_this, that_sizeMask, that_indexes, that_partitioned);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6(org::scalegraph::util::DistScatterGather scatterGather, org::scalegraph::util::MemoryChunk<TPMGL(T)> edges, org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* saved_this, x10_int sizeMask, org::scalegraph::util::MemoryChunk<x10_int> indexes, org::scalegraph::util::MemoryChunk<TPMGL(T)> partitioned) : scatterGather(scatterGather), edges(edges), saved_this(saved_this), sizeMask(sizeMask), indexes(indexes), partitioned(partitioned) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:208-216";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__6_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i49353domain49472 = r;
        
        //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i49353min49473 = i49353domain49472->FMGL(min);
        
        //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
        x10_long i49353max49474 = i49353domain49472->FMGL(max);
        
        //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
        {
            x10_long i49475;
            for (
                 //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                 i49475 = i49353min49473; ((i49475) <= (i49353max49474));
                 
                 //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
                 i49475 = ((x10_long) ((i49475) + (((x10_long)1ll))))) {
                
                //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long i49476 = i49475;
                
                //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                translated->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  i49476, recvTranslated->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                            indexes->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                              i49476)));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> translated;
    org::scalegraph::util::MemoryChunk<x10_int> indexes;
    org::scalegraph::util::MemoryChunk<x10_long> recvTranslated;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->translated);
        buf.write(this->indexes);
        buf.write(this->recvTranslated);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_translated = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_int> that_indexes = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_recvTranslated = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >(that_translated, that_indexes, that_recvTranslated);
        return this_;
    }
    
    org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7(org::scalegraph::util::MemoryChunk<x10_long> translated, org::scalegraph::util::MemoryChunk<x10_int> indexes, org::scalegraph::util::MemoryChunk<x10_long> recvTranslated) : translated(translated), indexes(indexes), recvTranslated(recvTranslated) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10:229-232";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) > >org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::__apply, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_VERTEXTRANSLATOR__HASHTRANSLATOR__CLOSURE__7_CLOSURE

//#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10FieldDecl_c

//#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10FieldDecl_c

//#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10FieldDecl_c

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10FieldDecl_c

//#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10FieldDecl_c

//#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10FieldDecl_c

//#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::isTranslator(
  ) {
    
    //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return true;
    
}

//#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::sizeOfDictionary(
  ) {
    
    //#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return ((x10_long) (this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::size()));
    
}

//#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_constructor(
                           x10::util::Team* team__, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNamesAtt__) {
    
    //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
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



//#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_constructor(
                           x10::util::Team* team__, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNamesAtt__,
                           x10::lang::Fun_0_1<TPMGL(T), x10_int>* hashFunc__) {
    
    //#line 121 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
    (this)->::org::scalegraph::graph::VertexTranslator<TPMGL(T)>::_constructor(
      team__);
    
    //#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.AssignPropertyCall_c
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::__fieldInitializers48962();
    
    //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(hashFunc) = hashFunc__;
    
    //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(vertexNamesAtt) = vertexNamesAtt__;
    
    //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(vertexNames) = org::scalegraph::util::GrowableMemory<TPMGL(T)>::_make();
}
template<class TPMGL(T)> org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_make(
                           x10::util::Team* team__, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNamesAtt__,
                           x10::lang::Fun_0_1<TPMGL(T), x10_int>* hashFunc__)
{
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)> >(), 0, sizeof(org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>))) org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>();
    this_->_constructor(team__, vertexNamesAtt__, hashFunc__);
    return this_;
}



//#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::countToId(
  x10_long count) {
    
    //#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return ((x10_long) ((((x10_long) ((count) * (((x10_long) (this->
                                                                FMGL(teamSize))))))) + (((x10_long) (this->
                                                                                                       FMGL(teamRank))))));
    
}

//#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::putLocalAndTranslate(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices, org::scalegraph::util::MemoryChunk<x10_long> translated) {
    
    //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i49268domain49434 = vertices->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range();
    
    //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i49268min49435 = i49268domain49434->FMGL(min);
    
    //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i49268max49436 = i49268domain49434->FMGL(max);
    
    //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
    {
        x10_long i49437;
        for (
             //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
             i49437 = i49268min49435; ((i49437) <= (i49268max49436));
             
             //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
             i49437 = ((x10_long) ((i49437) + (((x10_long)1ll)))))
        {
            
            //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i49438 = i49437;
            
            //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            TPMGL(T) key49431 = vertices->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                  i49438);
            
            //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10If_c
            if (this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::containsKey(
                  key49431)) {
                
                //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                translated->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  i49438, this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::getOrThrow(
                            key49431));
            } else {
                
                //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long count49432 = this->FMGL(count)->x10::util::concurrent::AtomicLong::getAndAdd(
                                        ((x10_long) (((x10_int)1))));
                
                //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
                x10_long id49433 = this->countToId(count49432);
                
                //#line 148 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::put(
                  key49431, id49433);
                
                //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::add(
                  key49431);
                
                //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Assert_c
                #ifndef NO_ASSERTIONS
                if (x10aux::x10__assertions_enabled)
                    x10aux::x10__assert((x10aux::struct_equals(((x10_long) ((x10aux::nullCheck(this->
                                                                                                 FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::size()) - (((x10_long) (((x10_int)1)))))),
                                                               count49432)));
                #endif//NO_ASSERTIONS
                
                //#line 151 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                translated->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  i49438, id49433);
            }
            
        }
    }
    
    //#line 154 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return translated;
    
}

//#line 157 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::parallelPutLocalAndTranslate(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices, org::scalegraph::util::MemoryChunk<x10_long> translated) {
    
    //#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> newKeys =
      this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::newKeys(
        vertices, ((x10_long)-1ll));
    
    //#line 159 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> newIds =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(newKeys->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 160 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(newIds->org::scalegraph::util::MemoryChunk<x10_long>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__3<TPMGL(T)>(newIds, this))));
    
    //#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::put(
      newKeys, newIds);
    
    //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    this->FMGL(count)->x10::util::concurrent::AtomicLong::getAndAdd(
      newKeys->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size());
    
    //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> _translated =
      this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::get(
        vertices, ((x10_long)-1ll));
    
    //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<x10_long >(
      _translated, ((x10_long)0ll), translated, ((x10_long)0ll),
      _translated->org::scalegraph::util::MemoryChunk<x10_long>::size());
    
    //#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return translated;
    
}

//#line 172 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::putLocal(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices) {
    
    //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i49302domain49447 = vertices->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range();
    
    //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i49302min49448 = i49302domain49447->FMGL(min);
    
    //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i49302max49449 = i49302domain49447->FMGL(max);
    
    //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
    {
        x10_long i49450;
        for (
             //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
             i49450 = i49302min49448; ((i49450) <= (i49302max49449));
             
             //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
             i49450 = ((x10_long) ((i49450) + (((x10_long)1ll)))))
        {
            
            //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long i49451 = i49450;
            
            //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            TPMGL(T) key49444 = vertices->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                  i49451);
            
            //#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long count49445 = this->FMGL(count)->x10::util::concurrent::AtomicLong::getAndAdd(
                                    vertices->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size());
            
            //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long id49446 = this->countToId(count49445);
            
            //#line 178 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
            this->FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::put(
              key49444, id49446);
            
            //#line 179 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(this->FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::add(
              key49444);
            
            //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals(x10aux::nullCheck(this->
                                                                               FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::size(),
                                                           count49445)));
            #endif//NO_ASSERTIONS
            
        }
    }
    
}

//#line 184 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::translateLocal(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> vertices, org::scalegraph::util::MemoryChunk<x10_long> translated) {
    
    //#line 185 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Try_c
    try {
        
        //#line 186 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::iter(vertices->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range(),
                                              reinterpret_cast<x10::lang::VoidFun_0_1<x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_1<x10_long> >(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__4<TPMGL(T)>(translated, this, vertices))));
    }
    catch (x10::lang::CheckedThrowable* __exc488) {
        if (x10aux::instanceof<x10::util::NoSuchElementException*>(__exc488)) {
            x10::util::NoSuchElementException* e = static_cast<x10::util::NoSuchElementException*>(__exc488);
            {
                
                //#line 191 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
                x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("Invalid vertex ID")));
                
                //#line 193 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(e));
            }
        } else
        throw;
    }
}

//#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::innerPutWithAllAndTranslate(
  org::scalegraph::util::DistScatterGather scatterGather,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> edges, org::scalegraph::util::MemoryChunk<x10_long> translated,
  x10_boolean withPut) {
    
    //#line 199 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_int sizeMask = ((x10_int) ((this->FMGL(teamSize)) - (((x10_int)1))));
    
    //#line 200 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(edges->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__5<TPMGL(T)>(scatterGather, edges, this, sizeMask))));
    
    //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    scatterGather->org::scalegraph::util::DistScatterGather::sum();
    
    //#line 206 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> partitioned =
      org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(edges->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 207 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> indexes =
      org::scalegraph::util::MemoryChunk<x10_int >::_make(edges->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 208 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(edges->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__6<TPMGL(T)>(scatterGather, edges, this, sizeMask, indexes, partitioned))));
    
    //#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> remoteData =
      scatterGather->template scatter<TPMGL(T) >(partitioned);
    
    //#line 218 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    partitioned->org::scalegraph::util::MemoryChunk<TPMGL(T)>::del();
    
    //#line 219 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> remoteTranslated =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(remoteData->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 221 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10If_c
    if (withPut) {
        
        //#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
        this->putLocalAndTranslate(remoteData, remoteTranslated);
    } else {
        
        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
        this->translateLocal(remoteData, remoteTranslated);
    }
    
    //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> recvTranslated =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(edges->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    scatterGather->template gather<x10_long >(remoteTranslated,
                                              recvTranslated);
    
    //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    remoteTranslated->org::scalegraph::util::MemoryChunk<x10_long>::del();
    
    //#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(edges->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T)>)))org_scalegraph_graph_VertexTranslator__HashTranslator__closure__7<TPMGL(T)>(translated, indexes, recvTranslated))));
    
    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    indexes->org::scalegraph::util::MemoryChunk<x10_int>::del();
    
    //#line 234 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    recvTranslated->org::scalegraph::util::MemoryChunk<x10_long>::del();
}

//#line 242 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::translateWithAll(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> edges, x10_boolean withPut) {
    
    //#line 243 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long CHUNK_SIZE = ((x10_long) ((((x10_long)1ll)) << (0x3f & (((x10_int)22)))));
    
    //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long iterations = x10aux::nullCheck(this->FMGL(team))->allreduce(
                            this->FMGL(teamRank), ((x10_long) ((((x10_long) ((((x10_long) ((edges->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()) + (CHUNK_SIZE)))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(CHUNK_SIZE))),
                            x10::util::Team::FMGL(MAX__get)());
    
    //#line 246 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistScatterGather scatterGather =
      org::scalegraph::util::DistScatterGather::_make(this->
                                                        FMGL(team));
    
    //#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> translated =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(edges->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__Distributor<TPMGL(T)>* edgesDist =
      edges->org::scalegraph::util::MemoryChunk<TPMGL(T)>::distributor();
    
    //#line 249 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__Distributor<x10_long>* translatedDist =
      translated->org::scalegraph::util::MemoryChunk<x10_long>::distributor();
    
    //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i49370min49478 = ((x10_long) (((x10_int)0)));
    
    //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
    x10_long i49370max49479 = ((x10_long) ((iterations) - (((x10_long) (((x10_int)1))))));
    
    //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": polyglot.ast.For_c
    {
        x10_long i49480;
        for (
             //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
             i49480 = i49370min49478; ((i49480) <= (i49370max49479));
             
             //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10LocalAssign_c
             i49480 = ((x10_long) ((i49480) + (((x10_long)1ll)))))
        {
            
            //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long it49481 = i49480;
            
            //#line 251 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10_long size49477 = x10::lang::Math::min(CHUNK_SIZE,
                                                      edgesDist->remain());
            
            //#line 252 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
            this->innerPutWithAllAndTranslate(scatterGather,
                                              edgesDist->next(
                                                size49477),
                                              translatedDist->next(
                                                size49477),
                                              withPut);
        }
    }
    
    //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10If_c
    if (withPut) {
        
        //#line 257 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(maxVertexID) = x10aux::nullCheck(this->
                                                      FMGL(team))->reduce(
                                    this->FMGL(teamRank),
                                    ((x10_int)0), ((x10_long) ((((x10_long) ((((x10_long) (this->
                                                                                             FMGL(table)->org::scalegraph::util::HashMap<TPMGL(T), x10_long>::size()))) * (((x10_long) (this->
                                                                                                                                                                                          FMGL(teamSize))))))) + (((x10_long) (this->
                                                                                                                                                                                                                                 FMGL(teamRank)))))),
                                    x10::util::Team::FMGL(MAX__get)());
        
        //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
        this->FMGL(vertexNamesAtt)->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__set(
          x10aux::nullCheck(this->FMGL(vertexNames))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::raw());
    }
    
    //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    edgesDist->checkFinish();
    
    //#line 262 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10Call_c
    translatedDist->checkFinish();
    
    //#line 263 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return translated;
    
}

//#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*
  org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::org__scalegraph__graph__VertexTranslator__HashTranslator____this__org__scalegraph__graph__VertexTranslator__HashTranslator(
  ) {
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::__fieldInitializers48962(
  ) {
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(count) = x10::util::concurrent::AtomicLong::_make(((x10_long) (((x10_int)0))));
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(table) = org::scalegraph::util::HashMap<TPMGL(T), x10_long>::_make();
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": Eval of x10.ast.X10FieldAssign_c
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
