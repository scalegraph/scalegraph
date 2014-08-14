/*************************************************/
/* START of STATS */
#include <org/scalegraph/ucd/algorithm/STAT/STATS.h>

#include <org/scalegraph/test/AlgorithmTest.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/GlobalRef.h>
#include <x10/lang/Cell.h>
#include <org/scalegraph/xpregel/XPregelGraph.h>
#include <x10/lang/Double.h>
#include <org/scalegraph/util/StopWatch.h>
#include <org/scalegraph/Config.h>
#include <x10/compiler/Ifdef.h>
#include <x10/lang/VoidFun_0_2.h>
#include <org/scalegraph/xpregel/VertexContext.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <org/scalegraph/xpregel/WorkerPlaceGraph.h>
#include <x10/lang/Fun_0_1.h>
#include <org/scalegraph/util/MathAppend.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <org/scalegraph/xpregel/MessageCommunicator.h>
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/compiler/Ifndef.h>
#include <x10/array/Array.h>
#include <org/scalegraph/graph/Graph.h>
#include <org/scalegraph/blas/DistSparseMatrix.h>
#include <org/scalegraph/util/Dist2D.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <org/scalegraph/test/STest.h>
#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_ucd_algorithm_STAT_STATS__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_ucd_algorithm_STAT_STATS__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>* vertex, org::scalegraph::util::MemoryChunk<x10_long> messages) {
        
        //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
        x10_long value57354 = (__extension__ ({
            
            //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this57355 = x10aux::nullCheck(vertex)->org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>::outEdgesId();
            this57355->FMGL(data)->FMGL(size);
        }))
        ;
        
        //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(x10aux::nullCheck(vertex)->FMGL(mAggregateValue))->org::scalegraph::util::GrowableMemory<x10_long>::add(
          value57354);
        
        //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                     FMGL(id), ((x10_int)0)))) {
            
            //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10_long>* this57349 = (__extension__ ({
                
                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > p__57350 =
                  verticesTotalRef;
                
                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<x10_long>* ret57351;
                
                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > x__57346 =
                  p__57350;
                
                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
                if (!((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                             x10::lang::Place::place((x__57346)->location)))))
                {
                    
                    //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("!(here == x$0.home)"))));
                    }
                    
                }
                
                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10LocalAssign_c
                ret57351 = (x__57346)->__apply();
                ret57351;
            }))
            ;
            
            //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_long x57352 = (__extension__ ({
                (__extension__ ({
                    
                    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/VertexContext.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::graph::id::IdStruct this57353 =
                      x10aux::nullCheck(x10aux::nullCheck(vertex)->
                                          FMGL(mWorker))->
                        FMGL(mIds);
                    this57353->FMGL(numberOfGlobalVertexes);
                }))
                ;
            }))
            ;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_long x57347 = x57352;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_long ret57348;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this57349)->FMGL(value) = x57347;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
            ret57348 = x57347;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
            ret57348;
        }
        
    }
    
    // captured environment
    x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > verticesTotalRef;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->verticesTotalRef);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_ucd_algorithm_STAT_STATS__closure__1* storage = x10aux::alloc<org_scalegraph_ucd_algorithm_STAT_STATS__closure__1>();
        buf.record_reference(storage);
        x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > that_verticesTotalRef = buf.read<x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > >();
        org_scalegraph_ucd_algorithm_STAT_STATS__closure__1* this_ = new (storage) org_scalegraph_ucd_algorithm_STAT_STATS__closure__1(that_verticesTotalRef);
        return this_;
    }
    
    org_scalegraph_ucd_algorithm_STAT_STATS__closure__1(x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > verticesTotalRef) : verticesTotalRef(verticesTotalRef) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10:32-42";
    }

};

