/*************************************************/
/* START of GraphGenerator */
#include <org/scalegraph/graph/GraphGenerator.h>

#include <x10/lang/Long.h>
#include <org/scalegraph/graph/EdgeList.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/util/Team.h>
#include <org/scalegraph/Config.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/array/Array.h>
#include <x10/lang/LongRange.h>
#include <org/scalegraph/util/random/Random.h>
#include <org/scalegraph/util/Parallel.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/Double.h>
#include <x10/lang/GlobalRef.h>
#include <x10/lang/Cell.h>
#include <org/scalegraph/util/Team2.h>
#include <x10/lang/Iterator.h>
#include <x10/array/Point.h>
#include <x10/array/Region.h>
#include <x10/lang/Error.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/Float.h>
#include <org/scalegraph/util/MathAppend.h>
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                                                                             FMGL(id),
                                                                                           ((x10_int)0)))
          ? (((x10_long) ((numLocalEdges) - (((x10_long) (((x10_int)1)))))))
          : (numLocalEdges), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__1* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__1>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__1* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__1(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__1(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:69";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                                                                             FMGL(id),
                                                                                           ((x10_int)0)))
          ? (((x10_long) ((numLocalEdges) - (((x10_long) (((x10_int)1)))))))
          : (numLocalEdges), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__2* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__2>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__2* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__2(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__2(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:71";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__3 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__3> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> srcMem_ = srcMemory->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> dstMem_ = dstMemory->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_int role = x10aux::nullCheck(x10aux::nullCheck(team)->role())->x10::array::Array<x10_int>::__apply(
                         ((x10_int)0));
        
        //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_int indexOffset = (x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                                       FMGL(id),
                                                     ((x10_int)0)))
          ? (((x10_int)1)) : (((x10_int)0));
        
        //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i42807domain42934 = srcMem_->org::scalegraph::util::MemoryChunk<x10_long>::range();
        
        //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long i42807min42935 = i42807domain42934->FMGL(min);
        
        //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long i42807max42936 = i42807domain42934->FMGL(max);
        
        //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
        {
            x10_long i42937;
            for (
                 //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                 i42937 = i42807min42935; ((i42937) <= (i42807max42936));
                 
                 //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                 i42937 = ((x10_long) ((i42937) + (((x10_long)1ll)))))
            {
                
                //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_long i42938 = i42937;
                
                //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_long src42932 = ((x10_long) ((((x10_long) ((((x10_long) (teamSize))) * (((x10_long) ((i42938) + (((x10_long) (indexOffset))))))))) + (((x10_long) (role)))));
                
                //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_long dst42933 = ((x10_long) ((src42932) / x10aux::zeroCheck(((x10_long) (((x10_int)2))))));
                
                //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
                srcMem_->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  i42938, src42932);
                
                //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
                dstMem_->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  i42938, dst42933);
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory;
    org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory;
    x10::util::Team* team;
    x10_int teamSize;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->srcMemory);
        buf.write(this->dstMemory);
        buf.write(this->team);
        buf.write(this->teamSize);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__3* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__3>();
        buf.record_reference(storage);
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_dstMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        x10::util::Team* that_team = buf.read<x10::util::Team*>();
        x10_int that_teamSize = buf.read<x10_int>();
        org_scalegraph_graph_GraphGenerator__closure__3* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__3(that_srcMemory, that_dstMemory, that_team, that_teamSize);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__3(org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory, org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory, x10::util::Team* team, x10_int teamSize) : srcMemory(srcMemory), dstMemory(dstMemory), team(team), teamSize(teamSize) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:73-86";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__4 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__4> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make(numLocalEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__4* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__4>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__4* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__4(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__4(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:101";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__5 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__5> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make(numLocalEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__5* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__5>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__5* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__5(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__5(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:103";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_graph_GraphGenerator__closure__7 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_GraphGenerator__closure__7> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::random::Random* rnd_ = x10aux::nullCheck(rnd)->clone();
        
        //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
        rnd_->skip(((x10_long) ((((x10_long) ((offset) + (r->FMGL(min))))) * (((x10_long) (((x10_int)4)))))));
        
        //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> srcMem_ = srcMemory->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> dstMem_ = dstMemory->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long vertexMask = ((x10_long) ((numVertices) - (((x10_long) (((x10_int)1))))));
        
        //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i42824domain42939 = r;
        
        //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long i42824min42940 = i42824domain42939->FMGL(min);
        
        //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long i42824max42941 = i42824domain42939->FMGL(max);
        
        //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
        {
            x10_long i42942;
            for (
                 //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                 i42942 = i42824min42940; ((i42942) <= (i42824max42941));
                 
                 //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                 i42942 = ((x10_long) ((i42942) + (((x10_long)1ll))))) {
                
                //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_long i42943 = i42942;
                
                //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
                srcMem_->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  i42943, ((x10_long) ((rnd_->nextLong()) & (vertexMask))));
                
                //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
                dstMem_->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  i42943, ((x10_long) ((rnd_->nextLong()) & (vertexMask))));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::random::Random* rnd;
    x10_long offset;
    org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory;
    org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory;
    x10_long numVertices;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->rnd);
        buf.write(this->offset);
        buf.write(this->srcMemory);
        buf.write(this->dstMemory);
        buf.write(this->numVertices);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__7* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__7>();
        buf.record_reference(storage);
        org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
        x10_long that_offset = buf.read<x10_long>();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_dstMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        x10_long that_numVertices = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__7* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__7(that_rnd, that_offset, that_srcMemory, that_dstMemory, that_numVertices);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__7(org::scalegraph::util::random::Random* rnd, x10_long offset, org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory, org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory, x10_long numVertices) : rnd(rnd), offset(offset), srcMemory(srcMemory), dstMemory(dstMemory), numVertices(numVertices) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:108-119";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__7_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__6 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__6> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_int role = x10aux::nullCheck(x10aux::nullCheck(team)->role())->x10::array::Array<x10_int>::__apply(
                         ((x10_int)0));
        
        //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long offset = ((x10_long) ((((x10_long) (role))) * (numLocalEdges)));
        
        //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((numLocalEdges) - (((x10_long) (((x10_int)1))))))),
                                              reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_graph_GraphGenerator__closure__7)))org_scalegraph_graph_GraphGenerator__closure__7(rnd, offset, srcMemory, dstMemory, numVertices))));
    }
    
    // captured environment
    x10::util::Team* team;
    x10_long numLocalEdges;
    org::scalegraph::util::random::Random* rnd;
    org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory;
    org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory;
    x10_long numVertices;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team);
        buf.write(this->numLocalEdges);
        buf.write(this->rnd);
        buf.write(this->srcMemory);
        buf.write(this->dstMemory);
        buf.write(this->numVertices);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__6* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__6>();
        buf.record_reference(storage);
        x10::util::Team* that_team = buf.read<x10::util::Team*>();
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_dstMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        x10_long that_numVertices = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__6* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__6(that_team, that_numLocalEdges, that_rnd, that_srcMemory, that_dstMemory, that_numVertices);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__6(x10::util::Team* team, x10_long numLocalEdges, org::scalegraph::util::random::Random* rnd, org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory, org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory, x10_long numVertices) : team(team), numLocalEdges(numLocalEdges), rnd(rnd), srcMemory(srcMemory), dstMemory(dstMemory), numVertices(numVertices) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:105-120";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__6_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__8_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__8 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__8> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 t2 = org::scalegraph::util::Team2::_make(team);
        
        //#line 135 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> src = org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 136 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
        src->org::scalegraph::util::MemoryChunk<x10_long>::__set(((x10_int)0),
                                                                 x10::lang::Fun_0_0<x10_long>::__apply(x10aux::nullCheck(getSize)));
        
        //#line 137 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> dst = (x10aux::struct_equals(x10::lang::Place::place((sizeArray)->location),
                                                                                  x10::lang::Place::_make(x10aux::here)))
          ? (x10aux::nullCheck(x10::lang::GlobalRef__LocalEval::getLocalOrCopy<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* >(sizeArray))->x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >::__apply())
          : (org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int)0))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__));
        
        //#line 138 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
        t2->gather<x10_long >(((x10_int)0), src, dst);
    }
    
    // captured environment
    x10::util::Team* team;
    x10::lang::Fun_0_0<x10_long>* getSize;
    x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* > sizeArray;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team);
        buf.write(this->getSize);
        buf.write(this->sizeArray);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__8* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__8>();
        buf.record_reference(storage);
        x10::util::Team* that_team = buf.read<x10::util::Team*>();
        x10::lang::Fun_0_0<x10_long>* that_getSize = buf.read<x10::lang::Fun_0_0<x10_long>*>();
        x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* > that_sizeArray = buf.read<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* > >();
        org_scalegraph_graph_GraphGenerator__closure__8* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__8(that_team, that_getSize, that_sizeArray);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__8(x10::util::Team* team, x10::lang::Fun_0_0<x10_long>* getSize, x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* > sizeArray) : team(team), getSize(getSize), sizeArray(sizeArray) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:133-139";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__8_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__9_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__9 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >::itable<org_scalegraph_graph_GraphGenerator__closure__9> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_double> __apply() {
        
        //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_double >::_make(x10::lang::Fun_0_0<x10_long>::__apply(x10aux::nullCheck(getSize)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10::lang::Fun_0_0<x10_long>* getSize;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->getSize);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__9* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__9>();
        buf.record_reference(storage);
        x10::lang::Fun_0_0<x10_long>* that_getSize = buf.read<x10::lang::Fun_0_0<x10_long>*>();
        org_scalegraph_graph_GraphGenerator__closure__9* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__9(that_getSize);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__9(x10::lang::Fun_0_0<x10_long>* getSize) : getSize(getSize) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:142";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__9_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__11_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_graph_GraphGenerator__closure__11 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_GraphGenerator__closure__11> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::random::Random* rnd_ = x10aux::nullCheck(rnd)->clone();
        
        //#line 154 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
        rnd_->skip(((x10_long) ((((x10_long) ((offset) + (r->FMGL(min))))) * (((x10_long) (((x10_int)2)))))));
        
        //#line 155 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> edgeMem_ = edgeMemory->org::scalegraph::util::DistMemoryChunk<x10_double>::__apply();
        
        //#line 156 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i42841domain42944 = r;
        
        //#line 156 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long i42841min42945 = i42841domain42944->FMGL(min);
        
        //#line 156 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long i42841max42946 = i42841domain42944->FMGL(max);
        
        //#line 156 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
        {
            x10_long i42947;
            for (
                 //#line 156 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                 i42947 = i42841min42945; ((i42947) <= (i42841max42946));
                 
                 //#line 156 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                 i42947 = ((x10_long) ((i42947) + (((x10_long)1ll))))) {
                
                //#line 156 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_long i42948 = i42947;
                
                //#line 157 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
                edgeMem_->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i42948, rnd_->nextDouble());
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::random::Random* rnd;
    x10_long offset;
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->rnd);
        buf.write(this->offset);
        buf.write(this->edgeMemory);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__11* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__11>();
        buf.record_reference(storage);
        org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
        x10_long that_offset = buf.read<x10_long>();
        org::scalegraph::util::DistMemoryChunk<x10_double> that_edgeMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_double> >();
        org_scalegraph_graph_GraphGenerator__closure__11* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__11(that_rnd, that_offset, that_edgeMemory);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__11(org::scalegraph::util::random::Random* rnd, x10_long offset, org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory) : rnd(rnd), offset(offset), edgeMemory(edgeMemory) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:151-159";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__11_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__10_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__10 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__10> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Try_c
        try {
            
            //#line 151 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((numLocalEdges) - (((x10_long) (((x10_int)1))))))),
                                                  reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_graph_GraphGenerator__closure__11)))org_scalegraph_graph_GraphGenerator__closure__11(rnd, offset, edgeMemory))));
        }
        catch (x10::lang::CheckedThrowable* __exc175) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc175)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc175);
                {
                    
                    //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc175);
                {
                    
                    //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long numLocalEdges;
    org::scalegraph::util::random::Random* rnd;
    x10_long offset;
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
        buf.write(this->rnd);
        buf.write(this->offset);
        buf.write(this->edgeMemory);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__10* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__10>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
        x10_long that_offset = buf.read<x10_long>();
        org::scalegraph::util::DistMemoryChunk<x10_double> that_edgeMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_double> >();
        org_scalegraph_graph_GraphGenerator__closure__10* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__10(that_numLocalEdges, that_rnd, that_offset, that_edgeMemory);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__10(x10_long numLocalEdges, org::scalegraph::util::random::Random* rnd, x10_long offset, org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory) : numLocalEdges(numLocalEdges), rnd(rnd), offset(offset), edgeMemory(edgeMemory) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:150-160";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__10_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__12_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__12 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >::itable<org_scalegraph_graph_GraphGenerator__closure__12> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_double> __apply() {
        
        //#line 178 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_double >::_make(numLocalEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__12* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__12>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__12* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__12(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__12(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:178";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__12_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__14_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_graph_GraphGenerator__closure__14 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_GraphGenerator__closure__14> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 184 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::random::Random* rnd_ = x10aux::nullCheck(rnd)->clone();
        
        //#line 186 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
        rnd_->skip(((x10_long) ((((x10_long) ((offset) + (r->FMGL(min))))) * (((x10_long) (((x10_int)2)))))));
        
        //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> edgeMem_ = edgeMemory->org::scalegraph::util::DistMemoryChunk<x10_double>::__apply();
        
        //#line 188 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i42867domain42949 = r;
        
        //#line 188 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long i42867min42950 = i42867domain42949->FMGL(min);
        
        //#line 188 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long i42867max42951 = i42867domain42949->FMGL(max);
        
        //#line 188 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
        {
            x10_long i42952;
            for (
                 //#line 188 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                 i42952 = i42867min42950; ((i42952) <= (i42867max42951));
                 
                 //#line 188 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                 i42952 = ((x10_long) ((i42952) + (((x10_long)1ll))))) {
                
                //#line 188 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_long i42953 = i42952;
                
                //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
                edgeMem_->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i42953, rnd_->nextDouble());
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::random::Random* rnd;
    x10_long offset;
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->rnd);
        buf.write(this->offset);
        buf.write(this->edgeMemory);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__14* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__14>();
        buf.record_reference(storage);
        org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
        x10_long that_offset = buf.read<x10_long>();
        org::scalegraph::util::DistMemoryChunk<x10_double> that_edgeMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_double> >();
        org_scalegraph_graph_GraphGenerator__closure__14* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__14(that_rnd, that_offset, that_edgeMemory);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__14(org::scalegraph::util::random::Random* rnd, x10_long offset, org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory) : rnd(rnd), offset(offset), edgeMemory(edgeMemory) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:183-191";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__14_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__13_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__13 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__13> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_int role = x10aux::nullCheck(x10aux::nullCheck(team)->role())->x10::array::Array<x10_int>::__apply(
                         ((x10_int)0));
        
        //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long offset = ((x10_long) ((((x10_long) (role))) * (numLocalEdges)));
        
        //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((numLocalEdges) - (((x10_long) (((x10_int)1))))))),
                                              reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_graph_GraphGenerator__closure__14)))org_scalegraph_graph_GraphGenerator__closure__14(rnd, offset, edgeMemory))));
    }
    
    // captured environment
    x10::util::Team* team;
    x10_long numLocalEdges;
    org::scalegraph::util::random::Random* rnd;
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team);
        buf.write(this->numLocalEdges);
        buf.write(this->rnd);
        buf.write(this->edgeMemory);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__13* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__13>();
        buf.record_reference(storage);
        x10::util::Team* that_team = buf.read<x10::util::Team*>();
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
        org::scalegraph::util::DistMemoryChunk<x10_double> that_edgeMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_double> >();
        org_scalegraph_graph_GraphGenerator__closure__13* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__13(that_team, that_numLocalEdges, that_rnd, that_edgeMemory);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__13(x10::util::Team* team, x10_long numLocalEdges, org::scalegraph::util::random::Random* rnd, org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory) : team(team), numLocalEdges(numLocalEdges), rnd(rnd), edgeMemory(edgeMemory) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:180-192";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__13_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__15_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__15 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__15> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 218 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make(numLocalEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__15* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__15>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__15* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__15(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__15(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:218";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__15_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__16_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__16 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__16> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make(numLocalEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__16* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__16>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__16* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__16(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__16(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:220";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__16_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__18_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_graph_GraphGenerator__closure__18 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_GraphGenerator__closure__18> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 240 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::random::Random* rnd_ = x10aux::nullCheck(rnd)->clone();
        
        //#line 241 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
        rnd_->skip(((x10_long) ((((x10_long) ((offset) + (r->FMGL(min))))) * (((x10_long) (scale))))));
        
        //#line 242 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> srcMem_ = srcMemory->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 243 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> dstMem_ = dstMemory->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i42916domain42966 = r;
        
        //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long i42916min42967 = i42916domain42966->FMGL(min);
        
        //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long i42916max42968 = i42916domain42966->FMGL(max);
        
        //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
        {
            x10_long i42969;
            for (
                 //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                 i42969 = i42916min42967; ((i42969) <= (i42916max42968));
                 
                 //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                 i42969 = ((x10_long) ((i42969) + (((x10_long)1ll))))) {
                
                //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_long i42970 = i42969;
                
                //#line 245 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_long srcVertex42964 = ((x10_long) (((x10_int)0)));
                
                //#line 246 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_long dstVertex42965 = ((x10_long) (((x10_int)0)));
                
                //#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_int i42900min42960 = ((x10_int)0);
                
                //#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_int i42900max42961 = ((x10_int) ((scale) - (((x10_int)1))));
                
                //#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
                {
                    x10_int i42962;
                    for (
                         //#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                         i42962 = i42900min42960; ((i42962) <= (i42900max42961));
                         
                         //#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                         i42962 = ((x10_int) ((i42962) + (((x10_int)1)))))
                    {
                        
                        //#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                        x10_int depth42963 = i42962;
                        
                        //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                        srcVertex42964 = ((x10_long) ((srcVertex42964) << (0x3f & (((x10_int)1)))));
                        
                        //#line 249 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                        dstVertex42965 = ((x10_long) ((dstVertex42965) << (0x3f & (((x10_int)1)))));
                        
                        //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                        x10_float x42959 = rnd_->nextFloat();
                        
                        //#line 251 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10If_c
                        if (((((x10_double) (x42959))) < (sumA->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                            depth42963))))
                        {
                         
                        } else 
                        //#line 252 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10If_c
                        if (((((x10_double) (x42959))) < (sumAB->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                            depth42963))))
                        {
                            
                            //#line 252 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                            dstVertex42965 = ((x10_long) ((dstVertex42965) + (((x10_long) (((x10_int)1))))));
                        } else 
                        //#line 253 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10If_c
                        if (((((x10_double) (x42959))) < (sumABC->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                            depth42963))))
                        {
                            
                            //#line 253 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                            srcVertex42964 = ((x10_long) ((srcVertex42964) + (((x10_long) (((x10_int)1))))));
                        } else {
                            
                            //#line 254 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                            dstVertex42965 = ((x10_long) ((dstVertex42965) + (((x10_long) (((x10_int)1))))));
                            
                            //#line 254 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                            srcVertex42964 = ((x10_long) ((srcVertex42964) + (((x10_long) (((x10_int)1))))));
                        }
                        
                    }
                }
                
                //#line 256 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10If_c
                if (permute) {
                    
                    //#line 257 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
                    srcMem_->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      i42970, org::scalegraph::util::scramble(scale, srcVertex42964, ((x10_long) (((x10_ulong)1311768465173141112ull))), ((x10_long) (((x10_ulong)2541551403420444553ull)))));
                    
                    //#line 258 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
                    dstMem_->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      i42970, org::scalegraph::util::scramble(scale, dstVertex42965, ((x10_long) (((x10_ulong)1311768465173141112ull))), ((x10_long) (((x10_ulong)2541551403420444553ull)))));
                } else {
                    
                    //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
                    srcMem_->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      i42970, srcVertex42964);
                    
                    //#line 262 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
                    dstMem_->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      i42970, dstVertex42965);
                }
                
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::random::Random* rnd;
    x10_long offset;
    x10_int scale;
    org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory;
    org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory;
    org::scalegraph::util::MemoryChunk<x10_double> sumA;
    org::scalegraph::util::MemoryChunk<x10_double> sumAB;
    org::scalegraph::util::MemoryChunk<x10_double> sumABC;
    x10_boolean permute;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->rnd);
        buf.write(this->offset);
        buf.write(this->scale);
        buf.write(this->srcMemory);
        buf.write(this->dstMemory);
        buf.write(this->sumA);
        buf.write(this->sumAB);
        buf.write(this->sumABC);
        buf.write(this->permute);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__18* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__18>();
        buf.record_reference(storage);
        org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
        x10_long that_offset = buf.read<x10_long>();
        x10_int that_scale = buf.read<x10_int>();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_dstMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_double> that_sumA = buf.read<org::scalegraph::util::MemoryChunk<x10_double> >();
        org::scalegraph::util::MemoryChunk<x10_double> that_sumAB = buf.read<org::scalegraph::util::MemoryChunk<x10_double> >();
        org::scalegraph::util::MemoryChunk<x10_double> that_sumABC = buf.read<org::scalegraph::util::MemoryChunk<x10_double> >();
        x10_boolean that_permute = buf.read<x10_boolean>();
        org_scalegraph_graph_GraphGenerator__closure__18* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__18(that_rnd, that_offset, that_scale, that_srcMemory, that_dstMemory, that_sumA, that_sumAB, that_sumABC, that_permute);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__18(org::scalegraph::util::random::Random* rnd, x10_long offset, x10_int scale, org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory, org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory, org::scalegraph::util::MemoryChunk<x10_double> sumA, org::scalegraph::util::MemoryChunk<x10_double> sumAB, org::scalegraph::util::MemoryChunk<x10_double> sumABC, x10_boolean permute) : rnd(rnd), offset(offset), scale(scale), srcMemory(srcMemory), dstMemory(dstMemory), sumA(sumA), sumAB(sumAB), sumABC(sumABC), permute(permute) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:239-265";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__18_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__17_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__17 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__17> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_int role = x10aux::nullCheck(x10aux::nullCheck(team)->role())->x10::array::Array<x10_int>::__apply(
                         ((x10_int)0));
        
        //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long offset = ((x10_long) ((((x10_long) (role))) * (numLocalEdges)));
        
        //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((numLocalEdges) - (((x10_long) (((x10_int)1))))))),
                                              reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_graph_GraphGenerator__closure__18)))org_scalegraph_graph_GraphGenerator__closure__18(rnd, offset, scale, srcMemory, dstMemory, sumA, sumAB, sumABC, permute))));
    }
    
    // captured environment
    x10::util::Team* team;
    x10_long numLocalEdges;
    org::scalegraph::util::random::Random* rnd;
    x10_int scale;
    org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory;
    org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory;
    org::scalegraph::util::MemoryChunk<x10_double> sumA;
    org::scalegraph::util::MemoryChunk<x10_double> sumAB;
    org::scalegraph::util::MemoryChunk<x10_double> sumABC;
    x10_boolean permute;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team);
        buf.write(this->numLocalEdges);
        buf.write(this->rnd);
        buf.write(this->scale);
        buf.write(this->srcMemory);
        buf.write(this->dstMemory);
        buf.write(this->sumA);
        buf.write(this->sumAB);
        buf.write(this->sumABC);
        buf.write(this->permute);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__17* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__17>();
        buf.record_reference(storage);
        x10::util::Team* that_team = buf.read<x10::util::Team*>();
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
        x10_int that_scale = buf.read<x10_int>();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_dstMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_double> that_sumA = buf.read<org::scalegraph::util::MemoryChunk<x10_double> >();
        org::scalegraph::util::MemoryChunk<x10_double> that_sumAB = buf.read<org::scalegraph::util::MemoryChunk<x10_double> >();
        org::scalegraph::util::MemoryChunk<x10_double> that_sumABC = buf.read<org::scalegraph::util::MemoryChunk<x10_double> >();
        x10_boolean that_permute = buf.read<x10_boolean>();
        org_scalegraph_graph_GraphGenerator__closure__17* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__17(that_team, that_numLocalEdges, that_rnd, that_scale, that_srcMemory, that_dstMemory, that_sumA, that_sumAB, that_sumABC, that_permute);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__17(x10::util::Team* team, x10_long numLocalEdges, org::scalegraph::util::random::Random* rnd, x10_int scale, org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory, org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory, org::scalegraph::util::MemoryChunk<x10_double> sumA, org::scalegraph::util::MemoryChunk<x10_double> sumAB, org::scalegraph::util::MemoryChunk<x10_double> sumABC, x10_boolean permute) : team(team), numLocalEdges(numLocalEdges), rnd(rnd), scale(scale), srcMemory(srcMemory), dstMemory(dstMemory), sumA(sumA), sumAB(sumAB), sumABC(sumABC), permute(permute) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:236-266";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__17_CLOSURE

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genGrid(
  x10_long rows, x10_long columns) {
    
    //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::UnsupportedOperationException::_make()));
}

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genStar(
  x10_int scale) {
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::UnsupportedOperationException::_make()));
}

