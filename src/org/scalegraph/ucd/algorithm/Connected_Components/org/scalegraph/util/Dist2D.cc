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
            x10::array::Point* __desugarer__var__19__98234 = (__extension__ ({
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::util::Box<x10::array::Point*>* this98233 = placeMap->__apply(
                                                                  p);
                x10aux::nullCheck(this98233)->FMGL(value);
            }))
            ;
            
            //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* ret98235;
            
            //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
            if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__19__98234)->
                                           FMGL(rank), ((x10_int)2)))))
            {
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("x10.array.Point{self.rank==2}"))));
                }
                
            }
            
            //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
            ret98235 = __desugarer__var__19__98234;
            ret98235;
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
                x10::array::Array<x10_int>* this98238 = x10aux::nullCheck(parentTeam)->role();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret98239;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret98240; __ret98240: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this98238)->FMGL(rail)) {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98239 = (x10aux::nullCheck(this98238)->FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret98240_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this98238)->FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret98239 = (x10aux::nullCheck(this98238)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this98238)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret98240_end_;
                    }
                    
                }goto __ret98240_end_; __ret98240_end_: ;
                }
                ret98239;
                }))
                ) / x10aux::zeroCheck(RC)));
                
            
            //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
            allTeam = x10aux::nullCheck(parentTeam)->split(
                        (__extension__ ({
                            
                            //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                            x10::array::Array<x10_int>* this98242 =
                              x10aux::nullCheck(parentTeam)->role();
                            
                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                            ;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int ret98243;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret98244; __ret98244: {
                            {
                                
                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(this98242)->
                                      FMGL(rail)) {
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret98243 = (x10aux::nullCheck(this98242)->
                                                  FMGL(raw))->__apply(((x10_int)0));
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret98244_end_;
                                } else {
                                    
                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (true && !(x10aux::nullCheck(this98242)->
                                                    FMGL(region)->contains(
                                                    ((x10_int)0))))
                                    {
                                        
                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                        x10::array::Array<void>::raiseBoundsError(
                                          ((x10_int)0));
                                    }
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret98243 = (x10aux::nullCheck(this98242)->
                                                  FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this98242)->
                                                                                                      FMGL(layout_min0)))));
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret98244_end_;
                                }
                                
                            }goto __ret98244_end_; __ret98244_end_: ;
                            }
                            ret98243;
                            }))
                            , z, role);
            
            //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
            {
                x10::lang::Iterator<x10::lang::Place>* pp89170;
                for (
                     //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                     pp89170 = x10aux::nullCheck(x10aux::nullCheck(parentTeam)->placeGroup())->iterator();
                     x10::lang::Iterator<x10::lang::Place>::hasNext(x10aux::nullCheck(pp89170));
                     ) {
                    
                    //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Place pp = x10::lang::Iterator<x10::lang::Place>::next(x10aux::nullCheck(pp89170));
                    
                    //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(parentTeam)->barrier(
                      (__extension__ ({
                          
                          //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                          x10::array::Array<x10_int>* this98246 =
                            x10aux::nullCheck(parentTeam)->role();
                          
                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                          ;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10_int ret98247;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                          goto __ret98248; __ret98248: {
                          {
                              
                              //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                              if (x10aux::nullCheck(this98246)->
                                    FMGL(rail)) {
                                  
                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret98247 = (x10aux::nullCheck(this98246)->
                                                FMGL(raw))->__apply(((x10_int)0));
                                  
                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                  goto __ret98248_end_;
                              } else {
                                  
                                  //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                  if (true && !(x10aux::nullCheck(this98246)->
                                                  FMGL(region)->contains(
                                                  ((x10_int)0))))
                                  {
                                      
                                      //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                      x10::array::Array<void>::raiseBoundsError(
                                        ((x10_int)0));
                                  }
                                  
                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret98247 = (x10aux::nullCheck(this98246)->
                                                FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this98246)->
                                                                                                    FMGL(layout_min0)))));
                                  
                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                  goto __ret98248_end_;
                              }
                              
                          }goto __ret98248_end_; __ret98248_end_: ;
                          }
                          ret98247;
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
                        x10::util::Team* x98249 = allTeam;
                        (__extension__ ({
                            
                            //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                            x10::lang::Cell<x10::util::Team*>* alloc98250 =
                               ((new (memset(x10aux::alloc<x10::lang::Cell<x10::util::Team*> >(), 0, sizeof(x10::lang::Cell<x10::util::Team*>))) x10::lang::Cell<x10::util::Team*>()))
                            ;
                            
                            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                            x10::util::Team* x98372 = x98249;
                            
                            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                            alloc98250->FMGL(value) = x98372;
                            alloc98250;
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
                        x10::util::Team* x98253 = allTeam;
                        (__extension__ ({
                            
                            //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                            x10::lang::Cell<x10::util::Team*>* alloc98254 =
                               ((new (memset(x10aux::alloc<x10::lang::Cell<x10::util::Team*> >(), 0, sizeof(x10::lang::Cell<x10::util::Team*>))) x10::lang::Cell<x10::util::Team*>()))
                            ;
                            
                            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                            x10::util::Team* x98373 = x98253;
                            
                            //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                            alloc98254->FMGL(value) = x98373;
                            alloc98254;
                        }))
                        ;
                    }))
                    ;
                }
                
            } else {
                
                //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                rowTeam = (__extension__ ({
                    
                    //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                    x10::util::Team* x98257 = x10aux::nullCheck(allTeam)->split(
                                                role, r, c);
                    (__extension__ ({
                        
                        //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::lang::Cell<x10::util::Team*>* alloc98258 =
                           ((new (memset(x10aux::alloc<x10::lang::Cell<x10::util::Team*> >(), 0, sizeof(x10::lang::Cell<x10::util::Team*>))) x10::lang::Cell<x10::util::Team*>()))
                        ;
                        
                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::util::Team* x98374 = x98257;
                        
                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc98258->FMGL(value) = x98374;
                        alloc98258;
                    }))
                    ;
                }))
                ;
                
                //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                columnTeam = (__extension__ ({
                    
                    //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                    x10::util::Team* x98261 = x10aux::nullCheck(allTeam)->split(
                                                role, c, r);
                    (__extension__ ({
                        
                        //#line 81 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::lang::Cell<x10::util::Team*>* alloc98262 =
                           ((new (memset(x10aux::alloc<x10::lang::Cell<x10::util::Team*> >(), 0, sizeof(x10::lang::Cell<x10::util::Team*>))) x10::lang::Cell<x10::util::Team*>()))
                        ;
                        
                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                        x10::util::Team* x98375 = x98261;
                        
                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc98262->FMGL(value) = x98375;
                        alloc98262;
                    }))
                    ;
                }))
                ;
            }
            
            //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* alloc89097 =
                   ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData> >(), 0, sizeof(x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>))) x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>()))
                ;
                
                //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Dist2D__LocalData x98383 =
                  (__extension__ ({
                    
                    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::Dist2D__LocalData alloc98384 =
                       org::scalegraph::util::Dist2D__LocalData::_alloc();
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::array::Region* mapping_98376 = mapping;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int nreplica_98377 = cycles;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::util::Team* parentTeam_98378 = parentTeam;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::util::Team* allTeam_98379 = allTeam;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Cell<x10::util::Team*>* rowTeam_98380 =
                      rowTeam;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Cell<x10::util::Team*>* columnTeam_98381 =
                      columnTeam;
                    
                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::array::Point* herePt_98382 = p;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc98384->FMGL(mapping) = mapping_98376;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc98384->FMGL(nreplica) = nreplica_98377;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc98384->FMGL(parentTeam) = parentTeam_98378;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc98384->FMGL(allTeam) = allTeam_98379;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc98384->FMGL(rowTeam) = rowTeam_98380;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc98384->FMGL(columnTeam) = columnTeam_98381;
                    
                    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
                    alloc98384->FMGL(herePt) = herePt_98382;
                    alloc98384;
                }))
                ;
                
                //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                alloc89097->FMGL(value) = x98383;
                alloc89097;
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
    x10_int __var360__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(DISTRIBUTE_ROWS) = __var360__;
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
    x10_int __var361__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(DISTRIBUTE_COLUMNS) = __var361__;
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
    x10_int size98385 = x10aux::nullCheck(places)->FMGL(size);
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::array::RectRegion1D* myReg98350 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
    ;
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg98350)->::x10::array::RectRegion1D::_constructor(
      ((x10_int) ((size98385) - (((x10_int)1)))));
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg98350);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(rank) = ((x10_int)1);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(rect) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(zeroBased) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(rail) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(size) = size98385;
    
    //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(layout_min0) = orderedPlaces->FMGL(layout_stride1) =
      orderedPlaces->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
    
    //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    orderedPlaces->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::Place >(size98385, 8, false, true);
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int i89143max98386 = x10aux::nullCheck(mapping)->max(
                               ((x10_int)1));
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
    {
        x10_int i98387;
        for (
             //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
             i98387 = ((x10_int)0); ((i98387) <= (i89143max98386));
             
             //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
             i98387 = ((x10_int) ((i98387) + (((x10_int)1)))))
        {
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10_int c98388 = i98387;
            
            //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10_int i89125max98369 = x10aux::nullCheck(mapping)->max(
                                       ((x10_int)0));
            
            //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
            {
                x10_int i98370;
                for (
                     //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                     i98370 = ((x10_int)0); ((i98370) <= (i89125max98369));
                     
                     //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                     i98370 = ((x10_int) ((i98370) + (((x10_int)1)))))
                {
                    
                    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int r98371 = i98370;
                    
                    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int i98368 = x10aux::nullCheck(mapping)->indexOf(
                                       r98371, c98388);
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i98359 = ((x10_int) ((r98371) + (((x10_int) ((c98388) * (R))))));
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Place v98360 = (__extension__ ({
                        
                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_int i98361 = i98368;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10::lang::Place ret98362;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                        goto __ret98363; __ret98363: {
                        {
                            
                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (x10aux::nullCheck(places)->
                                  FMGL(rail)) {
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret98362 = (x10aux::nullCheck(places)->
                                              FMGL(raw))->__apply(i98361);
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret98363_end_;
                            } else {
                                
                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (true && !(x10aux::nullCheck(places)->
                                                FMGL(region)->contains(
                                                i98361)))
                                {
                                    
                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                    x10::array::Array<void>::raiseBoundsError(
                                      i98361);
                                }
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret98362 = (x10aux::nullCheck(places)->
                                              FMGL(raw))->__apply(((x10_int) ((i98361) - (x10aux::nullCheck(places)->
                                                                                            FMGL(layout_min0)))));
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret98363_end_;
                            }
                            
                        }goto __ret98363_end_; __ret98363_end_: ;
                        }
                        ret98362;
                        }))
                        ;
                        
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Place ret98364;
                    
                    //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (orderedPlaces->FMGL(raw))->__set(i98359, v98360);
                    
                    //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret98364 = v98360;
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                    ret98364;
                    
                    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int i89107max98365 = ((x10_int) ((cycles) - (((x10_int)1))));
                    
                    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
                    {
                        x10_int i98366;
                        for (
                             //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                             i98366 = ((x10_int)0); ((i98366) <= (i89107max98365));
                             
                             //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                             i98366 = ((x10_int) ((i98366) + (((x10_int)1)))))
                        {
                            
                            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                            x10_int j98367 = i98366;
                            
                            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
                            placeMap->put((__extension__ ({
                                              
                                              //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                              x10_int i98353 =
                                                ((x10_int) ((i98368) + (((x10_int) ((RC) * (j98367))))));
                                              
                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                              x10::lang::Place ret98354;
                                              
                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                              goto __ret98355; __ret98355: {
                                              {
                                                  
                                                  //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                  if (x10aux::nullCheck(places)->
                                                        FMGL(rail))
                                                  {
                                                      
                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                      ret98354 =
                                                        (x10aux::nullCheck(places)->
                                                           FMGL(raw))->__apply(i98353);
                                                      
                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                      goto __ret98355_end_;
                                                  } else {
                                                      
                                                      //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                      if (true &&
                                                          !(x10aux::nullCheck(places)->
                                                              FMGL(region)->contains(
                                                              i98353)))
                                                      {
                                                          
                                                          //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                          x10::array::Array<void>::raiseBoundsError(
                                                            i98353);
                                                      }
                                                      
                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                      ret98354 =
                                                        (x10aux::nullCheck(places)->
                                                           FMGL(raw))->__apply(((x10_int) ((i98353) - (x10aux::nullCheck(places)->
                                                                                                         FMGL(layout_min0)))));
                                                      
                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                      goto __ret98355_end_;
                                                  }
                                                  
                                              }goto __ret98355_end_; __ret98355_end_: ;
                                              }
                                              ret98354;
                                              }))
                                              , (__extension__ ({
                                                  
                                                  //#line 125 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                  x10_int i98356 =
                                                    r98371;
                                                  
                                                  //#line 125 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                  x10_int i98357 =
                                                    c98388;
                                                  (__extension__ ({
                                                      
                                                      //#line 125 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                      x10::array::Point* alloc98358 =
                                                         ((new (memset(x10aux::alloc<x10::array::Point>(), 0, sizeof(x10::array::Point))) x10::array::Point()))
                                                      ;
                                                      
                                                      //#line 51 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                      x10_int i98351 =
                                                        i98356;
                                                      
                                                      //#line 51 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": x10.ast.X10LocalDecl_c
                                                      x10_int i98352 =
                                                        i98357;
                                                      
                                                      //#line 52 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc98358->
                                                        FMGL(rank) =
                                                        ((x10_int)2);
                                                      
                                                      //#line 53 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc98358->
                                                        FMGL(c0) =
                                                        i98351;
                                                      
                                                      //#line 54 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc98358->
                                                        FMGL(c1) =
                                                        i98352;
                                                      
                                                      //#line 55 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc98358->
                                                        FMGL(c2) =
                                                        alloc98358->
                                                          FMGL(c3) =
                                                        ((x10_int)0);
                                                      
                                                      //#line 56 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Point.x10": Eval of x10.ast.X10FieldAssign_c
                                                      alloc98358->
                                                        FMGL(cs) =
                                                        (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
                                                      alloc98358;
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
                x10::lang::Iterator<x10::array::Point*>* id89161;
                for (
                     //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                     id89161 = x10aux::nullCheck(pp)->FMGL(region)->iterator();
                     x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id89161));
                     ) {
                    
                    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::array::Point* id231 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id89161));
                    
                    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int i = x10aux::nullCheck(id231)->x10::array::Point::__apply(
                                  ((x10_int)0));
                    
                    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals((__extension__ ({
                                                    
                                                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                    x10_int i98225 =
                                                      i;
                                                    
                                                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                    x10::lang::Place ret98226;
                                                    
                                                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                    goto __ret98227; __ret98227: {
                                                    {
                                                        
                                                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                        if (x10aux::nullCheck(pp)->
                                                              FMGL(rail))
                                                        {
                                                            
                                                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                            ret98226 =
                                                              (x10aux::nullCheck(pp)->
                                                                 FMGL(raw))->__apply(i98225);
                                                            
                                                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                            goto __ret98227_end_;
                                                        }
                                                        else
                                                        {
                                                            
                                                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                            if (true &&
                                                                !(x10aux::nullCheck(pp)->
                                                                    FMGL(region)->contains(
                                                                    i98225)))
                                                            {
                                                                
                                                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                x10::array::Array<void>::raiseBoundsError(
                                                                  i98225);
                                                            }
                                                            
                                                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                            ret98226 =
                                                              (x10aux::nullCheck(pp)->
                                                                 FMGL(raw))->__apply(((x10_int) ((i98225) - (x10aux::nullCheck(pp)->
                                                                                                               FMGL(layout_min0)))));
                                                            
                                                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                            goto __ret98227_end_;
                                                        }
                                                        
                                                    }goto __ret98227_end_; __ret98227_end_: ;
                                                    }
                                                    ret98226;
                                                    }))
                                                    , (__extension__ ({
                                                        
                                                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10_int i98228 =
                                                          i;
                                                        
                                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10::lang::Place ret98229;
                                                        
                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret98229 =
                                                          (orderedPlaces->
                                                             FMGL(raw))->__apply(i98228);
                                                        ret98229;
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
            org::scalegraph::util::Dist2D alloc89098 =  org::scalegraph::util::Dist2D::_alloc();
            
            //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
            (alloc89098)->::org::scalegraph::util::Dist2D::_constructor(
              (__extension__ ({
                  
                  //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::array::Region* __desugarer__var__20__98275 =
                    x10::array::Region::makeRectangular<x10_int,
                    x10_int >((x10::array::Array<x10_int>*)(__extension__ ({
                                  x10::array::Array<x10_int>* __var363__(x10::array::Array<x10_int>::_make(2));
                                  __var363__->__set(0, 
                                  (((x10_int)0)));
                                  __var363__->__set(1, 
                                  (((x10_int)0)));
                                  __var363__;
                              })), (x10::array::Array<x10_int>*)(__extension__ ({
                                  x10::array::Array<x10_int>* __var364__(x10::array::Array<x10_int>::_make(2));
                                  __var364__->__set(0, 
                                  (((x10_int) ((R) - (((x10_int)1))))));
                                  __var364__->__set(1, 
                                  (((x10_int) ((C) - (((x10_int)1))))));
                                  __var364__;
                              })));
                  
                  //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::array::Region* ret98276;
                  
                  //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                  if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__20__98275)->
                                                 FMGL(rect),
                                               true)) && (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__20__98275)->
                                                                                  FMGL(zeroBased),
                                                                                true)) &&
                      (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__20__98275)->
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
                  ret98276 = __desugarer__var__20__98275;
                  ret98276;
              }))
              , parentTeam, false);
            alloc89098;
        }))
        ;
        
    }
    
    //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make2D(
      x10::util::Team* parentTeam, x10_int R) {
        
        //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D alloc89099 =  org::scalegraph::util::Dist2D::_alloc();
            
            //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
            (alloc89099)->::org::scalegraph::util::Dist2D::_constructor(
              (__extension__ ({
                  
                  //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::array::Region* __desugarer__var__21__98278 =
                    x10::array::Region::makeRectangular<x10_int,
                    x10_int >((x10::array::Array<x10_int>*)(__extension__ ({
                                  x10::array::Array<x10_int>* __var366__(x10::array::Array<x10_int>::_make(2));
                                  __var366__->__set(0, 
                                  (((x10_int)0)));
                                  __var366__->__set(1, 
                                  (((x10_int)0)));
                                  __var366__;
                              })), (x10::array::Array<x10_int>*)(__extension__ ({
                                  x10::array::Array<x10_int>* __var367__(x10::array::Array<x10_int>::_make(2));
                                  __var367__->__set(0, 
                                  (((x10_int) ((R) - (((x10_int)1))))));
                                  __var367__->__set(1, 
                                  (((x10_int) ((R) - (((x10_int)1))))));
                                  __var367__;
                              })));
                  
                  //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::array::Region* ret98279;
                  
                  //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                  if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__21__98278)->
                                                 FMGL(rect),
                                               true)) && (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__21__98278)->
                                                                                  FMGL(zeroBased),
                                                                                true)) &&
                      (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__21__98278)->
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
                  ret98279 = __desugarer__var__21__98278;
                  ret98279;
              }))
              , parentTeam, false);
            alloc89099;
        }))
        ;
        
    }
    
    //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make2D(
      x10::util::Team* parentTeam, x10::array::Region* mapping) {
        
        //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D alloc89100 =  org::scalegraph::util::Dist2D::_alloc();
            
            //#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
            (alloc89100)->::org::scalegraph::util::Dist2D::_constructor(
              mapping, parentTeam, false);
            alloc89100;
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
                org::scalegraph::util::Dist2D alloc89101 =
                   org::scalegraph::util::Dist2D::_alloc();
                
                //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
                (alloc89101)->::org::scalegraph::util::Dist2D::_constructor(
                  (__extension__ ({
                      
                      //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                      x10::array::Region* __desugarer__var__22__98281 =
                        x10::array::Region::makeRectangular<x10_int,
                        x10_int >((x10::array::Array<x10_int>*)(__extension__ ({
                                      x10::array::Array<x10_int>* __var370__(x10::array::Array<x10_int>::_make(2));
                                      __var370__->__set(0, 
                                      (((x10_int)0)));
                                      __var370__->__set(1, 
                                      (((x10_int)0)));
                                      __var370__;
                                  })), (x10::array::Array<x10_int>*)(__extension__ ({
                                      x10::array::Array<x10_int>* __var371__(x10::array::Array<x10_int>::_make(2));
                                      __var371__->__set(0, 
                                      (((x10_int) ((numPlaces) - (((x10_int)1))))));
                                      __var371__->__set(1, 
                                      (((x10_int)0)));
                                      __var371__;
                                  })));
                      
                      //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                      x10::array::Region* ret98282;
                      
                      //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                      if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__22__98281)->
                                                     FMGL(rect),
                                                   true)) &&
                          (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__22__98281)->
                                                   FMGL(zeroBased),
                                                 true)) &&
                          (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__22__98281)->
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
                      ret98282 = __desugarer__var__22__98281;
                      ret98282;
                  }))
                  , parentTeam, true);
                alloc89101;
            }))
            ;
            
        } else 
        //#line 169 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(distributionMethod, ((x10_int)2))))
        {
            
            //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::Dist2D alloc89102 =
                   org::scalegraph::util::Dist2D::_alloc();
                
                //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
                (alloc89102)->::org::scalegraph::util::Dist2D::_constructor(
                  (__extension__ ({
                      
                      //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                      x10::array::Region* __desugarer__var__23__98284 =
                        x10::array::Region::makeRectangular<x10_int,
                        x10_int >((x10::array::Array<x10_int>*)(__extension__ ({
                                      x10::array::Array<x10_int>* __var372__(x10::array::Array<x10_int>::_make(2));
                                      __var372__->__set(0, 
                                      (((x10_int)0)));
                                      __var372__->__set(1, 
                                      (((x10_int)0)));
                                      __var372__;
                                  })), (x10::array::Array<x10_int>*)(__extension__ ({
                                      x10::array::Array<x10_int>* __var373__(x10::array::Array<x10_int>::_make(2));
                                      __var373__->__set(0, 
                                      (((x10_int)0)));
                                      __var373__->__set(1, 
                                      (((x10_int) ((numPlaces) - (((x10_int)1))))));
                                      __var373__;
                                  })));
                      
                      //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                      x10::array::Region* ret98285;
                      
                      //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                      if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__23__98284)->
                                                     FMGL(rect),
                                                   true)) &&
                          (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__23__98284)->
                                                   FMGL(zeroBased),
                                                 true)) &&
                          (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__23__98284)->
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
                      ret98285 = __desugarer__var__23__98284;
                      ret98285;
                  }))
                  , parentTeam, true);
                alloc89102;
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
            org::scalegraph::util::Dist2D alloc89103 =  org::scalegraph::util::Dist2D::_alloc();
            
            //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorCall_c
            (alloc89103)->::org::scalegraph::util::Dist2D::_constructor(
              mapping, parentTeam, true);
            alloc89103;
        }))
        ;
        
    }
    
    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10_int org::scalegraph::util::Dist2D::R() {
        
        //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return ((x10_int) ((x10aux::nullCheck((__extension__ ({
                                                  
                                                  //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98287 =
                                                    (*this)->
                                                      FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                  x10aux::nullCheck(this98287)->
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
                                                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98288 =
                                                    (*this)->
                                                      FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                  x10aux::nullCheck(this98288)->
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
                                                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98289 =
                                                    (*this)->
                                                      FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                  x10aux::nullCheck(this98289)->
                                                    FMGL(value);
                                              }))
                                              ->FMGL(parentTeam))->size()) / x10aux::zeroCheck(x10aux::nullCheck((__extension__ ({
                                                                                                                     
                                                                                                                     //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                                                                     x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98290 =
                                                                                                                       (*this)->
                                                                                                                         FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                                                                     x10aux::nullCheck(this98290)->
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
                                     x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98291 =
                                       (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                     x10aux::nullCheck(this98291)->
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
                                     x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98292 =
                                       (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                     x10aux::nullCheck(this98292)->
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
            x10::array::Array<x10_int>* this98295 = x10aux::nullCheck((__extension__ ({
                                                                          
                                                                          //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                          x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98293 =
                                                                            (*this)->
                                                                              FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                          x10aux::nullCheck(this98293)->
                                                                            FMGL(value);
                                                                      }))
                                                                      ->
                                                                        FMGL(parentTeam))->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret98296;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret98297; __ret98297: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this98295)->FMGL(rail))
                {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret98296 = (x10aux::nullCheck(this98295)->
                                  FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret98297_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this98295)->
                                    FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret98296 = (x10aux::nullCheck(this98295)->
                                  FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this98295)->
                                                                                      FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret98297_end_;
                }
                
            }goto __ret98297_end_; __ret98297_end_: ;
            }
            ret98296;
            }))
            ) / x10aux::zeroCheck(x10aux::nullCheck((__extension__ ({
                                                        
                                                        //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                        x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98298 =
                                                          (*this)->
                                                            FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                        x10aux::nullCheck(this98298)->
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
                   x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98299 =
                     (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                   x10aux::nullCheck(this98299)->FMGL(value);
               }))
               ->FMGL(nreplica);
        
    }
    
    //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::util::Team* org::scalegraph::util::Dist2D::parentTeam(
      ) {
        
        //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
                   
                   //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                   x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98300 =
                     (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                   x10aux::nullCheck(this98300)->FMGL(value);
               }))
               ->FMGL(parentTeam);
        
    }
    
    //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::util::Team* org::scalegraph::util::Dist2D::allTeam(
      ) {
        
        //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
                   
                   //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                   x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98301 =
                     (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                   x10aux::nullCheck(this98301)->FMGL(value);
               }))
               ->FMGL(allTeam);
        
    }
    
    //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::util::Team* org::scalegraph::util::Dist2D::rowTeam(
      ) {
        
        //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10::util::Team*>* this98303 =
              (__extension__ ({
                  
                  //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98302 =
                    (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                  x10aux::nullCheck(this98302)->FMGL(value);
              }))
              ->FMGL(rowTeam);
            x10aux::nullCheck(this98303)->FMGL(value);
        }))
        ;
        
    }
    
    //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::util::Team* org::scalegraph::util::Dist2D::columnTeam(
      ) {
        
        //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<x10::util::Team*>* this98305 =
              (__extension__ ({
                  
                  //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                  x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98304 =
                    (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                  x10aux::nullCheck(this98304)->FMGL(value);
              }))
              ->FMGL(columnTeam);
            x10aux::nullCheck(this98305)->FMGL(value);
        }))
        ;
        
    }
    
    //#line 232 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::lang::Place org::scalegraph::util::Dist2D::getCongruentPlace(
      x10_int z) {
        
        //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int pid = ((x10_int) ((((x10_int) ((x10aux::nullCheck((__extension__ ({
                                                                      
                                                                      //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                      x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98306 =
                                                                        (*this)->
                                                                          FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                      x10aux::nullCheck(this98306)->
                                                                        FMGL(value);
                                                                  }))
                                                                  ->
                                                                    FMGL(allTeam))->size()) * (z)))) + (x10aux::nullCheck((__extension__ ({
                                                                                                                              
                                                                                                                              //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                                                                              x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98307 =
                                                                                                                                (*this)->
                                                                                                                                  FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                                                                              x10aux::nullCheck(this98307)->
                                                                                                                                FMGL(value);
                                                                                                                          }))
                                                                                                                          ->
                                                                                                                            FMGL(mapping))->indexOf(
                                                                                                          (__extension__ ({
                                                                                                              
                                                                                                              //#line 233 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                                                              x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98308 =
                                                                                                                (*this)->
                                                                                                                  FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                                                              x10aux::nullCheck(this98308)->
                                                                                                                FMGL(value);
                                                                                                          }))
                                                                                                          ->
                                                                                                            FMGL(herePt)))));
        
        //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10::lang::Place>* this98311 =
              x10aux::nullCheck((__extension__ ({
                                    
                                    //#line 234 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98309 =
                                      (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                    x10aux::nullCheck(this98309)->
                                      FMGL(value);
                                }))
                                ->FMGL(parentTeam))->places();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i98310 = pid;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::lang::Place ret98312;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret98313; __ret98313: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this98311)->FMGL(rail))
                {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret98312 = (x10aux::nullCheck(this98311)->
                                  FMGL(raw))->__apply(i98310);
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret98313_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this98311)->
                                    FMGL(region)->contains(
                                    i98310))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          i98310);
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret98312 = (x10aux::nullCheck(this98311)->
                                  FMGL(raw))->__apply(((x10_int) ((i98310) - (x10aux::nullCheck(this98311)->
                                                                                FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret98313_end_;
                }
                
            }goto __ret98313_end_; __ret98313_end_: ;
            }
            ret98312;
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
                x10_long p98314 = ((x10_long) (R));
                (x10aux::struct_equals(((x10_long) ((p98314) & (((x10_long) -(p98314))))),
                                       p98314));
            }))
            ) || !((__extension__ ({
                
                //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
                x10_long p98315 = ((x10_long) (C));
                (x10aux::struct_equals(((x10_long) ((p98315) & (((x10_long) -(p98315))))),
                                       p98315));
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
            org::scalegraph::graph::id::IdStruct alloc89104 =
               org::scalegraph::graph::id::IdStruct::_alloc();
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_int lgr98389 = 63 - __builtin_clzl(((((x10_long) (R))) << 1) - 1);
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_int lgc98390 = 63 - __builtin_clzl(((((x10_long) (C))) << 1) - 1);
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_int lgl98391 = 63 - __builtin_clzl(((avgNumberOfLocalVertices) << 1) - 1);
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_boolean transpose98392 = transpose;
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_long numberOfLocalVertexes98393 = numberOfLocalVertices;
            
            //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": x10.ast.X10LocalDecl_c
            x10_long numberOfGlobalVertexes98394 = numberOfVertices;
            
            //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc89104->FMGL(lgr) = lgr98389;
            
            //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc89104->FMGL(lgc) = lgc98390;
            
            //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc89104->FMGL(lgl) = lgl98391;
            
            //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc89104->FMGL(transpose) = transpose98392;
            
            //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc89104->FMGL(numberOfLocalVertexes) = numberOfLocalVertexes98393;
            
            //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/IdStruct.x10": Eval of x10.ast.X10FieldAssign_c
            alloc89104->FMGL(numberOfGlobalVertexes) = numberOfGlobalVertexes98394;
            alloc89104;
        }))
        ;
        
    }
    
    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    void org::scalegraph::util::Dist2D::del() {
        
        //#line 258 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D__LocalData cachedData =
          (__extension__ ({
            
            //#line 258 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98323 =
              (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
            x10aux::nullCheck(this98323)->FMGL(value);
        }))
        ;
        
        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(cachedData->FMGL(rowTeam),
                                    X10_NULL)) && (!x10aux::struct_equals(x10aux::nullCheck((__extension__ ({
                                                                              
                                                                              //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                              x10::lang::Cell<x10::util::Team*>* this98324 =
                                                                                cachedData->
                                                                                  FMGL(rowTeam);
                                                                              x10aux::nullCheck(this98324)->
                                                                                FMGL(value);
                                                                          }))
                                                                          )->id(),
                                                                          x10aux::nullCheck(cachedData->
                                                                                              FMGL(allTeam))->id())))
        {
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck((__extension__ ({
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<x10::util::Team*>* this98325 =
                  cachedData->FMGL(rowTeam);
                x10aux::nullCheck(this98325)->FMGL(value);
            }))
            )->del((*this)->org::scalegraph::util::Dist2D::c());
        }
        
        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(cachedData->FMGL(columnTeam),
                                    X10_NULL)) && (!x10aux::struct_equals(x10aux::nullCheck((__extension__ ({
                                                                              
                                                                              //#line 263 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                              x10::lang::Cell<x10::util::Team*>* this98326 =
                                                                                cachedData->
                                                                                  FMGL(columnTeam);
                                                                              x10aux::nullCheck(this98326)->
                                                                                FMGL(value);
                                                                          }))
                                                                          )->id(),
                                                                          x10aux::nullCheck(cachedData->
                                                                                              FMGL(allTeam))->id())))
        {
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck((__extension__ ({
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::lang::Cell<x10::util::Team*>* this98327 =
                  cachedData->FMGL(columnTeam);
                x10aux::nullCheck(this98327)->FMGL(value);
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
        x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98397 =
          (*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
        
        //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D__LocalData x98398 =
          (__extension__ ({
            
            //#line 266 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D__LocalData alloc98399 =
               org::scalegraph::util::Dist2D__LocalData::_alloc();
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc98399->FMGL(mapping) = x10aux::class_cast_unchecked<x10::array::Region*>(X10_NULL);
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc98399->FMGL(nreplica) = ((x10_int)0);
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc98399->FMGL(parentTeam) = x10::util::Team::
                                             FMGL(WORLD__get)();
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc98399->FMGL(allTeam) = x10::util::Team::
                                          FMGL(WORLD__get)();
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc98399->FMGL(rowTeam) = x10aux::class_cast_unchecked<x10::lang::Cell<x10::util::Team*>*>(X10_NULL);
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc98399->FMGL(columnTeam) = x10aux::class_cast_unchecked<x10::lang::Cell<x10::util::Team*>*>(X10_NULL);
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
            alloc98399->FMGL(herePt) = x10aux::class_cast_unchecked<x10::array::Point*>(X10_NULL);
            alloc98399;
        }))
        ;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D__LocalData x98395 =
          x98398;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D__LocalData ret98396;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(this98397)->FMGL(value) = x98395;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
        ret98396 = x98395;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
        ret98396;
    }
    
    //#line 269 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
    x10::lang::String* org::scalegraph::util::Dist2D::toString(
      ) {
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Dist2D(["), (*this)->org::scalegraph::util::Dist2D::C()), x10aux::makeStringLit(",")), (*this)->org::scalegraph::util::Dist2D::R()), x10aux::makeStringLit("],")), x10aux::nullCheck((__extension__ ({
                                                                                                                                                                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                                                                                                                                                                           //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                                                                                                                                                                                                                                                                                                                                                           x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>* this98345 =
                                                                                                                                                                                                                                                                                                                                                                                             (*this)->
                                                                                                                                                                                                                                                                                                                                                                                               FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply();
                                                                                                                                                                                                                                                                                                                                                                                           x10aux::nullCheck(this98345)->
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
            org::scalegraph::util::Dist2D this98347 = (*this);
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D other98346 = x10aux::class_cast<org::scalegraph::util::Dist2D>(other);
            (x10aux::struct_equals(this98347->FMGL(data),
                                   other98346->FMGL(data)));
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
            org::scalegraph::util::Dist2D this98349 = (*this);
            
            //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Dist2D other98348 = x10aux::class_cast<org::scalegraph::util::Dist2D>(other);
            (x10aux::struct_equals(this98349->FMGL(data),
                                   other98348->FMGL(data)));
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
