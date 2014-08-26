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
        
        //#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<void>::make<x10_long >();
        
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:113";
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
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<void>::make<x10_long >();
        
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:114";
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
        
        //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return org::scalegraph::graph::VertexTranslator__NoTraslator::_make(team_);
        
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:122";
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
        
        //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:122";
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
        
        //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return org::scalegraph::graph::VertexTranslator__ArithmeticTranslator<x10_double>::_make(team_);
        
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:128-129";
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
        
        //#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:128-129";
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
        
        //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:196";
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
        
        //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:203";
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
        
        //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:210";
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
        
        //#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:217";
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
        
        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:224";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__14_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__34_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__34_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_graph_Graph__closure__34 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_Graph__closure__34> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 645 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> counts = scatterGather->org::scalegraph::util::DistScatterGather::getCounts(
                                                               ((x10_int) (tid)));
        
        //#line 646 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if (directed) {
            
            //#line 647 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i44343domain44627 = r;
            
            //#line 647 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44343min44628 = i44343domain44627->FMGL(min);
            
            //#line 647 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44343max44629 = i44343domain44627->FMGL(max);
            
            //#line 647 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
            {
                x10_long i44630;
                for (
                     //#line 647 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                     i44630 = i44343min44628; ((i44630) <= (i44343max44629));
                     
                     //#line 647 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                     i44630 = ((x10_long) ((i44630) + (((x10_long)1ll)))))
                {
                    
                    //#line 647 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long i44631 = i44630;
                    
                    //#line 648 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44625 = srcList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44631);
                    
                    //#line 649 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44626 = dstList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44631);
                    
                    //#line 650 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x44622 =
                      counts;
                    
                    //#line 650 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int y44623 = roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                       ((x10_long) ((((x10_long) ((v44626) & (cmask)))) | (((x10_long) ((v44625) & (rmask)))))));
                    
                    //#line 650 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 650 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int ret44624;
                    
                    //#line 650 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int r44621 = ((x10_int) ((x44622->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                    y44623)) + (((x10_int)1))));
                    
                    //#line 650 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    x44622->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                      y44623, r44621);
                    
                    //#line 650 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                    ret44624 = r44621;
                    
                    //#line 650 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Local_c
                    ret44624;
                }
            }
            
        } else {
            
            //#line 654 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i44360domain44642 = r;
            
            //#line 654 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44360min44643 = i44360domain44642->
                                        FMGL(min);
            
            //#line 654 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44360max44644 = i44360domain44642->
                                        FMGL(max);
            
            //#line 654 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
            {
                x10_long i44645;
                for (
                     //#line 654 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                     i44645 = i44360min44643; ((i44645) <= (i44360max44644));
                     
                     //#line 654 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                     i44645 = ((x10_long) ((i44645) + (((x10_long)1ll)))))
                {
                    
                    //#line 654 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long i44646 = i44645;
                    
                    //#line 655 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44640 = srcList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44646);
                    
                    //#line 656 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44641 = dstList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44646);
                    
                    //#line 657 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x44634 =
                      counts;
                    
                    //#line 657 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int y44635 = roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                       ((x10_long) ((((x10_long) ((v44641) & (cmask)))) | (((x10_long) ((v44640) & (rmask)))))));
                    
                    //#line 657 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 657 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int ret44636;
                    
                    //#line 657 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int r44632 = ((x10_int) ((x44634->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                    y44635)) + (((x10_int)1))));
                    
                    //#line 657 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    x44634->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                      y44635, r44632);
                    
                    //#line 657 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                    ret44636 = r44632;
                    
                    //#line 657 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Local_c
                    ret44636;
                    
                    //#line 658 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> x44637 =
                      counts;
                    
                    //#line 658 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int y44638 = roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                       ((x10_long) ((((x10_long) ((v44640) & (cmask)))) | (((x10_long) ((v44641) & (rmask)))))));
                    
                    //#line 658 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 658 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int ret44639;
                    
                    //#line 658 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int r44633 = ((x10_int) ((x44637->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                    y44638)) + (((x10_int)1))));
                    
                    //#line 658 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    x44637->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                      y44638, r44633);
                    
                    //#line 658 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                    ret44639 = r44633;
                    
                    //#line 658 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Local_c
                    ret44639;
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
        org_scalegraph_graph_Graph__closure__34* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__34>();
        buf.record_reference(storage);
        org::scalegraph::util::DistScatterGather that_scatterGather = buf.read<org::scalegraph::util::DistScatterGather>();
        x10_boolean that_directed = buf.read<x10_boolean>();
        org::scalegraph::util::MemoryChunk<x10_long> that_srcList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_dstList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_long that_cmask = buf.read<x10_long>();
        x10_long that_rmask = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<x10_int> that_roleMap = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        org_scalegraph_graph_Graph__closure__34* this_ = new (storage) org_scalegraph_graph_Graph__closure__34(that_scatterGather, that_directed, that_srcList__, that_dstList__, that_cmask, that_rmask, that_roleMap);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__34(org::scalegraph::util::DistScatterGather scatterGather, x10_boolean directed, org::scalegraph::util::MemoryChunk<x10_long> srcList__, org::scalegraph::util::MemoryChunk<x10_long> dstList__, x10_long cmask, x10_long rmask, org::scalegraph::util::MemoryChunk<x10_int> roleMap) : scatterGather(scatterGather), directed(directed), srcList__(srcList__), dstList__(dstList__), cmask(cmask), rmask(rmask), roleMap(roleMap) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:644-661";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__34_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__35_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__35_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_graph_Graph__closure__35 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_Graph__closure__35> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 671 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> offsets = scatterGather->org::scalegraph::util::DistScatterGather::getOffsets(
                                                                ((x10_int) (tid)));
        
        //#line 687 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if (directed) {
            
            //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i44377domain44654 = r;
            
            //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44377min44655 = i44377domain44654->FMGL(min);
            
            //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44377max44656 = i44377domain44654->FMGL(max);
            
            //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
            {
                x10_long i44657;
                for (
                     //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                     i44657 = i44377min44655; ((i44657) <= (i44377max44656));
                     
                     //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                     i44657 = ((x10_long) ((i44657) + (((x10_long)1ll)))))
                {
                    
                    //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long i44658 = i44657;
                    
                    //#line 689 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44648 = srcList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44658);
                    
                    //#line 690 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44649 = dstList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44658);
                    
                    //#line 691 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int off44650 = ((x10_int) (((__extension__ ({
                        
                        //#line 691 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x44651 =
                          offsets;
                        
                        //#line 691 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int y44652 = roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                           ((x10_long) ((((x10_long) ((v44649) & (cmask)))) | (((x10_long) ((v44648) & (rmask)))))));
                        
                        //#line 691 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 691 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int ret44653;
                        
                        //#line 691 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int r44647 = ((x10_int) ((x44651->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                        y44652)) + (((x10_int)1))));
                        
                        //#line 691 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x44651->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                          y44652, r44647);
                        
                        //#line 691 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                        ret44653 = r44647;
                        ret44653;
                    }))
                    ) - (((x10_int)1))));
                    
                    //#line 692 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendSrcV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44650, v44648);
                    
                    //#line 693 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendDstV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44650, v44649);
                    
                    //#line 694 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendValues->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44650, ((x10_long) ((((x10_long) ((i44658) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank))))));
                }
            }
            
        } else {
            
            //#line 698 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i44394domain44671 = r;
            
            //#line 698 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44394min44672 = i44394domain44671->
                                        FMGL(min);
            
            //#line 698 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44394max44673 = i44394domain44671->
                                        FMGL(max);
            
            //#line 698 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
            {
                x10_long i44674;
                for (
                     //#line 698 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                     i44674 = i44394min44672; ((i44674) <= (i44394max44673));
                     
                     //#line 698 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                     i44674 = ((x10_long) ((i44674) + (((x10_long)1ll)))))
                {
                    
                    //#line 698 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long i44675 = i44674;
                    
                    //#line 699 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44661 = srcList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44675);
                    
                    //#line 700 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44662 = dstList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44675);
                    
                    //#line 701 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int off44663 = ((x10_int) (((__extension__ ({
                        
                        //#line 701 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x44664 =
                          offsets;
                        
                        //#line 701 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int y44665 = roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                           ((x10_long) ((((x10_long) ((v44662) & (cmask)))) | (((x10_long) ((v44661) & (rmask)))))));
                        
                        //#line 701 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 701 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int ret44666;
                        
                        //#line 701 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int r44659 = ((x10_int) ((x44664->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                        y44665)) + (((x10_int)1))));
                        
                        //#line 701 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x44664->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                          y44665, r44659);
                        
                        //#line 701 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                        ret44666 = r44659;
                        ret44666;
                    }))
                    ) - (((x10_int)1))));
                    
                    //#line 702 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendSrcV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44663, v44661);
                    
                    //#line 703 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendDstV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44663, v44662);
                    
                    //#line 704 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendValues->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44663, ((x10_long) ((((x10_long) ((i44675) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank))))));
                    
                    //#line 705 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_int off44667 = ((x10_int) (((__extension__ ({
                        
                        //#line 705 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> x44668 =
                          offsets;
                        
                        //#line 705 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int y44669 = roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                           ((x10_long) ((((x10_long) ((v44661) & (cmask)))) | (((x10_long) ((v44662) & (rmask)))))));
                        
                        //#line 705 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 705 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int ret44670;
                        
                        //#line 705 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_int r44660 = ((x10_int) ((x44668->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                        y44669)) + (((x10_int)1))));
                        
                        //#line 705 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x44668->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                          y44669, r44660);
                        
                        //#line 705 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                        ret44670 = r44660;
                        ret44670;
                    }))
                    ) - (((x10_int)1))));
                    
                    //#line 706 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendSrcV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44667, v44662);
                    
                    //#line 707 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendDstV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44667, v44661);
                    
                    //#line 708 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendValues->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      off44667, ((x10_long) ((((x10_long) ((i44675) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank))))));
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
    org::scalegraph::util::MemoryChunk<x10_long> sendValues;
    x10_int teamSize;
    x10_int teamRank;
    
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
        buf.write(this->teamSize);
        buf.write(this->teamRank);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__35* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__35>();
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
        org::scalegraph::util::MemoryChunk<x10_long> that_sendValues = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_teamSize = buf.read<x10_int>();
        x10_int that_teamRank = buf.read<x10_int>();
        org_scalegraph_graph_Graph__closure__35* this_ = new (storage) org_scalegraph_graph_Graph__closure__35(that_scatterGather, that_directed, that_srcList__, that_dstList__, that_cmask, that_rmask, that_roleMap, that_sendSrcV, that_sendDstV, that_sendValues, that_teamSize, that_teamRank);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__35(org::scalegraph::util::DistScatterGather scatterGather, x10_boolean directed, org::scalegraph::util::MemoryChunk<x10_long> srcList__, org::scalegraph::util::MemoryChunk<x10_long> dstList__, x10_long cmask, x10_long rmask, org::scalegraph::util::MemoryChunk<x10_int> roleMap, org::scalegraph::util::MemoryChunk<x10_long> sendSrcV, org::scalegraph::util::MemoryChunk<x10_long> sendDstV, org::scalegraph::util::MemoryChunk<x10_long> sendValues, x10_int teamSize, x10_int teamRank) : scatterGather(scatterGather), directed(directed), srcList__(srcList__), dstList__(dstList__), cmask(cmask), rmask(rmask), roleMap(roleMap), sendSrcV(sendSrcV), sendDstV(sendDstV), sendValues(sendValues), teamSize(teamSize), teamRank(teamRank) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:670-711";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__35_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__33_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__33_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_Graph__closure__33 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > >::itable<org_scalegraph_graph_Graph__closure__33> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > __apply() {
        
        //#line 629 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
        
        //#line 630 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistScatterGather scatterGather = org::scalegraph::util::DistScatterGather::_make(team_);
        
        //#line 631 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> srcList__ = srcList_->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 632 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> dstList__ = dstList_->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 633 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::IdStruct ids = dist2d->org::scalegraph::util::Dist2D::getIds(
                                                     vi->FMGL(numberOfVertices),
                                                     org::scalegraph::graph::Graph::getLocalNumberOfVertices(
                                                       vi,
                                                       x10aux::nullCheck(x10aux::nullCheck(team_)->role())->x10::array::Array<x10_int>::__apply(
                                                         ((x10_int)0))),
                                                     transpose);
        
        //#line 635 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> roleMap =
          org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (x10aux::nullCheck(dist2d->org::scalegraph::util::Dist2D::allTeam())->size())), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 636 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10::lang::Place>* places = x10aux::nullCheck(dist2d->org::scalegraph::util::Dist2D::allTeam())->places();
        
        //#line 637 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
        {
            x10::lang::Iterator<x10::array::Point*>* id44335;
            for (
                 //#line 637 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                 id44335 = x10aux::nullCheck(places)->FMGL(region)->iterator();
                 x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id44335));
                 ) {
                
                //#line 637 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::array::Point* id33 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id44335));
                
                //#line 637 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int i = x10aux::nullCheck(id33)->x10::array::Point::__apply(
                              ((x10_int)0));
                
                //#line 638 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                roleMap->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                  i, x10aux::nullCheck(x10aux::nullCheck(team_)->role(
                                         x10aux::nullCheck(places)->x10::array::Array<x10::lang::Place>::__apply(
                                           i)))->x10::array::Array<x10_int>::__apply(
                       ((x10_int)0)));
            }
        }
        
        //#line 640 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long rmask = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (ids->
                                                                                    FMGL(lgr)))))) - (((x10_long) (((x10_int)1))))));
        
        //#line 641 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long cmask = ((x10_long) ((((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (((x10_int) ((ids->
                                                                                                               FMGL(lgc)) + (ids->
                                                                                                                               FMGL(lgr))))))))) - (((x10_long) (((x10_int)1))))))) - (rmask)));
        
        //#line 643 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                     FMGL(id), ((x10_int)0))))
        {
            
            //#line 643 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
              x10aux::makeStringLit("start graph construction"));
        }
        
        //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::iter(srcList__->org::scalegraph::util::MemoryChunk<x10_long>::range(),
                                              reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_graph_Graph__closure__34)))org_scalegraph_graph_Graph__closure__34(scatterGather, directed, srcList__, dstList__, cmask, rmask, roleMap))));
        
        //#line 662 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        scatterGather->org::scalegraph::util::DistScatterGather::sum();
        
        //#line 663 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                     FMGL(id), ((x10_int)0))))
        {
            
            //#line 663 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
              x10aux::makeStringLit("count edge finished"));
        }
        
        //#line 664 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_int teamRank = x10aux::nullCheck(x10aux::nullCheck(team_)->role())->x10::array::Array<x10_int>::__apply(
                             ((x10_int)0));
        
        //#line 665 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_int teamSize = x10aux::nullCheck(team_)->size();
        
        //#line 666 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_int sendCount = scatterGather->org::scalegraph::util::DistScatterGather::sendCount();
        
        //#line 667 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> sendSrcV =
          org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (sendCount)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 668 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> sendDstV =
          org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (sendCount)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 669 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> sendValues =
          org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (sendCount)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 670 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::iter(srcList__->org::scalegraph::util::MemoryChunk<x10_long>::range(),
                                              reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_graph_Graph__closure__35)))org_scalegraph_graph_Graph__closure__35(scatterGather, directed, srcList__, dstList__, cmask, rmask, roleMap, sendSrcV, sendDstV, sendValues, teamSize, teamRank))));
        
        //#line 712 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                     FMGL(id), ((x10_int)0))))
        {
            
            //#line 712 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
              x10aux::makeStringLit("complete creating send data"));
        }
        
        //#line 713 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> recvSrcV =
          scatterGather->scatter<x10_long >(sendSrcV);
        
        //#line 713 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        sendSrcV->org::scalegraph::util::MemoryChunk<x10_long>::del();
        
        //#line 714 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> recvDstV =
          scatterGather->scatter<x10_long >(sendDstV);
        
        //#line 714 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        sendDstV->org::scalegraph::util::MemoryChunk<x10_long>::del();
        
        //#line 715 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> recvValues =
          scatterGather->scatter<x10_long >(sendValues);
        
        //#line 715 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        sendValues->org::scalegraph::util::MemoryChunk<x10_long>::del();
        
        //#line 716 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                     FMGL(id), ((x10_int)0))))
        {
            
            //#line 716 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
              x10aux::makeStringLit("alltoall finished"));
        }
        
        //#line 717 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> >::_make(ids,
                                                                                                                                                 org::scalegraph::blas::SparseMatrix<x10_long>::_make(recvSrcV,
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
        org_scalegraph_graph_Graph__closure__33* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__33>();
        buf.record_reference(storage);
        x10::util::Team* that_team_ = buf.read<x10::util::Team*>();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_dstList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::Dist2D that_dist2d = buf.read<org::scalegraph::util::Dist2D>();
        org::scalegraph::graph::Graph__VertexInfo that_vi = buf.read<org::scalegraph::graph::Graph__VertexInfo>();
        x10_boolean that_transpose = buf.read<x10_boolean>();
        x10_boolean that_directed = buf.read<x10_boolean>();
        org_scalegraph_graph_Graph__closure__33* this_ = new (storage) org_scalegraph_graph_Graph__closure__33(that_team_, that_srcList_, that_dstList_, that_dist2d, that_vi, that_transpose, that_directed);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__33(x10::util::Team* team_, org::scalegraph::util::DistMemoryChunk<x10_long> srcList_, org::scalegraph::util::DistMemoryChunk<x10_long> dstList_, org::scalegraph::util::Dist2D dist2d, org::scalegraph::graph::Graph__VertexInfo vi, x10_boolean transpose, x10_boolean directed) : team_(team_), srcList_(srcList_), dstList_(dstList_), dist2d(dist2d), vi(vi), transpose(transpose), directed(directed) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:628-718";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__33_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__40_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__40_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_graph_Graph__closure__40 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_Graph__closure__40> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 876 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if (directed) {
            
            //#line 877 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i44487domain44733 = r;
            
            //#line 877 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44487min44734 = i44487domain44733->FMGL(min);
            
            //#line 877 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44487max44735 = i44487domain44733->FMGL(max);
            
            //#line 877 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
            {
                x10_long i44736;
                for (
                     //#line 877 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                     i44736 = i44487min44734; ((i44736) <= (i44487max44735));
                     
                     //#line 877 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                     i44736 = ((x10_long) ((i44736) + (((x10_long)1ll)))))
                {
                    
                    //#line 877 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long i44737 = i44736;
                    
                    //#line 878 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44731 = srcList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44737);
                    
                    //#line 879 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44732 = dstList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44737);
                    
                    //#line 880 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendSrcV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      i44737, v44731);
                    
                    //#line 881 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendDstV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      i44737, v44732);
                    
                    //#line 882 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendIndexes->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      i44737, ((x10_long) ((((x10_long) ((i44737) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank))))));
                }
            }
            
        } else {
            
            //#line 886 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i44504domain44740 = r;
            
            //#line 886 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44504min44741 = i44504domain44740->
                                        FMGL(min);
            
            //#line 886 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long i44504max44742 = i44504domain44740->
                                        FMGL(max);
            
            //#line 886 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
            {
                x10_long i44743;
                for (
                     //#line 886 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                     i44743 = i44504min44741; ((i44743) <= (i44504max44742));
                     
                     //#line 886 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                     i44743 = ((x10_long) ((i44743) + (((x10_long)1ll)))))
                {
                    
                    //#line 886 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long i44744 = i44743;
                    
                    //#line 887 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44738 = srcList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44744);
                    
                    //#line 888 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10_long v44739 = dstList__->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        i44744);
                    
                    //#line 889 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendSrcV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      ((x10_long) ((((x10_long) ((i44744) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)0)))))),
                      v44738);
                    
                    //#line 890 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendDstV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      ((x10_long) ((((x10_long) ((i44744) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)0)))))),
                      v44739);
                    
                    //#line 891 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendIndexes->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      ((x10_long) ((((x10_long) ((i44744) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)0)))))),
                      ((x10_long) ((((x10_long) ((i44744) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank))))));
                    
                    //#line 892 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendSrcV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      ((x10_long) ((((x10_long) ((i44744) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)1)))))),
                      v44739);
                    
                    //#line 893 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendDstV->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      ((x10_long) ((((x10_long) ((i44744) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)1)))))),
                      v44738);
                    
                    //#line 894 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    sendIndexes->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      ((x10_long) ((((x10_long) ((i44744) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)1)))))),
                      ((x10_long) ((((x10_long) ((i44744) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRank))))));
                }
            }
            
        }
        
    }
    
    // captured environment
    x10_boolean directed;
    org::scalegraph::util::MemoryChunk<x10_long> srcList__;
    org::scalegraph::util::MemoryChunk<x10_long> dstList__;
    org::scalegraph::util::MemoryChunk<x10_long> sendSrcV;
    org::scalegraph::util::MemoryChunk<x10_long> sendDstV;
    org::scalegraph::util::MemoryChunk<x10_long> sendIndexes;
    x10_int teamSize;
    x10_int teamRank;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->directed);
        buf.write(this->srcList__);
        buf.write(this->dstList__);
        buf.write(this->sendSrcV);
        buf.write(this->sendDstV);
        buf.write(this->sendIndexes);
        buf.write(this->teamSize);
        buf.write(this->teamRank);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_Graph__closure__40* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__40>();
        buf.record_reference(storage);
        x10_boolean that_directed = buf.read<x10_boolean>();
        org::scalegraph::util::MemoryChunk<x10_long> that_srcList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_dstList__ = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendSrcV = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendDstV = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_sendIndexes = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_teamSize = buf.read<x10_int>();
        x10_int that_teamRank = buf.read<x10_int>();
        org_scalegraph_graph_Graph__closure__40* this_ = new (storage) org_scalegraph_graph_Graph__closure__40(that_directed, that_srcList__, that_dstList__, that_sendSrcV, that_sendDstV, that_sendIndexes, that_teamSize, that_teamRank);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__40(x10_boolean directed, org::scalegraph::util::MemoryChunk<x10_long> srcList__, org::scalegraph::util::MemoryChunk<x10_long> dstList__, org::scalegraph::util::MemoryChunk<x10_long> sendSrcV, org::scalegraph::util::MemoryChunk<x10_long> sendDstV, org::scalegraph::util::MemoryChunk<x10_long> sendIndexes, x10_int teamSize, x10_int teamRank) : directed(directed), srcList__(srcList__), dstList__(dstList__), sendSrcV(sendSrcV), sendDstV(sendDstV), sendIndexes(sendIndexes), teamSize(teamSize), teamRank(teamRank) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:875-897";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__40_CLOSURE
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
        
        //#line 922 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Try_c
        try {
            
            //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck((ret)->__apply())->x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >::__set(
              ref);
        }
        catch (x10::lang::CheckedThrowable* __exc227) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc227);
                {
                    
                    //#line 922 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::wrapAtChecked(reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__0__));
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
        org_scalegraph_graph_Graph__closure__41* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__41>();
        buf.record_reference(storage);
        x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > that_ret = buf.read<x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > >();
        x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > that_ref = buf.read<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >();
        org_scalegraph_graph_Graph__closure__41* this_ = new (storage) org_scalegraph_graph_Graph__closure__41(that_ret, that_ref);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__41(x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > ret, x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > ref) : ret(ret), ref(ref) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:922-924";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__41_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__39_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__39_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_Graph__closure__39 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__39> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 865 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Try_c
        try {
            
            //#line 866 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> srcList__ = srcList_->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            
            //#line 867 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> dstList__ = dstList_->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            
            //#line 868 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long numEdges = srcList__->org::scalegraph::util::MemoryChunk<x10_long>::size();
            
            //#line 869 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_long sendCount = directed ? (numEdges) : (((x10_long) ((numEdges) * (((x10_long) (((x10_int)2)))))));
            
            //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> sendSrcV = org::scalegraph::util::MemoryChunk<x10_long >::_make(sendCount, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 871 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> sendDstV = org::scalegraph::util::MemoryChunk<x10_long >::_make(sendCount, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 872 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> sendIndexes = org::scalegraph::util::MemoryChunk<x10_long >::_make(sendCount, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 873 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int teamSize = x10aux::nullCheck(team_)->size();
            
            //#line 874 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int teamRank = x10aux::nullCheck(x10aux::nullCheck(team_)->role())->x10::array::Array<x10_int>::__apply(
                                 ((x10_int)0));
            
            //#line 875 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::iter(srcList__->org::scalegraph::util::MemoryChunk<x10_long>::range(),
                                                  reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_graph_Graph__closure__40)))org_scalegraph_graph_Graph__closure__40(directed, srcList__, dstList__, sendSrcV, sendDstV, sendIndexes, teamSize, teamRank))));
            
            //#line 899 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Team2 team2 = org::scalegraph::util::Team2::_make(team_);
            
            //#line 901 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> sendNumEdges =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 902 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            sendNumEdges->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              ((x10_int)0), ((x10_int) (sendSrcV->org::scalegraph::util::MemoryChunk<x10_long>::size())));
            
            //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(place, x10::lang::Place::_make(x10aux::here))))
            {
                
                //#line 904 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (x10aux::nullCheck(team_)->size())), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 905 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> offsets =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int) ((x10aux::nullCheck(team_)->size()) + (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 906 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gather<x10_int >(root, sendNumEdges,
                                        counts);
                
                //#line 908 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                offsets->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                  ((x10_int)0), ((x10_int)0));
                
                //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i44521domain44745 = counts->org::scalegraph::util::MemoryChunk<x10_int>::range();
                
                //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i44521min44746 = i44521domain44745->
                                            FMGL(min);
                
                //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_long i44521max44747 = i44521domain44745->
                                            FMGL(max);
                
                //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
                {
                    x10_long i44748;
                    for (
                         //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                         i44748 = i44521min44746; ((i44748) <= (i44521max44747));
                         
                         //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                         i44748 = ((x10_long) ((i44748) + (((x10_long)1ll)))))
                    {
                        
                        //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                        x10_long i44749 = i44748;
                        
                        //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        offsets->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                          ((x10_long) ((i44749) + (((x10_long) (((x10_int)1)))))),
                          ((x10_int) ((offsets->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                         i44749)) + (counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                       i44749)))));
                    }
                }
                
                //#line 910 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> recvSrcV =
                  org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (offsets->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                      x10aux::nullCheck(team_)->size()))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 911 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> recvDstV =
                  org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (offsets->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                      x10aux::nullCheck(team_)->size()))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 912 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> recvIndexes =
                  org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (offsets->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                      x10aux::nullCheck(team_)->size()))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 913 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gatherv<x10_long >(root, sendSrcV,
                                          recvSrcV, counts,
                                          offsets);
                
                //#line 914 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gatherv<x10_long >(root, sendDstV,
                                          recvDstV, counts,
                                          offsets);
                
                //#line 915 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gatherv<x10_long >(root, sendIndexes,
                                          recvIndexes, counts,
                                          offsets);
                
                //#line 917 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int lgl = 63 - __builtin_clzl(((saved_this->
                                                      FMGL(numberOfVertices)) << 1) - 1);
                
                //#line 918 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::blas::SparseMatrix<x10_long> sparseMatrix =
                  org::scalegraph::blas::SparseMatrix<x10_long>::_make(recvSrcV,
                                                                       recvDstV,
                                                                       recvIndexes,
                                                                       lgl,
                                                                       transpose);
                
                //#line 921 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > ref =
                  x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* >::_make(x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >::_make(sparseMatrix));
                {
                    
                    //#line 922 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::runAt(x10::lang::Place::place((ret)->location),
                                              reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__41)))org_scalegraph_graph_Graph__closure__41(ret, ref))),
                                              x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
                }
            } else {
                
                //#line 927 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> nullInt =
                  org::scalegraph::util::MemoryChunk<void>::getNull<x10_int >();
                
                //#line 928 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> nullLong =
                  org::scalegraph::util::MemoryChunk<void>::getNull<x10_long >();
                
                //#line 929 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gather<x10_int >(root, sendNumEdges,
                                        nullInt);
                
                //#line 930 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gatherv<x10_long >(root, sendSrcV,
                                          nullLong, nullInt,
                                          nullInt);
                
                //#line 931 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gatherv<x10_long >(root, sendDstV,
                                          nullLong, nullInt,
                                          nullInt);
                
                //#line 932 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                team2->gatherv<x10_long >(root, sendIndexes,
                                          nullLong, nullInt,
                                          nullInt);
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc228) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc228);
                {
                    
                    //#line 936 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
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
        org_scalegraph_graph_Graph__closure__39* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__39>();
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
        org_scalegraph_graph_Graph__closure__39* this_ = new (storage) org_scalegraph_graph_Graph__closure__39(that_srcList_, that_dstList_, that_directed, that_team_, that_place, that_root, that_saved_this, that_transpose, that_ret);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__39(org::scalegraph::util::DistMemoryChunk<x10_long> srcList_, org::scalegraph::util::DistMemoryChunk<x10_long> dstList_, x10_boolean directed, x10::util::Team* team_, x10::lang::Place place, x10_int root, org::scalegraph::graph::Graph* saved_this, x10_boolean transpose, x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > ret) : srcList_(srcList_), dstList_(dstList_), directed(directed), team_(team_), place(place), root(root), saved_this(saved_this), transpose(transpose), ret(ret) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:864-938";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__39_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__45_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__45_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_Graph__closure__45 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__45> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 1023 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Try_c
        try {
            
            //#line 1024 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            srcList_->org::scalegraph::util::DistMemoryChunk<x10_long>::del();
            
            //#line 1025 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            dstList_->org::scalegraph::util::DistMemoryChunk<x10_long>::del();
            
            //#line 1027 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
            {
                x10::util::ListIterator<x10::lang::Any*>* att44542;
                for (
                     //#line 1027 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                     att44542 = reinterpret_cast<x10::util::ListIterator<x10::lang::Any*>*>(attlist->iterator());
                     x10::util::ListIterator<x10::lang::Any*>::hasNext(x10aux::nullCheck(att44542));
                     ) {
                    
                    //#line 1027 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Any* att = x10::util::ListIterator<x10::lang::Any*>::next(x10aux::nullCheck(att44542));
                    
                    //#line 1028 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_byte> >(att))
                    {
                        
                        //#line 1029 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_byte> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_byte>::del();
                    } else 
                    //#line 1030 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_short> >(att))
                    {
                        
                        //#line 1031 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_short> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_short>::del();
                    } else 
                    //#line 1032 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_int> >(att))
                    {
                        
                        //#line 1033 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_int> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_int>::del();
                    } else 
                    //#line 1034 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_long> >(att))
                    {
                        
                        //#line 1035 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_long> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_long>::del();
                    } else 
                    //#line 1036 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_float> >(att))
                    {
                        
                        //#line 1037 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_float> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_float>::del();
                    } else 
                    //#line 1038 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_double> >(att))
                    {
                        
                        //#line 1039 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_double> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_double>::del();
                    } else 
                    //#line 1040 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_char> >(att))
                    {
                        
                        //#line 1041 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_char> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_char>::del();
                    } else 
                    //#line 1042 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10::lang::String*> >(att))
                    {
                        
                        //#line 1043 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10::lang::String*> >(att)))->org::scalegraph::util::DistMemoryChunk<x10::lang::String*>::del();
                    } else 
                    //#line 1044 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<x10_boolean> >(att))
                    {
                        
                        //#line 1045 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_boolean> >(att)))->org::scalegraph::util::DistMemoryChunk<x10_boolean>::del();
                    } else {
                        
                        //#line 1047 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::UnsupportedOperationException::_make(x10::lang::String::__plus(x10aux::makeStringLit("Type: "), x10aux::type_name(att)))));
                    }
                    
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc233) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc233);
                {
                    
                    //#line 1051 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
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
        org_scalegraph_graph_Graph__closure__45* storage = x10aux::alloc<org_scalegraph_graph_Graph__closure__45>();
        buf.record_reference(storage);
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_dstList_ = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        x10::util::ArrayList<x10::lang::Any*>* that_attlist = buf.read<x10::util::ArrayList<x10::lang::Any*>*>();
        org_scalegraph_graph_Graph__closure__45* this_ = new (storage) org_scalegraph_graph_Graph__closure__45(that_srcList_, that_dstList_, that_attlist);
        return this_;
    }
    
    org_scalegraph_graph_Graph__closure__45(org::scalegraph::util::DistMemoryChunk<x10_long> srcList_, org::scalegraph::util::DistMemoryChunk<x10_long> dstList_, x10::util::ArrayList<x10::lang::Any*>* attlist) : srcList_(srcList_), dstList_(dstList_), attlist(attlist) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10:1022-1053";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPH__CLOSURE__45_CLOSURE

//#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.PropertyDecl_c
 /* static type EDGE = org.scalegraph.util.tuple.Tuple2[x10.lang.Long, x10.lang.Long]; */ 
 /* static type VT_PLH = x10.lang.PlaceLocalHandle[org.scalegraph.graph.VertexTranslatorBase]; */ 

//#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::graph::Graph::numberOfVertices() {
    
    //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->FMGL(numberOfVertices);
    
}

//#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::graph::Graph::numberOfEdges() {
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->FMGL(numberOfEdges);
    
}

