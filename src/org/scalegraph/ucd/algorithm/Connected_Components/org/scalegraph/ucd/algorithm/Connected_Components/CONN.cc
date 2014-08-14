/*************************************************/
/* START of CONN */
#include <org/scalegraph/ucd/algorithm/Connected_Components/CONN.h>

#include <org/scalegraph/test/AlgorithmTest.h>
#include <x10/lang/Long.h>
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
#include <x10/lang/Boolean.h>
#include <org/scalegraph/xpregel/MessageCommunicator.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <x10/lang/LongRange.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Int.h>
#include <x10/array/Array.h>
#include <org/scalegraph/graph/Graph.h>
#include <org/scalegraph/blas/DistSparseMatrix.h>
#include <org/scalegraph/util/Dist2D.h>
#include <org/scalegraph/test/STest.h>
#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_CONNECTED_COMPONENTS_CONN__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_UCD_ALGORITHM_CONNECTED_COMPONENTS_CONN__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>* ctx, org::scalegraph::util::MemoryChunk<x10_long> messages) {
        
        //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
        x10_boolean isLabelChanged = true;
        
        //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals((__extension__ ({
                                       x10aux::nullCheck(x10aux::nullCheck(ctx)->
                                                           FMGL(mCtx))->
                                         FMGL(mSuperstep);
                                   }))
                                   , ((x10_int)0)))) {
            
            //#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>::setValue(
              x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>::id());
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10_long>* this55778 = (__extension__ ({
                
                //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > p__55779 =
                  saved_this->FMGL(minLabelRef);
                
                //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<x10_long>* ret55780;
                
                //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > x__55775 =
                  p__55779;
                
                //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
                if (!((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                             x10::lang::Place::place((x__55775)->location)))))
                {
                    
                    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("!(here == x$0.home)"))));
                    }
                    
                }
                
                //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10LocalAssign_c
                ret55780 = (x__55775)->__apply();
                ret55780;
            }))
            ;
            
            //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_long x55781 = x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>::value();
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_long x55776 = x55781;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
            x10_long ret55777;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(this55778)->FMGL(value) = x55776;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
            ret55777 = x55776;
            
            //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
            ret55777;
        }
        
        //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
        if (isLabelChanged) {
            
            //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10LocalAssign_c
            isLabelChanged = false;
            
            //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> neighbours =
              (__extension__ ({
                
                //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<x10_long>, org::scalegraph::util::MemoryChunk<x10_double> > this51499 =
                  x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>::outEdges();
                this51499->FMGL(val1);
            }))
            ;
            
            //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i50532domain55792 = (__extension__ ({
                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((neighbours->
                                                                             FMGL(data)->
                                                                             FMGL(size)) - (((x10_long)1ll)))));
            }))
            ;
            
            //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
            x10_long i50532max55793 = i50532domain55792->
                                        FMGL(max);
            
            //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": polyglot.ast.For_c
            {
                x10_long i55794;
                for (
                     //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                     i55794 = ((x10_long)0ll); ((i55794) <= (i50532max55793));
                     
                     //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10LocalAssign_c
                     i55794 = ((x10_long) ((i55794) + (((x10_long)1ll)))))
                {
                    
                    //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                    x10_long i55795 = i55794;
                    
                    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10Call_c
                    saved_this->calculateMinLabel((__extension__ ({
                                                      
                                                      //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                      x10_long index55784 =
                                                        i55795;
                                                      
                                                      //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                      x10_long ret55785;
                                                      {
                                                          
                                                          //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                          if (!((neighbours->
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
                                                          if (((index55784) < (((x10_long) (((x10_int)0))))) ||
                                                              ((index55784) >= (neighbours->
                                                                                  FMGL(data)->
                                                                                  FMGL(size))))
                                                          {
                                                              
                                                              //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                              if (true)
                                                              {
                                                                  
                                                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                                  x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index55784), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                              }
                                                              
                                                          }
                                                          
                                                      }
                                                      
                                                      //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                      ret55785 =
                                                        (neighbours->
                                                           FMGL(data))[index55784];
                                                      ret55785;
                                                  }))
                                                  );
                    
                    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals((__extension__ ({
                                                    
                                                    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                                                    x10::lang::Cell<x10_long>* this55786 =
                                                      (__extension__ ({
                                                        
                                                        //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                                                        x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > p__55787 =
                                                          saved_this->
                                                            FMGL(minLabelRef);
                                                        
                                                        //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                                                        x10::lang::Cell<x10_long>* ret55788;
                                                        
                                                        //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                                                        x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > x__55782 =
                                                          p__55787;
                                                        
                                                        //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
                                                        if (!((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                                                                     x10::lang::Place::place((x__55782)->location)))))
                                                        {
                                                            
                                                            //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
                                                            if (true)
                                                            {
                                                                
                                                                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": polyglot.ast.Throw_c
                                                                x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("!(here == x$0.home)"))));
                                                            }
                                                            
                                                        }
                                                        
                                                        //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret55788 =
                                                          (x__55782)->__apply();
                                                        ret55788;
                                                    }))
                                                    ;
                                                    x10aux::nullCheck(this55786)->
                                                      FMGL(value);
                                                }))
                                                , x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>::id())))
                    {
                        
                        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>::setValue(
                          (__extension__ ({
                              
                              //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                              x10::lang::Cell<x10_long>* this55789 =
                                (__extension__ ({
                                  
                                  //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                                  x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > p__55790 =
                                    saved_this->FMGL(minLabelRef);
                                  
                                  //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                                  x10::lang::Cell<x10_long>* ret55791;
                                  
                                  //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                                  x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > x__55783 =
                                    p__55790;
                                  
                                  //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
                                  if (!((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                                               x10::lang::Place::place((x__55783)->location)))))
                                  {
                                      
                                      //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
                                      if (true) {
                                          
                                          //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": polyglot.ast.Throw_c
                                          x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("!(here == x$0.home)"))));
                                      }
                                      
                                  }
                                  
                                  //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret55791 = (x__55783)->__apply();
                                  ret55791;
                              }))
                              ;
                              x10aux::nullCheck(this55789)->
                                FMGL(value);
                          }))
                          );
                        
                        //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10LocalAssign_c
                        isLabelChanged = true;
                    }
                    
                }
            }
            
            //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>::sendMessageToAllNeighbors(
              x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>::id());
        }
        
    }
    
    // captured environment
    org::scalegraph::ucd::algorithm::Connected_Components::CONN* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1* storage = x10aux::alloc<org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1>();
        buf.record_reference(storage);
        org::scalegraph::ucd::algorithm::Connected_Components::CONN* that_saved_this = buf.read<org::scalegraph::ucd::algorithm::Connected_Components::CONN*>();
        org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1* this_ = new (storage) org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1(that_saved_this);
        return this_;
    }
    
    org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1(org::scalegraph::ucd::algorithm::Connected_Components::CONN* saved_this) : saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10:21-54";
    }

};

