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
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace lang { 
class IllegalOperationException;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
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
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
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
class Byte;
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
    virtual void once(x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*>* compute);
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
#include <x10/array/Array.h>
#include <x10/lang/Int.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/Boolean.h>
#include <x10/array/Region.h>
#include <x10/lang/IllegalOperationException.h>
#include <x10/io/Printer.h>
#include <x10/lang/LongRange.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/Inline.h>
#include <org/scalegraph/xpregel/XPregelGraph__VertexIterator.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <org/scalegraph/util/Bitmap.h>
#include <x10/lang/VoidFun_0_2.h>
#include <org/scalegraph/xpregel/VertexContext.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/Byte.h>
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
        
        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:187";
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
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 258 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->template run<TPMGL(M),
            TPMGL(A) >(compute, aggregator, combiner, end);
        }
        catch (x10::lang::CheckedThrowable* __exc39) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc39);
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:256-260";
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
        
        //#line 278 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 279 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->template run<TPMGL(M),
            TPMGL(A) >(compute, aggregator, x10aux::class_cast_unchecked<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>*>(X10_NULL),
                       end);
        }
        catch (x10::lang::CheckedThrowable* __exc41) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc41);
                {
                    
                    //#line 280 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:277-281";
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
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_stealOutput_29
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_stealOutput_29
template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::stealOutput(
  x10_int index) {
    
    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return org::scalegraph::util::DistMemoryChunk<void>::template make<TPMGL(T) >(
             (__extension__ ({
                 
                 //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                 org::scalegraph::util::Team2 this75203 =
                   this->FMGL(mTeam);
                 x10aux::nullCheck(this75203->FMGL(base))->placeGroup();
             }))
             , reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T)>)))org_scalegraph_xpregel_XPregelGraph__closure__7<TPMGL(V),TPMGL(E),TPMGL(T)>(this, index))));
    
}
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_stealOutput_29
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_stealOutput_30
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_stealOutput_30
template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(T)>
org::scalegraph::util::DistMemoryChunk<TPMGL(T)> org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::stealOutput(
  ) {
    
    //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return this->template stealOutput<TPMGL(T) >(((x10_int)0));
    
}
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_stealOutput_30
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_aggregatedValue_31
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_aggregatedValue_31
template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(T)>
TPMGL(T) org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::aggregatedValue(
  ) {
    
    //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return x10aux::class_cast<TPMGL(T)>(x10aux::nullCheck(this->
                                                            FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
                                          FMGL(mLastAggVal));
    
}
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_aggregatedValue_31
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_iterate_38
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_iterate_38
template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::iterate(
  x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(M)>, TPMGL(M)>* combiner,
  x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* end) {
    
    //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 251 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(compute, X10_NULL))) {
        
        //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("compute closure cannot be null"))));
    }
    
    //#line 254 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 255 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 256 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((__extension__ ({
        x10aux::nullCheck(team_->FMGL(base))->placeGroup();
    }))
    )->broadcastFlat(reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_XPregelGraph__closure__11<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(workers_, compute, aggregator, combiner, end))));
}
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_iterate_38
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_iterate_40
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_iterate_40
template<class TPMGL(V), class TPMGL(E)> template<class TPMGL(M), class TPMGL(A)>
void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::iterate(
  x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), TPMGL(M), TPMGL(A)>*, org::scalegraph::util::MemoryChunk<TPMGL(M)> >* compute,
  x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<TPMGL(A)>, TPMGL(A)>* aggregator,
  x10::lang::Fun_0_2<x10_int, TPMGL(A), x10_boolean>* end) {
    
    //#line 271 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(compute, X10_NULL))) {
        
        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("compute closure cannot be null"))));
    }
    
    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 276 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((__extension__ ({
        x10aux::nullCheck(team_->FMGL(base))->placeGroup();
    }))
    )->broadcastFlat(reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>)))org_scalegraph_xpregel_XPregelGraph__closure__12<TPMGL(V),TPMGL(E),TPMGL(M),TPMGL(A)>(workers_, compute, aggregator, end))));
}
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_iterate_40
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
        
        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* alloc50887 =
               ((new (memset(x10aux::alloc<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>()))
            ;
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10ConstructorCall_c
            (alloc50887)->::org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_constructor(
              team, edgeIndexMatrix);
            alloc50887;
        }))
        ;
        
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:52";
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
        
        //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* w =
              workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply();
            
            //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* this75642 = x10aux::nullCheck(w)->
                                                                         FMGL(mOutEdge);
            
            //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::blas::SparseMatrix<TPMGL(E)> m75643 =
              graph->org::scalegraph::blas::DistSparseMatrix<TPMGL(E)>::__apply();
            
            //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this75642)->FMGL(offsets) = m75643->
                                                            FMGL(offsets);
            
            //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this75642)->FMGL(vertexes) = m75643->
                                                             FMGL(vertexes);
            
            //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/GraphEdge.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this75642)->FMGL(value) = m75643->FMGL(values);
        }
        catch (x10::lang::CheckedThrowable* __exc7) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc7);
                {
                    
                    //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:82-88";
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
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__4 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            x10_long tid75653 = ((x10_long) (idx75655));
            
            //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r75654 = i_range75659;
            
            //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i50895domain75648 = r75654;
            
            //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i50895min75649 = i50895domain75648->FMGL(min);
            
            //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i50895max75650 = i50895domain75648->FMGL(max);
            
            //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.For_c
            {
                x10_long i75651;
                for (
                     //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                     i75651 = i50895min75649; ((i75651) <= (i50895max75650));
                     
                     //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i75651 = ((x10_long) ((i75651) + (((x10_long)1ll)))))
                {
                    
                    //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i75652 = i75651;
                    
                    //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<TPMGL(V)> this75644 =
                      x10aux::nullCheck(w)->FMGL(mVertexValue);
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index75645 = i75652;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(V) value75646 = value;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(V) ret75647;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this75644->FMGL(data)).isValid())) {
                            
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
                        if (((index75645) < (((x10_long) (((x10_int)0))))) ||
                            ((index75645) >= (this75644->FMGL(data)->FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index75645), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (this75644->FMGL(data)).set(index75645, value75646);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret75647 = value75646;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret75647;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc12) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc12)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc12);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc12);
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
    x10_int idx75655;
    x10::lang::LongRange i_range75659;
    org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* w;
    TPMGL(V) value;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx75655);
        buf.write(this->i_range75659);
        buf.write(this->w);
        buf.write(this->value);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10_int that_idx75655 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range75659 = buf.read<x10::lang::LongRange>();
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* that_w = buf.read<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>();
        TPMGL(V) that_value = buf.read<TPMGL(V)>();
        org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >(that_idx75655, that_i_range75659, that_w, that_value);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__4(x10_int idx75655, x10::lang::LongRange i_range75659, org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* w, TPMGL(V) value) : idx75655(idx75655), i_range75659(i_range75659), w(w), value(value) { }
    
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

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

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
        
        //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* w =
              workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply();
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range75669 = (__extension__ ({
                
                //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(V)> this75670 = x10aux::nullCheck(w)->
                                                                           FMGL(mVertexValue);
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this75670->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size75665 = ((x10_long) ((((x10_long) ((range75669->
                                                               FMGL(max)) - (range75669->
                                                                               FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads75666 = x10::lang::Runtime::FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size75667 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a75668 = ((x10_long) ((((x10_long) ((((x10_long) ((size75665) + (((x10_long) (nthreads75666)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads75666)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a75668) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a75668);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var0 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable75714 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i72665max75662 = ((x10_int) ((nthreads75666) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i75663;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i75663 = ((x10_int)0);
                                         ((i75663) <= (i72665max75662));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i75663 = ((x10_int) ((i75663) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i75664 = i75663;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx75655 =
                                          i75664;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start75656 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a75657 =
                                              ((x10_long) ((range75669->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b75658 =
                                              ((x10_long) ((range75669->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i75664))) * (chunk_size75667))))));
                                            ((a75657) < (b75658))
                                              ? (a75657) : (b75658);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range75659 =
                                          x10::lang::LongRange::_make(i_start75656, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a75660 =
                                              range75669->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b75661 =
                                              ((x10_long) ((((x10_long) ((i_start75656) + (chunk_size75667)))) - (((x10_long) (((x10_int)1))))));
                                            ((a75660) < (b75661))
                                              ? (a75660) : (b75661);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__4<TPMGL(V),TPMGL(E)>(idx75655, i_range75659, w, value))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc13) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc13);
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
                    catch (x10::lang::CheckedThrowable* __exc14) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal75715 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc14);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable75714 = formal75715;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable75714)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable75714))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable75714));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var0);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable75714)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable75714)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable75714));
                        }
                        
                    }
                    
                }
            }
        }
        catch (x10::lang::CheckedThrowable* __exc15) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc15);
                {
                    
                    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:110-117";
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
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__6 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            x10_long tid75680 = ((x10_long) (idx75682));
            
            //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r75681 = i_range75686;
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i50914domain75675 = r75681;
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i50914min75676 = i50914domain75675->FMGL(min);
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            x10_long i50914max75677 = i50914domain75675->FMGL(max);
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.For_c
            {
                x10_long i75678;
                for (
                     //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                     i75678 = i50914min75676; ((i75678) <= (i50914max75677));
                     
                     //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10LocalAssign_c
                     i75678 = ((x10_long) ((i75678) + (((x10_long)1ll)))))
                {
                    
                    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                    x10_long i75679 = i75678;
                    
                    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<TPMGL(E)> this75671 =
                      x10aux::nullCheck(w)->FMGL(value);
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index75672 = i75679;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(E) value75673 = value;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    TPMGL(E) ret75674;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this75671->FMGL(data)).isValid())) {
                            
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
                        if (((index75672) < (((x10_long) (((x10_int)0))))) ||
                            ((index75672) >= (this75671->FMGL(data)->FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index75672), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (this75671->FMGL(data)).set(index75672, value75673);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret75674 = value75673;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret75674;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc17) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc17)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc17);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc17);
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
    x10_int idx75682;
    x10::lang::LongRange i_range75686;
    org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* w;
    TPMGL(E) value;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx75682);
        buf.write(this->i_range75686);
        buf.write(this->w);
        buf.write(this->value);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10_int that_idx75682 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range75686 = buf.read<x10::lang::LongRange>();
        org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* that_w = buf.read<org::scalegraph::xpregel::GraphEdge<TPMGL(E)>*>();
        TPMGL(E) that_value = buf.read<TPMGL(E)>();
        org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >(that_idx75682, that_i_range75686, that_w, that_value);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__6(x10_int idx75682, x10::lang::LongRange i_range75686, org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* w, TPMGL(E) value) : idx75682(idx75682), i_range75686(i_range75686), w(w), value(value) { }
    
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

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

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
        
        //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::GraphEdge<TPMGL(E)>* w = x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
                                                                 FMGL(mOutEdge);
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range75696 = (__extension__ ({
                
                //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(E)> this75697 =
                  x10aux::nullCheck(w)->FMGL(value);
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this75697->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size75692 = ((x10_long) ((((x10_long) ((range75696->
                                                               FMGL(max)) - (range75696->
                                                                               FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads75693 = x10::lang::Runtime::FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size75694 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a75695 = ((x10_long) ((((x10_long) ((((x10_long) ((size75692) + (((x10_long) (nthreads75693)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads75693)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a75695) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a75695);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var1 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable75717 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i72665max75689 = ((x10_int) ((nthreads75693) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i75690;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i75690 = ((x10_int)0);
                                         ((i75690) <= (i72665max75689));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i75690 = ((x10_int) ((i75690) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i75691 = i75690;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx75682 =
                                          i75691;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start75683 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a75684 =
                                              ((x10_long) ((range75696->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b75685 =
                                              ((x10_long) ((range75696->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i75691))) * (chunk_size75694))))));
                                            ((a75684) < (b75685))
                                              ? (a75684) : (b75685);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range75686 =
                                          x10::lang::LongRange::_make(i_start75683, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a75687 =
                                              range75696->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b75688 =
                                              ((x10_long) ((((x10_long) ((i_start75683) + (chunk_size75694)))) - (((x10_long) (((x10_int)1))))));
                                            ((a75687) < (b75688))
                                              ? (a75687) : (b75688);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__6<TPMGL(V),TPMGL(E)>(idx75682, i_range75686, w, value))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc18) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc18);
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
                    catch (x10::lang::CheckedThrowable* __exc19) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal75718 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc19);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable75717 = formal75718;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable75717)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable75717))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable75717));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var1);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable75717)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable75717)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable75717));
                        }
                        
                    }
                    
                }
            }
        }
        catch (x10::lang::CheckedThrowable* __exc20) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc20);
                {
                    
                    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:125-132";
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
        
        //#line 206 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::updateInEdge();
        }
        catch (x10::lang::CheckedThrowable* __exc33) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc33);
                {
                    
                    //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:205-209";
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
        
        //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::updateInEdgeWithValue();
        }
        catch (x10::lang::CheckedThrowable* __exc35) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc35);
                {
                    
                    //#line 223 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:220-224";
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
        
        //#line 235 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 236 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
                                FMGL(mVertexShouldBeActive))->org::scalegraph::util::Bitmap::clear(
              true);
        }
        catch (x10::lang::CheckedThrowable* __exc37) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc37);
                {
                    
                    //#line 237 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:234-238";
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
    
    static typename x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*, org::scalegraph::util::MemoryChunk<x10_byte> >::template itable <org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>* ctx, org::scalegraph::util::MemoryChunk<x10_byte> messages) {
        
        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.ClosureCall_c
        x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*>::__apply(x10aux::nullCheck(compute), 
          ctx);
    }
    
    // captured environment
    x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*>* compute;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->compute);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*>* that_compute = buf.read<x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*>*>();
        org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >(that_compute);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__14(x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*>* compute) : compute(compute) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*, org::scalegraph::util::MemoryChunk<x10_byte> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*, org::scalegraph::util::MemoryChunk<x10_byte> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:298-299";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*, org::scalegraph::util::MemoryChunk<x10_byte> >::template itable <org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*, org::scalegraph::util::MemoryChunk<x10_byte> > >, &org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V), class TPMGL(E)> const x10aux::serialization_id_t org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__14_CLOSURE