//#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10::util::Team* org::scalegraph::graph::Graph::team() {
    
    //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->FMGL(team);
    
}

//#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::DistMemoryChunk<x10_long> org::scalegraph::graph::Graph::source(
  ) {
    
    //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->FMGL(srcList);
    
}

//#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::DistMemoryChunk<x10_long> org::scalegraph::graph::Graph::target(
  ) {
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->FMGL(dstList);
    
}

//#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >
  org::scalegraph::graph::Graph::createConverter(x10::util::Team* team,
                                                 x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>* create) {
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >::_make(x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL),
                                                                                                                                                     x10::lang::PlaceLocalHandle<void>::makeFlat<org::scalegraph::graph::VertexTranslatorBase* >(
                                                                                                                                                       x10aux::nullCheck(team)->placeGroup(),
                                                                                                                                                       create));
    
}

//#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::Graph::_constructor(x10::util::Team* team_,
                                                 x10_int vertexType_,
                                                 x10_boolean useTranslator) {
    
    //#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
    ;
    
    //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.AssignPropertyCall_c
    FMGL(vertexType) = vertexType_;
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::graph::Graph::__fieldInitializers42979();
    
    //#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if (!(x10aux::nullCheck(team_)->equals(x10::util::Team::
                                             FMGL(WORLD__get)())))
    {
        
        //#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("Please, input Team.WORLD as the team parameter."))));
    }
    
    //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(team) = team_;
    
    //#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(srcList) = org::scalegraph::util::DistMemoryChunk<x10_long>::_make(x10aux::nullCheck(team_)->placeGroup(),
                                                                                  reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_Graph__closure__4)))org_scalegraph_graph_Graph__closure__4())));
    
    //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(dstList) = org::scalegraph::util::DistMemoryChunk<x10_long>::_make(x10aux::nullCheck(team_)->placeGroup(),
                                                                                  reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_Graph__closure__5)))org_scalegraph_graph_Graph__closure__5())));
    
    //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> > translator;
    
    //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Switch_c
    switch (this->FMGL(vertexType)) {
        
        //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case 5/*org::scalegraph::graph::Graph__VertexType::
                  FMGL(Long__get)()*/: ;
        {
            
            //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (useTranslator) {
                
                //#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                translator = org::scalegraph::graph::Graph::createVertexTranslator<x10_long >(
                               team_);
            } else {
                
                //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                translator = org::scalegraph::graph::Graph::createConverter(
                               this->FMGL(team), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >(sizeof(org_scalegraph_graph_Graph__closure__6)))org_scalegraph_graph_Graph__closure__6(team_))));
            }
            
            //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
            break;
        }
        //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case 7/*org::scalegraph::graph::Graph__VertexType::
                  FMGL(Double__get)()*/: ;
        {
            
            //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (useTranslator) {
                
                //#line 126 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                translator = org::scalegraph::graph::Graph::createVertexTranslator<x10_double >(
                               this->FMGL(team));
            } else {
                
                //#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                translator = org::scalegraph::graph::Graph::createConverter(
                               this->FMGL(team), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::graph::VertexTranslatorBase*> >(sizeof(org_scalegraph_graph_Graph__closure__8)))org_scalegraph_graph_Graph__closure__8(team_))));
            }
            
            //#line 130 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
            break;
        }
        //#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case 13/*org::scalegraph::graph::Graph__VertexType::
                   FMGL(String__get)()*/: ;
        {
            
            //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if (useTranslator) {
                
                //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
                translator = org::scalegraph::graph::Graph::createVertexTranslator<org::scalegraph::util::SString >(
                               this->FMGL(team));
            } else {
                
                //#line 135 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make()));
            }
            
            //#line 136 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
            break;
        }
        //#line 137 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        default: ;
        {
            
            //#line 138 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("Edge type not supported"))));
        }
    }
    
    //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(vertexTranslator) = translator->org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >::get2();
    
    //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if (useTranslator) {
        
        //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10::lang::Any* vertexNameAtt = translator->org::scalegraph::util::tuple::Tuple2<x10::lang::Any*, x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> >::get1();
        
        //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
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



