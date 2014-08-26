#ifndef __ORG_SCALEGRAPH_GRAPH_GRAPH_H
#define __ORG_SCALEGRAPH_GRAPH_GRAPH_H

#include <x10rt.h>


#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/DistMemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/DistMemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_DISTMEMORYCHUNK_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace org { namespace scalegraph { namespace util { namespace tuple { 
template<class TPMGL(T1), class TPMGL(T2)> class Tuple2;
} } } } 
namespace org { namespace scalegraph { namespace graph { 
class VertexTranslatorBase;
} } } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class VertexTranslator__HashTranslator;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace org { namespace scalegraph { namespace graph { 
class Graph__VertexType;
} } } 
namespace org { namespace scalegraph { namespace graph { 
class VertexTranslator__NoTraslator;
} } } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class VertexTranslator__ArithmeticTranslator;
} } } 
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Box;
} } 
namespace org { namespace scalegraph { namespace io { 
class NamedDistData;
} } } 
namespace org { namespace scalegraph { namespace io { 
class ID;
} } } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace org { namespace scalegraph { namespace id { 
class Type;
} } } 
namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class EdgeList;
} } } 
namespace x10 { namespace lang { 
class IllegalOperationException;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace array { 
class Point;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace org { namespace scalegraph { namespace graph { 
class AttributeProxy;
} } } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace org { namespace scalegraph { namespace graph { 
template<class TPMGL(T)> class VertexTranslator;
} } } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace org { namespace scalegraph { namespace graph { 
class Graph__VertexInfo;
} } } 
namespace org { namespace scalegraph { namespace util { 
class MathAppend;
} } } 
namespace org { namespace scalegraph { namespace util { 
class Remote;
} } } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(Z3)> class VoidFun_0_3;
} } 
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class DistSparseMatrix;
} } } 
namespace org { namespace scalegraph { namespace blas { 
template<class TPMGL(T)> class SparseMatrix;
} } } 
namespace org { namespace scalegraph { namespace util { 
class Dist2D;
} } } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct;
} } } } 
namespace org { namespace scalegraph { namespace util { 
class StopWatch;
} } } 
namespace org { namespace scalegraph { namespace util { 
class DistScatterGather;
} } } 
namespace org { namespace scalegraph { namespace util { 
class Parallel;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace org { namespace scalegraph { namespace util { 
class Team2;
} } } 
namespace x10 { namespace lang { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace lang { 
class Short;
} } 
namespace x10 { namespace lang { 
class Float;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace compiler { 
class Pinned;
} } 
namespace org { namespace scalegraph { namespace graph { 

class Graph : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_int FMGL(vertexType);
    
    x10::util::Team* FMGL(team);
    
    x10::util::HashMap<x10::lang::String*, x10::lang::Any*>* FMGL(graphAttributes);
    
    x10::util::HashMap<x10::lang::String*, x10::lang::Any*>* FMGL(vertexAttributes);
    
    x10::util::HashMap<x10::lang::String*, x10::lang::Any*>* FMGL(edgeAttributes);
    
    x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*>
      FMGL(vertexTranslator);
    
    org::scalegraph::util::DistMemoryChunk<x10_long> FMGL(srcList);
    
    org::scalegraph::util::DistMemoryChunk<x10_long> FMGL(dstList);
    
    x10_long FMGL(numberOfVertices);
    
    x10_long FMGL(numberOfEdges);
    
    virtual x10_long numberOfVertices();
    virtual x10_long numberOfEdges();
    virtual x10::util::Team* team();
    virtual org::scalegraph::util::DistMemoryChunk<x10_long> source();
    virtual org::scalegraph::util::DistMemoryChunk<x10_long> target();
    template<class TPMGL(T)> static org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >
      createVertexTranslator(x10::util::Team* team);
    static org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >
      createConverter(x10::util::Team* team, x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>* create);
    void _constructor(x10::util::Team* team_, x10_int vertexType_,
                      x10_boolean useTranslator);
    
    static org::scalegraph::graph::Graph* _make(x10::util::Team* team_,
                                                x10_int vertexType_,
                                                x10_boolean useTranslator);
    
    static org::scalegraph::graph::Graph* make(org::scalegraph::io::NamedDistData* edgeData);
    static org::scalegraph::graph::Graph* make(org::scalegraph::io::NamedDistData* edgeData,
                                               x10_boolean renumbering);
    static org::scalegraph::graph::Graph* make(org::scalegraph::io::NamedDistData* edgeData,
                                               org::scalegraph::io::NamedDistData* vertexData,
                                               x10_boolean renumbering);
    static org::scalegraph::graph::Graph* make(org::scalegraph::graph::EdgeList<x10_long> edges);
    static org::scalegraph::graph::Graph* make(org::scalegraph::graph::EdgeList<x10_double> edges);
    static org::scalegraph::graph::Graph* makeWithTranslator(
      org::scalegraph::graph::EdgeList<x10_long> edges);
    static org::scalegraph::graph::Graph* makeWithTranslator(
      org::scalegraph::graph::EdgeList<x10_double> edges);
    static org::scalegraph::graph::Graph* makeWithTranslator(
      org::scalegraph::graph::EdgeList<org::scalegraph::util::SString> edges);
    template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      getOrCreateAttribute(x10_boolean vertexOrEdge, x10::lang::String* name,
                           x10_boolean throwAlreadyExist);
    template<class TPMGL(T)> void setAttribute(x10_boolean vertexOrEdge,
                                               x10::lang::String* name,
                                               x10_int attType,
                                               org::scalegraph::util::DistMemoryChunk<TPMGL(T)> attValues);
    template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      getVertexAttribute(x10::lang::String* name);
    template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      getEdgeAttribute(x10::lang::String* name);
    static void innerAddEdges(x10::util::Team* team_, x10_long maxVertexID,
                              x10::lang::GlobalRef<org::scalegraph::graph::Graph* > ref,
                              org::scalegraph::util::DistMemoryChunk<x10_long> srcList,
                              org::scalegraph::util::DistMemoryChunk<x10_long> dstList,
                              org::scalegraph::util::MemoryChunk<x10_long> tlSrcs,
                              org::scalegraph::util::MemoryChunk<x10_long> tlDsts);
    template<class TPMGL(T)> void genericAddEdges(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> srcs,
                                                  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> dsts);
    x10::lang::String* vertexTypeString();
    virtual void addEdges(org::scalegraph::graph::EdgeList<x10_long> edges);
    virtual void addEdges(org::scalegraph::graph::EdgeList<x10_double> edges);
    virtual void addEdges(org::scalegraph::graph::EdgeList<org::scalegraph::util::SString> edges);
    template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<x10_long>
      translateVertexIds(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> key);
    template<class TPMGL(T)> void internalSetAttributeValues(
      x10_boolean vertexOrEdge, x10::lang::String* name, x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >* indexes,
      org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values);
    template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      internalRetrieveAttributeValues(x10_boolean vertexOrEdge,
                                      x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >* indexes,
                                      org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values);
    template<class TPMGL(T)> void setEdgeAttribute(x10::lang::String* name,
                                                   org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values);
    template<class TPMGL(T)> void setEdgeAttribute(x10::lang::String* name,
                                                   org::scalegraph::util::DistMemoryChunk<x10_long> indexes,
                                                   org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values);
    template<class TPMGL(T)> void setEdgeAttribute(x10::lang::String* name,
                                                   org::scalegraph::blas::DistSparseMatrix<x10_long> distEdgeIndexMatrix,
                                                   org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values);
    template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      retrieveEdgeAttribute(org::scalegraph::util::DistMemoryChunk<x10_long> indexes,
                            org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values);
    template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      retrieveEdgeAttribute(org::scalegraph::blas::DistSparseMatrix<x10_long> distEdgeIndexMatrix,
                            org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values);
    static x10_long getLocalNumberOfVertices(org::scalegraph::graph::Graph__VertexInfo vi,
                                             x10_int role);
    template<class TPMGL(T)> void setVertexAttribute(x10::lang::String* name,
                                                     org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values);
    template<class TPMGL(T)> void setVertexAttribute(x10::lang::String* name,
                                                     org::scalegraph::util::DistMemoryChunk<x10_long> ids,
                                                     org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values);
    template<class TPMGL(T)> void setVertexAttribute(x10::lang::String* name,
                                                     org::scalegraph::blas::DistSparseMatrix<x10_long> sparseMatrix,
                                                     org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values);
    template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      retrieveVertexAttribute(org::scalegraph::util::DistMemoryChunk<x10_long> ids,
                              org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values);
    template<class TPMGL(T)> void setVertexAttribute(x10::lang::String* name,
                                                     org::scalegraph::blas::DistSparseMatrix<x10_long> sparseMatrix,
                                                     org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values,
                                                     x10_int z);
    virtual org::scalegraph::blas::DistSparseMatrix<x10_long>
      createDistEdgeIndexMatrix(org::scalegraph::util::Dist2D dist2d,
                                x10_boolean directed, x10_boolean transpose);
    template<class TPMGL(T)> org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>
      createDistSparseMatrix(org::scalegraph::util::Dist2D dist2d,
                             x10::lang::String* name, x10_boolean directed,
                             x10_boolean transpose);
    virtual x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* >
      createSimpleEdgeIndexMatrix(x10::lang::Place place,
                                  x10_boolean directed, x10_boolean transpose);
    template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      createDistAttribute(org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix,
                          x10_boolean vertexOrEdge, x10::lang::String* name);
    template<class TPMGL(T)> void createSimpleAttribute(x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > edgeIndexMatrix,
                                                        x10_boolean vertexOrEdge,
                                                        x10::lang::String* name);
    virtual void del();
    virtual x10::util::Set<x10::lang::String*>* vertexAttributeKeys(
      );
    virtual x10::util::Set<x10::lang::String*>* edgeAttributeKeys(
      );
    virtual org::scalegraph::graph::Graph* org__scalegraph__graph__Graph____this__org__scalegraph__graph__Graph(
      );
    virtual void __fieldInitializers42979();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H

namespace org { namespace scalegraph { namespace graph { 
class Graph;
} } } 

#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_NODEPS
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <org/scalegraph/graph/VertexTranslatorBase.h>
#include <x10/util/Team.h>
#include <x10/util/HashMap.h>
#include <x10/lang/String.h>
#include <x10/lang/Any.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/graph/VertexTranslator__HashTranslator.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/IllegalArgumentException.h>
#include <org/scalegraph/graph/Graph__VertexType.h>
#include <org/scalegraph/graph/VertexTranslator__NoTraslator.h>
#include <x10/lang/Double.h>
#include <org/scalegraph/graph/VertexTranslator__ArithmeticTranslator.h>
#include <org/scalegraph/util/SString.h>
#include <x10/util/Box.h>
#include <org/scalegraph/io/NamedDistData.h>
#include <org/scalegraph/io/ID.h>
#include <x10/array/Array.h>
#include <org/scalegraph/Config.h>
#include <org/scalegraph/id/Type.h>
#include <org/scalegraph/graph/EdgeList.h>
#include <x10/lang/IllegalOperationException.h>
#include <x10/lang/Iterator.h>
#include <x10/array/Point.h>
#include <x10/array/Region.h>
#include <org/scalegraph/graph/AttributeProxy.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/GlobalRef.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/Math.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <org/scalegraph/graph/VertexTranslator.h>
#include <x10/lang/CheckedThrowable.h>
#include <org/scalegraph/graph/Graph__VertexInfo.h>
#include <org/scalegraph/util/MathAppend.h>
#include <org/scalegraph/util/Remote.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/VoidFun_0_3.h>
#include <org/scalegraph/blas/DistSparseMatrix.h>
#include <org/scalegraph/blas/SparseMatrix.h>
#include <org/scalegraph/util/Dist2D.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <org/scalegraph/util/StopWatch.h>
#include <org/scalegraph/util/DistScatterGather.h>
#include <org/scalegraph/util/Parallel.h>
#include <x10/lang/Cell.h>
#include <x10/lang/Zero.h>
#include <org/scalegraph/util/Team2.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/Exception.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Iterable.h>
#include <x10/util/Set.h>
#include <x10/util/ListIterator.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Short.h>
#include <x10/lang/Float.h>
#include <x10/lang/Char.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/compiler/Pinned.h>
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_graph_Graph__closure__1<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<TPMGL(T)> __apply() {
        
        //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<void>::make<TPMGL(T) >();
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_graph_Graph__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__1<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__1() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:86";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_graph_Graph__closure__1<TPMGL(T) > >org_scalegraph_graph_Graph__closure__1<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__1<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__1<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__1<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >, &org_scalegraph_graph_Graph__closure__1<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__1<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__1<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>::template itable <org_scalegraph_graph_Graph__closure__3<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>* __apply() {
        
        //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>::_make(team,
                                                                                         vertexNames);
        
    }
    
