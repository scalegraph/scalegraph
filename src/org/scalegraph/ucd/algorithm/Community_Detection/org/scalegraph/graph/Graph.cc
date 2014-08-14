/*************************************************/
/* START of Graph */
#include <org/scalegraph/graph/Graph.h>

#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_Graph__closure__4 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_Graph__closure__4> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return (__extension__ ({
            (__extension__ ({
                
                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> alloc94538 =
                   org::scalegraph::util::MemoryChunk<x10_long>::_alloc();
                
                //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
                alloc94538->FMGL(data) = org::scalegraph::util::MCData_Impl<x10_long >::_make(((x10_long)0ll), ((x10_int)0), false);
                alloc94538;
            }))
            ;
        }))
        ;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__4* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__4>();
        buf.record_reference(storage);
        org_scalegraph_graph_Graph__closure__4* this_ = new (storage) org_scalegraph_graph_Graph__closure__4();
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__4() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:113";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_Graph__closure__5 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_Graph__closure__5> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return (__extension__ ({
            (__extension__ ({
                
                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> alloc94540 =
                   org::scalegraph::util::MemoryChunk<x10_long>::_alloc();
                
                //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
                alloc94540->FMGL(data) = org::scalegraph::util::MCData_Impl<x10_long >::_make(((x10_long)0ll), ((x10_int)0), false);
                alloc94540;
            }))
            ;
        }))
        ;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__5* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__5>();
        buf.record_reference(storage);
        org_scalegraph_graph_Graph__closure__5* this_ = new (storage) org_scalegraph_graph_Graph__closure__5();
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__5() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:114";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_Graph__closure__7 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__NoTraslator*>::itable<org_scalegraph_graph_Graph__closure__7> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::graph::VertexTranslator__NoTraslator* __apply() {
        
        //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::graph::VertexTranslator__NoTraslator* alloc57334 =
               ((new (memset(x10aux::alloc<org::scalegraph::graph::VertexTranslator__NoTraslator>(), 0, sizeof(org::scalegraph::graph::VertexTranslator__NoTraslator))) org::scalegraph::graph::VertexTranslator__NoTraslator()))
            ;
            
            //#line 303 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::util::Team* team__98128 = team_;
            
            //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::util::Team* team__98127 = team__98128;
            
            //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
            (alloc57334)->::org::scalegraph::graph::VertexTranslatorBase::_constructor(
              team__98127);
            alloc57334;
        }))
        ;
        
    }
    
    // captured environment
    x10::util::Team* team_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__7* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__7>();
        buf.record_reference(storage);
        x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
        org_scalegraph_graph_Graph__closure__7* this_ = new (storage) org_scalegraph_graph_Graph__closure__7(that_team_);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__7(x10::util::Team* team_) : team_(team_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__NoTraslator*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__NoTraslator*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:122";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__7_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_Graph__closure__6 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>::itable<org_scalegraph_graph_Graph__closure__6> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::graph::VertexTranslatorBase* __apply() {
        
        //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return reinterpret_cast<org::scalegraph::graph::VertexTranslatorBase*>(org_scalegraph_graph_Graph__closure__7(team_).__apply());
        
    }
    
    // captured environment
    x10::util::Team* team_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__6* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__6>();
        buf.record_reference(storage);
        x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
        org_scalegraph_graph_Graph__closure__6* this_ = new (storage) org_scalegraph_graph_Graph__closure__6(that_team_);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__6(x10::util::Team* team_) : team_(team_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:122";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__6_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__9_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_Graph__closure__9 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double>*>::itable<org_scalegraph_graph_Graph__closure__9> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double>* __apply() {
        
        //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double>* alloc57335 =
               ((new (memset(x10aux::alloc<org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double> >(), 0, sizeof(org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double>))) org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double>()))
            ;
            
            //#line 269 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::util::Team* team__98130 = team_;
            
            //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::util::Team* team__98129 = team__98130;
            
            //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
            (alloc57335)->::org::scalegraph::graph::VertexTranslatorBase::_constructor(
              team__98129);
            alloc57335;
        }))
        ;
        
    }
    
    // captured environment
    x10::util::Team* team_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__9* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__9>();
        buf.record_reference(storage);
        x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
        org_scalegraph_graph_Graph__closure__9* this_ = new (storage) org_scalegraph_graph_Graph__closure__9(that_team_);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__9(x10::util::Team* team_) : team_(team_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:128-129";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__9_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__8_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_Graph__closure__8 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>::itable<org_scalegraph_graph_Graph__closure__8> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::graph::VertexTranslatorBase* __apply() {
        
        //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return reinterpret_cast<org::scalegraph::graph::VertexTranslatorBase*>(org_scalegraph_graph_Graph__closure__9(team_).__apply());
        
    }
    
    // captured environment
    x10::util::Team* team_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__8* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__8>();
        buf.record_reference(storage);
        x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
        org_scalegraph_graph_Graph__closure__8* this_ = new (storage) org_scalegraph_graph_Graph__closure__8(that_team_);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__8(x10::util::Team* team_) : team_(team_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:128-129";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__8_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__10_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_Graph__closure__10 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__10> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        edges->org::scalegraph::graph::EdgeList<x10_long>::del();
    }
    
    // captured environment
    org::scalegraph::graph::EdgeList<x10_long> edges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->edges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__10* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__10>();
        buf.record_reference(storage);
        org::scalegraph::graph::EdgeList<x10_long> that_edges = buf.read<org::scalegraph::graph::EdgeList<x10_long> >();
        org_scalegraph_graph_Graph__closure__10* this_ = new (storage) org_scalegraph_graph_Graph__closure__10(that_edges);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__10(org::scalegraph::graph::EdgeList<x10_long> edges) : edges(edges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:196";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__10_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__11_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_Graph__closure__11 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__11> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        edges->org::scalegraph::graph::EdgeList<x10_double>::del();
    }
    
    // captured environment
    org::scalegraph::graph::EdgeList<x10_double> edges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->edges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__11* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__11>();
        buf.record_reference(storage);
        org::scalegraph::graph::EdgeList<x10_double> that_edges = buf.read<org::scalegraph::graph::EdgeList<x10_double> >();
        org_scalegraph_graph_Graph__closure__11* this_ = new (storage) org_scalegraph_graph_Graph__closure__11(that_edges);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__11(org::scalegraph::graph::EdgeList<x10_double> edges) : edges(edges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:203";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__11_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__12_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_Graph__closure__12 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__12> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        edges->org::scalegraph::graph::EdgeList<x10_long>::del();
    }
    
    // captured environment
    org::scalegraph::graph::EdgeList<x10_long> edges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->edges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__12* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__12>();
        buf.record_reference(storage);
        org::scalegraph::graph::EdgeList<x10_long> that_edges = buf.read<org::scalegraph::graph::EdgeList<x10_long> >();
        org_scalegraph_graph_Graph__closure__12* this_ = new (storage) org_scalegraph_graph_Graph__closure__12(that_edges);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__12(org::scalegraph::graph::EdgeList<x10_long> edges) : edges(edges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:210";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__12_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__13_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_Graph__closure__13 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__13> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        edges->org::scalegraph::graph::EdgeList<x10_double>::del();
    }
    
    // captured environment
    org::scalegraph::graph::EdgeList<x10_double> edges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->edges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__13* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__13>();
        buf.record_reference(storage);
        org::scalegraph::graph::EdgeList<x10_double> that_edges = buf.read<org::scalegraph::graph::EdgeList<x10_double> >();
        org_scalegraph_graph_Graph__closure__13* this_ = new (storage) org_scalegraph_graph_Graph__closure__13(that_edges);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__13(org::scalegraph::graph::EdgeList<x10_double> edges) : edges(edges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:217";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__13_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__14_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_Graph__closure__14 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__14> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 224 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        edges->org::scalegraph::graph::EdgeList<org::scalegraph::util::SString>::del();
    }
    
    // captured environment
    org::scalegraph::graph::EdgeList<org::scalegraph::util::SString> edges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->edges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__14* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__14>();
        buf.record_reference(storage);
        org::scalegraph::graph::EdgeList<org::scalegraph::util::SString> that_edges = buf.read<org::scalegraph::graph::EdgeList<org::scalegraph::util::SString> >();
        org_scalegraph_graph_Graph__closure__14* this_ = new (storage) org_scalegraph_graph_Graph__closure__14(that_edges);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__14(org::scalegraph::graph::EdgeList<org::scalegraph::util::SString> edges) : edges(edges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:224";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__14_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__41_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__41_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_Graph__closure__41 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__41> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 644 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long tid98669 = ((x10_long) (idx98671));
            
            //#line 644 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r98670 = i_range98675;
            
            //#line 645 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts98668 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                        ((x10_int) (tid98669)));
            
            //#line 646 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (directed) {
                
                //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i57380domain98630 = r98670;
                
                //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i57380min98631 = i57380domain98630->FMGL(min);
                
                //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i57380max98632 = i57380domain98630->FMGL(max);
                
                //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i98633;
                    for (
                         //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i98633 = i57380min98631; ((i98633) <= (i57380max98632));
                         
                         //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i98633 = ((x10_long) ((i98633) + (((x10_long)1ll)))))
                    {
                        
                        //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i98634 = i98633;
                        
                        //#line 648 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v98624 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index98625 = i98634;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret98626;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((srcList__->FMGL(data)).isValid()))
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
                                if (((index98625) < (((x10_long) (((x10_int)0))))) ||
                                    ((index98625) >= (srcList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98625), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98626 = (srcList__->FMGL(data))[index98625];
                            ret98626;
                        }))
                        ;
                        
                        //#line 649 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v98627 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index98628 = i98634;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret98629;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((dstList__->FMGL(data)).isValid()))
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
                                if (((index98628) < (((x10_long) (((x10_int)0))))) ||
                                    ((index98628) >= (dstList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98628), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98629 = (dstList__->FMGL(data))[index98628];
                            ret98629;
                        }))
                        ;
                        
                        //#line 650 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x98619 =
                          counts98668;
                        
                        //#line 650 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int y98620 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index98621 = ((x10_long) ((((x10_long) ((v98627) & (cmask)))) | (((x10_long) ((v98624) & (rmask))))));
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret98622;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((roleMap->FMGL(data)).isValid()))
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
                                if (((index98621) < (((x10_long) (((x10_int)0))))) ||
                                    ((index98621) >= (roleMap->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98621), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98622 = (roleMap->FMGL(data))[index98621];
                            ret98622;
                        }))
                        ;
                        
                        //#line 650 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int ret98623;
                        
                        //#line 650 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int r98616 = ((x10_int) (((__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index98617 = y98620;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret98618;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x98619->FMGL(data)).isValid()))
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
                                if (((index98617) < (((x10_int)0))) ||
                                    ((((x10_long) (index98617))) >= (x98619->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98617), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98618 = (x98619->FMGL(data))[index98617];
                            ret98618;
                        }))
                        ) + (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index98613 = y98620;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int value98614 = r98616;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret98615;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x98619->FMGL(data)).isValid()))
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
                            if (((index98613) < (((x10_int)0))) ||
                                ((((x10_long) (index98613))) >= (x98619->
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
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98613), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (x98619->FMGL(data)).set(index98613, value98614);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98615 = value98614;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret98615;
                        
                        //#line 650 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98623 = r98616;
                        
                        //#line 650 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Local_c
                        ret98623;
                    }
                }
                
            } else {
                
                //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i57399domain98663 = r98670;
                
                //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i57399min98664 = i57399domain98663->
                                            FMGL(min);
                
                //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i57399max98665 = i57399domain98663->
                                            FMGL(max);
                
                //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i98666;
                    for (
                         //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i98666 = i57399min98664; ((i98666) <= (i57399max98665));
                         
                         //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i98666 = ((x10_long) ((i98666) + (((x10_long)1ll)))))
                    {
                        
                        //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i98667 = i98666;
                        
                        //#line 655 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v98657 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index98658 = i98667;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret98659;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((srcList__->FMGL(data)).isValid()))
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
                                if (((index98658) < (((x10_long) (((x10_int)0))))) ||
                                    ((index98658) >= (srcList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98658), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98659 = (srcList__->FMGL(data))[index98658];
                            ret98659;
                        }))
                        ;
                        
                        //#line 656 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v98660 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index98661 = i98667;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret98662;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((dstList__->FMGL(data)).isValid()))
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
                                if (((index98661) < (((x10_long) (((x10_int)0))))) ||
                                    ((index98661) >= (dstList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98661), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98662 = (dstList__->FMGL(data))[index98661];
                            ret98662;
                        }))
                        ;
                        
                        //#line 657 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x98647 =
                          counts98668;
                        
                        //#line 657 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int y98648 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index98649 = ((x10_long) ((((x10_long) ((v98660) & (cmask)))) | (((x10_long) ((v98657) & (rmask))))));
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret98650;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((roleMap->FMGL(data)).isValid()))
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
                                if (((index98649) < (((x10_long) (((x10_int)0))))) ||
                                    ((index98649) >= (roleMap->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98649), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98650 = (roleMap->FMGL(data))[index98649];
                            ret98650;
                        }))
                        ;
                        
                        //#line 657 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int ret98651;
                        
                        //#line 657 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int r98638 = ((x10_int) (((__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index98639 = y98648;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret98640;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x98647->FMGL(data)).isValid()))
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
                                if (((index98639) < (((x10_int)0))) ||
                                    ((((x10_long) (index98639))) >= (x98647->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98639), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98640 = (x98647->FMGL(data))[index98639];
                            ret98640;
                        }))
                        ) + (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index98635 = y98648;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int value98636 = r98638;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret98637;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x98647->FMGL(data)).isValid()))
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
                            if (((index98635) < (((x10_int)0))) ||
                                ((((x10_long) (index98635))) >= (x98647->
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
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98635), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (x98647->FMGL(data)).set(index98635, value98636);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98637 = value98636;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret98637;
                        
                        //#line 657 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98651 = r98638;
                        
                        //#line 657 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Local_c
                        ret98651;
                        
                        //#line 658 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x98652 =
                          counts98668;
                        
                        //#line 658 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int y98653 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index98654 = ((x10_long) ((((x10_long) ((v98657) & (cmask)))) | (((x10_long) ((v98660) & (rmask))))));
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret98655;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((roleMap->FMGL(data)).isValid()))
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
                                if (((index98654) < (((x10_long) (((x10_int)0))))) ||
                                    ((index98654) >= (roleMap->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98654), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98655 = (roleMap->FMGL(data))[index98654];
                            ret98655;
                        }))
                        ;
                        
                        //#line 658 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int ret98656;
                        
                        //#line 658 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int r98644 = ((x10_int) (((__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index98645 = y98653;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret98646;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x98652->FMGL(data)).isValid()))
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
                                if (((index98645) < (((x10_int)0))) ||
                                    ((((x10_long) (index98645))) >= (x98652->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98645), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98646 = (x98652->FMGL(data))[index98645];
                            ret98646;
                        }))
                        ) + (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index98641 = y98653;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int value98642 = r98644;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret98643;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x98652->FMGL(data)).isValid()))
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
                            if (((index98641) < (((x10_int)0))) ||
                                ((((x10_long) (index98641))) >= (x98652->
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
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98641), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (x98652->FMGL(data)).set(index98641, value98642);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98643 = value98642;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret98643;
                        
                        //#line 658 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98656 = r98644;
                        
                        //#line 658 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Local_c
                        ret98656;
                    }
                }
                
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc264) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc264)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc264);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc264);
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
    x10_int idx98671;
    x10::lang::LongRange i_range98675;
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
        buf.write(this->idx98671);
        buf.write(this->i_range98675);
        buf.write(this->scatterGather);
        buf.write(this->directed);
        buf.write(this->srcList__);
        buf.write(this->dstList__);
        buf.write(this->cmask);
        buf.write(this->rmask);
        buf.write(this->roleMap);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__41* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__41>();
        buf.record_reference(storage);
        x10_int that_idx98671 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range98675 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_boolean that_directed = buf.read<x10_boolean>();
        org::scalegraph::util::MemoryChunk<x10_long> that_srcList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_dstList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_long that_cmask = buf.read<x10_long>();
        x10_long that_rmask = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<x10_int> that_roleMap = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_graph_Graph__closure__41* this_ = new (storage) org_scalegraph_graph_Graph__closure__41(that_idx98671, that_i_range98675, that_scatterGather, that_directed, that_srcList__, that_dstList__, that_cmask, that_rmask, that_roleMap);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__41(x10_int idx98671, x10::lang::LongRange i_range98675, org::scalegraph::util::DistScatterGather scatterGather, x10_boolean directed, org::scalegraph::util::MemoryChunk<x10_long> srcList__, org::scalegraph::util::MemoryChunk<x10_long> dstList__, x10_long cmask, x10_long rmask, org::scalegraph::util::MemoryChunk<x10_int> roleMap) : idx98671(idx98671), i_range98675(i_range98675), scatterGather(scatterGather), directed(directed), srcList__(srcList__), dstList__(dstList__), cmask(cmask), rmask(rmask), roleMap(roleMap) { }
    
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

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__41_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__42_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__42_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_Graph__closure__42 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__42> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 670 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long tid98771 = ((x10_long) (idx98773));
            
            //#line 670 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r98772 = i_range98777;
            
            //#line 671 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets98770 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                         ((x10_int) (tid98771)));
            
            //#line 687 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (directed) {
                
                //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i57418domain98712 = r98772;
                
                //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i57418min98713 = i57418domain98712->FMGL(min);
                
                //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i57418max98714 = i57418domain98712->FMGL(max);
                
                //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i98715;
                    for (
                         //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i98715 = i57418min98713; ((i98715) <= (i57418max98714));
                         
                         //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i98715 = ((x10_long) ((i98715) + (((x10_long)1ll)))))
                    {
                        
                        //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i98716 = i98715;
                        
                        //#line 689 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v98700 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index98701 = i98716;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret98702;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((srcList__->FMGL(data)).isValid()))
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
                                if (((index98701) < (((x10_long) (((x10_int)0))))) ||
                                    ((index98701) >= (srcList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98701), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98702 = (srcList__->FMGL(data))[index98701];
                            ret98702;
                        }))
                        ;
                        
                        //#line 690 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v98703 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index98704 = i98716;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret98705;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((dstList__->FMGL(data)).isValid()))
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
                                if (((index98704) < (((x10_long) (((x10_int)0))))) ||
                                    ((index98704) >= (dstList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98704), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98705 = (dstList__->FMGL(data))[index98704];
                            ret98705;
                        }))
                        ;
                        
                        //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int off98706 = ((x10_int) (((__extension__ ({
                            
                            //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_int> x98707 =
                              offsets98770;
                            
                            //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int y98708 = (__extension__ ({
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index98709 = ((x10_long) ((((x10_long) ((v98703) & (cmask)))) | (((x10_long) ((v98700) & (rmask))))));
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret98710;
                                {
                                    
                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((roleMap->FMGL(data)).isValid()))
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
                                    if (((index98709) < (((x10_long) (((x10_int)0))))) ||
                                        ((index98709) >= (roleMap->
                                                            FMGL(data)->
                                                            FMGL(size))))
                                    {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98709), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret98710 = (roleMap->FMGL(data))[index98709];
                                ret98710;
                            }))
                            ;
                            
                            //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                            ;
                            
                            //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int ret98711;
                            
                            //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int r98688 = ((x10_int) (((__extension__ ({
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index98689 = y98708;
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret98690;
                                {
                                    
                                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((x98707->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index98689) < (((x10_int)0))) ||
                                        ((((x10_long) (index98689))) >= (x98707->
                                                                           FMGL(data)->
                                                                           FMGL(size))))
                                    {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98689), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret98690 = (x98707->FMGL(data))[index98689];
                                ret98690;
                            }))
                            ) + (((x10_int)1))));
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index98685 = y98708;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int value98686 = r98688;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret98687;
                            {
                                
                                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x98707->FMGL(data)).isValid()))
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
                                if (((index98685) < (((x10_int)0))) ||
                                    ((((x10_long) (index98685))) >= (x98707->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98685), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                            (x98707->FMGL(data)).set(index98685, value98686);
                            
                            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98687 = value98686;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                            ret98687;
                            
                            //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98711 = r98688;
                            ret98711;
                        }))
                        ) - (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index98691 = off98706;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value98692 = v98700;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret98693;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendSrcV->FMGL(data)).isValid()))
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
                            if (((index98691) < (((x10_int)0))) ||
                                ((((x10_long) (index98691))) >= (sendSrcV->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98691), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendSrcV->FMGL(data)).set(index98691, value98692);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98693 = value98692;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret98693;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index98694 = off98706;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value98695 = v98703;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret98696;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendDstV->FMGL(data)).isValid()))
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
                            if (((index98694) < (((x10_int)0))) ||
                                ((((x10_long) (index98694))) >= (sendDstV->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98694), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendDstV->FMGL(data)).set(index98694, value98695);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98696 = value98695;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret98696;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index98697 = off98706;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value98698 = ((x10_long) ((((x10_long) ((i98716) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank)))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret98699;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendValues->FMGL(data)).isValid()))
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
                            if (((index98697) < (((x10_int)0))) ||
                                ((((x10_long) (index98697))) >= (sendValues->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98697), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendValues->FMGL(data)).set(index98697, value98698);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98699 = value98698;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret98699;
                    }
                }
                
            } else {
                
                //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i57437domain98765 = r98772;
                
                //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i57437min98766 = i57437domain98765->
                                            FMGL(min);
                
                //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i57437max98767 = i57437domain98765->
                                            FMGL(max);
                
                //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i98768;
                    for (
                         //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i98768 = i57437min98766; ((i98768) <= (i57437max98767));
                         
                         //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i98768 = ((x10_long) ((i98768) + (((x10_long)1ll)))))
                    {
                        
                        //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i98769 = i98768;
                        
                        //#line 699 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v98747 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index98748 = i98769;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret98749;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((srcList__->FMGL(data)).isValid()))
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
                                if (((index98748) < (((x10_long) (((x10_int)0))))) ||
                                    ((index98748) >= (srcList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98748), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98749 = (srcList__->FMGL(data))[index98748];
                            ret98749;
                        }))
                        ;
                        
                        //#line 700 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v98750 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index98751 = i98769;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret98752;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((dstList__->FMGL(data)).isValid()))
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
                                if (((index98751) < (((x10_long) (((x10_int)0))))) ||
                                    ((index98751) >= (dstList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98751), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98752 = (dstList__->FMGL(data))[index98751];
                            ret98752;
                        }))
                        ;
                        
                        //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int off98753 = ((x10_int) (((__extension__ ({
                            
                            //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_int> x98754 =
                              offsets98770;
                            
                            //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int y98755 = (__extension__ ({
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index98756 = ((x10_long) ((((x10_long) ((v98750) & (cmask)))) | (((x10_long) ((v98747) & (rmask))))));
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret98757;
                                {
                                    
                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((roleMap->FMGL(data)).isValid()))
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
                                    if (((index98756) < (((x10_long) (((x10_int)0))))) ||
                                        ((index98756) >= (roleMap->
                                                            FMGL(data)->
                                                            FMGL(size))))
                                    {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98756), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret98757 = (roleMap->FMGL(data))[index98756];
                                ret98757;
                            }))
                            ;
                            
                            //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                            ;
                            
                            //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int ret98758;
                            
                            //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int r98720 = ((x10_int) (((__extension__ ({
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index98721 = y98755;
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret98722;
                                {
                                    
                                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((x98754->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index98721) < (((x10_int)0))) ||
                                        ((((x10_long) (index98721))) >= (x98754->
                                                                           FMGL(data)->
                                                                           FMGL(size))))
                                    {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98721), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret98722 = (x98754->FMGL(data))[index98721];
                                ret98722;
                            }))
                            ) + (((x10_int)1))));
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index98717 = y98755;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int value98718 = r98720;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret98719;
                            {
                                
                                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x98754->FMGL(data)).isValid()))
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
                                if (((index98717) < (((x10_int)0))) ||
                                    ((((x10_long) (index98717))) >= (x98754->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98717), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                            (x98754->FMGL(data)).set(index98717, value98718);
                            
                            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98719 = value98718;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                            ret98719;
                            
                            //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98758 = r98720;
                            ret98758;
                        }))
                        ) - (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index98729 = off98753;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value98730 = v98747;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret98731;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendSrcV->FMGL(data)).isValid()))
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
                            if (((index98729) < (((x10_int)0))) ||
                                ((((x10_long) (index98729))) >= (sendSrcV->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98729), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendSrcV->FMGL(data)).set(index98729, value98730);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98731 = value98730;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret98731;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index98732 = off98753;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value98733 = v98750;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret98734;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendDstV->FMGL(data)).isValid()))
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
                            if (((index98732) < (((x10_int)0))) ||
                                ((((x10_long) (index98732))) >= (sendDstV->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98732), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendDstV->FMGL(data)).set(index98732, value98733);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98734 = value98733;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret98734;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index98735 = off98753;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value98736 = ((x10_long) ((((x10_long) ((i98769) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank)))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret98737;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendValues->FMGL(data)).isValid()))
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
                            if (((index98735) < (((x10_int)0))) ||
                                ((((x10_long) (index98735))) >= (sendValues->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98735), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendValues->FMGL(data)).set(index98735, value98736);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98737 = value98736;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret98737;
                        
                        //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int off98759 = ((x10_int) (((__extension__ ({
                            
                            //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_int> x98760 =
                              offsets98770;
                            
                            //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int y98761 = (__extension__ ({
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index98762 = ((x10_long) ((((x10_long) ((v98747) & (cmask)))) | (((x10_long) ((v98750) & (rmask))))));
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret98763;
                                {
                                    
                                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((roleMap->FMGL(data)).isValid()))
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
                                    if (((index98762) < (((x10_long) (((x10_int)0))))) ||
                                        ((index98762) >= (roleMap->
                                                            FMGL(data)->
                                                            FMGL(size))))
                                    {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98762), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret98763 = (roleMap->FMGL(data))[index98762];
                                ret98763;
                            }))
                            ;
                            
                            //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                            ;
                            
                            //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int ret98764;
                            
                            //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int r98726 = ((x10_int) (((__extension__ ({
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index98727 = y98761;
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret98728;
                                {
                                    
                                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((x98760->FMGL(data)).isValid()))
                                    {
                                        
                                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (((index98727) < (((x10_int)0))) ||
                                        ((((x10_long) (index98727))) >= (x98760->
                                                                           FMGL(data)->
                                                                           FMGL(size))))
                                    {
                                        
                                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98727), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret98728 = (x98760->FMGL(data))[index98727];
                                ret98728;
                            }))
                            ) + (((x10_int)1))));
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index98723 = y98761;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int value98724 = r98726;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret98725;
                            {
                                
                                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x98760->FMGL(data)).isValid()))
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
                                if (((index98723) < (((x10_int)0))) ||
                                    ((((x10_long) (index98723))) >= (x98760->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98723), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                            (x98760->FMGL(data)).set(index98723, value98724);
                            
                            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98725 = value98724;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                            ret98725;
                            
                            //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98764 = r98726;
                            ret98764;
                        }))
                        ) - (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index98738 = off98759;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value98739 = v98750;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret98740;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendSrcV->FMGL(data)).isValid()))
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
                            if (((index98738) < (((x10_int)0))) ||
                                ((((x10_long) (index98738))) >= (sendSrcV->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98738), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendSrcV->FMGL(data)).set(index98738, value98739);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98740 = value98739;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret98740;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index98741 = off98759;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value98742 = v98747;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret98743;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendDstV->FMGL(data)).isValid()))
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
                            if (((index98741) < (((x10_int)0))) ||
                                ((((x10_long) (index98741))) >= (sendDstV->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98741), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendDstV->FMGL(data)).set(index98741, value98742);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98743 = value98742;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret98743;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index98744 = off98759;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value98745 = ((x10_long) ((((x10_long) ((i98769) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank)))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret98746;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendValues->FMGL(data)).isValid()))
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
                            if (((index98744) < (((x10_int)0))) ||
                                ((((x10_long) (index98744))) >= (sendValues->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98744), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendValues->FMGL(data)).set(index98744, value98745);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98746 = value98745;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret98746;
                    }
                }
                
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc267) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc267)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc267);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc267);
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
    x10_int idx98773;
    x10::lang::LongRange i_range98777;
    org::scalegraph::util::DistScatterGather scatterGather;
    x10_boolean directed;
    org::scalegraph::util::MemoryChunk<x10_long> srcList__;
    org::scalegraph::util::MemoryChunk<x10_long> dstList__;
    x10_long cmask;
    x10_long rmask;
    org::scalegraph::util::MemoryChunk<x10_int> roleMap;
    org::scalegraph::util::MemoryChunk<x10_long> sendSrcV;
    org::scalegraph::util::MemoryChunk<x10_long> sendDstV;
    x10_int teamSize;
    x10_int teamRank;
    org::scalegraph::util::MemoryChunk<x10_long> sendValues;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx98773);
        buf.write(this->i_range98777);
        buf.write(this->scatterGather);
        buf.write(this->directed);
        buf.write(this->srcList__);
        buf.write(this->dstList__);
        buf.write(this->cmask);
        buf.write(this->rmask);
        buf.write(this->roleMap);
        buf.write(this->sendSrcV);
        buf.write(this->sendDstV);
        buf.write(this->teamSize);
        buf.write(this->teamRank);
        buf.write(this->sendValues);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__42* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__42>();
        buf.record_reference(storage);
        x10_int that_idx98773 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range98777 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_boolean that_directed = buf.read<x10_boolean>();
        org::scalegraph::util::MemoryChunk<x10_long> that_srcList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_dstList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_long that_cmask = buf.read<x10_long>();
        x10_long that_rmask = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<x10_int> that_roleMap = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendSrcV = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendDstV = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_teamSize = buf.read<x10_int>();
        x10_int that_teamRank = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendValues = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_graph_Graph__closure__42* this_ = new (storage) org_scalegraph_graph_Graph__closure__42(that_idx98773, that_i_range98777, that_scatterGather, that_directed, that_srcList__, that_dstList__, that_cmask, that_rmask, that_roleMap, that_sendSrcV, that_sendDstV, that_teamSize, that_teamRank, that_sendValues);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__42(x10_int idx98773, x10::lang::LongRange i_range98777, org::scalegraph::util::DistScatterGather scatterGather, x10_boolean directed, org::scalegraph::util::MemoryChunk<x10_long> srcList__, org::scalegraph::util::MemoryChunk<x10_long> dstList__, x10_long cmask, x10_long rmask, org::scalegraph::util::MemoryChunk<x10_int> roleMap, org::scalegraph::util::MemoryChunk<x10_long> sendSrcV, org::scalegraph::util::MemoryChunk<x10_long> sendDstV, x10_int teamSize, x10_int teamRank, org::scalegraph::util::MemoryChunk<x10_long> sendValues) : idx98773(idx98773), i_range98777(i_range98777), scatterGather(scatterGather), directed(directed), srcList__(srcList__), dstList__(dstList__), cmask(cmask), rmask(rmask), roleMap(roleMap), sendSrcV(sendSrcV), sendDstV(sendDstV), teamSize(teamSize), teamRank(teamRank), sendValues(sendValues) { }
    
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

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__42_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__40_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__40_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_Graph__closure__40 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > >::itable<org_scalegraph_graph_Graph__closure__40> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > __apply() {
        
        //#line 629 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
        
        //#line 630 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistScatterGather scatterGather =  org::scalegraph::util::DistScatterGather::_alloc();
        
        //#line 630 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
        (scatterGather)->::org::scalegraph::util::DistScatterGather::_constructor(
          team_);
        
        //#line 631 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> srcList__ = srcList_->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 632 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> dstList__ = dstList_->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 633 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids = dist2d->org::scalegraph::util::Dist2D::getIds(
                                                     vi->
                                                       FMGL(numberOfVertices),
                                                     org::scalegraph::graph::Graph::getLocalNumberOfVertices(
                                                       vi,
                                                       (__extension__ ({
                                                           
                                                           //#line 634 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                           x10::array::Array<x10_int>* this95649 =
                                                             x10aux::nullCheck(team_)->role();
                                                           
                                                           //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                                           ;
                                                           
                                                           //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                           x10_int ret95650;
                                                           
                                                           //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                           goto __ret95651; __ret95651: {
                                                           {
                                                               
                                                               //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                               if (x10aux::nullCheck(this95649)->
                                                                     FMGL(rail))
                                                               {
                                                                   
                                                                   //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                   ret95650 =
                                                                     (x10aux::nullCheck(this95649)->
                                                                        FMGL(raw))->__apply(((x10_int)0));
                                                                   
                                                                   //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                   goto __ret95651_end_;
                                                               }
                                                               else
                                                               {
                                                                   
                                                                   //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                   if (true &&
                                                                       !(x10aux::nullCheck(this95649)->
                                                                           FMGL(region)->contains(
                                                                           ((x10_int)0))))
                                                                   {
                                                                       
                                                                       //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                       x10::array::Array<void>::raiseBoundsError(
                                                                         ((x10_int)0));
                                                                   }
                                                                   
                                                                   //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                   ret95650 =
                                                                     (x10aux::nullCheck(this95649)->
                                                                        FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this95649)->
                                                                                                                            FMGL(layout_min0)))));
                                                                   
                                                                   //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                   goto __ret95651_end_;
                                                               }
                                                               
                                                           }goto __ret95651_end_; __ret95651_end_: ;
                                                           }
                                                           ret95650;
                                                           }))
                                                           ),
                                                     transpose);
                                                   
        
        //#line 635 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> roleMap =
          org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (x10aux::nullCheck(dist2d->org::scalegraph::util::Dist2D::allTeam())->size())), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 636 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10::lang::Place>* places = x10aux::nullCheck(dist2d->org::scalegraph::util::Dist2D::allTeam())->places();
        
        //#line 637 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
        {
            x10::lang::Iterator<x10::array::Point*>* id57371;
            for (
                 //#line 637 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                 id57371 = x10aux::nullCheck(places)->FMGL(region)->iterator();
                 x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id57371));
                 ) {
                
                //#line 637 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::array::Point* id35 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id57371));
                
                //#line 637 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int i = x10aux::nullCheck(id35)->x10::array::Point::__apply(
                              ((x10_int)0));
                
                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index98604 = i;
                
                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int value98605 = (__extension__ ({
                    
                    //#line 638 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::array::Array<x10_int>* this98606 =
                      x10aux::nullCheck(team_)->role((__extension__ ({
                                                         
                                                         //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                         x10_int i98607 =
                                                           i;
                                                         
                                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                         x10::lang::Place ret98608;
                                                         
                                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                         goto __ret98609; __ret98609: {
                                                         {
                                                             
                                                             //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                             if (x10aux::nullCheck(places)->
                                                                   FMGL(rail))
                                                             {
                                                                 
                                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                 ret98608 =
                                                                   (x10aux::nullCheck(places)->
                                                                      FMGL(raw))->__apply(i98607);
                                                                 
                                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                 goto __ret98609_end_;
                                                             }
                                                             else
                                                             {
                                                                 
                                                                 //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                 if (true &&
                                                                     !(x10aux::nullCheck(places)->
                                                                         FMGL(region)->contains(
                                                                         i98607)))
                                                                 {
                                                                     
                                                                     //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                     x10::array::Array<void>::raiseBoundsError(
                                                                       i98607);
                                                                 }
                                                                 
                                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                 ret98608 =
                                                                   (x10aux::nullCheck(places)->
                                                                      FMGL(raw))->__apply(((x10_int) ((i98607) - (x10aux::nullCheck(places)->
                                                                                                                    FMGL(layout_min0)))));
                                                                 
                                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                 goto __ret98609_end_;
                                                             }
                                                             
                                                         }goto __ret98609_end_; __ret98609_end_: ;
                                                         }
                                                         ret98608;
                                                         }))
                                                         );
                      
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int ret98610;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret98611; __ret98611: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(this98606)->
                              FMGL(rail)) {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98610 = (x10aux::nullCheck(this98606)->
                                          FMGL(raw))->__apply(((x10_int)0));
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret98611_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(this98606)->
                                            FMGL(region)->contains(
                                            ((x10_int)0))))
                            {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  ((x10_int)0));
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret98610 = (x10aux::nullCheck(this98606)->
                                          FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this98606)->
                                                                                              FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret98611_end_;
                        }
                        
                    }goto __ret98611_end_; __ret98611_end_: ;
                    }
                    ret98610;
                    }))
                    ;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret98612;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((roleMap->FMGL(data)).isValid()))
                        {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index98604) < (((x10_int)0))) ||
                            ((((x10_long) (index98604))) >= (roleMap->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98604), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (roleMap->FMGL(data)).set(index98604, value98605);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret98612 = value98605;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret98612;
                }
                }
                
            
            //#line 640 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long rmask = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (ids->
                                                                                        FMGL(lgr)))))) - (((x10_long) (((x10_int)1))))));
            
            //#line 641 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long cmask = ((x10_long) ((((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (((x10_int) ((ids->
                                                                                                                   FMGL(lgc)) + (ids->
                                                                                                                                   FMGL(lgr))))))))) - (((x10_long) (((x10_int)1))))))) - (rmask)));
            
            //#line 643 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                         FMGL(id), ((x10_int)0))))
            {
                
                //#line 643 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                  x10aux::makeStringLit("start graph construction"));
            }
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range98790 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((srcList__->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size98681 = ((x10_long) ((((x10_long) ((range98790->
                                                               FMGL(max)) - (range98790->
                                                                               FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads98682 = x10::lang::Runtime::FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size98683 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a98684 = ((x10_long) ((((x10_long) ((((x10_long) ((size98681) + (((x10_long) (nthreads98682)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads98682)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a98684) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a98684);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var18 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable99511 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i76030max98678 = ((x10_int) ((nthreads98682) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i98679;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i98679 = ((x10_int)0);
                                         ((i98679) <= (i76030max98678));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i98679 = ((x10_int) ((i98679) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i98680 = i98679;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx98671 =
                                          i98680;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start98672 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a98673 =
                                              ((x10_long) ((range98790->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b98674 =
                                              ((x10_long) ((range98790->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i98680))) * (chunk_size98683))))));
                                            ((a98673) < (b98674))
                                              ? (a98673) : (b98674);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range98675 =
                                          x10::lang::LongRange::_make(i_start98672, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a98676 =
                                              range98790->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b98677 =
                                              ((x10_long) ((((x10_long) ((i_start98672) + (chunk_size98683)))) - (((x10_long) (((x10_int)1))))));
                                            ((a98676) < (b98677))
                                              ? (a98676) : (b98677);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__41)))org_scalegraph_graph_Graph__closure__41(idx98671, i_range98675, scatterGather, directed, srcList__, dstList__, cmask, rmask, roleMap))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc265) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc265);
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
                    catch (x10::lang::CheckedThrowable* __exc266) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal99512 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc266);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable99511 = formal99512;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable99511)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable99511))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable99511));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var18);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable99511)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable99511)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable99511));
                        }
                        
                    }
                    
                }
            }
            
            //#line 662 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            scatterGather->org::scalegraph::util::DistScatterGather::sum();
            
            //#line 663 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                         FMGL(id), ((x10_int)0))))
            {
                
                //#line 663 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                  x10aux::makeStringLit("count edge finished"));
            }
            
            //#line 664 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int teamRank = (__extension__ ({
                
                //#line 664 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::array::Array<x10_int>* this95841 = x10aux::nullCheck(team_)->role();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret95842;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret95843; __ret95843: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this95841)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret95842 = (x10aux::nullCheck(this95841)->
                                      FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret95843_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this95841)->
                                        FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret95842 = (x10aux::nullCheck(this95841)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this95841)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret95843_end_;
                    }
                    
                }goto __ret95843_end_; __ret95843_end_: ;
                }
                ret95842;
                }))
                ;
                
            
            //#line 665 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int teamSize = x10aux::nullCheck(team_)->size();
            
            //#line 666 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int sendCount = scatterGather->org::scalegraph::util::DistScatterGather::sendCount();
            
            //#line 667 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> sendSrcV =
              org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (sendCount)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 668 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> sendDstV =
              org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (sendCount)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 669 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> sendValues =
              org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (sendCount)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range98791 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((srcList__->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size98783 = ((x10_long) ((((x10_long) ((range98791->
                                                               FMGL(max)) - (range98791->
                                                                               FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads98784 = x10::lang::Runtime::FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size98785 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a98786 = ((x10_long) ((((x10_long) ((((x10_long) ((size98783) + (((x10_long) (nthreads98784)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads98784)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a98786) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a98786);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var19 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable99514 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i76030max98780 = ((x10_int) ((nthreads98784) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i98781;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i98781 = ((x10_int)0);
                                         ((i98781) <= (i76030max98780));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i98781 = ((x10_int) ((i98781) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i98782 = i98781;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx98773 =
                                          i98782;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start98774 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a98775 =
                                              ((x10_long) ((range98791->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b98776 =
                                              ((x10_long) ((range98791->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i98782))) * (chunk_size98785))))));
                                            ((a98775) < (b98776))
                                              ? (a98775) : (b98776);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range98777 =
                                          x10::lang::LongRange::_make(i_start98774, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a98778 =
                                              range98791->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b98779 =
                                              ((x10_long) ((((x10_long) ((i_start98774) + (chunk_size98785)))) - (((x10_long) (((x10_int)1))))));
                                            ((a98778) < (b98779))
                                              ? (a98778) : (b98779);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__42)))org_scalegraph_graph_Graph__closure__42(idx98773, i_range98777, scatterGather, directed, srcList__, dstList__, cmask, rmask, roleMap, sendSrcV, sendDstV, teamSize, teamRank, sendValues))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc268) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc268);
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
                    catch (x10::lang::CheckedThrowable* __exc269) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal99515 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc269);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable99514 = formal99515;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable99514)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable99514))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable99514));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var19);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable99514)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable99514)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable99514));
                        }
                        
                    }
                    
                }
            }
            
            //#line 712 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                         FMGL(id), ((x10_int)0))))
            {
                
                //#line 712 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                  x10aux::makeStringLit("complete creating send data"));
            }
            
            //#line 713 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> recvSrcV =
              scatterGather->scatter<x10_long >(sendSrcV);
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (sendSrcV->FMGL(data)).del();
            
            //#line 714 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> recvDstV =
              scatterGather->scatter<x10_long >(sendDstV);
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (sendDstV->FMGL(data)).del();
            
            //#line 715 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> recvValues =
              scatterGather->scatter<x10_long >(sendValues);
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (sendValues->FMGL(data)).del();
            
            //#line 716 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                         FMGL(id), ((x10_int)0))))
            {
                
                //#line 716 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                  x10aux::makeStringLit("alltoall finished"));
            }
            
            //#line 717 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 717 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > alloc57341 =
                   org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> >::_alloc();
                
                //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::id::IdStruct val98787 =
                  ids;
                
                //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::SparseMatrix<x10_long> val98788 =
                  (__extension__ ({
                    
                    //#line 717 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::blas::SparseMatrix<x10_long> alloc98789 =
                       org::scalegraph::blas::SparseMatrix<x10_long>::_alloc();
                    
                    //#line 717 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                    (alloc98789)->::org::scalegraph::blas::SparseMatrix<x10_long>::_constructor(
                      recvSrcV, recvDstV, recvValues, ids);
                    alloc98789;
                }))
                ;
                
                //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                alloc57341->FMGL(val1) = val98787;
                
                //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                alloc57341->FMGL(val2) = val98788;
                alloc57341;
            }))
            ;
            }
            
            // captured environment
            x10::util::Team* team_;
            org::scalegraph::util::DistMemoryChunk<x10_long> srcList_;
            org::scalegraph::util::DistMemoryChunk<x10_long> dstList_;
            org::scalegraph::util::Dist2D dist2d;
            org::scalegraph::graph::Graph__VertexInfo vi;
            x10_boolean transpose;
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
                buf.write(this->directed);
            }
            
            template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
                org_scalegraph_graph_Graph__closure__40* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__40>();
                buf.record_reference(storage);
                x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
                org::scalegraph::util::DistMemoryChunk<x10_long> that_srcList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
                org::scalegraph::util::DistMemoryChunk<x10_long> that_dstList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
                org::scalegraph::util::Dist2D that_dist2d = buf.read<org::scalegraph::util::Dist2D>();
                org::scalegraph::graph::Graph__VertexInfo that_vi = buf.read<org::scalegraph::graph::Graph__VertexInfo>();
                x10_boolean that_transpose = buf.read<x10_boolean>();
                x10_boolean that_directed = buf.read<x10_boolean>();
                org_scalegraph_graph_Graph__closure__40* this_ = new (storage) org_scalegraph_graph_Graph__closure__40(that_team_, that_srcList_, that_dstList_, that_dist2d, that_vi, that_transpose, that_directed);
                return this_;
            }
            
            org_scalegraph_graph_Graph__closure__40(x10::util::Team* team_, org::scalegraph::util::DistMemoryChunk<x10_long> srcList_, org::scalegraph::util::DistMemoryChunk<x10_long> dstList_, org::scalegraph::util::Dist2D dist2d, org::scalegraph::graph::Graph__VertexInfo vi, x10_boolean transpose, x10_boolean directed) : team_(team_), srcList_(srcList_), dstList_(dstList_), dist2d(dist2d), vi(vi), transpose(transpose), directed(directed) { }
            
            static const x10aux::serialization_id_t _serialization_id;
            
            static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > > >(); }
            virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > > >(); }
            
            x10::lang::String* toString() {
                return x10aux::makeStringLit(this->toNativeString());
            }
            
            const char* toNativeString() {
                return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:628-718";
            }
        
        };
        
        #endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__40_CLOSURE
        #ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__47_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__47_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_Graph__closure__47 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__47> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long tid99044 = ((x10_long) (idx99046));
            
            //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r99045 = i_range99050;
            
            //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (directed) {
                
                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i57541domain99010 = r99045;
                
                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i57541min99011 = i57541domain99010->FMGL(min);
                
                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i57541max99012 = i57541domain99010->FMGL(max);
                
                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i99013;
                    for (
                         //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i99013 = i57541min99011; ((i99013) <= (i57541max99012));
                         
                         //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i99013 = ((x10_long) ((i99013) + (((x10_long)1ll)))))
                    {
                        
                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i99014 = i99013;
                        
                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v99004 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index99005 = i99014;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret99006;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((srcList__->FMGL(data)).isValid()))
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
                                if (((index99005) < (((x10_long) (((x10_int)0))))) ||
                                    ((index99005) >= (srcList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99005), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret99006 = (srcList__->FMGL(data))[index99005];
                            ret99006;
                        }))
                        ;
                        
                        //#line 879 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v99007 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index99008 = i99014;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret99009;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((dstList__->FMGL(data)).isValid()))
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
                                if (((index99008) < (((x10_long) (((x10_int)0))))) ||
                                    ((index99008) >= (dstList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99008), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret99009 = (dstList__->FMGL(data))[index99008];
                            ret99009;
                        }))
                        ;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index98995 = i99014;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value98996 = v99004;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret98997;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendSrcV->FMGL(data)).isValid()))
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
                            if (((index98995) < (((x10_long) (((x10_int)0))))) ||
                                ((index98995) >= (sendSrcV->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98995), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendSrcV->FMGL(data)).set(index98995, value98996);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98997 = value98996;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret98997;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index98998 = i99014;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value98999 = v99007;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret99000;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendDstV->FMGL(data)).isValid()))
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
                            if (((index98998) < (((x10_long) (((x10_int)0))))) ||
                                ((index98998) >= (sendDstV->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index98998), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendDstV->FMGL(data)).set(index98998, value98999);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret99000 = value98999;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret99000;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index99001 = i99014;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value99002 = ((x10_long) ((((x10_long) ((i99014) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank)))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret99003;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendIndexes->FMGL(data)).isValid()))
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
                            if (((index99001) < (((x10_long) (((x10_int)0))))) ||
                                ((index99001) >= (sendIndexes->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99001), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendIndexes->FMGL(data)).set(index99001, value99002);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret99003 = value99002;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret99003;
                    }
                }
                
            } else {
                
                //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i57560domain99039 = r99045;
                
                //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i57560min99040 = i57560domain99039->
                                            FMGL(min);
                
                //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i57560max99041 = i57560domain99039->
                                            FMGL(max);
                
                //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i99042;
                    for (
                         //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i99042 = i57560min99040; ((i99042) <= (i57560max99041));
                         
                         //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i99042 = ((x10_long) ((i99042) + (((x10_long)1ll)))))
                    {
                        
                        //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i99043 = i99042;
                        
                        //#line 887 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v99033 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index99034 = i99043;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret99035;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((srcList__->FMGL(data)).isValid()))
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
                                if (((index99034) < (((x10_long) (((x10_int)0))))) ||
                                    ((index99034) >= (srcList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99034), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret99035 = (srcList__->FMGL(data))[index99034];
                            ret99035;
                        }))
                        ;
                        
                        //#line 888 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v99036 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index99037 = i99043;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret99038;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((dstList__->FMGL(data)).isValid()))
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
                                if (((index99037) < (((x10_long) (((x10_int)0))))) ||
                                    ((index99037) >= (dstList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99037), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret99038 = (dstList__->FMGL(data))[index99037];
                            ret99038;
                        }))
                        ;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index99015 = ((x10_long) ((((x10_long) ((i99043) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)0))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value99016 = v99033;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret99017;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendSrcV->FMGL(data)).isValid()))
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
                            if (((index99015) < (((x10_long) (((x10_int)0))))) ||
                                ((index99015) >= (sendSrcV->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99015), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendSrcV->FMGL(data)).set(index99015, value99016);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret99017 = value99016;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret99017;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index99018 = ((x10_long) ((((x10_long) ((i99043) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)0))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value99019 = v99036;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret99020;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendDstV->FMGL(data)).isValid()))
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
                            if (((index99018) < (((x10_long) (((x10_int)0))))) ||
                                ((index99018) >= (sendDstV->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99018), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendDstV->FMGL(data)).set(index99018, value99019);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret99020 = value99019;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret99020;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index99021 = ((x10_long) ((((x10_long) ((i99043) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)0))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value99022 = ((x10_long) ((((x10_long) ((i99043) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank)))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret99023;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendIndexes->FMGL(data)).isValid()))
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
                            if (((index99021) < (((x10_long) (((x10_int)0))))) ||
                                ((index99021) >= (sendIndexes->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99021), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendIndexes->FMGL(data)).set(index99021, value99022);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret99023 = value99022;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret99023;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index99024 = ((x10_long) ((((x10_long) ((i99043) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value99025 = v99036;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret99026;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendSrcV->FMGL(data)).isValid()))
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
                            if (((index99024) < (((x10_long) (((x10_int)0))))) ||
                                ((index99024) >= (sendSrcV->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99024), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendSrcV->FMGL(data)).set(index99024, value99025);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret99026 = value99025;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret99026;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index99027 = ((x10_long) ((((x10_long) ((i99043) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value99028 = v99033;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret99029;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendDstV->FMGL(data)).isValid()))
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
                            if (((index99027) < (((x10_long) (((x10_int)0))))) ||
                                ((index99027) >= (sendDstV->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99027), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendDstV->FMGL(data)).set(index99027, value99028);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret99029 = value99028;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret99029;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index99030 = ((x10_long) ((((x10_long) ((i99043) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value99031 = ((x10_long) ((((x10_long) ((i99043) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank)))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret99032;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((sendIndexes->FMGL(data)).isValid()))
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
                            if (((index99030) < (((x10_long) (((x10_int)0))))) ||
                                ((index99030) >= (sendIndexes->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99030), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendIndexes->FMGL(data)).set(index99030, value99031);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret99032 = value99031;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret99032;
                    }
                }
                
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc278) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc278)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc278);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc278);
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
    x10_int idx99046;
    x10::lang::LongRange i_range99050;
    x10_boolean directed;
    org::scalegraph::util::MemoryChunk<x10_long> srcList__;
    org::scalegraph::util::MemoryChunk<x10_long> dstList__;
    org::scalegraph::util::MemoryChunk<x10_long> sendSrcV;
    org::scalegraph::util::MemoryChunk<x10_long> sendDstV;
    x10_int teamSize;
    x10_int teamRank;
    org::scalegraph::util::MemoryChunk<x10_long> sendIndexes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx99046);
        buf.write(this->i_range99050);
        buf.write(this->directed);
        buf.write(this->srcList__);
        buf.write(this->dstList__);
        buf.write(this->sendSrcV);
        buf.write(this->sendDstV);
        buf.write(this->teamSize);
        buf.write(this->teamRank);
        buf.write(this->sendIndexes);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__47* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__47>();
        buf.record_reference(storage);
        x10_int that_idx99046 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range99050 = buf.read<x10::lang::LongRange>();
        x10_boolean that_directed = buf.read<x10_boolean>();
        org::scalegraph::util::MemoryChunk<x10_long> that_srcList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_dstList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendSrcV = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendDstV = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_teamSize = buf.read<x10_int>();
        x10_int that_teamRank = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendIndexes = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_graph_Graph__closure__47* this_ = new (storage) org_scalegraph_graph_Graph__closure__47(that_idx99046, that_i_range99050, that_directed, that_srcList__, that_dstList__, that_sendSrcV, that_sendDstV, that_teamSize, that_teamRank, that_sendIndexes);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__47(x10_int idx99046, x10::lang::LongRange i_range99050, x10_boolean directed, org::scalegraph::util::MemoryChunk<x10_long> srcList__, org::scalegraph::util::MemoryChunk<x10_long> dstList__, org::scalegraph::util::MemoryChunk<x10_long> sendSrcV, org::scalegraph::util::MemoryChunk<x10_long> sendDstV, x10_int teamSize, x10_int teamRank, org::scalegraph::util::MemoryChunk<x10_long> sendIndexes) : idx99046(idx99046), i_range99050(i_range99050), directed(directed), srcList__(srcList__), dstList__(dstList__), sendSrcV(sendSrcV), sendDstV(sendDstV), teamSize(teamSize), teamRank(teamRank), sendIndexes(sendIndexes) { }
    
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

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__47_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__48_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__48_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_Graph__closure__48 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__48> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 922 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Try_c
        try {
            
            //#line 923 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* this99070 =
              (ret)->__apply();
            
            //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > x99071 =
              ref;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > x99068 =
              x99071;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > ret99069;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this99070)->FMGL(value) = x99068;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
            ret99069 = x99068;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
            ret99069;
        }
        catch (x10::lang::CheckedThrowable* __exc281) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc281);
                {
                    
                    //#line 922 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::wrapAtChecked(reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > ret;
    x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > ref;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ret);
        buf.write(this->ref);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__48* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__48>();
        buf.record_reference(storage);
        x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > that_ret = buf.read<x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > >();
        x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > that_ref = buf.read<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >();
        org_scalegraph_graph_Graph__closure__48* this_ = new (storage) org_scalegraph_graph_Graph__closure__48(that_ret, that_ref);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__48(x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > ret, x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > ref) : ret(ret), ref(ref) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:922-924";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__48_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__46_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__46_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_Graph__closure__46 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__46> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 865 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Try_c
        try {
            
            //#line 866 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> srcList__ = srcList_->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            
            //#line 867 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> dstList__ = dstList_->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            
            //#line 868 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long numEdges = (__extension__ ({
                srcList__->FMGL(data)->FMGL(size);
            }))
            ;
            
            //#line 869 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long sendCount = directed ? (numEdges) : (((x10_long) ((numEdges) * (((x10_long) (((x10_int)2)))))));
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> sendSrcV = org::scalegraph::util::MemoryChunk<x10_long >::_make(sendCount, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> sendDstV = org::scalegraph::util::MemoryChunk<x10_long >::_make(sendCount, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> sendIndexes = org::scalegraph::util::MemoryChunk<x10_long >::_make(sendCount, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int teamSize = x10aux::nullCheck(team_)->size();
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int teamRank = (__extension__ ({
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::array::Array<x10_int>* this97360 = x10aux::nullCheck(team_)->role();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret97361;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret97362; __ret97362: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this97360)->FMGL(rail)) {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97361 = (x10aux::nullCheck(this97360)->FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret97362_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this97360)->FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97361 = (x10aux::nullCheck(this97360)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this97360)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret97362_end_;
                    }
                    
                }goto __ret97362_end_; __ret97362_end_: ;
                }
                ret97361;
                }))
                ;
                
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range99077 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((srcList__->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size99056 = ((x10_long) ((((x10_long) ((range99077->
                                                               FMGL(max)) - (range99077->
                                                                               FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads99057 = x10::lang::Runtime::FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size99058 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a99059 = ((x10_long) ((((x10_long) ((((x10_long) ((size99056) + (((x10_long) (nthreads99057)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads99057)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a99059) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a99059);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var22 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable99523 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i76030max99053 = ((x10_int) ((nthreads99057) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i99054;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i99054 = ((x10_int)0);
                                         ((i99054) <= (i76030max99053));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i99054 = ((x10_int) ((i99054) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i99055 = i99054;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx99046 =
                                          i99055;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start99047 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a99048 =
                                              ((x10_long) ((range99077->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b99049 =
                                              ((x10_long) ((range99077->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i99055))) * (chunk_size99058))))));
                                            ((a99048) < (b99049))
                                              ? (a99048) : (b99049);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range99050 =
                                          x10::lang::LongRange::_make(i_start99047, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a99051 =
                                              range99077->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b99052 =
                                              ((x10_long) ((((x10_long) ((i_start99047) + (chunk_size99058)))) - (((x10_long) (((x10_int)1))))));
                                            ((a99051) < (b99052))
                                              ? (a99051) : (b99052);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__47)))org_scalegraph_graph_Graph__closure__47(idx99046, i_range99050, directed, srcList__, dstList__, sendSrcV, sendDstV, teamSize, teamRank, sendIndexes))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc279) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc279);
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
                    catch (x10::lang::CheckedThrowable* __exc280) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal99524 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc280);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable99523 = formal99524;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable99523)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable99523))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable99523));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var22);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable99523)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable99523)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable99523));
                        }
                        
                    }
                    
                }
            }
            
            //#line 899 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Team2 team2 =  org::scalegraph::util::Team2::_alloc();
            
            //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10::util::Team* baseTeam99078 = team_;
            
            //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10FieldAssign_c
            team2->FMGL(base) = baseTeam99078;
            
            //#line 901 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> sendNumEdges =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value99079 = ((x10_int) ((__extension__ ({
                sendSrcV->FMGL(data)->FMGL(size);
            }))
            ));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret99080;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((sendNumEdges->FMGL(data)).isValid()))
                {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (sendNumEdges->
                                                                                              FMGL(data)->
                                                                                              FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)0)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (sendNumEdges->FMGL(data)).set(((x10_int)0), value99079);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret99080 = value99079;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret99080;
            
            //#line 903 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(place, x10::lang::Place::_make(x10aux::here))))
            {
                
                //#line 904 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (x10aux::nullCheck(team_)->size())), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 905 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> offsets =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int) ((x10aux::nullCheck(team_)->size()) + (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 906 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gather<x10_int >(root, sendNumEdges,
                                        counts);
                
                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret99072;
                {
                    
                    //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((offsets->FMGL(data)).isValid()))
                    {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((((x10_int)0)) < (((x10_int)0))) ||
                        ((((x10_long) (((x10_int)0)))) >= (offsets->
                                                             FMGL(data)->
                                                             FMGL(size))))
                    {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)0)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (offsets->FMGL(data)).set(((x10_int)0), ((x10_int)0));
                
                //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret99072 = ((x10_int)0);
                
                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret99072;
                
                //#line 909 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i57579domain99073 = (__extension__ ({
                    x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((counts->
                                                                                 FMGL(data)->
                                                                                 FMGL(size)) - (((x10_long)1ll)))));
                }))
                ;
                
                //#line 909 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i57579max99074 = i57579domain99073->
                                            FMGL(max);
                
                //#line 909 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i99075;
                    for (
                         //#line 909 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i99075 = ((x10_long)0ll); ((i99075) <= (i57579max99074));
                         
                         //#line 909 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i99075 = ((x10_long) ((i99075) + (((x10_long)1ll)))))
                    {
                        
                        //#line 909 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i99076 = i99075;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index99060 = ((x10_long) ((i99076) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int value99061 = ((x10_int) (((__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index99062 = i99076;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret99063;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((offsets->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index99062) < (((x10_long) (((x10_int)0))))) ||
                                    ((index99062) >= (offsets->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99062), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret99063 = (offsets->FMGL(data))[index99062];
                            ret99063;
                        }))
                        ) + ((__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index99064 = i99076;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret99065;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((counts->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index99064) < (((x10_long) (((x10_int)0))))) ||
                                    ((index99064) >= (counts->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99064), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret99065 = (counts->FMGL(data))[index99064];
                            ret99065;
                        }))
                        )));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret99066;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((offsets->FMGL(data)).isValid()))
                            {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index99060) < (((x10_long) (((x10_int)0))))) ||
                                ((index99060) >= (offsets->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index99060), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (offsets->FMGL(data)).set(index99060, value99061);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret99066 = value99061;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret99066;
                    }
                }
                
                //#line 910 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> recvSrcV =
                  org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((__extension__ ({
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index97517 = x10aux::nullCheck(team_)->size();
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret97518;
                    {
                        
                        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((offsets->FMGL(data)).isValid()))
                        {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index97517) < (((x10_int)0))) ||
                            ((((x10_long) (index97517))) >= (offsets->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97517), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret97518 = (offsets->FMGL(data))[index97517];
                    ret97518;
                }))
                )), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 911 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> recvDstV =
                  org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((__extension__ ({
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index97520 = x10aux::nullCheck(team_)->size();
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret97521;
                    {
                        
                        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((offsets->FMGL(data)).isValid()))
                        {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index97520) < (((x10_int)0))) ||
                            ((((x10_long) (index97520))) >= (offsets->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97520), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret97521 = (offsets->FMGL(data))[index97520];
                    ret97521;
                }))
                )), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 912 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> recvIndexes =
                  org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((__extension__ ({
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index97523 = x10aux::nullCheck(team_)->size();
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret97524;
                    {
                        
                        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((offsets->FMGL(data)).isValid()))
                        {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index97523) < (((x10_int)0))) ||
                            ((((x10_long) (index97523))) >= (offsets->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97523), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret97524 = (offsets->FMGL(data))[index97523];
                    ret97524;
                }))
                )), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 913 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gatherv<x10_long >(root, sendSrcV,
                                          recvSrcV, counts,
                                          offsets);
                
                //#line 914 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gatherv<x10_long >(root, sendDstV,
                                          recvDstV, counts,
                                          offsets);
                
                //#line 915 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gatherv<x10_long >(root, sendIndexes,
                                          recvIndexes, counts,
                                          offsets);
                
                //#line 917 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int lgl = 63 - __builtin_clzl(((saved_this->
                                                      FMGL(numberOfVertices)) << 1) - 1);
                
                //#line 918 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::SparseMatrix<x10_long> sparseMatrix =
                   org::scalegraph::blas::SparseMatrix<x10_long>::_alloc();
                
                //#line 918 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                (sparseMatrix)->::org::scalegraph::blas::SparseMatrix<x10_long>::_constructor(
                  recvSrcV, recvDstV, recvIndexes, lgl, transpose);
                
                //#line 921 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > ref =
                  x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* >::_make((__extension__ ({
                                                                                                                     
                                                                                                                     //#line 921 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                                                                                     x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* alloc57347 =
                                                                                                                       
                                                                                                                     ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> > >(), 0, sizeof(x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >))) x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >()))
                                                                                                                     ;
                                                                                                                     
                                                                                                                     //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                                                                                                                     org::scalegraph::blas::SparseMatrix<x10_long> x99067 =
                                                                                                                       sparseMatrix;
                                                                                                                     
                                                                                                                     //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                                                                     alloc57347->
                                                                                                                       FMGL(value) =
                                                                                                                       x99067;
                                                                                                                     alloc57347;
                                                                                                                 }))
                                                                                                                 );
                {
                    
                    //#line 922 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::runAt(x10::lang::Place::place((ret)->location),
                                              reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__48)))org_scalegraph_graph_Graph__closure__48(ret, ref))),
                                              x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
                }
            } else {
                
                //#line 927 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> nullInt =
                  org::scalegraph::util::MemoryChunk<void>::getNull<x10_int >();
                
                //#line 928 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> nullLong =
                  org::scalegraph::util::MemoryChunk<void>::getNull<x10_long >();
                
                //#line 929 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gather<x10_int >(root, sendNumEdges,
                                        nullInt);
                
                //#line 930 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gatherv<x10_long >(root, sendSrcV,
                                          nullLong, nullInt,
                                          nullInt);
                
                //#line 931 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gatherv<x10_long >(root, sendDstV,
                                          nullLong, nullInt,
                                          nullInt);
                
                //#line 932 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gatherv<x10_long >(root, sendIndexes,
                                          nullLong, nullInt,
                                          nullInt);
            }
            }
            catch (x10::lang::CheckedThrowable* __exc282) {
                if (true) {
                    x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc282);
                    {
                        
                        //#line 936 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        (e)->printStackTrace();
                    }
                } else
                throw;
            }
        }
        
        // captured environment
        org::scalegraph::util::DistMemoryChunk<x10_long> srcList_;
        org::scalegraph::util::DistMemoryChunk<x10_long> dstList_;
        x10_boolean directed;
        x10::util::Team* team_;
        x10::lang::Place place;
        x10_int root;
        org::scalegraph::graph::Graph* saved_this;
        x10_boolean transpose;
        x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > ret;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->srcList_);
            buf.write(this->dstList_);
            buf.write(this->directed);
            buf.write(this->team_);
            buf.write(this->place);
            buf.write(this->root);
            buf.write(this->saved_this);
            buf.write(this->transpose);
            buf.write(this->ret);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_graph_Graph__closure__46* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__46>();
            buf.record_reference(storage);
            org::scalegraph::util::DistMemoryChunk<x10_long> that_srcList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
            org::scalegraph::util::DistMemoryChunk<x10_long> that_dstList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
            x10_boolean that_directed = buf.read<x10_boolean>();
            x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
            x10::lang::Place that_place = buf.read<x10::lang::Place>();
            x10_int that_root = buf.read<x10_int>();
            org::scalegraph::graph::Graph* that_saved_this = buf.read<org::scalegraph::graph::Graph*>();
            x10_boolean that_transpose = buf.read<x10_boolean>();
            x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > that_ret = buf.read<x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > >();
            org_scalegraph_graph_Graph__closure__46* this_ = new (storage) org_scalegraph_graph_Graph__closure__46(that_srcList_, that_dstList_, that_directed, that_team_, that_place, that_root, that_saved_this, that_transpose, that_ret);
            return this_;
        }
        
        org_scalegraph_graph_Graph__closure__46(org::scalegraph::util::DistMemoryChunk<x10_long> srcList_, org::scalegraph::util::DistMemoryChunk<x10_long> dstList_, x10_boolean directed, x10::util::Team* team_, x10::lang::Place place, x10_int root, org::scalegraph::graph::Graph* saved_this, x10_boolean transpose, x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > ret) : srcList_(srcList_), dstList_(dstList_), directed(directed), team_(team_), place(place), root(root), saved_this(saved_this), transpose(transpose), ret(ret) { }
        
        static const x10aux::serialization_id_t _serialization_id;
        
        static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        
        x10::lang::String* toString() {
            return x10aux::makeStringLit(this->toNativeString());
        }
        
        const char* toNativeString() {
            return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:864-938";
        }
    
    };
    
    #endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__46_CLOSURE
    #ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__58_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__58_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_Graph__closure__58 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__58> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 1023 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Try_c
        try {
            
            //#line 1024 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            srcList_->org::scalegraph::util::DistMemoryChunk<x10_long>::del();
            
            //#line 1025 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            dstList_->org::scalegraph::util::DistMemoryChunk<x10_long>::del();
            
            //#line 1027 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
            {
                x10::util::ListIterator<x10::lang::Any*>* att57602;
                for (
                     //#line 1027 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                     att57602 = reinterpret_cast<x10::util::ListIterator<x10::lang::Any*>*>(attlist->iterator());
                     x10::util::ListIterator<x10::lang::Any*>::hasNext(x10aux::nullCheck(att57602));
                     ) {
                    
                    //#line 1027 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Any* att = x10::util::ListIterator<x10::lang::Any*>::next(x10aux::nullCheck(att57602));
                    
                    //#line 1028 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_byte> >(att))
                    {
                        
                        //#line 1029 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_byte> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_byte>::del();
                    } else 
                    //#line 1030 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_short> >(att))
                    {
                        
                        //#line 1031 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_short> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_short>::del();
                    } else 
                    //#line 1032 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_int> >(att))
                    {
                        
                        //#line 1033 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_int> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_int>::del();
                    } else 
                    //#line 1034 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_long> >(att))
                    {
                        
                        //#line 1035 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_long> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_long>::del();
                    } else 
                    //#line 1036 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_float> >(att))
                    {
                        
                        //#line 1037 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_float> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_float>::del();
                    } else 
                    //#line 1038 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_double> >(att))
                    {
                        
                        //#line 1039 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_double> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_double>::del();
                    } else 
                    //#line 1040 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_char> >(att))
                    {
                        
                        //#line 1041 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_char> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_char>::del();
                    } else 
                    //#line 1042 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10::lang::String*> >(att))
                    {
                        
                        //#line 1043 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10::lang::String*> >(att)))->org::scalegraph::util::DistMemoryChunk<x10::lang::String*>::del();
                    } else 
                    //#line 1044 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_boolean> >(att))
                    {
                        
                        //#line 1045 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_boolean> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_boolean>::del();
                    } else {
                        
                        //#line 1047 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::UnsupportedOperationException::_make(x10::lang::String::__plus(x10aux::makeStringLit("Type: "), x10aux::type_name(att)))));
                    }
                    
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc311) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc311);
                {
                    
                    //#line 1051 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_;
    org::scalegraph::util::DistMemoryChunk<x10_long> dstList_;
    x10::util::ArrayList<x10::lang::Any*>* attlist;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->srcList_);
        buf.write(this->dstList_);
        buf.write(this->attlist);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__58* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__58>();
        buf.record_reference(storage);
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_dstList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        x10::util::ArrayList<x10::lang::Any*>* that_attlist = buf.read<x10::util::ArrayList<x10::lang::Any*>*>();
        org_scalegraph_graph_Graph__closure__58* this_ = new (storage) org_scalegraph_graph_Graph__closure__58(that_srcList_, that_dstList_, that_attlist);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__58(org::scalegraph::util::DistMemoryChunk<x10_long> srcList_, org::scalegraph::util::DistMemoryChunk<x10_long> dstList_, x10::util::ArrayList<x10::lang::Any*>* attlist) : srcList_(srcList_), dstList_(dstList_), attlist(attlist) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10:1022-1053";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__58_CLOSURE

//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.PropertyDecl_c
 /* static type EDGE = org.scalegraph.util.tuple.Tuple2[x10.lang.Long, x10.lang.Long]; */ 
 /* static type VT_PLH = x10.lang.PlaceLocalHandle[org.scalegraph.graph.VertexTranslatorBase]; */ 

//#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::graph::Graph::numberOfVertices() {
    
    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->FMGL(numberOfVertices);
    
}

