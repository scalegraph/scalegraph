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
#include <x10/util/Box.h>
#include <x10/lang/Iterator.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Iterable.h>
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
        
        //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* __desugarer__var__0__48539 = x10aux::nullCheck(placeMap->__apply(
                                                                                p))->x10::util::Box<x10::array::Point*>::__apply();
            
            //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* ret48540;
            
            //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
            if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__0__48539)->
                                           FMGL(rank), ((x10_int)2)))))
            {
                
                //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("x10.array.Point{self.rank==2}"))));
                }
                
            }
            
            //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
            ret48540 = __desugarer__var__0__48539;
            ret48540;
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10:92";
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
        
        //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int r = x10aux::nullCheck(p)->x10::array::Point::__apply(((x10_int)0));
        
        //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int c = x10aux::nullCheck(p)->x10::array::Point::__apply(((x10_int)1));
        
        //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10_int role = ((x10_int) ((r) + (((x10_int) ((c) * (R))))));
        
        //#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* allTeam;
        
        //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if (create_allteam_) {
            
            //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10_int z = ((x10_int) ((x10aux::nullCheck(x10aux::nullCheck(parentTeam)->role())->x10::array::Array<x10_int>::__apply(
                                       ((x10_int)0))) / x10aux::zeroCheck(RC)));
            
            //#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
            allTeam = x10aux::nullCheck(parentTeam)->split(x10aux::nullCheck(x10aux::nullCheck(parentTeam)->role())->x10::array::Array<x10_int>::__apply(
                                                             ((x10_int)0)),
                                                           z,
                                                           role);
            
            //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
            {
                x10::lang::Iterator<x10::lang::Place>* pp48538;
                for (
                     //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                     pp48538 = x10aux::nullCheck(x10aux::nullCheck(parentTeam)->placeGroup())->iterator();
                     x10::lang::Iterator<x10::lang::Place>::hasNext(x10aux::nullCheck(pp48538));
                     ) {
                    
                    //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Place pp = x10::lang::Iterator<x10::lang::Place>::next(x10aux::nullCheck(pp48538));
                    
                    //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(parentTeam)->barrier(
                      x10aux::nullCheck(x10aux::nullCheck(parentTeam)->role())->x10::array::Array<x10_int>::__apply(
                        ((x10_int)0)));
                }
            }
            
        } else {
            
            //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
            allTeam = parentTeam;
        }
        
        //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<x10::util::Team*>* rowTeam;
        
        //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<x10::util::Team*>* columnTeam;
        
        //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
        if (oned) {
            
            //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(R, ((x10_int)1))))
            {
                
                //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                rowTeam = x10::lang::Cell<void>::make<x10::util::Team* >(
                            allTeam);
                
                //#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                columnTeam = (x10aux::class_cast_unchecked<x10::lang::Cell<x10::util::Team*>*>(X10_NULL));
            } else {
                
                //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                rowTeam = (x10aux::class_cast_unchecked<x10::lang::Cell<x10::util::Team*>*>(X10_NULL));
                
                //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                columnTeam = x10::lang::Cell<void>::make<x10::util::Team* >(
                               allTeam);
            }
            
        } else {
            
            //#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
            rowTeam = x10::lang::Cell<void>::make<x10::util::Team* >(
                        x10aux::nullCheck(allTeam)->split(
                          role, r, c));
            
            //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
            columnTeam = x10::lang::Cell<void>::make<x10::util::Team* >(
                           x10aux::nullCheck(allTeam)->split(
                             role, c, r));
        }
        
        //#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::_make(org::scalegraph::util::Dist2D__LocalData::_make(mapping,
                                                                                                                                cycles,
                                                                                                                                parentTeam,
                                                                                                                                allTeam,
                                                                                                                                rowTeam,
                                                                                                                                columnTeam,
                                                                                                                                p));
        
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10:92-132";
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

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_ROWS);
void org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_ROWS__do_init)() {
    FMGL(DISTRIBUTE_ROWS__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::Dist2D.DISTRIBUTE_ROWS");
    x10_int __var382__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(DISTRIBUTE_ROWS) = __var382__;
    FMGL(DISTRIBUTE_ROWS__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_ROWS__init)() {
    x10aux::StaticInitController::initField(&FMGL(DISTRIBUTE_ROWS__status), &FMGL(DISTRIBUTE_ROWS__do_init), &FMGL(DISTRIBUTE_ROWS__exception), "org::scalegraph::util::Dist2D.DISTRIBUTE_ROWS");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_ROWS__status);
x10::lang::CheckedThrowable* org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_ROWS__exception);

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_COLUMNS);
void org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_COLUMNS__do_init)() {
    FMGL(DISTRIBUTE_COLUMNS__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::Dist2D.DISTRIBUTE_COLUMNS");
    x10_int __var383__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(DISTRIBUTE_COLUMNS) = __var383__;
    FMGL(DISTRIBUTE_COLUMNS__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_COLUMNS__init)() {
    x10aux::StaticInitController::initField(&FMGL(DISTRIBUTE_COLUMNS__status), &FMGL(DISTRIBUTE_COLUMNS__do_init), &FMGL(DISTRIBUTE_COLUMNS__exception), "org::scalegraph::util::Dist2D.DISTRIBUTE_COLUMNS");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_COLUMNS__status);
x10::lang::CheckedThrowable* org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_COLUMNS__exception);
 /* static type Rect2D = x10.array.Region{self.rect==true, self.zeroBased==true, self.rank==2}; */ 

//#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10FieldDecl_c

//#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Dist2D::_constructor(x10::array::Region* mapping,
                                                 x10::util::Team* parentTeam,
                                                 x10_boolean oned) {
    
    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Empty_c
    ;
    
    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.AssignPropertyCall_c
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int R = ((x10_int) ((x10aux::nullCheck(mapping)->max(((x10_int)0))) + (((x10_int)1))));
    
    //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int C = ((x10_int) ((x10aux::nullCheck(mapping)->max(((x10_int)1))) + (((x10_int)1))));
    
    //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int RC = ((x10_int) ((R) * (C)));
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10::lang::Place>* places = x10aux::nullCheck(parentTeam)->places();
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int cycles = ((x10_int) ((x10aux::nullCheck(places)->FMGL(size)) / x10aux::zeroCheck(RC)));
    
    //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(((x10_int) ((R) * (C))),
                                                   x10aux::nullCheck(places)->
                                                     FMGL(size))));
    #endif//NO_ASSERTIONS
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if (oned && (!x10aux::struct_equals(R, ((x10_int)1))) && (!x10aux::struct_equals(C,
                                                                                     ((x10_int)1))))
    {
        
        //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make()));
    }
    
    //#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10::util::HashMap<x10::lang::Place, x10::array::Point*>* placeMap =
      x10::util::HashMap<x10::lang::Place, x10::array::Point*>::_make();
    
    //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10::lang::Place>* orderedPlaces = x10::array::Array<x10::lang::Place>::_make(x10aux::nullCheck(places)->
                                                                                                      FMGL(size));
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int i48514min48563 = ((x10_int)0);
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int i48514max48564 = x10aux::nullCheck(mapping)->max(
                               ((x10_int)1));
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
    {
        x10_int i48565;
        for (
             //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
             i48565 = i48514min48563; ((i48565) <= (i48514max48564));
             
             //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
             i48565 = ((x10_int) ((i48565) + (((x10_int)1)))))
        {
            
            //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10_int c48566 = i48565;
            
            //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10_int i48498min48559 = ((x10_int)0);
            
            //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
            x10_int i48498max48560 = x10aux::nullCheck(mapping)->max(
                                       ((x10_int)0));
            
            //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
            {
                x10_int i48561;
                for (
                     //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                     i48561 = i48498min48559; ((i48561) <= (i48498max48560));
                     
                     //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                     i48561 = ((x10_int) ((i48561) + (((x10_int)1)))))
                {
                    
                    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int r48562 = i48561;
                    
                    //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int i48558 = x10aux::nullCheck(mapping)->indexOf(
                                       r48562, c48566);
                    
                    //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
                    orderedPlaces->x10::array::Array<x10::lang::Place>::__set(
                      ((x10_int) ((r48562) + (((x10_int) ((c48566) * (R)))))),
                      x10aux::nullCheck(places)->x10::array::Array<x10::lang::Place>::__apply(
                        i48558));
                    
                    //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int i48482min48554 = ((x10_int)0);
                    
                    //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                    x10_int i48482max48555 = ((x10_int) ((cycles) - (((x10_int)1))));
                    
                    //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
                    {
                        x10_int i48556;
                        for (
                             //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                             i48556 = i48482min48554; ((i48556) <= (i48482max48555));
                             
                             //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                             i48556 = ((x10_int) ((i48556) + (((x10_int)1)))))
                        {
                            
                            //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                            x10_int j48557 = i48556;
                            
                            //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
                            placeMap->put(x10aux::nullCheck(places)->x10::array::Array<x10::lang::Place>::__apply(
                                            ((x10_int) ((i48558) + (((x10_int) ((RC) * (j48557))))))),
                                          x10::array::Point::make(
                                            r48562, c48566));
                        }
                    }
                    
                }
            }
            
        }
    }
    
    //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_boolean create_allteam = false;
    
    //#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if (((cycles) > (((x10_int)1)))) {
        
        //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
        create_allteam = true;
    } else {
        
        //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10::lang::Place>* pp = x10aux::nullCheck(parentTeam)->places();
        
        //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.For_c
        {
            x10::lang::Iterator<x10::array::Point*>* id48530;
            for (
                 //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                 id48530 = x10aux::nullCheck(pp)->FMGL(region)->iterator();
                 x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id48530));
                 ) {
                
                //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10::array::Point* id246 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id48530));
                
                //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                x10_int i = x10aux::nullCheck(id246)->x10::array::Point::__apply(
                              ((x10_int)0));
                
                //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(x10aux::nullCheck(pp)->x10::array::Array<x10::lang::Place>::__apply(
                                              i), orderedPlaces->x10::array::Array<x10::lang::Place>::__apply(
                                                    i))))
                {
                    
                    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                    create_allteam = true;
                    
                    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Branch_c
                    break;
                }
                
            }
        }
        
    }
    
    //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_boolean create_allteam_ = create_allteam;
    
    //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10FieldAssign_c
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