//#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genCircle(
  x10_int scale, x10_int nodeOutDeg) {
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::UnsupportedOperationException::_make()));
}

//#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genFull(
  x10_int fanout, x10_int levels, x10_boolean childPointsToParent) {
    
    //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::UnsupportedOperationException::_make()));
}

//#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genTree(
  x10_int scale) {
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numVertices = ((x10_long) ((((x10_long)1ll)) << (0x3f & (scale))));
    
    //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = numVertices;
    
    //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = x10aux::nullCheck(team)->size();
    
    //#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalEdges = ((x10_long) ((numEdges) / x10aux::zeroCheck(((x10_long) (teamSize)))));
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory =
      org::scalegraph::util::DistMemoryChunk<x10_long>::_make(x10aux::nullCheck(team)->placeGroup(),
                                                              reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__1)))org_scalegraph_graph_GraphGenerator__closure__1(numLocalEdges))));
    
    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory =
      org::scalegraph::util::DistMemoryChunk<x10_long>::_make(x10aux::nullCheck(team)->placeGroup(),
                                                              reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__2)))org_scalegraph_graph_GraphGenerator__closure__2(numLocalEdges))));
    
    //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__3)))org_scalegraph_graph_GraphGenerator__closure__3(srcMemory, dstMemory, team, teamSize))));
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return org::scalegraph::graph::EdgeList<x10_long>::_make(srcMemory,
                                                             dstMemory);
    
}