//#line 148 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::make(
  org::scalegraph::io::NamedDistData* edgeData) {
    
    //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return org::scalegraph::graph::Graph::make(edgeData, x10aux::class_cast_unchecked<org::scalegraph::io::NamedDistData*>(X10_NULL),
                                               false);
    
}

//#line 151 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::make(
  org::scalegraph::io::NamedDistData* edgeData, x10_boolean renumbering) {
    
    //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return org::scalegraph::graph::Graph::make(edgeData, x10aux::class_cast_unchecked<org::scalegraph::io::NamedDistData*>(X10_NULL),
                                               renumbering);
    
}

//#line 154 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::make(
  org::scalegraph::io::NamedDistData* edgeData, org::scalegraph::io::NamedDistData* vertexData,
  x10_boolean renumbering) {
    
    //#line 155 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_int srcIdx = x10aux::nullCheck(edgeData)->nameToIndex(
                       org::scalegraph::util::SString::__implicit_convert(
                         org::scalegraph::io::ID::FMGL(NAME_SOURCE__get)()));
    
    //#line 156 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_int dstIdx = x10aux::nullCheck(edgeData)->nameToIndex(
                       org::scalegraph::util::SString::__implicit_convert(
                         org::scalegraph::io::ID::FMGL(NAME_TARGET__get)()));
    
    //#line 157 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_int vertexType = x10aux::nullCheck(x10aux::nullCheck(edgeData)->typeId())->x10::array::Array<x10_int>::__apply(
                           srcIdx);
    
    //#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(vertexType,
                                                   x10aux::nullCheck(x10aux::nullCheck(edgeData)->typeId())->x10::array::Array<x10_int>::__apply(
                                                     dstIdx))));
    #endif//NO_ASSERTIONS
    
    //#line 159 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph* g = org::scalegraph::graph::Graph::_make(x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                                                                            vertexType,
                                                                            renumbering);
    
    //#line 160 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::lang::Any* src = x10aux::nullCheck(x10aux::nullCheck(edgeData)->data())->x10::array::Array<x10::lang::Any*>::__apply(
                            srcIdx);
    
    //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::lang::Any* dst = x10aux::nullCheck(x10aux::nullCheck(edgeData)->data())->x10::array::Array<x10::lang::Any*>::__apply(
                            dstIdx);
    
    //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Switch_c
    switch (vertexType) {
        
        //#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case 5/*org::scalegraph::id::Type::FMGL(Long__get)()*/: ;
        {
            
            //#line 164 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            g->org::scalegraph::graph::Graph::addEdges(org::scalegraph::graph::EdgeList<x10_long>::_make(x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_long> >(src),
                                                                                                         x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_long> >(dst)));
            
            //#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
            break;
        }
        //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case 7/*org::scalegraph::id::Type::FMGL(Double__get)()*/: ;
        {
            
            //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            g->org::scalegraph::graph::Graph::addEdges(org::scalegraph::graph::EdgeList<x10_double>::_make(x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_double> >(src),
                                                                                                           x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<x10_double> >(dst)));
            
            //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
            break;
        }
        //#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case 13/*org::scalegraph::id::Type::FMGL(String__get)()*/: ;
        {
            
            //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            g->org::scalegraph::graph::Graph::addEdges(org::scalegraph::graph::EdgeList<org::scalegraph::util::SString>::_make(x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<org::scalegraph::util::SString> >(src),
                                                                                                                               x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<org::scalegraph::util::SString> >(dst)));
            
            //#line 171 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
            break;
        }
        //#line 172 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        default: ;
        {
            
            //#line 173 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10aux::makeStringLit("Not supported edge type"))));
        }
    }
    
    //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::array::Point*>* id44319;
        for (
             //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
             id44319 = x10aux::nullCheck(x10aux::nullCheck(edgeData)->data())->
                         FMGL(region)->iterator(); x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id44319));
             ) {
            
            //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* id19 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id44319));
            
            //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10_int i = x10aux::nullCheck(id19)->x10::array::Point::__apply(
                          ((x10_int)0));
            
            //#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(i, srcIdx)) || (x10aux::struct_equals(i,
                                                                             dstIdx)))
            {
                
                //#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Branch_c
                continue;
            }
            
            //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::graph::AttributeProxy* proxy =
              org::scalegraph::graph::AttributeProxy::make(
                x10aux::nullCheck(x10aux::nullCheck(edgeData)->typeId())->x10::array::Array<x10_int>::__apply(
                  i));
            
            //#line 178 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* name = x10aux::nullCheck(x10aux::nullCheck(edgeData)->name())->x10::array::Array<x10::lang::String*>::__apply(
                                        i);
            
            //#line 179 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::Any* data = x10aux::nullCheck(x10aux::nullCheck(edgeData)->data())->x10::array::Array<x10::lang::Any*>::__apply(
                                     i);
            
            //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            proxy->setEdgeAttribute(g, name, data);
        }
    }
    
    //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(vertexData, X10_NULL))) {
        
        //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
        {
            x10::lang::Iterator<x10::array::Point*>* id44327;
            for (
                 //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                 id44327 = x10aux::nullCheck(x10aux::nullCheck(vertexData)->data())->
                             FMGL(region)->iterator(); x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id44327));
                 ) {
                
                //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::array::Point* id20 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id44327));
                
                //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10_int i = x10aux::nullCheck(id20)->x10::array::Point::__apply(
                              ((x10_int)0));
                
                //#line 184 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::graph::AttributeProxy* proxy =
                  org::scalegraph::graph::AttributeProxy::make(
                    x10aux::nullCheck(x10aux::nullCheck(vertexData)->typeId())->x10::array::Array<x10_int>::__apply(
                      i));
                
                //#line 185 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::String* name = x10aux::nullCheck(x10aux::nullCheck(vertexData)->name())->x10::array::Array<x10::lang::String*>::__apply(
                                            i);
                
                //#line 186 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                x10::lang::Any* data = x10aux::nullCheck(x10aux::nullCheck(vertexData)->data())->x10::array::Array<x10::lang::Any*>::__apply(
                                         i);
                
                //#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
                proxy->setVertexAttribute(g, name, data);
            }
        }
        
    }
    
    //#line 190 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return g;
    
}