    // captured environment
    x10::util::Team* team;
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNames;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team);
        buf.write(this->vertexNames);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::util::Team* that_team = buf.read<x10::util::Team*>();
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_vertexNames = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_Graph__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__3<TPMGL(T) >(that_team, that_vertexNames);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__3(x10::util::Team* team, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNames) : team(team), vertexNames(vertexNames) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:88";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*>::template itable <org_scalegraph_graph_Graph__closure__3<TPMGL(T) > >org_scalegraph_graph_Graph__closure__3<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__3<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__3<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__3<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__HashTranslator<TPMGL(T)>*> >, &org_scalegraph_graph_Graph__closure__3<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__3<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__3<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>::template itable <org_scalegraph_graph_Graph__closure__2<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::graph::VertexTranslatorBase* __apply() {
        
        //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return reinterpret_cast<org::scalegraph::graph::VertexTranslatorBase*>(org_scalegraph_graph_Graph__closure__3<TPMGL(T)>(team, vertexNames).__apply());
        
    }
    
    // captured environment
    x10::util::Team* team;
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNames;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team);
        buf.write(this->vertexNames);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__2<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::util::Team* that_team = buf.read<x10::util::Team*>();
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_vertexNames = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_Graph__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__2<TPMGL(T) >(that_team, that_vertexNames);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__2(x10::util::Team* team, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNames) : team(team), vertexNames(vertexNames) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:88";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>::template itable <org_scalegraph_graph_Graph__closure__2<TPMGL(T) > >org_scalegraph_graph_Graph__closure__2<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__2<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__2<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__2<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >, &org_scalegraph_graph_Graph__closure__2<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__2<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__2<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__15_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__15 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_graph_Graph__closure__15<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<TPMGL(T)> __apply() {
        