//#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make2D(
  x10::util::Team* parentTeam, x10_int R, x10_int C) {
    
    //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return org::scalegraph::util::Dist2D::_make((__extension__ ({
                                                    
                                                    //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                    x10::array::Region* __desugarer__var__1__48542 =
                                                      x10::array::Region::makeRectangular<x10_int,
                                                      x10_int >(
                                                        (x10::array::Array<x10_int>*)(__extension__ ({
                                                            x10::array::Array<x10_int>* __var385__(x10::array::Array<x10_int>::_make(2));
                                                            __var385__->__set(0, 
                                                            (((x10_int)0)));
                                                            __var385__->__set(1, 
                                                            (((x10_int)0)));
                                                            __var385__;
                                                        })),
                                                        (x10::array::Array<x10_int>*)(__extension__ ({
                                                            x10::array::Array<x10_int>* __var386__(x10::array::Array<x10_int>::_make(2));
                                                            __var386__->__set(0, 
                                                            (((x10_int) ((R) - (((x10_int)1))))));
                                                            __var386__->__set(1, 
                                                            (((x10_int) ((C) - (((x10_int)1))))));
                                                            __var386__;
                                                        })));
                                                    
                                                    //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                    x10::array::Region* ret48543;
                                                    
                                                    //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                                                    if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__1__48542)->
                                                                                   FMGL(rect),
                                                                                 true)) &&
                                                        (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__1__48542)->
                                                                                 FMGL(zeroBased),
                                                                               true)) &&
                                                        (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__1__48542)->
                                                                                 FMGL(rank),
                                                                               ((x10_int)2)))))
                                                    {
                                                        
                                                        //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("x10.array.Region{self.rect==true, self.zeroBased==true, self.rank==2}"))));
                                                        }
                                                        
                                                    }
                                                    
                                                    //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                                                    ret48543 =
                                                      __desugarer__var__1__48542;
                                                    ret48543;
                                                }))
                                                , parentTeam,
                                                false);
    
}