//#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genRandomGraph(
  x10_int scale, x10_int edgefactor, org::scalegraph::util::random::Random* rnd) {
    
    //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numVertices = ((x10_long) ((((x10_long)1ll)) << (0x3f & (scale))));
    
    //#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = ((x10_long) ((((x10_long) (edgefactor))) * (numVertices)));
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalEdges = ((x10_long) ((numEdges) / x10aux::zeroCheck(((x10_long) (x10aux::nullCheck(team)->size())))));
    
    //#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory =
      org::scalegraph::util::DistMemoryChunk<x10_long>::_make(x10aux::nullCheck(team)->placeGroup(),
                                                              reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__4)))org_scalegraph_graph_GraphGenerator__closure__4(numLocalEdges))));
    
    //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory =
      org::scalegraph::util::DistMemoryChunk<x10_long>::_make(x10aux::nullCheck(team)->placeGroup(),
                                                              reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__5)))org_scalegraph_graph_GraphGenerator__closure__5(numLocalEdges))));
    
    //#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__6)))org_scalegraph_graph_GraphGenerator__closure__6(team, numLocalEdges, rnd, srcMemory, dstMemory, numVertices))));
    
    //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(rnd)->skip(((x10_long) ((numEdges) * (((x10_long) (((x10_int)4)))))));
    
    //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return org::scalegraph::graph::EdgeList<x10_long>::_make(srcMemory,
                                                             dstMemory);
    
}