#ifndef ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__15_CLOSURE
#define ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(V), class TPMGL(E)> class org_scalegraph_xpregel_XPregelGraph__closure__15 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_int, x10_byte, x10_boolean>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_boolean __apply(x10_int id__12, x10_byte id__13) {
        
        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
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
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_byte, x10_boolean> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_byte, x10_boolean> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:300";
    }

};

template<class TPMGL(V), class TPMGL(E)> typename x10::lang::Fun_0_2<x10_int, x10_byte, x10_boolean>::template itable <org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) > >org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >::__apply, &org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V), class TPMGL(E)> x10aux::itable_entry org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_byte, x10_boolean> >, &org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E) >::_itable),x10aux::itable_entry(NULL, NULL)};

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
        
        //#line 296 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Try_c
        try {
            
            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(workers_->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->template run<x10_byte,
            x10_byte >(reinterpret_cast<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*, org::scalegraph::util::MemoryChunk<x10_byte> >*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*, org::scalegraph::util::MemoryChunk<x10_byte> > >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__14<TPMGL(V),TPMGL(E)>(compute))),
                       x10aux::class_cast_unchecked<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_byte>, x10_byte>*>(X10_NULL),
                       x10aux::class_cast_unchecked<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_byte>, x10_byte>*>(X10_NULL),
                       reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_byte, x10_boolean>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_byte, x10_boolean> >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__15<TPMGL(V),TPMGL(E)>())));
        }
        catch (x10::lang::CheckedThrowable* __exc43) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc43);
                {
                    
                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_;
    x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*>* compute;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->workers_);
        buf.write(this->compute);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) >* storage = x10aux::alloc<org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) > >();
        buf.record_reference(storage);
        x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> that_workers_ = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >();
        x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*>* that_compute = buf.read<x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*>*>();
        org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) >* this_ = new (storage) org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E) >(that_workers_, that_compute);
        return this_;
    }
    
    org_scalegraph_xpregel_XPregelGraph__closure__13(x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_, x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*>* compute) : workers_(workers_), compute(compute) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:295-302";
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
        
        //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* alloc75636 =
               ((new (memset(x10aux::alloc<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>()))
            ;
            
            //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10ConstructorCall_c
            (alloc75636)->::org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_constructor(
              team, graph->org::scalegraph::blas::DistSparseMatrix<TPMGL(E)>::ids());
            alloc75636;
        }))
        ;
        
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:64";
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
        
        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* alloc75641 =
               ((new (memset(x10aux::alloc<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>()))
            ;
            
            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10ConstructorCall_c
            (alloc75641)->::org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>::_constructor(
              team, graph->org::scalegraph::blas::DistSparseMatrix<TPMGL(E)>::ids());
            alloc75641;
        }))
        ;
        
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
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10:72";
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