        //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<void>::make<TPMGL(T) >();
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__15<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__15<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_graph_Graph__closure__15<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__15<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__15() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:237";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_graph_Graph__closure__15<TPMGL(T) > >org_scalegraph_graph_Graph__closure__15<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__15<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__15<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__15<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >, &org_scalegraph_graph_Graph__closure__15<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__15<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__15<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__15_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__16_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__16 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_Graph__closure__16<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 300 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Try_c
        try {
            
            //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals(srcs->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply()->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                                                           dsts->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply()->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())));
            #endif//NO_ASSERTIONS
            
            //#line 303 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::graph::VertexTranslator<TPMGL(T)>* vtt_ =
              x10aux::class_cast<org::scalegraph::graph::VertexTranslator<TPMGL(T)>*>(vt_->x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*>::__apply());
            
            //#line 304 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> tlSrcs =
              x10aux::nullCheck(vtt_)->translateWithAll(srcs->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply(),
                                                        true);
            
            //#line 305 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> tlDsts =
              x10aux::nullCheck(vtt_)->translateWithAll(dsts->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply(),
                                                        true);
            
            //#line 307 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::graph::Graph::innerAddEdges(
              team_, x10aux::nullCheck(vtt_)->maxVertexID(),
              ref, srcList_, dstList_, tlSrcs, tlDsts);
        }
        catch (x10::lang::CheckedThrowable* __exc201) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc201);
                {
                    
                    //#line 310 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> srcs;
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> dsts;
    x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> vt_;
    x10::util::Team* team_;
    x10::lang::GlobalRef<org::scalegraph::graph::Graph* > ref;
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_;
    org::scalegraph::util::DistMemoryChunk<x10_long> dstList_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->srcs);
        buf.write(this->dsts);
        buf.write(this->vt_);
        buf.write(this->team_);
        buf.write(this->ref);
        buf.write(this->srcList_);
        buf.write(this->dstList_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__16<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__16<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_srcs = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_dsts = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> that_vt_ = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >();
        x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
        x10::lang::GlobalRef<org::scalegraph::graph::Graph* > that_ref = buf.read<x10::lang::GlobalRef<org::scalegraph::graph::Graph* > >();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_dstList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org_scalegraph_graph_Graph__closure__16<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__16<TPMGL(T) >(that_srcs, that_dsts, that_vt_, that_team_, that_ref, that_srcList_, that_dstList_);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__16(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> srcs, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> dsts, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> vt_, x10::util::Team* team_, x10::lang::GlobalRef<org::scalegraph::graph::Graph* > ref, org::scalegraph::util::DistMemoryChunk<x10_long> srcList_, org::scalegraph::util::DistMemoryChunk<x10_long> dstList_) : srcs(srcs), dsts(dsts), vt_(vt_), team_(team_), ref(ref), srcList_(srcList_), dstList_(dstList_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:299-312";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_Graph__closure__16<TPMGL(T) > >org_scalegraph_graph_Graph__closure__16<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__16<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__16<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__16<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__16<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__16<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__16<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__16_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__18_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__18 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::template itable <org_scalegraph_graph_Graph__closure__18<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long index, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>* put) {
        
        //#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long dstRole = ((x10_long) ((indexes_->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                           index)) & (((x10_long) (mask)))));
        
        //#line 388 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long dstIdx = ((x10_long) ((indexes_->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                          index)) >> (0x3f & (shift))));
        
        //#line 389 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.ClosureCall_c
        x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(put), 
          ((x10_int) (dstRole)), dstIdx, values_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                           index));
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> indexes_;
    x10_int mask;
    x10_int shift;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> values_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->indexes_);
        buf.write(this->mask);
        buf.write(this->shift);
        buf.write(this->values_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__18<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__18<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_indexes_ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_mask = buf.read<x10_int>();
        x10_int that_shift = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_values_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_Graph__closure__18<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__18<TPMGL(T) >(that_indexes_, that_mask, that_shift, that_values_);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__18(org::scalegraph::util::MemoryChunk<x10_long> indexes_, x10_int mask, x10_int shift, org::scalegraph::util::MemoryChunk<TPMGL(T)> values_) : indexes_(indexes_), mask(mask), shift(shift), values_(values_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:386-390";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::template itable <org_scalegraph_graph_Graph__closure__18<TPMGL(T) > >org_scalegraph_graph_Graph__closure__18<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__18<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__18<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__18<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >, &org_scalegraph_graph_Graph__closure__18<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__18<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__18<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__18_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__17_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__17 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_Graph__closure__17<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 371 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Try_c
        try {
            
            //#line 372 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> att_;
            
            //#line 373 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (vertexOrEdge) {
                
                //#line 374 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long actualLocalVertices = org::scalegraph::graph::Graph::getLocalNumberOfVertices(
                                                 vi, x10aux::nullCheck(x10aux::nullCheck(team_)->role())->x10::array::Array<x10_int>::__apply(
                                                       ((x10_int)0)));
                
                //#line 375 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                att_ = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(actualLocalVertices, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            } else {
                
                //#line 378 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                att_ = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(srcList_->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply()->org::scalegraph::util::MemoryChunk<x10_long>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            }
            
            //#line 381 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int mask = ((x10_int) ((x10aux::nullCheck(team_)->size()) - (((x10_int)1))));
            
            //#line 382 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int shift = ((x10_int) (63 - __builtin_clzl(((x10_long) (x10aux::nullCheck(team_)->size())))));
            
            //#line 383 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> indexes_ =
              x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::__apply(x10aux::nullCheck(indexes));
            
            //#line 384 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> values_ =
              values->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply();
            
            //#line 385 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Remote::put<TPMGL(T) >(
              team_, att_, indexes_->org::scalegraph::util::MemoryChunk<x10_long>::range(),
              reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >(sizeof(org_scalegraph_graph_Graph__closure__18<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__18<TPMGL(T)>(indexes_, mask, shift, values_))));
            
            //#line 392 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            att->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__set(
              att_);
        }
        catch (x10::lang::CheckedThrowable* __exc208) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc208);
                {
                    
                    //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_boolean vertexOrEdge;
    org::scalegraph::graph::Graph__VertexInfo vi;
    x10::util::Team* team_;
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_;
    x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >* indexes;
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values;
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> att;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->vertexOrEdge);
        buf.write(this->vi);
        buf.write(this->team_);
        buf.write(this->srcList_);
        buf.write(this->indexes);
        buf.write(this->values);
        buf.write(this->att);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__17<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__17<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_boolean that_vertexOrEdge = buf.read<x10_boolean>();
        org::scalegraph::graph::Graph__VertexInfo that_vi = buf.read<org::scalegraph::graph::Graph__VertexInfo>();
        x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >* that_indexes = buf.read<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>();
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_values = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_att = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_Graph__closure__17<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__17<TPMGL(T) >(that_vertexOrEdge, that_vi, that_team_, that_srcList_, that_indexes, that_values, that_att);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__17(x10_boolean vertexOrEdge, org::scalegraph::graph::Graph__VertexInfo vi, x10::util::Team* team_, org::scalegraph::util::DistMemoryChunk<x10_long> srcList_, x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >* indexes, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> att) : vertexOrEdge(vertexOrEdge), vi(vi), team_(team_), srcList_(srcList_), indexes(indexes), values(values), att(att) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:370-397";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_Graph__closure__17<TPMGL(T) > >org_scalegraph_graph_Graph__closure__17<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__17<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__17<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__17<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__17<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__17<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__17<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__17_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__20_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__20 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::template itable <org_scalegraph_graph_Graph__closure__20<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long index, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>* put) {
        
        //#line 423 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long dstRole = ((x10_long) ((indexes_->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                           index)) & (((x10_long) (mask)))));
        
        //#line 424 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long dstIdx = ((x10_long) ((indexes_->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                          index)) >> (0x3f & (shift))));
        
        //#line 425 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.ClosureCall_c
        x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(put), 
          ((x10_int) (dstRole)), dstIdx, values_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                           index));
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> indexes_;
    x10_int mask;
    x10_int shift;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> values_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->indexes_);
        buf.write(this->mask);
        buf.write(this->shift);
        buf.write(this->values_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__20<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__20<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_indexes_ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_mask = buf.read<x10_int>();
        x10_int that_shift = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_values_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_Graph__closure__20<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__20<TPMGL(T) >(that_indexes_, that_mask, that_shift, that_values_);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__20(org::scalegraph::util::MemoryChunk<x10_long> indexes_, x10_int mask, x10_int shift, org::scalegraph::util::MemoryChunk<TPMGL(T)> values_) : indexes_(indexes_), mask(mask), shift(shift), values_(values_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:422-426";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::template itable <org_scalegraph_graph_Graph__closure__20<TPMGL(T) > >org_scalegraph_graph_Graph__closure__20<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__20<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__20<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__20<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >, &org_scalegraph_graph_Graph__closure__20<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__20<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__20<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__20_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__19_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__19 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_graph_Graph__closure__19<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<TPMGL(T)> __apply() {
        
        //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> att_ = org::scalegraph::util::MemoryChunk<void>::make<TPMGL(T) >();
        
        //#line 408 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Try_c
        try {
            
            //#line 409 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (vertexOrEdge) {
                
                //#line 410 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long actualLocalVertices = org::scalegraph::graph::Graph::getLocalNumberOfVertices(
                                                 vi, x10aux::nullCheck(x10aux::nullCheck(team_)->role())->x10::array::Array<x10_int>::__apply(
                                                       ((x10_int)0)));
                
                //#line 411 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                att_ = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(actualLocalVertices, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            } else {
                
                //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                att_ = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(srcList_->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply()->org::scalegraph::util::MemoryChunk<x10_long>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            }
            
            //#line 417 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int mask = ((x10_int) ((x10aux::nullCheck(team_)->size()) - (((x10_int)1))));
            
            //#line 418 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int shift = ((x10_int) (63 - __builtin_clzl(((x10_long) (x10aux::nullCheck(team_)->size())))));
            
            //#line 419 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> indexes_ =
              x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::__apply(x10aux::nullCheck(indexes));
            
            //#line 420 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> values_ =
              values->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply();
            
            //#line 421 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Remote::put<TPMGL(T) >(
              team_, att_, indexes_->org::scalegraph::util::MemoryChunk<x10_long>::range(),
              reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >(sizeof(org_scalegraph_graph_Graph__closure__20<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__20<TPMGL(T)>(indexes_, mask, shift, values_))));
        }
        catch (x10::lang::CheckedThrowable* __exc210) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc210);
                {
                    
                    //#line 430 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
        
        //#line 432 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return att_;
        
    }
    
    // captured environment
    x10_boolean vertexOrEdge;
    org::scalegraph::graph::Graph__VertexInfo vi;
    x10::util::Team* team_;
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_;
    x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >* indexes;
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->vertexOrEdge);
        buf.write(this->vi);
        buf.write(this->team_);
        buf.write(this->srcList_);
        buf.write(this->indexes);
        buf.write(this->values);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__19<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__19<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_boolean that_vertexOrEdge = buf.read<x10_boolean>();
        org::scalegraph::graph::Graph__VertexInfo that_vi = buf.read<org::scalegraph::graph::Graph__VertexInfo>();
        x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >* that_indexes = buf.read<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>();
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_values = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_Graph__closure__19<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__19<TPMGL(T) >(that_vertexOrEdge, that_vi, that_team_, that_srcList_, that_indexes, that_values);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__19(x10_boolean vertexOrEdge, org::scalegraph::graph::Graph__VertexInfo vi, x10::util::Team* team_, org::scalegraph::util::DistMemoryChunk<x10_long> srcList_, x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >* indexes, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) : vertexOrEdge(vertexOrEdge), vi(vi), team_(team_), srcList_(srcList_), indexes(indexes), values(values) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:406-433";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_graph_Graph__closure__19<TPMGL(T) > >org_scalegraph_graph_Graph__closure__19<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__19<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__19<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__19<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >, &org_scalegraph_graph_Graph__closure__19<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__19<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__19<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__19_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__21_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__21_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__21 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_Graph__closure__21<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 444 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long numEdges = srcList_->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply()->org::scalegraph::util::MemoryChunk<x10_long>::size();
        
        //#line 445 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(numEdges, values->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply()->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())))
        {
            
            //#line 446 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("The number of attribute values is not match the number of edges"))));
        }
        
    }
    
    // captured environment
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_;
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->srcList_);
        buf.write(this->values);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__21<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__21<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_values = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_Graph__closure__21<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__21<TPMGL(T) >(that_srcList_, that_values);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__21(org::scalegraph::util::DistMemoryChunk<x10_long> srcList_, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) : srcList_(srcList_), values(values) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:443-447";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_Graph__closure__21<TPMGL(T) > >org_scalegraph_graph_Graph__closure__21<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__21<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__21<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__21<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__21<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__21<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__21<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__21_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__22_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__22 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_Graph__closure__22<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return indexes->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
    }
    
    // captured environment
    org::scalegraph::util::DistMemoryChunk<x10_long> indexes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->indexes);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__22<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__22<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistMemoryChunk<x10_long> that_indexes = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org_scalegraph_graph_Graph__closure__22<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__22<TPMGL(T) >(that_indexes);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__22(org::scalegraph::util::DistMemoryChunk<x10_long> indexes) : indexes(indexes) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:459";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_Graph__closure__22<TPMGL(T) > >org_scalegraph_graph_Graph__closure__22<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__22<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__22<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__22<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_Graph__closure__22<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__22<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__22<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__22_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__23_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__23_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__23 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_Graph__closure__23<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 469 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return distEdgeIndexMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::__apply()->
                 FMGL(values);
        
    }
    
    // captured environment
    org::scalegraph::blas::DistSparseMatrix<x10_long> distEdgeIndexMatrix;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->distEdgeIndexMatrix);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__23<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__23<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::blas::DistSparseMatrix<x10_long> that_distEdgeIndexMatrix = buf.read<org::scalegraph::blas::DistSparseMatrix<x10_long> >();
        org_scalegraph_graph_Graph__closure__23<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__23<TPMGL(T) >(that_distEdgeIndexMatrix);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__23(org::scalegraph::blas::DistSparseMatrix<x10_long> distEdgeIndexMatrix) : distEdgeIndexMatrix(distEdgeIndexMatrix) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:469";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_Graph__closure__23<TPMGL(T) > >org_scalegraph_graph_Graph__closure__23<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__23<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__23<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__23<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_Graph__closure__23<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__23<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__23<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__23_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__24_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__24_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__24 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_Graph__closure__24<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 473 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return indexes->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
    }
    
    // captured environment
    org::scalegraph::util::DistMemoryChunk<x10_long> indexes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->indexes);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__24<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__24<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistMemoryChunk<x10_long> that_indexes = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org_scalegraph_graph_Graph__closure__24<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__24<TPMGL(T) >(that_indexes);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__24(org::scalegraph::util::DistMemoryChunk<x10_long> indexes) : indexes(indexes) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:473";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_Graph__closure__24<TPMGL(T) > >org_scalegraph_graph_Graph__closure__24<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__24<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__24<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__24<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_Graph__closure__24<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__24<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__24<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__24_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__25_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__25_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__25 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_Graph__closure__25<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 477 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return distEdgeIndexMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::__apply()->
                 FMGL(values);
        
    }
    
    // captured environment
    org::scalegraph::blas::DistSparseMatrix<x10_long> distEdgeIndexMatrix;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->distEdgeIndexMatrix);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__25<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__25<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::blas::DistSparseMatrix<x10_long> that_distEdgeIndexMatrix = buf.read<org::scalegraph::blas::DistSparseMatrix<x10_long> >();
        org_scalegraph_graph_Graph__closure__25<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__25<TPMGL(T) >(that_distEdgeIndexMatrix);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__25(org::scalegraph::blas::DistSparseMatrix<x10_long> distEdgeIndexMatrix) : distEdgeIndexMatrix(distEdgeIndexMatrix) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:477";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_Graph__closure__25<TPMGL(T) > >org_scalegraph_graph_Graph__closure__25<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__25<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__25<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__25<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_Graph__closure__25<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__25<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__25<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__25_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__26_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__26_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__26 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_Graph__closure__26<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 518 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Try_c
        try {
            
            //#line 519 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> values_ = values->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply();
            
            //#line 520 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long actualLocalVertices = org::scalegraph::graph::Graph::getLocalNumberOfVertices(
                                             vi, x10aux::nullCheck(x10aux::nullCheck(team_)->role())->x10::array::Array<x10_int>::__apply(
                                                   ((x10_int)0)));
            
            //#line 521 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (((actualLocalVertices) > (values_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())))
            {
                
                //#line 522 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("The number of attribute values is not match the number of vertices"))));
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc218) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc218);
                {
                    
                    //#line 525 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values;
    org::scalegraph::graph::Graph__VertexInfo vi;
    x10::util::Team* team_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->values);
        buf.write(this->vi);
        buf.write(this->team_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__26<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__26<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_values = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        org::scalegraph::graph::Graph__VertexInfo that_vi = buf.read<org::scalegraph::graph::Graph__VertexInfo>();
        x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
        org_scalegraph_graph_Graph__closure__26<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__26<TPMGL(T) >(that_values, that_vi, that_team_);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__26(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values, org::scalegraph::graph::Graph__VertexInfo vi, x10::util::Team* team_) : values(values), vi(vi), team_(team_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:517-527";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_Graph__closure__26<TPMGL(T) > >org_scalegraph_graph_Graph__closure__26<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__26<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__26<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__26<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__26<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__26<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__26<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__26_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__27_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__27_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__27 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_Graph__closure__27<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 542 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return ids->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
    }
    
    // captured environment
    org::scalegraph::util::DistMemoryChunk<x10_long> ids;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ids);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__27<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__27<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistMemoryChunk<x10_long> that_ids = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org_scalegraph_graph_Graph__closure__27<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__27<TPMGL(T) >(that_ids);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__27(org::scalegraph::util::DistMemoryChunk<x10_long> ids) : ids(ids) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:542";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_Graph__closure__27<TPMGL(T) > >org_scalegraph_graph_Graph__closure__27<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__27<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__27<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__27<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_Graph__closure__27<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__27<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__27<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__27_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__28_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__28_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__28 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_Graph__closure__28<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 559 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return ids->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
    }
    
    // captured environment
    org::scalegraph::util::DistMemoryChunk<x10_long> ids;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ids);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__28<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__28<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistMemoryChunk<x10_long> that_ids = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org_scalegraph_graph_Graph__closure__28<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__28<TPMGL(T) >(that_ids);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__28(org::scalegraph::util::DistMemoryChunk<x10_long> ids) : ids(ids) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:559";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_graph_Graph__closure__28<TPMGL(T) > >org_scalegraph_graph_Graph__closure__28<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__28<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__28<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__28<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_Graph__closure__28<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__28<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__28<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__28_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__30_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__30_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__30 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>::template itable <org_scalegraph_graph_Graph__closure__30<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long i, TPMGL(T) v) {
        
        //#line 588 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if (((i) < (actualLocalVertices))) {
            
            //#line 588 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            att_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(i, v);
        }
        
    }
    
    // captured environment
    x10_long actualLocalVertices;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> att_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->actualLocalVertices);
        buf.write(this->att_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__30<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__30<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_actualLocalVertices = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_att_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_Graph__closure__30<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__30<TPMGL(T) >(that_actualLocalVertices, that_att_);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__30(x10_long actualLocalVertices, org::scalegraph::util::MemoryChunk<TPMGL(T)> att_) : actualLocalVertices(actualLocalVertices), att_(att_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, TPMGL(T)> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, TPMGL(T)> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:587-589";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>::template itable <org_scalegraph_graph_Graph__closure__30<TPMGL(T) > >org_scalegraph_graph_Graph__closure__30<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__30<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__30<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__30<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, TPMGL(T)> >, &org_scalegraph_graph_Graph__closure__30<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__30<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__30<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__30_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__31_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__31_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__31 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::template itable <org_scalegraph_graph_Graph__closure__31<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long index, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>* put) {
        
        //#line 600 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long rr = ((x10_long) ((((x10_long) ((index) * (((x10_long) (sizeOfDist)))))) + (((x10_long) (roleInDist)))));
        
        //#line 601 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long dstRole = ((x10_long) ((rr) & (((x10_long) (((x10_int) ((sizeOfGraph) - (((x10_int)1)))))))));
        
        //#line 602 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long dstIdx = ((x10_long) ((rr) >> (0x3f & (logSizeOfGraph))));
        
        //#line 603 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.ClosureCall_c
        x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>::__apply(x10aux::nullCheck(put), 
          ((x10_int) (dstRole)), dstIdx, values_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                           index));
    }
    
    // captured environment
    x10_int sizeOfDist;
    x10_int roleInDist;
    x10_int sizeOfGraph;
    x10_int logSizeOfGraph;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> values_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->sizeOfDist);
        buf.write(this->roleInDist);
        buf.write(this->sizeOfGraph);
        buf.write(this->logSizeOfGraph);
        buf.write(this->values_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__31<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__31<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_sizeOfDist = buf.read<x10_int>();
        x10_int that_roleInDist = buf.read<x10_int>();
        x10_int that_sizeOfGraph = buf.read<x10_int>();
        x10_int that_logSizeOfGraph = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_values_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_Graph__closure__31<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__31<TPMGL(T) >(that_sizeOfDist, that_roleInDist, that_sizeOfGraph, that_logSizeOfGraph, that_values_);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__31(x10_int sizeOfDist, x10_int roleInDist, x10_int sizeOfGraph, x10_int logSizeOfGraph, org::scalegraph::util::MemoryChunk<TPMGL(T)> values_) : sizeOfDist(sizeOfDist), roleInDist(roleInDist), sizeOfGraph(sizeOfGraph), logSizeOfGraph(logSizeOfGraph), values_(values_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:599-604";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::template itable <org_scalegraph_graph_Graph__closure__31<TPMGL(T) > >org_scalegraph_graph_Graph__closure__31<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__31<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__31<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__31<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >, &org_scalegraph_graph_Graph__closure__31<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__31<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__31<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__31_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__32_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__32_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__32 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::template itable <org_scalegraph_graph_Graph__closure__32<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long index, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>* put) {
     
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__32<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__32<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_graph_Graph__closure__32<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__32<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__32() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:608";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>::template itable <org_scalegraph_graph_Graph__closure__32<TPMGL(T) > >org_scalegraph_graph_Graph__closure__32<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__32<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__32<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__32<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >, &org_scalegraph_graph_Graph__closure__32<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__32<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__32<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__32_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__29_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__29_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__29 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_Graph__closure__29<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Try_c
        try {
            
            //#line 578 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int roleInGraph = x10aux::nullCheck(x10aux::nullCheck(team_)->role())->x10::array::Array<x10_int>::__apply(
                                    ((x10_int)0));
            
            //#line 579 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int sizeOfGraph = x10aux::nullCheck(team_)->size();
            
            //#line 580 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int logSizeOfGraph = ((x10_int) (63 - __builtin_clzl(((x10_long) (sizeOfGraph)))));
            
            //#line 581 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long actualLocalVertices = org::scalegraph::graph::Graph::getLocalNumberOfVertices(
                                             vi, x10aux::nullCheck(x10aux::nullCheck(team_)->role())->x10::array::Array<x10_int>::__apply(
                                                   ((x10_int)0)));
            
            //#line 582 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(attValues->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply()->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                                       ((x10_long)0ll))))
            {
                
                //#line 583 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                attValues->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__set(
                  org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(actualLocalVertices, 0, false, (x10_byte*)(void*)__FILE__, __LINE__));
            }
            
            //#line 585 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> att_ =
              attValues->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply();
            
            //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>* setter =
              reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, TPMGL(T)>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, TPMGL(T)> >(sizeof(org_scalegraph_graph_Graph__closure__30<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__30<TPMGL(T)>(actualLocalVertices, att_)));
            
            //#line 591 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(sparseMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::dist()->org::scalegraph::util::Dist2D::z(),
                                       z))) {
                
                //#line 592 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::util::Team* allTeam = sparseMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::dist()->org::scalegraph::util::Dist2D::allTeam();
                
                //#line 593 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int roleInDist = x10aux::nullCheck(x10aux::nullCheck(allTeam)->role())->x10::array::Array<x10_int>::__apply(
                                       ((x10_int)0));
                
                //#line 594 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int sizeOfDist = x10aux::nullCheck(allTeam)->size();
                
                //#line 595 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long localsize = sparseMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::ids()->org::scalegraph::graph::id::IdStruct::numberOfLocalVertexes();
                
                //#line 596 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(T)> values_ =
                  values->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply();
                
                //#line 598 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Remote::put<TPMGL(T) >(
                  team_, setter, x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((localsize) - (((x10_long) (((x10_int)1))))))),
                  reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >(sizeof(org_scalegraph_graph_Graph__closure__31<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__31<TPMGL(T)>(sizeOfDist, roleInDist, sizeOfGraph, logSizeOfGraph, values_))));
            } else {
                
                //#line 607 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Remote::put<TPMGL(T) >(
                  team_, setter, x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long)0ll)),
                  reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_int, x10_long, TPMGL(T)>*> >(sizeof(org_scalegraph_graph_Graph__closure__32<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__32<TPMGL(T)>())));
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc223) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc223);
                {
                    
                    //#line 612 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::util::Team* team_;
    org::scalegraph::graph::Graph__VertexInfo vi;
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> attValues;
    org::scalegraph::blas::DistSparseMatrix<x10_long> sparseMatrix;
    x10_int z;
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team_);
        buf.write(this->vi);
        buf.write(this->attValues);
        buf.write(this->sparseMatrix);
        buf.write(this->z);
        buf.write(this->values);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__29<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__29<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
        org::scalegraph::graph::Graph__VertexInfo that_vi = buf.read<org::scalegraph::graph::Graph__VertexInfo>();
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_attValues = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        org::scalegraph::blas::DistSparseMatrix<x10_long> that_sparseMatrix = buf.read<org::scalegraph::blas::DistSparseMatrix<x10_long> >();
        x10_int that_z = buf.read<x10_int>();
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_values = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_Graph__closure__29<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__29<TPMGL(T) >(that_team_, that_vi, that_attValues, that_sparseMatrix, that_z, that_values);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__29(x10::util::Team* team_, org::scalegraph::graph::Graph__VertexInfo vi, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> attValues, org::scalegraph::blas::DistSparseMatrix<x10_long> sparseMatrix, x10_int z, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) : team_(team_), vi(vi), attValues(attValues), sparseMatrix(sparseMatrix), z(z), values(values) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:576-614";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_graph_Graph__closure__29<TPMGL(T) > >org_scalegraph_graph_Graph__closure__29<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__29<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__29<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__29<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__29<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__29<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__29<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__29_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__37_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__37_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__37 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_graph_Graph__closure__37<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 758 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> counts = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                               ((x10_int) (tid)));
        
        //#line 759 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if (directed) {
            
            //#line 760 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i44419domain44682 = r;
            
            //#line 760 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44419min44683 = i44419domain44682->FMGL(min);
            
            //#line 760 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44419max44684 = i44419domain44682->FMGL(max);
            
            //#line 760 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
            {
                x10_long i44685;
                for (
                     //#line 760 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                     i44685 = i44419min44683; ((i44685) <= (i44419max44684));
                     
                     //#line 760 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                     i44685 = ((x10_long) ((i44685) + (((x10_long)1ll)))))
                {
                    
                    //#line 760 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long i44686 = i44685;
                    
                    //#line 761 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44680 = srcList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44686);
                    
                    //#line 762 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44681 = dstList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44686);
                    
                    //#line 763 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x44677 =
                      counts;
                    
                    //#line 763 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int y44678 = roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                       ((x10_long) ((((x10_long) ((v44681) & (cmask)))) | (((x10_long) ((v44680) & (rmask)))))));
                    
                    //#line 763 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 763 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int ret44679;
                    
                    //#line 763 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int r44676 = ((x10_int) ((x44677->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                    y44678)) + (((x10_int)1))));
                    
                    //#line 763 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    x44677->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                      y44678, r44676);
                    
                    //#line 763 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                    ret44679 = r44676;
                    
                    //#line 763 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Local_c
                    ret44679;
                }
            }
            
        } else {
            
            //#line 767 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i44436domain44697 = r;
            
            //#line 767 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44436min44698 = i44436domain44697->
                                        FMGL(min);
            
            //#line 767 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44436max44699 = i44436domain44697->
                                        FMGL(max);
            
            //#line 767 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
            {
                x10_long i44700;
                for (
                     //#line 767 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                     i44700 = i44436min44698; ((i44700) <= (i44436max44699));
                     
                     //#line 767 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                     i44700 = ((x10_long) ((i44700) + (((x10_long)1ll)))))
                {
                    
                    //#line 767 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long i44701 = i44700;
                    
                    //#line 768 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44695 = srcList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44701);
                    
                    //#line 769 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44696 = dstList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44701);
                    
                    //#line 770 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x44689 =
                      counts;
                    
                    //#line 770 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int y44690 = roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                       ((x10_long) ((((x10_long) ((v44696) & (cmask)))) | (((x10_long) ((v44695) & (rmask)))))));
                    
                    //#line 770 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 770 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int ret44691;
                    
                    //#line 770 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int r44687 = ((x10_int) ((x44689->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                    y44690)) + (((x10_int)1))));
                    
                    //#line 770 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    x44689->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                      y44690, r44687);
                    
                    //#line 770 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                    ret44691 = r44687;
                    
                    //#line 770 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Local_c
                    ret44691;
                    
                    //#line 771 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x44692 =
                      counts;
                    
                    //#line 771 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int y44693 = roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                       ((x10_long) ((((x10_long) ((v44695) & (cmask)))) | (((x10_long) ((v44696) & (rmask)))))));
                    
                    //#line 771 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 771 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int ret44694;
                    
                    //#line 771 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int r44688 = ((x10_int) ((x44692->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                    y44693)) + (((x10_int)1))));
                    
                    //#line 771 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    x44692->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                      y44693, r44688);
                    
                    //#line 771 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                    ret44694 = r44688;
                    
                    //#line 771 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Local_c
                    ret44694;
                }
            }
            
        }
        
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_boolean directed;
    org::scalegraph::util::MemoryChunk<x10_long> srcList__;
    org::scalegraph::util::MemoryChunk<x10_long> dstList__;
    x10_long cmask;
    x10_long rmask;
    org::scalegraph::util::MemoryChunk<x10_int> roleMap;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->directed);
        buf.write(this->srcList__);
        buf.write(this->dstList__);
        buf.write(this->cmask);
        buf.write(this->rmask);
        buf.write(this->roleMap);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__37<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__37<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_boolean that_directed = buf.read<x10_boolean>();
        org::scalegraph::util::MemoryChunk<x10_long> that_srcList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_dstList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_long that_cmask = buf.read<x10_long>();
        x10_long that_rmask = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<x10_int> that_roleMap = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_graph_Graph__closure__37<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__37<TPMGL(T) >(that_scatterGather, that_directed, that_srcList__, that_dstList__, that_cmask, that_rmask, that_roleMap);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__37(org::scalegraph::util::DistScatterGather scatterGather, x10_boolean directed, org::scalegraph::util::MemoryChunk<x10_long> srcList__, org::scalegraph::util::MemoryChunk<x10_long> dstList__, x10_long cmask, x10_long rmask, org::scalegraph::util::MemoryChunk<x10_int> roleMap) : scatterGather(scatterGather), directed(directed), srcList__(srcList__), dstList__(dstList__), cmask(cmask), rmask(rmask), roleMap(roleMap) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:757-774";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_graph_Graph__closure__37<TPMGL(T) > >org_scalegraph_graph_Graph__closure__37<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__37<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__37<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__37<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_graph_Graph__closure__37<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__37<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__37<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__37_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__38_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__38_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__38 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_graph_Graph__closure__38<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 782 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> offsets = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                ((x10_int) (tid)));
        
        //#line 798 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if (directed) {
            
            //#line 799 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i44453domain44709 = r;
            
            //#line 799 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44453min44710 = i44453domain44709->FMGL(min);
            
            //#line 799 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44453max44711 = i44453domain44709->FMGL(max);
            
            //#line 799 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
            {
                x10_long i44712;
                for (
                     //#line 799 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                     i44712 = i44453min44710; ((i44712) <= (i44453max44711));
                     
                     //#line 799 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                     i44712 = ((x10_long) ((i44712) + (((x10_long)1ll)))))
                {
                    
                    //#line 799 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long i44713 = i44712;
                    
                    //#line 800 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44703 = srcList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44713);
                    
                    //#line 801 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44704 = dstList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44713);
                    
                    //#line 802 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int off44705 = ((x10_int) (((__extension__ ({
                        
                        //#line 802 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x44706 =
                          offsets;
                        
                        //#line 802 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int y44707 = roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                           ((x10_long) ((((x10_long) ((v44704) & (cmask)))) | (((x10_long) ((v44703) & (rmask)))))));
                        
                        //#line 802 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 802 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int ret44708;
                        
                        //#line 802 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int r44702 = ((x10_int) ((x44706->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                        y44707)) + (((x10_int)1))));
                        
                        //#line 802 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x44706->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                          y44707, r44702);
                        
                        //#line 802 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                        ret44708 = r44702;
                        ret44708;
                    }))
                    ) - (((x10_int)1))));
                    
                    //#line 803 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendSrcV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44705, v44703);
                    
                    //#line 804 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendDstV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44705, v44704);
                    
                    //#line 805 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendValues->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                      off44705, att_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                  i44713));
                }
            }
            
        } else {
            
            //#line 809 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i44470domain44726 = r;
            
            //#line 809 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44470min44727 = i44470domain44726->
                                        FMGL(min);
            
            //#line 809 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44470max44728 = i44470domain44726->
                                        FMGL(max);
            
            //#line 809 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
            {
                x10_long i44729;
                for (
                     //#line 809 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                     i44729 = i44470min44727; ((i44729) <= (i44470max44728));
                     
                     //#line 809 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                     i44729 = ((x10_long) ((i44729) + (((x10_long)1ll)))))
                {
                    
                    //#line 809 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long i44730 = i44729;
                    
                    //#line 810 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44716 = srcList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44730);
                    
                    //#line 811 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44717 = dstList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44730);
                    
                    //#line 812 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int off44718 = ((x10_int) (((__extension__ ({
                        
                        //#line 812 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x44719 =
                          offsets;
                        
                        //#line 812 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int y44720 = roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                           ((x10_long) ((((x10_long) ((v44717) & (cmask)))) | (((x10_long) ((v44716) & (rmask)))))));
                        
                        //#line 812 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 812 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int ret44721;
                        
                        //#line 812 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int r44714 = ((x10_int) ((x44719->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                        y44720)) + (((x10_int)1))));
                        
                        //#line 812 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x44719->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                          y44720, r44714);
                        
                        //#line 812 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                        ret44721 = r44714;
                        ret44721;
                    }))
                    ) - (((x10_int)1))));
                    
                    //#line 813 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendSrcV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44718, v44716);
                    
                    //#line 814 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendDstV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44718, v44717);
                    
                    //#line 815 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendValues->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                      off44718, att_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                  i44730));
                    
                    //#line 816 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int off44722 = ((x10_int) (((__extension__ ({
                        
                        //#line 816 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x44723 =
                          offsets;
                        
                        //#line 816 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int y44724 = roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                           ((x10_long) ((((x10_long) ((v44716) & (cmask)))) | (((x10_long) ((v44717) & (rmask)))))));
                        
                        //#line 816 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 816 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int ret44725;
                        
                        //#line 816 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int r44715 = ((x10_int) ((x44723->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                        y44724)) + (((x10_int)1))));
                        
                        //#line 816 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x44723->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                          y44724, r44715);
                        
                        //#line 816 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                        ret44725 = r44715;
                        ret44725;
                    }))
                    ) - (((x10_int)1))));
                    
                    //#line 817 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendSrcV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44722, v44717);
                    
                    //#line 818 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendDstV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44722, v44716);
                    
                    //#line 819 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendValues->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                      off44722, att_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                  i44730));
                }
            }
            
        }
        
    }
    
    // captured environment
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_boolean directed;
    org::scalegraph::util::MemoryChunk<x10_long> srcList__;
    org::scalegraph::util::MemoryChunk<x10_long> dstList__;
    x10_long cmask;
    x10_long rmask;
    org::scalegraph::util::MemoryChunk<x10_int> roleMap;
    org::scalegraph::util::MemoryChunk<x10_long> sendSrcV;
    org::scalegraph::util::MemoryChunk<x10_long> sendDstV;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> sendValues;
    org::scalegraph::util::MemoryChunk<TPMGL(T)> att_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->scatterGather);
        buf.write(this->directed);
        buf.write(this->srcList__);
        buf.write(this->dstList__);
        buf.write(this->cmask);
        buf.write(this->rmask);
        buf.write(this->roleMap);
        buf.write(this->sendSrcV);
        buf.write(this->sendDstV);
        buf.write(this->sendValues);
        buf.write(this->att_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__38<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__38<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_boolean that_directed = buf.read<x10_boolean>();
        org::scalegraph::util::MemoryChunk<x10_long> that_srcList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_dstList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_long that_cmask = buf.read<x10_long>();
        x10_long that_rmask = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<x10_int> that_roleMap = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendSrcV = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendDstV = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_sendValues = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_att_ = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_Graph__closure__38<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__38<TPMGL(T) >(that_scatterGather, that_directed, that_srcList__, that_dstList__, that_cmask, that_rmask, that_roleMap, that_sendSrcV, that_sendDstV, that_sendValues, that_att_);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__38(org::scalegraph::util::DistScatterGather scatterGather, x10_boolean directed, org::scalegraph::util::MemoryChunk<x10_long> srcList__, org::scalegraph::util::MemoryChunk<x10_long> dstList__, x10_long cmask, x10_long rmask, org::scalegraph::util::MemoryChunk<x10_int> roleMap, org::scalegraph::util::MemoryChunk<x10_long> sendSrcV, org::scalegraph::util::MemoryChunk<x10_long> sendDstV, org::scalegraph::util::MemoryChunk<TPMGL(T)> sendValues, org::scalegraph::util::MemoryChunk<TPMGL(T)> att_) : scatterGather(scatterGather), directed(directed), srcList__(srcList__), dstList__(dstList__), cmask(cmask), rmask(rmask), roleMap(roleMap), sendSrcV(sendSrcV), sendDstV(sendDstV), sendValues(sendValues), att_(att_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:781-822";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_graph_Graph__closure__38<TPMGL(T) > >org_scalegraph_graph_Graph__closure__38<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__38<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__38<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__38<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_graph_Graph__closure__38<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__38<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__38<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__38_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__36_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__36_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__36 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >::template itable <org_scalegraph_graph_Graph__closure__36<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > __apply() {
        
        //#line 730 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
        
        //#line 731 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistScatterGather scatterGather = org::scalegraph::util::DistScatterGather::_make(team_);
        
        //#line 732 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> srcList__ = srcList_->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 733 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> dstList__ = dstList_->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 734 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids = dist2d->org::scalegraph::util::Dist2D::getIds(
                                                     vi->FMGL(numberOfVertices),
                                                     org::scalegraph::graph::Graph::getLocalNumberOfVertices(
                                                       vi,
                                                       x10aux::nullCheck(x10aux::nullCheck(team_)->role())->x10::array::Array<x10_int>::__apply(
                                                         ((x10_int)0))),
                                                     transpose);
        
        //#line 736 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> roleMap =
          org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (x10aux::nullCheck(dist2d->org::scalegraph::util::Dist2D::allTeam())->size())), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 737 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10::lang::Place>* places = x10aux::nullCheck(dist2d->org::scalegraph::util::Dist2D::allTeam())->places();
        
        //#line 738 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
        {
            x10::lang::Iterator<x10::array::Point*>* id44411;
            for (
                 //#line 738 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                 id44411 = x10aux::nullCheck(places)->FMGL(region)->iterator();
                 x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id44411));
                 ) {
                
                //#line 738 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::array::Point* id34 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id44411));
                
                //#line 738 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int i = x10aux::nullCheck(id34)->x10::array::Point::__apply(
                              ((x10_int)0));
                
                //#line 739 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                  i, x10aux::nullCheck(x10aux::nullCheck(team_)->role(
                                         x10aux::nullCheck(places)->x10::array::Array<x10::lang::Place>::__apply(
                                           i)))->x10::array::Array<x10_int>::__apply(
                       ((x10_int)0)));
            }
        }
        
        //#line 752 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long rmask = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (ids->
                                                                                    FMGL(lgr)))))) - (((x10_long) (((x10_int)1))))));
        
        //#line 753 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long cmask = ((x10_long) ((((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (((x10_int) ((ids->
                                                                                                               FMGL(lgc)) + (ids->
                                                                                                                               FMGL(lgr))))))))) - (((x10_long) (((x10_int)1))))))) - (rmask)));
        
        //#line 754 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> att_ =
          att->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply();
        
        //#line 756 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                     FMGL(id), ((x10_int)0))))
        {
            
            //#line 756 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
              x10aux::makeStringLit("start graph construction"));
        }
        
        //#line 757 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::iter(srcList__->org::scalegraph::util::MemoryChunk<x10_long>::range(),
                                              reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_graph_Graph__closure__37<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__37<TPMGL(T)>(scatterGather, directed, srcList__, dstList__, cmask, rmask, roleMap))));
        
        //#line 775 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        scatterGather->org::scalegraph::util::DistScatterGather::sum();
        
        //#line 776 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                     FMGL(id), ((x10_int)0))))
        {
            
            //#line 776 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
              x10aux::makeStringLit("count edge finished"));
        }
        
        //#line 777 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_int sendCount = scatterGather->org::scalegraph::util::DistScatterGather::sendCount();
        
        //#line 778 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> sendSrcV =
          org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (sendCount)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 779 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> sendDstV =
          org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (sendCount)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 780 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> sendValues =
          org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (sendCount)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 781 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::iter(srcList__->org::scalegraph::util::MemoryChunk<x10_long>::range(),
                                              reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_graph_Graph__closure__38<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__38<TPMGL(T)>(scatterGather, directed, srcList__, dstList__, cmask, rmask, roleMap, sendSrcV, sendDstV, sendValues, att_))));
        
        //#line 841 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                     FMGL(id), ((x10_int)0))))
        {
            
            //#line 841 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
              x10aux::makeStringLit("complete creating send data"));
        }
        
        //#line 842 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> recvSrcV =
          scatterGather->scatter<x10_long >(sendSrcV);
        
        //#line 842 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        sendSrcV->org::scalegraph::util::MemoryChunk<x10_long>::del();
        
        //#line 843 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> recvDstV =
          scatterGather->scatter<x10_long >(sendDstV);
        
        //#line 843 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        sendDstV->org::scalegraph::util::MemoryChunk<x10_long>::del();
        
        //#line 844 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> recvValues =
          scatterGather->scatter<TPMGL(T) >(sendValues);
        
        //#line 844 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        sendValues->org::scalegraph::util::MemoryChunk<TPMGL(T)>::del();
        
        //#line 846 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> >::_make(ids,
                                                                                                                                                 org::scalegraph::blas::SparseMatrix<TPMGL(T)>::_make(recvSrcV,
                                                                                                                                                                                                      recvDstV,
                                                                                                                                                                                                      recvValues,
                                                                                                                                                                                                      ids));
        
    }
    
    // captured environment
    x10::util::Team* team_;
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_;
    org::scalegraph::util::DistMemoryChunk<x10_long> dstList_;
    org::scalegraph::util::Dist2D dist2d;
    org::scalegraph::graph::Graph__VertexInfo vi;
    x10_boolean transpose;
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> att;
    x10_boolean directed;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team_);
        buf.write(this->srcList_);
        buf.write(this->dstList_);
        buf.write(this->dist2d);
        buf.write(this->vi);
        buf.write(this->transpose);
        buf.write(this->att);
        buf.write(this->directed);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__36<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__36<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_dstList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::Dist2D that_dist2d = buf.read<org::scalegraph::util::Dist2D>();
        org::scalegraph::graph::Graph__VertexInfo that_vi = buf.read<org::scalegraph::graph::Graph__VertexInfo>();
        x10_boolean that_transpose = buf.read<x10_boolean>();
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_att = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        x10_boolean that_directed = buf.read<x10_boolean>();
        org_scalegraph_graph_Graph__closure__36<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__36<TPMGL(T) >(that_team_, that_srcList_, that_dstList_, that_dist2d, that_vi, that_transpose, that_att, that_directed);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__36(x10::util::Team* team_, org::scalegraph::util::DistMemoryChunk<x10_long> srcList_, org::scalegraph::util::DistMemoryChunk<x10_long> dstList_, org::scalegraph::util::Dist2D dist2d, org::scalegraph::graph::Graph__VertexInfo vi, x10_boolean transpose, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> att, x10_boolean directed) : team_(team_), srcList_(srcList_), dstList_(dstList_), dist2d(dist2d), vi(vi), transpose(transpose), att(att), directed(directed) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:729-847";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >::template itable <org_scalegraph_graph_Graph__closure__36<TPMGL(T) > >org_scalegraph_graph_Graph__closure__36<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__36<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__36<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__36<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > > >, &org_scalegraph_graph_Graph__closure__36<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__36<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__36<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__36_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__43_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__43_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__43 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::template itable <org_scalegraph_graph_Graph__closure__43<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long i, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>* get) {
        
        //#line 970 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long rr = ((x10_long) ((((x10_long) ((i) * (((x10_long) (sizeOfDist)))))) + (((x10_long) (roleInDist)))));
        
        //#line 971 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long dstRole = ((x10_long) ((rr) & (((x10_long) (((x10_int) ((sizeOfGraph) - (((x10_int)1)))))))));
        
        //#line 972 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long dstIdx = ((x10_long) ((rr) >> (0x3f & (logSizeOfGraph))));
        
        //#line 973 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.ClosureCall_c
        x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::__apply(x10aux::nullCheck(get), 
          i, ((x10_int) (dstRole)), dstIdx);
    }
    
    // captured environment
    x10_int sizeOfDist;
    x10_int roleInDist;
    x10_int sizeOfGraph;
    x10_int logSizeOfGraph;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->sizeOfDist);
        buf.write(this->roleInDist);
        buf.write(this->sizeOfGraph);
        buf.write(this->logSizeOfGraph);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__43<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__43<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_sizeOfDist = buf.read<x10_int>();
        x10_int that_roleInDist = buf.read<x10_int>();
        x10_int that_sizeOfGraph = buf.read<x10_int>();
        x10_int that_logSizeOfGraph = buf.read<x10_int>();
        org_scalegraph_graph_Graph__closure__43<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__43<TPMGL(T) >(that_sizeOfDist, that_roleInDist, that_sizeOfGraph, that_logSizeOfGraph);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__43(x10_int sizeOfDist, x10_int roleInDist, x10_int sizeOfGraph, x10_int logSizeOfGraph) : sizeOfDist(sizeOfDist), roleInDist(roleInDist), sizeOfGraph(sizeOfGraph), logSizeOfGraph(logSizeOfGraph) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:969-974";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::template itable <org_scalegraph_graph_Graph__closure__43<TPMGL(T) > >org_scalegraph_graph_Graph__closure__43<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__43<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__43<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__43<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*> >, &org_scalegraph_graph_Graph__closure__43<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__43<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__43<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__43_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__44_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__44_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__44 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::template itable <org_scalegraph_graph_Graph__closure__44<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long i, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>* get) {
        
        //#line 983 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long index = edgeIndexes->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                           i);
        
        //#line 984 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.ClosureCall_c
        x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>::__apply(x10aux::nullCheck(get), 
          i, ((x10_int) (((x10_long) ((index) & (rankMask))))),
          ((x10_long) ((index) >> (0x3f & (shift)))));
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> edgeIndexes;
    x10_long rankMask;
    x10_int shift;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->edgeIndexes);
        buf.write(this->rankMask);
        buf.write(this->shift);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__44<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__44<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_edgeIndexes = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_long that_rankMask = buf.read<x10_long>();
        x10_int that_shift = buf.read<x10_int>();
        org_scalegraph_graph_Graph__closure__44<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__44<TPMGL(T) >(that_edgeIndexes, that_rankMask, that_shift);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__44(org::scalegraph::util::MemoryChunk<x10_long> edgeIndexes, x10_long rankMask, x10_int shift) : edgeIndexes(edgeIndexes), rankMask(rankMask), shift(shift) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:982-985";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>::template itable <org_scalegraph_graph_Graph__closure__44<TPMGL(T) > >org_scalegraph_graph_Graph__closure__44<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__44<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__44<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__44<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*> >, &org_scalegraph_graph_Graph__closure__44<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__44<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__44<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__44_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__42_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__42_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_graph_Graph__closure__42 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_graph_Graph__closure__42<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<TPMGL(T)> __apply() {
        
        //#line 956 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Try_c
        try {
            
            //#line 957 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (vertexOrEdge) {
                
                //#line 958 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int roleInGraph = x10aux::nullCheck(x10aux::nullCheck(team_)->role())->x10::array::Array<x10_int>::__apply(
                                        ((x10_int)0));
                
                //#line 959 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int sizeOfGraph = x10aux::nullCheck(team_)->size();
                
                //#line 960 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int logSizeOfGraph = ((x10_int) (63 - __builtin_clzl(((x10_long) (sizeOfGraph)))));
                
                //#line 962 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::util::Team* allTeam = edgeIndexMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::dist()->org::scalegraph::util::Dist2D::allTeam();
                
                //#line 963 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int roleInDist = x10aux::nullCheck(x10aux::nullCheck(allTeam)->role())->x10::array::Array<x10_int>::__apply(
                                       ((x10_int)0));
                
                //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int sizeOfDist = x10aux::nullCheck(allTeam)->size();
                
                //#line 965 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long localsize = ((x10_long) ((((x10_long)1ll)) << (0x3f & (edgeIndexMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::ids()->
                                                                                  FMGL(lgl)))));
                
                //#line 967 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(T)> distAtt =
                  org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(localsize, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 968 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Remote::get<TPMGL(T) >(
                  team_, att->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply(),
                  distAtt, distAtt->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range(),
                  reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*> >(sizeof(org_scalegraph_graph_Graph__closure__43<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__43<TPMGL(T)>(sizeOfDist, roleInDist, sizeOfGraph, logSizeOfGraph))));
                
                //#line 975 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return distAtt;
                
            } else {
                
                //#line 978 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int shift = ((x10_int) (63 - __builtin_clzl(((x10_long) (x10aux::nullCheck(team_)->size())))));
                
                //#line 979 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long rankMask = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (shift))))) - (((x10_long) (((x10_int)1))))));
                
                //#line 980 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> edgeIndexes =
                  edgeIndexMatrix->org::scalegraph::blas::DistSparseMatrix<x10_long>::__apply()->
                    FMGL(values);
                
                //#line 981 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(T)> distAtt =
                  org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(edgeIndexes->org::scalegraph::util::MemoryChunk<x10_long>::size(), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 982 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Remote::get<TPMGL(T) >(
                  team_, att->org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::__apply(),
                  distAtt, distAtt->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range(),
                  reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::VoidFun_0_3<x10_long, x10_int, x10_long>*> >(sizeof(org_scalegraph_graph_Graph__closure__44<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__44<TPMGL(T)>(edgeIndexes, rankMask, shift))));
                
                //#line 986 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return distAtt;
                
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc230) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc230);
                {
                    
                    //#line 990 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                    
                    //#line 991 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make(e)));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_boolean vertexOrEdge;
    x10::util::Team* team_;
    org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix;
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> att;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->vertexOrEdge);
        buf.write(this->team_);
        buf.write(this->edgeIndexMatrix);
        buf.write(this->att);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__42<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__42<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_boolean that_vertexOrEdge = buf.read<x10_boolean>();
        x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
        org::scalegraph::blas::DistSparseMatrix<x10_long> that_edgeIndexMatrix = buf.read<org::scalegraph::blas::DistSparseMatrix<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<TPMGL(T)> that_att = buf.read<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >();
        org_scalegraph_graph_Graph__closure__42<TPMGL(T) >* this_ = new (storage) org_scalegraph_graph_Graph__closure__42<TPMGL(T) >(that_vertexOrEdge, that_team_, that_edgeIndexMatrix, that_att);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__42(x10_boolean vertexOrEdge, x10::util::Team* team_, org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> att) : vertexOrEdge(vertexOrEdge), team_(team_), edgeIndexMatrix(edgeIndexMatrix), att(att) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:955-993";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_graph_Graph__closure__42<TPMGL(T) > >org_scalegraph_graph_Graph__closure__42<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__42<TPMGL(T) >::__apply, &org_scalegraph_graph_Graph__closure__42<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_graph_Graph__closure__42<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >, &org_scalegraph_graph_Graph__closure__42<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__42<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__42<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__42_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_GENERICS
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_GENERICS
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_createVertexTranslator_185
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_createVertexTranslator_185
template<class TPMGL(T)> org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >
  org::scalegraph::graph::Graph::createVertexTranslator(x10::util::Team* team) {
    
    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> vertexNames =
      org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_make(x10aux::nullCheck(team)->placeGroup(),
                                                              reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(sizeof(org_scalegraph_graph_Graph__closure__1<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__1<TPMGL(T)>())));
    
    //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> vertexTranslator =
      x10::lang::PlaceLocalHandle<void>::template makeFlat<org::scalegraph::graph::VertexTranslatorBase* >(
        x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >(sizeof(org_scalegraph_graph_Graph__closure__2<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__2<TPMGL(T)>(team, vertexNames))));
    
    //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >::_make(x10aux::class_cast_unchecked<x10::lang::Any*>(vertexNames),
                                                                                                                                                     vertexTranslator);
    
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_createVertexTranslator_185
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_getOrCreateAttribute_195
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_getOrCreateAttribute_195
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::graph::Graph::getOrCreateAttribute(x10_boolean vertexOrEdge,
                                                      x10::lang::String* name,
                                                      x10_boolean throwAlreadyExist) {
    
    //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::util::HashMap<x10::lang::String*, x10::lang::Any*>* attributes =
      vertexOrEdge ? (this->FMGL(vertexAttributes)) : (this->
                                                         FMGL(edgeAttributes));
    
    //#line 232 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::lang::Any* att = attributes->getOrElse(name, x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL));
    
    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(att, X10_NULL))) {
        
        //#line 234 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if (throwAlreadyExist) {
            
            //#line 234 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10aux::makeStringLit("key already exists"))));
        }
        
        //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(att);
        
    }
    
    //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> newAtt =
      org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_make(x10aux::nullCheck(this->
                                                                                  FMGL(team))->placeGroup(),
                                                              reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(sizeof(org_scalegraph_graph_Graph__closure__15<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__15<TPMGL(T)>())));
    
    //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    attributes->put(name, x10aux::class_cast_unchecked<x10::lang::Any*>(newAtt));
    
    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return newAtt;
    
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_getOrCreateAttribute_195
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_setAttribute_196
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_setAttribute_196
template<class TPMGL(T)> void org::scalegraph::graph::Graph::setAttribute(
  x10_boolean vertexOrEdge, x10::lang::String* name, x10_int attType,
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> attValues) {
    
    //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::util::HashMap<x10::lang::String*, x10::lang::Any*>* attributes =
      vertexOrEdge ? (this->FMGL(vertexAttributes)) : (this->
                                                         FMGL(edgeAttributes));
    
    //#line 245 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    attributes->put(name, x10aux::class_cast_unchecked<x10::lang::Any*>(attValues));
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_setAttribute_196
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_getVertexAttribute_197
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_getVertexAttribute_197
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::graph::Graph::getVertexAttribute(x10::lang::String* name) {
    
    //#line 252 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(this->
                                                                                   FMGL(vertexAttributes)->getOrThrow(
                                                                                   name));
    
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_getVertexAttribute_197
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_getEdgeAttribute_198
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_getEdgeAttribute_198
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::graph::Graph::getEdgeAttribute(x10::lang::String* name) {
    
    //#line 258 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(this->
                                                                                   FMGL(edgeAttributes)->getOrThrow(
                                                                                   name));
    
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_getEdgeAttribute_198
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_genericAddEdges_200
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_genericAddEdges_200
template<class TPMGL(T)> void org::scalegraph::graph::Graph::genericAddEdges(
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> srcs, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> dsts) {
    
    //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> vt_ =
      this->FMGL(vertexTranslator);
    
    //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team_ = this->FMGL(team);
    
    //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::lang::GlobalRef<org::scalegraph::graph::Graph* > ref =
      x10::lang::GlobalRef<org::scalegraph::graph::Graph* >::_make(this);
    
    //#line 296 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_ =
      this->FMGL(srcList);
    
    //#line 297 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> dstList_ =
      this->FMGL(dstList);
    
    //#line 299 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(this->FMGL(team))->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__16<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__16<TPMGL(T)>(srcs, dsts, vt_, team_, ref, srcList_, dstList_))));
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_genericAddEdges_200
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_translateVertexIds_206
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_translateVertexIds_206
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<x10_long>
  org::scalegraph::graph::Graph::translateVertexIds(org::scalegraph::util::DistMemoryChunk<TPMGL(T)> key) {
    
    //#line 360 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return org::scalegraph::graph::VertexTranslator<void>::template translate<TPMGL(T) >(
             this->FMGL(vertexTranslator), key, false);
    
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_translateVertexIds_206
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_internalSetAttributeValues_207
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_internalSetAttributeValues_207
template<class TPMGL(T)> void org::scalegraph::graph::Graph::internalSetAttributeValues(
  x10_boolean vertexOrEdge, x10::lang::String* name, x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >* indexes,
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) {
    
    //#line 364 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> att =
      this->template getOrCreateAttribute<TPMGL(T) >(vertexOrEdge,
                                                     name,
                                                     false);
    
    //#line 365 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team_ = this->FMGL(team);
    
    //#line 367 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_ =
      this->FMGL(srcList);
    
    //#line 368 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph__VertexInfo vi = org::scalegraph::graph::Graph__VertexInfo::_make(this->
                                                                                                      FMGL(vertexTranslator),
                                                                                                    this->
                                                                                                      FMGL(vertexType),
                                                                                                    this->
                                                                                                      FMGL(numberOfVertices),
                                                                                                    x10aux::nullCheck(this->
                                                                                                                        FMGL(team))->size());
    
    //#line 370 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team_)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__17<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__17<TPMGL(T)>(vertexOrEdge, vi, team_, srcList_, indexes, values, att))));
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_internalSetAttributeValues_207
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_internalRetrieveAttributeValues_209
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_internalRetrieveAttributeValues_209
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::graph::Graph::internalRetrieveAttributeValues(
  x10_boolean vertexOrEdge, x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >* indexes,
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) {
    
    //#line 401 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team_ = this->FMGL(team);
    
    //#line 403 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_ =
      this->FMGL(srcList);
    
    //#line 404 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph__VertexInfo vi = org::scalegraph::graph::Graph__VertexInfo::_make(this->
                                                                                                      FMGL(vertexTranslator),
                                                                                                    this->
                                                                                                      FMGL(vertexType),
                                                                                                    this->
                                                                                                      FMGL(numberOfVertices),
                                                                                                    x10aux::nullCheck(this->
                                                                                                                        FMGL(team))->size());
    
    //#line 406 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_make(x10aux::nullCheck(team_)->placeGroup(),
                                                                   reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(sizeof(org_scalegraph_graph_Graph__closure__19<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__19<TPMGL(T)>(vertexOrEdge, vi, team_, srcList_, indexes, values))));
    
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_internalRetrieveAttributeValues_209
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_setEdgeAttribute_211
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_setEdgeAttribute_211
template<class TPMGL(T)> void org::scalegraph::graph::Graph::setEdgeAttribute(
  x10::lang::String* name, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) {
    
    //#line 442 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_ =
      this->FMGL(srcList);
    
    //#line 443 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(this->FMGL(team))->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__21<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__21<TPMGL(T)>(srcList_, values))));
    
    //#line 448 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    this->FMGL(edgeAttributes)->put(name, x10aux::class_cast_unchecked<x10::lang::Any*>(values));
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_setEdgeAttribute_211
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_setEdgeAttribute_212
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_setEdgeAttribute_212
template<class TPMGL(T)> void org::scalegraph::graph::Graph::setEdgeAttribute(
  x10::lang::String* name, org::scalegraph::util::DistMemoryChunk<x10_long> indexes,
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) {
    
    //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    this->template internalSetAttributeValues<TPMGL(T) >(
      false, name, reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_Graph__closure__22<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__22<TPMGL(T)>(indexes))),
      values);
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_setEdgeAttribute_212
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_setEdgeAttribute_213
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_setEdgeAttribute_213
template<class TPMGL(T)> void org::scalegraph::graph::Graph::setEdgeAttribute(
  x10::lang::String* name, org::scalegraph::blas::DistSparseMatrix<x10_long> distEdgeIndexMatrix,
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) {
    
    //#line 469 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    this->template internalSetAttributeValues<TPMGL(T) >(
      false, name, reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_Graph__closure__23<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__23<TPMGL(T)>(distEdgeIndexMatrix))),
      values);
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_setEdgeAttribute_213
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_retrieveEdgeAttribute_214
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_retrieveEdgeAttribute_214
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::graph::Graph::retrieveEdgeAttribute(org::scalegraph::util::DistMemoryChunk<x10_long> indexes,
                                                       org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) {
    
    //#line 473 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->template internalRetrieveAttributeValues<TPMGL(T) >(
             false, reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_Graph__closure__24<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__24<TPMGL(T)>(indexes))),
             values);
    
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_retrieveEdgeAttribute_214
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_retrieveEdgeAttribute_215
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_retrieveEdgeAttribute_215
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::graph::Graph::retrieveEdgeAttribute(org::scalegraph::blas::DistSparseMatrix<x10_long> distEdgeIndexMatrix,
                                                       org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) {
    
    //#line 477 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->template internalRetrieveAttributeValues<TPMGL(T) >(
             false, reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_Graph__closure__25<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__25<TPMGL(T)>(distEdgeIndexMatrix))),
             values);
    
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_retrieveEdgeAttribute_215
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_setVertexAttribute_217
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_setVertexAttribute_217
template<class TPMGL(T)> void org::scalegraph::graph::Graph::setVertexAttribute(
  x10::lang::String* name, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) {
    
    //#line 514 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team_ = this->FMGL(team);
    
    //#line 515 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph__VertexInfo vi = org::scalegraph::graph::Graph__VertexInfo::_make(this->
                                                                                                      FMGL(vertexTranslator),
                                                                                                    this->
                                                                                                      FMGL(vertexType),
                                                                                                    this->
                                                                                                      FMGL(numberOfVertices),
                                                                                                    x10aux::nullCheck(this->
                                                                                                                        FMGL(team))->size());
    
    //#line 517 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team_)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__26<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__26<TPMGL(T)>(values, vi, team_))));
    
    //#line 529 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    this->FMGL(vertexAttributes)->put(name, x10aux::class_cast_unchecked<x10::lang::Any*>(values));
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_setVertexAttribute_217
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_setVertexAttribute_219
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_setVertexAttribute_219
template<class TPMGL(T)> void org::scalegraph::graph::Graph::setVertexAttribute(
  x10::lang::String* name, org::scalegraph::util::DistMemoryChunk<x10_long> ids,
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) {
    
    //#line 542 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    this->template internalSetAttributeValues<TPMGL(T) >(
      true, name, reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_Graph__closure__27<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__27<TPMGL(T)>(ids))),
      values);
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_setVertexAttribute_219
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_setVertexAttribute_220
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_setVertexAttribute_220
template<class TPMGL(T)> void org::scalegraph::graph::Graph::setVertexAttribute(
  x10::lang::String* name, org::scalegraph::blas::DistSparseMatrix<x10_long> sparseMatrix,
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) {
    
    //#line 555 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    this->template setVertexAttribute<TPMGL(T) >(name, sparseMatrix,
                                                 values, ((x10_int)0));
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_setVertexAttribute_220
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_retrieveVertexAttribute_221
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_retrieveVertexAttribute_221
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::graph::Graph::retrieveVertexAttribute(
  org::scalegraph::util::DistMemoryChunk<x10_long> ids, org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values) {
    
    //#line 559 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->template internalRetrieveAttributeValues<TPMGL(T) >(
             true, reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_Graph__closure__28<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__28<TPMGL(T)>(ids))),
             values);
    
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_retrieveVertexAttribute_221
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_setVertexAttribute_222
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_setVertexAttribute_222
template<class TPMGL(T)> void org::scalegraph::graph::Graph::setVertexAttribute(
  x10::lang::String* name, org::scalegraph::blas::DistSparseMatrix<x10_long> sparseMatrix,
  org::scalegraph::util::DistMemoryChunk<TPMGL(T)> values,
  x10_int z) {
    
    //#line 572 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> attValues =
      this->template getOrCreateAttribute<TPMGL(T) >(true,
                                                     name,
                                                     false);
    
    //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team_ = this->FMGL(team);
    
    //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph__VertexInfo vi = org::scalegraph::graph::Graph__VertexInfo::_make(this->
                                                                                                      FMGL(vertexTranslator),
                                                                                                    this->
                                                                                                      FMGL(vertexType),
                                                                                                    this->
                                                                                                      FMGL(numberOfVertices),
                                                                                                    x10aux::nullCheck(this->
                                                                                                                        FMGL(team))->size());
    
    //#line 576 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team_)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__29<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__29<TPMGL(T)>(team_, vi, attValues, sparseMatrix, z, values))));
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_setVertexAttribute_222
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_createDistSparseMatrix_225
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_createDistSparseMatrix_225
template<class TPMGL(T)> org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>
  org::scalegraph::graph::Graph::createDistSparseMatrix(org::scalegraph::util::Dist2D dist2d,
                                                        x10::lang::String* name,
                                                        x10_boolean directed,
                                                        x10_boolean transpose) {
    
    //#line 723 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team_ = this->FMGL(team);
    
    //#line 724 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_ =
      this->FMGL(srcList);
    
    //#line 725 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> dstList_ =
      this->FMGL(dstList);
    
    //#line 726 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph__VertexInfo vi = org::scalegraph::graph::Graph__VertexInfo::_make(this->
                                                                                                      FMGL(vertexTranslator),
                                                                                                    this->
                                                                                                      FMGL(vertexType),
                                                                                                    this->
                                                                                                      FMGL(numberOfVertices),
                                                                                                    x10aux::nullCheck(this->
                                                                                                                        FMGL(team))->size());
    
    //#line 727 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> att =
      this->template getEdgeAttribute<TPMGL(T) >(name);
    
    //#line 729 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return org::scalegraph::blas::DistSparseMatrix<TPMGL(T)>::_make(dist2d,
                                                                    reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<TPMGL(T)> > > >(sizeof(org_scalegraph_graph_Graph__closure__36<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__36<TPMGL(T)>(team_, srcList_, dstList_, dist2d, vi, transpose, att, directed))));
    
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_createDistSparseMatrix_225
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_createDistAttribute_229
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_createDistAttribute_229
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::graph::Graph::createDistAttribute(org::scalegraph::blas::DistSparseMatrix<x10_long> edgeIndexMatrix,
                                                     x10_boolean vertexOrEdge,
                                                     x10::lang::String* name) {
    
    //#line 949 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team_ = this->FMGL(team);
    
    //#line 950 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> att =
      vertexOrEdge ? (this->template getVertexAttribute<TPMGL(T) >(
                        name)) : (this->template getEdgeAttribute<TPMGL(T) >(
                                    name));
    
    //#line 952 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_long verticesPerPlace = ((x10_long) ((this->FMGL(numberOfVertices)) / x10aux::zeroCheck(((x10_long) (x10aux::nullCheck(this->
                                                                                                                                 FMGL(team))->size())))));
    
    //#line 953 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_int vertexType_ = this->FMGL(vertexType);
    
    //#line 955 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return org::scalegraph::util::DistMemoryChunk<TPMGL(T)>::_make(x10aux::nullCheck(team_)->placeGroup(),
                                                                   reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(sizeof(org_scalegraph_graph_Graph__closure__42<TPMGL(T)>)))org_scalegraph_graph_Graph__closure__42<TPMGL(T)>(vertexOrEdge, team_, edgeIndexMatrix, att))));
    
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_createDistAttribute_229
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH_H_createSimpleAttribute_231
#define ORG_SCALEGRAPH_GRAPH_GRAPH_H_createSimpleAttribute_231
template<class TPMGL(T)> void org::scalegraph::graph::Graph::createSimpleAttribute(
  x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > edgeIndexMatrix,
  x10_boolean vertexOrEdge, x10::lang::String* name) {
    
    //#line 1004 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team_ = this->FMGL(team);
    
    //#line 1005 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<TPMGL(T)> att =
      vertexOrEdge ? (this->template getVertexAttribute<TPMGL(T) >(
                        name)) : (this->template getEdgeAttribute<TPMGL(T) >(
                                    name));
    
}
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_createSimpleAttribute_231
#endif // ORG_SCALEGRAPH_GRAPH_GRAPH_H_GENERICS
#endif // __ORG_SCALEGRAPH_GRAPH_GRAPH_H_NODEPS