//#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::DistMemoryChunk<x10_double> org::scalegraph::graph::GraphGenerator::genRandomEdgeValue(
  x10::lang::Fun_0_0<x10_long>* getSize, org::scalegraph::util::random::Random* rnd) {
    
    //#line 130 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* > sizeArray =
      x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* >::_make(x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >::_make(org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (x10aux::nullCheck(team)->size())), 0, false, (x10_byte*)(void*)__FILE__, __LINE__)));
    
    //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__8)))org_scalegraph_graph_GraphGenerator__closure__8(team, getSize, sizeArray))));
    
    //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory =
      org::scalegraph::util::DistMemoryChunk<x10_double>::_make(x10aux::nullCheck(team)->placeGroup(),
                                                                reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__9)))org_scalegraph_graph_GraphGenerator__closure__9(getSize))));
    
    //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> sizeArray_ =
      x10aux::nullCheck((sizeArray)->__apply())->x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >::__apply();
    
    //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10::lang::Place>* placeArray = x10aux::nullCheck(team)->places();
    
    //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = ((x10_long) (((x10_int)0)));
    
    //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::array::Point*>* id42858;
        for (
             //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
             id42858 = x10aux::nullCheck(placeArray)->FMGL(region)->iterator();
             x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id42858));
             ) {
            
            //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* id16 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id42858));
            
            //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_int role = x10aux::nullCheck(id16)->x10::array::Point::__apply(
                             ((x10_int)0));
            
            //#line 148 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long numLocalEdges = sizeArray_->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                       role);
            
            //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long offset = numEdges;
            
            //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::runAsync(x10aux::nullCheck(placeArray)->x10::array::Array<x10::lang::Place>::__apply(
                                           role), reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__10)))org_scalegraph_graph_GraphGenerator__closure__10(numLocalEdges, rnd, offset, edgeMemory))),
                                         x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
            
            //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
            numEdges = ((x10_long) ((numEdges) + (numLocalEdges)));
        }
    }
    
    //#line 164 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(rnd)->skip(((x10_long) ((numEdges) * (((x10_long) (((x10_int)2)))))));
    
    //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return edgeMemory;
    
}