//#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make2D(
  x10::util::Team* parentTeam, x10_int R) {
    
    //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return org::scalegraph::util::Dist2D::_make((__extension__ ({
                                                    
                                                    //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                    x10::array::Region* __desugarer__var__2__48545 =
                                                      x10::array::Region::makeRectangular<x10_int,
                                                      x10_int >(
                                                        (x10::array::Array<x10_int>*)(__extension__ ({
                                                            x10::array::Array<x10_int>* __var388__(x10::array::Array<x10_int>::_make(2));
                                                            __var388__->__set(0, 
                                                            (((x10_int)0)));
                                                            __var388__->__set(1, 
                                                            (((x10_int)0)));
                                                            __var388__;
                                                        })),
                                                        (x10::array::Array<x10_int>*)(__extension__ ({
                                                            x10::array::Array<x10_int>* __var389__(x10::array::Array<x10_int>::_make(2));
                                                            __var389__->__set(0, 
                                                            (((x10_int) ((R) - (((x10_int)1))))));
                                                            __var389__->__set(1, 
                                                            (((x10_int) ((R) - (((x10_int)1))))));
                                                            __var389__;
                                                        })));
                                                    
                                                    //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                    x10::array::Region* ret48546;
                                                    
                                                    //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                                                    if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__2__48545)->
                                                                                   FMGL(rect),
                                                                                 true)) &&
                                                        (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__2__48545)->
                                                                                 FMGL(zeroBased),
                                                                               true)) &&
                                                        (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__2__48545)->
                                                                                 FMGL(rank),
                                                                               ((x10_int)2)))))
                                                    {
                                                        
                                                        //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                                                        if (true)
                                                        {
                                                            
                                                            //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
                                                            x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("x10.array.Region{self.rect==true, self.zeroBased==true, self.rank==2}"))));
                                                        }
                                                        
                                                    }
                                                    
                                                    //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                                                    ret48546 =
                                                      __desugarer__var__2__48545;
                                                    ret48546;
                                                }))
                                                , parentTeam,
                                                false);
    
}

