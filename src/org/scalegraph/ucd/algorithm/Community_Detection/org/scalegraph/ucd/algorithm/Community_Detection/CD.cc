/*************************************************/
/* START of CD */
#include <org/scalegraph/ucd/algorithm/Community_Detection/CD.h>

#include <org/scalegraph/test/AlgorithmTest.h>
#include <x10/lang/Float.h>
#include <x10/util/HashMap.h>
#include <org/scalegraph/xpregel/XPregelGraph.h>
#include <x10/lang/Double.h>
#include <x10/lang/VoidFun_0_2.h>
#include <org/scalegraph/xpregel/VertexContext.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/xpregel/MessageCommunicator.h>
#include <x10/util/Box.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/util/Set.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Int.h>
#include <x10/util/Random.h>
#include <x10/util/Timer.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Fun_0_2.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <org/scalegraph/util/MathAppend.h>
#include <x10/array/Array.h>
#include <org/scalegraph/graph/Graph.h>
#include <org/scalegraph/blas/DistSparseMatrix.h>
#include <org/scalegraph/Config.h>
#include <org/scalegraph/util/Dist2D.h>
#include <org/scalegraph/test/STest.h>
#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>*, org::scalegraph::util::MemoryChunk<x10_float> >::itable<org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>* ctx, org::scalegraph::util::MemoryChunk<x10_float> messages) {
        
        //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
        x10_boolean isLabelChanged = true;
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals((__extension__ ({
                                       x10aux::nullCheck(x10aux::nullCheck(ctx)->
                                                           FMGL(mCtx))->
                                         FMGL(mSuperstep);
                                   }))
                                   , ((x10_int)0)))) {
            
            //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::setValue(
              ((x10_float) (x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::id())));
            
            //#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10FieldAssign_c
            saved_this->FMGL(labelScore) = 1.0f;
        }
        
        //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10If_c
        if (isLabelChanged) {
            
            //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10FieldAssign_c
            saved_this->FMGL(oldLabel) = x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::value();
            
            //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10LocalAssign_c
            isLabelChanged = false;
            
            //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
            x10_float eq2 = saved_this->getNewLabel(ctx);
            
            //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
            x10_float neighbourLabel = x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::value();
            
            //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10If_c
            if (saved_this->FMGL(neighboursLabels)->containsKey(
                  neighbourLabel)) {
                
                //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10FieldAssign_c
                saved_this->FMGL(aggScore) = saved_this->
                                               FMGL(neighboursLabels)->getOrThrow(
                                               neighbourLabel);
                
                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10FieldAssign_c
                saved_this->FMGL(aggScore) = ((saved_this->
                                                 FMGL(aggScore)) + (eq2));
                
                //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
                saved_this->FMGL(neighboursLabels)->put(neighbourLabel,
                                                        saved_this->
                                                          FMGL(aggScore));
                
                //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10If_c
                if (((saved_this->FMGL(labelMaxScore)->getOrThrow(
                        neighbourLabel)) < (x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::value())))
                {
                    
                    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
                    saved_this->FMGL(labelMaxScore)->put(
                      neighbourLabel, x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::value());
                }
                
            } else {
                
                //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
                saved_this->FMGL(neighboursLabels)->put(neighbourLabel,
                                                        eq2);
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
                saved_this->FMGL(labelMaxScore)->put(neighbourLabel,
                                                     x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::value());
            }
            
            //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
            x10::lang::Iterator<x10_float>* neighbour = x10::util::Set<x10_float>::iterator(x10aux::nullCheck(saved_this->
                                                                                                                FMGL(neighboursLabels)->keySet()));
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
            x10::util::ArrayList<x10_float>* potentialLabels =
               ((new (memset(x10aux::alloc<x10::util::ArrayList<x10_float> >(), 0, sizeof(x10::util::ArrayList<x10_float>))) x10::util::ArrayList<x10_float>()))
            ;
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10ConstructorCall_c
            (potentialLabels)->::x10::util::ArrayList<x10_float>::_constructor();
            
            //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10While_c
            while (x10::lang::Iterator<x10_float>::hasNext(x10aux::nullCheck(neighbour)))
            {
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
                x10_float tempLabel = x10::lang::Iterator<x10_float>::next(x10aux::nullCheck(neighbour));
                
                //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
                x10_float aggValue = saved_this->FMGL(neighboursLabels)->getOrThrow(
                                       tempLabel);
                
                //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10If_c
                if (((aggValue) > (saved_this->FMGL(maxScore))))
                {
                    
                    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10FieldAssign_c
                    saved_this->FMGL(maxScore) = aggValue;
                    
                    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::setValue(
                      tempLabel);
                    
                    //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
                    potentialLabels->clear();
                    
                    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
                    potentialLabels->add(tempLabel);
                } else 
                //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(aggValue, saved_this->
                                                       FMGL(maxScore))))
                {
                    
                    //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
                    potentialLabels->add(tempLabel);
                }
                
            }
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10If_c
            if (((potentialLabels->size()) > (((x10_int)1))))
            {
                
                //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
                x10_int labelIndex = (__extension__ ({
                                         
                                         //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
                                         x10::util::Random* alloc50807 =
                                            ((new (memset(x10aux::alloc<x10::util::Random>(), 0, sizeof(x10::util::Random))) x10::util::Random()))
                                         ;
                                         
                                         //#line 18 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/util/Random.x10": x10.ast.X10ConstructorCall_c
                                         (alloc50807)->::x10::util::Random::_constructor(
                                           x10::lang::RuntimeNatives::currentTimeMillis());
                                         alloc50807;
                                     }))
                                     ->nextInt(potentialLabels->size());
                
                //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::setValue(
                  potentialLabels->get(labelIndex));
            }
            
            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10FieldAssign_c
            saved_this->FMGL(labelScore) = ((saved_this->
                                               FMGL(labelMaxScore)->getOrThrow(
                                               x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::value())) - (delta));
            
            //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10LocalAssign_c
            isLabelChanged = true;
            
            //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::sendMessageToAllNeighbors(
              saved_this->FMGL(labelScore));
            
            //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
            x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
              reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("The Label score is :"), saved_this->
                                                                                                                                                                               FMGL(labelScore)), x10aux::makeStringLit(" and vertex id is ")), x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::id())));
        }
        
    }
    
    // captured environment
    org::scalegraph::ucd::algorithm::Community_Detection::CD* saved_this;
    x10_float delta;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->delta);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1* storage = x10aux::alloc<org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1>();
        buf.record_reference(storage);
        org::scalegraph::ucd::algorithm::Community_Detection::CD* that_saved_this = buf.read<org::scalegraph::ucd::algorithm::Community_Detection::CD*>();
        x10_float that_delta = buf.read<x10_float>();
        org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1* this_ = new (storage) org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1(that_saved_this, that_delta);
        return this_;
    }
    
    org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1(org::scalegraph::ucd::algorithm::Community_Detection::CD* saved_this, x10_float delta) : saved_this(saved_this), delta(delta) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>*, org::scalegraph::util::MemoryChunk<x10_float> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>*, org::scalegraph::util::MemoryChunk<x10_float> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10:23-78";
    }

};