//#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::DistMemoryChunk<x10_double> org::scalegraph::graph::GraphGenerator::genRandomEdgeValue(
  x10_int scale, x10_int edgefactor, org::scalegraph::util::random::Random* rnd) {
    
    //#line 172 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 173 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numVertices = ((x10_long) ((((x10_long)1ll)) << (0x3f & (scale))));
    
    //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = ((x10_long) ((((x10_long) (edgefactor))) * (numVertices)));
    
    //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalEdges = ((x10_long) ((numEdges) / x10aux::zeroCheck(((x10_long) (x10aux::nullCheck(team)->size())))));
    
    //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory =
      org::scalegraph::util::DistMemoryChunk<x10_double>::_make(x10aux::nullCheck(team)->placeGroup(),
                                                                reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__12)))org_scalegraph_graph_GraphGenerator__closure__12(numLocalEdges))));
    
    //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__13)))org_scalegraph_graph_GraphGenerator__closure__13(team, numLocalEdges, rnd, edgeMemory))));
    
    //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(rnd)->skip(((x10_long) ((numEdges) * (((x10_long) (((x10_int)2)))))));
    
    //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return edgeMemory;
    
}

//#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genRMAT(
  x10_int scale, x10_int edgefactor, x10_double A, x10_double B,
  x10_double C, org::scalegraph::util::random::Random* rnd) {
    
    //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return org::scalegraph::graph::GraphGenerator::genRMAT(
             scale, edgefactor, A, B, C, rnd, true);
    
}

