/*************************************************/
/* START of TwittSimTest */
#include <TwittSimTest.h>

#include <x10/array/Array.h>
#include <x10/lang/String.h>
#include <org/scalegraph/Config.h>
#include <x10/util/Team.h>
#include <org/scalegraph/util/Dist2D.h>
#include <x10/lang/Int.h>
#include <TwitterSimulator1.h>
#include <org/scalegraph/util/random/Random.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/EdgeList.h>
#include <org/scalegraph/graph/GraphGenerator.h>
#include <org/scalegraph/graph/Graph.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/lang/Double.h>
#include <org/scalegraph/blas/DistSparseMatrix.h>
#include <org/scalegraph/xpregel/XPregelGraph.h>
#include <org/simulator/twitter/TwitterUser.h>
#include <x10/lang/VoidFun_0_2.h>
#include <org/scalegraph/xpregel/VertexContext.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Fun_0_1.h>
#include <org/scalegraph/util/MathAppend.h>
#include <x10/lang/Fun_0_2.h>
#ifndef TWITTSIMTEST__CLOSURE__1_CLOSURE
#define TWITTSIMTEST__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class TwittSimTest__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>*, org::scalegraph::util::MemoryChunk<x10_double> >::itable<TwittSimTest__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>* ctx, org::scalegraph::util::MemoryChunk<x10_double> messages) {
        
        //#line 55 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
        x10_double value;
        
        //#line 56 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> following;
        
        //#line 58 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>::superstep(),
                                   ((x10_int)0)))) {
            
            //#line 59 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": Eval of x10.ast.X10Call_c
            simulator->tweet(ctx);
        } else {
            
            //#line 61 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
            x10_int step = x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>::superstep();
            
            //#line 62 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": Eval of x10.ast.X10LocalAssign_c
            following = x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>::outEdges()->org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<x10_double> >::get1();
            
            //#line 63 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10If_c
            if (((following->org::scalegraph::util::MemoryChunk<x10_long>::size()) > (((x10_long) (step)))))
            {
                
                //#line 64 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
                x10_long destid = ((x10_long) ((following->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  step)) % x10aux::zeroCheck(following->org::scalegraph::util::MemoryChunk<x10_long>::size())));
                
                //#line 65 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": Eval of x10.ast.X10Call_c
                simulator->directMessage(ctx, destid);
            }
            
            //#line 68 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>::setValue(
              x10aux::class_cast_unchecked<org::simulator::twitter::TwitterUser*>(X10_NULL));
        }
        
        //#line 76 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10If_c
        if (((x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>::superstep()) >= (((x10_int)5))))
        {
            
            //#line 77 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>::voteToHalt();
        }
        
    }
    
    // captured environment
    TwitterSimulator1* simulator;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->simulator);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        TwittSimTest__closure__1* storage = x10aux::alloc<TwittSimTest__closure__1>();
        buf.record_reference(storage);
        TwitterSimulator1* that_simulator = buf.read<TwitterSimulator1*>();
        TwittSimTest__closure__1* this_ = new (storage) TwittSimTest__closure__1(that_simulator);
        return this_;
    }
    
    TwittSimTest__closure__1(TwitterSimulator1* simulator) : simulator(simulator) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>*, org::scalegraph::util::MemoryChunk<x10_double> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>*, org::scalegraph::util::MemoryChunk<x10_double> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10:54-79";
    }

};

#endif // TWITTSIMTEST__CLOSURE__1_CLOSURE
#ifndef TWITTSIMTEST__CLOSURE__2_CLOSURE
#define TWITTSIMTEST__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class TwittSimTest__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_double>, x10_double>::itable<TwittSimTest__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_double __apply(org::scalegraph::util::MemoryChunk<x10_double> values) {
        
        //#line 80 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MathAppend::sum<x10_double >(values);
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        TwittSimTest__closure__2* storage = x10aux::alloc<TwittSimTest__closure__2>();
        buf.record_reference(storage);
        TwittSimTest__closure__2* this_ = new (storage) TwittSimTest__closure__2();
        return this_;
    }
    
    TwittSimTest__closure__2() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_double>, x10_double> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_double>, x10_double> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10:80";
    }

};

#endif // TWITTSIMTEST__CLOSURE__2_CLOSURE
#ifndef TWITTSIMTEST__CLOSURE__3_CLOSURE
#define TWITTSIMTEST__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class TwittSimTest__closure__3 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_2<x10_int, x10_double, x10_boolean>::itable<TwittSimTest__closure__3> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_boolean __apply(x10_int superstep, x10_double aggVal) {
        
        //#line 82 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10Return_c
        return ((superstep) >= (((x10_int)5)));
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        TwittSimTest__closure__3* storage = x10aux::alloc<TwittSimTest__closure__3>();
        buf.record_reference(storage);
        TwittSimTest__closure__3* this_ = new (storage) TwittSimTest__closure__3();
        return this_;
    }
    
    TwittSimTest__closure__3() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_double, x10_boolean> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_double, x10_boolean> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10:82";
    }

};

#endif // TWITTSIMTEST__CLOSURE__3_CLOSURE