//#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::graph::Graph::numberOfEdges() {
    
    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->FMGL(numberOfEdges);
    
}

//#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10::util::Team* org::scalegraph::graph::Graph::team() {
    
    //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->FMGL(team);
    
}

//#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::DistMemoryChunk<x10_long> org::scalegraph::graph::Graph::source(
  ) {
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->FMGL(srcList);
    
}

//#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::DistMemoryChunk<x10_long> org::scalegraph::graph::Graph::target(
  ) {
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->FMGL(dstList);
    
}

//#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >
  org::scalegraph::graph::Graph::createConverter(x10::util::Team* team,
                                                 x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>* create) {
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> > alloc57331 =
           org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >::_alloc();
        
        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
        x10::lang::Any* val98125 = x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL);
        
        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
        x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> val98126 =
          x10::lang::PlaceLocalHandle<void>::makeFlat<org::scalegraph::graph::VertexTranslatorBase* >(
            x10aux::nullCheck(team)->placeGroup(), create);
        
        //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc57331->FMGL(val1) = val98125;
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc57331->FMGL(val2) = val98126;
        alloc57331;
    }))
    ;
    
}

//#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::Graph::_constructor(x10::util::Team* team_,
                                                 x10_int vertexType_,
                                                 x10_boolean useTranslator) {
    
    //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.AssignPropertyCall_c
    FMGL(vertexType) = vertexType_;
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::graph::Graph::__fieldInitializers55865();
    
    //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if (!(x10aux::nullCheck(team_)->equals(x10::util::Team::
                                             FMGL(WORLD__get)())))
    {
        
        //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("Please, input Team.WORLD as the team parameter."))));
    }
    
    //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(team) = team_;
    
    //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(srcList) = (__extension__ ({
        
        //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<x10_long> alloc57332 =
           org::scalegraph::util::DistMemoryChunk<x10_long>::_alloc();
        
        //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
        (alloc57332)->::org::scalegraph::util::DistMemoryChunk<x10_long>::_constructor(
          x10aux::nullCheck(team_)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_Graph__closure__4)))org_scalegraph_graph_Graph__closure__4())));
        alloc57332;
    }))
    ;
    
    //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(dstList) = (__extension__ ({
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<x10_long> alloc57333 =
           org::scalegraph::util::DistMemoryChunk<x10_long>::_alloc();
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
        (alloc57333)->::org::scalegraph::util::DistMemoryChunk<x10_long>::_constructor(
          x10aux::nullCheck(team_)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_Graph__closure__5)))org_scalegraph_graph_Graph__closure__5())));
        alloc57333;
    }))
    ;
    
    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> > translator;
    
    //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Switch_c
    switch (this->FMGL(vertexType)) {
        
        //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case ((x10_int)5): ;
        {
            
            //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (useTranslator) {
                
                //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                translator = org::scalegraph::graph::Graph::createVertexTranslator<x10_long >(
                               team_);
            } else {
                
                //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                translator = org::scalegraph::graph::Graph::createConverter(
                               this->FMGL(team), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >(sizeof(org_scalegraph_graph_Graph__closure__6)))org_scalegraph_graph_Graph__closure__6(team_))));
            }
            
            //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
            break;
        }
        //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case ((x10_int)7): ;
        {
            
            //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (useTranslator) {
                
                //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                translator = org::scalegraph::graph::Graph::createVertexTranslator<x10_double >(
                               this->FMGL(team));
            } else {
                
                //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                translator = org::scalegraph::graph::Graph::createConverter(
                               this->FMGL(team), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >(sizeof(org_scalegraph_graph_Graph__closure__8)))org_scalegraph_graph_Graph__closure__8(team_))));
            }
            
            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
            break;
        }
        //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case ((x10_int)13): ;
        {
            
            //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (useTranslator) {
                
                //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                translator = org::scalegraph::graph::Graph::createVertexTranslator<org::scalegraph::util::SString >(
                               this->FMGL(team));
            } else {
                
                //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make()));
            }
            
            //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
            break;
        }
        //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        default: ;
        {
            
            //#line 138 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("Edge type not supported"))));
        }
    }
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(vertexTranslator) = (__extension__ ({
        translator->FMGL(val2);
    }))
    ;
    
    //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if (useTranslator) {
        
        //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10::lang::Any* vertexNameAtt = (__extension__ ({
            translator->FMGL(val1);
        }))
        ;
        
        //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        this->FMGL(vertexAttributes)->put(x10aux::makeStringLit("name"),
                                          vertexNameAtt);
    }
    
}
org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::_make(
  x10::util::Team* team_, x10_int vertexType_, x10_boolean useTranslator)
{
    org::scalegraph::graph::Graph* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::Graph>(), 0, sizeof(org::scalegraph::graph::Graph))) org::scalegraph::graph::Graph();
    this_->_constructor(team_, vertexType_, useTranslator);
    return this_;
}



