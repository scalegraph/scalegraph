#ifndef __ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H
#define __ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H

#include <x10rt.h>


#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class Vertex;
} } } 
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
#include <org/scalegraph/util/Team2.h>
#undef ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
#include <org/scalegraph/util/Team2.h>
#undef ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
namespace org { namespace scalegraph { namespace id { 
class ProfilingID__XPregel;
} } } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class WorkerPlaceGraph;
} } } 
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class DistSparseMatrix;
} } } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct;
} } } } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(E)> class GraphEdge;
} } } 
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class SparseMatrix;
} } } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class IllegalOperationException;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace org { namespace scalegraph { namespace util { 
class Parallel;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace lang { 
class Boolean;
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
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class XPregelGraph__VertexIterator;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { 
class Bitmap;
} } } 
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class VertexContext;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace org { namespace scalegraph { namespace xpregel { 

template<class TPMGL(V), class TPMGL(E)> class XPregelGraph;
template <> class XPregelGraph<void, void>;
template<class TPMGL(V), class TPMGL(E)> class XPregelGraph : public x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    static x10aux::itable_entry _itables[3];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename x10::lang::Iterable<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >::template itable<org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)> > _itable_0;
    
    static x10::lang::Any::itable<org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)> > _itable_1;
    
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>
      FMGL(mWorkers);
    
    org::scalegraph::util::Team2 FMGL(mTeam);
    
    void _constructor(org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix);
    
    static org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* _make(
             org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix);
    
    void _constructor(x10::util::Team* team, x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers);
    
    static org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* _make(
             x10::util::Team* team, x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers);
    
    void setGraphAndEdgeValue(org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph);
    void ensurePlaceRoot();
    virtual void setLogPrinter(x10::io::Printer* printer,
                               x10_int level);
    virtual org::scalegraph::graph::id::IdStruct ids();
    virtual void initVertexValue(TPMGL(V) value);
    virtual void initEdgeValue(TPMGL(E) value);
    virtual x10::array::PlaceGroup* placeGroup();
    virtual x10_long size();
    virtual org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>
      __apply(x10_long index);
    virtual x10::lang::LongRange range();
    virtual x10::lang::Iterator<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >*
      iterator();
    virtual org::scalegraph::util::MemoryChunk<x10_long> edgeOffsets(
      );
    virtual org::scalegraph::util::MemoryChunk<x10_long> edgeIds(
      );
    virtual org::scalegraph::util::MemoryChunk<TPMGL(E)> edgeValues(
      );
    template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      stealOutput(x10_int index);
    template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      stealOutput();
    template<class TPMGL(T)> TPMGL(T) aggregatedValue();
    virtual void updateInEdge();
    virtual void updateInEdgeAndValue();
    virtual void resetSholdBeActiveFlag();
    template<class TPMGL(M), class TPMGL(A)> void iterate(
      x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute,
      x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator,
      x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>* combiner,
      x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* end);
    template<class TPMGL(M), class TPMGL(A)> void iterate(
      x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute,
      x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator,
      x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* end);
    virtual void once(x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*>* compute);
    virtual org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>*
      org__scalegraph__xpregel__XPregelGraph____this__org__scalegraph__xpregel__XPregelGraph(
      );
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(V), class TPMGL(E)> x10aux::RuntimeType org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::rtt;
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::xpregel::XPregelGraph<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Iterable<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> > >()};
    const x10aux::RuntimeType* params[2] = { x10aux::getRTT<TPMGL(V)>(), x10aux::getRTT<TPMGL(E)>()};
    x10aux::RuntimeType::Variance variances[2] = { x10aux::RuntimeType::invariant, x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.xpregel.XPregelGraph";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 1, parents, 2, params, variances);
}

template <> class XPregelGraph<void, void> : public x10::lang::X10Class
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(V), class TPMGL(E)> static org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>*
      make(org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph);
    
    template<class TPMGL(V), class TPMGL(E)> static org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>*
      make(org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph,
           TPMGL(V) iv);
    
    
};

} } } 
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H

namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E)> class XPregelGraph;
} } } 