//#line 20 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10MethodDecl_c
void TwittSimTest::main(x10::array::Array<x10::lang::String*>* args) {
    
    //#line 22 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::Config* config = org::scalegraph::Config::get();
    
    //#line 23 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(config)->worldTeam();
    
    //#line 24 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Dist2D dist = x10aux::nullCheck(config)->dist2d();
    
    //#line 25 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    x10::lang::String* weightAttr = x10aux::makeStringLit("weight");
    
    //#line 26 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    x10::lang::String* outputPath = x10aux::makeStringLit("pagerank-%d");
    
    //#line 27 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    x10_int tweetCount = ((x10_int)0);
    
    //#line 29 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    TwitterSimulator1* simulator = TwitterSimulator1::_make();
    
    //#line 33 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    x10_int scale = ((x10_int)5);
    
    //#line 34 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    x10_int edgeFactor = ((x10_int)15);
    
    //#line 35 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::random::Random* rnd = org::scalegraph::util::random::Random::_make(((x10_long) (((x10_int)2))),
                                                                                              ((x10_long) (((x10_int)3))));
    
    //#line 36 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::EdgeList<x10_long> edgeList = org::scalegraph::graph::GraphGenerator::genRMAT(
                                                            scale,
                                                            edgeFactor,
                                                            0.45,
                                                            0.15,
                                                            0.15,
                                                            rnd);
    
    //#line 37 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::graph::Graph* g = org::scalegraph::graph::Graph::make(
                                         edgeList);
    
    //#line 40 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_double> weights =
      org::scalegraph::graph::GraphGenerator::genRandomEdgeValue(
        scale, edgeFactor, rnd);
    
    //#line 41 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": Eval of x10.ast.X10Call_c
    g->setEdgeAttribute<x10_double >(weightAttr, weights);
    
    //#line 44 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix<x10_double> csr =
      g->createDistSparseMatrix<x10_double >(x10aux::nullCheck(org::scalegraph::Config::get())->dist1d(),
                                             x10aux::makeStringLit("weight"),
                                             true, true);
    
    //#line 49 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::XPregelGraph<org::simulator::twitter::TwitterUser*, x10_double>* xpregel =
      org::scalegraph::xpregel::XPregelGraph<void, void>::make<org::simulator::twitter::TwitterUser*,
      x10_double >(csr);
    
    //#line 51 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": Eval of x10.ast.X10Call_c
    xpregel->org::scalegraph::xpregel::XPregelGraph<org::simulator::twitter::TwitterUser*, x10_double>::updateInEdge();
    
    //#line 54 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": Eval of x10.ast.X10Call_c
    xpregel->iterate<x10_double, x10_double >(reinterpret_cast<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>*, org::scalegraph::util::MemoryChunk<x10_double> >*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>*, org::scalegraph::util::MemoryChunk<x10_double> > >(sizeof(TwittSimTest__closure__1)))TwittSimTest__closure__1(simulator))),
                                              reinterpret_cast<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_double>, x10_double>*>((new (x10aux::alloc<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_double>, x10_double> >(sizeof(TwittSimTest__closure__2)))TwittSimTest__closure__2())),
                                              reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_double, x10_boolean>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_double, x10_boolean> >(sizeof(TwittSimTest__closure__3)))TwittSimTest__closure__3())));
}

//#line 18 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10MethodDecl_c
TwittSimTest* TwittSimTest::TwittSimTest____this__TwittSimTest(
  ) {
    
    //#line 18 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 18 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.X10ConstructorDecl_c
void TwittSimTest::_constructor() {
    
    //#line 18 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": polyglot.ast.Empty_c
    ;
    
    //#line 18 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwittSimTest.x10": x10.ast.AssignPropertyCall_c
    
}
TwittSimTest* TwittSimTest::_make() {
    TwittSimTest* this_ = new (memset(x10aux::alloc<TwittSimTest>(), 0, sizeof(TwittSimTest))) TwittSimTest();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t TwittSimTest::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(TwittSimTest::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void TwittSimTest::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* TwittSimTest::_deserializer(x10aux::deserialization_buffer& buf) {
    TwittSimTest* this_ = new (memset(x10aux::alloc<TwittSimTest>(), 0, sizeof(TwittSimTest))) TwittSimTest();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void TwittSimTest::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType TwittSimTest::rtt;
void TwittSimTest::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("TwittSimTest",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>*, org::scalegraph::util::MemoryChunk<x10_double> >::itable<TwittSimTest__closure__1>TwittSimTest__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &TwittSimTest__closure__1::__apply, &TwittSimTest__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry TwittSimTest__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>*, org::scalegraph::util::MemoryChunk<x10_double> > >, &TwittSimTest__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t TwittSimTest__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(TwittSimTest__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_double>, x10_double>::itable<TwittSimTest__closure__2>TwittSimTest__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &TwittSimTest__closure__2::__apply, &TwittSimTest__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry TwittSimTest__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_double>, x10_double> >, &TwittSimTest__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t TwittSimTest__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(TwittSimTest__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_2<x10_int, x10_double, x10_boolean>::itable<TwittSimTest__closure__3>TwittSimTest__closure__3::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &TwittSimTest__closure__3::__apply, &TwittSimTest__closure__3::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry TwittSimTest__closure__3::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_double, x10_boolean> >, &TwittSimTest__closure__3::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t TwittSimTest__closure__3::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(TwittSimTest__closure__3::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of TwittSimTest */
/*************************************************/