//#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::make(
  org::scalegraph::io::NamedDistData* edgeData) {
    
    //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return org::scalegraph::graph::Graph::make(edgeData, x10aux::class_cast_unchecked<org::scalegraph::io::NamedDistData*>(X10_NULL),
                                               false);
    
}

//#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::make(
  org::scalegraph::io::NamedDistData* edgeData, x10_boolean renumbering) {
    
    //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return org::scalegraph::graph::Graph::make(edgeData, x10aux::class_cast_unchecked<org::scalegraph::io::NamedDistData*>(X10_NULL),
                                               renumbering);
    
}

//#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::make(
  org::scalegraph::io::NamedDistData* edgeData, org::scalegraph::io::NamedDistData* vertexData,
  x10_boolean renumbering) {
    
    //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_int srcIdx = x10aux::nullCheck(edgeData)->nameToIndex(
                       (__extension__ ({
                           
                           //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                           x10::lang::String* str94551 = org::scalegraph::io::ID::
                                                           FMGL(NAME_SOURCE__get)();
                           (__extension__ ({
                               
                               //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                               org::scalegraph::util::SString alloc94552 =
                                  org::scalegraph::util::SString::_alloc();
                               
                               //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                               x10::lang::String* str98131 =
                                 str94551;
                               
                               //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                               alloc94552->FMGL(content) =
                                 org::scalegraph::util::StringFromX10String(str98131);
                               alloc94552;
                           }))
                           ;
                       }))
                       );
    
    //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_int dstIdx = x10aux::nullCheck(edgeData)->nameToIndex(
                       (__extension__ ({
                           
                           //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                           x10::lang::String* str94555 = org::scalegraph::io::ID::
                                                           FMGL(NAME_TARGET__get)();
                           (__extension__ ({
                               
                               //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                               org::scalegraph::util::SString alloc94556 =
                                  org::scalegraph::util::SString::_alloc();
                               
                               //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                               x10::lang::String* str98132 =
                                 str94555;
                               
                               //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                               alloc94556->FMGL(content) =
                                 org::scalegraph::util::StringFromX10String(str98132);
                               alloc94556;
                           }))
                           ;
                       }))
                       );
    
    //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_int vertexType = (__extension__ ({
        
        //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_int>* this94560 = x10aux::nullCheck(edgeData)->typeId();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i94559 = srcIdx;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int ret94561;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret94562; __ret94562: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this94560)->FMGL(rail))
            {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret94561 = (x10aux::nullCheck(this94560)->
                              FMGL(raw))->__apply(i94559);
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret94562_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this94560)->
                                FMGL(region)->contains(i94559)))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      i94559);
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret94561 = (x10aux::nullCheck(this94560)->
                              FMGL(raw))->__apply(((x10_int) ((i94559) - (x10aux::nullCheck(this94560)->
                                                                            FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret94562_end_;
            }
            
        }goto __ret94562_end_; __ret94562_end_: ;
        }
        ret94561;
        }))
        ;
        
    
    //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(vertexType,
                                                   x10aux::nullCheck(x10aux::nullCheck(edgeData)->typeId())->x10::array::Array<x10_int>::__apply(
                                                     dstIdx))));
    #endif//NO_ASSERTIONS
    
    //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph* g =  ((new (memset(x10aux::alloc<org::scalegraph::graph::Graph>(), 0, sizeof(org::scalegraph::graph::Graph))) org::scalegraph::graph::Graph()))
    ;
    
    //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
    (g)->::org::scalegraph::graph::Graph::_constructor(x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                                                       vertexType,
                                                       renumbering);
    
    //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::lang::Any* src = (__extension__ ({
        
        //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10::lang::Any*>* this94564 = x10aux::nullCheck(edgeData)->data();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i94563 = srcIdx;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::lang::Any* ret94565;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret94566; __ret94566: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this94564)->FMGL(rail))
            {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret94565 = (x10aux::nullCheck(this94564)->
                              FMGL(raw))->__apply(i94563);
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret94566_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this94564)->
                                FMGL(region)->contains(i94563)))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      i94563);
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret94565 = (x10aux::nullCheck(this94564)->
                              FMGL(raw))->__apply(((x10_int) ((i94563) - (x10aux::nullCheck(this94564)->
                                                                            FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret94566_end_;
            }
            
        }goto __ret94566_end_; __ret94566_end_: ;
        }
        ret94565;
        }))
        ;
        
    
    //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::lang::Any* dst = (__extension__ ({
        
        //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10::lang::Any*>* this94568 = x10aux::nullCheck(edgeData)->data();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i94567 = dstIdx;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::lang::Any* ret94569;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret94570; __ret94570: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this94568)->FMGL(rail))
            {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret94569 = (x10aux::nullCheck(this94568)->
                              FMGL(raw))->__apply(i94567);
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret94570_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this94568)->
                                FMGL(region)->contains(i94567)))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      i94567);
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret94569 = (x10aux::nullCheck(this94568)->
                              FMGL(raw))->__apply(((x10_int) ((i94567) - (x10aux::nullCheck(this94568)->
                                                                            FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret94570_end_;
            }
            
        }goto __ret94570_end_; __ret94570_end_: ;
        }
        ret94569;
        }))
        ;
        
    
    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Switch_c
    switch (vertexType) {
        
        //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case ((x10_int)5): ;
        {
            
            //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            g->org::scalegraph::graph::Graph::addEdges((__extension__ ({
                                                           
                                                           //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::graph::EdgeList<x10_long> alloc57336 =
                                                             
                                                           org::scalegraph::graph::EdgeList<x10_long>::_alloc();
                                                           
                                                           //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::util::DistMemoryChunk<x10_long> src98133 =
                                                             x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_long> >(src);
                                                           
                                                           //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::util::DistMemoryChunk<x10_long> dst98134 =
                                                             x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_long> >(dst);
                                                           
                                                           //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                           alloc57336->
                                                             FMGL(src) =
                                                             src98133;
                                                           
                                                           //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                           alloc57336->
                                                             FMGL(dst) =
                                                             dst98134;
                                                           alloc57336;
                                                       }))
                                                       );
            
            //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
            break;
        }
        //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case ((x10_int)7): ;
        {
            
            //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            g->org::scalegraph::graph::Graph::addEdges((__extension__ ({
                                                           
                                                           //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::graph::EdgeList<x10_double> alloc57337 =
                                                             
                                                           org::scalegraph::graph::EdgeList<x10_double>::_alloc();
                                                           
                                                           //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::util::DistMemoryChunk<x10_double> src98135 =
                                                             x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_double> >(src);
                                                           
                                                           //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::util::DistMemoryChunk<x10_double> dst98136 =
                                                             x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_double> >(dst);
                                                           
                                                           //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                           alloc57337->
                                                             FMGL(src) =
                                                             src98135;
                                                           
                                                           //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                           alloc57337->
                                                             FMGL(dst) =
                                                             dst98136;
                                                           alloc57337;
                                                       }))
                                                       );
            
            //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
            break;
        }
        //#line 169 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case ((x10_int)13): ;
        {
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            g->org::scalegraph::graph::Graph::addEdges((__extension__ ({
                                                           
                                                           //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::graph::EdgeList<org::scalegraph::util::SString> alloc57338 =
                                                             
                                                           org::scalegraph::graph::EdgeList<org::scalegraph::util::SString>::_alloc();
                                                           
                                                           //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::util::DistMemoryChunk<org::scalegraph::util::SString> src98137 =
                                                             x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<org::scalegraph::util::SString> >(src);
                                                           
                                                           //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::util::DistMemoryChunk<org::scalegraph::util::SString> dst98138 =
                                                             x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<org::scalegraph::util::SString> >(dst);
                                                           
                                                           //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                           alloc57338->
                                                             FMGL(src) =
                                                             src98137;
                                                           
                                                           //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                           alloc57338->
                                                             FMGL(dst) =
                                                             dst98138;
                                                           alloc57338;
                                                       }))
                                                       );
            
            //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
            break;
        }
        //#line 172 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        default: ;
        {
            
            //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10aux::makeStringLit("Not supported edge type"))));
        }
    }
    
    //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::array::Point*>* id57353;
        for (
             //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
             id57353 = x10aux::nullCheck(x10aux::nullCheck(edgeData)->data())->
                         FMGL(region)->iterator(); x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id57353));
             ) {
            
            //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* id21 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id57353));
            
            //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int i = x10aux::nullCheck(id21)->x10::array::Point::__apply(
                          ((x10_int)0));
            
            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(i, srcIdx)) || (x10aux::struct_equals(i,
                                                                             dstIdx)))
            {
                
                //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                continue;
            }
            
            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::graph::AttributeProxy* proxy =
              org::scalegraph::graph::AttributeProxy::make(
                (__extension__ ({
                    
                    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::array::Array<x10_int>* this94581 =
                      x10aux::nullCheck(edgeData)->typeId();
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i94580 = i;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int ret94582;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret94583; __ret94583: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(this94581)->
                              FMGL(rail)) {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret94582 = (x10aux::nullCheck(this94581)->
                                          FMGL(raw))->__apply(i94580);
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret94583_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(this94581)->
                                            FMGL(region)->contains(
                                            i94580))) {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  i94580);
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret94582 = (x10aux::nullCheck(this94581)->
                                          FMGL(raw))->__apply(((x10_int) ((i94580) - (x10aux::nullCheck(this94581)->
                                                                                        FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret94583_end_;
                        }
                        
                    }goto __ret94583_end_; __ret94583_end_: ;
                    }
                    ret94582;
                    }))
                    );
              
            
            //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* name = (__extension__ ({
                
                //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::array::Array<x10::lang::String*>* this94598 =
                  x10aux::nullCheck(edgeData)->name();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i94597 = i;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10::lang::String* ret94599;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret94600; __ret94600: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this94598)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret94599 = (x10aux::nullCheck(this94598)->
                                      FMGL(raw))->__apply(i94597);
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret94600_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this94598)->
                                        FMGL(region)->contains(
                                        i94597))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              i94597);
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret94599 = (x10aux::nullCheck(this94598)->
                                      FMGL(raw))->__apply(((x10_int) ((i94597) - (x10aux::nullCheck(this94598)->
                                                                                    FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret94600_end_;
                    }
                    
                }goto __ret94600_end_; __ret94600_end_: ;
                }
                ret94599;
                }))
                ;
                
            
            //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::Any* data = (__extension__ ({
                
                //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::array::Array<x10::lang::Any*>* this94602 =
                  x10aux::nullCheck(edgeData)->data();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i94601 = i;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10::lang::Any* ret94603;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret94604; __ret94604: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this94602)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret94603 = (x10aux::nullCheck(this94602)->
                                      FMGL(raw))->__apply(i94601);
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret94604_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this94602)->
                                        FMGL(region)->contains(
                                        i94601))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              i94601);
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret94603 = (x10aux::nullCheck(this94602)->
                                      FMGL(raw))->__apply(((x10_int) ((i94601) - (x10aux::nullCheck(this94602)->
                                                                                    FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret94604_end_;
                    }
                    
                }goto __ret94604_end_; __ret94604_end_: ;
                }
                ret94603;
                }))
                ;
                
            
            //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            proxy->setEdgeAttribute(g, name, data);
            }
            }
            
            //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(vertexData, X10_NULL)))
            {
                
                //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10::lang::Iterator<x10::array::Point*>* id57362;
                    for (
                         //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         id57362 = x10aux::nullCheck(x10aux::nullCheck(vertexData)->data())->
                                     FMGL(region)->iterator();
                         x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id57362));
                         ) {
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10::array::Point* id22 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id57362));
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int i = x10aux::nullCheck(id22)->x10::array::Point::__apply(
                                      ((x10_int)0));
                        
                        //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::graph::AttributeProxy* proxy =
                          org::scalegraph::graph::AttributeProxy::make(
                            (__extension__ ({
                                
                                //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                x10::array::Array<x10_int>* this94606 =
                                  x10aux::nullCheck(vertexData)->typeId();
                                
                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                x10_int i94605 = i;
                                
                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                x10_int ret94607;
                                
                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                goto __ret94608; __ret94608: {
                                {
                                    
                                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (x10aux::nullCheck(this94606)->
                                          FMGL(rail)) {
                                        
                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret94607 = (x10aux::nullCheck(this94606)->
                                                      FMGL(raw))->__apply(i94605);
                                        
                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                        goto __ret94608_end_;
                                    } else {
                                        
                                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                        if (true && !(x10aux::nullCheck(this94606)->
                                                        FMGL(region)->contains(
                                                        i94605)))
                                        {
                                            
                                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                            x10::array::Array<void>::raiseBoundsError(
                                              i94605);
                                        }
                                        
                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret94607 = (x10aux::nullCheck(this94606)->
                                                      FMGL(raw))->__apply(((x10_int) ((i94605) - (x10aux::nullCheck(this94606)->
                                                                                                    FMGL(layout_min0)))));
                                        
                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                        goto __ret94608_end_;
                                    }
                                    
                                }goto __ret94608_end_; __ret94608_end_: ;
                                }
                                ret94607;
                                }))
                                );
                          
                        
                        //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10::lang::String* name = (__extension__ ({
                            
                            //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10::array::Array<x10::lang::String*>* this94610 =
                              x10aux::nullCheck(vertexData)->name();
                            
                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i94609 = i;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10::lang::String* ret94611;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret94612; __ret94612: {
                            {
                                
                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(this94610)->
                                      FMGL(rail)) {
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret94611 = (x10aux::nullCheck(this94610)->
                                                  FMGL(raw))->__apply(i94609);
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret94612_end_;
                                } else {
                                    
                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (true && !(x10aux::nullCheck(this94610)->
                                                    FMGL(region)->contains(
                                                    i94609)))
                                    {
                                        
                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                        x10::array::Array<void>::raiseBoundsError(
                                          i94609);
                                    }
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret94611 = (x10aux::nullCheck(this94610)->
                                                  FMGL(raw))->__apply(((x10_int) ((i94609) - (x10aux::nullCheck(this94610)->
                                                                                                FMGL(layout_min0)))));
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret94612_end_;
                                }
                                
                            }goto __ret94612_end_; __ret94612_end_: ;
                            }
                            ret94611;
                            }))
                            ;
                            
                        
                        //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10::lang::Any* data = (__extension__ ({
                            
                            //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10::array::Array<x10::lang::Any*>* this94614 =
                              x10aux::nullCheck(vertexData)->data();
                            
                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i94613 = i;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10::lang::Any* ret94615;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret94616; __ret94616: {
                            {
                                
                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(this94614)->
                                      FMGL(rail)) {
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret94615 = (x10aux::nullCheck(this94614)->
                                                  FMGL(raw))->__apply(i94613);
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret94616_end_;
                                } else {
                                    
                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (true && !(x10aux::nullCheck(this94614)->
                                                    FMGL(region)->contains(
                                                    i94613)))
                                    {
                                        
                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                        x10::array::Array<void>::raiseBoundsError(
                                          i94613);
                                    }
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret94615 = (x10aux::nullCheck(this94614)->
                                                  FMGL(raw))->__apply(((x10_int) ((i94613) - (x10aux::nullCheck(this94614)->
                                                                                                FMGL(layout_min0)))));
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret94616_end_;
                                }
                                
                            }goto __ret94616_end_; __ret94616_end_: ;
                            }
                            ret94615;
                            }))
                            ;
                            
                        
                        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        proxy->setVertexAttribute(g, name,
                                                  data);
                        }
                        }
                        
                    }
                    
                
                //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return g;
                }
                
            
            //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::make(
              org::scalegraph::graph::EdgeList<x10_long> edges) {
                
                //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::Graph* g =  ((new (memset(x10aux::alloc<org::scalegraph::graph::Graph>(), 0, sizeof(org::scalegraph::graph::Graph))) org::scalegraph::graph::Graph()))
                ;
                
                //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                (g)->::org::scalegraph::graph::Graph::_constructor(
                  x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                  ((x10_int)5), false);
                
                //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                g->org::scalegraph::graph::Graph::addEdges(
                  edges);
                
                //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(x10aux::nullCheck(g->FMGL(team))->placeGroup())->broadcastFlat(
                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__10)))org_scalegraph_graph_Graph__closure__10(edges))));
                
                //#line 197 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return g;
                
            }
            
            //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::make(
              org::scalegraph::graph::EdgeList<x10_double> edges) {
                
                //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::Graph* g =  ((new (memset(x10aux::alloc<org::scalegraph::graph::Graph>(), 0, sizeof(org::scalegraph::graph::Graph))) org::scalegraph::graph::Graph()))
                ;
                
                //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                (g)->::org::scalegraph::graph::Graph::_constructor(
                  x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                  ((x10_int)7), false);
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                g->org::scalegraph::graph::Graph::addEdges(
                  edges);
                
                //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(x10aux::nullCheck(g->FMGL(team))->placeGroup())->broadcastFlat(
                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__11)))org_scalegraph_graph_Graph__closure__11(edges))));
                
                //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return g;
                
            }
            
            //#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::makeWithTranslator(
              org::scalegraph::graph::EdgeList<x10_long> edges) {
                
                //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::Graph* g =  ((new (memset(x10aux::alloc<org::scalegraph::graph::Graph>(), 0, sizeof(org::scalegraph::graph::Graph))) org::scalegraph::graph::Graph()))
                ;
                
                //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                (g)->::org::scalegraph::graph::Graph::_constructor(
                  x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                  ((x10_int)5), true);
                
                //#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                g->org::scalegraph::graph::Graph::addEdges(
                  edges);
                
                //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(x10aux::nullCheck(g->FMGL(team))->placeGroup())->broadcastFlat(
                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__12)))org_scalegraph_graph_Graph__closure__12(edges))));
                
                //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return g;
                
            }
            
            //#line 214 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::makeWithTranslator(
              org::scalegraph::graph::EdgeList<x10_double> edges) {
                
                //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::Graph* g =  ((new (memset(x10aux::alloc<org::scalegraph::graph::Graph>(), 0, sizeof(org::scalegraph::graph::Graph))) org::scalegraph::graph::Graph()))
                ;
                
                //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                (g)->::org::scalegraph::graph::Graph::_constructor(
                  x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                  ((x10_int)7), true);
                
                //#line 216 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                g->org::scalegraph::graph::Graph::addEdges(
                  edges);
                
                //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(x10aux::nullCheck(g->FMGL(team))->placeGroup())->broadcastFlat(
                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__13)))org_scalegraph_graph_Graph__closure__13(edges))));
                
                //#line 218 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return g;
                
            }
            
            //#line 221 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::makeWithTranslator(
              org::scalegraph::graph::EdgeList<org::scalegraph::util::SString> edges) {
                
                //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::Graph* g =  ((new (memset(x10aux::alloc<org::scalegraph::graph::Graph>(), 0, sizeof(org::scalegraph::graph::Graph))) org::scalegraph::graph::Graph()))
                ;
                
                //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                (g)->::org::scalegraph::graph::Graph::_constructor(
                  x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                  ((x10_int)13), true);
                
                //#line 223 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                g->org::scalegraph::graph::Graph::addEdges(
                  edges);
                
                //#line 224 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(x10aux::nullCheck(g->FMGL(team))->placeGroup())->broadcastFlat(
                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__14)))org_scalegraph_graph_Graph__closure__14(edges))));
                
                //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return g;
                
            }
            
            //#line 228 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 251 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            void org::scalegraph::graph::Graph::innerAddEdges(
              x10::util::Team* team_, x10_long maxVertexID,
              x10::lang::GlobalRef<org::scalegraph::graph::Graph* > ref,
              org::scalegraph::util::DistMemoryChunk<x10_long> srcList,
              org::scalegraph::util::DistMemoryChunk<x10_long> dstList,
              org::scalegraph::util::MemoryChunk<x10_long> tlSrcs,
              org::scalegraph::util::MemoryChunk<x10_long> tlDsts) {
                
                //#line 265 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Assert_c
                #ifndef NO_ASSERTIONS
                if (x10aux::x10__assertions_enabled)
                    x10aux::x10__assert((x10aux::struct_equals(srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply()->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                               dstList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply()->org::scalegraph::util::MemoryChunk<x10_long>::size())));
                #endif//NO_ASSERTIONS
                
                //#line 266 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Assert_c
                #ifndef NO_ASSERTIONS
                if (x10aux::x10__assertions_enabled)
                    x10aux::x10__assert((x10aux::struct_equals(tlSrcs->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                               tlDsts->org::scalegraph::util::MemoryChunk<x10_long>::size())));
                #endif//NO_ASSERTIONS
                
                //#line 268 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> srcList_ =
                  srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
                
                //#line 269 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> dstList_ =
                  dstList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
                
                //#line 271 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long globalNumOfEdges = x10aux::nullCheck(team_)->reduce(
                                              (__extension__ ({
                                                  
                                                  //#line 271 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                  x10::array::Array<x10_int>* this94620 =
                                                    x10aux::nullCheck(team_)->role();
                                                  
                                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                                  ;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10_int ret94621;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                  goto __ret94622; __ret94622: {
                                                  {
                                                      
                                                      //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                      if (x10aux::nullCheck(this94620)->
                                                            FMGL(rail))
                                                      {
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret94621 =
                                                            (x10aux::nullCheck(this94620)->
                                                               FMGL(raw))->__apply(((x10_int)0));
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret94622_end_;
                                                      } else
                                                      {
                                                          
                                                          //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                          if (true &&
                                                              !(x10aux::nullCheck(this94620)->
                                                                  FMGL(region)->contains(
                                                                  ((x10_int)0))))
                                                          {
                                                              
                                                              //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                              x10::array::Array<void>::raiseBoundsError(
                                                                ((x10_int)0));
                                                          }
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret94621 =
                                                            (x10aux::nullCheck(this94620)->
                                                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this94620)->
                                                                                                                   FMGL(layout_min0)))));
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret94622_end_;
                                                      }
                                                      
                                                  }goto __ret94622_end_; __ret94622_end_: ;
                                                  }
                                                  ret94621;
                                                  }))
                                                  , ((x10_int)0),
                                                  (__extension__ ({
                                                      tlSrcs->
                                                        FMGL(data)->
                                                        FMGL(size);
                                                  }))
                                                  , ((x10_int)0));
                                            
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                           x10::lang::Place::place((ref)->location))))
                {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::graph::Graph* g = x10::lang::GlobalRef__LocalEval::getLocalOrCopy<org::scalegraph::graph::Graph* >(ref);
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                    x10aux::nullCheck(g)->FMGL(numberOfVertices) =
                      (__extension__ ({
                        
                        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                        x10_long a94623 = ((x10_long) ((maxVertexID) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                        x10_long b94624 = x10aux::nullCheck(g)->
                                            FMGL(numberOfVertices);
                        ((a94623) < (b94624)) ? (b94624) : (a94623);
                    }))
                    ;
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::graph::Graph* x98139 =
                      g;
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long y98140 = globalNumOfEdges;
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                    x10aux::nullCheck(x98139)->FMGL(numberOfEdges) =
                      ((x10_long) ((x10aux::nullCheck(x98139)->
                                      FMGL(numberOfEdges)) + (y98140)));
                }
                
                //#line 278 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals((__extension__ ({
                                               srcList_->
                                                 FMGL(data)->
                                                 FMGL(size);
                                           }))
                                           , ((x10_long)0ll))))
                {
                    
                    //#line 279 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__set(
                      tlSrcs);
                    
                    //#line 280 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    dstList->org::scalegraph::util::DistMemoryChunk<x10_long>::__set(
                      tlDsts);
                } else {
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                               x10::lang::Place::place((ref)->location))))
                    {
                        
                        //#line 284 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                          reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("WARNING: AddEdges if invoked while there are existing edges on the Graph object. This operation is slow.")));
                    }
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::GrowableMemory<x10_long>* allocator =
                       ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_long> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_long>))) org::scalegraph::util::GrowableMemory<x10_long>()))
                    ;
                    
                    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
                    (allocator)->::org::scalegraph::util::GrowableMemory<x10_long>::_constructor(
                      ((x10_long)0ll));
                    
                    //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    allocator->org::scalegraph::util::GrowableMemory<x10_long>::setMemory(
                      srcList_);
                    
                    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> items98141 =
                      tlSrcs;
                    
                    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
                    allocator->org::scalegraph::util::GrowableMemory<x10_long>::insert(
                      allocator->FMGL(size), items98141);
                    
                    //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__set(
                      allocator->org::scalegraph::util::GrowableMemory<x10_long>::raw());
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    allocator->org::scalegraph::util::GrowableMemory<x10_long>::setMemory(
                      dstList_);
                    
                    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> items98142 =
                      tlDsts;
                    
                    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
                    allocator->org::scalegraph::util::GrowableMemory<x10_long>::insert(
                      allocator->FMGL(size), items98142);
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    dstList->org::scalegraph::util::DistMemoryChunk<x10_long>::__set(
                      allocator->org::scalegraph::util::GrowableMemory<x10_long>::raw());
                }
                }
                
            
            //#line 292 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            x10::lang::String* org::scalegraph::graph::Graph::vertexTypeString(
              ) {
                
                //#line 316 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Switch_c
                switch (this->FMGL(vertexType)) {
                    
                    //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                    case ((x10_int)5): ;
                    {
                        
                        //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                        return x10aux::makeStringLit("Long");
                        
                    }
                    //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                    case ((x10_int)7): ;
                    {
                        
                        //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                        return x10aux::makeStringLit("Double");
                        
                    }
                    //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                    case ((x10_int)13): ;
                    {
                        
                        //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                        return x10aux::makeStringLit("String");
                        
                    }
                    //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                    default: ;
                    {
                        
                        //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                        return x10aux::makeStringLit("Not supported type");
                        
                    }
                }
            }
            
            //#line 327 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            void org::scalegraph::graph::Graph::addEdges(
              org::scalegraph::graph::EdgeList<x10_long> edges) {
                
                //#line 328 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(this->FMGL(vertexType),
                                            ((x10_int)5))))
                {
                    
                    //#line 329 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Vertex type does not match. "), (__extension__ ({
                                                                                                             
                                                                                                             //#line 330 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                                                                             org::scalegraph::graph::Graph* this94634 =
                                                                                                               this;
                                                                                                             
                                                                                                             //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                                                                             x10::lang::String* ret94635;
                                                                                                             
                                                                                                             //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Labeled_c
                                                                                                             goto __ret94636; __ret94636: {
                                                                                                             {
                                                                                                                 
                                                                                                                 //#line 316 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Switch_c
                                                                                                                 switch (x10aux::nullCheck(this94634)->
                                                                                                                           FMGL(vertexType))
                                                                                                                 {
                                                                                                                     
                                                                                                                     //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)5): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret94635 =
                                                                                                                           x10aux::makeStringLit("Long");
                                                                                                                         
                                                                                                                         //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret94636_end_;
                                                                                                                     }
                                                                                                                     //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)7): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret94635 =
                                                                                                                           x10aux::makeStringLit("Double");
                                                                                                                         
                                                                                                                         //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret94636_end_;
                                                                                                                     }
                                                                                                                     //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)13): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret94635 =
                                                                                                                           x10aux::makeStringLit("String");
                                                                                                                         
                                                                                                                         //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret94636_end_;
                                                                                                                     }
                                                                                                                     //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     default: ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret94635 =
                                                                                                                           x10aux::makeStringLit("Not supported type");
                                                                                                                         
                                                                                                                         //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret94636_end_;
                                                                                                                     }
                                                                                                                 }
                                                                                                             }goto __ret94636_end_; __ret94636_end_: ;
                                                                                                             }
                                                                                                             ret94635;
                                                                                                             }))
                                                                                                             ), x10aux::makeStringLit(" type is expected but the input is Long")))));
                    }
                    
                
                //#line 331 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                this->genericAddEdges<x10_long >(edges->FMGL(src),
                                                 edges->FMGL(dst));
                }
                
            
            //#line 337 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            void org::scalegraph::graph::Graph::addEdges(
              org::scalegraph::graph::EdgeList<x10_double> edges) {
                
                //#line 338 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(this->FMGL(vertexType),
                                            ((x10_int)7))))
                {
                    
                    //#line 339 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Vertex type does not match. "), (__extension__ ({
                                                                                                             
                                                                                                             //#line 340 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                                                                             org::scalegraph::graph::Graph* this94637 =
                                                                                                               this;
                                                                                                             
                                                                                                             //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                                                                             x10::lang::String* ret94638;
                                                                                                             
                                                                                                             //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Labeled_c
                                                                                                             goto __ret94639; __ret94639: {
                                                                                                             {
                                                                                                                 
                                                                                                                 //#line 316 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Switch_c
                                                                                                                 switch (x10aux::nullCheck(this94637)->
                                                                                                                           FMGL(vertexType))
                                                                                                                 {
                                                                                                                     
                                                                                                                     //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)5): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret94638 =
                                                                                                                           x10aux::makeStringLit("Long");
                                                                                                                         
                                                                                                                         //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret94639_end_;
                                                                                                                     }
                                                                                                                     //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)7): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret94638 =
                                                                                                                           x10aux::makeStringLit("Double");
                                                                                                                         
                                                                                                                         //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret94639_end_;
                                                                                                                     }
                                                                                                                     //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)13): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret94638 =
                                                                                                                           x10aux::makeStringLit("String");
                                                                                                                         
                                                                                                                         //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret94639_end_;
                                                                                                                     }
                                                                                                                     //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     default: ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret94638 =
                                                                                                                           x10aux::makeStringLit("Not supported type");
                                                                                                                         
                                                                                                                         //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret94639_end_;
                                                                                                                     }
                                                                                                                 }
                                                                                                             }goto __ret94639_end_; __ret94639_end_: ;
                                                                                                             }
                                                                                                             ret94638;
                                                                                                             }))
                                                                                                             ), x10aux::makeStringLit(" type is expected but the input is Long")))));
                    }
                    
                
                //#line 341 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                this->genericAddEdges<x10_double >(edges->
                                                     FMGL(src),
                                                   edges->
                                                     FMGL(dst));
                }
                
            
            //#line 347 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            void org::scalegraph::graph::Graph::addEdges(
              org::scalegraph::graph::EdgeList<org::scalegraph::util::SString> edges) {
                
                //#line 348 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(this->FMGL(vertexType),
                                            ((x10_int)13))))
                {
                    
                    //#line 349 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Vertex type does not match. "), (__extension__ ({
                                                                                                             
                                                                                                             //#line 350 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                                                                             org::scalegraph::graph::Graph* this94640 =
                                                                                                               this;
                                                                                                             
                                                                                                             //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                                                                             x10::lang::String* ret94641;
                                                                                                             
                                                                                                             //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Labeled_c
                                                                                                             goto __ret94642; __ret94642: {
                                                                                                             {
                                                                                                                 
                                                                                                                 //#line 316 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Switch_c
                                                                                                                 switch (x10aux::nullCheck(this94640)->
                                                                                                                           FMGL(vertexType))
                                                                                                                 {
                                                                                                                     
                                                                                                                     //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)5): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret94641 =
                                                                                                                           x10aux::makeStringLit("Long");
                                                                                                                         
                                                                                                                         //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret94642_end_;
                                                                                                                     }
                                                                                                                     //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)7): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret94641 =
                                                                                                                           x10aux::makeStringLit("Double");
                                                                                                                         
                                                                                                                         //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret94642_end_;
                                                                                                                     }
                                                                                                                     //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)13): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret94641 =
                                                                                                                           x10aux::makeStringLit("String");
                                                                                                                         
                                                                                                                         //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret94642_end_;
                                                                                                                     }
                                                                                                                     //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     default: ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret94641 =
                                                                                                                           x10aux::makeStringLit("Not supported type");
                                                                                                                         
                                                                                                                         //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret94642_end_;
                                                                                                                     }
                                                                                                                 }
                                                                                                             }goto __ret94642_end_; __ret94642_end_: ;
                                                                                                             }
                                                                                                             ret94641;
                                                                                                             }))
                                                                                                             ), x10aux::makeStringLit(" type is expected but the input is Long")))));
                    }
                    
                
                //#line 351 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                this->genericAddEdges<org::scalegraph::util::SString >(
                  edges->FMGL(src), edges->FMGL(dst));
                }
                
            
            //#line 359 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 363 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 400 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 441 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 458 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 468 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 472 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 476 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 494 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            x10_long org::scalegraph::graph::Graph::getLocalNumberOfVertices(
              org::scalegraph::graph::Graph__VertexInfo vi,
              x10_int role) {
                
                //#line 495 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::VertexTranslatorBase* vt_ =
                  vi->FMGL(vertexTranslator)->x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*>::__apply();
                
                //#line 496 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(vt_)->isTranslator())
                {
                    
                    //#line 497 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                    return x10aux::nullCheck(vt_)->sizeOfDictionary();
                    
                } else {
                    
                    //#line 500 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long g = vi->FMGL(numberOfVertices);
                    
                    //#line 501 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int d = vi->FMGL(numberOfPlaces);
                    
                    //#line 502 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                    return ((x10_long) ((((x10_long) ((g) / x10aux::zeroCheck(((x10_long) (d)))))) + (((((x10_long) ((g) % x10aux::zeroCheck(((x10_long) (d)))))) > (((x10_long) (role))))
                      ? (((x10_long)1ll)) : (((x10_long)0ll)))));
                    
                }
                
            }
            
            //#line 512 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 539 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 552 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 558 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 569 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 622 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            org::scalegraph::blas::DistSparseMatrix<x10_long>
              org::scalegraph::graph::Graph::createDistEdgeIndexMatrix(
              org::scalegraph::util::Dist2D dist2d, x10_boolean directed,
              x10_boolean transpose) {
                
                //#line 623 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::util::Team* team_ = this->FMGL(team);
                
                //#line 624 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::DistMemoryChunk<x10_long> srcList_ =
                  this->FMGL(srcList);
                
                //#line 625 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::DistMemoryChunk<x10_long> dstList_ =
                  this->FMGL(dstList);
                
                //#line 626 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::Graph__VertexInfo vi =
                   org::scalegraph::graph::Graph__VertexInfo::_alloc();
                
                //#line 486 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> vertexTranslator98792 =
                  this->FMGL(vertexTranslator);
                
                //#line 486 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int vertexType98793 = this->FMGL(vertexType);
                
                //#line 486 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long numberOfVertices98794 = this->FMGL(numberOfVertices);
                
                //#line 486 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int numberOfPlaces98795 = x10aux::nullCheck(this->
                                                                  FMGL(team))->size();
                
                //#line 487 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                vi->FMGL(vertexTranslator) = vertexTranslator98792;
                
                //#line 488 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                vi->FMGL(vertexType) = vertexType98793;
                
                //#line 489 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                vi->FMGL(numberOfVertices) = numberOfVertices98794;
                
                //#line 490 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                vi->FMGL(numberOfPlaces) = numberOfPlaces98795;
                
                //#line 628 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return (__extension__ ({
                    
                    //#line 628 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::blas::DistSparseMatrix<x10_long> alloc57342 =
                       org::scalegraph::blas::DistSparseMatrix<x10_long>::_alloc();
                    
                    //#line 628 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                    (alloc57342)->::org::scalegraph::blas::DistSparseMatrix<x10_long>::_constructor(
                      dist2d, reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > > >(sizeof(org_scalegraph_graph_Graph__closure__40)))org_scalegraph_graph_Graph__closure__40(team_, srcList_, dstList_, dist2d, vi, transpose, directed))));
                    alloc57342;
                }))
                ;
                
            }
            
            //#line 721 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 855 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* >
              org::scalegraph::graph::Graph::createSimpleEdgeIndexMatrix(
              x10::lang::Place place, x10_boolean directed,
              x10_boolean transpose) {
                
                //#line 857 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::util::Team* team_ = this->FMGL(team);
                
                //#line 858 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::DistMemoryChunk<x10_long> srcList_ =
                  this->FMGL(srcList);
                
                //#line 859 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::DistMemoryChunk<x10_long> dstList_ =
                  this->FMGL(dstList);
                
                //#line 860 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int root = (__extension__ ({
                    
                    //#line 860 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::array::Array<x10_int>* this97354 =
                      x10aux::nullCheck(team_)->role(place);
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int ret97355;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret97356; __ret97356: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(this97354)->
                              FMGL(rail)) {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97355 = (x10aux::nullCheck(this97354)->
                                          FMGL(raw))->__apply(((x10_int)0));
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret97356_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(this97354)->
                                            FMGL(region)->contains(
                                            ((x10_int)0))))
                            {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  ((x10_int)0));
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97355 = (x10aux::nullCheck(this97354)->
                                          FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this97354)->
                                                                                              FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret97356_end_;
                        }
                        
                    }goto __ret97356_end_; __ret97356_end_: ;
                    }
                    ret97355;
                    }))
                    ;
                    
                
                //#line 862 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > ret =
                  x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* >::_make((__extension__ ({
                                                                                                                                                               
                                                                                                                                                               //#line 863 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                                                                                                                               x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* alloc57346 =
                                                                                                                                                                 
                                                                                                                                                               ((new (memset(x10aux::alloc<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > > >(), 0, sizeof(x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >))) x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >()))
                                                                                                                                                               ;
                                                                                                                                                               
                                                                                                                                                               //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                                                                                                                                                               x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > x98994 =
                                                                                                                                                                 x10aux::zeroValue<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >();
                                                                                                                                                               
                                                                                                                                                               //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                                                                                                               alloc57346->
                                                                                                                                                                 FMGL(value) =
                                                                                                                                                                 x98994;
                                                                                                                                                               alloc57346;
                                                                                                                                                           }))
                                                                                                                                                           );
                
                //#line 864 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(x10aux::nullCheck(team_)->placeGroup())->broadcastFlat(
                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__46)))org_scalegraph_graph_Graph__closure__46(srcList_, dstList_, directed, team_, place, root, this, transpose, ret))));
                
                //#line 940 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return (__extension__ ({
                    
                    //#line 940 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* this97535 =
                      (ret)->__apply();
                    x10aux::nullCheck(this97535)->FMGL(value);
                }))
                ;
                }
                
            
            //#line 948 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 1001 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            
            //#line 1012 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            void org::scalegraph::graph::Graph::del() {
                
                //#line 1013 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::DistMemoryChunk<x10_long> srcList_ =
                  this->FMGL(srcList);
                
                //#line 1014 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::DistMemoryChunk<x10_long> dstList_ =
                  this->FMGL(dstList);
                
                //#line 1015 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::util::ArrayList<x10::lang::Any*>* attlist =
                   ((new (memset(x10aux::alloc<x10::util::ArrayList<x10::lang::Any*> >(), 0, sizeof(x10::util::ArrayList<x10::lang::Any*>))) x10::util::ArrayList<x10::lang::Any*>()))
                ;
                
                //#line 1015 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                (attlist)->::x10::util::ArrayList<x10::lang::Any*>::_constructor();
                
                //#line 1017 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10::lang::Iterator<x10::lang::String*>* key57598;
                    for (
                         //#line 1017 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         key57598 = x10::util::Set<x10::lang::String*>::iterator(x10aux::nullCheck(this->
                                                                                                     FMGL(vertexAttributes)->keySet()));
                         x10::lang::Iterator<x10::lang::String*>::hasNext(x10aux::nullCheck(key57598));
                         ) {
                        
                        //#line 1017 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10::lang::String* key = x10::lang::Iterator<x10::lang::String*>::next(x10aux::nullCheck(key57598));
                        
                        //#line 1018 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        attlist->add(this->FMGL(vertexAttributes)->getOrThrow(
                                       key));
                    }
                }
                
                //#line 1019 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10::lang::Iterator<x10::lang::String*>* key57600;
                    for (
                         //#line 1019 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         key57600 = x10::util::Set<x10::lang::String*>::iterator(x10aux::nullCheck(this->
                                                                                                     FMGL(edgeAttributes)->keySet()));
                         x10::lang::Iterator<x10::lang::String*>::hasNext(x10aux::nullCheck(key57600));
                         ) {
                        
                        //#line 1019 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10::lang::String* key = x10::lang::Iterator<x10::lang::String*>::next(x10aux::nullCheck(key57600));
                        
                        //#line 1020 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        attlist->add(this->FMGL(edgeAttributes)->getOrThrow(
                                       key));
                    }
                }
                
                //#line 1022 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(x10aux::nullCheck(this->
                                                      FMGL(team))->placeGroup())->broadcastFlat(
                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__58)))org_scalegraph_graph_Graph__closure__58(srcList_, dstList_, attlist))));
                
                //#line 1055 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(numberOfVertices) = ((x10_long)0ll);
                
                //#line 1056 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(numberOfEdges) = ((x10_long)0ll);
            }
            
            //#line 1059 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            x10::util::Set<x10::lang::String*>* org::scalegraph::graph::Graph::vertexAttributeKeys(
              ) {
                
                //#line 1059 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return this->FMGL(vertexAttributes)->keySet();
                
            }
            
            //#line 1060 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            x10::util::Set<x10::lang::String*>* org::scalegraph::graph::Graph::edgeAttributeKeys(
              ) {
                
                //#line 1060 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return this->FMGL(edgeAttributes)->keySet();
                
            }
            
            //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::org__scalegraph__graph__Graph____this__org__scalegraph__graph__Graph(
              ) {
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return this;
                
            }
            
            //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
            void org::scalegraph::graph::Graph::__fieldInitializers55865(
              ) {
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(graphAttributes) = (__extension__ ({
                    
                    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::util::HashMap<x10::lang::String*, x10::lang::Any*>* alloc57349 =
                       ((new (memset(x10aux::alloc<x10::util::HashMap<x10::lang::String*, x10::lang::Any*> >(), 0, sizeof(x10::util::HashMap<x10::lang::String*, x10::lang::Any*>))) x10::util::HashMap<x10::lang::String*, x10::lang::Any*>()))
                    ;
                    
                    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                    (alloc57349)->::x10::util::HashMap<x10::lang::String*, x10::lang::Any*>::_constructor();
                    alloc57349;
                }))
                ;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(vertexAttributes) = (__extension__ ({
                    
                    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::util::HashMap<x10::lang::String*, x10::lang::Any*>* alloc57350 =
                       ((new (memset(x10aux::alloc<x10::util::HashMap<x10::lang::String*, x10::lang::Any*> >(), 0, sizeof(x10::util::HashMap<x10::lang::String*, x10::lang::Any*>))) x10::util::HashMap<x10::lang::String*, x10::lang::Any*>()))
                    ;
                    
                    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                    (alloc57350)->::x10::util::HashMap<x10::lang::String*, x10::lang::Any*>::_constructor();
                    alloc57350;
                }))
                ;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(edgeAttributes) = (__extension__ ({
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::util::HashMap<x10::lang::String*, x10::lang::Any*>* alloc57351 =
                       ((new (memset(x10aux::alloc<x10::util::HashMap<x10::lang::String*, x10::lang::Any*> >(), 0, sizeof(x10::util::HashMap<x10::lang::String*, x10::lang::Any*>))) x10::util::HashMap<x10::lang::String*, x10::lang::Any*>()))
                    ;
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                    (alloc57351)->::x10::util::HashMap<x10::lang::String*, x10::lang::Any*>::_constructor();
                    alloc57351;
                }))
                ;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(numberOfVertices) = ((x10_long)0ll);
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(numberOfEdges) = ((x10_long)0ll);
            }
            const x10aux::serialization_id_t org::scalegraph::graph::Graph::_serialization_id = 
                x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::graph::Graph::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);
            
            void org::scalegraph::graph::Graph::_serialize_body(x10aux::serialization_buffer& buf) {
                buf.write(this->FMGL(team));
                buf.write(this->FMGL(graphAttributes));
                buf.write(this->FMGL(vertexAttributes));
                buf.write(this->FMGL(edgeAttributes));
                buf.write(this->FMGL(vertexTranslator));
                buf.write(this->FMGL(srcList));
                buf.write(this->FMGL(dstList));
                buf.write(this->FMGL(numberOfVertices));
                buf.write(this->FMGL(numberOfEdges));
                buf.write(this->FMGL(vertexType));
                
            }
            
            x10::lang::Reference* org::scalegraph::graph::Graph::_deserializer(x10aux::deserialization_buffer& buf) {
                org::scalegraph::graph::Graph* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::Graph>(), 0, sizeof(org::scalegraph::graph::Graph))) org::scalegraph::graph::Graph();
                buf.record_reference(this_);
                this_->_deserialize_body(buf);
                return this_;
            }
            
            void org::scalegraph::graph::Graph::_deserialize_body(x10aux::deserialization_buffer& buf) {
                FMGL(team) = buf.read<x10::util::Team*>();
                FMGL(graphAttributes) = buf.read<x10::util::HashMap<x10::lang::String*, x10::lang::Any*>*>();
                FMGL(vertexAttributes) = buf.read<x10::util::HashMap<x10::lang::String*, x10::lang::Any*>*>();
                FMGL(edgeAttributes) = buf.read<x10::util::HashMap<x10::lang::String*, x10::lang::Any*>*>();
                FMGL(vertexTranslator) = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >();
                FMGL(srcList) = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
                FMGL(dstList) = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
                FMGL(numberOfVertices) = buf.read<x10_long>();
                FMGL(numberOfEdges) = buf.read<x10_long>();
                FMGL(vertexType) = buf.read<x10_int>();
            }
            
            x10aux::RuntimeType org::scalegraph::graph::Graph::rtt;
            void org::scalegraph::graph::Graph::_initRTT() {
                if (rtt.initStageOne(&rtt)) return;
                const x10aux::RuntimeType** parents = NULL; 
                rtt.initStageTwo("org.scalegraph.graph.Graph",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
            }
            
            x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_Graph__closure__4>org_scalegraph_graph_Graph__closure__4::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__4::__apply, &org_scalegraph_graph_Graph__closure__4::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__4::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_Graph__closure__4::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__4::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__4::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_Graph__closure__5>org_scalegraph_graph_Graph__closure__5::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__5::__apply, &org_scalegraph_graph_Graph__closure__5::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__5::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_Graph__closure__5::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__5::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__5::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__NoTraslator*>::itable<org_scalegraph_graph_Graph__closure__7>org_scalegraph_graph_Graph__closure__7::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__7::__apply, &org_scalegraph_graph_Graph__closure__7::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__7::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__NoTraslator*> >, &org_scalegraph_graph_Graph__closure__7::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__7::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__7::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>::itable<org_scalegraph_graph_Graph__closure__6>org_scalegraph_graph_Graph__closure__6::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__6::__apply, &org_scalegraph_graph_Graph__closure__6::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__6::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >, &org_scalegraph_graph_Graph__closure__6::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__6::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__6::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double>*>::itable<org_scalegraph_graph_Graph__closure__9>org_scalegraph_graph_Graph__closure__9::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__9::__apply, &org_scalegraph_graph_Graph__closure__9::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__9::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double>*> >, &org_scalegraph_graph_Graph__closure__9::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__9::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__9::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>::itable<org_scalegraph_graph_Graph__closure__8>org_scalegraph_graph_Graph__closure__8::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__8::__apply, &org_scalegraph_graph_Graph__closure__8::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__8::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >, &org_scalegraph_graph_Graph__closure__8::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__8::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__8::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__10>org_scalegraph_graph_Graph__closure__10::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__10::__apply, &org_scalegraph_graph_Graph__closure__10::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__10::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__10::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__10::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__10::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__11>org_scalegraph_graph_Graph__closure__11::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__11::__apply, &org_scalegraph_graph_Graph__closure__11::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__11::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__11::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__11::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__11::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__12>org_scalegraph_graph_Graph__closure__12::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__12::__apply, &org_scalegraph_graph_Graph__closure__12::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__12::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__12::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__12::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__12::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__13>org_scalegraph_graph_Graph__closure__13::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__13::__apply, &org_scalegraph_graph_Graph__closure__13::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__13::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__13::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__13::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__13::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__14>org_scalegraph_graph_Graph__closure__14::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__14::__apply, &org_scalegraph_graph_Graph__closure__14::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__14::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__14::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__14::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__14::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__41>org_scalegraph_graph_Graph__closure__41::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__41::__apply, &org_scalegraph_graph_Graph__closure__41::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__41::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__41::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__41::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__41::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__42>org_scalegraph_graph_Graph__closure__42::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__42::__apply, &org_scalegraph_graph_Graph__closure__42::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__42::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__42::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__42::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__42::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > >::itable<org_scalegraph_graph_Graph__closure__40>org_scalegraph_graph_Graph__closure__40::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__40::__apply, &org_scalegraph_graph_Graph__closure__40::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__40::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > > >, &org_scalegraph_graph_Graph__closure__40::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__40::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__40::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__47>org_scalegraph_graph_Graph__closure__47::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__47::__apply, &org_scalegraph_graph_Graph__closure__47::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__47::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__47::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__47::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__47::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__48>org_scalegraph_graph_Graph__closure__48::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__48::__apply, &org_scalegraph_graph_Graph__closure__48::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__48::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__48::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__48::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__48::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__46>org_scalegraph_graph_Graph__closure__46::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__46::__apply, &org_scalegraph_graph_Graph__closure__46::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__46::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__46::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__46::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__46::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__58>org_scalegraph_graph_Graph__closure__58::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__58::__apply, &org_scalegraph_graph_Graph__closure__58::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__58::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__58::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__58::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__58::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of Graph */
/*************************************************/
/*************************************************/
/* START of Graph$VertexType */
#include <org/scalegraph/graph/Graph__VertexType.h>

#include <x10/lang/Int.h>

//#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::graph::Graph__VertexType::FMGL(Long);
void org::scalegraph::graph::Graph__VertexType::FMGL(Long__do_init)() {
    FMGL(Long__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::graph::Graph__VertexType.Long");
    x10_int __var316__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)5));
    FMGL(Long) = __var316__;
    FMGL(Long__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::graph::Graph__VertexType::FMGL(Long__init)() {
    x10aux::StaticInitController::initField(&FMGL(Long__status), &FMGL(Long__do_init), &FMGL(Long__exception), "org::scalegraph::graph::Graph__VertexType.Long");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::graph::Graph__VertexType::FMGL(Long__status);
x10::lang::CheckedThrowable* org::scalegraph::graph::Graph__VertexType::FMGL(Long__exception);

//#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::graph::Graph__VertexType::FMGL(Double);
void org::scalegraph::graph::Graph__VertexType::FMGL(Double__do_init)() {
    FMGL(Double__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::graph::Graph__VertexType.Double");
    x10_int __var317__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)7));
    FMGL(Double) = __var317__;
    FMGL(Double__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::graph::Graph__VertexType::FMGL(Double__init)() {
    x10aux::StaticInitController::initField(&FMGL(Double__status), &FMGL(Double__do_init), &FMGL(Double__exception), "org::scalegraph::graph::Graph__VertexType.Double");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::graph::Graph__VertexType::FMGL(Double__status);
x10::lang::CheckedThrowable* org::scalegraph::graph::Graph__VertexType::FMGL(Double__exception);

//#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::graph::Graph__VertexType::FMGL(String);
void org::scalegraph::graph::Graph__VertexType::FMGL(String__do_init)() {
    FMGL(String__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::graph::Graph__VertexType.String");
    x10_int __var318__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)13));
    FMGL(String) = __var318__;
    FMGL(String__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::graph::Graph__VertexType::FMGL(String__init)() {
    x10aux::StaticInitController::initField(&FMGL(String__status), &FMGL(String__do_init), &FMGL(String__exception), "org::scalegraph::graph::Graph__VertexType.String");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::graph::Graph__VertexType::FMGL(String__status);
x10::lang::CheckedThrowable* org::scalegraph::graph::Graph__VertexType::FMGL(String__exception);

//#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph__VertexType* org::scalegraph::graph::Graph__VertexType::org__scalegraph__graph__Graph__VertexType____this__org__scalegraph__graph__Graph__VertexType(
  ) {
    
    //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::Graph__VertexType::_constructor() {
    
    //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::graph::Graph__VertexType* org::scalegraph::graph::Graph__VertexType::_make(
  ) {
    org::scalegraph::graph::Graph__VertexType* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::Graph__VertexType>(), 0, sizeof(org::scalegraph::graph::Graph__VertexType))) org::scalegraph::graph::Graph__VertexType();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::graph::Graph__VertexType::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::graph::Graph__VertexType::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::graph::Graph__VertexType::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::graph::Graph__VertexType::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::Graph__VertexType* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::Graph__VertexType>(), 0, sizeof(org::scalegraph::graph::Graph__VertexType))) org::scalegraph::graph::Graph__VertexType();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::graph::Graph__VertexType::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::graph::Graph__VertexType::rtt;
