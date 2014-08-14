/*************************************************/
/* START of Dist2D */
#include <org/scalegraph/util/Dist2D.h>

#include <x10/lang/Any.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <org/scalegraph/util/Dist2D__LocalData.h>
#include <x10/lang/Int.h>
#include <x10/array/Region.h>
#include <x10/lang/Cell.h>
#include <x10/util/Team.h>
#include <x10/lang/Boolean.h>
#include <x10/array/Array.h>
#include <x10/lang/Place.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/util/HashMap.h>
#include <x10/array/Point.h>
#include <x10/array/RectRegion1D.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/util/Box.h>
#include <x10/lang/Iterator.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <org/scalegraph/util/MathAppend.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#ifndef ORG_SCALEGRAPH_UTIL_DIST2D__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_UTIL_DIST2D__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class org_scalegraph_util_Dist2D__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10::lang::Place, x10::array::Point*>::itable<org_scalegraph_util_Dist2D__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::array::Point* __apply(x10::lang::Place p) {
        
        //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* __desugarer__var__19__99562 = (__extension__ ({
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::util::Box<x10::array::Point*>* this99561 = placeMap->__apply(
                                                                  p);
                x10aux::nullCheck(this99561)->FMGL(value);
            }))
            ;
            
            //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* ret99563;
            
            //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
            if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__19__99562)->
                                           FMGL(rank), ((x10_int)2)))))
            {
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("x10.array.Point{self.rank==2}"))));
                }
                
            }
            
            //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
            ret99563 = __desugarer__var__19__99562;
            ret99563;
        }))
        ;
        
    }
    
    // captured environment
    x10::util::HashMap<x10::lang::Place, x10::array::Point*>* placeMap;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->placeMap);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Dist2D__closure__1* storage = x10aux::alloc<org_scalegraph_util_Dist2D__closure__1>();
        buf.record_reference(storage);
        x10::util::HashMap<x10::lang::Place, x10::array::Point*>* that_placeMap = buf.read<x10::util::HashMap<x10::lang::Place, x10::array::Point*>*>();
        org_scalegraph_util_Dist2D__closure__1* this_ = new (storage) org_scalegraph_util_Dist2D__closure__1(that_placeMap);
        return this_;
    }
    
    org_scalegraph_util_Dist2D__closure__1(x10::util::HashMap<x10::lang::Place, x10::array::Point*>* placeMap) : placeMap(placeMap) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10::lang::Place, x10::array::Point*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10::lang::Place, x10::array::Point*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10:92";
    }

};

