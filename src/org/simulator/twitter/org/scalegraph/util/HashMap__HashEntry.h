#ifndef __ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H
#define __ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 

template<class TPMGL(Key), class TPMGL(Value)> class HashMap__HashEntry   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> _alloc(){org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> t; return t; }
    
    TPMGL(Key) getKey();
    TPMGL(Value) getValue();
    TPMGL(Key) FMGL(key);
    
    TPMGL(Value) FMGL(value);
    
    x10_int FMGL(hash);
    
    x10_byte FMGL(flag);
    
    void _constructor();
    
    static org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> _make(
             );
    
    void _constructor(TPMGL(Key) key, TPMGL(Value) value, x10_int h);
    
    static org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> _make(
             TPMGL(Key) key, TPMGL(Value) value, x10_int h);
    
    void _constructor(TPMGL(Key) key, TPMGL(Value) value,
                      x10_int h, x10_byte flag);
    
    static org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> _make(
             TPMGL(Key) key, TPMGL(Value) value, x10_int h,
             x10_byte flag);
    
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> other);
    org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>
      org__scalegraph__util__HashMap__HashEntry____this__org__scalegraph__util__HashMap__HashEntry(
      );
    
    static void _serialize(org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(Key), class TPMGL(Value)> x10aux::RuntimeType org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::rtt;
template<class TPMGL(Key), class TPMGL(Value)> void org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::util::HashMap__HashEntry<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[2] = { x10aux::getRTT<TPMGL(Key)>(), x10aux::getRTT<TPMGL(Value)>()};
    x10aux::RuntimeType::Variance variances[2] = { x10aux::RuntimeType::invariant, x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.HashMap.HashEntry";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 2, parents, 2, params, variances);
}

template <> class HashMap__HashEntry<void, void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    static x10_byte FMGL(EMPTY);
    
    static x10_byte FMGL(OCCUPIED);
    
    static x10_byte FMGL(DUMMY);
    
    static void FMGL(EMPTY__do_init)();
    static void FMGL(EMPTY__init)();
    static volatile x10aux::StaticInitController::status FMGL(EMPTY__status);
    static x10::lang::CheckedThrowable* FMGL(EMPTY__exception);
    static x10_byte FMGL(EMPTY__get)();
    static void FMGL(OCCUPIED__do_init)();
    static void FMGL(OCCUPIED__init)();
    static volatile x10aux::StaticInitController::status FMGL(OCCUPIED__status);
    static x10::lang::CheckedThrowable* FMGL(OCCUPIED__exception);
    static x10_byte FMGL(OCCUPIED__get)();
    static void FMGL(DUMMY__do_init)();
    static void FMGL(DUMMY__init)();
    static volatile x10aux::StaticInitController::status FMGL(DUMMY__status);
    static x10::lang::CheckedThrowable* FMGL(DUMMY__exception);
    static x10_byte FMGL(DUMMY__get)();
    
};

} } } 
#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(Key), class TPMGL(Value)> class HashMap__HashEntry;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Zero.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H_GENERICS
inline x10_byte org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(EMPTY__get)() {
    if (FMGL(EMPTY__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(EMPTY__init)();
    }
    return org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(EMPTY);
}

inline x10_byte org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(OCCUPIED__get)() {
    if (FMGL(OCCUPIED__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(OCCUPIED__init)();
    }
    return org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(OCCUPIED);
}

inline x10_byte org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(DUMMY__get)() {
    if (FMGL(DUMMY__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(DUMMY__init)();
    }
    return org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(DUMMY);
}

#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H_IMPLEMENTATION
#include <org/scalegraph/util/HashMap__HashEntry.h>

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(Key), class TPMGL(Value)> class HashMap__HashEntry_ibox0 : public x10::lang::IBox<org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> > {
public:
    static x10::lang::Any::itable<HashMap__HashEntry_ibox0<TPMGL(Key), TPMGL(Value)> > itable;
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
template<class TPMGL(Key), class TPMGL(Value)> x10::lang::Any::itable<HashMap__HashEntry_ibox0<TPMGL(Key), TPMGL(Value)> >  HashMap__HashEntry_ibox0<TPMGL(Key), TPMGL(Value)>::itable(&HashMap__HashEntry_ibox0<TPMGL(Key), TPMGL(Value)>::equals, &HashMap__HashEntry_ibox0<TPMGL(Key), TPMGL(Value)>::hashCode, &HashMap__HashEntry_ibox0<TPMGL(Key), TPMGL(Value)>::toString, &HashMap__HashEntry_ibox0<TPMGL(Key), TPMGL(Value)>::typeName);
} } } 
template<class TPMGL(Key), class TPMGL(Value)> x10::lang::Any::itable<org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> >  org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_itable_0(&org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::equals, &org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::hashCode, &org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::toString, &org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::typeName);
template<class TPMGL(Key), class TPMGL(Value)> x10aux::itable_entry org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> >())};
template<class TPMGL(Key), class TPMGL(Value)> x10aux::itable_entry org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::HashMap__HashEntry_ibox0<TPMGL(Key), TPMGL(Value)>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> >())};