//#line 193 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::make(
  org::scalegraph::graph::EdgeList<x10_long> edges) {
    
    //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph* g = org::scalegraph::graph::Graph::_make(x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                                                                            org::scalegraph::graph::Graph__VertexType::
                                                                              FMGL(Long__get)(),
                                                                            false);
    
    //#line 195 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    g->org::scalegraph::graph::Graph::addEdges(edges);
    
    //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(g->FMGL(team))->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__10)))org_scalegraph_graph_Graph__closure__10(edges))));
    
    //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return g;
    
}

//#line 200 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::make(
  org::scalegraph::graph::EdgeList<x10_double> edges) {
    
    //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph* g = org::scalegraph::graph::Graph::_make(x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                                                                            org::scalegraph::graph::Graph__VertexType::
                                                                              FMGL(Double__get)(),
                                                                            false);
    
    //#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    g->org::scalegraph::graph::Graph::addEdges(edges);
    
    //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(g->FMGL(team))->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__11)))org_scalegraph_graph_Graph__closure__11(edges))));
    
    //#line 204 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return g;
    
}

//#line 207 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::makeWithTranslator(
  org::scalegraph::graph::EdgeList<x10_long> edges) {
    
    //#line 208 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph* g = org::scalegraph::graph::Graph::_make(x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                                                                            org::scalegraph::graph::Graph__VertexType::
                                                                              FMGL(Long__get)(),
                                                                            true);
    
    //#line 209 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    g->org::scalegraph::graph::Graph::addEdges(edges);
    
    //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(g->FMGL(team))->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__12)))org_scalegraph_graph_Graph__closure__12(edges))));
    
    //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return g;
    
}