//#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10FieldDecl_c

//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10FieldDecl_c

//#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_constructor(
                                           org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix) {
    
    //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.AssignPropertyCall_c
    
    //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mTeam) = (__extension__ ({
        
        //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 alloc50886 =  org::scalegraph::util::Team2::_alloc();
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* baseTeam75630 = team;
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc50886->FMGL(base) = baseTeam75630;
        alloc50886;
    }))
    ;
    
    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mWorkers) = x10::lang::PlaceLocalHandle<void>::template makeFlat<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* >(
                             (__extension__ ({
                                 
                                 //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                                 org::scalegraph::util::Team2 this56411 =
                                   this->FMGL(mTeam);
                                 x10aux::nullCheck(this56411->
                                                     FMGL(base))->placeGroup();
                             }))
                             , reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__1<TPMGL(V),TPMGL(E)>(team, edgeIndexMatrix))));
}
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_make(
                                           org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix)
{
    org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* this_ = new (memset(x10aux::alloc<org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>();
    this_->_constructor(edgeIndexMatrix);
    return this_;
}



//#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::_constructor(
                                           x10::util::Team* team,
                                           x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers) {
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.AssignPropertyCall_c
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mTeam) = (__extension__ ({
        
        //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 alloc50888 =  org::scalegraph::util::Team2::_alloc();
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* baseTeam75631 = team;
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc50888->FMGL(base) = baseTeam75631;
        alloc50888;
    }))
    ;
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
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



//#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::setGraphAndEdgeValue(
  org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph) {
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((__extension__ ({
        x10aux::nullCheck(team_->FMGL(base))->placeGroup();
    }))
    )->broadcastFlat(reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__2<TPMGL(V),TPMGL(E)>(workers_, graph))));
}