//#line 157 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make2D(
  x10::util::Team* parentTeam, x10::array::Region* mapping) {
    
    //#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return org::scalegraph::util::Dist2D::_make(mapping, parentTeam,
                                                false);
    
}

//#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make1D(
  x10::util::Team* parentTeam, x10_int distributionMethod) {
    
    //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int numPlaces = x10aux::nullCheck(parentTeam)->size();
    
    //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(distributionMethod, org::scalegraph::util::Dist2D::
                                                     FMGL(DISTRIBUTE_ROWS__get)())))
    {
        
        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return org::scalegraph::util::Dist2D::_make((__extension__ ({
                                                        
                                                        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                        x10::array::Region* __desugarer__var__3__48548 =
                                                          x10::array::Region::makeRectangular<x10_int,
                                                          x10_int >(
                                                            (x10::array::Array<x10_int>*)(__extension__ ({
                                                                x10::array::Array<x10_int>* __var392__(x10::array::Array<x10_int>::_make(2));
                                                                __var392__->__set(0, 
                                                                (((x10_int)0)));
                                                                __var392__->__set(1, 
                                                                (((x10_int)0)));
                                                                __var392__;
                                                            })),
                                                            (x10::array::Array<x10_int>*)(__extension__ ({
                                                                x10::array::Array<x10_int>* __var393__(x10::array::Array<x10_int>::_make(2));
                                                                __var393__->__set(0, 
                                                                (((x10_int) ((numPlaces) - (((x10_int)1))))));
                                                                __var393__->__set(1, 
                                                                (((x10_int)0)));
                                                                __var393__;
                                                            })));
                                                        
                                                        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                        x10::array::Region* ret48549;
                                                        
                                                        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                                                        if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__3__48548)->
                                                                                       FMGL(rect),
                                                                                     true)) &&
                                                            (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__3__48548)->
                                                                                     FMGL(zeroBased),
                                                                                   true)) &&
                                                            (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__3__48548)->
                                                                                     FMGL(rank),
                                                                                   ((x10_int)2)))))
                                                        {
                                                            
                                                            //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                                                            if (true)
                                                            {
                                                                
                                                                //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
                                                                x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("x10.array.Region{self.rect==true, self.zeroBased==true, self.rank==2}"))));
                                                            }
                                                            
                                                        }
                                                        
                                                        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret48549 =
                                                          __desugarer__var__3__48548;
                                                        ret48549;
                                                    }))
                                                    , parentTeam,
                                                    true);
        
    } else 
    //#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(distributionMethod, org::scalegraph::util::Dist2D::
                                                     FMGL(DISTRIBUTE_COLUMNS__get)())))
    {
        
        //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return org::scalegraph::util::Dist2D::_make((__extension__ ({
                                                        
                                                        //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                        x10::array::Region* __desugarer__var__4__48551 =
                                                          x10::array::Region::makeRectangular<x10_int,
                                                          x10_int >(
                                                            (x10::array::Array<x10_int>*)(__extension__ ({
                                                                x10::array::Array<x10_int>* __var394__(x10::array::Array<x10_int>::_make(2));
                                                                __var394__->__set(0, 
                                                                (((x10_int)0)));
                                                                __var394__->__set(1, 
                                                                (((x10_int)0)));
                                                                __var394__;
                                                            })),
                                                            (x10::array::Array<x10_int>*)(__extension__ ({
                                                                x10::array::Array<x10_int>* __var395__(x10::array::Array<x10_int>::_make(2));
                                                                __var395__->__set(0, 
                                                                (((x10_int)0)));
                                                                __var395__->__set(1, 
                                                                (((x10_int) ((numPlaces) - (((x10_int)1))))));
                                                                __var395__;
                                                            })));
                                                        
                                                        //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
                                                        x10::array::Region* ret48552;
                                                        
                                                        //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                                                        if (!((x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__4__48551)->
                                                                                       FMGL(rect),
                                                                                     true)) &&
                                                            (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__4__48551)->
                                                                                     FMGL(zeroBased),
                                                                                   true)) &&
                                                            (x10aux::struct_equals(x10aux::nullCheck(__desugarer__var__4__48551)->
                                                                                     FMGL(rank),
                                                                                   ((x10_int)2)))))
                                                        {
                                                            
                                                            //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
                                                            if (true)
                                                            {
                                                                
                                                                //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
                                                                x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::makeStringLit("x10.array.Region{self.rect==true, self.zeroBased==true, self.rank==2}"))));
                                                            }
                                                            
                                                        }
                                                        
                                                        //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret48552 =
                                                          __desugarer__var__4__48551;
                                                        ret48552;
                                                    }))
                                                    , parentTeam,
                                                    true);
        
    } else {
        
        //#line 172 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make()));
    }
    
}