#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_NODEPS
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_NODEPS
#include <x10/lang/Iterable.h>
#include <org/scalegraph/xpregel/Vertex.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <org/scalegraph/util/Team2.h>
#include <org/scalegraph/id/ProfilingID__XPregel.h>
#include <org/scalegraph/xpregel/WorkerPlaceGraph.h>
#include <org/scalegraph/blas/DistSparseMatrix.h>
#include <x10/lang/Long.h>
#include <x10/util/Team.h>
#include <org/scalegraph/Config.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/VoidFun_0_0.h>
#include <org/scalegraph/xpregel/GraphEdge.h>
#include <org/scalegraph/blas/SparseMatrix.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Int.h>
#include <x10/lang/IllegalOperationException.h>
#include <x10/io/Printer.h>
#include <org/scalegraph/util/Parallel.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/compiler/Inline.h>
#include <org/scalegraph/xpregel/XPregelGraph__VertexIterator.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <org/scalegraph/util/Bitmap.h>
#include <org/scalegraph/xpregel/VertexContext.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/Any.h>
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(T)> class org_scalegraph_xpregel_XPregelGraph__closure__7 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<TPMGL(T)> __apply() {
        
        //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
        return x10aux::nullCheck(saved_this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->template stealOutput<TPMGL(T) >(
                 index);
        
    }
    
    // captured environment
    org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* saved_this;
    x10_int index;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->index);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* that_saved_this = buf.read<org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>*>();
        x10_int that_index = buf.read<x10_int>();
        org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >(that_saved_this, that_index);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__7(org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* saved_this, x10_int index) : saved_this(saved_this), index(index) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:187";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) > >org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(T)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >, &org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__7_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__11_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class org_scalegraph_xpregel_XPregelGraph__closure__11 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 257 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 258 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->template run<TPMGL(M),
            TPMGL(A) >(compute, aggregator, combiner, end);
        }
        catch (x10::lang::CheckedThrowable* __exc103) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc103);
                {
                    
                    //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_;
    x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute;
    x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator;
    x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>* combiner;
    x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* end;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->workers_);
        buf.write(this->compute);
        buf.write(this->aggregator);
        buf.write(this->combiner);
        buf.write(this->end);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> that_workers_ = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >();
        x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* that_compute = buf.read<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >*>();
        x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* that_aggregator = buf.read<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>*>();
        x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>* that_combiner = buf.read<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>*>();
        x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* that_end = buf.read<x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>*>();
        org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >(that_workers_, that_compute, that_aggregator, that_combiner, that_end);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__11(x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_, x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute, x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator, x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>* combiner, x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* end) : workers_(workers_), compute(compute), aggregator(aggregator), combiner(combiner), end(end) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:256-260";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__11_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__12_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class org_scalegraph_xpregel_XPregelGraph__closure__12 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 279 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->template run<TPMGL(M),
            TPMGL(A) >(compute, aggregator, x10aux::class_cast_unchecked<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>*>(X10_NULL),
                       end);
        }
        catch (x10::lang::CheckedThrowable* __exc105) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc105);
                {
                    
                    //#line 280 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_;
    x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute;
    x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator;
    x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* end;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->workers_);
        buf.write(this->compute);
        buf.write(this->aggregator);
        buf.write(this->end);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> that_workers_ = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >();
        x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* that_compute = buf.read<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >*>();
        x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* that_aggregator = buf.read<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>*>();
        x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* that_end = buf.read<x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>*>();
        org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >(that_workers_, that_compute, that_aggregator, that_end);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__12(x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_, x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute, x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator, x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* end) : workers_(workers_), compute(compute), aggregator(aggregator), end(end) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:277-281";
    }

};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) > >org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)>
const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__12_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_GENERICS
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_stealOutput_93
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_stealOutput_93
template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::stealOutput(
  x10_int index) {
    
    //#line 185 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 186 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return org::scalegraph::util::DistMemoryChunk<void>::template make<TPMGL(T) >(
             this->FMGL(mTeam)->org::scalegraph::util::Team2::placeGroup(),
             reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T)>)))org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T)>(this, index))));
    
}
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_stealOutput_93
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_stealOutput_94
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_stealOutput_94
template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(T)>
org::scalegraph::util::DistMemoryChunk<TPMGL(T)> org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::stealOutput(
  ) {
    
    //#line 190 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return this->template stealOutput<TPMGL(T) >(((x10_int)0));
    
}
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_stealOutput_94
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_aggregatedValue_95
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_aggregatedValue_95
template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(T)>
TPMGL(T) org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::aggregatedValue(
  ) {
    
    //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return x10aux::class_cast<TPMGL(T)>(x10aux::nullCheck(this->
                                                            FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
                                          FMGL(mLastAggVal));
    
}
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_aggregatedValue_95
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_iterate_102
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_iterate_102
template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::iterate(
  x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>* combiner,
  x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* end) {
    
    //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 251 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(compute, X10_NULL))) {
        
        //#line 252 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("compute closure cannot be null"))));
    }
    
    //#line 254 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 256 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(team_->org::scalegraph::util::Team2::placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(workers_, compute, aggregator, combiner, end))));
}
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_iterate_102
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_iterate_104
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_iterate_104
template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::iterate(
  x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator,
  x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* end) {
    
    //#line 271 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 272 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(compute, X10_NULL))) {
        
        //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("compute closure cannot be null"))));
    }
    
    //#line 275 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 276 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 277 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(team_->org::scalegraph::util::Team2::placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(workers_, compute, aggregator, end))));
}
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_iterate_104
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_IMPLEMENTATION
#include <org/scalegraph/xpregel/XPregelGraph.h>