#endif // ORG_SCALEGRAPH_UTIL_DIST2D__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_DIST2D__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_UTIL_DIST2D__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class org_scalegraph_util_Dist2D__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10::array::Point*, x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::itable<org_scalegraph_util_Dist2D__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* __apply(x10::array::Point* p) {
        
        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int r = x10aux::nullCheck(p)->x10::array::Point::__apply(((x10_int)0));
        
        //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int c = x10aux::nullCheck(p)->x10::array::Point::__apply(((x10_int)1));
        
        //#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int role = ((x10_int) ((r) + (((x10_int) ((c) * (R))))));
        
        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* allTeam;
        
        //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if (create_allteam_) {
            
            //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10_int z = ((x10_int) (((__extension__ ({
                
                //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::array::Array<x10_int>* this99566 = x10aux::nullCheck(parentTeam)->role();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret99567;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret99568; __ret99568: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this99566)->FMGL(rail)) {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret99567 = (x10aux::nullCheck(this99566)->FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret99568_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this99566)->FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret99567 = (x10aux::nullCheck(this99566)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this99566)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret99568_end_;
                    }
                    
                }goto __ret99568_end_; __ret99568_end_: ;
                }
                ret99567;
                }))
                ) / x10aux::zeroCheck(RC)));
                
            
            //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
            allTeam = x10aux::nullCheck(parentTeam)->split(
                        (__extension__ ({
                            
                            //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                            x10::array::Array<x10_int>* this99570 =
                              x10aux::nullCheck(parentTeam)->role();
                            
                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                            ;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int ret99571;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret99572; __ret99572: {
                            {
                                
                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(this99570)->
                                      FMGL(rail)) {
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret99571 = (x10aux::nullCheck(this99570)->
                                                  FMGL(raw))->__apply(((x10_int)0));
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret99572_end_;
                                } else {
                                    
                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (true && !(x10aux::nullCheck(this99570)->
                                                    FMGL(region)->contains(
                                                    ((x10_int)0))))
                                    {
                                        
                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                        x10::array::Array<void>::raiseBoundsError(
                                          ((x10_int)0));
                                    }
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret99571 = (x10aux::nullCheck(this99570)->
                                                  FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this99570)->
                                                                                                      FMGL(layout_min0)))));
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret99572_end_;
                                }
                                
                            }goto __ret99572_end_; __ret99572_end_: ;
                            }
                            ret99571;
                            }))
                            , z, role);
            
            //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
            {
                x10::lang::Iterator<x10::lang::Place>* pp90733;
                for (
                     //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                     pp90733 = x10aux::nullCheck(x10aux::nullCheck(parentTeam)->placeGroup())->iterator();
                     x10::lang::Iterator<x10::lang::Place>::hasNext(x10aux::nullCheck(pp90733));
                     ) {
                    
                    //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Place pp = x10::lang::Iterator<x10::lang::Place>::next(x10aux::nullCheck(pp90733));
                    
                    //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(parentTeam)->barrier(
                      (__extension__ ({
                          
                          //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                          x10::array::Array<x10_int>* this99574 =
                            x10aux::nullCheck(parentTeam)->role();
                          
                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                          ;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10_int ret99575;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                          goto __ret99576; __ret99576: {
                          {
                              
                              //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                              if (x10aux::nullCheck(this99574)->
                                    FMGL(rail)) {
                                  
                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret99575 = (x10aux::nullCheck(this99574)->
                                                FMGL(raw))->__apply(((x10_int)0));
                                  
                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                  goto __ret99576_end_;
                              } else {
                                  
                                  //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                  if (true && !(x10aux::nullCheck(this99574)->
                                                  FMGL(region)->contains(
                                                  ((x10_int)0))))
                                  {
                                      
                                      //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                      x10::array::Array<void>::raiseBoundsError(
                                        ((x10_int)0));
                                  }
                                  
                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret99575 = (x10aux::nullCheck(this99574)->
                                                FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this99574)->
                                                                                                    FMGL(layout_min0)))));
                                  
                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                  goto __ret99576_end_;
                              }
                              
                          }goto __ret99576_end_; __ret99576_end_: ;
                          }
                          ret99575;
                          }))
                          );
                    }
                }
                
            } else {
                
                //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                allTeam = parentTeam;
            }
            
            //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10::util::Team*>* rowTeam;
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10::util::Team*>* columnTeam;
            
            //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
            if (oned) {
                
                //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(R, ((x10_int)1))))
                {
                    
                    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                    rowTeam = (__extension__ ({
                        
                        //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::util::Team* x99577 = allTeam;
                        (__extension__ ({
                            
                            //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                            x10::lang::Cell<x10::util::Team*>* alloc99578 =
                               ((new (memset(x10aux::alloc<x10::lang::Cell<x10::util::Team*> >(), 0, sizeof(x10::lang::Cell<x10::util::Team*>))) x10::lang::Cell<x10::util::Team*>()))
                            ;
                            
                            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                            x10::util::Team* x99700 = x99577;
                            
                            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                            alloc99578->FMGL(value) = x99700;
                            alloc99578;
                        }))
                        ;
                    }))
                    ;
                    
                    //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                    columnTeam = (x10aux::class_cast_unchecked<x10::lang::Cell<x10::util::Team*>*>(X10_NULL));
                } else {
                    
                    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                    rowTeam = (x10aux::class_cast_unchecked<x10::lang::Cell<x10::util::Team*>*>(X10_NULL));
                    
                    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                    columnTeam = (__extension__ ({
                        
                        //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::util::Team* x99581 = allTeam;
                        (__extension__ ({
                            
                            //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                            x10::lang::Cell<x10::util::Team*>* alloc99582 =
                               ((new (memset(x10aux::alloc<x10::lang::Cell<x10::util::Team*> >(), 0, sizeof(x10::lang::Cell<x10::util::Team*>))) x10::lang::Cell<x10::util::Team*>()))
                            ;
                            
                            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                            x10::util::Team* x99701 = x99581;
                            
                            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                            alloc99582->FMGL(value) = x99701;
                            alloc99582;
                        }))
                        ;
                    }))
                    ;
                }
                
            } else {
                
                //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                rowTeam = (__extension__ ({
                    
                    //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                    x10::util::Team* x99585 = x10aux::nullCheck(allTeam)->split(
                                                role, r, c);
                    (__extension__ ({
                        
                        //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::lang::Cell<x10::util::Team*>* alloc99586 =
                           ((new (memset(x10aux::alloc<x10::lang::Cell<x10::util::Team*> >(), 0, sizeof(x10::lang::Cell<x10::util::Team*>))) x10::lang::Cell<x10::util::Team*>()))
                        ;
                        
                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::util::Team* x99702 = x99585;
                        
                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc99586->FMGL(value) = x99702;
                        alloc99586;
                    }))
                    ;
                }))
                ;
                
                //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                columnTeam = (__extension__ ({
                    
                    //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                    x10::util::Team* x99589 = x10aux::nullCheck(allTeam)->split(
                                                role, c, r);
                    (__extension__ ({
                        
                        //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::lang::Cell<x10::util::Team*>* alloc99590 =
                           ((new (memset(x10aux::alloc<x10::lang::Cell<x10::util::Team*> >(), 0, sizeof(x10::lang::Cell<x10::util::Team*>))) x10::lang::Cell<x10::util::Team*>()))
                        ;
                        
                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::util::Team* x99703 = x99589;
                        
                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc99590->FMGL(value) = x99703;
                        alloc99590;
                    }))
                    ;
                }))
                ;
            }
            
            //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* alloc90660 =
                   ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData> >(), 0, sizeof(x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>))) x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>()))
                ;
                
                //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Dist2D__LocalData x99711 =
                  (__extension__ ({
                    
                    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::Dist2D__LocalData alloc99712 =
                       org::scalegraph::util::Dist2D__LocalData::_alloc();
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::array::Region* mapping_99704 = mapping;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int nreplica_99705 = cycles;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::util::Team* parentTeam_99706 = parentTeam;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::util::Team* allTeam_99707 = allTeam;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Cell<x10::util::Team*>* rowTeam_99708 =
                      rowTeam;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Cell<x10::util::Team*>* columnTeam_99709 =
                      columnTeam;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::array::Point* herePt_99710 = p;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc99712->FMGL(mapping) = mapping_99704;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc99712->FMGL(nreplica) = nreplica_99705;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc99712->FMGL(parentTeam) = parentTeam_99706;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc99712->FMGL(allTeam) = allTeam_99707;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc99712->FMGL(rowTeam) = rowTeam_99708;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc99712->FMGL(columnTeam) = columnTeam_99709;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc99712->FMGL(herePt) = herePt_99710;
                    alloc99712;
                }))
                ;
                
                //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                alloc90660->FMGL(value) = x99711;
                alloc90660;
            }))
            ;
            }
            
            // captured environment
            x10_int R;
            x10_boolean create_allteam_;
            x10::util::Team* parentTeam;
            x10_int RC;
            x10_boolean oned;
            x10::array::Region* mapping;
            x10_int cycles;
            
            x10aux::serialization_id_t _get_serialization_id() {
                return _serialization_id;
            }
            
            void _serialize_body(x10aux::serialization_buffer &buf) {
                buf.write(this->R);
                buf.write(this->create_allteam_);
                buf.write(this->parentTeam);
                buf.write(this->RC);
                buf.write(this->oned);
                buf.write(this->mapping);
                buf.write(this->cycles);
            }
            
            template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
                org_scalegraph_util_Dist2D__closure__2* storage = x10aux::alloc<org_scalegraph_util_Dist2D__closure__2>();
                buf.record_reference(storage);
                x10_int that_R = buf.read<x10_int>();
                x10_boolean that_create_allteam_ = buf.read<x10_boolean>();
                x10::util::Team* that_parentTeam = buf.read<x10::util::Team*>();
                x10_int that_RC = buf.read<x10_int>();
                x10_boolean that_oned = buf.read<x10_boolean>();
                x10::array::Region* that_mapping = buf.read<x10::array::Region*>();
                x10_int that_cycles = buf.read<x10_int>();
                org_scalegraph_util_Dist2D__closure__2* this_ = new (storage) org_scalegraph_util_Dist2D__closure__2(that_R, that_create_allteam_, that_parentTeam, that_RC, that_oned, that_mapping, that_cycles);
                return this_;
            }
            
            org_scalegraph_util_Dist2D__closure__2(x10_int R, x10_boolean create_allteam_, x10::util::Team* parentTeam, x10_int RC, x10_boolean oned, x10::array::Region* mapping, x10_int cycles) : R(R), create_allteam_(create_allteam_), parentTeam(parentTeam), RC(RC), oned(oned), mapping(mapping), cycles(cycles) { }
            
            static const x10aux::serialization_id_t _serialization_id;
            
            static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10::array::Point*, x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*> >(); }
            virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10::array::Point*, x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*> >(); }
            
            x10::lang::String* toString() {
                return x10aux::makeStringLit(this->toNativeString());
            }
            
            const char* toNativeString() {
                return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10:92-132";
            }
        
        };
        
        #endif // ORG_SCALEGRAPH_UTIL_DIST2D__CLOSURE__2_CLOSURE
        namespace org { namespace scalegraph { namespace util { 
class Dist2D_ibox0 : public x10::lang::IBox<org::scalegraph::util::Dist2D> {
public:
    static x10::lang::Any::itable<Dist2D_ibox0 > itable;
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
x10::lang::Any::itable<Dist2D_ibox0 >  Dist2D_ibox0::itable(&Dist2D_ibox0::equals, &Dist2D_ibox0::hashCode, &Dist2D_ibox0::toString, &Dist2D_ibox0::typeName);
} } } 
x10::lang::Any::itable<org::scalegraph::util::Dist2D >  org::scalegraph::util::Dist2D::_itable_0(&org::scalegraph::util::Dist2D::equals, &org::scalegraph::util::Dist2D::hashCode, &org::scalegraph::util::Dist2D::toString, &org::scalegraph::util::Dist2D::typeName);
x10aux::itable_entry org::scalegraph::util::Dist2D::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::Dist2D::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::Dist2D>())};
x10aux::itable_entry org::scalegraph::util::Dist2D::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::Dist2D_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::Dist2D>())};

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_ROWS);
void org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_ROWS__do_init)() {
    FMGL(DISTRIBUTE_ROWS__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::Dist2D.DISTRIBUTE_ROWS");
    x10_int __var394__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(DISTRIBUTE_ROWS) = __var394__;
    FMGL(DISTRIBUTE_ROWS__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_ROWS__init)() {
    x10aux::StaticInitController::initField(&FMGL(DISTRIBUTE_ROWS__status), &FMGL(DISTRIBUTE_ROWS__do_init), &FMGL(DISTRIBUTE_ROWS__exception), "org::scalegraph::util::Dist2D.DISTRIBUTE_ROWS");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_ROWS__status);
x10::lang::CheckedThrowable* org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_ROWS__exception);

//#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_COLUMNS);
void org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_COLUMNS__do_init)() {
    FMGL(DISTRIBUTE_COLUMNS__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::Dist2D.DISTRIBUTE_COLUMNS");
    x10_int __var395__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(DISTRIBUTE_COLUMNS) = __var395__;
    FMGL(DISTRIBUTE_COLUMNS__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_COLUMNS__init)() {
    x10aux::StaticInitController::initField(&FMGL(DISTRIBUTE_COLUMNS__status), &FMGL(DISTRIBUTE_COLUMNS__do_init), &FMGL(DISTRIBUTE_COLUMNS__exception), "org::scalegraph::util::Dist2D.DISTRIBUTE_COLUMNS");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_COLUMNS__status);
x10::lang::CheckedThrowable* org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_COLUMNS__exception);
 /* static type Rect2D = x10.array.Region{self.rect==true, self.zeroBased==true, self.rank==2}; */ 

//#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10FieldDecl_c

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Dist2D::_constructor(x10::array::Region* mapping,
                                                 x10::util::Team* parentTeam,
                                                 x10_boolean oned) {
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.AssignPropertyCall_c
    
    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int R = ((x10_int) ((x10aux::nullCheck(mapping)->max(((x10_int)0))) + (((x10_int)1))));
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int C = ((x10_int) ((x10aux::nullCheck(mapping)->max(((x10_int)1))) + (((x10_int)1))));
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int RC = ((x10_int) ((R) * (C)));
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10::lang::Place>* places = x10aux::nullCheck(parentTeam)->places();
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int cycles = ((x10_int) ((x10aux::nullCheck(places)->FMGL(size)) / x10aux::zeroCheck(RC)));
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(((x10_int) ((R) * (C))),
                                                   x10aux::nullCheck(places)->
                                                     FMGL(size))));
    #endif//NO_ASSERTIONS
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if (oned && (!x10aux::struct_equals(R, ((x10_int)1))) && (!x10aux::struct_equals(C,
                                                                                     ((x10_int)1))))
    {
        
        //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make()));
    }
    
    //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10::util::HashMap<x10::lang::Place, x10::array::Point*>* placeMap =
       ((new (memset(x10aux::alloc<x10::util::HashMap<x10::lang::Place, x10::array::Point*> >(), 0, sizeof(x10::util::HashMap<x10::lang::Place, x10::array::Point*>))) x10::util::HashMap<x10::lang::Place, x10::array::Point*>()))
    ;
    
    //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
    (placeMap)->::x10::util::HashMap<x10::lang::Place, x10::array::Point*>::_constructor();
    
    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10::lang::Place>* orderedPlaces = 
    ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::Place> >(), 0, sizeof(x10::array::Array<x10::lang::Place>))) x10::array::Array<x10::lang::Place>()))
    ;
    
    //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int size99713 = x10aux::nullCheck(places)->FMGL(size);
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::array::RectRegion1D* myReg99678 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
    ;
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg99678)->::x10::array::RectRegion1D::_constructor(
      ((x10_int) ((size99713) - (((x10_int)1)))));
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg99678);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(rank) = ((x10_int)1);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(rect) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(zeroBased) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(rail) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(size) = size99713;
    
    //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(layout_min0) = orderedPlaces->FMGL(layout_stride1) =
      orderedPlaces->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
    
    //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::Place >(size99713, 8, false, true);
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int i90706max99714 = x10aux::nullCheck(mapping)->max(
                               ((x10_int)1));
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
    {
        x10_int i99715;
        for (
             //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
             i99715 = ((x10_int)0); ((i99715) <= (i90706max99714));
             
             //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
             i99715 = ((x10_int) ((i99715) + (((x10_int)1)))))
        {
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10_int c99716 = i99715;
            
            //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10_int i90688max99697 = x10aux::nullCheck(mapping)->max(
                                       ((x10_int)0));
            
            //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
            {
                x10_int i99698;
                for (
                     //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                     i99698 = ((x10_int)0); ((i99698) <= (i90688max99697));
                     
                     //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                     i99698 = ((x10_int) ((i99698) + (((x10_int)1)))))
                {
                    
                    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int r99699 = i99698;
                    
                    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int i99696 = x10aux::nullCheck(mapping)->indexOf(
                                       r99699, c99716);
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i99687 = ((x10_int) ((r99699) + (((x10_int) ((c99716) * (R))))));
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Place v99688 = (__extension__ ({
                        
                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_int i99689 = i99696;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10::lang::Place ret99690;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                        goto __ret99691; __ret99691: {
                        {
                            
                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (x10aux::nullCheck(places)->
                                  FMGL(rail)) {
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret99690 = (x10aux::nullCheck(places)->
                                              FMGL(raw))->__apply(i99689);
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret99691_end_;
                            } else {
                                
                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (true && !(x10aux::nullCheck(places)->
                                                FMGL(region)->contains(
                                                i99689)))
                                {
                                    
                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                    x10::array::Array<void>::raiseBoundsError(
                                      i99689);
                                }
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret99690 = (x10aux::nullCheck(places)->
                                              FMGL(raw))->__apply(((x10_int) ((i99689) - (x10aux::nullCheck(places)->
                                                                                            FMGL(layout_min0)))));
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret99691_end_;
                            }
                            
                        }goto __ret99691_end_; __ret99691_end_: ;
                        }
                        ret99690;
                        }))
                        ;
                        
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Place ret99692;
                    
                    //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (orderedPlaces->FMGL(raw))->__set(i99687, v99688);
                    
                    //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret99692 = v99688;
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                    ret99692;
                    
                    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int i90670max99693 = ((x10_int) ((cycles) - (((x10_int)1))));
                    
                    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
                    {
                        x10_int i99694;
                        for (
                             //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                             i99694 = ((x10_int)0); ((i99694) <= (i90670max99693));
                             
                             //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                             i99694 = ((x10_int) ((i99694) + (((x10_int)1)))))
                        {
                            
                            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                            x10_int j99695 = i99694;
                            
                            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
                            placeMap->put((__extension__ ({
                                              
                                              //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                              x10_int i99681 =
                                                ((x10_int) ((i99696) + (((x10_int) ((RC) * (j99695))))));
                                              
                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                              x10::lang::Place ret99682;
                                              
                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                              goto __ret99683; __ret99683: {
                                              {
                                                  
                                                  //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                  if (x10aux::nullCheck(places)->
                                                        FMGL(rail))
                                                  {
                                                      
                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                      ret99682 =
                                                        (x10aux::nullCheck(places)->
                                                           FMGL(raw))->__apply(i99681);
                                                      
                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                      goto __ret99683_end_;
                                                  } else {
                                                      
                                                      //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                      if (true &&
                                                          !(x10aux::nullCheck(places)->
                                                              FMGL(region)->contains(
                                                              i99681)))
                                                      {
                                                          
                                                          //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                          x10::array::Array<void>::raiseBoundsError(
                                                            i99681);
                                                      }
                                                      
                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                      ret99682 =
                                                        (x10aux::nullCheck(places)->
                                                           FMGL(raw))->__apply(((x10_int) ((i99681) - (x10aux::nullCheck(places)->
                                                                                                         FMGL(layout_min0)))));
                                                      
                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                      goto __ret99683_end_;
                                                  }
                                                  
                                              }goto __ret99683_end_; __ret99683_end_: ;
                                              }
                                              ret99682;
                                              }))
                                              , (__extension__ ({
                                                  
                                                  //#line 125 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                  x10_int i99684 =
                                                    r99699;
                                                  
                                                  //#line 125 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                  x10_int i99685 =
                                                    c99716;
                                                  (__extension__ ({
                                                      
                                                      //#line 125 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                      x10::array::Point* alloc99686 =
                                                         ((new (memset(x10aux::alloc<x10::array::Point>(), 0, sizeof(x10::array::Point))) x10::array::Point()))
                                                      ;
                                                      
                                                      //#line 51 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                      x10_int i99679 =
                                                        i99684;
                                                      
                                                      //#line 51 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                      x10_int i99680 =
                                                        i99685;
                                                      
                                                      //#line 52 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc99686->
                                                        FMGL(rank) =
                                                        ((x10_int)2);
                                                      
                                                      //#line 53 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc99686->
                                                        FMGL(c0) =
                                                        i99679;
                                                      
                                                      //#line 54 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc99686->
                                                        FMGL(c1) =
                                                        i99680;
                                                      
                                                      //#line 55 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc99686->
                                                        FMGL(c2) =
                                                        alloc99686->
                                                          FMGL(c3) =
                                                        ((x10_int)0);
                                                      
                                                      //#line 56 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc99686->
                                                        FMGL(cs) =
                                                        (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
                                                      alloc99686;
                                                  }))
                                                  ;
                                              }))
                                              );
                            }
                        }
                        
                    }
                    }
                    
            }
            }
            
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_boolean create_allteam = false;
        
        //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if (((cycles) > (((x10_int)1)))) {
            
            //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
            create_allteam = true;
        } else {
            
            //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10::lang::Place>* pp = x10aux::nullCheck(parentTeam)->places();
            
            //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
            {
                x10::lang::Iterator<x10::array::Point*>* id90724;
                for (
                     //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                     id90724 = x10aux::nullCheck(pp)->FMGL(region)->iterator();
                     x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id90724));
                     ) {
                    
                    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::array::Point* id244 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id90724));
                    
                    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int i = x10aux::nullCheck(id244)->x10::array::Point::__apply(
                                  ((x10_int)0));
                    
                    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals((__extension__ ({
                                                    
                                                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                    x10_int i99553 =
                                                      i;
                                                    
                                                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                    x10::lang::Place ret99554;
                                                    
                                                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                    goto __ret99555; __ret99555: {
                                                    {
                                                        
                                                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                        if (x10aux::nullCheck(pp)->
                                                              FMGL(rail))
                                                        {
                                                            
                                                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                            ret99554 =
                                                              (x10aux::nullCheck(pp)->
                                                                 FMGL(raw))->__apply(i99553);
                                                            
                                                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                            goto __ret99555_end_;
                                                        }
                                                        else
                                                        {
                                                            
                                                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                            if (true &&
                                                                !(x10aux::nullCheck(pp)->
                                                                    FMGL(region)->contains(
                                                                    i99553)))
                                                            {
                                                                
                                                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                x10::array::Array<void>::raiseBoundsError(
                                                                  i99553);
                                                            }
                                                            
                                                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                            ret99554 =
                                                              (x10aux::nullCheck(pp)->
                                                                 FMGL(raw))->__apply(((x10_int) ((i99553) - (x10aux::nullCheck(pp)->
                                                                                                               FMGL(layout_min0)))));
                                                            
                                                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                            goto __ret99555_end_;
                                                        }
                                                        
                                                    }goto __ret99555_end_; __ret99555_end_: ;
                                                    }
                                                    ret99554;
                                                    }))
                                                    , (__extension__ ({
                                                        
                                                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10_int i99556 =
                                                          i;
                                                        
                                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10::lang::Place ret99557;
                                                        
                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret99557 =
                                                          (orderedPlaces->
                                                             FMGL(raw))->__apply(i99556);
                                                        ret99557;
                                                    }))
                                                    ))) {
                            
                            //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                            create_allteam = true;
                            
                            //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Branch_c
                            break;
                        }
                        
                    }
                }
                
            }
            
        
        //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_boolean create_allteam_ = create_allteam;
        
        //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
        (*this)->FMGL(data) = x10::lang::PlaceLocalHandle<void>::make<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*,
                              x10::array::Point* >(x10aux::nullCheck(parentTeam)->placeGroup(),
                                                   reinterpret_cast<x10::lang::Fun_0_1<x10::lang::Place, x10::array::Point*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10::lang::Place, x10::array::Point*> >(sizeof(org_scalegraph_util_Dist2D__closure__1)))org_scalegraph_util_Dist2D__closure__1(placeMap))),
                                                   reinterpret_cast<x10::lang::Fun_0_1<x10::array::Point*, x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10::array::Point*, x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*> >(sizeof(org_scalegraph_util_Dist2D__closure__2)))org_scalegraph_util_Dist2D__closure__2(R, create_allteam_, parentTeam, RC, oned, mapping, cycles))));
        }
        org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::_make(
          x10::array::Region* mapping, x10::util::Team* parentTeam,
          x10_boolean oned) {
            org::scalegraph::util::Dist2D this_; 
            this_->_constructor(mapping, parentTeam, oned);
            return this_;
        }
        
        
        
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make2D(
      x10::util::Team* parentTeam, x10_int R, x10_int C) {
        
        //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D alloc90661 =  org::scalegraph::util::Dist2D::_alloc();
            
            //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
            (alloc90661)->::org::scalegraph::util::Dist2D::_constructor(
              (__extension__ ({
                  
                  //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::array::Region* __desugarer__var__20__99603 =
                    x10::array::Region::makeRectangular<x10_int,
                    x10_int >((x10::array::Array<x10_int>*)(__extension__ ({
                                  x10::array::Array<x10_int>* __var397__(x10::array::Array<x10_int>::_make(2));
                                  __var397__->__set(0, 
                                  (((x10_int)0)));
                                  __var397__->__set(1, 
                                  (((x10_int)0)));
                                  __var397__;
                              })), (x10::array::Array<x10_int>*)(__extension__ ({
                                  x10::array::Array<x10_int>* __var398__(x10::array::Array<x10_int>::_make(2));
                                  __var398__->__set(0, 
                                  (((x10_int) ((R) - (((x10_int)1))))));
                                  __var398__->__set(1, 
                                  (((x10_int) ((C) - (((x10_int)1))))));
                                  __var398__;
                              })));
                  
                  //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::array::Region* ret99604;
                  
                  //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                  if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__20__99603)->
                                                 FMGL(rect),
                                               true)) && (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__20__99603)->
                                                                                  FMGL(zeroBased),
                                                                                true)) &&
                      (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__20__99603)->
                                               FMGL(rank),
                                             ((x10_int)2)))))
                  {
                      
                      //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                      if (true) {
                          
                          //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
                          x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("x10.array.Region{self.rect==true, self.zeroBased==true, self.rank==2}"))));
                      }
                      
                  }
                  
                  //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                  ret99604 = __desugarer__var__20__99603;
                  ret99604;
              }))
              , parentTeam, false);
            alloc90661;
        }))
        ;
        
    }
    
    //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make2D(
      x10::util::Team* parentTeam, x10_int R) {
        
        //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D alloc90662 =  org::scalegraph::util::Dist2D::_alloc();
            
            //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
            (alloc90662)->::org::scalegraph::util::Dist2D::_constructor(
              (__extension__ ({
                  
                  //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::array::Region* __desugarer__var__21__99606 =
                    x10::array::Region::makeRectangular<x10_int,
                    x10_int >((x10::array::Array<x10_int>*)(__extension__ ({
                                  x10::array::Array<x10_int>* __var400__(x10::array::Array<x10_int>::_make(2));
                                  __var400__->__set(0, 
                                  (((x10_int)0)));
                                  __var400__->__set(1, 
                                  (((x10_int)0)));
                                  __var400__;
                              })), (x10::array::Array<x10_int>*)(__extension__ ({
                                  x10::array::Array<x10_int>* __var401__(x10::array::Array<x10_int>::_make(2));
                                  __var401__->__set(0, 
                                  (((x10_int) ((R) - (((x10_int)1))))));
                                  __var401__->__set(1, 
                                  (((x10_int) ((R) - (((x10_int)1))))));
                                  __var401__;
                              })));
                  
                  //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::array::Region* ret99607;
                  
                  //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                  if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__21__99606)->
                                                 FMGL(rect),
                                               true)) && (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__21__99606)->
                                                                                  FMGL(zeroBased),
                                                                                true)) &&
                      (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__21__99606)->
                                               FMGL(rank),
                                             ((x10_int)2)))))
                  {
                      
                      //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                      if (true) {
                          
                          //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
                          x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("x10.array.Region{self.rect==true, self.zeroBased==true, self.rank==2}"))));
                      }
                      
                  }
                  
                  //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                  ret99607 = __desugarer__var__21__99606;
                  ret99607;
              }))
              , parentTeam, false);
            alloc90662;
        }))
        ;
        
    }
    
    //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make2D(
      x10::util::Team* parentTeam, x10::array::Region* mapping) {
        
        //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D alloc90663 =  org::scalegraph::util::Dist2D::_alloc();
            
            //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
            (alloc90663)->::org::scalegraph::util::Dist2D::_constructor(
              mapping, parentTeam, false);
            alloc90663;
        }))
        ;
        
    }
    
    //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make1D(
      x10::util::Team* parentTeam, x10_int distributionMethod) {
        
        //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int numPlaces = x10aux::nullCheck(parentTeam)->size();
        
        //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(distributionMethod, ((x10_int)1))))
        {
            
            //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Dist2D alloc90664 =
                   org::scalegraph::util::Dist2D::_alloc();
                
                //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
                (alloc90664)->::org::scalegraph::util::Dist2D::_constructor(
                  (__extension__ ({
                      
                      //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                      x10::array::Region* __desugarer__var__22__99609 =
                        x10::array::Region::makeRectangular<x10_int,
                        x10_int >((x10::array::Array<x10_int>*)(__extension__ ({
                                      x10::array::Array<x10_int>* __var404__(x10::array::Array<x10_int>::_make(2));
                                      __var404__->__set(0, 
                                      (((x10_int)0)));
                                      __var404__->__set(1, 
                                      (((x10_int)0)));
                                      __var404__;
                                  })), (x10::array::Array<x10_int>*)(__extension__ ({
                                      x10::array::Array<x10_int>* __var405__(x10::array::Array<x10_int>::_make(2));
                                      __var405__->__set(0, 
                                      (((x10_int) ((numPlaces) - (((x10_int)1))))));
                                      __var405__->__set(1, 
                                      (((x10_int)0)));
                                      __var405__;
                                  })));
                      
                      //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                      x10::array::Region* ret99610;
                      
                      //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                      if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__22__99609)->
                                                     FMGL(rect),
                                                   true)) &&
                          (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__22__99609)->
                                                   FMGL(zeroBased),
                                                 true)) &&
                          (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__22__99609)->
                                                   FMGL(rank),
                                                 ((x10_int)2)))))
                      {
                          
                          //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                          if (true) {
                              
                              //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
                              x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("x10.array.Region{self.rect==true, self.zeroBased==true, self.rank==2}"))));
                          }
                          
                      }
                      
                      //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                      ret99610 = __desugarer__var__22__99609;
                      ret99610;
                  }))
                  , parentTeam, true);
                alloc90664;
            }))
            ;
            
        } else 
        //#line 169 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(distributionMethod, ((x10_int)2))))
        {
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Dist2D alloc90665 =
                   org::scalegraph::util::Dist2D::_alloc();
                
                //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
                (alloc90665)->::org::scalegraph::util::Dist2D::_constructor(
                  (__extension__ ({
                      
                      //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                      x10::array::Region* __desugarer__var__23__99612 =
                        x10::array::Region::makeRectangular<x10_int,
                        x10_int >((x10::array::Array<x10_int>*)(__extension__ ({
                                      x10::array::Array<x10_int>* __var406__(x10::array::Array<x10_int>::_make(2));
                                      __var406__->__set(0, 
                                      (((x10_int)0)));
                                      __var406__->__set(1, 
                                      (((x10_int)0)));
                                      __var406__;
                                  })), (x10::array::Array<x10_int>*)(__extension__ ({
                                      x10::array::Array<x10_int>* __var407__(x10::array::Array<x10_int>::_make(2));
                                      __var407__->__set(0, 
                                      (((x10_int)0)));
                                      __var407__->__set(1, 
                                      (((x10_int) ((numPlaces) - (((x10_int)1))))));
                                      __var407__;
                                  })));
                      
                      //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                      x10::array::Region* ret99613;
                      
                      //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                      if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__23__99612)->
                                                     FMGL(rect),
                                                   true)) &&
                          (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__23__99612)->
                                                   FMGL(zeroBased),
                                                 true)) &&
                          (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__23__99612)->
                                                   FMGL(rank),
                                                 ((x10_int)2)))))
                      {
                          
                          //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                          if (true) {
                              
                              //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
                              x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("x10.array.Region{self.rect==true, self.zeroBased==true, self.rank==2}"))));
                          }
                          
                      }
                      
                      //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                      ret99613 = __desugarer__var__23__99612;
                      ret99613;
                  }))
                  , parentTeam, true);
                alloc90665;
            }))
            ;
            
        } else {
            
            //#line 172 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make()));
        }
        
    }
    
    //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make1D(
      x10::util::Team* parentTeam, x10::array::Region* mapping) {
        
        //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D alloc90666 =  org::scalegraph::util::Dist2D::_alloc();
            
            //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
            (alloc90666)->::org::scalegraph::util::Dist2D::_constructor(
              mapping, parentTeam, true);
            alloc90666;
        }))
        ;
        
    }
    
    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10_int org::scalegraph::util::Dist2D::R() {
        
        //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return ((x10_int) ((x10aux::nullCheck((__extension__ ({
                                                  
                                                  //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99615 =
                                                    (*this)->
                                                      FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                  x10aux::nullCheck(this99615)->
                                                    FMGL(value);
                                              }))
                                              ->FMGL(mapping))->max(
                              ((x10_int)0))) + (((x10_int)1))));
        
    }
    
    //#line 189 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10_int org::scalegraph::util::Dist2D::C() {
        
        //#line 189 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return ((x10_int) ((x10aux::nullCheck((__extension__ ({
                                                  
                                                  //#line 189 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99616 =
                                                    (*this)->
                                                      FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                  x10aux::nullCheck(this99616)->
                                                    FMGL(value);
                                              }))
                                              ->FMGL(mapping))->max(
                              ((x10_int)1))) + (((x10_int)1))));
        
    }
    
    //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10_int org::scalegraph::util::Dist2D::Z() {
        
        //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return ((x10_int) ((x10aux::nullCheck((__extension__ ({
                                                  
                                                  //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99617 =
                                                    (*this)->
                                                      FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                  x10aux::nullCheck(this99617)->
                                                    FMGL(value);
                                              }))
                                              ->FMGL(parentTeam))->size()) / x10aux::zeroCheck(x10aux::nullCheck((__extension__ ({
                                                                                                                     
                                                                                                                     //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                                                                     x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99618 =
                                                                                                                       (*this)->
                                                                                                                         FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                                                                     x10aux::nullCheck(this99618)->
                                                                                                                       FMGL(value);
                                                                                                                 }))
                                                                                                                 ->
                                                                                                                   FMGL(allTeam))->size())));
        
    }
    
    //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10_int org::scalegraph::util::Dist2D::r() {
        
        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return x10aux::nullCheck((__extension__ ({
                                     
                                     //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                     x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99619 =
                                       (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                     x10aux::nullCheck(this99619)->
                                       FMGL(value);
                                 }))
                                 ->FMGL(herePt))->x10::array::Point::__apply(
                 ((x10_int)0));
        
    }
    
    //#line 199 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10_int org::scalegraph::util::Dist2D::c() {
        
        //#line 199 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return x10aux::nullCheck((__extension__ ({
                                     
                                     //#line 199 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                     x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99620 =
                                       (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                     x10aux::nullCheck(this99620)->
                                       FMGL(value);
                                 }))
                                 ->FMGL(herePt))->x10::array::Point::__apply(
                 ((x10_int)1));
        
    }
    
    //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10_int org::scalegraph::util::Dist2D::z() {
        
        //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return ((x10_int) (((__extension__ ({
            
            //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10_int>* this99623 = x10aux::nullCheck((__extension__ ({
                                                                          
                                                                          //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                          x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99621 =
                                                                            (*this)->
                                                                              FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                          x10aux::nullCheck(this99621)->
                                                                            FMGL(value);
                                                                      }))
                                                                      ->
                                                                        FMGL(parentTeam))->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret99624;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret99625; __ret99625: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this99623)->FMGL(rail))
                {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret99624 = (x10aux::nullCheck(this99623)->
                                  FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret99625_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this99623)->
                                    FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret99624 = (x10aux::nullCheck(this99623)->
                                  FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this99623)->
                                                                                      FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret99625_end_;
                }
                
            }goto __ret99625_end_; __ret99625_end_: ;
            }
            ret99624;
            }))
            ) / x10aux::zeroCheck(x10aux::nullCheck((__extension__ ({
                                                        
                                                        //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                        x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99626 =
                                                          (*this)->
                                                            FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                        x10aux::nullCheck(this99626)->
                                                          FMGL(value);
                                                    }))
                                                    ->FMGL(allTeam))->size())));
            
        }
        
    
    //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    
    //#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10_int org::scalegraph::util::Dist2D::numReplicas() {
        
        //#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
                   
                   //#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                   x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99627 =
                     (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                   x10aux::nullCheck(this99627)->FMGL(value);
               }))
               ->FMGL(nreplica);
        
    }
    
    //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::util::Team* org::scalegraph::util::Dist2D::parentTeam(
      ) {
        
        //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
                   
                   //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                   x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99628 =
                     (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                   x10aux::nullCheck(this99628)->FMGL(value);
               }))
               ->FMGL(parentTeam);
        
    }
    
    //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::util::Team* org::scalegraph::util::Dist2D::allTeam(
      ) {
        
        //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
                   
                   //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                   x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99629 =
                     (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                   x10aux::nullCheck(this99629)->FMGL(value);
               }))
               ->FMGL(allTeam);
        
    }
    
    //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::util::Team* org::scalegraph::util::Dist2D::rowTeam(
      ) {
        
        //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10::util::Team*>* this99631 =
              (__extension__ ({
                  
                  //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99630 =
                    (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                  x10aux::nullCheck(this99630)->FMGL(value);
              }))
              ->FMGL(rowTeam);
            x10aux::nullCheck(this99631)->FMGL(value);
        }))
        ;
        
    }
    
    //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::util::Team* org::scalegraph::util::Dist2D::columnTeam(
      ) {
        
        //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10::util::Team*>* this99633 =
              (__extension__ ({
                  
                  //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99632 =
                    (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                  x10aux::nullCheck(this99632)->FMGL(value);
              }))
              ->FMGL(columnTeam);
            x10aux::nullCheck(this99633)->FMGL(value);
        }))
        ;
        
    }
    
    //#line 232 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::lang::Place org::scalegraph::util::Dist2D::getCongruentPlace(
      x10_int z) {
        
        //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int pid = ((x10_int) ((((x10_int) ((x10aux::nullCheck((__extension__ ({
                                                                      
                                                                      //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                      x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99634 =
                                                                        (*this)->
                                                                          FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                      x10aux::nullCheck(this99634)->
                                                                        FMGL(value);
                                                                  }))
                                                                  ->
                                                                    FMGL(allTeam))->size()) * (z)))) + (x10aux::nullCheck((__extension__ ({
                                                                                                                              
                                                                                                                              //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                                                                              x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99635 =
                                                                                                                                (*this)->
                                                                                                                                  FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                                                                              x10aux::nullCheck(this99635)->
                                                                                                                                FMGL(value);
                                                                                                                          }))
                                                                                                                          ->
                                                                                                                            FMGL(mapping))->indexOf(
                                                                                                          (__extension__ ({
                                                                                                              
                                                                                                              //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                                                              x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99636 =
                                                                                                                (*this)->
                                                                                                                  FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                                                              x10aux::nullCheck(this99636)->
                                                                                                                FMGL(value);
                                                                                                          }))
                                                                                                          ->
                                                                                                            FMGL(herePt)))));
        
        //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10::lang::Place>* this99639 =
              x10aux::nullCheck((__extension__ ({
                                    
                                    //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99637 =
                                      (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                    x10aux::nullCheck(this99637)->
                                      FMGL(value);
                                }))
                                ->FMGL(parentTeam))->places();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i99638 = pid;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::lang::Place ret99640;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret99641; __ret99641: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this99639)->FMGL(rail))
                {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret99640 = (x10aux::nullCheck(this99639)->
                                  FMGL(raw))->__apply(i99638);
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret99641_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this99639)->
                                    FMGL(region)->contains(
                                    i99638))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          i99638);
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret99640 = (x10aux::nullCheck(this99639)->
                                  FMGL(raw))->__apply(((x10_int) ((i99638) - (x10aux::nullCheck(this99639)->
                                                                                FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret99641_end_;
                }
                
            }goto __ret99641_end_; __ret99641_end_: ;
            }
            ret99640;
            }))
            ;
            
        }
        
    
    //#line 241 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    org::scalegraph::graph::id::IdStruct org::scalegraph::util::Dist2D::getIds(
      x10_long numberOfVertices, x10_long numberOfLocalVertices,
      x10_boolean transpose) {
        
        //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int R;
        
        //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int C;
        
        //#line 243 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
        R = (*this)->org::scalegraph::util::Dist2D::R();
        
        //#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
        C = (*this)->org::scalegraph::util::Dist2D::C();
        
        //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int size = ((x10_int) ((R) * (C)));
        
        //#line 246 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_long avgNumberOfLocalVertices = ((x10_long) ((((x10_long) ((((x10_long) ((numberOfVertices) + (((x10_long) (size)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (size)))));
        
        //#line 247 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if (!((__extension__ ({
                
                //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
                x10_long p99642 = ((x10_long) (R));
                (x10aux::struct_equals(((x10_long) ((p99642) & (((x10_long) -(p99642))))),
                                       p99642));
            }))
            ) || !((__extension__ ({
                
                //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
                x10_long p99643 = ((x10_long) (C));
                (x10aux::struct_equals(((x10_long) ((p99643) & (((x10_long) -(p99643))))),
                                       p99643));
            }))
            )) {
            
            //#line 248 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make()));
        }
        
        //#line 249 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int teamSize = x10aux::nullCheck((*this)->org::scalegraph::util::Dist2D::allTeam())->size();
        
        //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::graph::id::IdStruct alloc90667 =
               org::scalegraph::graph::id::IdStruct::_alloc();
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_int lgr99717 = 63 - __builtin_clzl(((((x10_long) (R))) << 1) - 1);
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_int lgc99718 = 63 - __builtin_clzl(((((x10_long) (C))) << 1) - 1);
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_int lgl99719 = 63 - __builtin_clzl(((avgNumberOfLocalVertices) << 1) - 1);
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_boolean transpose99720 = transpose;
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_long numberOfLocalVertexes99721 = numberOfLocalVertices;
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_long numberOfGlobalVertexes99722 = numberOfVertices;
            
            //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc90667->FMGL(lgr) = lgr99717;
            
            //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc90667->FMGL(lgc) = lgc99718;
            
            //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc90667->FMGL(lgl) = lgl99719;
            
            //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc90667->FMGL(transpose) = transpose99720;
            
            //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc90667->FMGL(numberOfLocalVertexes) = numberOfLocalVertexes99721;
            
            //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc90667->FMGL(numberOfGlobalVertexes) = numberOfGlobalVertexes99722;
            alloc90667;
        }))
        ;
        
    }
    
    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    void org::scalegraph::util::Dist2D::del() {
        
        //#line 258 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D__LocalData cachedData =
          (__extension__ ({
            
            //#line 258 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99651 =
              (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
            x10aux::nullCheck(this99651)->FMGL(value);
        }))
        ;
        
        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(cachedData->FMGL(rowTeam),
                                    X10_NULL)) && (!x10aux::struct_equals(x10aux::nullCheck((__extension__ ({
                                                                              
                                                                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                              x10::lang::Cell<x10::util::Team*>* this99652 =
                                                                                cachedData->
                                                                                  FMGL(rowTeam);
                                                                              x10aux::nullCheck(this99652)->
                                                                                FMGL(value);
                                                                          }))
                                                                          )->id(),
                                                                          x10aux::nullCheck(cachedData->
                                                                                              FMGL(allTeam))->id())))
        {
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck((__extension__ ({
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<x10::util::Team*>* this99653 =
                  cachedData->FMGL(rowTeam);
                x10aux::nullCheck(this99653)->FMGL(value);
            }))
            )->del((*this)->org::scalegraph::util::Dist2D::c());
        }
        
        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(cachedData->FMGL(columnTeam),
                                    X10_NULL)) && (!x10aux::struct_equals(x10aux::nullCheck((__extension__ ({
                                                                              
                                                                              //#line 263 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                              x10::lang::Cell<x10::util::Team*>* this99654 =
                                                                                cachedData->
                                                                                  FMGL(columnTeam);
                                                                              x10aux::nullCheck(this99654)->
                                                                                FMGL(value);
                                                                          }))
                                                                          )->id(),
                                                                          x10aux::nullCheck(cachedData->
                                                                                              FMGL(allTeam))->id())))
        {
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck((__extension__ ({
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<x10::util::Team*>* this99655 =
                  cachedData->FMGL(columnTeam);
                x10aux::nullCheck(this99655)->FMGL(value);
            }))
            )->del((*this)->org::scalegraph::util::Dist2D::r());
        }
        
        //#line 265 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(x10aux::nullCheck(cachedData->
                                                        FMGL(allTeam))->id(),
                                    x10aux::nullCheck(cachedData->
                                                        FMGL(parentTeam))->id())))
        {
            
            //#line 265 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(cachedData->FMGL(allTeam))->del(
              (*this)->org::scalegraph::util::Dist2D::idx());
        }
        
        //#line 266 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99725 =
          (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
        
        //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D__LocalData x99726 =
          (__extension__ ({
            
            //#line 266 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D__LocalData alloc99727 =
               org::scalegraph::util::Dist2D__LocalData::_alloc();
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc99727->FMGL(mapping) = x10aux::class_cast_unchecked<x10::array::Region*>(X10_NULL);
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc99727->FMGL(nreplica) = ((x10_int)0);
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc99727->FMGL(parentTeam) = x10::util::Team::
                                             FMGL(WORLD__get)();
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc99727->FMGL(allTeam) = x10::util::Team::
                                          FMGL(WORLD__get)();
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc99727->FMGL(rowTeam) = x10aux::class_cast_unchecked<x10::lang::Cell<x10::util::Team*>*>(X10_NULL);
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc99727->FMGL(columnTeam) = x10aux::class_cast_unchecked<x10::lang::Cell<x10::util::Team*>*>(X10_NULL);
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc99727->FMGL(herePt) = x10aux::class_cast_unchecked<x10::array::Point*>(X10_NULL);
            alloc99727;
        }))
        ;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D__LocalData x99723 =
          x99726;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D__LocalData ret99724;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(this99725)->FMGL(value) = x99723;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
        ret99724 = x99723;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
        ret99724;
    }
    
    //#line 269 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::lang::String* org::scalegraph::util::Dist2D::toString(
      ) {
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Dist2D(["), (*this)->org::scalegraph::util::Dist2D::C()), x10aux::makeStringLit(",")), (*this)->org::scalegraph::util::Dist2D::R()), x10aux::makeStringLit("],")), x10aux::nullCheck((__extension__ ({
                                                                                                                                                                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                                                                                                                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                                                                                                                                                                                                                                                                                                                                           x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this99673 =
                                                                                                                                                                                                                                                                                                                                                                                             (*this)->
                                                                                                                                                                                                                                                                                                                                                                                               FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                                                                                                                                                                                                                                                                                                                                           x10aux::nullCheck(this99673)->
                                                                                                                                                                                                                                                                                                                                                                                             FMGL(value);
                                                                                                                                                                                                                                                                                                                                                                                       }))
                                                                                                                                                                                                                                                                                                                                                                                       ->
                                                                                                                                                                                                                                                                                                                                                                                         FMGL(allTeam))->toString()), x10aux::makeStringLit(")"));
        
    }
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::lang::String* org::scalegraph::util::Dist2D::typeName(
      ){
        return x10aux::type_name((*this));
    }
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10_int org::scalegraph::util::Dist2D::hashCode() {
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int result = ((x10_int)1);
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
        result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                               FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::hashCode())));
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return result;
        
    }
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10_boolean org::scalegraph::util::Dist2D::equals(x10::lang::Any* other) {
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if (!(x10aux::instanceof<org::scalegraph::util::Dist2D>(other)))
        {
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
            return false;
            
        }
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D this99675 = (*this);
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D other99674 = x10aux::class_cast<org::scalegraph::util::Dist2D>(other);
            (x10aux::struct_equals(this99675->FMGL(data),
                                   other99674->FMGL(data)));
        }))
        ;
        
    }
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10_boolean org::scalegraph::util::Dist2D::_struct_equals(
      x10::lang::Any* other) {
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if (!(x10aux::instanceof<org::scalegraph::util::Dist2D>(other)))
        {
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
            return false;
            
        }
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D this99677 = (*this);
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D other99676 = x10aux::class_cast<org::scalegraph::util::Dist2D>(other);
            (x10aux::struct_equals(this99677->FMGL(data),
                                   other99676->FMGL(data)));
        }))
        ;
        
    }
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    void org::scalegraph::util::Dist2D::_serialize(org::scalegraph::util::Dist2D this_, x10aux::serialization_buffer& buf) {
        buf.write(this_->FMGL(data));
        
    }
    
    void org::scalegraph::util::Dist2D::_deserialize_body(x10aux::deserialization_buffer& buf) {
        FMGL(data) = buf.read<x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*> >();
    }
    
    
    x10aux::RuntimeType org::scalegraph::util::Dist2D::rtt;
    void org::scalegraph::util::Dist2D::_initRTT() {
        if (rtt.initStageOne(&rtt)) return;
        const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
        rtt.initStageTwo("org.scalegraph.util.Dist2D",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
        rtt.containsPtrs = false;
    }
    
    x10::lang::Fun_0_1<x10::lang::Place, x10::array::Point*>::itable<org_scalegraph_util_Dist2D__closure__1>org_scalegraph_util_Dist2D__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Dist2D__closure__1::__apply, &org_scalegraph_util_Dist2D__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_Dist2D__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10::lang::Place, x10::array::Point*> >, &org_scalegraph_util_Dist2D__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_Dist2D__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Dist2D__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<x10::array::Point*, x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::itable<org_scalegraph_util_Dist2D__closure__2>org_scalegraph_util_Dist2D__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Dist2D__closure__2::__apply, &org_scalegraph_util_Dist2D__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_Dist2D__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10::array::Point*, x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*> >, &org_scalegraph_util_Dist2D__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_Dist2D__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Dist2D__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of Dist2D */
/*************************************************/
/*************************************************/
/* START of Dist2D$LocalData */
#include <org/scalegraph/util/Dist2D__LocalData.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/array/Region.h>
#include <x10/util/Team.h>
#include <x10/lang/Cell.h>
#include <x10/array/Point.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>

//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c

//#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c

//#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c

//#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c

//#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c

//#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c
namespace org { namespace scalegraph { namespace util { 
class Dist2D__LocalData_ibox0 : public x10::lang::IBox<org::scalegraph::util::Dist2D__LocalData> {
public:
    static x10::lang::Any::itable<Dist2D__LocalData_ibox0 > itable;
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
x10::lang::Any::itable<Dist2D__LocalData_ibox0 >  Dist2D__LocalData_ibox0::itable(&Dist2D__LocalData_ibox0::equals, &Dist2D__LocalData_ibox0::hashCode, &Dist2D__LocalData_ibox0::toString, &Dist2D__LocalData_ibox0::typeName);
} } } 
x10::lang::Any::itable<org::scalegraph::util::Dist2D__LocalData >  org::scalegraph::util::Dist2D__LocalData::_itable_0(&org::scalegraph::util::Dist2D__LocalData::equals, &org::scalegraph::util::Dist2D__LocalData::hashCode, &org::scalegraph::util::Dist2D__LocalData::toString, &org::scalegraph::util::Dist2D__LocalData::typeName);
x10aux::itable_entry org::scalegraph::util::Dist2D__LocalData::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::Dist2D__LocalData::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::Dist2D__LocalData>())};
x10aux::itable_entry org::scalegraph::util::Dist2D__LocalData::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::Dist2D__LocalData_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::Dist2D__LocalData>())};