//#line 179 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Dist2D org::scalegraph::util::Dist2D::make1D(
  x10::util::Team* parentTeam, x10::array::Region* mapping) {
    
    //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return org::scalegraph::util::Dist2D::_make(mapping, parentTeam,
                                                true);
    
}

//#line 185 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Dist2D::R() {
    
    //#line 185 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return ((x10_int) ((x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                              FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                                            FMGL(mapping))->max(
                          ((x10_int)0))) + (((x10_int)1))));
    
}

//#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Dist2D::C() {
    
    //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return ((x10_int) ((x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                              FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                                            FMGL(mapping))->max(
                          ((x10_int)1))) + (((x10_int)1))));
    
}

//#line 191 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Dist2D::Z() {
    
    //#line 191 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return ((x10_int) ((x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                              FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                                            FMGL(parentTeam))->size()) / x10aux::zeroCheck(x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                                                                                                 FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                                                                                                               FMGL(allTeam))->size())));
    
}

//#line 195 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Dist2D::r() {
    
    //#line 195 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                               FMGL(herePt))->x10::array::Point::__apply(
             ((x10_int)0));
    
}

//#line 199 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Dist2D::c() {
    
    //#line 199 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                               FMGL(herePt))->x10::array::Point::__apply(
             ((x10_int)1));
    
}

//#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Dist2D::z() {
    
    //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return ((x10_int) ((x10aux::nullCheck(x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                                                FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                                                              FMGL(parentTeam))->role())->x10::array::Array<x10_int>::__apply(
                          ((x10_int)0))) / x10aux::zeroCheck(x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                                                                   FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                                                                                 FMGL(allTeam))->size())));
    
}

//#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c

//#line 209 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Dist2D::numReplicas() {
    
    //#line 209 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
             FMGL(nreplica);
    
}