//#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot(
  ) {
    
    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals((__extension__ ({
                                    
                                    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::util::Team2 this62704 =
                                      this->FMGL(mTeam);
                                    (__extension__ ({
                                        
                                        //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                                        x10::array::Array<x10_int>* this67724 =
                                          x10aux::nullCheck(this62704->
                                                              FMGL(base))->role();
                                        
                                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                        ;
                                        
                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10_int ret67725;
                                        
                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                        goto __ret67726; __ret67726: {
                                        {
                                            
                                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                            if (x10aux::nullCheck(this67724)->
                                                  FMGL(rail))
                                            {
                                                
                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret67725 =
                                                  (x10aux::nullCheck(this67724)->
                                                     FMGL(raw))->__apply(((x10_int)0));
                                                
                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                goto __ret67726_end_;
                                            } else {
                                                
                                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                if (true &&
                                                    !(x10aux::nullCheck(this67724)->
                                                        FMGL(region)->contains(
                                                        ((x10_int)0))))
                                                {
                                                    
                                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                    x10::array::Array<void>::raiseBoundsError(
                                                      ((x10_int)0));
                                                }
                                                
                                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret67725 =
                                                  (x10aux::nullCheck(this67724)->
                                                     FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this67724)->
                                                                                                         FMGL(layout_min0)))));
                                                
                                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                goto __ret67726_end_;
                                            }
                                            
                                        }goto __ret67726_end_; __ret67726_end_: ;
                                        }
                                        ret67725;
                                        }))
                                        ;
                                    }))
                                    , ((x10_int)0)))) {
            
            //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10aux::makeStringLit("This method can be called on only the FIRST_PLACE."))));
        }
        
    }
    