//#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::makeWithTranslator(
  org::scalegraph::graph::EdgeList<x10_double> edges) {
    
    //#line 215 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph* g = org::scalegraph::graph::Graph::_make(x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                                                                            org::scalegraph::graph::Graph__VertexType::
                                                                              FMGL(Double__get)(),
                                                                            true);
    
    //#line 216 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    g->org::scalegraph::graph::Graph::addEdges(edges);
    
    //#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(g->FMGL(team))->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__13)))org_scalegraph_graph_Graph__closure__13(edges))));
    
    //#line 218 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return g;
    
}

//#line 221 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::makeWithTranslator(
  org::scalegraph::graph::EdgeList<org::scalegraph::util::SString> edges) {
    
    //#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph* g = org::scalegraph::graph::Graph::_make(x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                                                                            org::scalegraph::graph::Graph__VertexType::
                                                                              FMGL(String__get)(),
                                                                            true);
    
    //#line 223 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    g->org::scalegraph::graph::Graph::addEdges(edges);
    
    //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(g->FMGL(team))->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__14)))org_scalegraph_graph_Graph__closure__14(edges))));
    
    //#line 225 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return g;
    
}

//#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 242 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 251 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 257 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 260 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::Graph::innerAddEdges(x10::util::Team* team_,
                                                  x10_long maxVertexID,
                                                  x10::lang::GlobalRef<org::scalegraph::graph::Graph* > ref,
                                                  org::scalegraph::util::DistMemoryChunk<x10_long> srcList,
                                                  org::scalegraph::util::DistMemoryChunk<x10_long> dstList,
                                                  org::scalegraph::util::MemoryChunk<x10_long> tlSrcs,
                                                  org::scalegraph::util::MemoryChunk<x10_long> tlDsts) {
    
    //#line 265 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply()->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   dstList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply()->org::scalegraph::util::MemoryChunk<x10_long>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 266 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(tlSrcs->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   tlDsts->org::scalegraph::util::MemoryChunk<x10_long>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 268 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> srcList_ =
      srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
    
    //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> dstList_ =
      dstList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
    
    //#line 271 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_long globalNumOfEdges = x10aux::nullCheck(team_)->reduce(
                                  x10aux::nullCheck(x10aux::nullCheck(team_)->role())->x10::array::Array<x10_int>::__apply(
                                    ((x10_int)0)), ((x10_int)0),
                                  tlSrcs->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                  x10::util::Team::FMGL(ADD__get)());
    
    //#line 272 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                               x10::lang::Place::place((ref)->location))))
    {
        
        //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::Graph* g = x10::lang::GlobalRef__LocalEval::getLocalOrCopy<org::scalegraph::graph::Graph* >(ref);
        
        //#line 274 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(g)->FMGL(numberOfVertices) = x10::lang::Math::max(
                                                         ((x10_long) ((maxVertexID) + (((x10_long) (((x10_int)1)))))),
                                                         x10aux::nullCheck(g)->
                                                           FMGL(numberOfVertices));
        
        //#line 275 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::Graph* x44619 = g;
        
        //#line 275 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long y44620 = globalNumOfEdges;
        
        //#line 275 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(x44619)->FMGL(numberOfEdges) = ((x10_long) ((x10aux::nullCheck(x44619)->
                                                                         FMGL(numberOfEdges)) + (y44620)));
    }
    
    //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(srcList_->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                               ((x10_long)0ll)))) {
        
        //#line 279 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__set(
          tlSrcs);
        
        //#line 280 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        dstList->org::scalegraph::util::DistMemoryChunk<x10_long>::__set(
          tlDsts);
    } else {
        
        //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                   x10::lang::Place::place((ref)->location))))
        {
            
            //#line 284 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("WARNING: AddEdges if invoked while there are existing edges on the Graph object. This operation is slow.")));
        }
        
        //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_long>* allocator =
          org::scalegraph::util::GrowableMemory<x10_long>::_make();
        
        //#line 287 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        allocator->org::scalegraph::util::GrowableMemory<x10_long>::setMemory(
          srcList_);
        
        //#line 287 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        allocator->org::scalegraph::util::GrowableMemory<x10_long>::add(
          tlSrcs);
        
        //#line 287 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__set(
          allocator->org::scalegraph::util::GrowableMemory<x10_long>::raw());
        
        //#line 288 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        allocator->org::scalegraph::util::GrowableMemory<x10_long>::setMemory(
          dstList_);
        
        //#line 288 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        allocator->org::scalegraph::util::GrowableMemory<x10_long>::add(
          tlDsts);
        
        //#line 288 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
        dstList->org::scalegraph::util::DistMemoryChunk<x10_long>::__set(
          allocator->org::scalegraph::util::GrowableMemory<x10_long>::raw());
    }
    
}