//#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10::util::Team* org::scalegraph::util::Dist2D::parentTeam(
  ) {
    
    //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
             FMGL(parentTeam);
    
}

//#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10::util::Team* org::scalegraph::util::Dist2D::allTeam() {
    
    //#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
             FMGL(allTeam);
    
}

//#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10::util::Team* org::scalegraph::util::Dist2D::rowTeam() {
    
    //#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                               FMGL(rowTeam))->x10::lang::Cell<x10::util::Team*>::__apply();
    
}

//#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10::util::Team* org::scalegraph::util::Dist2D::columnTeam(
  ) {
    
    //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                               FMGL(columnTeam))->x10::lang::Cell<x10::util::Team*>::__apply();
    
}

//#line 232 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10::lang::Place org::scalegraph::util::Dist2D::getCongruentPlace(
  x10_int z) {
    
    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int pid = ((x10_int) ((((x10_int) ((x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                                                  FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                                                                FMGL(allTeam))->size()) * (z)))) + (x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                                                                                                          FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                                                                                                                        FMGL(mapping))->indexOf(
                                                                                                      x10aux::nullCheck((*this)->
                                                                                                                          FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                                                                                                        FMGL(herePt)))));
    
    //#line 234 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                                   FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                                                 FMGL(parentTeam))->places())->x10::array::Array<x10::lang::Place>::__apply(
             pid);
    
}

//#line 241 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::id::IdStruct org::scalegraph::util::Dist2D::getIds(
  x10_long numberOfVertices, x10_long numberOfLocalVertices,
  x10_boolean transpose) {
    
    //#line 242 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int R;
    
    //#line 242 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int C;
    
    //#line 243 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if (!(transpose)) {
        
        //#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
        R = (*this)->org::scalegraph::util::Dist2D::R();
        
        //#line 245 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
        C = (*this)->org::scalegraph::util::Dist2D::C();
    } else {
        
        //#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
        R = (*this)->org::scalegraph::util::Dist2D::C();
        
        //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
        C = (*this)->org::scalegraph::util::Dist2D::R();
    }
    
    //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int size = ((x10_int) ((R) * (C)));
    
    //#line 251 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_long avgNumberOfLocalVertices = ((x10_long) ((((x10_long) ((((x10_long) ((numberOfVertices) + (((x10_long) (size)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (size)))));
    
    //#line 252 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if (!(org::scalegraph::util::MathAppend::powerOf2(((x10_long) (R)))) ||
        !(org::scalegraph::util::MathAppend::powerOf2(((x10_long) (C)))))
    {
        
        //#line 253 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make()));
    }
    
    //#line 254 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = x10aux::nullCheck((*this)->org::scalegraph::util::Dist2D::allTeam())->size();
    
    //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return org::scalegraph::graph::id::IdStruct::_make(63 - __builtin_clzl(((((x10_long) (R))) << 1) - 1),
                                                       63 - __builtin_clzl(((((x10_long) (C))) << 1) - 1),
                                                       63 - __builtin_clzl(((avgNumberOfLocalVertices) << 1) - 1),
                                                       transpose,
                                                       numberOfLocalVertices,
                                                       numberOfVertices);
    
}

//#line 262 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Dist2D::del() {
    
    //#line 263 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Dist2D__LocalData cachedData =
      x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply();
    
    //#line 264 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(cachedData->FMGL(rowTeam),
                                X10_NULL)) && (!x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(cachedData->
                                                                                                            FMGL(rowTeam))->x10::lang::Cell<x10::util::Team*>::__apply())->id(),
                                                                      x10aux::nullCheck(cachedData->
                                                                                          FMGL(allTeam))->id())))
    {
        
        //#line 266 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(x10aux::nullCheck(cachedData->FMGL(rowTeam))->x10::lang::Cell<x10::util::Team*>::__apply())->del(
          (*this)->org::scalegraph::util::Dist2D::c());
    }
    
    //#line 267 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(cachedData->FMGL(columnTeam),
                                X10_NULL)) && (!x10aux::struct_equals(x10aux::nullCheck(x10aux::nullCheck(cachedData->
                                                                                                            FMGL(columnTeam))->x10::lang::Cell<x10::util::Team*>::__apply())->id(),
                                                                      x10aux::nullCheck(cachedData->
                                                                                          FMGL(allTeam))->id())))
    {
        
        //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(x10aux::nullCheck(cachedData->FMGL(columnTeam))->x10::lang::Cell<x10::util::Team*>::__apply())->del(
          (*this)->org::scalegraph::util::Dist2D::r());
    }
    
    //#line 270 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(x10aux::nullCheck(cachedData->
                                                    FMGL(allTeam))->id(),
                                x10aux::nullCheck(cachedData->
                                                    FMGL(parentTeam))->id())))
    {
        
        //#line 270 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(cachedData->FMGL(allTeam))->del(
          (*this)->org::scalegraph::util::Dist2D::idx());
    }
    
    //#line 271 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__set(
      org::scalegraph::util::Dist2D__LocalData::_make());
}