//#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Dist2D__LocalData::_constructor(x10::array::Region* mapping_,
                                                            x10_int nreplica_,
                                                            x10::util::Team* parentTeam_,
                                                            x10::util::Team* allTeam_,
                                                            x10::lang::Cell<x10::util::Team*>* rowTeam_,
                                                            x10::lang::Cell<x10::util::Team*>* columnTeam_,
                                                            x10::array::Point* herePt_) {
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.AssignPropertyCall_c
    FMGL(mapping) = mapping_;
    FMGL(nreplica) = nreplica_;
    FMGL(parentTeam) = parentTeam_;
    FMGL(allTeam) = allTeam_;
    FMGL(rowTeam) = rowTeam_;
    FMGL(columnTeam) = columnTeam_;
    FMGL(herePt) = herePt_;
    
}
org::scalegraph::util::Dist2D__LocalData org::scalegraph::util::Dist2D__LocalData::_make(
  x10::array::Region* mapping_, x10_int nreplica_, x10::util::Team* parentTeam_,
  x10::util::Team* allTeam_, x10::lang::Cell<x10::util::Team*>* rowTeam_,
  x10::lang::Cell<x10::util::Team*>* columnTeam_, x10::array::Point* herePt_)
{
    org::scalegraph::util::Dist2D__LocalData this_; 
    this_->_constructor(mapping_, nreplica_, parentTeam_,
    allTeam_, rowTeam_, columnTeam_, herePt_);
    return this_;
}