#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_CONNECTED_COMPONENTS_CONN__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_UCD_ALGORITHM_CONNECTED_COMPONENTS_CONN__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_UCD_ALGORITHM_CONNECTED_COMPONENTS_CONN__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean>::itable<org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_boolean __apply(x10_int superstep, x10_long aggVal) {
        
        //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10Return_c
        return true;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2* storage = x10aux::alloc<org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2>();
        buf.record_reference(storage);
        org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2* this_ = new (storage) org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2();
        return this_;
    }
    
    org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10:56-58";
    }

};

#endif // ORG_SCALEGRAPH_UCD_ALGORITHM_CONNECTED_COMPONENTS_CONN__CLOSURE__2_CLOSURE

//#line 13 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10FieldDecl_c

//#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10FieldDecl_c

//#line 16 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::ucd::algorithm::Connected_Components::CONN::perform_CONN(
  org::scalegraph::xpregel::XPregelGraph<x10_long, x10_double>* g) {
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
    
    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(g)->org::scalegraph::xpregel::XPregelGraph<x10_long, x10_double>::updateInEdge();
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(x10aux::makeStringLit("Update In Edge"));
    {
        
        //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(org::scalegraph::Config::get())->dumpProfXPregel(
          x10aux::makeStringLit("Update In Edge:"));
    }
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(g)->iterate<x10_long, x10_long >(reinterpret_cast<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1)))org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1(this))),
                                                       x10aux::class_cast_unchecked<x10::lang::Fun_0_1<org::scalegraph::util::MemoryChunk<x10_long>, x10_long>*>(X10_NULL),
                                                       reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >(sizeof(org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2)))org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2())));
    
    //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
      x10aux::makeStringLit("CONN Main Iterate (debug)"));
    {
        
        //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(org::scalegraph::Config::get())->dumpProfXPregel(
          x10aux::makeStringLit("CONN Main Iterate (debug):"));
    }
}