//#line 274 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::Dist2D::toString(
  ) {
    
    //#line 275 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Dist2D(["), (*this)->org::scalegraph::util::Dist2D::C()), x10aux::makeStringLit(",")), (*this)->org::scalegraph::util::Dist2D::R()), x10aux::makeStringLit("],")), x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                                                                                                                                                                                                                                                                                                                                                                       FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::__apply())->x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>::__apply()->
                                                                                                                                                                                                                                                                                                                                                                                     FMGL(allTeam))->toString()), x10aux::makeStringLit(")"));
    
}

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::Dist2D::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Dist2D::hashCode() {
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(data)->x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>::hashCode())));
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Dist2D::equals(x10::lang::Any* other) {
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::Dist2D>(other)))
    {
        
        //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::Dist2D::equals(
             x10aux::class_cast<org::scalegraph::util::Dist2D>(other));
    
}

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Dist2D::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::Dist2D>(other)))
    {
        
        //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::Dist2D::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::Dist2D>(other));
    
}

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
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

//#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c

//#line 35 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c

//#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c

//#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.PropertyDecl_c
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

//#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Dist2D__LocalData::_constructor(x10::array::Region* mapping_,
                                                            x10_int nreplica_,
                                                            x10::util::Team* parentTeam_,
                                                            x10::util::Team* allTeam_,
                                                            x10::lang::Cell<x10::util::Team*>* rowTeam_,
                                                            x10::lang::Cell<x10::util::Team*>* columnTeam_,
                                                            x10::array::Point* herePt_) {
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Empty_c
    ;
    
    //#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.AssignPropertyCall_c
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



//#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Dist2D__LocalData::_constructor(
  ) {
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": polyglot.ast.Empty_c
    ;
    
    //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.AssignPropertyCall_c
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



//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::Dist2D__LocalData::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::Dist2D__LocalData::toString(
  ) {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.util.Dist2D.LocalData:"), x10aux::makeStringLit(" mapping=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     FMGL(mapping)), x10aux::makeStringLit(" nreplica=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             FMGL(nreplica)), x10aux::makeStringLit(" parentTeam=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        FMGL(parentTeam)), x10aux::makeStringLit(" allTeam=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  FMGL(allTeam)), x10aux::makeStringLit(" rowTeam=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         FMGL(rowTeam)), x10aux::makeStringLit(" columnTeam=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   FMGL(columnTeam)), x10aux::makeStringLit(" herePt=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            FMGL(herePt));
    
}

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Dist2D__LocalData::hashCode(
  ) {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(mapping)))));
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(nreplica)))));
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::nullCheck((*this)->
                                                                                             FMGL(parentTeam))->hashCode())));
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::nullCheck((*this)->
                                                                                             FMGL(allTeam))->hashCode())));
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(rowTeam)))));
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(columnTeam)))));
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::nullCheck((*this)->
                                                                                             FMGL(herePt))->x10::array::Point::hashCode())));
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Dist2D__LocalData::equals(
  x10::lang::Any* other) {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::Dist2D__LocalData>(other)))
    {
        
        //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::Dist2D__LocalData::equals(
             x10aux::class_cast<org::scalegraph::util::Dist2D__LocalData>(other));
    
}

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Dist2D__LocalData::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::Dist2D__LocalData>(other)))
    {
        
        //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::Dist2D__LocalData::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::Dist2D__LocalData>(other));
    
}

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c

//#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10MethodDecl_c
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