#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class org_scalegraph_ucd_algorithm_STAT_STATS__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long>::itable<org_scalegraph_ucd_algorithm_STAT_STATS__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(org::scalegraph::util::MemoryChunk<x10_long> values) {
        
        //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MathAppend::sum<x10_long >(values);
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_ucd_algorithm_STAT_STATS__closure__2* storage = x10aux::alloc<org_scalegraph_ucd_algorithm_STAT_STATS__closure__2>();
        buf.record_reference(storage);
        org_scalegraph_ucd_algorithm_STAT_STATS__closure__2* this_ = new (storage) org_scalegraph_ucd_algorithm_STAT_STATS__closure__2();
        return this_;
    }
    
    org_scalegraph_ucd_algorithm_STAT_STATS__closure__2() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10:43";
    }

};

#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class org_scalegraph_ucd_algorithm_STAT_STATS__closure__3 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean>::itable<org_scalegraph_ucd_algorithm_STAT_STATS__closure__3> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_boolean __apply(x10_int superstep, x10_long aggVal) {
        
        //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                     FMGL(id), ((x10_int)0)))) {
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10_long>* this57359 = (__extension__ ({
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > p__57360 =
                  edgesTotalRef;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<x10_long>* ret57361;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > x__57356 =
                  p__57360;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
                if (!((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                             x10::lang::Place::place((x__57356)->location)))))
                {
                    
                    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("!(here == x$0.home)"))));
                    }
                    
                }
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10LocalAssign_c
                ret57361 = (x__57356)->__apply();
                ret57361;
            }))
            ;
            
            //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_long x57362 = aggVal;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_long x57357 = x57362;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_long ret57358;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this57359)->FMGL(value) = x57357;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
            ret57358 = x57357;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
            ret57358;
        }
        
        //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10Return_c
        return true;
        
    }
    
    // captured environment
    x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > edgesTotalRef;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->edgesTotalRef);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_ucd_algorithm_STAT_STATS__closure__3* storage = x10aux::alloc<org_scalegraph_ucd_algorithm_STAT_STATS__closure__3>();
        buf.record_reference(storage);
        x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > that_edgesTotalRef = buf.read<x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > >();
        org_scalegraph_ucd_algorithm_STAT_STATS__closure__3* this_ = new (storage) org_scalegraph_ucd_algorithm_STAT_STATS__closure__3(that_edgesTotalRef);
        return this_;
    }
    
    org_scalegraph_ucd_algorithm_STAT_STATS__closure__3(x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > edgesTotalRef) : edgesTotalRef(edgesTotalRef) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10:44-49";
    }

};