void org::scalegraph::graph::Graph__VertexType::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.graph.Graph.VertexType",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Graph$VertexType */
/*************************************************/
/*************************************************/
/* START of Graph$VertexInfo */
#include <org/scalegraph/graph/Graph__VertexInfo.h>

#include <x10/lang/Any.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/VertexTranslatorBase.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { 
class Graph__VertexInfo_ibox0 : public x10::lang::IBox<org::scalegraph::graph::Graph__VertexInfo> {
public:
    static x10::lang::Any::itable<Graph__VertexInfo_ibox0 > itable;
    x10_boolean equals(x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10::lang::String* toString() {
        return this->value->toString();
    }
    x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
x10::lang::Any::itable<Graph__VertexInfo_ibox0 >  Graph__VertexInfo_ibox0::itable(&Graph__VertexInfo_ibox0::equals, &Graph__VertexInfo_ibox0::hashCode, &Graph__VertexInfo_ibox0::toString, &Graph__VertexInfo_ibox0::typeName);
} } } 
x10::lang::Any::itable<org::scalegraph::graph::Graph__VertexInfo >  org::scalegraph::graph::Graph__VertexInfo::_itable_0(&org::scalegraph::graph::Graph__VertexInfo::equals, &org::scalegraph::graph::Graph__VertexInfo::hashCode, &org::scalegraph::graph::Graph__VertexInfo::toString, &org::scalegraph::graph::Graph__VertexInfo::typeName);
x10aux::itable_entry org::scalegraph::graph::Graph__VertexInfo::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::Graph__VertexInfo::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::Graph__VertexInfo>())};
x10aux::itable_entry org::scalegraph::graph::Graph__VertexInfo::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::Graph__VertexInfo_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::Graph__VertexInfo>())};