#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* __apply() {
        
        //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
        return org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_make(team,
                                                                                     edgeIndexMatrix);
        
    }
    
    // captured environment
    x10::util::Team* team;
    org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team);
        buf.write(this->edgeIndexMatrix);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::util::Team* that_team = buf.read<x10::util::Team*>();
        org::scalegraph::blas::DistSparseMatrix<x10_long> that_edgeIndexMatrix = buf.read<org::scalegraph::blas::DistSparseMatrix<x10_long> >();
        org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E) >(that_team, that_edgeIndexMatrix);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__1(x10::util::Team* team, org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix) : team(team), edgeIndexMatrix(edgeIndexMatrix) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:52";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >, &org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* w =
              workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply();
            
            //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(x10aux::nullCheck(w)->FMGL(mOutEdge))->org::scalegraph::xpregel::GraphEdge<TPMGL(E)>::set(
              graph->org::scalegraph::blas::DistSparseMatrix<TPMGL(E)>::__apply());
        }
        catch (x10::lang::CheckedThrowable* __exc77) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc77);
                {
                    
                    //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_;
    org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->workers_);
        buf.write(this->graph);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> that_workers_ = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >();
        org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> that_graph = buf.read<org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> >();
        org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E) >(that_workers_, that_graph);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__2(x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_, org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph) : workers_(workers_), graph(graph) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:82-88";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__4 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i40938domain40973 = r;
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i40938min40974 = i40938domain40973->FMGL(min);
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i40938max40975 = i40938domain40973->FMGL(max);
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.For_c
        {
            x10_long i40976;
            for (
                 //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                 i40976 = i40938min40974; ((i40976) <= (i40938max40975));
                 
                 //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i40976 = ((x10_long) ((i40976) + (((x10_long)1ll))))) {
                
                //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i40977 = i40976;
                
                //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(w)->FMGL(mVertexValue)->org::scalegraph::util::MemoryChunk<TPMGL(V)>::__set(
                  i40977, value);
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* w;
    TPMGL(V) value;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->w);
        buf.write(this->value);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_w = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        TPMGL(V) that_value = buf.read<TPMGL(V)>();
        org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >(that_w, that_value);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__4(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* w, TPMGL(V) value) : w(w), value(value) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:113-115";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* w =
              workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply();
            
            //#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::iter(x10aux::nullCheck(w)->FMGL(mVertexValue)->org::scalegraph::util::MemoryChunk<TPMGL(V)>::range(),
                                                  reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E)>(w, value))));
        }
        catch (x10::lang::CheckedThrowable* __exc82) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc82);
                {
                    
                    //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_;
    TPMGL(V) value;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->workers_);
        buf.write(this->value);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> that_workers_ = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >();
        TPMGL(V) that_value = buf.read<TPMGL(V)>();
        org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E) >(that_workers_, that_value);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__3(x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_, TPMGL(V) value) : workers_(workers_), value(value) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:110-117";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__6 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i40955domain40978 = r;
        
        //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i40955min40979 = i40955domain40978->FMGL(min);
        
        //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        x10_long i40955max40980 = i40955domain40978->FMGL(max);
        
        //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.For_c
        {
            x10_long i40981;
            for (
                 //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                 i40981 = i40955min40979; ((i40981) <= (i40955max40980));
                 
                 //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10LocalAssign_c
                 i40981 = ((x10_long) ((i40981) + (((x10_long)1ll))))) {
                
                //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                x10_long i40982 = i40981;
                
                //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(w)->FMGL(value)->org::scalegraph::util::MemoryChunk<TPMGL(E)>::__set(
                  i40982, value);
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* w;
    TPMGL(E) value;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->w);
        buf.write(this->value);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* that_w = buf.read<org::scalegraph::xpregel::GraphEdge<TPMGL(E)>*>();
        TPMGL(E) that_value = buf.read<TPMGL(E)>();
        org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >(that_w, that_value);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__6(org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* w, TPMGL(E) value) : w(w), value(value) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:128-130";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__6_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__5 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 126 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* w = x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
                                                                 FMGL(mOutEdge);
            
            //#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::iter(x10aux::nullCheck(w)->
                                                    FMGL(value)->org::scalegraph::util::MemoryChunk<TPMGL(E)>::range(),
                                                  reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E)>(w, value))));
        }
        catch (x10::lang::CheckedThrowable* __exc84) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc84);
                {
                    
                    //#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_;
    TPMGL(E) value;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->workers_);
        buf.write(this->value);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> that_workers_ = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >();
        TPMGL(E) that_value = buf.read<TPMGL(E)>();
        org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E) >(that_workers_, that_value);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__5(x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_, TPMGL(E) value) : workers_(workers_), value(value) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:125-132";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__8_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__8 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 206 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 207 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::updateInEdge();
        }
        catch (x10::lang::CheckedThrowable* __exc97) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc97);
                {
                    
                    //#line 208 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->workers_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> that_workers_ = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >();
        org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E) >(that_workers_);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__8(x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_) : workers_(workers_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:205-209";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__8_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__9_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__9 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 221 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::updateInEdgeWithValue();
        }
        catch (x10::lang::CheckedThrowable* __exc99) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc99);
                {
                    
                    //#line 223 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->workers_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> that_workers_ = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >();
        org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E) >(that_workers_);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__9(x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_) : workers_(workers_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:220-224";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__9_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__10_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__10 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 236 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
                                FMGL(mVertexShouldBeActive))->org::scalegraph::util::Bitmap::clear(
              true);
        }
        catch (x10::lang::CheckedThrowable* __exc101) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc101);
                {
                    
                    //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->workers_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> that_workers_ = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >();
        org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E) >(that_workers_);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__10(x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_) : workers_(workers_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:234-238";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__10_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__14_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__14 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*, org::scalegraph::util::MemoryChunk<x10::lang::Any*> >::template itable <org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>* ctx, org::scalegraph::util::MemoryChunk<x10::lang::Any*> messages) {
        
        //#line 299 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.ClosureCall_c
        x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*>::__apply(x10aux::nullCheck(compute), 
          ctx);
    }
    
    // captured environment
    x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*>* compute;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->compute);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*>* that_compute = buf.read<x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*>*>();
        org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >(that_compute);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__14(x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*>* compute) : compute(compute) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*, org::scalegraph::util::MemoryChunk<x10::lang::Any*> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*, org::scalegraph::util::MemoryChunk<x10::lang::Any*> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:298-299";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*, org::scalegraph::util::MemoryChunk<x10::lang::Any*> >::template itable <org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*, org::scalegraph::util::MemoryChunk<x10::lang::Any*> > >, &org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__14_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__15_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__15 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_int, x10::lang::Any*, x10_boolean>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_boolean __apply(x10_int id__12, x10::lang::Any* id__13) {
        
        //#line 300 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
        return true;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >();
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__15() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10::lang::Any*, x10_boolean> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10::lang::Any*, x10_boolean> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:300";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::Fun_0_2<x10_int, x10::lang::Any*, x10_boolean>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10::lang::Any*, x10_boolean> >, &org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__15_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__13_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__13 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 296 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 297 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*, org::scalegraph::util::MemoryChunk<x10::lang::Any*> >* actual_compute =
              reinterpret_cast<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*, org::scalegraph::util::MemoryChunk<x10::lang::Any*> >*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*, org::scalegraph::util::MemoryChunk<x10::lang::Any*> > >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E)>(compute)));
            
            //#line 300 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->template run<x10::lang::Any*,
            x10::lang::Any* >(actual_compute, x10aux::class_cast_unchecked<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10::lang::Any*>, x10::lang::Any*>*>(X10_NULL),
                              x10aux::class_cast_unchecked<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10::lang::Any*>, x10::lang::Any*>*>(X10_NULL),
                              reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10::lang::Any*, x10_boolean>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10::lang::Any*, x10_boolean> >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E)>())));
        }
        catch (x10::lang::CheckedThrowable* __exc107) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc107);
                {
                    
                    //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*>* compute;
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->compute);
        buf.write(this->workers_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*>* that_compute = buf.read<x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*>*>();
        x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> that_workers_ = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >();
        org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) >(that_compute, that_workers_);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__13(x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*>* compute, x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_) : compute(compute), workers_(workers_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:295-302";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__13_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__16_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__16 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* __apply() {
        
        //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
        return org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_make(team,
                                                                                     graph->org::scalegraph::blas::DistSparseMatrix<TPMGL(E)>::ids());
        
    }
    
    // captured environment
    x10::util::Team* team;
    org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team);
        buf.write(this->graph);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::util::Team* that_team = buf.read<x10::util::Team*>();
        org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> that_graph = buf.read<org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> >();
        org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E) >(that_team, that_graph);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__16(x10::util::Team* team, org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph) : team(team), graph(graph) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:64";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >, &org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__16_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__17_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__17 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* __apply() {
        
        //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
        return org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_make(team,
                                                                                     graph->org::scalegraph::blas::DistSparseMatrix<TPMGL(E)>::ids());
        
    }
    
    // captured environment
    x10::util::Team* team;
    org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team);
        buf.write(this->graph);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::util::Team* that_team = buf.read<x10::util::Team*>();
        org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> that_graph = buf.read<org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> >();
        org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E) >(that_team, that_graph);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__17(x10::util::Team* team, org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph) : team(team), graph(graph) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:72";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >, &org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__17_CLOSURE