//#line 292 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 315 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::Graph::vertexTypeString(
  ) {
    
    //#line 316 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Switch_c
    switch (this->FMGL(vertexType)) {
        
        //#line 317 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case 5/*org::scalegraph::graph::Graph__VertexType::
                  FMGL(Long__get)()*/: ;
        {
            
            //#line 317 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
            return x10aux::makeStringLit("Long");
            
        }
        //#line 318 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case 7/*org::scalegraph::graph::Graph__VertexType::
                  FMGL(Double__get)()*/: ;
        {
            
            //#line 318 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
            return x10aux::makeStringLit("Double");
            
        }
        //#line 319 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        case 13/*org::scalegraph::graph::Graph__VertexType::
                   FMGL(String__get)()*/: ;
        {
            
            //#line 319 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
            return x10aux::makeStringLit("String");
            
        }
        //#line 320 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Case_c
        default: ;
        {
            
            //#line 320 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
            return x10aux::makeStringLit("Not supported type");
            
        }
    }
}

//#line 327 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::Graph::addEdges(org::scalegraph::graph::EdgeList<x10_long> edges) {
    
    //#line 328 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(this->FMGL(vertexType), org::scalegraph::graph::Graph__VertexType::
                                                          FMGL(Long__get)())))
    {
        
        //#line 329 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Vertex type does not match. "), this->org::scalegraph::graph::Graph::vertexTypeString()), x10aux::makeStringLit(" type is expected but the input is Long")))));
    }
    
    //#line 331 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    this->genericAddEdges<x10_long >(edges->FMGL(src), edges->
                                                         FMGL(dst));
}