//#line 206 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genRMAT(
  x10_int scale, x10_int edgefactor, x10_double A, x10_double B,
  x10_double C, org::scalegraph::util::random::Random* rnd,
  x10_boolean permute) {
    
    //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10If_c
    if (((((((A) + (B))) + (C))) >= (((x10_double) (1.0f)))))
    {
        
        //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("A+B+C >= 1.0: Invalid probabilities"))));
    }
    
    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numVertices = ((x10_long) ((((x10_long)1ll)) << (0x3f & (scale))));
    
    //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = ((x10_long) ((((x10_long) (edgefactor))) * (numVertices)));
    
    //#line 215 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalEdges = ((x10_long) ((numEdges) / x10aux::zeroCheck(((x10_long) (x10aux::nullCheck(team)->size())))));
    
    //#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory =
      org::scalegraph::util::DistMemoryChunk<x10_long>::_make(x10aux::nullCheck(team)->placeGroup(),
                                                              reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__15)))org_scalegraph_graph_GraphGenerator__closure__15(numLocalEdges))));
    
    //#line 219 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory =
      org::scalegraph::util::DistMemoryChunk<x10_long>::_make(x10aux::nullCheck(team)->placeGroup(),
                                                              reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__16)))org_scalegraph_graph_GraphGenerator__closure__16(numLocalEdges))));
    
    //#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> sumA =
      org::scalegraph::util::MemoryChunk<x10_double >::_make(((x10_long) (scale)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 223 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> sumAB =
      org::scalegraph::util::MemoryChunk<x10_double >::_make(((x10_long) (scale)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> sumABC =
      org::scalegraph::util::MemoryChunk<x10_double >::_make(((x10_long) (scale)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 225 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_int i42884min42971 = ((x10_int)0);
    
    //#line 225 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_int i42884max42972 = ((x10_int) ((scale) - (((x10_int)1))));
    
    //#line 225 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
    {
        x10_int i42973;
        for (
             //#line 225 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
             i42973 = i42884min42971; ((i42973) <= (i42884max42972));
             
             //#line 225 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
             i42973 = ((x10_int) ((i42973) + (((x10_int)1)))))
        {
            
            //#line 225 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_int i42974 = i42973;
            
            //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_double a42954 = ((A) * (((x10_double) (((x10aux::nullCheck(rnd)->nextFloat()) + (0.5f))))));
            
            //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_double b42955 = ((B) * (((x10_double) (((x10aux::nullCheck(rnd)->nextFloat()) + (0.5f))))));
            
            //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_double c42956 = ((C) * (((x10_double) (((x10aux::nullCheck(rnd)->nextFloat()) + (0.5f))))));
            
            //#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_double d42957 = ((((((x10_double) (1.0f))) - (((((A) + (B))) + (C))))) * (((x10_double) (((x10aux::nullCheck(rnd)->nextFloat()) + (0.5f))))));
            
            //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_double abcd42958 = ((((((a42954) + (b42955))) + (c42956))) + (d42957));
            
            //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
            sumA->org::scalegraph::util::MemoryChunk<x10_double>::__set(
              i42974, ((a42954) / (abcd42958)));
            
            //#line 232 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
            sumAB->org::scalegraph::util::MemoryChunk<x10_double>::__set(
              i42974, ((((a42954) + (b42955))) / (abcd42958)));
            
            //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
            sumABC->org::scalegraph::util::MemoryChunk<x10_double>::__set(
              i42974, ((((((a42954) + (b42955))) + (c42956))) / (abcd42958)));
        }
    }
    
    //#line 236 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__17)))org_scalegraph_graph_GraphGenerator__closure__17(team, numLocalEdges, rnd, scale, srcMemory, dstMemory, sumA, sumAB, sumABC, permute))));
    
    //#line 268 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(rnd)->skip(((x10_long) ((numEdges) * (((x10_long) (scale))))));
    
    //#line 270 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return org::scalegraph::graph::EdgeList<x10_long>::_make(srcMemory,
                                                             dstMemory);
    
}

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::GraphGenerator* org::scalegraph::graph::GraphGenerator::org__scalegraph__graph__GraphGenerator____this__org__scalegraph__graph__GraphGenerator(
  ) {
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::GraphGenerator::_constructor(
  ) {
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Empty_c
    ;
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::graph::GraphGenerator* org::scalegraph::graph::GraphGenerator::_make(
  ) {
    org::scalegraph::graph::GraphGenerator* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::GraphGenerator>(), 0, sizeof(org::scalegraph::graph::GraphGenerator))) org::scalegraph::graph::GraphGenerator();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::graph::GraphGenerator::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::graph::GraphGenerator::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::graph::GraphGenerator::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::graph::GraphGenerator::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::GraphGenerator* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::GraphGenerator>(), 0, sizeof(org::scalegraph::graph::GraphGenerator))) org::scalegraph::graph::GraphGenerator();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::graph::GraphGenerator::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::graph::GraphGenerator::rtt;
void org::scalegraph::graph::GraphGenerator::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.graph.GraphGenerator",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__1>org_scalegraph_graph_GraphGenerator__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__1::__apply, &org_scalegraph_graph_GraphGenerator__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_GraphGenerator__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__2>org_scalegraph_graph_GraphGenerator__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__2::__apply, &org_scalegraph_graph_GraphGenerator__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_GraphGenerator__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__3>org_scalegraph_graph_GraphGenerator__closure__3::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__3::__apply, &org_scalegraph_graph_GraphGenerator__closure__3::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__3::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__3::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__3::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__3::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__4>org_scalegraph_graph_GraphGenerator__closure__4::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__4::__apply, &org_scalegraph_graph_GraphGenerator__closure__4::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__4::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_GraphGenerator__closure__4::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__4::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__4::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__5>org_scalegraph_graph_GraphGenerator__closure__5::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__5::__apply, &org_scalegraph_graph_GraphGenerator__closure__5::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__5::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_GraphGenerator__closure__5::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__5::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__5::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_GraphGenerator__closure__7>org_scalegraph_graph_GraphGenerator__closure__7::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__7::__apply, &org_scalegraph_graph_GraphGenerator__closure__7::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__7::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_graph_GraphGenerator__closure__7::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__7::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__7::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__6>org_scalegraph_graph_GraphGenerator__closure__6::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__6::__apply, &org_scalegraph_graph_GraphGenerator__closure__6::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__6::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__6::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__6::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__6::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__8>org_scalegraph_graph_GraphGenerator__closure__8::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__8::__apply, &org_scalegraph_graph_GraphGenerator__closure__8::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__8::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__8::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__8::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__8::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >::itable<org_scalegraph_graph_GraphGenerator__closure__9>org_scalegraph_graph_GraphGenerator__closure__9::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__9::__apply, &org_scalegraph_graph_GraphGenerator__closure__9::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__9::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >, &org_scalegraph_graph_GraphGenerator__closure__9::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__9::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__9::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_GraphGenerator__closure__11>org_scalegraph_graph_GraphGenerator__closure__11::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__11::__apply, &org_scalegraph_graph_GraphGenerator__closure__11::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__11::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_graph_GraphGenerator__closure__11::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__11::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__11::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__10>org_scalegraph_graph_GraphGenerator__closure__10::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__10::__apply, &org_scalegraph_graph_GraphGenerator__closure__10::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__10::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__10::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__10::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__10::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >::itable<org_scalegraph_graph_GraphGenerator__closure__12>org_scalegraph_graph_GraphGenerator__closure__12::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__12::__apply, &org_scalegraph_graph_GraphGenerator__closure__12::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__12::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >, &org_scalegraph_graph_GraphGenerator__closure__12::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__12::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__12::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_GraphGenerator__closure__14>org_scalegraph_graph_GraphGenerator__closure__14::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__14::__apply, &org_scalegraph_graph_GraphGenerator__closure__14::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__14::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_graph_GraphGenerator__closure__14::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__14::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__14::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__13>org_scalegraph_graph_GraphGenerator__closure__13::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__13::__apply, &org_scalegraph_graph_GraphGenerator__closure__13::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__13::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__13::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__13::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__13::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__15>org_scalegraph_graph_GraphGenerator__closure__15::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__15::__apply, &org_scalegraph_graph_GraphGenerator__closure__15::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__15::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_GraphGenerator__closure__15::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__15::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__15::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__16>org_scalegraph_graph_GraphGenerator__closure__16::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__16::__apply, &org_scalegraph_graph_GraphGenerator__closure__16::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__16::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_GraphGenerator__closure__16::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__16::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__16::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_GraphGenerator__closure__18>org_scalegraph_graph_GraphGenerator__closure__18::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__18::__apply, &org_scalegraph_graph_GraphGenerator__closure__18::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__18::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_graph_GraphGenerator__closure__18::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__18::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__18::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__17>org_scalegraph_graph_GraphGenerator__closure__17::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__17::__apply, &org_scalegraph_graph_GraphGenerator__closure__17::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__17::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__17::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__17::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__17::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of GraphGenerator */
/*************************************************/