#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean>::itable<org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_boolean __apply(x10_int superstep, x10_long aggVal) {
        
        //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10Return_c
        return true;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2* storage = x10aux::alloc<org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2>();
        buf.record_reference(storage);
        org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2* this_ = new (storage) org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2();
        return this_;
    }
    
    org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10:80-82";
    }

};

#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_COMMUNITY_DETECTION_CD__CLOSURE__2_CLOSURE

//#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10FieldDecl_c

//#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10FieldDecl_c

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10FieldDecl_c

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10FieldDecl_c

//#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10FieldDecl_c

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10FieldDecl_c

//#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::ucd::algorithm::Community_Detection::CD::perform_CD(
  org::scalegraph::xpregel::XPregelGraph<x10_float, x10_double>* g, x10_float delta) {
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(maxScore) = ((x10_float) (((x10_int)-100)));
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(g)->iterate<x10_float, x10_long >(reinterpret_cast<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>*, org::scalegraph::util::MemoryChunk<x10_float> >*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>*, org::scalegraph::util::MemoryChunk<x10_float> > >(sizeof(org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1)))org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1(this, delta))),
                                                        x10aux::class_cast_unchecked<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long>*>(X10_NULL),
                                                        reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >(sizeof(org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2)))org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2())));
}

//#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10MethodDecl_c
x10_float org::scalegraph::ucd::algorithm::Community_Detection::CD::getNewLabel(
  org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>* vtx) {
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
    x10_float label = x10aux::nullCheck(vtx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::value();
    
    //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
    x10_long function = (__extension__ ({
        
        //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this55399 =
          x10aux::nullCheck(vtx)->org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>::outEdgesId();
        this55399->FMGL(data)->FMGL(size);
    }))
    ;
    
    //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10Return_c
    return ((this->FMGL(labelScore)) * (((x10_float) (org::scalegraph::util::MathAppend::nextPowerOf2(
                                                        function)))));
    
}

//#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::ucd::algorithm::Community_Detection::CD::run(
  x10::array::Array<x10::lang::String*>* args, org::scalegraph::graph::Graph* g) {
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix<x10_double> csr =
      x10aux::nullCheck(g)->createDistSparseMatrix<x10_double >(
        x10aux::nullCheck(org::scalegraph::Config::get())->dist1d(),
        x10aux::makeStringLit("weight"), true, true);
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::XPregelGraph<x10_float, x10_double>* xpregel =
      org::scalegraph::xpregel::XPregelGraph<void, void>::make<x10_float,
      x10_double >(csr);
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
    this->perform_CD(xpregel, 0.5f);
    
    //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10Return_c
    return true;
    
}