//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Dist2D__LocalData::_constructor(
  ) {
    
    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.AssignPropertyCall_c
    FMGL(mapping) = x10aux::class_cast_unchecked<x10::array::Region*>(X10_NULL);
    FMGL(nreplica) = ((x10_int)0);
    FMGL(parentTeam) = x10::util::Team::FMGL(WORLD__get)();
    FMGL(allTeam) = x10::util::Team::FMGL(WORLD__get)();
    FMGL(rowTeam) = x10aux::class_cast_unchecked<x10::lang::Cell<x10::util::Team*>*>(X10_NULL);
    FMGL(columnTeam) = x10aux::class_cast_unchecked<x10::lang::Cell<x10::util::Team*>*>(X10_NULL);
    FMGL(herePt) = x10aux::class_cast_unchecked<x10::array::Point*>(X10_NULL);
    
}
org::scalegraph::util::Dist2D__LocalData org::scalegraph::util::Dist2D__LocalData::_make(
  ) {
    org::scalegraph::util::Dist2D__LocalData this_; 
    this_->_constructor();
    return this_;
}



//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::Dist2D__LocalData::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::Dist2D__LocalData::toString(
  ) {
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.util.Dist2D.LocalData:"), x10aux::makeStringLit(" mapping=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     FMGL(mapping)), x10aux::makeStringLit(" nreplica=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             FMGL(nreplica)), x10aux::makeStringLit(" parentTeam=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        FMGL(parentTeam)), x10aux::makeStringLit(" allTeam=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  FMGL(allTeam)), x10aux::makeStringLit(" rowTeam=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         FMGL(rowTeam)), x10aux::makeStringLit(" columnTeam=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   FMGL(columnTeam)), x10aux::makeStringLit(" herePt=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            FMGL(herePt));
    
}

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Dist2D__LocalData::hashCode(
  ) {
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(mapping)))));
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(nreplica)))));
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::nullCheck((*this)->
                                                                                             FMGL(parentTeam))->hashCode())));
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::nullCheck((*this)->
                                                                                             FMGL(allTeam))->hashCode())));
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(rowTeam)))));
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(columnTeam)))));
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::nullCheck((*this)->
                                                                                             FMGL(herePt))->x10::array::Point::hashCode())));
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Dist2D__LocalData::equals(
  x10::lang::Any* other) {
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::Dist2D__LocalData>(other)))
    {
        
        //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::Dist2D__LocalData::equals(
             x10aux::class_cast<org::scalegraph::util::Dist2D__LocalData>(other));
    
}

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Dist2D__LocalData::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::Dist2D__LocalData>(other)))
    {
        
        //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::Dist2D__LocalData::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::Dist2D__LocalData>(other));
    
}

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c