template<class TPMGL(V), class TPMGL(E)> typename x10::lang::Iterable<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >::template itable<org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)> >  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_itable_0(&org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::equals, &org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::hashCode, &org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::iterator, &org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::toString, &org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::typeName);
template<class TPMGL(V), class TPMGL(E)> x10::lang::Any::itable<org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)> >  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_itable_1(&org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::equals, &org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::hashCode, &org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::toString, &org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_itables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterable<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> > >, &_itable_0), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &_itable_1), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)> >())};
 /* private static type XP = org.scalegraph.id.ProfilingID$XPregel; */ 

//#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10FieldDecl_c

//#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10FieldDecl_c

//#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_constructor(
                                           org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix) {
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Empty_c
    ;
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.AssignPropertyCall_c
    
    //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mTeam) = org::scalegraph::util::Team2::_make(team);
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mWorkers) = x10::lang::PlaceLocalHandle<void>::template makeFlat<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* >(
                             this->FMGL(mTeam)->org::scalegraph::util::Team2::placeGroup(),
                             reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E)>(team, edgeIndexMatrix))));
}
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_make(
                                           org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix)
{
    org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>();
    this_->_constructor(edgeIndexMatrix);
    return this_;
}



//#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_constructor(
                                           x10::util::Team* team,
                                           x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers) {
    
    //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Empty_c
    ;
    
    //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.AssignPropertyCall_c
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mTeam) = org::scalegraph::util::Team2::_make(team);
    
    //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mWorkers) = workers;
}
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_make(
                                           x10::util::Team* team,
                                           x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers)
{
    org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>();
    this_->_constructor(team, workers);
    return this_;
}