//#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::setLogPrinter(
  x10::io::Printer* printer, x10_int level) {
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
      FMGL(mLogPrinter) = printer;
    
    //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
      FMGL(mLogLevel) = level;
}

//#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::graph::id::IdStruct
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ids(
  ) {
    
    //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
             FMGL(mIds);
    
}

//#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::initVertexValue(
  TPMGL(V) value) {
    
    //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((__extension__ ({
        x10aux::nullCheck(team_->FMGL(base))->placeGroup();
    }))
    )->broadcastFlat(reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__3<TPMGL(V),TPMGL(E)>(workers_, value))));
}

//#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::initEdgeValue(
  TPMGL(E) value) {
    
    //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((__extension__ ({
        x10aux::nullCheck(team_->FMGL(base))->placeGroup();
    }))
    )->broadcastFlat(reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__5<TPMGL(V),TPMGL(E)>(workers_, value))));
}

//#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10::array::PlaceGroup*
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::placeGroup(
  ) {
    
    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 this74567 = this->FMGL(mTeam);
        x10aux::nullCheck(this74567->FMGL(base))->placeGroup();
    }))
    ;
    
}

//#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10_long org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::size(
  ) {
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct this75023 = x10aux::nullCheck(this->
                                                                             FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
                                                           FMGL(mIds);
        this75023->FMGL(numberOfLocalVertexes);
    }))
    ;
    
}