#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_ucd_algorithm_STAT_STATS__closure__4 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, org::scalegraph::util::MemoryChunk<x10_long>, x10_long>*, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > >::itable<org_scalegraph_ucd_algorithm_STAT_STATS__closure__4> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(org::scalegraph::xpregel::VertexContext<x10_long, x10_double, org::scalegraph::util::MemoryChunk<x10_long>, x10_long>* ctx, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > messages) {
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
        x10_long number_of_neighbour = (__extension__ ({
            
            //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this53879 = x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_long, x10_double, org::scalegraph::util::MemoryChunk<x10_long>, x10_long>::outEdgesId();
            this53879->FMGL(data)->FMGL(size);
        }))
        ;
        
        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
        if (((number_of_neighbour) > (((x10_long) (((x10_int)1)))))) {
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals((__extension__ ({
                                           x10aux::nullCheck(x10aux::nullCheck(ctx)->
                                                               FMGL(mCtx))->
                                             FMGL(mSuperstep);
                                       }))
                                       , ((x10_int)0)))) {
                
                //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_long, x10_double, org::scalegraph::util::MemoryChunk<x10_long>, x10_long>::sendMessageToAllNeighbors(
                  (__extension__ ({
                      
                      //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                      org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<x10_double> > this54000 =
                        x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_long, x10_double, org::scalegraph::util::MemoryChunk<x10_long>, x10_long>::outEdges();
                      this54000->FMGL(val1);
                  }))
                  );
            } else 
            //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals((__extension__ ({
                                           x10aux::nullCheck(x10aux::nullCheck(ctx)->
                                                               FMGL(mCtx))->
                                             FMGL(mSuperstep);
                                       }))
                                       , ((x10_int)1)))) {
                
                //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i50914domain57385 = (__extension__ ({
                    x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((messages->
                                                                                 FMGL(data)->
                                                                                 FMGL(size)) - (((x10_long)1ll)))));
                }))
                ;
                
                //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                x10_long i50914max57386 = i50914domain57385->
                                            FMGL(max);
                
                //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": polyglot.ast.For_c
                {
                    x10_long i57387;
                    for (
                         //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                         i57387 = ((x10_long)0ll); ((i57387) <= (i50914max57386));
                         
                         //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10LocalAssign_c
                         i57387 = ((x10_long) ((i57387) + (((x10_long)1ll)))))
                    {
                        
                        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                        x10_long i57388 = i57387;
                        
                        //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> neighbours57376 =
                          (__extension__ ({
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            x10_long index57377 = i57388;
                            
                            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::MemoryChunk<x10_long> ret57378;
                            {
                                
                                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (!((messages->FMGL(data)).isValid()))
                                {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                    }
                                    
                                }
                                
                                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (((index57377) < (((x10_long) (((x10_int)0))))) ||
                                    ((index57377) >= (messages->
                                                        FMGL(data)->
                                                        FMGL(size))))
                                {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index57377), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                            ret57378 = (messages->FMGL(data))[index57377];
                            ret57378;
                        }))
                        ;
                        
                        //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> nn57379 =
                          x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_long, x10_double, org::scalegraph::util::MemoryChunk<x10_long>, x10_long>::outEdgesId();
                        
                        //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                        x10::lang::LongRange i50895domain57372 =
                          (__extension__ ({
                            x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((nn57379->
                                                                                         FMGL(data)->
                                                                                         FMGL(size)) - (((x10_long)1ll)))));
                        }))
                        ;
                        
                        //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                        x10_long i50895max57373 = i50895domain57372->
                                                    FMGL(max);
                        
                        //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": polyglot.ast.For_c
                        {
                            x10_long i57374;
                            for (
                                 //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                                 i57374 = ((x10_long)0ll);
                                 ((i57374) <= (i50895max57373));
                                 
                                 //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10LocalAssign_c
                                 i57374 = ((x10_long) ((i57374) + (((x10_long)1ll)))))
                            {
                                
                                //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                                x10_long j57375 = i57374;
                                
                                //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i50876domain57368 =
                                  (__extension__ ({
                                    x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((neighbours57376->
                                                                                                 FMGL(data)->
                                                                                                 FMGL(size)) - (((x10_long)1ll)))));
                                }))
                                ;
                                
                                //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                                x10_long i50876max57369 =
                                  i50876domain57368->FMGL(max);
                                
                                //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": polyglot.ast.For_c
                                {
                                    x10_long i57370;
                                    for (
                                         //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                                         i57370 = ((x10_long)0ll);
                                         ((i57370) <= (i50876max57369));
                                         
                                         //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10LocalAssign_c
                                         i57370 = ((x10_long) ((i57370) + (((x10_long)1ll)))))
                                    {
                                        
                                        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                                        x10_long k57371 =
                                          i57370;
                                        
                                        //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
                                        if ((x10aux::struct_equals((__extension__ ({
                                                                       
                                                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                       x10_long index57364 =
                                                                         j57375;
                                                                       
                                                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                       x10_long ret57365;
                                                                       {
                                                                           
                                                                           //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                           if (!((nn57379->
                                                                                    FMGL(data)).isValid()))
                                                                           {
                                                                               
                                                                               //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                               if (true)
                                                                               {
                                                                                   
                                                                                   //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                   x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                               }
                                                                               
                                                                           }
                                                                           
                                                                           //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                           if (((index57364) < (((x10_long) (((x10_int)0))))) ||
                                                                               ((index57364) >= (nn57379->
                                                                                                   FMGL(data)->
                                                                                                   FMGL(size))))
                                                                           {
                                                                               
                                                                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                               if (true)
                                                                               {
                                                                                   
                                                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                   x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index57364), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                               }
                                                                               
                                                                           }
                                                                           
                                                                       }
                                                                       
                                                                       //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                       ret57365 =
                                                                         (nn57379->
                                                                            FMGL(data))[index57364];
                                                                       ret57365;
                                                                   }))
                                                                   ,
                                                                   (__extension__ ({
                                                                       
                                                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                       x10_long index57366 =
                                                                         k57371;
                                                                       
                                                                       //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                                       x10_long ret57367;
                                                                       {
                                                                           
                                                                           //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                           if (!((neighbours57376->
                                                                                    FMGL(data)).isValid()))
                                                                           {
                                                                               
                                                                               //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                               if (true)
                                                                               {
                                                                                   
                                                                                   //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                   x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                                               }
                                                                               
                                                                           }
                                                                           
                                                                           //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                           if (((index57366) < (((x10_long) (((x10_int)0))))) ||
                                                                               ((index57366) >= (neighbours57376->
                                                                                                   FMGL(data)->
                                                                                                   FMGL(size))))
                                                                           {
                                                                               
                                                                               //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                                               if (true)
                                                                               {
                                                                                   
                                                                                   //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                                   x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index57366), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                                               }
                                                                               
                                                                           }
                                                                           
                                                                       }
                                                                       
                                                                       //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                                       ret57367 =
                                                                         (neighbours57376->
                                                                            FMGL(data))[index57366];
                                                                       ret57367;
                                                                   }))
                                                                   )))
                                        {
                                            
                                            //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                                            org::scalegraph::ucd::algorithm::STAT::STATS* x57363 =
                                              saved_this;
                                            
                                            //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10FieldAssign_c
                                            x10aux::nullCheck(x57363)->
                                              FMGL(counter) =
                                              ((x10_int) ((x10aux::nullCheck(x57363)->
                                                             FMGL(counter)) + (((x10_int)1))));
                                        }
                                        
                                    }
                                }
                                
                            }
                        }
                        
                    }
                }
                
                //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<x10_long>* x57389 = (__extension__ ({
                    
                    //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                    x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > p__57390 =
                      saved_this->FMGL(LCC);
                    
                    //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Cell<x10_long>* ret57391;
                    
                    //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                    x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > x__57380 =
                      p__57390;
                    
                    //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
                    if (!((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                                 x10::lang::Place::place((x__57380)->location)))))
                    {
                        
                        //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("!(here == x$0.home)"))));
                        }
                        
                    }
                    
                    //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10LocalAssign_c
                    ret57391 = (x__57380)->__apply();
                    ret57391;
                }))
                ;
                
                //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                x10_long z57392 = ((x10_long) ((((x10_long) (saved_this->
                                                               FMGL(counter)))) / x10aux::zeroCheck(((x10_long) ((((x10_long) ((number_of_neighbour) * (((x10_long) ((number_of_neighbour) - (((x10_long) (((x10_int)1)))))))))) / x10aux::zeroCheck(((x10_long) (((x10_int)2)))))))));
                
                //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                x10_long ret57393;
                
                //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                x10_long r57384 = ((x10_long) (((__extension__ ({
                    x10aux::nullCheck(x57389)->FMGL(value);
                }))
                ) + (z57392)));
                
                //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                x10_long x57383 = r57384;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                x10_long x57381 = x57383;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                x10_long ret57382;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(x57389)->FMGL(value) = x57381;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
                ret57382 = x57381;
                
                //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
                ret57382;
                
                //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10LocalAssign_c
                ret57393 = r57384;
                
                //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Local_c
                ret57393;
            }
            
        } else {
         
        }
        
    }
    
    // captured environment
    org::scalegraph::ucd::algorithm::STAT::STATS* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_ucd_algorithm_STAT_STATS__closure__4* storage = x10aux::alloc<org_scalegraph_ucd_algorithm_STAT_STATS__closure__4>();
        buf.record_reference(storage);
        org::scalegraph::ucd::algorithm::STAT::STATS* that_saved_this = buf.read<org::scalegraph::ucd::algorithm::STAT::STATS*>();
        org_scalegraph_ucd_algorithm_STAT_STATS__closure__4* this_ = new (storage) org_scalegraph_ucd_algorithm_STAT_STATS__closure__4(that_saved_this);
        return this_;
    }
    
    org_scalegraph_ucd_algorithm_STAT_STATS__closure__4(org::scalegraph::ucd::algorithm::STAT::STATS* saved_this) : saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, org::scalegraph::util::MemoryChunk<x10_long>, x10_long>*, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, org::scalegraph::util::MemoryChunk<x10_long>, x10_long>*, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10:66-100";
    }

};