//#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(Key), class TPMGL(Value)> TPMGL(Key) org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::getKey(
  ) {
    
    //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return (*this)->FMGL(key);
    
}

//#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(Key), class TPMGL(Value)> TPMGL(Value) org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::getValue(
  ) {
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return (*this)->FMGL(value);
    
}

//#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10FieldDecl_c

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(Key), class TPMGL(Value)> void org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_constructor(
                                                 ) {
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
    ;
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(key) = x10aux::zeroValue<TPMGL(Key) >();
    
    //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(value) = x10aux::zeroValue<TPMGL(Value) >();
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(hash) = ((x10_int)0);
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(flag) = org::scalegraph::util::HashMap__HashEntry<void, void>::
                            FMGL(EMPTY__get)();
}
template<class TPMGL(Key), class TPMGL(Value)> org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_make(
                                                 ) {
    org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> this_; 
    this_->_constructor();
    return this_;
}



//#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(Key), class TPMGL(Value)> void org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_constructor(
                                                 TPMGL(Key) key,
                                                 TPMGL(Value) value,
                                                 x10_int h) {
    
    //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
    ;
    
    //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(key) = key;
    
    //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(value) = value;
    
    //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(hash) = h;
    
    //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(flag) = org::scalegraph::util::HashMap__HashEntry<void, void>::
                            FMGL(OCCUPIED__get)();
}
template<class TPMGL(Key), class TPMGL(Value)> org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_make(
                                                 TPMGL(Key) key,
                                                 TPMGL(Value) value,
                                                 x10_int h)
{
    org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> this_; 
    this_->_constructor(key, value, h);
    return this_;
}



//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(Key), class TPMGL(Value)> void org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_constructor(
                                                 TPMGL(Key) key,
                                                 TPMGL(Value) value,
                                                 x10_int h,
                                                 x10_byte flag) {
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": polyglot.ast.Empty_c
    ;
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(key) = key;
    
    //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(value) = value;
    
    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(hash) = h;
    
    //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(flag) = flag;
}
template<class TPMGL(Key), class TPMGL(Value)> org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_make(
                                                 TPMGL(Key) key,
                                                 TPMGL(Value) value,
                                                 x10_int h,
                                                 x10_byte flag)
{
    org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> this_; 
    this_->_constructor(key, value, h, flag);
    return this_;
}



//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(Key), class TPMGL(Value)> x10::lang::String*
  org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(Key), class TPMGL(Value)> x10::lang::String*
  org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::toString(
  ) {
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.util.HashMap.HashEntry:"), x10aux::makeStringLit(" key=")), (*this)->
                                                                                                                                                                                                                                                                                                                                      FMGL(key)), x10aux::makeStringLit(" value=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                       FMGL(value)), x10aux::makeStringLit(" hash=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                         FMGL(hash)), x10aux::makeStringLit(" flag=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          FMGL(flag));
    
}

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(Key), class TPMGL(Value)> x10_int org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::hashCode(
  ) {
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(key)))));
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(value)))));
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(hash)))));
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(flag)))));
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(Key), class TPMGL(Value)> x10_boolean
  org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::equals(
  x10::lang::Any* other) {
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> >(other)))
    {
        
        //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::equals(
             x10aux::class_cast<org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> >(other));
    
}

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(Key), class TPMGL(Value)> x10_boolean
  org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::equals(
  org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> other) {
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(key), other->
                                                        FMGL(key))) &&
    (x10aux::struct_equals((*this)->FMGL(value), other->FMGL(value))) &&
    (x10aux::struct_equals((*this)->FMGL(hash), other->FMGL(hash))) &&
    (x10aux::struct_equals((*this)->FMGL(flag), other->FMGL(flag)));
    
}

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(Key), class TPMGL(Value)> x10_boolean
  org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> >(other)))
    {
        
        //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> >(other));
    
}

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(Key), class TPMGL(Value)> x10_boolean
  org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_struct_equals(
  org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> other) {
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(key), other->
                                                        FMGL(key))) &&
    (x10aux::struct_equals((*this)->FMGL(value), other->FMGL(value))) &&
    (x10aux::struct_equals((*this)->FMGL(hash), other->FMGL(hash))) &&
    (x10aux::struct_equals((*this)->FMGL(flag), other->FMGL(flag)));
    
}

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(Key), class TPMGL(Value)> org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>
  org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::org__scalegraph__util__HashMap__HashEntry____this__org__scalegraph__util__HashMap__HashEntry(
  ) {
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return (*this);
    
}
template<class TPMGL(Key), class TPMGL(Value)> void org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_serialize(org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)> this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(key));
    buf.write(this_->FMGL(value));
    buf.write(this_->FMGL(hash));
    buf.write(this_->FMGL(flag));
    
}

template<class TPMGL(Key), class TPMGL(Value)> void org::scalegraph::util::HashMap__HashEntry<TPMGL(Key), TPMGL(Value)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(key) = buf.read<TPMGL(Key)>();
    FMGL(value) = buf.read<TPMGL(Value)>();
    FMGL(hash) = buf.read<x10_int>();
    FMGL(flag) = buf.read<x10_byte>();
}


#endif // ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_UTIL_HASHMAP__HASHENTRY_H_NODEPS