//#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::__apply(
  x10_long index) {
    {
        
        //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10If_c
        if (((index) < (((x10_long) (((x10_int)0))))) || ((index) > (this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::size())))
        {
            
            //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> alloc50891 =
           org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)>::_alloc();
        
        //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker75698 =
          this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply();
        
        //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": x10.ast.X10LocalDecl_c
        x10_long id75699 = index;
        
        //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": Eval of x10.ast.X10FieldAssign_c
        alloc50891->FMGL(mWorker) = worker75698;
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/Vertex.x10": Eval of x10.ast.X10FieldAssign_c
        alloc50891->FMGL(mSrcid) = id75699;
        alloc50891;
    }))
    ;
    
}

//#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10::lang::LongRange
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::range(
  ) {
    
    //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::size()) - (((x10_long)1ll)))));
    
}

//#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> x10::lang::Iterator<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >*
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::iterator(
  ) {
    
    //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return reinterpret_cast<x10::lang::Iterator<org::scalegraph::xpregel::Vertex<TPMGL(V), TPMGL(E)> >*>((__extension__ ({
        
        //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>* alloc50893 =
           ((new (memset(x10aux::alloc<org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::XPregelGraph__VertexIterator<TPMGL(V), TPMGL(E)>()))
        ;
        
        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* worker75704 =
          this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply();
        
        //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
        alloc50893->FMGL(cur) = ((x10_long)0ll);
        
        //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
        alloc50893->FMGL(mWorker) = worker75704;
        
        //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
        alloc50893->FMGL(cur) = ((x10_long)0ll);
        alloc50893;
    }))
    );
    
}

//#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::edgeOffsets(
  ) {
    
    //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
                               FMGL(mOutEdge))->FMGL(offsets);
    
}

//#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::util::MemoryChunk<x10_long>
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::edgeIds(
  ) {
    
    //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
                               FMGL(mOutEdge))->FMGL(vertexes);
    
}

//#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::util::MemoryChunk<TPMGL(E)>
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::edgeValues(
  ) {
    
    //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck(this->FMGL(mWorkers)->x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>::__apply())->
                               FMGL(mOutEdge))->FMGL(value);
    
}