#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class org_scalegraph_ucd_algorithm_STAT_STATS__closure__5 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long>::itable<org_scalegraph_ucd_algorithm_STAT_STATS__closure__5> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(org::scalegraph::util::MemoryChunk<x10_long> values) {
        
        //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MathAppend::sum<x10_long >(values);
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_ucd_algorithm_STAT_STATS__closure__5* storage = x10aux::alloc<org_scalegraph_ucd_algorithm_STAT_STATS__closure__5>();
        buf.record_reference(storage);
        org_scalegraph_ucd_algorithm_STAT_STATS__closure__5* this_ = new (storage) org_scalegraph_ucd_algorithm_STAT_STATS__closure__5();
        return this_;
    }
    
    org_scalegraph_ucd_algorithm_STAT_STATS__closure__5() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10:101";
    }

};

#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class org_scalegraph_ucd_algorithm_STAT_STATS__closure__6 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean>::itable<org_scalegraph_ucd_algorithm_STAT_STATS__closure__6> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_boolean __apply(x10_int superstep, x10_long aggVal) {
        
        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals(superstep, ((x10_int)1)));
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_ucd_algorithm_STAT_STATS__closure__6* storage = x10aux::alloc<org_scalegraph_ucd_algorithm_STAT_STATS__closure__6>();
        buf.record_reference(storage);
        org_scalegraph_ucd_algorithm_STAT_STATS__closure__6* this_ = new (storage) org_scalegraph_ucd_algorithm_STAT_STATS__closure__6();
        return this_;
    }
    
    org_scalegraph_ucd_algorithm_STAT_STATS__closure__6() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10:102-104";
    }

};