//#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::ucd::algorithm::Community_Detection::CD::main(
  x10::array::Array<x10::lang::String*>* args) {
    
    //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
    (__extension__ ({
        
        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::ucd::algorithm::Community_Detection::CD* alloc50808 =
           ((new (memset(x10aux::alloc<org::scalegraph::ucd::algorithm::Community_Detection::CD>(), 0, sizeof(org::scalegraph::ucd::algorithm::Community_Detection::CD))) org::scalegraph::ucd::algorithm::Community_Detection::CD()))
        ;
        
        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10ConstructorCall_c
        (alloc50808)->::org::scalegraph::ucd::algorithm::Community_Detection::CD::_constructor();
        alloc50808;
    }))
    ->execute(args);
}

//#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10MethodDecl_c
org::scalegraph::ucd::algorithm::Community_Detection::CD*
  org::scalegraph::ucd::algorithm::Community_Detection::CD::org__scalegraph__ucd__algorithm__Community_Detection__CD____this__org__scalegraph__ucd__algorithm__Community_Detection__CD(
  ) {
    
    //#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::ucd::algorithm::Community_Detection::CD::_constructor(
  ) {
    
    //#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::test::AlgorithmTest* this58947 = this;
    
    //#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.AssignPropertyCall_c
    
    //#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::ucd::algorithm::Community_Detection::CD::__fieldInitializers50713();
}
org::scalegraph::ucd::algorithm::Community_Detection::CD* org::scalegraph::ucd::algorithm::Community_Detection::CD::_make(
  ) {
    org::scalegraph::ucd::algorithm::Community_Detection::CD* this_ = new (memset(x10aux::alloc<org::scalegraph::ucd::algorithm::Community_Detection::CD>(), 0, sizeof(org::scalegraph::ucd::algorithm::Community_Detection::CD))) org::scalegraph::ucd::algorithm::Community_Detection::CD();
    this_->_constructor();
    return this_;
}