//#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::setGraphAndEdgeValue(
  org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph) {
    
    //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(team_->org::scalegraph::util::Team2::placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E)>(workers_, graph))));
}

//#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot(
  ) {
    
    //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(this->FMGL(mTeam)->org::scalegraph::util::Team2::role(),
                                ((x10_int)0)))) {
        
        //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10aux::makeStringLit("This method can be called on only the FIRST_PLACE."))));
    }
    
}

//#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::setLogPrinter(
  x10::io::Printer* printer, x10_int level) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
      FMGL(mLogPrinter) = printer;
    
    //#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
      FMGL(mLogLevel) = level;
}

//#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::graph::id::IdStruct
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ids(
  ) {
    
    //#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
             FMGL(mIds);
    
}

//#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::initVertexValue(
  TPMGL(V) value) {
    
    //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(team_->org::scalegraph::util::Team2::placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E)>(workers_, value))));
}

//#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::initEdgeValue(
  TPMGL(E) value) {
    
    //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(team_->org::scalegraph::util::Team2::placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E)>(workers_, value))));
}

//#line 137 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10::array::PlaceGroup*
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::placeGroup(
  ) {
    
    //#line 137 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return this->FMGL(mTeam)->org::scalegraph::util::Team2::placeGroup();
    
}