#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_STAT_STATS__CLOSURE__6_CLOSURE

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10FieldDecl_c

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10FieldDecl_c

//#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10FieldDecl_c

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10FieldDecl_c

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10FieldDecl_c

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::ucd::algorithm::STAT::STATS::perform_STATS(org::scalegraph::xpregel::XPregelGraph<x10_long, x10_double>* g) {
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(g)->org::scalegraph::xpregel::XPregelGraph<x10_long, x10_double>::updateInEdge();
    
    //#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(x10aux::makeStringLit("Update In Edge"));
    {
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(org::scalegraph::Config::get())->dumpProfXPregel(
          x10aux::makeStringLit("Update In Edge:"));
    }
    
    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
    x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > edgesTotalRef = x10::lang::GlobalRef<x10::lang::Cell<x10_long>* >::_make((__extension__ ({
                                                                                                                                   
                                                                                                                                   //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                                                                                                                                   x10::lang::Cell<x10_long>* alloc50853 =
                                                                                                                                     
                                                                                                                                   ((new (memset(x10aux::alloc<x10::lang::Cell<x10_long> >(), 0, sizeof(x10::lang::Cell<x10_long>))) x10::lang::Cell<x10_long>()))
                                                                                                                                   ;
                                                                                                                                   
                                                                                                                                   //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": polyglot.ast.Empty_c
                                                                                                                                   ;
                                                                                                                                   
                                                                                                                                   //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                                                                                   alloc50853->
                                                                                                                                     FMGL(value) =
                                                                                                                                     ((x10_long)0ll);
                                                                                                                                   alloc50853;
                                                                                                                               }))
                                                                                                                               );
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
    x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > verticesTotalRef =
      x10::lang::GlobalRef<x10::lang::Cell<x10_long>* >::_make((__extension__ ({
                                                                   
                                                                   //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                                                                   x10::lang::Cell<x10_long>* alloc50854 =
                                                                     
                                                                   ((new (memset(x10aux::alloc<x10::lang::Cell<x10_long> >(), 0, sizeof(x10::lang::Cell<x10_long>))) x10::lang::Cell<x10_long>()))
                                                                   ;
                                                                   
                                                                   //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": polyglot.ast.Empty_c
                                                                   ;
                                                                   
                                                                   //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                   alloc50854->
                                                                     FMGL(value) =
                                                                     ((x10_long)0ll);
                                                                   alloc50854;
                                                               }))
                                                               );
    
    //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(g)->iterate<x10_long, x10_long >(reinterpret_cast<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_ucd_algorithm_STAT_STATS__closure__1)))org_scalegraph_ucd_algorithm_STAT_STATS__closure__1(verticesTotalRef))),
                                                       reinterpret_cast<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long> >(sizeof(org_scalegraph_ucd_algorithm_STAT_STATS__closure__2)))org_scalegraph_ucd_algorithm_STAT_STATS__closure__2())),
                                                       reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >(sizeof(org_scalegraph_ucd_algorithm_STAT_STATS__closure__3)))org_scalegraph_ucd_algorithm_STAT_STATS__closure__3(edgesTotalRef))));
    
    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(edgesTotal) = (__extension__ ({
        
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<x10_long>* this53547 = (edgesTotalRef)->__apply();
        x10aux::nullCheck(this53547)->FMGL(value);
    }))
    ;
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(verticesTotal) = (__extension__ ({
        
        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<x10_long>* this53548 = (verticesTotalRef)->__apply();
        x10aux::nullCheck(this53548)->FMGL(value);
    }))
    ;
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
    x10_long avgLCC = ((x10_long) ((this->calculateLCC(g)) / x10aux::zeroCheck(this->
                                                                                 FMGL(verticesTotal))));
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Number of vertices = "), this->
                                                                                                                                                                                                                            FMGL(verticesTotal)), x10aux::makeStringLit(" Number of edges = ")), this->
                                                                                                                                                                                                                                                                                                   FMGL(edgesTotal)), x10aux::makeStringLit(" Average Lcc = ")), avgLCC)));
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
      x10aux::makeStringLit("STAT Main Iterate (debug)"));
    {
        
        //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(org::scalegraph::Config::get())->dumpProfXPregel(
          x10aux::makeStringLit("STAT Main Iterate (debug):"));
    }
}