//#line 481 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 482 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 483 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 484 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 486 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::Graph__VertexInfo::_constructor(x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> vertexTranslator,
                                                             x10_int vertexType,
                                                             x10_long numberOfVertices,
                                                             x10_int numberOfPlaces) {
    
    //#line 486 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.AssignPropertyCall_c
    
    //#line 487 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(vertexTranslator) = vertexTranslator;
    
    //#line 488 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(vertexType) = vertexType;
    
    //#line 489 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(numberOfVertices) = numberOfVertices;
    
    //#line 490 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(numberOfPlaces) = numberOfPlaces;
}
org::scalegraph::graph::Graph__VertexInfo org::scalegraph::graph::Graph__VertexInfo::_make(
  x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> vertexTranslator,
  x10_int vertexType, x10_long numberOfVertices, x10_int numberOfPlaces)
{
    org::scalegraph::graph::Graph__VertexInfo this_; 
    this_->_constructor(vertexTranslator, vertexType, numberOfVertices,
    numberOfPlaces);
    return this_;
}



//#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::Graph__VertexInfo::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::Graph__VertexInfo::toString(
  ) {
    
    //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.Graph.VertexInfo:"), x10aux::makeStringLit(" vertexTranslator=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                   FMGL(vertexTranslator)), x10aux::makeStringLit(" vertexType=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                      FMGL(vertexType)), x10aux::makeStringLit(" numberOfPlaces=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       FMGL(numberOfPlaces)), x10aux::makeStringLit(" numberOfVertices=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              FMGL(numberOfVertices));
    
}