//#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::Graph::addEdges(org::scalegraph::graph::EdgeList<x10_double> edges) {
    
    //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(this->FMGL(vertexType), org::scalegraph::graph::Graph__VertexType::
                                                          FMGL(Double__get)())))
    {
        
        //#line 339 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Vertex type does not match. "), this->org::scalegraph::graph::Graph::vertexTypeString()), x10aux::makeStringLit(" type is expected but the input is Long")))));
    }
    
    //#line 341 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    this->genericAddEdges<x10_double >(edges->FMGL(src), edges->
                                                           FMGL(dst));
}

//#line 347 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::Graph::addEdges(org::scalegraph::graph::EdgeList<org::scalegraph::util::SString> edges) {
    
    //#line 348 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(this->FMGL(vertexType), org::scalegraph::graph::Graph__VertexType::
                                                          FMGL(String__get)())))
    {
        
        //#line 349 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Vertex type does not match. "), this->org::scalegraph::graph::Graph::vertexTypeString()), x10aux::makeStringLit(" type is expected but the input is Long")))));
    }
    
    //#line 351 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    this->genericAddEdges<org::scalegraph::util::SString >(
      edges->FMGL(src), edges->FMGL(dst));
}

//#line 359 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 363 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 400 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 458 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 468 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 472 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 476 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 494 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::graph::Graph::getLocalNumberOfVertices(
  org::scalegraph::graph::Graph__VertexInfo vi, x10_int role) {
    
    //#line 495 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::VertexTranslatorBase* vt_ = vi->
                                                          FMGL(vertexTranslator)->x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*>::__apply();
    
    //#line 496 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if (x10aux::nullCheck(vt_)->isTranslator()) {
        
        //#line 497 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return x10aux::nullCheck(vt_)->sizeOfDictionary();
        
    } else {
        
        //#line 500 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_long g = vi->FMGL(numberOfVertices);
        
        //#line 501 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
        x10_int d = vi->FMGL(numberOfPlaces);
        
        //#line 502 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return ((x10_long) ((((x10_long) ((g) / x10aux::zeroCheck(((x10_long) (d)))))) + (((((x10_long) ((g) % x10aux::zeroCheck(((x10_long) (d)))))) > (((x10_long) (role))))
          ? (((x10_long)1ll)) : (((x10_long)0ll)))));
        
    }
    
}

//#line 512 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 539 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 552 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 558 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 569 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 622 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::blas::DistSparseMatrix<x10_long> org::scalegraph::graph::Graph::createDistEdgeIndexMatrix(
  org::scalegraph::util::Dist2D dist2d, x10_boolean directed,
  x10_boolean transpose) {
    
    //#line 623 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team_ = this->FMGL(team);
    
    //#line 624 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_ =
      this->FMGL(srcList);
    
    //#line 625 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> dstList_ =
      this->FMGL(dstList);
    
    //#line 626 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph__VertexInfo vi = org::scalegraph::graph::Graph__VertexInfo::_make(this->
                                                                                                      FMGL(vertexTranslator),
                                                                                                    this->
                                                                                                      FMGL(vertexType),
                                                                                                    this->
                                                                                                      FMGL(numberOfVertices),
                                                                                                    x10aux::nullCheck(this->
                                                                                                                        FMGL(team))->size());
    
    //#line 628 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return org::scalegraph::blas::DistSparseMatrix<x10_long>::_make(dist2d,
                                                                    reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > > >(sizeof(org_scalegraph_graph_Graph__closure__33)))org_scalegraph_graph_Graph__closure__33(team_, srcList_, dstList_, dist2d, vi, transpose, directed))));
    
}

//#line 721 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 855 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* >
  org::scalegraph::graph::Graph::createSimpleEdgeIndexMatrix(
  x10::lang::Place place, x10_boolean directed, x10_boolean transpose) {
    
    //#line 857 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team_ = this->FMGL(team);
    
    //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_ =
      this->FMGL(srcList);
    
    //#line 859 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> dstList_ =
      this->FMGL(dstList);
    
    //#line 860 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_int root = x10aux::nullCheck(x10aux::nullCheck(team_)->role(
                                       place))->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    
    //#line 862 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* > ret =
      x10::lang::GlobalRef<x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >* >::_make(x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >::_make(x10aux::zeroValue<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >()));
    
    //#line 864 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team_)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__39)))org_scalegraph_graph_Graph__closure__39(srcList_, dstList_, directed, team_, place, root, this, transpose, ret))));
    
    //#line 940 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((ret)->__apply())->x10::lang::Cell<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::blas::SparseMatrix<x10_long> >* > >::__apply();
    
}

//#line 948 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 1001 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 1012 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::Graph::del() {
    
    //#line 1013 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList_ =
      this->FMGL(srcList);
    
    //#line 1014 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> dstList_ =
      this->FMGL(dstList);
    
    //#line 1015 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10::util::ArrayList<x10::lang::Any*>* attlist = x10::util::ArrayList<x10::lang::Any*>::_make();
    
    //#line 1017 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::lang::String*>* key44538;
        for (
             //#line 1017 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
             key44538 = x10::util::Set<x10::lang::String*>::iterator(x10aux::nullCheck(this->
                                                                                         FMGL(vertexAttributes)->keySet()));
             x10::lang::Iterator<x10::lang::String*>::hasNext(x10aux::nullCheck(key44538));
             ) {
            
            //#line 1017 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* key = x10::lang::Iterator<x10::lang::String*>::next(x10aux::nullCheck(key44538));
            
            //#line 1018 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            attlist->add(this->FMGL(vertexAttributes)->getOrThrow(
                           key));
        }
    }
    
    //#line 1019 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::lang::String*>* key44540;
        for (
             //#line 1019 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
             key44540 = x10::util::Set<x10::lang::String*>::iterator(x10aux::nullCheck(this->
                                                                                         FMGL(edgeAttributes)->keySet()));
             x10::lang::Iterator<x10::lang::String*>::hasNext(x10aux::nullCheck(key44540));
             ) {
            
            //#line 1019 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* key = x10::lang::Iterator<x10::lang::String*>::next(x10aux::nullCheck(key44540));
            
            //#line 1020 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
            attlist->add(this->FMGL(edgeAttributes)->getOrThrow(
                           key));
        }
    }
    
    //#line 1022 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(this->FMGL(team))->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_Graph__closure__45)))org_scalegraph_graph_Graph__closure__45(srcList_, dstList_, attlist))));
    
    //#line 1055 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numberOfVertices) = ((x10_long)0ll);
    
    //#line 1056 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numberOfEdges) = ((x10_long)0ll);
}