//#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::ucd::algorithm::STAT::STATS::calculateLCC(
  org::scalegraph::xpregel::XPregelGraph<x10_long, x10_double>* g) {
    
    //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
    
    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(g)->iterate<org::scalegraph::util::MemoryChunk<x10_long>,
    x10_long >(reinterpret_cast<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, org::scalegraph::util::MemoryChunk<x10_long>, x10_long>*, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > >*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, org::scalegraph::util::MemoryChunk<x10_long>, x10_long>*, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > > >(sizeof(org_scalegraph_ucd_algorithm_STAT_STATS__closure__4)))org_scalegraph_ucd_algorithm_STAT_STATS__closure__4(this))),
               reinterpret_cast<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long> >(sizeof(org_scalegraph_ucd_algorithm_STAT_STATS__closure__5)))org_scalegraph_ucd_algorithm_STAT_STATS__closure__5())),
               reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >(sizeof(org_scalegraph_ucd_algorithm_STAT_STATS__closure__6)))org_scalegraph_ucd_algorithm_STAT_STATS__closure__6())));
    
    //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
      x10aux::makeStringLit("STAT LCC Iterate (LCC)"));
    {
        
        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(org::scalegraph::Config::get())->dumpProfXPregel(
          x10aux::makeStringLit("STAT LCC Iterate (LCC):"));
    }
    
    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<x10_long>* this54258 = (__extension__ ({
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
            x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > p__54254 =
              this->FMGL(LCC);
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10_long>* ret54256;
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
            x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > x__57394 =
              p__54254;
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
            if (!((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                         x10::lang::Place::place((x__57394)->location)))))
            {
                
                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("!(here == x$0.home)"))));
                }
                
            }
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10LocalAssign_c
            ret54256 = (x__57394)->__apply();
            ret54256;
        }))
        ;
        x10aux::nullCheck(this54258)->FMGL(value);
    }))
    ;
    
}

