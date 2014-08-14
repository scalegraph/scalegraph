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
            x10::array::Point* __desugarer__var__19__107471 = (__extension__ ({
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::util::Box<x10::array::Point*>* this107470 = placeMap->__apply(
                                                                   p);
                x10aux::nullCheck(this107470)->FMGL(value);
            }))
            ;
            
            //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* ret107472;
            
            //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
            if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__19__107471)->
                                           FMGL(rank), ((x10_int)2)))))
            {
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("x10.array.Point{self.rank==2}"))));
                }
                
            }
            
            //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
            ret107472 = __desugarer__var__19__107471;
            ret107472;
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
                x10::array::Array<x10_int>* this107475 = x10aux::nullCheck(parentTeam)->role();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret107476;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret107477; __ret107477: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this107475)->FMGL(rail)) {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret107476 = (x10aux::nullCheck(this107475)->FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret107477_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this107475)->FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret107476 = (x10aux::nullCheck(this107475)->
                                       FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this107475)->
                                                                                           FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret107477_end_;
                    }
                    
                }goto __ret107477_end_; __ret107477_end_: ;
                }
                ret107476;
                }))
                ) / x10aux::zeroCheck(RC)));
                
            
            //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
            allTeam = x10aux::nullCheck(parentTeam)->split(
                        (__extension__ ({
                            
                            //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                            x10::array::Array<x10_int>* this107479 =
                              x10aux::nullCheck(parentTeam)->role();
                            
                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                            ;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int ret107480;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret107481; __ret107481: {
                            {
                                
                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(this107479)->
                                      FMGL(rail)) {
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret107480 = (x10aux::nullCheck(this107479)->
                                                   FMGL(raw))->__apply(((x10_int)0));
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret107481_end_;
                                } else {
                                    
                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (true && !(x10aux::nullCheck(this107479)->
                                                    FMGL(region)->contains(
                                                    ((x10_int)0))))
                                    {
                                        
                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                        x10::array::Array<void>::raiseBoundsError(
                                          ((x10_int)0));
                                    }
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret107480 = (x10aux::nullCheck(this107479)->
                                                   FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this107479)->
                                                                                                       FMGL(layout_min0)))));
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret107481_end_;
                                }
                                
                            }goto __ret107481_end_; __ret107481_end_: ;
                            }
                            ret107480;
                            }))
                            , z, role);
            
            //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
            {
                x10::lang::Iterator<x10::lang::Place>* pp91686;
                for (
                     //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                     pp91686 = x10aux::nullCheck(x10aux::nullCheck(parentTeam)->placeGroup())->iterator();
                     x10::lang::Iterator<x10::lang::Place>::hasNext(x10aux::nullCheck(pp91686));
                     ) {
                    
                    //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Place pp = x10::lang::Iterator<x10::lang::Place>::next(x10aux::nullCheck(pp91686));
                    
                    //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(parentTeam)->barrier(
                      (__extension__ ({
                          
                          //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                          x10::array::Array<x10_int>* this107483 =
                            x10aux::nullCheck(parentTeam)->role();
                          
                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                          ;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10_int ret107484;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                          goto __ret107485; __ret107485: {
                          {
                              
                              //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                              if (x10aux::nullCheck(this107483)->
                                    FMGL(rail)) {
                                  
                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret107484 = (x10aux::nullCheck(this107483)->
                                                 FMGL(raw))->__apply(((x10_int)0));
                                  
                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                  goto __ret107485_end_;
                              } else {
                                  
                                  //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                  if (true && !(x10aux::nullCheck(this107483)->
                                                  FMGL(region)->contains(
                                                  ((x10_int)0))))
                                  {
                                      
                                      //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                      x10::array::Array<void>::raiseBoundsError(
                                        ((x10_int)0));
                                  }
                                  
                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret107484 = (x10aux::nullCheck(this107483)->
                                                 FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this107483)->
                                                                                                     FMGL(layout_min0)))));
                                  
                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                  goto __ret107485_end_;
                              }
                              
                          }goto __ret107485_end_; __ret107485_end_: ;
                          }
                          ret107484;
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
                        x10::util::Team* x107486 = allTeam;
                        (__extension__ ({
                            
                            //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                            x10::lang::Cell<x10::util::Team*>* alloc107487 =
                               ((new (memset(x10aux::alloc<x10::lang::Cell<x10::util::Team*> >(), 0, sizeof(x10::lang::Cell<x10::util::Team*>))) x10::lang::Cell<x10::util::Team*>()))
                            ;
                            
                            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                            x10::util::Team* x107609 = x107486;
                            
                            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                            alloc107487->FMGL(value) = x107609;
                            alloc107487;
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
                        x10::util::Team* x107490 = allTeam;
                        (__extension__ ({
                            
                            //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                            x10::lang::Cell<x10::util::Team*>* alloc107491 =
                               ((new (memset(x10aux::alloc<x10::lang::Cell<x10::util::Team*> >(), 0, sizeof(x10::lang::Cell<x10::util::Team*>))) x10::lang::Cell<x10::util::Team*>()))
                            ;
                            
                            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                            x10::util::Team* x107610 = x107490;
                            
                            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                            alloc107491->FMGL(value) = x107610;
                            alloc107491;
                        }))
                        ;
                    }))
                    ;
                }
                
            } else {
                
                //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                rowTeam = (__extension__ ({
                    
                    //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                    x10::util::Team* x107494 = x10aux::nullCheck(allTeam)->split(
                                                 role, r,
                                                 c);
                    (__extension__ ({
                        
                        //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::lang::Cell<x10::util::Team*>* alloc107495 =
                           ((new (memset(x10aux::alloc<x10::lang::Cell<x10::util::Team*> >(), 0, sizeof(x10::lang::Cell<x10::util::Team*>))) x10::lang::Cell<x10::util::Team*>()))
                        ;
                        
                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::util::Team* x107611 = x107494;
                        
                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc107495->FMGL(value) = x107611;
                        alloc107495;
                    }))
                    ;
                }))
                ;
                
                //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                columnTeam = (__extension__ ({
                    
                    //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                    x10::util::Team* x107498 = x10aux::nullCheck(allTeam)->split(
                                                 role, c,
                                                 r);
                    (__extension__ ({
                        
                        //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::lang::Cell<x10::util::Team*>* alloc107499 =
                           ((new (memset(x10aux::alloc<x10::lang::Cell<x10::util::Team*> >(), 0, sizeof(x10::lang::Cell<x10::util::Team*>))) x10::lang::Cell<x10::util::Team*>()))
                        ;
                        
                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::util::Team* x107612 = x107498;
                        
                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc107499->FMGL(value) = x107612;
                        alloc107499;
                    }))
                    ;
                }))
                ;
            }
            
            //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* alloc91613 =
                   ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData> >(), 0, sizeof(x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>))) x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>()))
                ;
                
                //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Dist2D__LocalData x107620 =
                  (__extension__ ({
                    
                    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::Dist2D__LocalData alloc107621 =
                       org::scalegraph::util::Dist2D__LocalData::_alloc();
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::array::Region* mapping_107613 = mapping;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int nreplica_107614 = cycles;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::util::Team* parentTeam_107615 = parentTeam;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::util::Team* allTeam_107616 = allTeam;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Cell<x10::util::Team*>* rowTeam_107617 =
                      rowTeam;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Cell<x10::util::Team*>* columnTeam_107618 =
                      columnTeam;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::array::Point* herePt_107619 = p;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc107621->FMGL(mapping) = mapping_107613;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc107621->FMGL(nreplica) = nreplica_107614;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc107621->FMGL(parentTeam) = parentTeam_107615;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc107621->FMGL(allTeam) = allTeam_107616;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc107621->FMGL(rowTeam) = rowTeam_107617;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc107621->FMGL(columnTeam) = columnTeam_107618;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc107621->FMGL(herePt) = herePt_107619;
                    alloc107621;
                }))
                ;
                
                //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                alloc91613->FMGL(value) = x107620;
                alloc91613;
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
    x10_int __var664__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(DISTRIBUTE_ROWS) = __var664__;
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
    x10_int __var665__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(DISTRIBUTE_COLUMNS) = __var665__;
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
    x10_int size107622 = x10aux::nullCheck(places)->FMGL(size);
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::array::RectRegion1D* myReg107587 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
    ;
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg107587)->::x10::array::RectRegion1D::_constructor(
      ((x10_int) ((size107622) - (((x10_int)1)))));
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg107587);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(rank) = ((x10_int)1);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(rect) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(zeroBased) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(rail) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(size) = size107622;
    
    //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(layout_min0) = orderedPlaces->FMGL(layout_stride1) =
      orderedPlaces->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
    
    //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::Place >(size107622, 8, false, true);
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int i91659max107623 = x10aux::nullCheck(mapping)->max(
                                ((x10_int)1));
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
    {
        x10_int i107624;
        for (
             //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
             i107624 = ((x10_int)0); ((i107624) <= (i91659max107623));
             
             //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
             i107624 = ((x10_int) ((i107624) + (((x10_int)1)))))
        {
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10_int c107625 = i107624;
            
            //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10_int i91641max107606 = x10aux::nullCheck(mapping)->max(
                                        ((x10_int)0));
            
            //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
            {
                x10_int i107607;
                for (
                     //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                     i107607 = ((x10_int)0); ((i107607) <= (i91641max107606));
                     
                     //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                     i107607 = ((x10_int) ((i107607) + (((x10_int)1)))))
                {
                    
                    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int r107608 = i107607;
                    
                    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int i107605 = x10aux::nullCheck(mapping)->indexOf(
                                        r107608, c107625);
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i107596 = ((x10_int) ((r107608) + (((x10_int) ((c107625) * (R))))));
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Place v107597 = (__extension__ ({
                        
                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_int i107598 = i107605;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10::lang::Place ret107599;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                        goto __ret107600; __ret107600: {
                        {
                            
                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (x10aux::nullCheck(places)->
                                  FMGL(rail)) {
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret107599 = (x10aux::nullCheck(places)->
                                               FMGL(raw))->__apply(i107598);
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret107600_end_;
                            } else {
                                
                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (true && !(x10aux::nullCheck(places)->
                                                FMGL(region)->contains(
                                                i107598)))
                                {
                                    
                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                    x10::array::Array<void>::raiseBoundsError(
                                      i107598);
                                }
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret107599 = (x10aux::nullCheck(places)->
                                               FMGL(raw))->__apply(((x10_int) ((i107598) - (x10aux::nullCheck(places)->
                                                                                              FMGL(layout_min0)))));
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret107600_end_;
                            }
                            
                        }goto __ret107600_end_; __ret107600_end_: ;
                        }
                        ret107599;
                        }))
                        ;
                        
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Place ret107601;
                    
                    //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (orderedPlaces->FMGL(raw))->__set(i107596, v107597);
                    
                    //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret107601 = v107597;
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                    ret107601;
                    
                    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int i91623max107602 = ((x10_int) ((cycles) - (((x10_int)1))));
                    
                    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
                    {
                        x10_int i107603;
                        for (
                             //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                             i107603 = ((x10_int)0); ((i107603) <= (i91623max107602));
                             
                             //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                             i107603 = ((x10_int) ((i107603) + (((x10_int)1)))))
                        {
                            
                            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                            x10_int j107604 = i107603;
                            
                            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
                            placeMap->put((__extension__ ({
                                              
                                              //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                              x10_int i107590 =
                                                ((x10_int) ((i107605) + (((x10_int) ((RC) * (j107604))))));
                                              
                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                              x10::lang::Place ret107591;
                                              
                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                              goto __ret107592; __ret107592: {
                                              {
                                                  
                                                  //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                  if (x10aux::nullCheck(places)->
                                                        FMGL(rail))
                                                  {
                                                      
                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                      ret107591 =
                                                        (x10aux::nullCheck(places)->
                                                           FMGL(raw))->__apply(i107590);
                                                      
                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                      goto __ret107592_end_;
                                                  } else {
                                                      
                                                      //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                      if (true &&
                                                          !(x10aux::nullCheck(places)->
                                                              FMGL(region)->contains(
                                                              i107590)))
                                                      {
                                                          
                                                          //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                          x10::array::Array<void>::raiseBoundsError(
                                                            i107590);
                                                      }
                                                      
                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                      ret107591 =
                                                        (x10aux::nullCheck(places)->
                                                           FMGL(raw))->__apply(((x10_int) ((i107590) - (x10aux::nullCheck(places)->
                                                                                                          FMGL(layout_min0)))));
                                                      
                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                      goto __ret107592_end_;
                                                  }
                                                  
                                              }goto __ret107592_end_; __ret107592_end_: ;
                                              }
                                              ret107591;
                                              }))
                                              , (__extension__ ({
                                                  
                                                  //#line 125 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                  x10_int i107593 =
                                                    r107608;
                                                  
                                                  //#line 125 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                  x10_int i107594 =
                                                    c107625;
                                                  (__extension__ ({
                                                      
                                                      //#line 125 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                      x10::array::Point* alloc107595 =
                                                         ((new (memset(x10aux::alloc<x10::array::Point>(), 0, sizeof(x10::array::Point))) x10::array::Point()))
                                                      ;
                                                      
                                                      //#line 51 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                      x10_int i107588 =
                                                        i107593;
                                                      
                                                      //#line 51 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                      x10_int i107589 =
                                                        i107594;
                                                      
                                                      //#line 52 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc107595->
                                                        FMGL(rank) =
                                                        ((x10_int)2);
                                                      
                                                      //#line 53 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc107595->
                                                        FMGL(c0) =
                                                        i107588;
                                                      
                                                      //#line 54 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc107595->
                                                        FMGL(c1) =
                                                        i107589;
                                                      
                                                      //#line 55 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc107595->
                                                        FMGL(c2) =
                                                        alloc107595->
                                                          FMGL(c3) =
                                                        ((x10_int)0);
                                                      
                                                      //#line 56 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc107595->
                                                        FMGL(cs) =
                                                        (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
                                                      alloc107595;
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
                x10::lang::Iterator<x10::array::Point*>* id91677;
                for (
                     //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                     id91677 = x10aux::nullCheck(pp)->FMGL(region)->iterator();
                     x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id91677));
                     ) {
                    
                    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::array::Point* id740 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id91677));
                    
                    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int i = x10aux::nullCheck(id740)->x10::array::Point::__apply(
                                  ((x10_int)0));
                    
                    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals((__extension__ ({
                                                    
                                                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                    x10_int i107462 =
                                                      i;
                                                    
                                                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                    x10::lang::Place ret107463;
                                                    
                                                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                    goto __ret107464; __ret107464: {
                                                    {
                                                        
                                                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                        if (x10aux::nullCheck(pp)->
                                                              FMGL(rail))
                                                        {
                                                            
                                                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                            ret107463 =
                                                              (x10aux::nullCheck(pp)->
                                                                 FMGL(raw))->__apply(i107462);
                                                            
                                                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                            goto __ret107464_end_;
                                                        }
                                                        else
                                                        {
                                                            
                                                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                            if (true &&
                                                                !(x10aux::nullCheck(pp)->
                                                                    FMGL(region)->contains(
                                                                    i107462)))
                                                            {
                                                                
                                                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                x10::array::Array<void>::raiseBoundsError(
                                                                  i107462);
                                                            }
                                                            
                                                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                            ret107463 =
                                                              (x10aux::nullCheck(pp)->
                                                                 FMGL(raw))->__apply(((x10_int) ((i107462) - (x10aux::nullCheck(pp)->
                                                                                                                FMGL(layout_min0)))));
                                                            
                                                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                            goto __ret107464_end_;
                                                        }
                                                        
                                                    }goto __ret107464_end_; __ret107464_end_: ;
                                                    }
                                                    ret107463;
                                                    }))
                                                    , (__extension__ ({
                                                        
                                                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10_int i107465 =
                                                          i;
                                                        
                                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10::lang::Place ret107466;
                                                        
                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret107466 =
                                                          (orderedPlaces->
                                                             FMGL(raw))->__apply(i107465);
                                                        ret107466;
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
            org::scalegraph::util::Dist2D alloc91614 =  org::scalegraph::util::Dist2D::_alloc();
            
            //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
            (alloc91614)->::org::scalegraph::util::Dist2D::_constructor(
              (__extension__ ({
                  
                  //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::array::Region* __desugarer__var__20__107512 =
                    x10::array::Region::makeRectangular<x10_int,
                    x10_int >((x10::array::Array<x10_int>*)(__extension__ ({
                                  x10::array::Array<x10_int>* __var667__(x10::array::Array<x10_int>::_make(2));
                                  __var667__->__set(0, 
                                  (((x10_int)0)));
                                  __var667__->__set(1, 
                                  (((x10_int)0)));
                                  __var667__;
                              })), (x10::array::Array<x10_int>*)(__extension__ ({
                                  x10::array::Array<x10_int>* __var668__(x10::array::Array<x10_int>::_make(2));
                                  __var668__->__set(0, 
                                  (((x10_int) ((R) - (((x10_int)1))))));
                                  __var668__->__set(1, 
                                  (((x10_int) ((C) - (((x10_int)1))))));
                                  __var668__;
                              })));
                  
                  //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::array::Region* ret107513;
                  
                  //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                  if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__20__107512)->
                                                 FMGL(rect),
                                               true)) && (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__20__107512)->
                                                                                  FMGL(zeroBased),
                                                                                true)) &&
                      (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__20__107512)->
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
                  ret107513 = __desugarer__var__20__107512;
                  ret107513;
              }))
              , parentTeam, false);
            alloc91614;
        }))
        ;
        
    }
    
    //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make2D(
      x10::util::Team* parentTeam, x10_int R) {
        
        //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D alloc91615 =  org::scalegraph::util::Dist2D::_alloc();
            
            //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
            (alloc91615)->::org::scalegraph::util::Dist2D::_constructor(
              (__extension__ ({
                  
                  //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::array::Region* __desugarer__var__21__107515 =
                    x10::array::Region::makeRectangular<x10_int,
                    x10_int >((x10::array::Array<x10_int>*)(__extension__ ({
                                  x10::array::Array<x10_int>* __var670__(x10::array::Array<x10_int>::_make(2));
                                  __var670__->__set(0, 
                                  (((x10_int)0)));
                                  __var670__->__set(1, 
                                  (((x10_int)0)));
                                  __var670__;
                              })), (x10::array::Array<x10_int>*)(__extension__ ({
                                  x10::array::Array<x10_int>* __var671__(x10::array::Array<x10_int>::_make(2));
                                  __var671__->__set(0, 
                                  (((x10_int) ((R) - (((x10_int)1))))));
                                  __var671__->__set(1, 
                                  (((x10_int) ((R) - (((x10_int)1))))));
                                  __var671__;
                              })));
                  
                  //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::array::Region* ret107516;
                  
                  //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                  if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__21__107515)->
                                                 FMGL(rect),
                                               true)) && (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__21__107515)->
                                                                                  FMGL(zeroBased),
                                                                                true)) &&
                      (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__21__107515)->
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
                  ret107516 = __desugarer__var__21__107515;
                  ret107516;
              }))
              , parentTeam, false);
            alloc91615;
        }))
        ;
        
    }
    
    //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make2D(
      x10::util::Team* parentTeam, x10::array::Region* mapping) {
        
        //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D alloc91616 =  org::scalegraph::util::Dist2D::_alloc();
            
            //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
            (alloc91616)->::org::scalegraph::util::Dist2D::_constructor(
              mapping, parentTeam, false);
            alloc91616;
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
                org::scalegraph::util::Dist2D alloc91617 =
                   org::scalegraph::util::Dist2D::_alloc();
                
                //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
                (alloc91617)->::org::scalegraph::util::Dist2D::_constructor(
                  (__extension__ ({
                      
                      //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                      x10::array::Region* __desugarer__var__22__107518 =
                        x10::array::Region::makeRectangular<x10_int,
                        x10_int >((x10::array::Array<x10_int>*)(__extension__ ({
                                      x10::array::Array<x10_int>* __var674__(x10::array::Array<x10_int>::_make(2));
                                      __var674__->__set(0, 
                                      (((x10_int)0)));
                                      __var674__->__set(1, 
                                      (((x10_int)0)));
                                      __var674__;
                                  })), (x10::array::Array<x10_int>*)(__extension__ ({
                                      x10::array::Array<x10_int>* __var675__(x10::array::Array<x10_int>::_make(2));
                                      __var675__->__set(0, 
                                      (((x10_int) ((numPlaces) - (((x10_int)1))))));
                                      __var675__->__set(1, 
                                      (((x10_int)0)));
                                      __var675__;
                                  })));
                      
                      //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                      x10::array::Region* ret107519;
                      
                      //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                      if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__22__107518)->
                                                     FMGL(rect),
                                                   true)) &&
                          (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__22__107518)->
                                                   FMGL(zeroBased),
                                                 true)) &&
                          (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__22__107518)->
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
                      ret107519 = __desugarer__var__22__107518;
                      ret107519;
                  }))
                  , parentTeam, true);
                alloc91617;
            }))
            ;
            
        } else 
        //#line 169 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(distributionMethod, ((x10_int)2))))
        {
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Dist2D alloc91618 =
                   org::scalegraph::util::Dist2D::_alloc();
                
                //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
                (alloc91618)->::org::scalegraph::util::Dist2D::_constructor(
                  (__extension__ ({
                      
                      //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                      x10::array::Region* __desugarer__var__23__107521 =
                        x10::array::Region::makeRectangular<x10_int,
                        x10_int >((x10::array::Array<x10_int>*)(__extension__ ({
                                      x10::array::Array<x10_int>* __var676__(x10::array::Array<x10_int>::_make(2));
                                      __var676__->__set(0, 
                                      (((x10_int)0)));
                                      __var676__->__set(1, 
                                      (((x10_int)0)));
                                      __var676__;
                                  })), (x10::array::Array<x10_int>*)(__extension__ ({
                                      x10::array::Array<x10_int>* __var677__(x10::array::Array<x10_int>::_make(2));
                                      __var677__->__set(0, 
                                      (((x10_int)0)));
                                      __var677__->__set(1, 
                                      (((x10_int) ((numPlaces) - (((x10_int)1))))));
                                      __var677__;
                                  })));
                      
                      //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                      x10::array::Region* ret107522;
                      
                      //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                      if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__23__107521)->
                                                     FMGL(rect),
                                                   true)) &&
                          (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__23__107521)->
                                                   FMGL(zeroBased),
                                                 true)) &&
                          (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__23__107521)->
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
                      ret107522 = __desugarer__var__23__107521;
                      ret107522;
                  }))
                  , parentTeam, true);
                alloc91618;
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
            org::scalegraph::util::Dist2D alloc91619 =  org::scalegraph::util::Dist2D::_alloc();
            
            //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
            (alloc91619)->::org::scalegraph::util::Dist2D::_constructor(
              mapping, parentTeam, true);
            alloc91619;
        }))
        ;
        
    }
    
    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10_int org::scalegraph::util::Dist2D::R() {
        
        //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return ((x10_int) ((x10aux::nullCheck((__extension__ ({
                                                  
                                                  //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107524 =
                                                    (*this)->
                                                      FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                  x10aux::nullCheck(this107524)->
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
                                                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107525 =
                                                    (*this)->
                                                      FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                  x10aux::nullCheck(this107525)->
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
                                                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107526 =
                                                    (*this)->
                                                      FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                  x10aux::nullCheck(this107526)->
                                                    FMGL(value);
                                              }))
                                              ->FMGL(parentTeam))->size()) / x10aux::zeroCheck(x10aux::nullCheck((__extension__ ({
                                                                                                                     
                                                                                                                     //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                                                                     x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107527 =
                                                                                                                       (*this)->
                                                                                                                         FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                                                                     x10aux::nullCheck(this107527)->
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
                                     x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107528 =
                                       (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                     x10aux::nullCheck(this107528)->
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
                                     x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107529 =
                                       (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                     x10aux::nullCheck(this107529)->
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
            x10::array::Array<x10_int>* this107532 = x10aux::nullCheck((__extension__ ({
                                                                           
                                                                           //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                           x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107530 =
                                                                             (*this)->
                                                                               FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                           x10aux::nullCheck(this107530)->
                                                                             FMGL(value);
                                                                       }))
                                                                       ->
                                                                         FMGL(parentTeam))->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret107533;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret107534; __ret107534: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this107532)->FMGL(rail))
                {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret107533 = (x10aux::nullCheck(this107532)->
                                   FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret107534_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this107532)->
                                    FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret107533 = (x10aux::nullCheck(this107532)->
                                   FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this107532)->
                                                                                       FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret107534_end_;
                }
                
            }goto __ret107534_end_; __ret107534_end_: ;
            }
            ret107533;
            }))
            ) / x10aux::zeroCheck(x10aux::nullCheck((__extension__ ({
                                                        
                                                        //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                        x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107535 =
                                                          (*this)->
                                                            FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                        x10aux::nullCheck(this107535)->
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
                   x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107536 =
                     (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                   x10aux::nullCheck(this107536)->FMGL(value);
               }))
               ->FMGL(nreplica);
        
    }
    
    //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::util::Team* org::scalegraph::util::Dist2D::parentTeam(
      ) {
        
        //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
                   
                   //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                   x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107537 =
                     (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                   x10aux::nullCheck(this107537)->FMGL(value);
               }))
               ->FMGL(parentTeam);
        
    }
    
    //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::util::Team* org::scalegraph::util::Dist2D::allTeam(
      ) {
        
        //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
                   
                   //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                   x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107538 =
                     (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                   x10aux::nullCheck(this107538)->FMGL(value);
               }))
               ->FMGL(allTeam);
        
    }
    
    //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::util::Team* org::scalegraph::util::Dist2D::rowTeam(
      ) {
        
        //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10::util::Team*>* this107540 =
              (__extension__ ({
                  
                  //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107539 =
                    (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                  x10aux::nullCheck(this107539)->FMGL(value);
              }))
              ->FMGL(rowTeam);
            x10aux::nullCheck(this107540)->FMGL(value);
        }))
        ;
        
    }
    
    //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::util::Team* org::scalegraph::util::Dist2D::columnTeam(
      ) {
        
        //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10::util::Team*>* this107542 =
              (__extension__ ({
                  
                  //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107541 =
                    (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                  x10aux::nullCheck(this107541)->FMGL(value);
              }))
              ->FMGL(columnTeam);
            x10aux::nullCheck(this107542)->FMGL(value);
        }))
        ;
        
    }
    
    //#line 232 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::lang::Place org::scalegraph::util::Dist2D::getCongruentPlace(
      x10_int z) {
        
        //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int pid = ((x10_int) ((((x10_int) ((x10aux::nullCheck((__extension__ ({
                                                                      
                                                                      //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                      x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107543 =
                                                                        (*this)->
                                                                          FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                      x10aux::nullCheck(this107543)->
                                                                        FMGL(value);
                                                                  }))
                                                                  ->
                                                                    FMGL(allTeam))->size()) * (z)))) + (x10aux::nullCheck((__extension__ ({
                                                                                                                              
                                                                                                                              //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                                                                              x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107544 =
                                                                                                                                (*this)->
                                                                                                                                  FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                                                                              x10aux::nullCheck(this107544)->
                                                                                                                                FMGL(value);
                                                                                                                          }))
                                                                                                                          ->
                                                                                                                            FMGL(mapping))->indexOf(
                                                                                                          (__extension__ ({
                                                                                                              
                                                                                                              //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                                                              x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107545 =
                                                                                                                (*this)->
                                                                                                                  FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                                                              x10aux::nullCheck(this107545)->
                                                                                                                FMGL(value);
                                                                                                          }))
                                                                                                          ->
                                                                                                            FMGL(herePt)))));
        
        //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10::lang::Place>* this107548 =
              x10aux::nullCheck((__extension__ ({
                                    
                                    //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107546 =
                                      (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                    x10aux::nullCheck(this107546)->
                                      FMGL(value);
                                }))
                                ->FMGL(parentTeam))->places();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i107547 = pid;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::lang::Place ret107549;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret107550; __ret107550: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this107548)->FMGL(rail))
                {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret107549 = (x10aux::nullCheck(this107548)->
                                   FMGL(raw))->__apply(i107547);
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret107550_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this107548)->
                                    FMGL(region)->contains(
                                    i107547))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          i107547);
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret107549 = (x10aux::nullCheck(this107548)->
                                   FMGL(raw))->__apply(((x10_int) ((i107547) - (x10aux::nullCheck(this107548)->
                                                                                  FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret107550_end_;
                }
                
            }goto __ret107550_end_; __ret107550_end_: ;
            }
            ret107549;
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
                x10_long p107551 = ((x10_long) (R));
                (x10aux::struct_equals(((x10_long) ((p107551) & (((x10_long) -(p107551))))),
                                       p107551));
            }))
            ) || !((__extension__ ({
                
                //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
                x10_long p107552 = ((x10_long) (C));
                (x10aux::struct_equals(((x10_long) ((p107552) & (((x10_long) -(p107552))))),
                                       p107552));
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
            org::scalegraph::graph::id::IdStruct alloc91620 =
               org::scalegraph::graph::id::IdStruct::_alloc();
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_int lgr107626 = 63 - __builtin_clzl(((((x10_long) (R))) << 1) - 1);
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_int lgc107627 = 63 - __builtin_clzl(((((x10_long) (C))) << 1) - 1);
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_int lgl107628 = 63 - __builtin_clzl(((avgNumberOfLocalVertices) << 1) - 1);
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_boolean transpose107629 = transpose;
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_long numberOfLocalVertexes107630 = numberOfLocalVertices;
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_long numberOfGlobalVertexes107631 = numberOfVertices;
            
            //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc91620->FMGL(lgr) = lgr107626;
            
            //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc91620->FMGL(lgc) = lgc107627;
            
            //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc91620->FMGL(lgl) = lgl107628;
            
            //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc91620->FMGL(transpose) = transpose107629;
            
            //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc91620->FMGL(numberOfLocalVertexes) = numberOfLocalVertexes107630;
            
            //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc91620->FMGL(numberOfGlobalVertexes) = numberOfGlobalVertexes107631;
            alloc91620;
        }))
        ;
        
    }
    
    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    void org::scalegraph::util::Dist2D::del() {
        
        //#line 258 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D__LocalData cachedData =
          (__extension__ ({
            
            //#line 258 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107560 =
              (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
            x10aux::nullCheck(this107560)->FMGL(value);
        }))
        ;
        
        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(cachedData->FMGL(rowTeam),
                                    X10_NULL)) && (!x10aux::struct_equals(x10aux::nullCheck((__extension__ ({
                                                                              
                                                                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                              x10::lang::Cell<x10::util::Team*>* this107561 =
                                                                                cachedData->
                                                                                  FMGL(rowTeam);
                                                                              x10aux::nullCheck(this107561)->
                                                                                FMGL(value);
                                                                          }))
                                                                          )->id(),
                                                                          x10aux::nullCheck(cachedData->
                                                                                              FMGL(allTeam))->id())))
        {
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck((__extension__ ({
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<x10::util::Team*>* this107562 =
                  cachedData->FMGL(rowTeam);
                x10aux::nullCheck(this107562)->FMGL(value);
            }))
            )->del((*this)->org::scalegraph::util::Dist2D::c());
        }
        
        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(cachedData->FMGL(columnTeam),
                                    X10_NULL)) && (!x10aux::struct_equals(x10aux::nullCheck((__extension__ ({
                                                                              
                                                                              //#line 263 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                              x10::lang::Cell<x10::util::Team*>* this107563 =
                                                                                cachedData->
                                                                                  FMGL(columnTeam);
                                                                              x10aux::nullCheck(this107563)->
                                                                                FMGL(value);
                                                                          }))
                                                                          )->id(),
                                                                          x10aux::nullCheck(cachedData->
                                                                                              FMGL(allTeam))->id())))
        {
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck((__extension__ ({
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<x10::util::Team*>* this107564 =
                  cachedData->FMGL(columnTeam);
                x10aux::nullCheck(this107564)->FMGL(value);
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
        x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107634 =
          (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
        
        //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D__LocalData x107635 =
          (__extension__ ({
            
            //#line 266 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D__LocalData alloc107636 =
               org::scalegraph::util::Dist2D__LocalData::_alloc();
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc107636->FMGL(mapping) = x10aux::class_cast_unchecked<x10::array::Region*>(X10_NULL);
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc107636->FMGL(nreplica) = ((x10_int)0);
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc107636->FMGL(parentTeam) = x10::util::Team::
                                              FMGL(WORLD__get)();
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc107636->FMGL(allTeam) = x10::util::Team::
                                           FMGL(WORLD__get)();
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc107636->FMGL(rowTeam) = x10aux::class_cast_unchecked<x10::lang::Cell<x10::util::Team*>*>(X10_NULL);
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc107636->FMGL(columnTeam) = x10aux::class_cast_unchecked<x10::lang::Cell<x10::util::Team*>*>(X10_NULL);
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc107636->FMGL(herePt) = x10aux::class_cast_unchecked<x10::array::Point*>(X10_NULL);
            alloc107636;
        }))
        ;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D__LocalData x107632 =
          x107635;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D__LocalData ret107633;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(this107634)->FMGL(value) = x107632;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
        ret107633 = x107632;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
        ret107633;
    }
    
    //#line 269 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::lang::String* org::scalegraph::util::Dist2D::toString(
      ) {
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Dist2D(["), (*this)->org::scalegraph::util::Dist2D::C()), x10aux::makeStringLit(",")), (*this)->org::scalegraph::util::Dist2D::R()), x10aux::makeStringLit("],")), x10aux::nullCheck((__extension__ ({
                                                                                                                                                                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                                                                                                                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                                                                                                                                                                                                                                                                                                                                           x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this107582 =
                                                                                                                                                                                                                                                                                                                                                                                             (*this)->
                                                                                                                                                                                                                                                                                                                                                                                               FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                                                                                                                                                                                                                                                                                                                                           x10aux::nullCheck(this107582)->
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
            org::scalegraph::util::Dist2D this107584 = (*this);
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D other107583 = x10aux::class_cast<org::scalegraph::util::Dist2D>(other);
            (x10aux::struct_equals(this107584->FMGL(data),
                                   other107583->FMGL(data)));
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
            org::scalegraph::util::Dist2D this107586 = (*this);
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D other107585 = x10aux::class_cast<org::scalegraph::util::Dist2D>(other);
            (x10aux::struct_equals(this107586->FMGL(data),
                                   other107585->FMGL(data)));
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