//#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10_long org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::size(
  ) {
    
    //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
             FMGL(mIds)->org::scalegraph::graph::id::IdStruct::numberOfLocalVertexes();
    
}

//#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::__apply(
  x10_long index) {
    {
        
        //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10If_c
        if (((index) < (((x10_long) (((x10_int)0))))) || ((index) > (this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::size())))
        {
            
            //#line 148 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_make(this->
                                                                         FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply(),
                                                                       index);
    
}

//#line 155 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10::lang::LongRange
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::range(
  ) {
    
    //#line 155 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::size()) - (((x10_long)1ll)))));
    
}

//#line 173 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10::lang::Iterator<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >*
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::iterator(
  ) {
    
    //#line 173 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return reinterpret_cast<x10::lang::Iterator<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >*>(org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>::_make(this->
                                                                                                                                                                                             FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply()));
    
}

//#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::edgeOffsets(
  ) {
    
    //#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
                               FMGL(mOutEdge))->FMGL(offsets);
    
}

//#line 178 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::edgeIds(
  ) {
    
    //#line 178 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
                               FMGL(mOutEdge))->FMGL(vertexes);
    
}

//#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::util::MemoryChunk<TPMGL(E)>
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::edgeValues(
  ) {
    
    //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
                               FMGL(mOutEdge))->FMGL(value);
    
}

//#line 184 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 190 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::updateInEdge(
  ) {
    
    //#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 204 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(team_->org::scalegraph::util::Team2::placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E)>(workers_))));
}

//#line 216 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::updateInEdgeAndValue(
  ) {
    
    //#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 218 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 219 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(team_->org::scalegraph::util::Team2::placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E)>(workers_))));
}

//#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::resetSholdBeActiveFlag(
  ) {
    
    //#line 232 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 234 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(team_->org::scalegraph::util::Team2::placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E)>(workers_))));
}

//#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 266 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 287 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::once(
  x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10::lang::Any*, x10::lang::Any*>*>* compute) {
    
    //#line 289 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 290 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(compute, X10_NULL))) {
        
        //#line 291 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("compute closure cannot be null"))));
    }
    
    //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(team_->org::scalegraph::util::Team2::placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E)>(compute, workers_))));
}

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>*
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::org__scalegraph__xpregel__XPregelGraph____this__org__scalegraph__xpregel__XPregelGraph(
  ) {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return this;
    
}
template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(mWorkers));
    buf.write(this->FMGL(mTeam));
    
}

template<class TPMGL(V), class TPMGL(E)> x10::lang::Reference* org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(mWorkers) = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >();
    FMGL(mTeam) = buf.read<org::scalegraph::util::Team2>();
}

template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>*
  org::scalegraph::xpregel::XPregelGraph<void, void>::make(org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph)
{
    
    //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* g =
      org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_make(team,
                                                                        x10::lang::PlaceLocalHandle<void>::template makeFlat<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* >(
                                                                          x10aux::nullCheck(team)->placeGroup(),
                                                                          reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E)>(team, graph)))));
    
    //#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    g->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::setGraphAndEdgeValue(
      graph);
    
    //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return g;
    
}
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>*
  org::scalegraph::xpregel::XPregelGraph<void, void>::make(org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph,
                                                           TPMGL(V) iv)
{
    
    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* g =
      org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_make(team,
                                                                        x10::lang::PlaceLocalHandle<void>::template makeFlat<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* >(
                                                                          x10aux::nullCheck(team)->placeGroup(),
                                                                          reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E)>(team, graph)))));
    
    //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    g->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::setGraphAndEdgeValue(
      graph);
    
    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    g->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::initVertexValue(
      iv);
    
    //#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return g;
    
}
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_NODEPS