//#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::ucd::algorithm::STAT::STATS::run(
  x10::array::Array<x10::lang::String*>* args, org::scalegraph::graph::Graph* g) {
    
    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
    
    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix<x10_double> csr =
      x10aux::nullCheck(g)->createDistSparseMatrix<x10_double >(
        x10aux::nullCheck(org::scalegraph::Config::get())->dist1d(),
        x10aux::makeStringLit("weight"), true, true);
    
    //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
      x10aux::makeStringLit("Graph construction"));
    
    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::XPregelGraph<x10_long, x10_double>* xpregel =
      org::scalegraph::xpregel::XPregelGraph<void, void>::make<x10_long,
      x10_double >(csr);
    
    //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_double> result =
      (__extension__ ({
        xpregel->stealOutput<x10_double >(((x10_int)0));
    }))
    ;
    
    //#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10Return_c
    return true;
    
}

//#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::ucd::algorithm::STAT::STATS::main(x10::array::Array<x10::lang::String*>* args) {
    
    //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
    (__extension__ ({
        
        //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::ucd::algorithm::STAT::STATS* alloc50855 =
           ((new (memset(x10aux::alloc<org::scalegraph::ucd::algorithm::STAT::STATS>(), 0, sizeof(org::scalegraph::ucd::algorithm::STAT::STATS))) org::scalegraph::ucd::algorithm::STAT::STATS()))
        ;
        
        //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10ConstructorCall_c
        (alloc50855)->::org::scalegraph::ucd::algorithm::STAT::STATS::_constructor();
        alloc50855;
    }))
    ->execute(args);
}

//#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10MethodDecl_c
org::scalegraph::ucd::algorithm::STAT::STATS* org::scalegraph::ucd::algorithm::STAT::STATS::org__scalegraph__ucd__algorithm__STAT__STATS____this__org__scalegraph__ucd__algorithm__STAT__STATS(
  ) {
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::ucd::algorithm::STAT::STATS::_constructor(
  ) {
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::test::AlgorithmTest* this57395 = this;
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.AssignPropertyCall_c
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::ucd::algorithm::STAT::STATS::__fieldInitializers50695();
}
org::scalegraph::ucd::algorithm::STAT::STATS* org::scalegraph::ucd::algorithm::STAT::STATS::_make(
  ) {
    org::scalegraph::ucd::algorithm::STAT::STATS* this_ = new (memset(x10aux::alloc<org::scalegraph::ucd::algorithm::STAT::STATS>(), 0, sizeof(org::scalegraph::ucd::algorithm::STAT::STATS))) org::scalegraph::ucd::algorithm::STAT::STATS();
    this_->_constructor();
    return this_;
}



//#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::ucd::algorithm::STAT::STATS::__fieldInitializers50695(
  ) {
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(edgesTotal) = ((x10_long)0ll);
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(lccAverage) = ((x10_long)0ll);
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(counter) = ((x10_int)0);
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(verticesTotal) = ((x10_long)0ll);
    
    //#line 15 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(LCC) = x10::lang::GlobalRef<x10::lang::Cell<x10_long>* >::_make((__extension__ ({
                                                                                   
                                                                                   //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/STAT/STATS.x10": x10.ast.X10LocalDecl_c
                                                                                   x10::lang::Cell<x10_long>* alloc50856 =
                                                                                     
                                                                                   ((new (memset(x10aux::alloc<x10::lang::Cell<x10_long> >(), 0, sizeof(x10::lang::Cell<x10_long>))) x10::lang::Cell<x10_long>()))
                                                                                   ;
                                                                                   
                                                                                   //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": polyglot.ast.Empty_c
                                                                                   ;
                                                                                   
                                                                                   //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                                   alloc50856->
                                                                                     FMGL(value) =
                                                                                     ((x10_long)0ll);
                                                                                   alloc50856;
                                                                               }))
                                                                               );
}
const x10aux::serialization_id_t org::scalegraph::ucd::algorithm::STAT::STATS::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::ucd::algorithm::STAT::STATS::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::ucd::algorithm::STAT::STATS::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::test::AlgorithmTest::_serialize_body(buf);
    buf.write(this->FMGL(edgesTotal));
    buf.write(this->FMGL(lccAverage));
    buf.write(this->FMGL(counter));
    buf.write(this->FMGL(verticesTotal));
    buf.write(this->FMGL(LCC));
    
}