//#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Dist2D__LocalData::_serialize(org::scalegraph::util::Dist2D__LocalData this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(mapping));
    buf.write(this_->FMGL(nreplica));
    buf.write(this_->FMGL(parentTeam));
    buf.write(this_->FMGL(allTeam));
    buf.write(this_->FMGL(rowTeam));
    buf.write(this_->FMGL(columnTeam));
    buf.write(this_->FMGL(herePt));
    
}

void org::scalegraph::util::Dist2D__LocalData::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(mapping) = buf.read<x10::array::Region*>();
    FMGL(nreplica) = buf.read<x10_int>();
    FMGL(parentTeam) = buf.read<x10::util::Team*>();
    FMGL(allTeam) = buf.read<x10::util::Team*>();
    FMGL(rowTeam) = buf.read<x10::lang::Cell<x10::util::Team*>*>();
    FMGL(columnTeam) = buf.read<x10::lang::Cell<x10::util::Team*>*>();
    FMGL(herePt) = buf.read<x10::array::Point*>();
}


x10aux::RuntimeType org::scalegraph::util::Dist2D__LocalData::rtt;
void org::scalegraph::util::Dist2D__LocalData::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.util.Dist2D.LocalData",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
}

/* END of Dist2D$LocalData */
/*************************************************/