//#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::updateInEdge(
  ) {
    
    //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((__extension__ ({
        x10aux::nullCheck(team_->FMGL(base))->placeGroup();
    }))
    )->broadcastFlat(reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__8<TPMGL(V),TPMGL(E)>(workers_))));
}

//#line 216 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::updateInEdgeAndValue(
  ) {
    
    //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 218 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((__extension__ ({
        x10aux::nullCheck(team_->FMGL(base))->placeGroup();
    }))
    )->broadcastFlat(reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__9<TPMGL(V),TPMGL(E)>(workers_))));
}

//#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::resetSholdBeActiveFlag(
  ) {
    
    //#line 232 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((__extension__ ({
        x10aux::nullCheck(team_->FMGL(base))->placeGroup();
    }))
    )->broadcastFlat(reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__10<TPMGL(V),TPMGL(E)>(workers_))));
}

//#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 266 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c

//#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> void org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::once(
  x10::lang::VoidFun_0_1<org::scalegraph::xpregel::VertexContext<TPMGL(V), TPMGL(E), x10_byte, x10_byte>*>* compute) {
    
    //#line 289 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::ensurePlaceRoot();
    
    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(compute, X10_NULL))) {
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("compute closure cannot be null"))));
    }
    
    //#line 293 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Team2 team_ = this->FMGL(mTeam);
    
    //#line 294 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers_ =
      this->FMGL(mWorkers);
    
    //#line 295 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((__extension__ ({
        x10aux::nullCheck(team_->FMGL(base))->placeGroup();
    }))
    )->broadcastFlat(reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__13<TPMGL(V),TPMGL(E)>(workers_, compute))));
}

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>*
  org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::org__scalegraph__xpregel__XPregelGraph____this__org__scalegraph__xpregel__XPregelGraph(
  ) {
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
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
    
    //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* g =
       ((new (memset(x10aux::alloc<org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>()))
    ;
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team75634 = team;
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers75635 =
      x10::lang::PlaceLocalHandle<void>::template makeFlat<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* >(
        x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__16<TPMGL(V),TPMGL(E)>(team, graph))));
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    g->FMGL(mTeam) = (__extension__ ({
        
        //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 alloc75633 =  org::scalegraph::util::Team2::_alloc();
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* baseTeam75632 = team75634;
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc75633->FMGL(base) = baseTeam75632;
        alloc75633;
    }))
    ;
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    g->FMGL(mWorkers) = workers75635;
    
    //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    g->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::setGraphAndEdgeValue(
      graph);
    
    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return g;
    
}
template<class TPMGL(V), class TPMGL(E)> org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>*
  org::scalegraph::xpregel::XPregelGraph<void, void>::make(org::scalegraph::blas::DistSparseMatrix<TPMGL(E)> graph,
                                                           TPMGL(V) iv)
{
    
    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>* g =
       ((new (memset(x10aux::alloc<org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)> >(), 0, sizeof(org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>))) org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>()))
    ;
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team75639 = team;
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> workers75640 =
      x10::lang::PlaceLocalHandle<void>::template makeFlat<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>* >(
        x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::xpregel::WorkerPlaceGraph<TPMGL(V), TPMGL(E)>*> >(sizeof(org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E)>)))org_scalegraph_xpregel_XPregelGraph__closure__17<TPMGL(V),TPMGL(E)>(team, graph))));
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    g->FMGL(mTeam) = (__extension__ ({
        
        //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 alloc75638 =  org::scalegraph::util::Team2::_alloc();
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* baseTeam75637 = team75639;
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc75638->FMGL(base) = baseTeam75637;
        alloc75638;
    }))
    ;
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10FieldAssign_c
    g->FMGL(mWorkers) = workers75640;
    
    //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    g->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::setGraphAndEdgeValue(
      graph);
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": Eval of x10.ast.X10Call_c
    g->org::scalegraph::xpregel::XPregelGraph<TPMGL(V), TPMGL(E)>::initVertexValue(
      iv);
    
    //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/XPregelGraph.x10": x10.ast.X10Return_c
    return g;
    
}
#endif // ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_XPREGEL_XPREGELGRAPH_H_NODEPS