//#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::ucd::algorithm::Community_Detection::CD::__fieldInitializers50713(
  ) {
    
    //#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(labelScore) = 0.0f;
    
    //#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(neighboursLabels) = (__extension__ ({
        
        //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
        x10::util::HashMap<x10_float, x10_float>* alloc50809 =
           ((new (memset(x10aux::alloc<x10::util::HashMap<x10_float, x10_float> >(), 0, sizeof(x10::util::HashMap<x10_float, x10_float>))) x10::util::HashMap<x10_float, x10_float>()))
        ;
        
        //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10ConstructorCall_c
        (alloc50809)->::x10::util::HashMap<x10_float, x10_float>::_constructor();
        alloc50809;
    }))
    ;
    
    //#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(labelMaxScore) = (__extension__ ({
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10LocalDecl_c
        x10::util::HashMap<x10_float, x10_float>* alloc50810 =
           ((new (memset(x10aux::alloc<x10::util::HashMap<x10_float, x10_float> >(), 0, sizeof(x10::util::HashMap<x10_float, x10_float>))) x10::util::HashMap<x10_float, x10_float>()))
        ;
        
        //#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": x10.ast.X10ConstructorCall_c
        (alloc50810)->::x10::util::HashMap<x10_float, x10_float>::_constructor();
        alloc50810;
    }))
    ;
    
    //#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(oldLabel) = 0.0f;
    
    //#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(aggScore) = 0.0f;
    
    //#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Community_Detection/CD.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(maxScore) = 0.0f;
}
const x10aux::serialization_id_t org::scalegraph::ucd::algorithm::Community_Detection::CD::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::ucd::algorithm::Community_Detection::CD::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::ucd::algorithm::Community_Detection::CD::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::test::AlgorithmTest::_serialize_body(buf);
    buf.write(this->FMGL(labelScore));
    buf.write(this->FMGL(neighboursLabels));
    buf.write(this->FMGL(labelMaxScore));
    buf.write(this->FMGL(oldLabel));
    buf.write(this->FMGL(aggScore));
    buf.write(this->FMGL(maxScore));
    
}

x10::lang::Reference* org::scalegraph::ucd::algorithm::Community_Detection::CD::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::ucd::algorithm::Community_Detection::CD* this_ = new (memset(x10aux::alloc<org::scalegraph::ucd::algorithm::Community_Detection::CD>(), 0, sizeof(org::scalegraph::ucd::algorithm::Community_Detection::CD))) org::scalegraph::ucd::algorithm::Community_Detection::CD();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::ucd::algorithm::Community_Detection::CD::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::test::AlgorithmTest::_deserialize_body(buf);
    FMGL(labelScore) = buf.read<x10_float>();
    FMGL(neighboursLabels) = buf.read<x10::util::HashMap<x10_float, x10_float>*>();
    FMGL(labelMaxScore) = buf.read<x10::util::HashMap<x10_float, x10_float>*>();
    FMGL(oldLabel) = buf.read<x10_float>();
    FMGL(aggScore) = buf.read<x10_float>();
    FMGL(maxScore) = buf.read<x10_float>();
}

x10aux::RuntimeType org::scalegraph::ucd::algorithm::Community_Detection::CD::rtt;
void org::scalegraph::ucd::algorithm::Community_Detection::CD::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::test::AlgorithmTest>()};
    rtt.initStageTwo("org.scalegraph.ucd.algorithm.Community_Detection.CD",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>*, org::scalegraph::util::MemoryChunk<x10_float> >::itable<org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1>org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1::__apply, &org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_float, x10_double, x10_float, x10_long>*, org::scalegraph::util::MemoryChunk<x10_float> > >, &org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean>::itable<org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2>org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2::__apply, &org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >, &org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_ucd_algorithm_Community_Detection_CD__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of CD */
/*************************************************/