//#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::Graph__VertexInfo::hashCode(
  ) {
    
    //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(vertexTranslator)->x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*>::hashCode())));
    
    //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(vertexType)))));
    
    //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(numberOfPlaces)))));
    
    //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(numberOfVertices)))));
    
    //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::Graph__VertexInfo::equals(
  x10::lang::Any* other) {
    
    //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::Graph__VertexInfo>(other)))
    {
        
        //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::Graph__VertexInfo::equals(
             x10aux::class_cast<org::scalegraph::graph::Graph__VertexInfo>(other));
    
}

//#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::Graph__VertexInfo::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::Graph__VertexInfo>(other)))
    {
        
        //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::Graph__VertexInfo::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::Graph__VertexInfo>(other));
    
}

//#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 480 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::Graph__VertexInfo::_serialize(org::scalegraph::graph::Graph__VertexInfo this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(vertexTranslator));
    buf.write(this_->FMGL(vertexType));
    buf.write(this_->FMGL(numberOfPlaces));
    buf.write(this_->FMGL(numberOfVertices));
    
}

void org::scalegraph::graph::Graph__VertexInfo::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(vertexTranslator) = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >();
    FMGL(vertexType) = buf.read<x10_int>();
    FMGL(numberOfPlaces) = buf.read<x10_int>();
    FMGL(numberOfVertices) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::Graph__VertexInfo::rtt;
void org::scalegraph::graph::Graph__VertexInfo::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.Graph.VertexInfo",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of Graph$VertexInfo */
/*************************************************/