x10::lang::Reference* org::scalegraph::ucd::algorithm::STAT::STATS::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::ucd::algorithm::STAT::STATS* this_ = new (memset(x10aux::alloc<org::scalegraph::ucd::algorithm::STAT::STATS>(), 0, sizeof(org::scalegraph::ucd::algorithm::STAT::STATS))) org::scalegraph::ucd::algorithm::STAT::STATS();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::ucd::algorithm::STAT::STATS::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::test::AlgorithmTest::_deserialize_body(buf);
    FMGL(edgesTotal) = buf.read<x10_long>();
    FMGL(lccAverage) = buf.read<x10_long>();
    FMGL(counter) = buf.read<x10_int>();
    FMGL(verticesTotal) = buf.read<x10_long>();
    FMGL(LCC) = buf.read<x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > >();
}

x10aux::RuntimeType org::scalegraph::ucd::algorithm::STAT::STATS::rtt;
void org::scalegraph::ucd::algorithm::STAT::STATS::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::test::AlgorithmTest>()};
    rtt.initStageTwo("org.scalegraph.ucd.algorithm.STAT.STATS",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_ucd_algorithm_STAT_STATS__closure__1>org_scalegraph_ucd_algorithm_STAT_STATS__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__1::__apply, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_ucd_algorithm_STAT_STATS__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_ucd_algorithm_STAT_STATS__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_ucd_algorithm_STAT_STATS__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long>::itable<org_scalegraph_ucd_algorithm_STAT_STATS__closure__2>org_scalegraph_ucd_algorithm_STAT_STATS__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__2::__apply, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_ucd_algorithm_STAT_STATS__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long> >, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_ucd_algorithm_STAT_STATS__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_ucd_algorithm_STAT_STATS__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean>::itable<org_scalegraph_ucd_algorithm_STAT_STATS__closure__3>org_scalegraph_ucd_algorithm_STAT_STATS__closure__3::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__3::__apply, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__3::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_ucd_algorithm_STAT_STATS__closure__3::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__3::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_ucd_algorithm_STAT_STATS__closure__3::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_ucd_algorithm_STAT_STATS__closure__3::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, org::scalegraph::util::MemoryChunk<x10_long>, x10_long>*, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > >::itable<org_scalegraph_ucd_algorithm_STAT_STATS__closure__4>org_scalegraph_ucd_algorithm_STAT_STATS__closure__4::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__4::__apply, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__4::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_ucd_algorithm_STAT_STATS__closure__4::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, org::scalegraph::util::MemoryChunk<x10_long>, x10_long>*, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > > >, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__4::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_ucd_algorithm_STAT_STATS__closure__4::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_ucd_algorithm_STAT_STATS__closure__4::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long>::itable<org_scalegraph_ucd_algorithm_STAT_STATS__closure__5>org_scalegraph_ucd_algorithm_STAT_STATS__closure__5::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__5::__apply, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__5::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_ucd_algorithm_STAT_STATS__closure__5::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long> >, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__5::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_ucd_algorithm_STAT_STATS__closure__5::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_ucd_algorithm_STAT_STATS__closure__5::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean>::itable<org_scalegraph_ucd_algorithm_STAT_STATS__closure__6>org_scalegraph_ucd_algorithm_STAT_STATS__closure__6::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__6::__apply, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__6::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_ucd_algorithm_STAT_STATS__closure__6::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >, &org_scalegraph_ucd_algorithm_STAT_STATS__closure__6::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_ucd_algorithm_STAT_STATS__closure__6::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_ucd_algorithm_STAT_STATS__closure__6::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of STATS */
/*************************************************/
