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
                org::scalegraph::util::MemoryChunk<x10_long> alloc91902 =
                   org::scalegraph::util::MemoryChunk<x10_long>::_alloc();
                
                //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
                alloc91902->FMGL(data) = org::scalegraph::util::MCData_Impl<x10_long >::_make(((x10_long)0ll), ((x10_int)0), false);
                alloc91902;
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
                org::scalegraph::util::MemoryChunk<x10_long> alloc91904 =
                   org::scalegraph::util::MemoryChunk<x10_long>::_alloc();
                
                //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
                alloc91904->FMGL(data) = org::scalegraph::util::MCData_Impl<x10_long >::_make(((x10_long)0ll), ((x10_int)0), false);
                alloc91904;
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
            org::scalegraph::graph::VertexTranslator__NoTraslator* alloc54157 =
               ((new (memset(x10aux::alloc<org::scalegraph::graph::VertexTranslator__NoTraslator>(), 0, sizeof(org::scalegraph::graph::VertexTranslator__NoTraslator))) org::scalegraph::graph::VertexTranslator__NoTraslator()))
            ;
            
            //#line 303 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::util::Team* team__96525 = team_;
            
            //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::util::Team* team__96524 = team__96525;
            
            //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
            (alloc54157)->::org::scalegraph::graph::VertexTranslatorBase::_constructor(
              team__96524);
            alloc54157;
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
            org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double>* alloc54158 =
               ((new (memset(x10aux::alloc<org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double> >(), 0, sizeof(org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double>))) org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double>()))
            ;
            
            //#line 269 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::util::Team* team__96527 = team_;
            
            //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10LocalDecl_c
            x10::util::Team* team__96526 = team__96527;
            
            //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/VertexTranslator.x10": x10.ast.X10ConstructorCall_c
            (alloc54158)->::org::scalegraph::graph::VertexTranslatorBase::_constructor(
              team__96526);
            alloc54158;
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
            x10_long tid97066 = ((x10_long) (idx97068));
            
            //#line 644 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r97067 = i_range97072;
            
            //#line 645 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> counts97065 = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                                        ((x10_int) (tid97066)));
            
            //#line 646 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (directed) {
                
                //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i54204domain97027 = r97067;
                
                //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i54204min97028 = i54204domain97027->FMGL(min);
                
                //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i54204max97029 = i54204domain97027->FMGL(max);
                
                //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i97030;
                    for (
                         //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i97030 = i54204min97028; ((i97030) <= (i54204max97029));
                         
                         //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i97030 = ((x10_long) ((i97030) + (((x10_long)1ll)))))
                    {
                        
                        //#line 647 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i97031 = i97030;
                        
                        //#line 648 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v97021 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97022 = i97031;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret97023;
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
                                if (((index97022) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97022) >= (srcList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97022), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97023 = (srcList__->FMGL(data))[index97022];
                            ret97023;
                        }))
                        ;
                        
                        //#line 649 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v97024 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97025 = i97031;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret97026;
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
                                if (((index97025) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97025) >= (dstList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97025), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97026 = (dstList__->FMGL(data))[index97025];
                            ret97026;
                        }))
                        ;
                        
                        //#line 650 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x97016 =
                          counts97065;
                        
                        //#line 650 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int y97017 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97018 = ((x10_long) ((((x10_long) ((v97024) & (cmask)))) | (((x10_long) ((v97021) & (rmask))))));
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97019;
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
                                if (((index97018) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97018) >= (roleMap->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97018), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97019 = (roleMap->FMGL(data))[index97018];
                            ret97019;
                        }))
                        ;
                        
                        //#line 650 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int ret97020;
                        
                        //#line 650 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int r97013 = ((x10_int) (((__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index97014 = y97017;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97015;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x97016->FMGL(data)).isValid()))
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
                                if (((index97014) < (((x10_int)0))) ||
                                    ((((x10_long) (index97014))) >= (x97016->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97014), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97015 = (x97016->FMGL(data))[index97014];
                            ret97015;
                        }))
                        ) + (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index97010 = y97017;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int value97011 = r97013;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret97012;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x97016->FMGL(data)).isValid()))
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
                            if (((index97010) < (((x10_int)0))) ||
                                ((((x10_long) (index97010))) >= (x97016->
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
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97010), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (x97016->FMGL(data)).set(index97010, value97011);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97012 = value97011;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97012;
                        
                        //#line 650 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97020 = r97013;
                        
                        //#line 650 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Local_c
                        ret97020;
                    }
                }
                
            } else {
                
                //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i54223domain97060 = r97067;
                
                //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i54223min97061 = i54223domain97060->
                                            FMGL(min);
                
                //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i54223max97062 = i54223domain97060->
                                            FMGL(max);
                
                //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i97063;
                    for (
                         //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i97063 = i54223min97061; ((i97063) <= (i54223max97062));
                         
                         //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i97063 = ((x10_long) ((i97063) + (((x10_long)1ll)))))
                    {
                        
                        //#line 654 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i97064 = i97063;
                        
                        //#line 655 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v97054 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97055 = i97064;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret97056;
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
                                if (((index97055) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97055) >= (srcList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97055), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97056 = (srcList__->FMGL(data))[index97055];
                            ret97056;
                        }))
                        ;
                        
                        //#line 656 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v97057 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97058 = i97064;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret97059;
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
                                if (((index97058) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97058) >= (dstList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97058), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97059 = (dstList__->FMGL(data))[index97058];
                            ret97059;
                        }))
                        ;
                        
                        //#line 657 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x97044 =
                          counts97065;
                        
                        //#line 657 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int y97045 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97046 = ((x10_long) ((((x10_long) ((v97057) & (cmask)))) | (((x10_long) ((v97054) & (rmask))))));
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97047;
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
                                if (((index97046) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97046) >= (roleMap->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97046), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97047 = (roleMap->FMGL(data))[index97046];
                            ret97047;
                        }))
                        ;
                        
                        //#line 657 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int ret97048;
                        
                        //#line 657 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int r97035 = ((x10_int) (((__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index97036 = y97045;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97037;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x97044->FMGL(data)).isValid()))
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
                                if (((index97036) < (((x10_int)0))) ||
                                    ((((x10_long) (index97036))) >= (x97044->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97036), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97037 = (x97044->FMGL(data))[index97036];
                            ret97037;
                        }))
                        ) + (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index97032 = y97045;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int value97033 = r97035;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret97034;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x97044->FMGL(data)).isValid()))
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
                            if (((index97032) < (((x10_int)0))) ||
                                ((((x10_long) (index97032))) >= (x97044->
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
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97032), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (x97044->FMGL(data)).set(index97032, value97033);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97034 = value97033;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97034;
                        
                        //#line 657 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97048 = r97035;
                        
                        //#line 657 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Local_c
                        ret97048;
                        
                        //#line 658 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x97049 =
                          counts97065;
                        
                        //#line 658 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int y97050 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97051 = ((x10_long) ((((x10_long) ((v97054) & (cmask)))) | (((x10_long) ((v97057) & (rmask))))));
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97052;
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
                                if (((index97051) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97051) >= (roleMap->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97051), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97052 = (roleMap->FMGL(data))[index97051];
                            ret97052;
                        }))
                        ;
                        
                        //#line 658 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int ret97053;
                        
                        //#line 658 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int r97041 = ((x10_int) (((__extension__ ({
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index97042 = y97050;
                            
                            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97043;
                            {
                                
                                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x97049->FMGL(data)).isValid()))
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
                                if (((index97042) < (((x10_int)0))) ||
                                    ((((x10_long) (index97042))) >= (x97049->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97042), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97043 = (x97049->FMGL(data))[index97042];
                            ret97043;
                        }))
                        ) + (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index97038 = y97050;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int value97039 = r97041;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret97040;
                        {
                            
                            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((x97049->FMGL(data)).isValid()))
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
                            if (((index97038) < (((x10_int)0))) ||
                                ((((x10_long) (index97038))) >= (x97049->
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
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97038), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (x97049->FMGL(data)).set(index97038, value97039);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97040 = value97039;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97040;
                        
                        //#line 658 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97053 = r97041;
                        
                        //#line 658 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Local_c
                        ret97053;
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
    x10_int idx97068;
    x10::lang::LongRange i_range97072;
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
        buf.write(this->idx97068);
        buf.write(this->i_range97072);
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
        x10_int that_idx97068 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range97072 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_boolean that_directed = buf.read<x10_boolean>();
        org::scalegraph::util::MemoryChunk<x10_long> that_srcList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_dstList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_long that_cmask = buf.read<x10_long>();
        x10_long that_rmask = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<x10_int> that_roleMap = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_graph_Graph__closure__41* this_ = new (storage) org_scalegraph_graph_Graph__closure__41(that_idx97068, that_i_range97072, that_scatterGather, that_directed, that_srcList__, that_dstList__, that_cmask, that_rmask, that_roleMap);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__41(x10_int idx97068, x10::lang::LongRange i_range97072, org::scalegraph::util::DistScatterGather scatterGather, x10_boolean directed, org::scalegraph::util::MemoryChunk<x10_long> srcList__, org::scalegraph::util::MemoryChunk<x10_long> dstList__, x10_long cmask, x10_long rmask, org::scalegraph::util::MemoryChunk<x10_int> roleMap) : idx97068(idx97068), i_range97072(i_range97072), scatterGather(scatterGather), directed(directed), srcList__(srcList__), dstList__(dstList__), cmask(cmask), rmask(rmask), roleMap(roleMap) { }
    
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
            x10_long tid97168 = ((x10_long) (idx97170));
            
            //#line 670 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r97169 = i_range97174;
            
            //#line 671 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> offsets97167 = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                         ((x10_int) (tid97168)));
            
            //#line 687 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (directed) {
                
                //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i54242domain97109 = r97169;
                
                //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i54242min97110 = i54242domain97109->FMGL(min);
                
                //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i54242max97111 = i54242domain97109->FMGL(max);
                
                //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i97112;
                    for (
                         //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i97112 = i54242min97110; ((i97112) <= (i54242max97111));
                         
                         //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i97112 = ((x10_long) ((i97112) + (((x10_long)1ll)))))
                    {
                        
                        //#line 688 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i97113 = i97112;
                        
                        //#line 689 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v97097 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97098 = i97113;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret97099;
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
                                if (((index97098) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97098) >= (srcList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97098), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97099 = (srcList__->FMGL(data))[index97098];
                            ret97099;
                        }))
                        ;
                        
                        //#line 690 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v97100 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97101 = i97113;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret97102;
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
                                if (((index97101) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97101) >= (dstList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97101), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97102 = (dstList__->FMGL(data))[index97101];
                            ret97102;
                        }))
                        ;
                        
                        //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int off97103 = ((x10_int) (((__extension__ ({
                            
                            //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_int> x97104 =
                              offsets97167;
                            
                            //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int y97105 = (__extension__ ({
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index97106 = ((x10_long) ((((x10_long) ((v97100) & (cmask)))) | (((x10_long) ((v97097) & (rmask))))));
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret97107;
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
                                    if (((index97106) < (((x10_long) (((x10_int)0))))) ||
                                        ((index97106) >= (roleMap->
                                                            FMGL(data)->
                                                            FMGL(size))))
                                    {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97106), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret97107 = (roleMap->FMGL(data))[index97106];
                                ret97107;
                            }))
                            ;
                            
                            //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                            ;
                            
                            //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97108;
                            
                            //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int r97085 = ((x10_int) (((__extension__ ({
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index97086 = y97105;
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret97087;
                                {
                                    
                                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((x97104->FMGL(data)).isValid()))
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
                                    if (((index97086) < (((x10_int)0))) ||
                                        ((((x10_long) (index97086))) >= (x97104->
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
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97086), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret97087 = (x97104->FMGL(data))[index97086];
                                ret97087;
                            }))
                            ) + (((x10_int)1))));
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index97082 = y97105;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int value97083 = r97085;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97084;
                            {
                                
                                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x97104->FMGL(data)).isValid()))
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
                                if (((index97082) < (((x10_int)0))) ||
                                    ((((x10_long) (index97082))) >= (x97104->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97082), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                            (x97104->FMGL(data)).set(index97082, value97083);
                            
                            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97084 = value97083;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                            ret97084;
                            
                            //#line 691 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97108 = r97085;
                            ret97108;
                        }))
                        ) - (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index97088 = off97103;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97089 = v97097;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97090;
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
                            if (((index97088) < (((x10_int)0))) ||
                                ((((x10_long) (index97088))) >= (sendSrcV->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97088), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendSrcV->FMGL(data)).set(index97088, value97089);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97090 = value97089;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97090;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index97091 = off97103;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97092 = v97100;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97093;
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
                            if (((index97091) < (((x10_int)0))) ||
                                ((((x10_long) (index97091))) >= (sendDstV->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97091), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendDstV->FMGL(data)).set(index97091, value97092);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97093 = value97092;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97093;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index97094 = off97103;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97095 = ((x10_long) ((((x10_long) ((i97113) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank)))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97096;
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
                            if (((index97094) < (((x10_int)0))) ||
                                ((((x10_long) (index97094))) >= (sendValues->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97094), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendValues->FMGL(data)).set(index97094, value97095);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97096 = value97095;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97096;
                    }
                }
                
            } else {
                
                //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i54261domain97162 = r97169;
                
                //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i54261min97163 = i54261domain97162->
                                            FMGL(min);
                
                //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i54261max97164 = i54261domain97162->
                                            FMGL(max);
                
                //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i97165;
                    for (
                         //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i97165 = i54261min97163; ((i97165) <= (i54261max97164));
                         
                         //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i97165 = ((x10_long) ((i97165) + (((x10_long)1ll)))))
                    {
                        
                        //#line 698 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i97166 = i97165;
                        
                        //#line 699 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v97144 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97145 = i97166;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret97146;
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
                                if (((index97145) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97145) >= (srcList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97145), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97146 = (srcList__->FMGL(data))[index97145];
                            ret97146;
                        }))
                        ;
                        
                        //#line 700 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v97147 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97148 = i97166;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret97149;
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
                                if (((index97148) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97148) >= (dstList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97148), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97149 = (dstList__->FMGL(data))[index97148];
                            ret97149;
                        }))
                        ;
                        
                        //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int off97150 = ((x10_int) (((__extension__ ({
                            
                            //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_int> x97151 =
                              offsets97167;
                            
                            //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int y97152 = (__extension__ ({
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index97153 = ((x10_long) ((((x10_long) ((v97147) & (cmask)))) | (((x10_long) ((v97144) & (rmask))))));
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret97154;
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
                                    if (((index97153) < (((x10_long) (((x10_int)0))))) ||
                                        ((index97153) >= (roleMap->
                                                            FMGL(data)->
                                                            FMGL(size))))
                                    {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97153), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret97154 = (roleMap->FMGL(data))[index97153];
                                ret97154;
                            }))
                            ;
                            
                            //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                            ;
                            
                            //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97155;
                            
                            //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int r97117 = ((x10_int) (((__extension__ ({
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index97118 = y97152;
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret97119;
                                {
                                    
                                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((x97151->FMGL(data)).isValid()))
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
                                    if (((index97118) < (((x10_int)0))) ||
                                        ((((x10_long) (index97118))) >= (x97151->
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
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97118), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret97119 = (x97151->FMGL(data))[index97118];
                                ret97119;
                            }))
                            ) + (((x10_int)1))));
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index97114 = y97152;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int value97115 = r97117;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97116;
                            {
                                
                                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x97151->FMGL(data)).isValid()))
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
                                if (((index97114) < (((x10_int)0))) ||
                                    ((((x10_long) (index97114))) >= (x97151->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97114), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                            (x97151->FMGL(data)).set(index97114, value97115);
                            
                            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97116 = value97115;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                            ret97116;
                            
                            //#line 701 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97155 = r97117;
                            ret97155;
                        }))
                        ) - (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index97126 = off97150;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97127 = v97144;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97128;
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
                            if (((index97126) < (((x10_int)0))) ||
                                ((((x10_long) (index97126))) >= (sendSrcV->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97126), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendSrcV->FMGL(data)).set(index97126, value97127);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97128 = value97127;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97128;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index97129 = off97150;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97130 = v97147;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97131;
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
                            if (((index97129) < (((x10_int)0))) ||
                                ((((x10_long) (index97129))) >= (sendDstV->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97129), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendDstV->FMGL(data)).set(index97129, value97130);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97131 = value97130;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97131;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index97132 = off97150;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97133 = ((x10_long) ((((x10_long) ((i97166) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank)))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97134;
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
                            if (((index97132) < (((x10_int)0))) ||
                                ((((x10_long) (index97132))) >= (sendValues->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97132), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendValues->FMGL(data)).set(index97132, value97133);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97134 = value97133;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97134;
                        
                        //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int off97156 = ((x10_int) (((__extension__ ({
                            
                            //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_int> x97157 =
                              offsets97167;
                            
                            //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int y97158 = (__extension__ ({
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_long index97159 = ((x10_long) ((((x10_long) ((v97144) & (cmask)))) | (((x10_long) ((v97147) & (rmask))))));
                                
                                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret97160;
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
                                    if (((index97159) < (((x10_long) (((x10_int)0))))) ||
                                        ((index97159) >= (roleMap->
                                                            FMGL(data)->
                                                            FMGL(size))))
                                    {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97159), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret97160 = (roleMap->FMGL(data))[index97159];
                                ret97160;
                            }))
                            ;
                            
                            //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                            ;
                            
                            //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97161;
                            
                            //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10_int r97123 = ((x10_int) (((__extension__ ({
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int index97124 = y97158;
                                
                                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                x10_int ret97125;
                                {
                                    
                                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (!((x97157->FMGL(data)).isValid()))
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
                                    if (((index97124) < (((x10_int)0))) ||
                                        ((((x10_long) (index97124))) >= (x97157->
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
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97124), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                ret97125 = (x97157->FMGL(data))[index97124];
                                ret97125;
                            }))
                            ) + (((x10_int)1))));
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int index97120 = y97158;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int value97121 = r97123;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97122;
                            {
                                
                                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((x97157->FMGL(data)).isValid()))
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
                                if (((index97120) < (((x10_int)0))) ||
                                    ((((x10_long) (index97120))) >= (x97157->
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
                                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97120), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                            (x97157->FMGL(data)).set(index97120, value97121);
                            
                            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97122 = value97121;
                            
                            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                            ret97122;
                            
                            //#line 705 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97161 = r97123;
                            ret97161;
                        }))
                        ) - (((x10_int)1))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index97135 = off97156;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97136 = v97147;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97137;
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
                            if (((index97135) < (((x10_int)0))) ||
                                ((((x10_long) (index97135))) >= (sendSrcV->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97135), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendSrcV->FMGL(data)).set(index97135, value97136);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97137 = value97136;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97137;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index97138 = off97156;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97139 = v97144;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97140;
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
                            if (((index97138) < (((x10_int)0))) ||
                                ((((x10_long) (index97138))) >= (sendDstV->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97138), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendDstV->FMGL(data)).set(index97138, value97139);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97140 = value97139;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97140;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index97141 = off97156;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97142 = ((x10_long) ((((x10_long) ((i97166) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank)))));
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97143;
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
                            if (((index97141) < (((x10_int)0))) ||
                                ((((x10_long) (index97141))) >= (sendValues->
                                                                   FMGL(data)->
                                                                   FMGL(size))))
                            {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97141), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendValues->FMGL(data)).set(index97141, value97142);
                        
                        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97143 = value97142;
                        
                        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97143;
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
    x10_int idx97170;
    x10::lang::LongRange i_range97174;
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
        buf.write(this->idx97170);
        buf.write(this->i_range97174);
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
        x10_int that_idx97170 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range97174 = buf.read<x10::lang::LongRange>();
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
        org_scalegraph_graph_Graph__closure__42* this_ = new (storage) org_scalegraph_graph_Graph__closure__42(that_idx97170, that_i_range97174, that_scatterGather, that_directed, that_srcList__, that_dstList__, that_cmask, that_rmask, that_roleMap, that_sendSrcV, that_sendDstV, that_teamSize, that_teamRank, that_sendValues);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__42(x10_int idx97170, x10::lang::LongRange i_range97174, org::scalegraph::util::DistScatterGather scatterGather, x10_boolean directed, org::scalegraph::util::MemoryChunk<x10_long> srcList__, org::scalegraph::util::MemoryChunk<x10_long> dstList__, x10_long cmask, x10_long rmask, org::scalegraph::util::MemoryChunk<x10_int> roleMap, org::scalegraph::util::MemoryChunk<x10_long> sendSrcV, org::scalegraph::util::MemoryChunk<x10_long> sendDstV, x10_int teamSize, x10_int teamRank, org::scalegraph::util::MemoryChunk<x10_long> sendValues) : idx97170(idx97170), i_range97174(i_range97174), scatterGather(scatterGather), directed(directed), srcList__(srcList__), dstList__(dstList__), cmask(cmask), rmask(rmask), roleMap(roleMap), sendSrcV(sendSrcV), sendDstV(sendDstV), teamSize(teamSize), teamRank(teamRank), sendValues(sendValues) { }
    
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
                                                           x10::array::Array<x10_int>* this94046 =
                                                             x10aux::nullCheck(team_)->role();
                                                           
                                                           //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                                           ;
                                                           
                                                           //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                           x10_int ret94047;
                                                           
                                                           //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                           goto __ret94048; __ret94048: {
                                                           {
                                                               
                                                               //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                               if (x10aux::nullCheck(this94046)->
                                                                     FMGL(rail))
                                                               {
                                                                   
                                                                   //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                   ret94047 =
                                                                     (x10aux::nullCheck(this94046)->
                                                                        FMGL(raw))->__apply(((x10_int)0));
                                                                   
                                                                   //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                   goto __ret94048_end_;
                                                               }
                                                               else
                                                               {
                                                                   
                                                                   //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                   if (true &&
                                                                       !(x10aux::nullCheck(this94046)->
                                                                           FMGL(region)->contains(
                                                                           ((x10_int)0))))
                                                                   {
                                                                       
                                                                       //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                       x10::array::Array<void>::raiseBoundsError(
                                                                         ((x10_int)0));
                                                                   }
                                                                   
                                                                   //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                   ret94047 =
                                                                     (x10aux::nullCheck(this94046)->
                                                                        FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this94046)->
                                                                                                                            FMGL(layout_min0)))));
                                                                   
                                                                   //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                   goto __ret94048_end_;
                                                               }
                                                               
                                                           }goto __ret94048_end_; __ret94048_end_: ;
                                                           }
                                                           ret94047;
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
            x10::lang::Iterator<x10::array::Point*>* id54195;
            for (
                 //#line 637 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                 id54195 = x10aux::nullCheck(places)->FMGL(region)->iterator();
                 x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id54195));
                 ) {
                
                //#line 637 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::array::Point* id35 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id54195));
                
                //#line 637 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int i = x10aux::nullCheck(id35)->x10::array::Point::__apply(
                              ((x10_int)0));
                
                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index97001 = i;
                
                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int value97002 = (__extension__ ({
                    
                    //#line 638 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::array::Array<x10_int>* this97003 =
                      x10aux::nullCheck(team_)->role((__extension__ ({
                                                         
                                                         //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                         x10_int i97004 =
                                                           i;
                                                         
                                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                         x10::lang::Place ret97005;
                                                         
                                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                         goto __ret97006; __ret97006: {
                                                         {
                                                             
                                                             //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                             if (x10aux::nullCheck(places)->
                                                                   FMGL(rail))
                                                             {
                                                                 
                                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                 ret97005 =
                                                                   (x10aux::nullCheck(places)->
                                                                      FMGL(raw))->__apply(i97004);
                                                                 
                                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                 goto __ret97006_end_;
                                                             }
                                                             else
                                                             {
                                                                 
                                                                 //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                 if (true &&
                                                                     !(x10aux::nullCheck(places)->
                                                                         FMGL(region)->contains(
                                                                         i97004)))
                                                                 {
                                                                     
                                                                     //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                     x10::array::Array<void>::raiseBoundsError(
                                                                       i97004);
                                                                 }
                                                                 
                                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                 ret97005 =
                                                                   (x10aux::nullCheck(places)->
                                                                      FMGL(raw))->__apply(((x10_int) ((i97004) - (x10aux::nullCheck(places)->
                                                                                                                    FMGL(layout_min0)))));
                                                                 
                                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                 goto __ret97006_end_;
                                                             }
                                                             
                                                         }goto __ret97006_end_; __ret97006_end_: ;
                                                         }
                                                         ret97005;
                                                         }))
                                                         );
                      
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int ret97007;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret97008; __ret97008: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(this97003)->
                              FMGL(rail)) {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97007 = (x10aux::nullCheck(this97003)->
                                          FMGL(raw))->__apply(((x10_int)0));
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret97008_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(this97003)->
                                            FMGL(region)->contains(
                                            ((x10_int)0))))
                            {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  ((x10_int)0));
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97007 = (x10aux::nullCheck(this97003)->
                                          FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this97003)->
                                                                                              FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret97008_end_;
                        }
                        
                    }goto __ret97008_end_; __ret97008_end_: ;
                    }
                    ret97007;
                    }))
                    ;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret97009;
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
                        if (((index97001) < (((x10_int)0))) ||
                            ((((x10_long) (index97001))) >= (roleMap->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97001), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (roleMap->FMGL(data)).set(index97001, value97002);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret97009 = value97002;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret97009;
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
            x10::lang::LongRange range97187 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((srcList__->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size97078 = ((x10_long) ((((x10_long) ((range97187->
                                                               FMGL(max)) - (range97187->
                                                                               FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads97079 = x10::lang::Runtime::FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size97080 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a97081 = ((x10_long) ((((x10_long) ((((x10_long) ((size97078) + (((x10_long) (nthreads97079)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads97079)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a97081) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a97081);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var18 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable97908 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i72665max97075 = ((x10_int) ((nthreads97079) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i97076;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i97076 = ((x10_int)0);
                                         ((i97076) <= (i72665max97075));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i97076 = ((x10_int) ((i97076) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i97077 = i97076;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx97068 =
                                          i97077;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start97069 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a97070 =
                                              ((x10_long) ((range97187->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b97071 =
                                              ((x10_long) ((range97187->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i97077))) * (chunk_size97080))))));
                                            ((a97070) < (b97071))
                                              ? (a97070) : (b97071);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range97072 =
                                          x10::lang::LongRange::_make(i_start97069, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a97073 =
                                              range97187->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b97074 =
                                              ((x10_long) ((((x10_long) ((i_start97069) + (chunk_size97080)))) - (((x10_long) (((x10_int)1))))));
                                            ((a97073) < (b97074))
                                              ? (a97073) : (b97074);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__41)))org_scalegraph_graph_Graph__closure__41(idx97068, i_range97072, scatterGather, directed, srcList__, dstList__, cmask, rmask, roleMap))));
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
                            x10::lang::CheckedThrowable* formal97909 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc266);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable97908 = formal97909;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable97908)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable97908))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable97908));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var18);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable97908)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable97908)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable97908));
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
                x10::array::Array<x10_int>* this94238 = x10aux::nullCheck(team_)->role();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret94239;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret94240; __ret94240: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this94238)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret94239 = (x10aux::nullCheck(this94238)->
                                      FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret94240_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this94238)->
                                        FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret94239 = (x10aux::nullCheck(this94238)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this94238)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret94240_end_;
                    }
                    
                }goto __ret94240_end_; __ret94240_end_: ;
                }
                ret94239;
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
            x10::lang::LongRange range97188 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((srcList__->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size97180 = ((x10_long) ((((x10_long) ((range97188->
                                                               FMGL(max)) - (range97188->
                                                                               FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads97181 = x10::lang::Runtime::FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size97182 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a97183 = ((x10_long) ((((x10_long) ((((x10_long) ((size97180) + (((x10_long) (nthreads97181)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads97181)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a97183) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a97183);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var19 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable97911 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i72665max97177 = ((x10_int) ((nthreads97181) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i97178;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i97178 = ((x10_int)0);
                                         ((i97178) <= (i72665max97177));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i97178 = ((x10_int) ((i97178) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i97179 = i97178;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx97170 =
                                          i97179;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start97171 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a97172 =
                                              ((x10_long) ((range97188->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b97173 =
                                              ((x10_long) ((range97188->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i97179))) * (chunk_size97182))))));
                                            ((a97172) < (b97173))
                                              ? (a97172) : (b97173);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range97174 =
                                          x10::lang::LongRange::_make(i_start97171, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a97175 =
                                              range97188->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b97176 =
                                              ((x10_long) ((((x10_long) ((i_start97171) + (chunk_size97182)))) - (((x10_long) (((x10_int)1))))));
                                            ((a97175) < (b97176))
                                              ? (a97175) : (b97176);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__42)))org_scalegraph_graph_Graph__closure__42(idx97170, i_range97174, scatterGather, directed, srcList__, dstList__, cmask, rmask, roleMap, sendSrcV, sendDstV, teamSize, teamRank, sendValues))));
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
                            x10::lang::CheckedThrowable* formal97912 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc269);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable97911 = formal97912;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable97911)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable97911))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable97911));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var19);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable97911)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable97911)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable97911));
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
                org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > alloc54164 =
                   org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> >::_alloc();
                
                //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::id::IdStruct val97184 =
                  ids;
                
                //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::SparseMatrix<x10_long> val97185 =
                  (__extension__ ({
                    
                    //#line 717 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::blas::SparseMatrix<x10_long> alloc97186 =
                       org::scalegraph::blas::SparseMatrix<x10_long>::_alloc();
                    
                    //#line 717 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                    (alloc97186)->::org::scalegraph::blas::SparseMatrix<x10_long>::_constructor(
                      recvSrcV, recvDstV, recvValues, ids);
                    alloc97186;
                }))
                ;
                
                //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                alloc54164->FMGL(val1) = val97184;
                
                //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
                alloc54164->FMGL(val2) = val97185;
                alloc54164;
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
            x10_long tid97441 = ((x10_long) (idx97443));
            
            //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r97442 = i_range97447;
            
            //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (directed) {
                
                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i54365domain97407 = r97442;
                
                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i54365min97408 = i54365domain97407->FMGL(min);
                
                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i54365max97409 = i54365domain97407->FMGL(max);
                
                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i97410;
                    for (
                         //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i97410 = i54365min97408; ((i97410) <= (i54365max97409));
                         
                         //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i97410 = ((x10_long) ((i97410) + (((x10_long)1ll)))))
                    {
                        
                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i97411 = i97410;
                        
                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v97401 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97402 = i97411;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret97403;
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
                                if (((index97402) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97402) >= (srcList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97402), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97403 = (srcList__->FMGL(data))[index97402];
                            ret97403;
                        }))
                        ;
                        
                        //#line 879 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v97404 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97405 = i97411;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret97406;
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
                                if (((index97405) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97405) >= (dstList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97405), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97406 = (dstList__->FMGL(data))[index97405];
                            ret97406;
                        }))
                        ;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index97392 = i97411;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97393 = v97401;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97394;
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
                            if (((index97392) < (((x10_long) (((x10_int)0))))) ||
                                ((index97392) >= (sendSrcV->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97392), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendSrcV->FMGL(data)).set(index97392, value97393);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97394 = value97393;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97394;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index97395 = i97411;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97396 = v97404;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97397;
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
                            if (((index97395) < (((x10_long) (((x10_int)0))))) ||
                                ((index97395) >= (sendDstV->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97395), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendDstV->FMGL(data)).set(index97395, value97396);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97397 = value97396;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97397;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index97398 = i97411;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97399 = ((x10_long) ((((x10_long) ((i97411) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank)))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97400;
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
                            if (((index97398) < (((x10_long) (((x10_int)0))))) ||
                                ((index97398) >= (sendIndexes->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97398), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendIndexes->FMGL(data)).set(index97398, value97399);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97400 = value97399;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97400;
                    }
                }
                
            } else {
                
                //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i54384domain97436 = r97442;
                
                //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i54384min97437 = i54384domain97436->
                                            FMGL(min);
                
                //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i54384max97438 = i54384domain97436->
                                            FMGL(max);
                
                //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i97439;
                    for (
                         //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i97439 = i54384min97437; ((i97439) <= (i54384max97438));
                         
                         //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i97439 = ((x10_long) ((i97439) + (((x10_long)1ll)))))
                    {
                        
                        //#line 886 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i97440 = i97439;
                        
                        //#line 887 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v97430 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97431 = i97440;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret97432;
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
                                if (((index97431) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97431) >= (srcList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97431), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97432 = (srcList__->FMGL(data))[index97431];
                            ret97432;
                        }))
                        ;
                        
                        //#line 888 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long v97433 = (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97434 = i97440;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long ret97435;
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
                                if (((index97434) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97434) >= (dstList__->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (true) {
                                            
                                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97434), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                        }
                                        
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97435 = (dstList__->FMGL(data))[index97434];
                            ret97435;
                        }))
                        ;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index97412 = ((x10_long) ((((x10_long) ((i97440) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)0))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97413 = v97430;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97414;
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
                            if (((index97412) < (((x10_long) (((x10_int)0))))) ||
                                ((index97412) >= (sendSrcV->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97412), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendSrcV->FMGL(data)).set(index97412, value97413);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97414 = value97413;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97414;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index97415 = ((x10_long) ((((x10_long) ((i97440) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)0))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97416 = v97433;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97417;
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
                            if (((index97415) < (((x10_long) (((x10_int)0))))) ||
                                ((index97415) >= (sendDstV->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97415), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendDstV->FMGL(data)).set(index97415, value97416);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97417 = value97416;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97417;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index97418 = ((x10_long) ((((x10_long) ((i97440) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)0))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97419 = ((x10_long) ((((x10_long) ((i97440) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank)))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97420;
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
                            if (((index97418) < (((x10_long) (((x10_int)0))))) ||
                                ((index97418) >= (sendIndexes->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97418), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendIndexes->FMGL(data)).set(index97418, value97419);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97420 = value97419;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97420;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index97421 = ((x10_long) ((((x10_long) ((i97440) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97422 = v97433;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97423;
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
                            if (((index97421) < (((x10_long) (((x10_int)0))))) ||
                                ((index97421) >= (sendSrcV->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97421), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendSrcV->FMGL(data)).set(index97421, value97422);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97423 = value97422;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97423;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index97424 = ((x10_long) ((((x10_long) ((i97440) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97425 = v97430;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97426;
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
                            if (((index97424) < (((x10_long) (((x10_int)0))))) ||
                                ((index97424) >= (sendDstV->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97424), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendDstV->FMGL(data)).set(index97424, value97425);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97426 = value97425;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97426;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index97427 = ((x10_long) ((((x10_long) ((i97440) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value97428 = ((x10_long) ((((x10_long) ((i97440) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank)))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret97429;
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
                            if (((index97427) < (((x10_long) (((x10_int)0))))) ||
                                ((index97427) >= (sendIndexes->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97427), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (sendIndexes->FMGL(data)).set(index97427, value97428);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97429 = value97428;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97429;
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
    x10_int idx97443;
    x10::lang::LongRange i_range97447;
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
        buf.write(this->idx97443);
        buf.write(this->i_range97447);
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
        x10_int that_idx97443 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range97447 = buf.read<x10::lang::LongRange>();
        x10_boolean that_directed = buf.read<x10_boolean>();
        org::scalegraph::util::MemoryChunk<x10_long> that_srcList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_dstList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendSrcV = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendDstV = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_teamSize = buf.read<x10_int>();
        x10_int that_teamRank = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendIndexes = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_graph_Graph__closure__47* this_ = new (storage) org_scalegraph_graph_Graph__closure__47(that_idx97443, that_i_range97447, that_directed, that_srcList__, that_dstList__, that_sendSrcV, that_sendDstV, that_teamSize, that_teamRank, that_sendIndexes);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__47(x10_int idx97443, x10::lang::LongRange i_range97447, x10_boolean directed, org::scalegraph::util::MemoryChunk<x10_long> srcList__, org::scalegraph::util::MemoryChunk<x10_long> dstList__, org::scalegraph::util::MemoryChunk<x10_long> sendSrcV, org::scalegraph::util::MemoryChunk<x10_long> sendDstV, x10_int teamSize, x10_int teamRank, org::scalegraph::util::MemoryChunk<x10_long> sendIndexes) : idx97443(idx97443), i_range97447(i_range97447), directed(directed), srcList__(srcList__), dstList__(dstList__), sendSrcV(sendSrcV), sendDstV(sendDstV), teamSize(teamSize), teamRank(teamRank), sendIndexes(sendIndexes) { }
    
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
            x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* this97467 =
              (ret)->__apply();
            
            //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > x97468 =
              ref;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > x97465 =
              x97468;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > ret97466;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this97467)->FMGL(value) = x97465;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
            ret97466 = x97465;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
            ret97466;
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
                x10::array::Array<x10_int>* this95757 = x10aux::nullCheck(team_)->role();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret95758;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret95759; __ret95759: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this95757)->FMGL(rail)) {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret95758 = (x10aux::nullCheck(this95757)->FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret95759_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this95757)->FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret95758 = (x10aux::nullCheck(this95757)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this95757)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret95759_end_;
                    }
                    
                }goto __ret95759_end_; __ret95759_end_: ;
                }
                ret95758;
                }))
                ;
                
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range97474 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((srcList__->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size97453 = ((x10_long) ((((x10_long) ((range97474->
                                                               FMGL(max)) - (range97474->
                                                                               FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads97454 = x10::lang::Runtime::FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size97455 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a97456 = ((x10_long) ((((x10_long) ((((x10_long) ((size97453) + (((x10_long) (nthreads97454)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads97454)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a97456) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a97456);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var22 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable97920 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i72665max97450 = ((x10_int) ((nthreads97454) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i97451;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i97451 = ((x10_int)0);
                                         ((i97451) <= (i72665max97450));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i97451 = ((x10_int) ((i97451) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i97452 = i97451;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx97443 =
                                          i97452;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start97444 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a97445 =
                                              ((x10_long) ((range97474->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b97446 =
                                              ((x10_long) ((range97474->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i97452))) * (chunk_size97455))))));
                                            ((a97445) < (b97446))
                                              ? (a97445) : (b97446);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range97447 =
                                          x10::lang::LongRange::_make(i_start97444, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a97448 =
                                              range97474->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b97449 =
                                              ((x10_long) ((((x10_long) ((i_start97444) + (chunk_size97455)))) - (((x10_long) (((x10_int)1))))));
                                            ((a97448) < (b97449))
                                              ? (a97448) : (b97449);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__47)))org_scalegraph_graph_Graph__closure__47(idx97443, i_range97447, directed, srcList__, dstList__, sendSrcV, sendDstV, teamSize, teamRank, sendIndexes))));
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
                            x10::lang::CheckedThrowable* formal97921 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc280);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable97920 = formal97921;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable97920)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable97920))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable97920));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var22);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable97920)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable97920)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable97920));
                        }
                        
                    }
                    
                }
            }
            
            //#line 899 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Team2 team2 =  org::scalegraph::util::Team2::_alloc();
            
            //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10::util::Team* baseTeam97475 = team_;
            
            //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10FieldAssign_c
            team2->FMGL(base) = baseTeam97475;
            
            //#line 901 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> sendNumEdges =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value97476 = ((x10_int) ((__extension__ ({
                sendSrcV->FMGL(data)->FMGL(size);
            }))
            ));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret97477;
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
            (sendNumEdges->FMGL(data)).set(((x10_int)0), value97476);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret97477 = value97476;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret97477;
            
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
                x10_int ret97469;
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
                ret97469 = ((x10_int)0);
                
                //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret97469;
                
                //#line 909 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i54403domain97470 = (__extension__ ({
                    x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((counts->
                                                                                 FMGL(data)->
                                                                                 FMGL(size)) - (((x10_long)1ll)))));
                }))
                ;
                
                //#line 909 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i54403max97471 = i54403domain97470->
                                            FMGL(max);
                
                //#line 909 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i97472;
                    for (
                         //#line 909 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i97472 = ((x10_long)0ll); ((i97472) <= (i54403max97471));
                         
                         //#line 909 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i97472 = ((x10_long) ((i97472) + (((x10_long)1ll)))))
                    {
                        
                        //#line 909 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i97473 = i97472;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index97457 = ((x10_long) ((i97473) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int value97458 = ((x10_int) (((__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97459 = i97473;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97460;
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
                                if (((index97459) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97459) >= (offsets->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97459), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97460 = (offsets->FMGL(data))[index97459];
                            ret97460;
                        }))
                        ) + ((__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index97461 = i97473;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_int ret97462;
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
                                if (((index97461) < (((x10_long) (((x10_int)0))))) ||
                                    ((index97461) >= (counts->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97461), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret97462 = (counts->FMGL(data))[index97461];
                            ret97462;
                        }))
                        )));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret97463;
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
                            if (((index97457) < (((x10_long) (((x10_int)0))))) ||
                                ((index97457) >= (offsets->
                                                    FMGL(data)->
                                                    FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index97457), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (offsets->FMGL(data)).set(index97457, value97458);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret97463 = value97458;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret97463;
                    }
                }
                
                //#line 910 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> recvSrcV =
                  org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((__extension__ ({
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index95914 = x10aux::nullCheck(team_)->size();
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret95915;
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
                        if (((index95914) < (((x10_int)0))) ||
                            ((((x10_long) (index95914))) >= (offsets->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index95914), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret95915 = (offsets->FMGL(data))[index95914];
                    ret95915;
                }))
                )), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 911 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> recvDstV =
                  org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((__extension__ ({
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index95917 = x10aux::nullCheck(team_)->size();
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret95918;
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
                        if (((index95917) < (((x10_int)0))) ||
                            ((((x10_long) (index95917))) >= (offsets->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index95917), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret95918 = (offsets->FMGL(data))[index95917];
                    ret95918;
                }))
                )), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 912 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> recvIndexes =
                  org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) ((__extension__ ({
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index95920 = x10aux::nullCheck(team_)->size();
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret95921;
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
                        if (((index95920) < (((x10_int)0))) ||
                            ((((x10_long) (index95920))) >= (offsets->
                                                               FMGL(data)->
                                                               FMGL(size))))
                        {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index95920), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret95921 = (offsets->FMGL(data))[index95920];
                    ret95921;
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
                                                                                                                     x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* alloc54170 =
                                                                                                                       
                                                                                                                     ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> > >(), 0, sizeof(x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >))) x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >()))
                                                                                                                     ;
                                                                                                                     
                                                                                                                     //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                                                                                                                     org::scalegraph::blas::SparseMatrix<x10_long> x97464 =
                                                                                                                       sparseMatrix;
                                                                                                                     
                                                                                                                     //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                                                                     alloc54170->
                                                                                                                       FMGL(value) =
                                                                                                                       x97464;
                                                                                                                     alloc54170;
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
                x10::util::ListIterator<x10::lang::Any*>* att54426;
                for (
                     //#line 1027 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                     att54426 = reinterpret_cast<x10::util::ListIterator<x10::lang::Any*>*>(attlist->iterator());
                     x10::util::ListIterator<x10::lang::Any*>::hasNext(x10aux::nullCheck(att54426));
                     ) {
                    
                    //#line 1027 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Any* att = x10::util::ListIterator<x10::lang::Any*>::next(x10aux::nullCheck(att54426));
                    
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
        org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> > alloc54154 =
           org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >::_alloc();
        
        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
        x10::lang::Any* val96522 = x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL);
        
        //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": x10.ast.X10LocalDecl_c
        x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> val96523 =
          x10::lang::PlaceLocalHandle<void>::makeFlat<org::scalegraph::graph::VertexTranslatorBase* >(
            x10aux::nullCheck(team)->placeGroup(), create);
        
        //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc54154->FMGL(val1) = val96522;
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/tuple/Tuple2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc54154->FMGL(val2) = val96523;
        alloc54154;
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
    this->org::scalegraph::graph::Graph::__fieldInitializers52688();
    
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
        org::scalegraph::util::DistMemoryChunk<x10_long> alloc54155 =
           org::scalegraph::util::DistMemoryChunk<x10_long>::_alloc();
        
        //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
        (alloc54155)->::org::scalegraph::util::DistMemoryChunk<x10_long>::_constructor(
          x10aux::nullCheck(team_)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_Graph__closure__4)))org_scalegraph_graph_Graph__closure__4())));
        alloc54155;
    }))
    ;
    
    //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(dstList) = (__extension__ ({
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<x10_long> alloc54156 =
           org::scalegraph::util::DistMemoryChunk<x10_long>::_alloc();
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
        (alloc54156)->::org::scalegraph::util::DistMemoryChunk<x10_long>::_constructor(
          x10aux::nullCheck(team_)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_Graph__closure__5)))org_scalegraph_graph_Graph__closure__5())));
        alloc54156;
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
                           x10::lang::String* str92713 = org::scalegraph::io::ID::
                                                           FMGL(NAME_SOURCE__get)();
                           (__extension__ ({
                               
                               //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                               org::scalegraph::util::SString alloc92714 =
                                  org::scalegraph::util::SString::_alloc();
                               
                               //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                               x10::lang::String* str96528 =
                                 str92713;
                               
                               //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                               alloc92714->FMGL(content) =
                                 org::scalegraph::util::StringFromX10String(str96528);
                               alloc92714;
                           }))
                           ;
                       }))
                       );
    
    //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_int dstIdx = x10aux::nullCheck(edgeData)->nameToIndex(
                       (__extension__ ({
                           
                           //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                           x10::lang::String* str92717 = org::scalegraph::io::ID::
                                                           FMGL(NAME_TARGET__get)();
                           (__extension__ ({
                               
                               //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                               org::scalegraph::util::SString alloc92718 =
                                  org::scalegraph::util::SString::_alloc();
                               
                               //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                               x10::lang::String* str96529 =
                                 str92717;
                               
                               //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                               alloc92718->FMGL(content) =
                                 org::scalegraph::util::StringFromX10String(str96529);
                               alloc92718;
                           }))
                           ;
                       }))
                       );
    
    //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_int vertexType = (__extension__ ({
        
        //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_int>* this92722 = x10aux::nullCheck(edgeData)->typeId();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i92721 = srcIdx;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int ret92723;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret92724; __ret92724: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this92722)->FMGL(rail))
            {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret92723 = (x10aux::nullCheck(this92722)->
                              FMGL(raw))->__apply(i92721);
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret92724_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this92722)->
                                FMGL(region)->contains(i92721)))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      i92721);
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret92723 = (x10aux::nullCheck(this92722)->
                              FMGL(raw))->__apply(((x10_int) ((i92721) - (x10aux::nullCheck(this92722)->
                                                                            FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret92724_end_;
            }
            
        }goto __ret92724_end_; __ret92724_end_: ;
        }
        ret92723;
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
        x10::array::Array<x10::lang::Any*>* this92726 = x10aux::nullCheck(edgeData)->data();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i92725 = srcIdx;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::lang::Any* ret92727;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret92728; __ret92728: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this92726)->FMGL(rail))
            {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret92727 = (x10aux::nullCheck(this92726)->
                              FMGL(raw))->__apply(i92725);
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret92728_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this92726)->
                                FMGL(region)->contains(i92725)))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      i92725);
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret92727 = (x10aux::nullCheck(this92726)->
                              FMGL(raw))->__apply(((x10_int) ((i92725) - (x10aux::nullCheck(this92726)->
                                                                            FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret92728_end_;
            }
            
        }goto __ret92728_end_; __ret92728_end_: ;
        }
        ret92727;
        }))
        ;
        
    
    //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::lang::Any* dst = (__extension__ ({
        
        //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10::lang::Any*>* this92730 = x10aux::nullCheck(edgeData)->data();
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i92729 = dstIdx;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::lang::Any* ret92731;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret92732; __ret92732: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this92730)->FMGL(rail))
            {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret92731 = (x10aux::nullCheck(this92730)->
                              FMGL(raw))->__apply(i92729);
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret92732_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this92730)->
                                FMGL(region)->contains(i92729)))
                {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(
                      i92729);
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret92731 = (x10aux::nullCheck(this92730)->
                              FMGL(raw))->__apply(((x10_int) ((i92729) - (x10aux::nullCheck(this92730)->
                                                                            FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret92732_end_;
            }
            
        }goto __ret92732_end_; __ret92732_end_: ;
        }
        ret92731;
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
                                                           org::scalegraph::graph::EdgeList<x10_long> alloc54159 =
                                                             
                                                           org::scalegraph::graph::EdgeList<x10_long>::_alloc();
                                                           
                                                           //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::util::DistMemoryChunk<x10_long> src96530 =
                                                             x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_long> >(src);
                                                           
                                                           //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::util::DistMemoryChunk<x10_long> dst96531 =
                                                             x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_long> >(dst);
                                                           
                                                           //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                           alloc54159->
                                                             FMGL(src) =
                                                             src96530;
                                                           
                                                           //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                           alloc54159->
                                                             FMGL(dst) =
                                                             dst96531;
                                                           alloc54159;
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
                                                           org::scalegraph::graph::EdgeList<x10_double> alloc54160 =
                                                             
                                                           org::scalegraph::graph::EdgeList<x10_double>::_alloc();
                                                           
                                                           //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::util::DistMemoryChunk<x10_double> src96532 =
                                                             x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_double> >(src);
                                                           
                                                           //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::util::DistMemoryChunk<x10_double> dst96533 =
                                                             x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_double> >(dst);
                                                           
                                                           //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                           alloc54160->
                                                             FMGL(src) =
                                                             src96532;
                                                           
                                                           //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                           alloc54160->
                                                             FMGL(dst) =
                                                             dst96533;
                                                           alloc54160;
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
                                                           org::scalegraph::graph::EdgeList<org::scalegraph::util::SString> alloc54161 =
                                                             
                                                           org::scalegraph::graph::EdgeList<org::scalegraph::util::SString>::_alloc();
                                                           
                                                           //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::util::DistMemoryChunk<org::scalegraph::util::SString> src96534 =
                                                             x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<org::scalegraph::util::SString> >(src);
                                                           
                                                           //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::util::DistMemoryChunk<org::scalegraph::util::SString> dst96535 =
                                                             x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<org::scalegraph::util::SString> >(dst);
                                                           
                                                           //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                           alloc54161->
                                                             FMGL(src) =
                                                             src96534;
                                                           
                                                           //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                                           alloc54161->
                                                             FMGL(dst) =
                                                             dst96535;
                                                           alloc54161;
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
        x10::lang::Iterator<x10::array::Point*>* id54176;
        for (
             //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
             id54176 = x10aux::nullCheck(x10aux::nullCheck(edgeData)->data())->
                         FMGL(region)->iterator(); x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id54176));
             ) {
            
            //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* id21 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id54176));
            
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
                    x10::array::Array<x10_int>* this92743 =
                      x10aux::nullCheck(edgeData)->typeId();
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i92742 = i;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int ret92744;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret92745; __ret92745: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(this92743)->
                              FMGL(rail)) {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret92744 = (x10aux::nullCheck(this92743)->
                                          FMGL(raw))->__apply(i92742);
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret92745_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(this92743)->
                                            FMGL(region)->contains(
                                            i92742))) {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  i92742);
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret92744 = (x10aux::nullCheck(this92743)->
                                          FMGL(raw))->__apply(((x10_int) ((i92742) - (x10aux::nullCheck(this92743)->
                                                                                        FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret92745_end_;
                        }
                        
                    }goto __ret92745_end_; __ret92745_end_: ;
                    }
                    ret92744;
                    }))
                    );
              
            
            //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* name = (__extension__ ({
                
                //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::array::Array<x10::lang::String*>* this92760 =
                  x10aux::nullCheck(edgeData)->name();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i92759 = i;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10::lang::String* ret92761;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret92762; __ret92762: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this92760)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret92761 = (x10aux::nullCheck(this92760)->
                                      FMGL(raw))->__apply(i92759);
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret92762_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this92760)->
                                        FMGL(region)->contains(
                                        i92759))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              i92759);
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret92761 = (x10aux::nullCheck(this92760)->
                                      FMGL(raw))->__apply(((x10_int) ((i92759) - (x10aux::nullCheck(this92760)->
                                                                                    FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret92762_end_;
                    }
                    
                }goto __ret92762_end_; __ret92762_end_: ;
                }
                ret92761;
                }))
                ;
                
            
            //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::Any* data = (__extension__ ({
                
                //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::array::Array<x10::lang::Any*>* this92764 =
                  x10aux::nullCheck(edgeData)->data();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i92763 = i;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10::lang::Any* ret92765;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret92766; __ret92766: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this92764)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret92765 = (x10aux::nullCheck(this92764)->
                                      FMGL(raw))->__apply(i92763);
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret92766_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this92764)->
                                        FMGL(region)->contains(
                                        i92763))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              i92763);
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret92765 = (x10aux::nullCheck(this92764)->
                                      FMGL(raw))->__apply(((x10_int) ((i92763) - (x10aux::nullCheck(this92764)->
                                                                                    FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret92766_end_;
                    }
                    
                }goto __ret92766_end_; __ret92766_end_: ;
                }
                ret92765;
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
                    x10::lang::Iterator<x10::array::Point*>* id54186;
                    for (
                         //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         id54186 = x10aux::nullCheck(x10aux::nullCheck(vertexData)->data())->
                                     FMGL(region)->iterator();
                         x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id54186));
                         ) {
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10::array::Point* id22 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id54186));
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int i = x10aux::nullCheck(id22)->x10::array::Point::__apply(
                                      ((x10_int)0));
                        
                        //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::graph::AttributeProxy* proxy =
                          org::scalegraph::graph::AttributeProxy::make(
                            (__extension__ ({
                                
                                //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                x10::array::Array<x10_int>* this92768 =
                                  x10aux::nullCheck(vertexData)->typeId();
                                
                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                x10_int i92767 = i;
                                
                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                x10_int ret92769;
                                
                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                goto __ret92770; __ret92770: {
                                {
                                    
                                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (x10aux::nullCheck(this92768)->
                                          FMGL(rail)) {
                                        
                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret92769 = (x10aux::nullCheck(this92768)->
                                                      FMGL(raw))->__apply(i92767);
                                        
                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                        goto __ret92770_end_;
                                    } else {
                                        
                                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                        if (true && !(x10aux::nullCheck(this92768)->
                                                        FMGL(region)->contains(
                                                        i92767)))
                                        {
                                            
                                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                            x10::array::Array<void>::raiseBoundsError(
                                              i92767);
                                        }
                                        
                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret92769 = (x10aux::nullCheck(this92768)->
                                                      FMGL(raw))->__apply(((x10_int) ((i92767) - (x10aux::nullCheck(this92768)->
                                                                                                    FMGL(layout_min0)))));
                                        
                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                        goto __ret92770_end_;
                                    }
                                    
                                }goto __ret92770_end_; __ret92770_end_: ;
                                }
                                ret92769;
                                }))
                                );
                          
                        
                        //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10::lang::String* name = (__extension__ ({
                            
                            //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10::array::Array<x10::lang::String*>* this92772 =
                              x10aux::nullCheck(vertexData)->name();
                            
                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i92771 = i;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10::lang::String* ret92773;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret92774; __ret92774: {
                            {
                                
                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(this92772)->
                                      FMGL(rail)) {
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret92773 = (x10aux::nullCheck(this92772)->
                                                  FMGL(raw))->__apply(i92771);
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret92774_end_;
                                } else {
                                    
                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (true && !(x10aux::nullCheck(this92772)->
                                                    FMGL(region)->contains(
                                                    i92771)))
                                    {
                                        
                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                        x10::array::Array<void>::raiseBoundsError(
                                          i92771);
                                    }
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret92773 = (x10aux::nullCheck(this92772)->
                                                  FMGL(raw))->__apply(((x10_int) ((i92771) - (x10aux::nullCheck(this92772)->
                                                                                                FMGL(layout_min0)))));
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret92774_end_;
                                }
                                
                            }goto __ret92774_end_; __ret92774_end_: ;
                            }
                            ret92773;
                            }))
                            ;
                            
                        
                        //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10::lang::Any* data = (__extension__ ({
                            
                            //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                            x10::array::Array<x10::lang::Any*>* this92776 =
                              x10aux::nullCheck(vertexData)->data();
                            
                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i92775 = i;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10::lang::Any* ret92777;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret92778; __ret92778: {
                            {
                                
                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(this92776)->
                                      FMGL(rail)) {
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret92777 = (x10aux::nullCheck(this92776)->
                                                  FMGL(raw))->__apply(i92775);
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret92778_end_;
                                } else {
                                    
                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (true && !(x10aux::nullCheck(this92776)->
                                                    FMGL(region)->contains(
                                                    i92775)))
                                    {
                                        
                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                        x10::array::Array<void>::raiseBoundsError(
                                          i92775);
                                    }
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret92777 = (x10aux::nullCheck(this92776)->
                                                  FMGL(raw))->__apply(((x10_int) ((i92775) - (x10aux::nullCheck(this92776)->
                                                                                                FMGL(layout_min0)))));
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret92778_end_;
                                }
                                
                            }goto __ret92778_end_; __ret92778_end_: ;
                            }
                            ret92777;
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
                                                  x10::array::Array<x10_int>* this92782 =
                                                    x10aux::nullCheck(team_)->role();
                                                  
                                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                                  ;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10_int ret92783;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                  goto __ret92784; __ret92784: {
                                                  {
                                                      
                                                      //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                      if (x10aux::nullCheck(this92782)->
                                                            FMGL(rail))
                                                      {
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret92783 =
                                                            (x10aux::nullCheck(this92782)->
                                                               FMGL(raw))->__apply(((x10_int)0));
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret92784_end_;
                                                      } else
                                                      {
                                                          
                                                          //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                          if (true &&
                                                              !(x10aux::nullCheck(this92782)->
                                                                  FMGL(region)->contains(
                                                                  ((x10_int)0))))
                                                          {
                                                              
                                                              //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                              x10::array::Array<void>::raiseBoundsError(
                                                                ((x10_int)0));
                                                          }
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret92783 =
                                                            (x10aux::nullCheck(this92782)->
                                                               FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this92782)->
                                                                                                                   FMGL(layout_min0)))));
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret92784_end_;
                                                      }
                                                      
                                                  }goto __ret92784_end_; __ret92784_end_: ;
                                                  }
                                                  ret92783;
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
                        x10_long a92785 = ((x10_long) ((maxVertexID) + (((x10_long) (((x10_int)1))))));
                        
                        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                        x10_long b92786 = x10aux::nullCheck(g)->
                                            FMGL(numberOfVertices);
                        ((a92785) < (b92786)) ? (b92786) : (a92785);
                    }))
                    ;
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::graph::Graph* x96536 =
                      g;
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long y96537 = globalNumOfEdges;
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                    x10aux::nullCheck(x96536)->FMGL(numberOfEdges) =
                      ((x10_long) ((x10aux::nullCheck(x96536)->
                                      FMGL(numberOfEdges)) + (y96537)));
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
                    org::scalegraph::util::MemoryChunk<x10_long> items96538 =
                      tlSrcs;
                    
                    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
                    allocator->org::scalegraph::util::GrowableMemory<x10_long>::insert(
                      allocator->FMGL(size), items96538);
                    
                    //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__set(
                      allocator->org::scalegraph::util::GrowableMemory<x10_long>::raw());
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    allocator->org::scalegraph::util::GrowableMemory<x10_long>::setMemory(
                      dstList_);
                    
                    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> items96539 =
                      tlDsts;
                    
                    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
                    allocator->org::scalegraph::util::GrowableMemory<x10_long>::insert(
                      allocator->FMGL(size), items96539);
                    
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
                                                                                                             org::scalegraph::graph::Graph* this93031 =
                                                                                                               this;
                                                                                                             
                                                                                                             //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                                                                             x10::lang::String* ret93032;
                                                                                                             
                                                                                                             //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Labeled_c
                                                                                                             goto __ret93033; __ret93033: {
                                                                                                             {
                                                                                                                 
                                                                                                                 //#line 316 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Switch_c
                                                                                                                 switch (x10aux::nullCheck(this93031)->
                                                                                                                           FMGL(vertexType))
                                                                                                                 {
                                                                                                                     
                                                                                                                     //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)5): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret93032 =
                                                                                                                           x10aux::makeStringLit("Long");
                                                                                                                         
                                                                                                                         //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret93033_end_;
                                                                                                                     }
                                                                                                                     //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)7): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret93032 =
                                                                                                                           x10aux::makeStringLit("Double");
                                                                                                                         
                                                                                                                         //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret93033_end_;
                                                                                                                     }
                                                                                                                     //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)13): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret93032 =
                                                                                                                           x10aux::makeStringLit("String");
                                                                                                                         
                                                                                                                         //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret93033_end_;
                                                                                                                     }
                                                                                                                     //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     default: ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret93032 =
                                                                                                                           x10aux::makeStringLit("Not supported type");
                                                                                                                         
                                                                                                                         //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret93033_end_;
                                                                                                                     }
                                                                                                                 }
                                                                                                             }goto __ret93033_end_; __ret93033_end_: ;
                                                                                                             }
                                                                                                             ret93032;
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
                                                                                                             org::scalegraph::graph::Graph* this93034 =
                                                                                                               this;
                                                                                                             
                                                                                                             //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                                                                             x10::lang::String* ret93035;
                                                                                                             
                                                                                                             //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Labeled_c
                                                                                                             goto __ret93036; __ret93036: {
                                                                                                             {
                                                                                                                 
                                                                                                                 //#line 316 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Switch_c
                                                                                                                 switch (x10aux::nullCheck(this93034)->
                                                                                                                           FMGL(vertexType))
                                                                                                                 {
                                                                                                                     
                                                                                                                     //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)5): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret93035 =
                                                                                                                           x10aux::makeStringLit("Long");
                                                                                                                         
                                                                                                                         //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret93036_end_;
                                                                                                                     }
                                                                                                                     //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)7): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret93035 =
                                                                                                                           x10aux::makeStringLit("Double");
                                                                                                                         
                                                                                                                         //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret93036_end_;
                                                                                                                     }
                                                                                                                     //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)13): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret93035 =
                                                                                                                           x10aux::makeStringLit("String");
                                                                                                                         
                                                                                                                         //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret93036_end_;
                                                                                                                     }
                                                                                                                     //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     default: ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret93035 =
                                                                                                                           x10aux::makeStringLit("Not supported type");
                                                                                                                         
                                                                                                                         //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret93036_end_;
                                                                                                                     }
                                                                                                                 }
                                                                                                             }goto __ret93036_end_; __ret93036_end_: ;
                                                                                                             }
                                                                                                             ret93035;
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
                                                                                                             org::scalegraph::graph::Graph* this93037 =
                                                                                                               this;
                                                                                                             
                                                                                                             //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                                                                             x10::lang::String* ret93038;
                                                                                                             
                                                                                                             //#line 315 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Labeled_c
                                                                                                             goto __ret93039; __ret93039: {
                                                                                                             {
                                                                                                                 
                                                                                                                 //#line 316 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Switch_c
                                                                                                                 switch (x10aux::nullCheck(this93037)->
                                                                                                                           FMGL(vertexType))
                                                                                                                 {
                                                                                                                     
                                                                                                                     //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)5): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret93038 =
                                                                                                                           x10aux::makeStringLit("Long");
                                                                                                                         
                                                                                                                         //#line 317 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret93039_end_;
                                                                                                                     }
                                                                                                                     //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)7): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret93038 =
                                                                                                                           x10aux::makeStringLit("Double");
                                                                                                                         
                                                                                                                         //#line 318 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret93039_end_;
                                                                                                                     }
                                                                                                                     //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     case ((x10_int)13): ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret93038 =
                                                                                                                           x10aux::makeStringLit("String");
                                                                                                                         
                                                                                                                         //#line 319 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret93039_end_;
                                                                                                                     }
                                                                                                                     //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
                                                                                                                     default: ;
                                                                                                                     {
                                                                                                                         
                                                                                                                         //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                         ret93038 =
                                                                                                                           x10aux::makeStringLit("Not supported type");
                                                                                                                         
                                                                                                                         //#line 320 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                                                                                                                         goto __ret93039_end_;
                                                                                                                     }
                                                                                                                 }
                                                                                                             }goto __ret93039_end_; __ret93039_end_: ;
                                                                                                             }
                                                                                                             ret93038;
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
                x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> vertexTranslator97189 =
                  this->FMGL(vertexTranslator);
                
                //#line 486 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int vertexType97190 = this->FMGL(vertexType);
                
                //#line 486 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long numberOfVertices97191 = this->FMGL(numberOfVertices);
                
                //#line 486 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int numberOfPlaces97192 = x10aux::nullCheck(this->
                                                                  FMGL(team))->size();
                
                //#line 487 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                vi->FMGL(vertexTranslator) = vertexTranslator97189;
                
                //#line 488 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                vi->FMGL(vertexType) = vertexType97190;
                
                //#line 489 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                vi->FMGL(numberOfVertices) = numberOfVertices97191;
                
                //#line 490 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                vi->FMGL(numberOfPlaces) = numberOfPlaces97192;
                
                //#line 628 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return (__extension__ ({
                    
                    //#line 628 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::blas::DistSparseMatrix<x10_long> alloc54165 =
                       org::scalegraph::blas::DistSparseMatrix<x10_long>::_alloc();
                    
                    //#line 628 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                    (alloc54165)->::org::scalegraph::blas::DistSparseMatrix<x10_long>::_constructor(
                      dist2d, reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > > >(sizeof(org_scalegraph_graph_Graph__closure__40)))org_scalegraph_graph_Graph__closure__40(team_, srcList_, dstList_, dist2d, vi, transpose, directed))));
                    alloc54165;
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
                    x10::array::Array<x10_int>* this95751 =
                      x10aux::nullCheck(team_)->role(place);
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int ret95752;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret95753; __ret95753: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(this95751)->
                              FMGL(rail)) {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret95752 = (x10aux::nullCheck(this95751)->
                                          FMGL(raw))->__apply(((x10_int)0));
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret95753_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(this95751)->
                                            FMGL(region)->contains(
                                            ((x10_int)0))))
                            {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  ((x10_int)0));
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret95752 = (x10aux::nullCheck(this95751)->
                                          FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this95751)->
                                                                                              FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret95753_end_;
                        }
                        
                    }goto __ret95753_end_; __ret95753_end_: ;
                    }
                    ret95752;
                    }))
                    ;
                    
                
                //#line 862 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > ret =
                  x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* >::_make((__extension__ ({
                                                                                                                                                               
                                                                                                                                                               //#line 863 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                                                                                                                                               x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* alloc54169 =
                                                                                                                                                                 
                                                                                                                                                               ((new (memset(x10aux::alloc<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > > >(), 0, sizeof(x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >))) x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >()))
                                                                                                                                                               ;
                                                                                                                                                               
                                                                                                                                                               //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                                                                                                                                                               x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > x97391 =
                                                                                                                                                                 x10aux::zeroValue<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >();
                                                                                                                                                               
                                                                                                                                                               //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                                                                                                               alloc54169->
                                                                                                                                                                 FMGL(value) =
                                                                                                                                                                 x97391;
                                                                                                                                                               alloc54169;
                                                                                                                                                           }))
                                                                                                                                                           );
                
                //#line 864 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(x10aux::nullCheck(team_)->placeGroup())->broadcastFlat(
                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__46)))org_scalegraph_graph_Graph__closure__46(srcList_, dstList_, directed, team_, place, root, this, transpose, ret))));
                
                //#line 940 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
                return (__extension__ ({
                    
                    //#line 940 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* this95932 =
                      (ret)->__apply();
                    x10aux::nullCheck(this95932)->FMGL(value);
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
                    x10::lang::Iterator<x10::lang::String*>* key54422;
                    for (
                         //#line 1017 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         key54422 = x10::util::Set<x10::lang::String*>::iterator(x10aux::nullCheck(this->
                                                                                                     FMGL(vertexAttributes)->keySet()));
                         x10::lang::Iterator<x10::lang::String*>::hasNext(x10aux::nullCheck(key54422));
                         ) {
                        
                        //#line 1017 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10::lang::String* key = x10::lang::Iterator<x10::lang::String*>::next(x10aux::nullCheck(key54422));
                        
                        //#line 1018 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        attlist->add(this->FMGL(vertexAttributes)->getOrThrow(
                                       key));
                    }
                }
                
                //#line 1019 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10::lang::Iterator<x10::lang::String*>* key54424;
                    for (
                         //#line 1019 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         key54424 = x10::util::Set<x10::lang::String*>::iterator(x10aux::nullCheck(this->
                                                                                                     FMGL(edgeAttributes)->keySet()));
                         x10::lang::Iterator<x10::lang::String*>::hasNext(x10aux::nullCheck(key54424));
                         ) {
                        
                        //#line 1019 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10::lang::String* key = x10::lang::Iterator<x10::lang::String*>::next(x10aux::nullCheck(key54424));
                        
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
            void org::scalegraph::graph::Graph::__fieldInitializers52688(
              ) {
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(graphAttributes) = (__extension__ ({
                    
                    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::util::HashMap<x10::lang::String*, x10::lang::Any*>* alloc54172 =
                       ((new (memset(x10aux::alloc<x10::util::HashMap<x10::lang::String*, x10::lang::Any*> >(), 0, sizeof(x10::util::HashMap<x10::lang::String*, x10::lang::Any*>))) x10::util::HashMap<x10::lang::String*, x10::lang::Any*>()))
                    ;
                    
                    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                    (alloc54172)->::x10::util::HashMap<x10::lang::String*, x10::lang::Any*>::_constructor();
                    alloc54172;
                }))
                ;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(vertexAttributes) = (__extension__ ({
                    
                    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::util::HashMap<x10::lang::String*, x10::lang::Any*>* alloc54173 =
                       ((new (memset(x10aux::alloc<x10::util::HashMap<x10::lang::String*, x10::lang::Any*> >(), 0, sizeof(x10::util::HashMap<x10::lang::String*, x10::lang::Any*>))) x10::util::HashMap<x10::lang::String*, x10::lang::Any*>()))
                    ;
                    
                    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                    (alloc54173)->::x10::util::HashMap<x10::lang::String*, x10::lang::Any*>::_constructor();
                    alloc54173;
                }))
                ;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
                this->FMGL(edgeAttributes) = (__extension__ ({
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::util::HashMap<x10::lang::String*, x10::lang::Any*>* alloc54174 =
                       ((new (memset(x10aux::alloc<x10::util::HashMap<x10::lang::String*, x10::lang::Any*> >(), 0, sizeof(x10::util::HashMap<x10::lang::String*, x10::lang::Any*>))) x10::util::HashMap<x10::lang::String*, x10::lang::Any*>()))
                    ;
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorCall_c
                    (alloc54174)->::x10::util::HashMap<x10::lang::String*, x10::lang::Any*>::_constructor();
                    alloc54174;
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