//#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::ucd::algorithm::Connected_Components::CONN::calculateMinLabel(
  x10_long neighbour) {
    
    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
    if (((neighbour) < ((__extension__ ({
            
            //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10_long>* this52676 = (__extension__ ({
                
                //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > p__52672 =
                  this->FMGL(minLabelRef);
                
                //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<x10_long>* ret52674;
                
                //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > x__55796 =
                  p__52672;
                
                //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
                if (!((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                             x10::lang::Place::place((x__55796)->location)))))
                {
                    
                    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("!(here == x$0.home)"))));
                    }
                    
                }
                
                //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10LocalAssign_c
                ret52674 = (x__55796)->__apply();
                ret52674;
            }))
            ;
            x10aux::nullCheck(this52676)->FMGL(value);
        }))
        ))) {
        
        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<x10_long>* this55800 = (__extension__ ({
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
            x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > p__55801 =
              this->FMGL(minLabelRef);
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10_long>* ret55802;
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
            x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > x__55797 =
              p__55801;
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
            if (!((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                         x10::lang::Place::place((x__55797)->location)))))
            {
                
                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("!(here == x$0.home)"))));
                }
                
            }
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10LocalAssign_c
            ret55802 = (x__55797)->__apply();
            ret55802;
        }))
        ;
        
        //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        x10_long x55803 = neighbour;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        x10_long x55798 = x55803;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        x10_long ret55799;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(this55800)->FMGL(value) = x55798;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
        ret55799 = x55798;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
        ret55799;
    }
    
}

//#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::ucd::algorithm::Connected_Components::CONN::run(
  x10::array::Array<x10::lang::String*>* args, org::scalegraph::graph::Graph* g) {
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::blas::DistSparseMatrix<x10_double> csr =
      x10aux::nullCheck(g)->createDistSparseMatrix<x10_double >(
        x10aux::nullCheck(org::scalegraph::Config::get())->dist1d(),
        x10aux::makeStringLit("weight"), true, true);
    
    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::xpregel::XPregelGraph<x10_long, x10_double>* xpregel =
      org::scalegraph::xpregel::XPregelGraph<void, void>::make<x10_long,
      x10_double >(csr);
    
    //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10Call_c
    this->perform_CONN(xpregel);
    
    //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10Return_c
    return true;
    
}

//#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::ucd::algorithm::Connected_Components::CONN::main(
  x10::array::Array<x10::lang::String*>* args) {
    
    //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10Call_c
    (__extension__ ({
        
        //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::ucd::algorithm::Connected_Components::CONN* alloc50511 =
           ((new (memset(x10aux::alloc<org::scalegraph::ucd::algorithm::Connected_Components::CONN>(), 0, sizeof(org::scalegraph::ucd::algorithm::Connected_Components::CONN))) org::scalegraph::ucd::algorithm::Connected_Components::CONN()))
        ;
        
        //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10ConstructorCall_c
        (alloc50511)->::org::scalegraph::ucd::algorithm::Connected_Components::CONN::_constructor();
        alloc50511;
    }))
    ->execute(args);
}