//#line 1059 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10::util::Set<x10::lang::String*>* org::scalegraph::graph::Graph::vertexAttributeKeys(
  ) {
    
    //#line 1059 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->FMGL(vertexAttributes)->keySet();
    
}

//#line 1060 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10::util::Set<x10::lang::String*>* org::scalegraph::graph::Graph::edgeAttributeKeys(
  ) {
    
    //#line 1060 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this->FMGL(edgeAttributes)->keySet();
    
}

//#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph* org::scalegraph::graph::Graph::org__scalegraph__graph__Graph____this__org__scalegraph__graph__Graph(
  ) {
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::Graph::__fieldInitializers42979(
  ) {
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(graphAttributes) = x10::util::HashMap<x10::lang::String*, x10::lang::Any*>::_make();
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(vertexAttributes) = x10::util::HashMap<x10::lang::String*, x10::lang::Any*>::_make();
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(edgeAttributes) = x10::util::HashMap<x10::lang::String*, x10::lang::Any*>::_make();
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numberOfVertices) = ((x10_long)0ll);
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
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

x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_Graph__closure__34>org_scalegraph_graph_Graph__closure__34::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__34::__apply, &org_scalegraph_graph_Graph__closure__34::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__34::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_graph_Graph__closure__34::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__34::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__34::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_Graph__closure__35>org_scalegraph_graph_Graph__closure__35::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__35::__apply, &org_scalegraph_graph_Graph__closure__35::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__35::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_graph_Graph__closure__35::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__35::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__35::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > >::itable<org_scalegraph_graph_Graph__closure__33>org_scalegraph_graph_Graph__closure__33::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__33::__apply, &org_scalegraph_graph_Graph__closure__33::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__33::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::tuple::Tuple2<org::scalegraph::graph::id::IdStruct, org::scalegraph::blas::SparseMatrix<x10_long> > > >, &org_scalegraph_graph_Graph__closure__33::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__33::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__33::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_graph_Graph__closure__40>org_scalegraph_graph_Graph__closure__40::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__40::__apply, &org_scalegraph_graph_Graph__closure__40::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__40::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_graph_Graph__closure__40::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__40::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__40::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__41>org_scalegraph_graph_Graph__closure__41::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__41::__apply, &org_scalegraph_graph_Graph__closure__41::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__41::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__41::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__41::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__41::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__39>org_scalegraph_graph_Graph__closure__39::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__39::__apply, &org_scalegraph_graph_Graph__closure__39::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__39::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__39::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__39::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__39::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_Graph__closure__45>org_scalegraph_graph_Graph__closure__45::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_Graph__closure__45::__apply, &org_scalegraph_graph_Graph__closure__45::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_Graph__closure__45::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_Graph__closure__45::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_Graph__closure__45::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_Graph__closure__45::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of Graph */
/*************************************************/
/*************************************************/
/* START of Graph$VertexType */
#include <org/scalegraph/graph/Graph__VertexType.h>

#include <x10/lang/Int.h>

//#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::graph::Graph__VertexType::FMGL(Long);
void org::scalegraph::graph::Graph__VertexType::FMGL(Long__do_init)() {
    FMGL(Long__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::graph::Graph__VertexType.Long");
    x10_int __var238__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)5));
    FMGL(Long) = __var238__;
    FMGL(Long__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::graph::Graph__VertexType::FMGL(Long__init)() {
    x10aux::StaticInitController::initField(&FMGL(Long__status), &FMGL(Long__do_init), &FMGL(Long__exception), "org::scalegraph::graph::Graph__VertexType.Long");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::graph::Graph__VertexType::FMGL(Long__status);
x10::lang::CheckedThrowable* org::scalegraph::graph::Graph__VertexType::FMGL(Long__exception);

//#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::graph::Graph__VertexType::FMGL(Double);
void org::scalegraph::graph::Graph__VertexType::FMGL(Double__do_init)() {
    FMGL(Double__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::graph::Graph__VertexType.Double");
    x10_int __var239__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)7));
    FMGL(Double) = __var239__;
    FMGL(Double__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::graph::Graph__VertexType::FMGL(Double__init)() {
    x10aux::StaticInitController::initField(&FMGL(Double__status), &FMGL(Double__do_init), &FMGL(Double__exception), "org::scalegraph::graph::Graph__VertexType.Double");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::graph::Graph__VertexType::FMGL(Double__status);
x10::lang::CheckedThrowable* org::scalegraph::graph::Graph__VertexType::FMGL(Double__exception);

//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::graph::Graph__VertexType::FMGL(String);
void org::scalegraph::graph::Graph__VertexType::FMGL(String__do_init)() {
    FMGL(String__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::graph::Graph__VertexType.String");
    x10_int __var240__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)13));
    FMGL(String) = __var240__;
    FMGL(String__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::graph::Graph__VertexType::FMGL(String__init)() {
    x10aux::StaticInitController::initField(&FMGL(String__status), &FMGL(String__do_init), &FMGL(String__exception), "org::scalegraph::graph::Graph__VertexType.String");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::graph::Graph__VertexType::FMGL(String__status);
x10::lang::CheckedThrowable* org::scalegraph::graph::Graph__VertexType::FMGL(String__exception);

//#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph__VertexType* org::scalegraph::graph::Graph__VertexType::org__scalegraph__graph__Graph__VertexType____this__org__scalegraph__graph__Graph__VertexType(
  ) {
    
    //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::Graph__VertexType::_constructor() {
    
    //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
    ;
    
    //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.AssignPropertyCall_c
    
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

//#line 481 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 482 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 483 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 484 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10FieldDecl_c

//#line 486 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::Graph__VertexInfo::_constructor(x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*> vertexTranslator,
                                                             x10_int vertexType,
                                                             x10_long numberOfVertices,
                                                             x10_int numberOfPlaces) {
    
    //#line 486 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": polyglot.ast.Empty_c
    ;
    
    //#line 486 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.AssignPropertyCall_c
    
    //#line 487 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(vertexTranslator) = vertexTranslator;
    
    //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(vertexType) = vertexType;
    
    //#line 489 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(numberOfVertices) = numberOfVertices;
    
    //#line 490 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10FieldAssign_c
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



//#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::Graph__VertexInfo::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::Graph__VertexInfo::toString(
  ) {
    
    //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.Graph.VertexInfo:"), x10aux::makeStringLit(" vertexTranslator=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                   FMGL(vertexTranslator)), x10aux::makeStringLit(" vertexType=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                      FMGL(vertexType)), x10aux::makeStringLit(" numberOfPlaces=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       FMGL(numberOfPlaces)), x10aux::makeStringLit(" numberOfVertices=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              FMGL(numberOfVertices));
    
}

//#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::Graph__VertexInfo::hashCode(
  ) {
    
    //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(vertexTranslator)->x10::lang::PlaceLocalHandle<org::scalegraph::graph::VertexTranslatorBase*>::hashCode())));
    
    //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(vertexType)))));
    
    //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(numberOfPlaces)))));
    
    //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(numberOfVertices)))));
    
    //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::Graph__VertexInfo::equals(
  x10::lang::Any* other) {
    
    //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::Graph__VertexInfo>(other)))
    {
        
        //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::Graph__VertexInfo::equals(
             x10aux::class_cast<org::scalegraph::graph::Graph__VertexInfo>(other));
    
}

//#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::Graph__VertexInfo::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::Graph__VertexInfo>(other)))
    {
        
        //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::Graph__VertexInfo::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::Graph__VertexInfo>(other));
    
}

//#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c

//#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10MethodDecl_c
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