//#line 11 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10MethodDecl_c
org::scalegraph::ucd::algorithm::Connected_Components::CONN*
  org::scalegraph::ucd::algorithm::Connected_Components::CONN::org__scalegraph__ucd__algorithm__Connected_Components__CONN____this__org__scalegraph__ucd__algorithm__Connected_Components__CONN(
  ) {
    
    //#line 11 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 11 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::ucd::algorithm::Connected_Components::CONN::_constructor(
  ) {
    
    //#line 11 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::test::AlgorithmTest* this55804 = this;
    
    //#line 11 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.AssignPropertyCall_c
    
    //#line 11 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::ucd::algorithm::Connected_Components::CONN::__fieldInitializers50498();
}
org::scalegraph::ucd::algorithm::Connected_Components::CONN* org::scalegraph::ucd::algorithm::Connected_Components::CONN::_make(
  ) {
    org::scalegraph::ucd::algorithm::Connected_Components::CONN* this_ = new (memset(x10aux::alloc<org::scalegraph::ucd::algorithm::Connected_Components::CONN>(), 0, sizeof(org::scalegraph::ucd::algorithm::Connected_Components::CONN))) org::scalegraph::ucd::algorithm::Connected_Components::CONN();
    this_->_constructor();
    return this_;
}



//#line 11 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::ucd::algorithm::Connected_Components::CONN::__fieldInitializers50498(
  ) {
    
    //#line 11 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(minLabel) = ((x10_long)0ll);
    
    //#line 11 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(minLabelRef) = x10::lang::GlobalRef<x10::lang::Cell<x10_long>* >::_make((__extension__ ({
                                                                                           
                                                                                           //#line 14 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/ucd/algorithm/Connected_Components/CONN.x10": x10.ast.X10LocalDecl_c
                                                                                           x10::lang::Cell<x10_long>* alloc50512 =
                                                                                             
                                                                                           ((new (memset(x10aux::alloc<x10::lang::Cell<x10_long> >(), 0, sizeof(x10::lang::Cell<x10_long>))) x10::lang::Cell<x10_long>()))
                                                                                           ;
                                                                                           
                                                                                           //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": polyglot.ast.Empty_c
                                                                                           ;
                                                                                           
                                                                                           //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                                           alloc50512->
                                                                                             FMGL(value) =
                                                                                             ((x10_long)0ll);
                                                                                           alloc50512;
                                                                                       }))
                                                                                       );
}
const x10aux::serialization_id_t org::scalegraph::ucd::algorithm::Connected_Components::CONN::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::ucd::algorithm::Connected_Components::CONN::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::ucd::algorithm::Connected_Components::CONN::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::test::AlgorithmTest::_serialize_body(buf);
    buf.write(this->FMGL(minLabel));
    buf.write(this->FMGL(minLabelRef));
    
}

x10::lang::Reference* org::scalegraph::ucd::algorithm::Connected_Components::CONN::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::ucd::algorithm::Connected_Components::CONN* this_ = new (memset(x10aux::alloc<org::scalegraph::ucd::algorithm::Connected_Components::CONN>(), 0, sizeof(org::scalegraph::ucd::algorithm::Connected_Components::CONN))) org::scalegraph::ucd::algorithm::Connected_Components::CONN();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::ucd::algorithm::Connected_Components::CONN::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::test::AlgorithmTest::_deserialize_body(buf);
    FMGL(minLabel) = buf.read<x10_long>();
    FMGL(minLabelRef) = buf.read<x10::lang::GlobalRef<x10::lang::Cell<x10_long>* > >();
}

x10aux::RuntimeType org::scalegraph::ucd::algorithm::Connected_Components::CONN::rtt;
void org::scalegraph::ucd::algorithm::Connected_Components::CONN::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::test::AlgorithmTest>()};
    rtt.initStageTwo("org.scalegraph.ucd.algorithm.Connected_Components.CONN",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1>org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1::__apply, &org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::xpregel::VertexContext<x10_long, x10_double, x10_long, x10_long>*, org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean>::itable<org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2>org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2::__apply, &org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_long, x10_boolean> >, &org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_ucd_algorithm_Connected_Components_CONN__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of CONN */
/*************************************************/
