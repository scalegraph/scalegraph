/*************************************************/
/* START of ProfilingDB */
#include <org/scalegraph/util/ProfilingDB.h>

#include <x10/lang/Any.h>
#include <org/scalegraph/util/Team2.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/util/ProfilingDB__DB.h>
#include <x10/array/Array.h>
#include <org/scalegraph/Config.h>
#include <x10/util/Team.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/ProfilingDB__Timer.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Double.h>
#include <x10/lang/BadPlaceException.h>
#include <x10/lang/String.h>
#include <org/scalegraph/util/SString.h>
#include <org/scalegraph/util/SStringBuilder.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/MemoryPointer.h>
#include <x10/lang/Byte.h>
#include <org/scalegraph/test/STest.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#ifndef ORG_SCALEGRAPH_UTIL_PROFILINGDB__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PROFILINGDB__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_util_ProfilingDB__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::ProfilingDB__DB*>::itable<org_scalegraph_util_ProfilingDB__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::ProfilingDB__DB* __apply() {
        
        //#line 308 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return org::scalegraph::util::ProfilingDB__DB::_make(numPoints);
        
    }
    
    // captured environment
    x10::array::Array<x10_int>* numPoints;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numPoints);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_ProfilingDB__closure__1* storage = x10aux::alloc<org_scalegraph_util_ProfilingDB__closure__1>();
        buf.record_reference(storage);
        x10::array::Array<x10_int>* that_numPoints = buf.read<x10::array::Array<x10_int>*>();
        org_scalegraph_util_ProfilingDB__closure__1* this_ = new (storage) org_scalegraph_util_ProfilingDB__closure__1(that_numPoints);
        return this_;
    }
    
    org_scalegraph_util_ProfilingDB__closure__1(x10::array::Array<x10_int>* numPoints) : numPoints(numPoints) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::ProfilingDB__DB*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::ProfilingDB__DB*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10:308";
    }

};

#endif // ORG_SCALEGRAPH_UTIL_PROFILINGDB__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PROFILINGDB__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PROFILINGDB__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_util_ProfilingDB__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_util_ProfilingDB__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 320 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.Try_c
        try {
            
            //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            saved_this->org::scalegraph::util::ProfilingDB::finishStepWithAll();
        }
        catch (x10::lang::CheckedThrowable* __exc980) {
            if (true) {
                x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc980);
                {
                    
                    //#line 322 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                    (e)->printStackTrace();
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::ProfilingDB saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_ProfilingDB__closure__2* storage = x10aux::alloc<org_scalegraph_util_ProfilingDB__closure__2>();
        buf.record_reference(storage);
        org::scalegraph::util::ProfilingDB that_saved_this = buf.read<org::scalegraph::util::ProfilingDB>();
        org_scalegraph_util_ProfilingDB__closure__2* this_ = new (storage) org_scalegraph_util_ProfilingDB__closure__2(that_saved_this);
        return this_;
    }
    
    org_scalegraph_util_ProfilingDB__closure__2(org::scalegraph::util::ProfilingDB saved_this) : saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10:319-323";
    }

};

#endif // ORG_SCALEGRAPH_UTIL_PROFILINGDB__CLOSURE__2_CLOSURE
namespace org { namespace scalegraph { namespace util { 
class ProfilingDB_ibox0 : public x10::lang::IBox<org::scalegraph::util::ProfilingDB> {
public:
    static x10::lang::Any::itable<ProfilingDB_ibox0 > itable;
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
x10::lang::Any::itable<ProfilingDB_ibox0 >  ProfilingDB_ibox0::itable(&ProfilingDB_ibox0::equals, &ProfilingDB_ibox0::hashCode, &ProfilingDB_ibox0::toString, &ProfilingDB_ibox0::typeName);
} } } 
x10::lang::Any::itable<org::scalegraph::util::ProfilingDB >  org::scalegraph::util::ProfilingDB::_itable_0(&org::scalegraph::util::ProfilingDB::equals, &org::scalegraph::util::ProfilingDB::hashCode, &org::scalegraph::util::ProfilingDB::toString, &org::scalegraph::util::ProfilingDB::typeName);
x10aux::itable_entry org::scalegraph::util::ProfilingDB::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::ProfilingDB::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::ProfilingDB>())};
x10aux::itable_entry org::scalegraph::util::ProfilingDB::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::ProfilingDB_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::ProfilingDB>())};

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_TIME);
void org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_TIME__do_init)() {
    FMGL(TH_AVG_TIME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.TH_AVG_TIME");
    x10_int __var958__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)0));
    FMGL(TH_AVG_TIME) = __var958__;
    FMGL(TH_AVG_TIME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_TIME__init)() {
    x10aux::StaticInitController::initField(&FMGL(TH_AVG_TIME__status), &FMGL(TH_AVG_TIME__do_init), &FMGL(TH_AVG_TIME__exception), "org::scalegraph::util::ProfilingDB.TH_AVG_TIME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_TIME__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_TIME__exception);

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_CALL);
void org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_CALL__do_init)() {
    FMGL(TH_AVG_CALL__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.TH_AVG_CALL");
    x10_int __var959__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)1));
    FMGL(TH_AVG_CALL) = __var959__;
    FMGL(TH_AVG_CALL__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_CALL__init)() {
    x10aux::StaticInitController::initField(&FMGL(TH_AVG_CALL__status), &FMGL(TH_AVG_CALL__do_init), &FMGL(TH_AVG_CALL__exception), "org::scalegraph::util::ProfilingDB.TH_AVG_CALL");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_CALL__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_CALL__exception);

//#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_TIME);
void org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_TIME__do_init)() {
    FMGL(TH_MIN_TIME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.TH_MIN_TIME");
    x10_int __var960__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)2));
    FMGL(TH_MIN_TIME) = __var960__;
    FMGL(TH_MIN_TIME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_TIME__init)() {
    x10aux::StaticInitController::initField(&FMGL(TH_MIN_TIME__status), &FMGL(TH_MIN_TIME__do_init), &FMGL(TH_MIN_TIME__exception), "org::scalegraph::util::ProfilingDB.TH_MIN_TIME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_TIME__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_TIME__exception);

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_CALL);
void org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_CALL__do_init)() {
    FMGL(TH_MIN_CALL__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.TH_MIN_CALL");
    x10_int __var961__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)3));
    FMGL(TH_MIN_CALL) = __var961__;
    FMGL(TH_MIN_CALL__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_CALL__init)() {
    x10aux::StaticInitController::initField(&FMGL(TH_MIN_CALL__status), &FMGL(TH_MIN_CALL__do_init), &FMGL(TH_MIN_CALL__exception), "org::scalegraph::util::ProfilingDB.TH_MIN_CALL");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_CALL__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_CALL__exception);

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_TIME);
void org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_TIME__do_init)() {
    FMGL(TH_MAX_TIME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.TH_MAX_TIME");
    x10_int __var962__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)4));
    FMGL(TH_MAX_TIME) = __var962__;
    FMGL(TH_MAX_TIME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_TIME__init)() {
    x10aux::StaticInitController::initField(&FMGL(TH_MAX_TIME__status), &FMGL(TH_MAX_TIME__do_init), &FMGL(TH_MAX_TIME__exception), "org::scalegraph::util::ProfilingDB.TH_MAX_TIME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_TIME__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_TIME__exception);

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_CALL);
void org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_CALL__do_init)() {
    FMGL(TH_MAX_CALL__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.TH_MAX_CALL");
    x10_int __var963__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)5));
    FMGL(TH_MAX_CALL) = __var963__;
    FMGL(TH_MAX_CALL__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_CALL__init)() {
    x10aux::StaticInitController::initField(&FMGL(TH_MAX_CALL__status), &FMGL(TH_MAX_CALL__do_init), &FMGL(TH_MAX_CALL__exception), "org::scalegraph::util::ProfilingDB.TH_MAX_CALL");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_CALL__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_CALL__exception);

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_STDDEV_TIME);
void org::scalegraph::util::ProfilingDB::FMGL(TH_STDDEV_TIME__do_init)() {
    FMGL(TH_STDDEV_TIME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.TH_STDDEV_TIME");
    x10_int __var964__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)6));
    FMGL(TH_STDDEV_TIME) = __var964__;
    FMGL(TH_STDDEV_TIME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(TH_STDDEV_TIME__init)() {
    x10aux::StaticInitController::initField(&FMGL(TH_STDDEV_TIME__status), &FMGL(TH_STDDEV_TIME__do_init), &FMGL(TH_STDDEV_TIME__exception), "org::scalegraph::util::ProfilingDB.TH_STDDEV_TIME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(TH_STDDEV_TIME__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(TH_STDDEV_TIME__exception);

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_TIME);
void org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_TIME__do_init)() {
    FMGL(PROC_AVG_TIME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.PROC_AVG_TIME");
    x10_int __var965__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)7));
    FMGL(PROC_AVG_TIME) = __var965__;
    FMGL(PROC_AVG_TIME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_TIME__init)() {
    x10aux::StaticInitController::initField(&FMGL(PROC_AVG_TIME__status), &FMGL(PROC_AVG_TIME__do_init), &FMGL(PROC_AVG_TIME__exception), "org::scalegraph::util::ProfilingDB.PROC_AVG_TIME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_TIME__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_TIME__exception);

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_CALL);
void org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_CALL__do_init)() {
    FMGL(PROC_AVG_CALL__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.PROC_AVG_CALL");
    x10_int __var966__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)8));
    FMGL(PROC_AVG_CALL) = __var966__;
    FMGL(PROC_AVG_CALL__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_CALL__init)() {
    x10aux::StaticInitController::initField(&FMGL(PROC_AVG_CALL__status), &FMGL(PROC_AVG_CALL__do_init), &FMGL(PROC_AVG_CALL__exception), "org::scalegraph::util::ProfilingDB.PROC_AVG_CALL");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_CALL__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_CALL__exception);

//#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_TIME);
void org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_TIME__do_init)() {
    FMGL(PROC_MIN_TIME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.PROC_MIN_TIME");
    x10_int __var967__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)9));
    FMGL(PROC_MIN_TIME) = __var967__;
    FMGL(PROC_MIN_TIME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_TIME__init)() {
    x10aux::StaticInitController::initField(&FMGL(PROC_MIN_TIME__status), &FMGL(PROC_MIN_TIME__do_init), &FMGL(PROC_MIN_TIME__exception), "org::scalegraph::util::ProfilingDB.PROC_MIN_TIME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_TIME__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_TIME__exception);

//#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_CALL);
void org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_CALL__do_init)() {
    FMGL(PROC_MIN_CALL__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.PROC_MIN_CALL");
    x10_int __var968__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)10));
    FMGL(PROC_MIN_CALL) = __var968__;
    FMGL(PROC_MIN_CALL__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_CALL__init)() {
    x10aux::StaticInitController::initField(&FMGL(PROC_MIN_CALL__status), &FMGL(PROC_MIN_CALL__do_init), &FMGL(PROC_MIN_CALL__exception), "org::scalegraph::util::ProfilingDB.PROC_MIN_CALL");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_CALL__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_CALL__exception);

//#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_TIME);
void org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_TIME__do_init)() {
    FMGL(PROC_MAX_TIME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.PROC_MAX_TIME");
    x10_int __var969__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)4));
    FMGL(PROC_MAX_TIME) = __var969__;
    FMGL(PROC_MAX_TIME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_TIME__init)() {
    x10aux::StaticInitController::initField(&FMGL(PROC_MAX_TIME__status), &FMGL(PROC_MAX_TIME__do_init), &FMGL(PROC_MAX_TIME__exception), "org::scalegraph::util::ProfilingDB.PROC_MAX_TIME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_TIME__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_TIME__exception);

//#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_CALL);
void org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_CALL__do_init)() {
    FMGL(PROC_MAX_CALL__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.PROC_MAX_CALL");
    x10_int __var970__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)11));
    FMGL(PROC_MAX_CALL) = __var970__;
    FMGL(PROC_MAX_CALL__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_CALL__init)() {
    x10aux::StaticInitController::initField(&FMGL(PROC_MAX_CALL__status), &FMGL(PROC_MAX_CALL__do_init), &FMGL(PROC_MAX_CALL__exception), "org::scalegraph::util::ProfilingDB.PROC_MAX_CALL");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_CALL__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_CALL__exception);

//#line 35 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_STDDEV_TIME);
void org::scalegraph::util::ProfilingDB::FMGL(PROC_STDDEV_TIME__do_init)() {
    FMGL(PROC_STDDEV_TIME__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.PROC_STDDEV_TIME");
    x10_int __var971__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)12));
    FMGL(PROC_STDDEV_TIME) = __var971__;
    FMGL(PROC_STDDEV_TIME__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(PROC_STDDEV_TIME__init)() {
    x10aux::StaticInitController::initField(&FMGL(PROC_STDDEV_TIME__status), &FMGL(PROC_STDDEV_TIME__do_init), &FMGL(PROC_STDDEV_TIME__exception), "org::scalegraph::util::ProfilingDB.PROC_STDDEV_TIME");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(PROC_STDDEV_TIME__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(PROC_STDDEV_TIME__exception);

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(CPU_TIME_TOTAL);
void org::scalegraph::util::ProfilingDB::FMGL(CPU_TIME_TOTAL__do_init)() {
    FMGL(CPU_TIME_TOTAL__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.CPU_TIME_TOTAL");
    x10_int __var972__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)13));
    FMGL(CPU_TIME_TOTAL) = __var972__;
    FMGL(CPU_TIME_TOTAL__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(CPU_TIME_TOTAL__init)() {
    x10aux::StaticInitController::initField(&FMGL(CPU_TIME_TOTAL__status), &FMGL(CPU_TIME_TOTAL__do_init), &FMGL(CPU_TIME_TOTAL__exception), "org::scalegraph::util::ProfilingDB.CPU_TIME_TOTAL");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(CPU_TIME_TOTAL__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(CPU_TIME_TOTAL__exception);

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_TIME_TOTAL);
void org::scalegraph::util::ProfilingDB::FMGL(PROC_TIME_TOTAL__do_init)() {
    FMGL(PROC_TIME_TOTAL__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.PROC_TIME_TOTAL");
    x10_int __var973__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)14));
    FMGL(PROC_TIME_TOTAL) = __var973__;
    FMGL(PROC_TIME_TOTAL__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(PROC_TIME_TOTAL__init)() {
    x10aux::StaticInitController::initField(&FMGL(PROC_TIME_TOTAL__status), &FMGL(PROC_TIME_TOTAL__do_init), &FMGL(PROC_TIME_TOTAL__exception), "org::scalegraph::util::ProfilingDB.PROC_TIME_TOTAL");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(PROC_TIME_TOTAL__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(PROC_TIME_TOTAL__exception);

//#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(REAL_TIME_TOTAL);
void org::scalegraph::util::ProfilingDB::FMGL(REAL_TIME_TOTAL__do_init)() {
    FMGL(REAL_TIME_TOTAL__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.REAL_TIME_TOTAL");
    x10_int __var974__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)15));
    FMGL(REAL_TIME_TOTAL) = __var974__;
    FMGL(REAL_TIME_TOTAL__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(REAL_TIME_TOTAL__init)() {
    x10aux::StaticInitController::initField(&FMGL(REAL_TIME_TOTAL__status), &FMGL(REAL_TIME_TOTAL__do_init), &FMGL(REAL_TIME_TOTAL__exception), "org::scalegraph::util::ProfilingDB.REAL_TIME_TOTAL");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(REAL_TIME_TOTAL__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(REAL_TIME_TOTAL__exception);

//#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(TOTAL_CALL);
void org::scalegraph::util::ProfilingDB::FMGL(TOTAL_CALL__do_init)() {
    FMGL(TOTAL_CALL__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.TOTAL_CALL");
    x10_int __var975__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)16));
    FMGL(TOTAL_CALL) = __var975__;
    FMGL(TOTAL_CALL__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(TOTAL_CALL__init)() {
    x10aux::StaticInitController::initField(&FMGL(TOTAL_CALL__status), &FMGL(TOTAL_CALL__do_init), &FMGL(TOTAL_CALL__exception), "org::scalegraph::util::ProfilingDB.TOTAL_CALL");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(TOTAL_CALL__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(TOTAL_CALL__exception);

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::ProfilingDB::FMGL(RES_COUNT);
void org::scalegraph::util::ProfilingDB::FMGL(RES_COUNT__do_init)() {
    FMGL(RES_COUNT__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB.RES_COUNT");
    x10_int __var976__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)17));
    FMGL(RES_COUNT) = __var976__;
    FMGL(RES_COUNT__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB::FMGL(RES_COUNT__init)() {
    x10aux::StaticInitController::initField(&FMGL(RES_COUNT__status), &FMGL(RES_COUNT__do_init), &FMGL(RES_COUNT__exception), "org::scalegraph::util::ProfilingDB.RES_COUNT");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB::FMGL(RES_COUNT__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB::FMGL(RES_COUNT__exception);

//#line 280 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c

//#line 281 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c

//#line 302 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::ProfilingDB::_constructor(x10::array::Array<x10_int>* numPoints) {
    
    //#line 303 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10ConstructorCall_c
    (this)->::org::scalegraph::util::ProfilingDB::_constructor(x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam(),
                                                               numPoints);
    
}
org::scalegraph::util::ProfilingDB org::scalegraph::util::ProfilingDB::_make(
  x10::array::Array<x10_int>* numPoints) {
    org::scalegraph::util::ProfilingDB this_; 
    this_->_constructor(numPoints);
    return this_;
}



//#line 306 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::ProfilingDB::_constructor(x10::util::Team* team,
                                                      x10::array::Array<x10_int>* numPoints) {
    
    //#line 306 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.Empty_c
    ;
    
    //#line 306 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.AssignPropertyCall_c
    
    //#line 307 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(team) = org::scalegraph::util::Team2::_make(team);
    
    //#line 308 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(plh) = x10::lang::PlaceLocalHandle<void>::make<org::scalegraph::util::ProfilingDB__DB* >(
                           x10aux::nullCheck(team)->placeGroup(),
                           reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::ProfilingDB__DB*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::ProfilingDB__DB*> >(sizeof(org_scalegraph_util_ProfilingDB__closure__1)))org_scalegraph_util_ProfilingDB__closure__1(numPoints))));
}
org::scalegraph::util::ProfilingDB org::scalegraph::util::ProfilingDB::_make(
  x10::util::Team* team, x10::array::Array<x10_int>* numPoints)
{
    org::scalegraph::util::ProfilingDB this_; 
    this_->_constructor(team, numPoints);
    return this_;
}



//#line 311 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::ProfilingDB__Timer org::scalegraph::util::ProfilingDB::timer(
  x10_int frameIndex, x10_long tid) {
    
    //#line 312 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return org::scalegraph::util::ProfilingDB__Timer::_make(x10aux::nullCheck((*this)->
                                                                                FMGL(plh)->x10::lang::PlaceLocalHandle<org::scalegraph::util::ProfilingDB__DB*>::__apply())->get(
                                                              frameIndex,
                                                              tid));
    
}

//#line 314 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ProfilingDB::finishStepWithAll(
  ) {
    
    //#line 315 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(plh)->x10::lang::PlaceLocalHandle<org::scalegraph::util::ProfilingDB__DB*>::__apply())->finishStep(
      (*this)->FMGL(team));
}

//#line 318 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ProfilingDB::finishStep() {
    
    //#line 319 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(team)->org::scalegraph::util::Team2::placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_ProfilingDB__closure__2)))org_scalegraph_util_ProfilingDB__closure__2((*this)))));
}

//#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_double> org::scalegraph::util::ProfilingDB::result(
  ) {
    
    //#line 327 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals((*this)->FMGL(team)->org::scalegraph::util::Team2::role(),
                                ((x10_int)0)))) {
        
        //#line 328 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::BadPlaceException::_make(x10aux::makeStringLit("The only root place can call thie method."))));
    }
    
    //#line 329 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((*this)->FMGL(plh)->x10::lang::PlaceLocalHandle<org::scalegraph::util::ProfilingDB__DB*>::__apply())->
             FMGL(result);
    
}

//#line 332 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::ProfilingDB::resultString(
  x10::array::Array<x10::lang::String*>* names) {
    
    //#line 333 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> result =
      (*this)->org::scalegraph::util::ProfilingDB::result();
    
    //#line 334 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString header = org::scalegraph::util::SString::__implicit_convert(
                                              x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("avgtime(proc),stddev(proc),"), x10aux::makeStringLit("maxtime(th),stddev(th),")), x10aux::makeStringLit("avgcall(proc),mincall(proc),maxcall(proc),")), x10aux::makeStringLit("time(cpu),time(real)\n")));
    
    //#line 336 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString time_fmt = org::scalegraph::util::SString::__implicit_convert(
                                                x10aux::makeStringLit("%f,%f,%f,%f,"));
    
    //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString call_fmt = org::scalegraph::util::SString::__implicit_convert(
                                                x10aux::makeStringLit("%f,%f,%f,"));
    
    //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString stt_fmt = org::scalegraph::util::SString::__implicit_convert(
                                               x10aux::makeStringLit("%f,%f,[%s]\n"));
    
    //#line 340 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int width = x10aux::nullCheck(names)->FMGL(size);
    
    //#line 343 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> th_max_time =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(TH_MAX_TIME__get)()))))),
        ((x10_long) (width)));
    
    //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> th_stddev =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(TH_STDDEV_TIME__get)()))))),
        ((x10_long) (width)));
    
    //#line 348 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> proc_avg_time =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(PROC_AVG_TIME__get)()))))),
        ((x10_long) (width)));
    
    //#line 351 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> proc_stddev =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(PROC_STDDEV_TIME__get)()))))),
        ((x10_long) (width)));
    
    //#line 352 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> proc_avg_call =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(PROC_AVG_CALL__get)()))))),
        ((x10_long) (width)));
    
    //#line 353 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> proc_min_call =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(PROC_MIN_CALL__get)()))))),
        ((x10_long) (width)));
    
    //#line 354 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> proc_max_call =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(PROC_MAX_CALL__get)()))))),
        ((x10_long) (width)));
    
    //#line 355 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> cpu_time =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(CPU_TIME_TOTAL__get)()))))),
        ((x10_long) (width)));
    
    //#line 357 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> real_time =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(REAL_TIME_TOTAL__get)()))))),
        ((x10_long) (width)));
    
    //#line 360 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SStringBuilder sb = org::scalegraph::util::SStringBuilder::_make();
    
    //#line 361 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::StringBuilderAdd_(sb,header);
    
    //#line 362 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60954min61200 = ((x10_int)0);
    
    //#line 362 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60954max61201 = ((x10_int) ((width) - (((x10_int)1))));
    
    //#line 362 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
    {
        x10_int i61202;
        for (
             //#line 362 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
             i61202 = i60954min61200; ((i61202) <= (i60954max61201));
             
             //#line 362 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
             i61202 = ((x10_int) ((i61202) + (((x10_int)1)))))
        {
            
            //#line 362 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i61203 = i61202;
            
            //#line 363 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderFmtAdd_(sb,(time_fmt).FMGL(content),proc_avg_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                      i61203),proc_stddev->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                i61203),th_max_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                          i61203),th_stddev->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                                    i61203));
            
            //#line 364 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderFmtAdd_(sb,(call_fmt).FMGL(content),proc_avg_call->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                      i61203),proc_min_call->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                i61203),proc_max_call->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                          i61203));
            
            //#line 365 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderFmtAdd_(sb,(stt_fmt).FMGL(content),cpu_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                     i61203),real_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                               i61203),org::scalegraph::util::SString::__implicit_convert(
                                                                                                         x10aux::nullCheck(names)->x10::array::Array<x10::lang::String*>::__apply(
                                                                                                           i61203))->org::scalegraph::util::SString::c_str());
        }
    }
    
    //#line 368 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return sb->org::scalegraph::util::SStringBuilder::result();
    
}

//#line 371 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::ProfilingDB::detailedResultString(
  x10::array::Array<x10::lang::String*>* names) {
    
    //#line 372 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> result =
      (*this)->org::scalegraph::util::ProfilingDB::result();
    
    //#line 373 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString header = org::scalegraph::util::SString::__implicit_convert(
                                              x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("avgtime(th),mintime(th),maxtime(th),stddev(th),"), x10aux::makeStringLit("avgcall(th),mincall(th),maxcall(th),")), x10aux::makeStringLit("avgtime(proc),mintime(proc),maxtime(proc),stddev(proc),")), x10aux::makeStringLit("avgcall(proc),mincall(proc),maxcall(proc),")), x10aux::makeStringLit("time(cpu),time(proc),time(real),call\n")));
    
    //#line 379 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString th_time_fmt = org::scalegraph::util::SString::__implicit_convert(
                                                   x10aux::makeStringLit("%f,%f,%f,%f,"));
    
    //#line 380 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString th_call_fmt = org::scalegraph::util::SString::__implicit_convert(
                                                   x10aux::makeStringLit("%f,%f,%f,"));
    
    //#line 381 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString proc_time_fmt = org::scalegraph::util::SString::__implicit_convert(
                                                     x10aux::makeStringLit("%f,%f,%f,%f,"));
    
    //#line 382 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString proc_call_fmt = org::scalegraph::util::SString::__implicit_convert(
                                                     x10aux::makeStringLit("%f,%f,%f,"));
    
    //#line 383 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString stt_fmt = org::scalegraph::util::SString::__implicit_convert(
                                               x10aux::makeStringLit("%f,%f,%f,%f,[%s]\n"));
    
    //#line 385 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int width = x10aux::nullCheck(names)->FMGL(size);
    
    //#line 386 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> th_avg_time =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(TH_AVG_TIME__get)()))))),
        ((x10_long) (width)));
    
    //#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> th_min_time =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(TH_MIN_TIME__get)()))))),
        ((x10_long) (width)));
    
    //#line 388 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> th_max_time =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(TH_MAX_TIME__get)()))))),
        ((x10_long) (width)));
    
    //#line 389 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> th_stddev =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(TH_STDDEV_TIME__get)()))))),
        ((x10_long) (width)));
    
    //#line 390 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> th_avg_call =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(TH_AVG_CALL__get)()))))),
        ((x10_long) (width)));
    
    //#line 391 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> th_min_call =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(TH_MIN_CALL__get)()))))),
        ((x10_long) (width)));
    
    //#line 392 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> th_max_call =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(TH_MAX_CALL__get)()))))),
        ((x10_long) (width)));
    
    //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> proc_avg_time =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(PROC_AVG_TIME__get)()))))),
        ((x10_long) (width)));
    
    //#line 394 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> proc_min_time =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(PROC_MIN_TIME__get)()))))),
        ((x10_long) (width)));
    
    //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> proc_max_time =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(PROC_MAX_TIME__get)()))))),
        ((x10_long) (width)));
    
    //#line 396 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> proc_stddev =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(PROC_STDDEV_TIME__get)()))))),
        ((x10_long) (width)));
    
    //#line 397 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> proc_avg_call =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(PROC_AVG_CALL__get)()))))),
        ((x10_long) (width)));
    
    //#line 398 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> proc_min_call =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(PROC_MIN_CALL__get)()))))),
        ((x10_long) (width)));
    
    //#line 399 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> proc_max_call =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(PROC_MAX_CALL__get)()))))),
        ((x10_long) (width)));
    
    //#line 400 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> cpu_time =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(CPU_TIME_TOTAL__get)()))))),
        ((x10_long) (width)));
    
    //#line 401 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> proc_time =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(PROC_TIME_TOTAL__get)()))))),
        ((x10_long) (width)));
    
    //#line 402 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> real_time =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(REAL_TIME_TOTAL__get)()))))),
        ((x10_long) (width)));
    
    //#line 403 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> total_call =
      result->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((width) * (org::scalegraph::util::ProfilingDB::
                                              FMGL(TOTAL_CALL__get)()))))),
        ((x10_long) (width)));
    
    //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SStringBuilder sb = org::scalegraph::util::SStringBuilder::_make();
    
    //#line 406 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::StringBuilderAdd_(sb,header);
    
    //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60970min61204 = ((x10_int)0);
    
    //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60970max61205 = ((x10_int) ((width) - (((x10_int)1))));
    
    //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
    {
        x10_int i61206;
        for (
             //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
             i61206 = i60970min61204; ((i61206) <= (i60970max61205));
             
             //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
             i61206 = ((x10_int) ((i61206) + (((x10_int)1)))))
        {
            
            //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i61207 = i61206;
            
            //#line 408 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderFmtAdd_(sb,(th_time_fmt).FMGL(content),th_avg_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                         i61207),th_min_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                   i61207),th_max_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                             i61207),th_stddev->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                                       i61207));
            
            //#line 409 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderFmtAdd_(sb,(th_call_fmt).FMGL(content),th_avg_call->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                         i61207),th_min_call->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                   i61207),th_max_call->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                             i61207));
            
            //#line 410 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderFmtAdd_(sb,(proc_time_fmt).FMGL(content),proc_avg_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                           i61207),proc_min_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                     i61207),proc_max_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                               i61207),proc_stddev->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                                         i61207));
            
            //#line 411 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderFmtAdd_(sb,(proc_call_fmt).FMGL(content),proc_avg_call->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                           i61207),proc_min_call->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                     i61207),proc_max_call->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                               i61207));
            
            //#line 412 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderFmtAdd_(sb,(stt_fmt).FMGL(content),cpu_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                     i61207),proc_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                               i61207),real_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                         i61207),total_call->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                                                                                   i61207),org::scalegraph::util::SString::__implicit_convert(
                                                                                                                             x10aux::nullCheck(names)->x10::array::Array<x10::lang::String*>::__apply(
                                                                                                                               i61207))->org::scalegraph::util::SString::c_str());
        }
    }
    
    //#line 415 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return sb->org::scalegraph::util::SStringBuilder::result();
    
}

//#line 418 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ProfilingDB::finishStepAndPrint(
  x10_boolean detail, x10::lang::String* title, x10::array::Array<x10::lang::String*>* names) {
    
    //#line 419 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    (*this)->org::scalegraph::util::ProfilingDB::finishStep();
    
    //#line 420 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::println(reinterpret_cast<x10::lang::Any*>(title));
    
    //#line 421 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString result = detail ? ((*this)->org::scalegraph::util::ProfilingDB::detailedResultString(
                                                        names))
      : ((*this)->org::scalegraph::util::ProfilingDB::resultString(
           names));
    
    //#line 424 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::print(x10aux::class_cast_unchecked<x10::lang::Any*>(result));
}

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::ProfilingDB::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::ProfilingDB::toString(
  ) {
    
    //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.util.ProfilingDB:"), x10aux::makeStringLit(" team=")), (*this)->
                                                                                                                                                                                                                         FMGL(team)), x10aux::makeStringLit(" plh=")), (*this)->
                                                                                                                                                                                                                                                                         FMGL(plh));
    
}

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::ProfilingDB::hashCode() {
    
    //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(team)->org::scalegraph::util::Team2::hashCode())));
    
    //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(plh)->x10::lang::PlaceLocalHandle<org::scalegraph::util::ProfilingDB__DB*>::hashCode())));
    
    //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::ProfilingDB::equals(x10::lang::Any* other) {
    
    //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::ProfilingDB>(other)))
    {
        
        //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::ProfilingDB::equals(
             x10aux::class_cast<org::scalegraph::util::ProfilingDB>(other));
    
}

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::ProfilingDB::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::ProfilingDB>(other)))
    {
        
        //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::ProfilingDB::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::ProfilingDB>(other));
    
}

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ProfilingDB::_serialize(org::scalegraph::util::ProfilingDB this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(team));
    buf.write(this_->FMGL(plh));
    
}

void org::scalegraph::util::ProfilingDB::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(team) = buf.read<org::scalegraph::util::Team2>();
    FMGL(plh) = buf.read<x10::lang::PlaceLocalHandle<org::scalegraph::util::ProfilingDB__DB*> >();
}


x10aux::RuntimeType org::scalegraph::util::ProfilingDB::rtt;
void org::scalegraph::util::ProfilingDB::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.util.ProfilingDB",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
}

x10::lang::Fun_0_0<org::scalegraph::util::ProfilingDB__DB*>::itable<org_scalegraph_util_ProfilingDB__closure__1>org_scalegraph_util_ProfilingDB__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_ProfilingDB__closure__1::__apply, &org_scalegraph_util_ProfilingDB__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_ProfilingDB__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::ProfilingDB__DB*> >, &org_scalegraph_util_ProfilingDB__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_ProfilingDB__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_ProfilingDB__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_util_ProfilingDB__closure__2>org_scalegraph_util_ProfilingDB__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_ProfilingDB__closure__2::__apply, &org_scalegraph_util_ProfilingDB__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_ProfilingDB__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_ProfilingDB__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_ProfilingDB__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_ProfilingDB__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of ProfilingDB */
/*************************************************/
/*************************************************/
/* START of ProfilingDB$DB */
#include <org/scalegraph/util/ProfilingDB__DB.h>

#include <x10/lang/Int.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Long.h>
#include <x10/lang/Double.h>
#include <x10/array/Array.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Fun_0_1.h>
#include <org/scalegraph/util/Algorithm.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/String.h>
#include <x10/lang/IntRange.h>
#include <org/scalegraph/util/Team2.h>
#include <org/scalegraph/util/ProfilingDB.h>
#include <x10/util/Team.h>
#include <x10/lang/Math.h>
#include <x10/lang/Zero.h>
#ifndef ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class org_scalegraph_util_ProfilingDB__DB__closure__3 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, x10_int>::itable<org_scalegraph_util_ProfilingDB__DB__closure__3> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return x10aux::nullCheck(numPoints_)->x10::array::Array<x10_int>::__apply(
                 ((x10_int) (i)));
        
    }
    
    // captured environment
    x10::array::Array<x10_int>* numPoints_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numPoints_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_ProfilingDB__DB__closure__3* storage = x10aux::alloc<org_scalegraph_util_ProfilingDB__DB__closure__3>();
        buf.record_reference(storage);
        x10::array::Array<x10_int>* that_numPoints_ = buf.read<x10::array::Array<x10_int>*>();
        org_scalegraph_util_ProfilingDB__DB__closure__3* this_ = new (storage) org_scalegraph_util_ProfilingDB__DB__closure__3(that_numPoints_);
        return this_;
    }
    
    org_scalegraph_util_ProfilingDB__DB__closure__3(x10::array::Array<x10_int>* numPoints_) : numPoints_(numPoints_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10:67";
    }

};

#endif // ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class org_scalegraph_util_ProfilingDB__DB__closure__4 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, x10_int>::itable<org_scalegraph_util_ProfilingDB__DB__closure__4> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return x10aux::nullCheck(numPoints_)->x10::array::Array<x10_int>::__apply(
                 ((x10_int) (i)));
        
    }
    
    // captured environment
    x10::array::Array<x10_int>* numPoints_;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numPoints_);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_ProfilingDB__DB__closure__4* storage = x10aux::alloc<org_scalegraph_util_ProfilingDB__DB__closure__4>();
        buf.record_reference(storage);
        x10::array::Array<x10_int>* that_numPoints_ = buf.read<x10::array::Array<x10_int>*>();
        org_scalegraph_util_ProfilingDB__DB__closure__4* this_ = new (storage) org_scalegraph_util_ProfilingDB__DB__closure__4(that_numPoints_);
        return this_;
    }
    
    org_scalegraph_util_ProfilingDB__DB__closure__4(x10::array::Array<x10_int>* numPoints_) : numPoints_(numPoints_) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10:69";
    }

};

#endif // ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class org_scalegraph_util_ProfilingDB__DB__closure__5 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, x10_double>::itable<org_scalegraph_util_ProfilingDB__DB__closure__5> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_double __apply(x10_long i) {
        
        //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return 0.0;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_ProfilingDB__DB__closure__5* storage = x10aux::alloc<org_scalegraph_util_ProfilingDB__DB__closure__5>();
        buf.record_reference(storage);
        org_scalegraph_util_ProfilingDB__DB__closure__5* this_ = new (storage) org_scalegraph_util_ProfilingDB__DB__closure__5();
        return this_;
    }
    
    org_scalegraph_util_ProfilingDB__DB__closure__5() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10:143";
    }

};

#endif // ORG_SCALEGRAPH_UTIL_PROFILINGDB__DB__CLOSURE__5_CLOSURE

//#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c
x10_double org::scalegraph::util::ProfilingDB__DB::FMGL(FREQ);
void org::scalegraph::util::ProfilingDB__DB::FMGL(FREQ__do_init)() {
    FMGL(FREQ__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::ProfilingDB__DB.FREQ");
    x10_double __var993__ = x10aux::class_cast_unchecked<x10_double>(((x10_double) (((x10_int)1000000000))));
    FMGL(FREQ) = __var993__;
    FMGL(FREQ__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::ProfilingDB__DB::FMGL(FREQ__init)() {
    x10aux::StaticInitController::initField(&FMGL(FREQ__status), &FMGL(FREQ__do_init), &FMGL(FREQ__exception), "org::scalegraph::util::ProfilingDB__DB.FREQ");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::ProfilingDB__DB::FMGL(FREQ__status);
x10::lang::CheckedThrowable* org::scalegraph::util::ProfilingDB__DB::FMGL(FREQ__exception);

//#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c

//#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c

//#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c

//#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c

//#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c

//#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c

//#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c

//#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c

//#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c

//#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::ProfilingDB__DB::_constructor(x10::array::Array<x10_int>* numPoints_) {
    
    //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.Empty_c
    ;
    
    //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.AssignPropertyCall_c
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::ProfilingDB__DB::__fieldInitializers58971();
    
    //#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numFrames) = x10aux::nullCheck(numPoints_)->FMGL(size);
    
    //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numThreads) = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numPoints) = org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (x10aux::nullCheck(numPoints_)->
                                                                                               FMGL(size))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_ProfilingDB__DB__closure__3)))org_scalegraph_util_ProfilingDB__DB__closure__3(numPoints_))), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(frameOffsets) = org::scalegraph::util::ProfilingDB__DB::initOffset(
                                 this->FMGL(numPoints));
    
    //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(totalPoints) = org::scalegraph::util::Algorithm::reduce<x10_int >(
                                x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) (((x10_int) ((x10aux::nullCheck(numPoints_)->
                                                                                                         FMGL(size)) - (((x10_int) (((x10_long)1ll))))))))),
                                reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_ProfilingDB__DB__closure__4)))org_scalegraph_util_ProfilingDB__DB__closure__4(numPoints_))));
    
    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(width) = ((x10_int) ((((x10_int) ((this->FMGL(frameOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                    this->
                                                      FMGL(numFrames))) + (((x10_int)7))))) & (((x10_int) ~(((x10_int)7))))));
    
    //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(step) = org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int) ((this->
                                                                                                        FMGL(width)) * (this->
                                                                                                                          FMGL(numThreads)))))), ((x10_int)64), true, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(pointIndex) = org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (this->
                                                                                                FMGL(totalPoints))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_long pt = ((x10_long) (((x10_int)0)));
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60649min61049 = ((x10_int)0);
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60649max61050 = ((x10_int) ((this->FMGL(numFrames)) - (((x10_int)1))));
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
    {
        x10_int i61051;
        for (
             //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
             i61051 = i60649min61049; ((i61051) <= (i60649max61050));
             
             //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
             i61051 = ((x10_int) ((i61051) + (((x10_int)1)))))
        {
            
            //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int frame61052 = i61051;
            
            //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i60633min61045 = ((x10_int)0);
            
            //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i60633max61046 = ((x10_int) ((this->FMGL(numPoints)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                    frame61052)) - (((x10_int)1))));
            
            //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
            {
                x10_int i61047;
                for (
                     //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                     i61047 = i60633min61045; ((i61047) <= (i60633max61046));
                     
                     //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                     i61047 = ((x10_int) ((i61047) + (((x10_int)1)))))
                {
                    
                    //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                    x10_int i61048 = i61047;
                    
                    //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                    this->FMGL(pointIndex)->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                      ((x10_long) ((pt = ((x10_long) ((pt) + (((x10_long)1ll))))) - (((x10_long)1ll)))),
                      ((x10_int) ((((x10_int) ((this->FMGL(frameOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                  frame61052)) + (((x10_int) ((i61048) * (((x10_int)2)))))))) + (((x10_int)1)))));
                }
            }
            
        }
    }
    
}
org::scalegraph::util::ProfilingDB__DB* org::scalegraph::util::ProfilingDB__DB::_make(
  x10::array::Array<x10_int>* numPoints_) {
    org::scalegraph::util::ProfilingDB__DB* this_ = new (memset(x10aux::alloc<org::scalegraph::util::ProfilingDB__DB>(), 0, sizeof(org::scalegraph::util::ProfilingDB__DB))) org::scalegraph::util::ProfilingDB__DB();
    this_->_constructor(numPoints_);
    return this_;
}



//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_int> org::scalegraph::util::ProfilingDB__DB::initOffset(
  org::scalegraph::util::MemoryChunk<x10_int> numPoints) {
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> offsets =
      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) ((numPoints->org::scalegraph::util::MemoryChunk<x10_int>::size()) + (((x10_long) (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    offsets->org::scalegraph::util::MemoryChunk<x10_int>::__set(
      ((x10_int)0), ((x10_int)0));
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i60665domain61053 = numPoints->org::scalegraph::util::MemoryChunk<x10_int>::range();
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_long i60665min61054 = i60665domain61053->FMGL(min);
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_long i60665max61055 = i60665domain61053->FMGL(max);
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
    {
        x10_long i61056;
        for (
             //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
             i61056 = i60665min61054; ((i61056) <= (i60665max61055));
             
             //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
             i61056 = ((x10_long) ((i61056) + (((x10_long)1ll)))))
        {
            
            //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_long i61057 = i61056;
            
            //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            offsets->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              ((x10_long) ((i61057) + (((x10_long) (((x10_int)1)))))),
              ((x10_int) ((((x10_int) ((offsets->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                          i61057)) + (((x10_int) ((numPoints->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                     i61057)) * (((x10_int)2)))))))) + (((x10_int)1)))));
        }
    }
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return offsets;
    
}

//#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_long> org::scalegraph::util::ProfilingDB__DB::get(
  x10_int frame, x10_long tid) {
    
    //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10If_c
    if (((tid) >= (((x10_long) (this->FMGL(numThreads))))))
    {
        
        //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("tid must not exceed Runtime.NTHREADS."), x10aux::makeStringLit("[tid=")), tid), x10aux::makeStringLit(",Runtime.NTHREADS=")), x10::lang::Runtime::
                                                                                                                                                                                                                                                                                                                                                                                                                                         FMGL(NTHREADS__get)()), x10aux::makeStringLit(",numThreads=")), this->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           FMGL(numThreads)), x10aux::makeStringLit("]")))));
    }
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return this->FMGL(step)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
             ((x10_long) ((((x10_long) ((tid) * (((x10_long) (this->
                                                                FMGL(width))))))) + (((x10_long) (this->
                                                                                                    FMGL(frameOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                                    frame)))))),
             ((x10_long) (((x10_int) ((((x10_int) ((this->
                                                      FMGL(numPoints)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                      frame)) * (((x10_int)2))))) + (((x10_int)1)))))));
    
}

//#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_double> org::scalegraph::util::ProfilingDB__DB::resbuf(
  x10_int idx) {
    
    //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return this->FMGL(result)->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
             ((x10_long) (((x10_int) ((idx) * (this->FMGL(totalPoints)))))),
             ((x10_long) (this->FMGL(totalPoints))));
    
}

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ProfilingDB__DB::localMin(org::scalegraph::util::MemoryChunk<x10_long> buf,
                                                      x10_int base) {
    
    //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange tr = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((this->
                                                                                     FMGL(numThreads)) - (((x10_int)1)))));
    
    //#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange pr = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((this->
                                                                                     FMGL(totalPoints)) - (((x10_int)1)))));
    
    //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i60699domain61066 = pr;
    
    //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60699min61067 = i60699domain61066->FMGL(min);
    
    //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60699max61068 = i60699domain61066->FMGL(max);
    
    //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
    {
        x10_int i61069;
        for (
             //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
             i61069 = i60699min61067; ((i61069) <= (i60699max61068));
             
             //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
             i61069 = ((x10_int) ((i61069) + (((x10_int)1)))))
        {
            
            //#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i61070 = i61069;
            
            //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_long min61064 = (x10_long)0x7fffffffffffffffLL;
            
            //#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int offset61065 = this->FMGL(pointIndex)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                    i61070);
            
            //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i60682domain61059 = tr;
            
            //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i60682min61060 = i60682domain61059->FMGL(min);
            
            //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i60682max61061 = i60682domain61059->FMGL(max);
            
            //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
            {
                x10_int i61062;
                for (
                     //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                     i61062 = i60682min61060; ((i61062) <= (i60682max61061));
                     
                     //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                     i61062 = ((x10_int) ((i61062) + (((x10_int)1)))))
                {
                    
                    //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                    x10_int th61063 = i61062;
                    
                    //#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                    x10_long v61058 = this->FMGL(step)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        ((x10_int) ((((x10_int) ((((x10_int) ((th61063) * (this->
                                                                                             FMGL(width))))) + (offset61065)))) + (base))));
                    
                    //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10If_c
                    if (((min61064) > (v61058))) {
                        
                        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                        min61064 = v61058;
                    }
                    
                }
            }
            
            //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            buf->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              i61070, min61064);
        }
    }
    
}

//#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ProfilingDB__DB::localMax(org::scalegraph::util::MemoryChunk<x10_long> buf,
                                                      x10_int base) {
    
    //#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange tr = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((this->
                                                                                     FMGL(numThreads)) - (((x10_int)1)))));
    
    //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange pr = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((this->
                                                                                     FMGL(totalPoints)) - (((x10_int)1)))));
    
    //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i60733domain61079 = pr;
    
    //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60733min61080 = i60733domain61079->FMGL(min);
    
    //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60733max61081 = i60733domain61079->FMGL(max);
    
    //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
    {
        x10_int i61082;
        for (
             //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
             i61082 = i60733min61080; ((i61082) <= (i60733max61081));
             
             //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
             i61082 = ((x10_int) ((i61082) + (((x10_int)1)))))
        {
            
            //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i61083 = i61082;
            
            //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_long max61077 = ((x10_long)0ll);
            
            //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int offset61078 = this->FMGL(pointIndex)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                    i61083);
            
            //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i60716domain61072 = tr;
            
            //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i60716min61073 = i60716domain61072->FMGL(min);
            
            //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i60716max61074 = i60716domain61072->FMGL(max);
            
            //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
            {
                x10_int i61075;
                for (
                     //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                     i61075 = i60716min61073; ((i61075) <= (i60716max61074));
                     
                     //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                     i61075 = ((x10_int) ((i61075) + (((x10_int)1)))))
                {
                    
                    //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                    x10_int th61076 = i61075;
                    
                    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                    x10_long v61071 = this->FMGL(step)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                        ((x10_int) ((((x10_int) ((((x10_int) ((th61076) * (this->
                                                                                             FMGL(width))))) + (offset61078)))) + (base))));
                    
                    //#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10If_c
                    if (((max61077) < (v61071))) {
                        
                        //#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                        max61077 = v61071;
                    }
                    
                }
            }
            
            //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            buf->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              i61083, max61077);
        }
    }
    
}

//#line 126 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ProfilingDB__DB::localSum(org::scalegraph::util::MemoryChunk<x10_long> buf,
                                                      x10_int base) {
    
    //#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange tr = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((this->
                                                                                     FMGL(numThreads)) - (((x10_int)1)))));
    
    //#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange pr = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((this->
                                                                                     FMGL(totalPoints)) - (((x10_int)1)))));
    
    //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i60767domain61091 = pr;
    
    //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60767min61092 = i60767domain61091->FMGL(min);
    
    //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60767max61093 = i60767domain61091->FMGL(max);
    
    //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
    {
        x10_int i61094;
        for (
             //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
             i61094 = i60767min61092; ((i61094) <= (i60767max61093));
             
             //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
             i61094 = ((x10_int) ((i61094) + (((x10_int)1)))))
        {
            
            //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i61095 = i61094;
            
            //#line 130 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_long sum61089 = ((x10_long)0ll);
            
            //#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int offset61090 = this->FMGL(pointIndex)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                    i61095);
            
            //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i60750domain61084 = tr;
            
            //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i60750min61085 = i60750domain61084->FMGL(min);
            
            //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i60750max61086 = i60750domain61084->FMGL(max);
            
            //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
            {
                x10_int i61087;
                for (
                     //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                     i61087 = i60750min61085; ((i61087) <= (i60750max61086));
                     
                     //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                     i61087 = ((x10_int) ((i61087) + (((x10_int)1)))))
                {
                    
                    //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                    x10_int th61088 = i61087;
                    
                    //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                    sum61089 = ((x10_long) ((sum61089) + (this->
                                                            FMGL(step)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                            ((x10_int) ((((x10_int) ((((x10_int) ((th61088) * (this->
                                                                                                                 FMGL(width))))) + (offset61090)))) + (base)))))));
                }
            }
            
            //#line 135 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            buf->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              i61095, sum61089);
        }
    }
    
}

//#line 139 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ProfilingDB__DB::finishStep(org::scalegraph::util::Team2 team) {
    
    //#line 140 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = team->org::scalegraph::util::Team2::size();
    
    //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int role = team->org::scalegraph::util::Team2::role();
    
    //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(role, ((x10_int)0))) && (x10aux::struct_equals(this->
                                                                                FMGL(result)->org::scalegraph::util::MemoryChunk<x10_double>::size(),
                                                                              ((x10_long)0ll))))
    {
        
        //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(result) = org::scalegraph::util::MemoryChunk<x10_double >::_make(((x10_long) (((x10_int) ((this->
                                                                                                                FMGL(totalPoints)) * (org::scalegraph::util::ProfilingDB::
                                                                                                                                        FMGL(RES_COUNT__get)()))))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_double>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_double> >(sizeof(org_scalegraph_util_ProfilingDB__DB__closure__5)))org_scalegraph_util_ProfilingDB__DB__closure__5())), (x10_byte*)(void*)__FILE__, __LINE__);
    }
    
    //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int tp = this->FMGL(totalPoints);
    
    //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange tr = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((this->
                                                                                     FMGL(numThreads)) - (((x10_int)1)))));
    
    //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange pr = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((this->
                                                                                     FMGL(totalPoints)) - (((x10_int)1)))));
    
    //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> buf = org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int) ((((x10_int) ((this->
                                                                                                                                                     FMGL(totalPoints)) * (((x10_int)2))))) * (((x10_int)4)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> buf1 = buf->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                          ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)0)))))),
                                                          ((x10_long) (((x10_int) ((tp) * (((x10_int)2)))))));
    
    //#line 151 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> buf2 = buf->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                          ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)1)))))),
                                                          ((x10_long) (((x10_int) ((tp) * (((x10_int)2)))))));
    
    //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> buf3 = buf->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                          ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)2)))))),
                                                          ((x10_long) (((x10_int) ((tp) * (((x10_int)2)))))));
    
    //#line 153 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> buf4 = buf->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                          ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)3)))))),
                                                          ((x10_long) (((x10_int) ((tp) * (((x10_int)2)))))));
    
    //#line 154 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> buf12 = buf->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                           ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)0)))))),
                                                           ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)2)))))));
    
    //#line 155 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> buf34 = buf->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                           ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)2)))))),
                                                           ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)2)))))));
    
    //#line 157 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> dbuf =
      org::scalegraph::util::MemoryChunk<x10_double >::_make(((x10_long) (((x10_int) ((((x10_int) ((this->
                                                                                                      FMGL(totalPoints)) * (((x10_int)2))))) * (((x10_int)4)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> dbuf1 =
      dbuf->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)0)))))),
        ((x10_long) (((x10_int) ((tp) * (((x10_int)2)))))));
    
    //#line 159 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> dbuf2 =
      dbuf->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)1)))))),
        ((x10_long) (((x10_int) ((tp) * (((x10_int)2)))))));
    
    //#line 160 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> dbuf3 =
      dbuf->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)2)))))),
        ((x10_long) (((x10_int) ((tp) * (((x10_int)2)))))));
    
    //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> dbuf4 =
      dbuf->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)3)))))),
        ((x10_long) (((x10_int) ((tp) * (((x10_int)2)))))));
    
    //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> dbuf12 =
      dbuf->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)0)))))),
        ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)2)))))));
    
    //#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> dbuf34 =
      dbuf->org::scalegraph::util::MemoryChunk<x10_double>::subpart(
        ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)2)))))),
        ((x10_long) (((x10_int) ((((x10_int) ((tp) * (((x10_int)2))))) * (((x10_int)2)))))));
    
    //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    this->localMin(buf1->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                     ((x10_long) (((x10_int)0))), ((x10_long) (tp))),
                   ((x10_int)0));
    
    //#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    this->localMin(buf1->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                     ((x10_long) (tp)), ((x10_long) (tp))),
                   ((x10_int)1));
    
    //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    this->localMax(buf2->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                     ((x10_long) (((x10_int)0))), ((x10_long) (tp))),
                   ((x10_int)0));
    
    //#line 171 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    this->localSum(buf2->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                     ((x10_long) (tp)), ((x10_long) (tp))),
                   ((x10_int)1));
    
    //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    team->reduce<x10_long >(((x10_int)0), buf12, buf34, x10::util::Team::
                                                          FMGL(MIN__get)());
    
    //#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(role, ((x10_int)0)))) {
        
        //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> th_min_time =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(TH_MIN_TIME__get)());
        
        //#line 178 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> proc_min_time =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(PROC_MIN_TIME__get)());
        
        //#line 179 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> th_min_call =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(TH_MIN_CALL__get)());
        
        //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> proc_min_call =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(PROC_MIN_CALL__get)());
        
        //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        x10::lang::IntRange i60784domain61096 = pr;
        
        //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        x10_int i60784min61097 = i60784domain61096->FMGL(min);
        
        //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        x10_int i60784max61098 = i60784domain61096->FMGL(max);
        
        //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
        {
            x10_int i61099;
            for (
                 //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                 i61099 = i60784min61097; ((i61099) <= (i60784max61098));
                 
                 //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                 i61099 = ((x10_int) ((i61099) + (((x10_int)1)))))
            {
                
                //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_int i61100 = i61099;
                
                //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                th_min_time->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i61100, ((((x10_double) (buf3->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                             i61100)))) / (org::scalegraph::util::ProfilingDB__DB::
                                                             FMGL(FREQ__get)())));
                
                //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                th_min_call->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i61100, ((x10_double) (buf3->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                           ((x10_int) ((tp) + (i61100)))))));
                
                //#line 184 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                proc_min_time->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i61100, ((((x10_double) (buf4->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                             i61100)))) / (org::scalegraph::util::ProfilingDB__DB::
                                                             FMGL(FREQ__get)())));
                
                //#line 185 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                proc_min_call->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i61100, ((x10_double) (buf4->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                           ((x10_int) ((tp) + (i61100)))))));
            }
        }
        
    }
    
    //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    this->localMax(buf1->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                     ((x10_long) (tp)), ((x10_long) (tp))),
                   ((x10_int)1));
    
    //#line 191 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    team->reduce<x10_long >(((x10_int)0), buf12, buf34, x10::util::Team::
                                                          FMGL(MAX__get)());
    
    //#line 192 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(role, ((x10_int)0)))) {
        
        //#line 193 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> th_max_time =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(TH_MAX_TIME__get)());
        
        //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> th_max_call =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(TH_MAX_CALL__get)());
        
        //#line 195 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> proc_max_call =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(PROC_MAX_CALL__get)());
        
        //#line 196 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> real_total =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(REAL_TIME_TOTAL__get)());
        
        //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        x10::lang::IntRange i60801domain61106 = pr;
        
        //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        x10_int i60801min61107 = i60801domain61106->FMGL(min);
        
        //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        x10_int i60801max61108 = i60801domain61106->FMGL(max);
        
        //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
        {
            x10_int i61109;
            for (
                 //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                 i61109 = i60801min61107; ((i61109) <= (i60801max61108));
                 
                 //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                 i61109 = ((x10_int) ((i61109) + (((x10_int)1)))))
            {
                
                //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_int i61110 = i61109;
                
                //#line 198 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                th_max_call->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i61110, ((x10_double) (buf3->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                           ((x10_int) ((tp) + (i61110)))))));
                
                //#line 199 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                th_max_time->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i61110, ((((x10_double) (buf4->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                             i61110)))) / (org::scalegraph::util::ProfilingDB__DB::
                                                             FMGL(FREQ__get)())));
                
                //#line 200 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                proc_max_call->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i61110, ((x10_double) (buf4->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                           ((x10_int) ((tp) + (i61110)))))));
                
                //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_double> x61102 =
                  real_total;
                
                //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_int y61103 = i61110;
                
                //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double z61104 = th_max_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                      i61110);
                
                //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double ret61105;
                
                //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double r61101 = ((x61102->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                        y61103)) + (z61104));
                
                //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                x61102->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  y61103, r61101);
                
                //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                ret61105 = r61101;
                
                //#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Local_c
                ret61105;
            }
        }
        
    }
    
    //#line 206 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    this->localSum(buf1->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                     ((x10_long) (((x10_int)0))), ((x10_long) (tp))),
                   ((x10_int)0));
    
    //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    team->allreduce<x10_long >(buf12, buf34, x10::util::Team::
                                               FMGL(ADD__get)());
    
    //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i60818domain61171 = pr;
    
    //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60818min61172 = i60818domain61171->FMGL(min);
    
    //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60818max61173 = i60818domain61171->FMGL(max);
    
    //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
    {
        x10_int i61174;
        for (
             //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
             i61174 = i60818min61172; ((i61174) <= (i60818max61173));
             
             //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
             i61174 = ((x10_int) ((i61174) + (((x10_int)1)))))
        {
            
            //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i61175 = i61174;
            
            //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> x61113 =
              buf3;
            
            //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int y61114 = i61175;
            
            //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_long z61115 = ((x10_long) (((x10_int) ((teamSize) * (this->
                                                                       FMGL(numThreads))))));
            
            //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_long ret61116;
            
            //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_long r61111 = ((x10_long) ((x61113->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                              y61114)) / x10aux::zeroCheck(z61115)));
            
            //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            x61113->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              y61114, r61111);
            
            //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
            ret61116 = r61111;
            
            //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Local_c
            ret61116;
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> x61117 =
              buf4;
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int y61118 = i61175;
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_long z61119 = ((x10_long) (teamSize));
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_long ret61120;
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_long r61112 = ((x10_long) ((x61117->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                              y61118)) / x10aux::zeroCheck(z61119)));
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            x61117->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              y61118, r61112);
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
            ret61120 = r61112;
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Local_c
            ret61120;
        }
    }
    
    //#line 216 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(role, ((x10_int)0)))) {
        
        //#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> th_avg_time =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(TH_AVG_TIME__get)());
        
        //#line 218 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> th_avg_call =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(TH_AVG_CALL__get)());
        
        //#line 219 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> proc_avg_time =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(PROC_AVG_TIME__get)());
        
        //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> proc_avg_call =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(PROC_AVG_CALL__get)());
        
        //#line 221 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> cpu_total =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(CPU_TIME_TOTAL__get)());
        
        //#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> proc_total =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(PROC_TIME_TOTAL__get)());
        
        //#line 223 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> total_call =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(TOTAL_CALL__get)());
        
        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        x10::lang::IntRange i60835domain61136 = pr;
        
        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        x10_int i60835min61137 = i60835domain61136->FMGL(min);
        
        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        x10_int i60835max61138 = i60835domain61136->FMGL(max);
        
        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
        {
            x10_int i61139;
            for (
                 //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                 i61139 = i60835min61137; ((i61139) <= (i60835max61138));
                 
                 //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                 i61139 = ((x10_int) ((i61139) + (((x10_int)1)))))
            {
                
                //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_int i61140 = i61139;
                
                //#line 225 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                th_avg_time->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i61140, ((((x10_double) (buf3->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                             i61140)))) / (org::scalegraph::util::ProfilingDB__DB::
                                                             FMGL(FREQ__get)())));
                
                //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                proc_avg_time->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i61140, ((((x10_double) (buf4->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                             i61140)))) / (org::scalegraph::util::ProfilingDB__DB::
                                                             FMGL(FREQ__get)())));
                
                //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                th_avg_call->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i61140, ((((x10_double) (buf4->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                             ((x10_int) ((tp) + (i61140))))))) / (((x10_double) (((x10_int) ((teamSize) * (this->
                                                                                                                             FMGL(numThreads)))))))));
                
                //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                proc_avg_call->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i61140, ((((x10_double) (buf4->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                             ((x10_int) ((tp) + (i61140))))))) / (((x10_double) (teamSize)))));
                
                //#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_double> x61124 =
                  cpu_total;
                
                //#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_int y61125 = i61140;
                
                //#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double z61126 = th_avg_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                      i61140);
                
                //#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double ret61127;
                
                //#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double r61121 = ((x61124->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                        y61125)) + (z61126));
                
                //#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                x61124->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  y61125, r61121);
                
                //#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                ret61127 = r61121;
                
                //#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Local_c
                ret61127;
                
                //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_double> x61128 =
                  proc_total;
                
                //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_int y61129 = i61140;
                
                //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double z61130 = proc_avg_time->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                      i61140);
                
                //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double ret61131;
                
                //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double r61122 = ((x61128->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                        y61129)) + (z61130));
                
                //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                x61128->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  y61129, r61122);
                
                //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                ret61131 = r61122;
                
                //#line 230 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Local_c
                ret61131;
                
                //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_double> x61132 =
                  total_call;
                
                //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_int y61133 = i61140;
                
                //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double z61134 = ((x10_double) (buf4->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                     ((x10_int) ((tp) + (i61140))))));
                
                //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double ret61135;
                
                //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double r61123 = ((x61132->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                        y61133)) + (z61134));
                
                //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                x61132->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  y61133, r61123);
                
                //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                ret61135 = r61123;
                
                //#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Local_c
                ret61135;
            }
        }
        
    }
    
    //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i60869domain61176 = pr;
    
    //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60869min61177 = i60869domain61176->FMGL(min);
    
    //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60869max61178 = i60869domain61176->FMGL(max);
    
    //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
    {
        x10_int i61179;
        for (
             //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
             i61179 = i60869min61177; ((i61179) <= (i60869max61178));
             
             //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
             i61179 = ((x10_int) ((i61179) + (((x10_int)1)))))
        {
            
            //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i61180 = i61179;
            
            //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_double sum61147 = 0.0;
            
            //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_long avg61148 = buf3->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                  i61180);
            
            //#line 240 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int offset61149 = this->FMGL(pointIndex)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                    i61180);
            
            //#line 241 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i60852domain61142 = tr;
            
            //#line 241 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i60852min61143 = i60852domain61142->FMGL(min);
            
            //#line 241 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i60852max61144 = i60852domain61142->FMGL(max);
            
            //#line 241 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
            {
                x10_int i61145;
                for (
                     //#line 241 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                     i61145 = i60852min61143; ((i61145) <= (i60852max61144));
                     
                     //#line 241 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                     i61145 = ((x10_int) ((i61145) + (((x10_int)1)))))
                {
                    
                    //#line 241 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                    x10_int th61146 = i61145;
                    
                    //#line 242 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                    x10_double diff61141 = ((x10_double) (((x10_long) ((this->
                                                                          FMGL(step)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                          ((x10_int) ((((x10_int) ((th61146) * (this->
                                                                                                                  FMGL(width))))) + (offset61149))))) - (avg61148)))));
                    
                    //#line 243 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                    sum61147 = ((sum61147) + (((diff61141) * (diff61141))));
                }
            }
            
            //#line 245 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            dbuf1->org::scalegraph::util::MemoryChunk<x10_double>::__set(
              i61180, sum61147);
        }
    }
    
    //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i60886domain61181 = pr;
    
    //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60886min61182 = i60886domain61181->FMGL(min);
    
    //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60886max61183 = i60886domain61181->FMGL(max);
    
    //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
    {
        x10_int i61184;
        for (
             //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
             i61184 = i60886min61182; ((i61184) <= (i60886max61183));
             
             //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
             i61184 = ((x10_int) ((i61184) + (((x10_int)1)))))
        {
            
            //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i61185 = i61184;
            
            //#line 249 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_double diff61150 = ((x10_double) (((x10_long) ((buf2->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                  i61185)) - (buf4->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                i61185))))));
            
            //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
            dbuf2->org::scalegraph::util::MemoryChunk<x10_double>::__set(
              i61185, ((diff61150) * (diff61150)));
        }
    }
    
    //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    team->reduce<x10_double >(((x10_int)0), dbuf12, dbuf34,
                              x10::util::Team::FMGL(ADD__get)());
    
    //#line 256 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(role, ((x10_int)0)))) {
        
        //#line 257 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> th_stddev =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(TH_STDDEV_TIME__get)());
        
        //#line 258 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_double> proc_stddev =
          this->resbuf(org::scalegraph::util::ProfilingDB::
                         FMGL(PROC_STDDEV_TIME__get)());
        
        //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        x10::lang::IntRange i60903domain61161 = pr;
        
        //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        x10_int i60903min61162 = i60903domain61161->FMGL(min);
        
        //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
        x10_int i60903max61163 = i60903domain61161->FMGL(max);
        
        //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
        {
            x10_int i61164;
            for (
                 //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                 i61164 = i60903min61162; ((i61164) <= (i60903max61163));
                 
                 //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                 i61164 = ((x10_int) ((i61164) + (((x10_int)1)))))
            {
                
                //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_int i61165 = i61164;
                
                //#line 260 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_double> x61153 =
                  dbuf3;
                
                //#line 260 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_int y61154 = i61165;
                
                //#line 260 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double z61155 = ((x10_double) (((x10_int) ((teamSize) * (this->
                                                                               FMGL(numThreads))))));
                
                //#line 260 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double ret61156;
                
                //#line 260 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double r61151 = ((x61153->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                        y61154)) / (z61155));
                
                //#line 260 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                x61153->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  y61154, r61151);
                
                //#line 260 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                ret61156 = r61151;
                
                //#line 260 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Local_c
                ret61156;
                
                //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_double> x61157 =
                  dbuf4;
                
                //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_int y61158 = i61165;
                
                //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double z61159 = ((x10_double) (teamSize));
                
                //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double ret61160;
                
                //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                x10_double r61152 = ((x61157->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                        y61158)) / (z61159));
                
                //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                x61157->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  y61158, r61152);
                
                //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                ret61160 = r61152;
                
                //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Local_c
                ret61160;
                
                //#line 262 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                th_stddev->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i61165, ((x10::lang::MathNatives::sqrt(dbuf3->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                           i61165))) / (org::scalegraph::util::ProfilingDB__DB::
                                                                          FMGL(FREQ__get)())));
                
                //#line 263 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                proc_stddev->org::scalegraph::util::MemoryChunk<x10_double>::__set(
                  i61165, ((x10::lang::MathNatives::sqrt(dbuf4->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                                           i61165))) / (org::scalegraph::util::ProfilingDB__DB::
                                                                          FMGL(FREQ__get)())));
            }
        }
        
    }
    
    //#line 268 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i60937domain61186 = tr;
    
    //#line 268 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60937min61187 = i60937domain61186->FMGL(min);
    
    //#line 268 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int i60937max61188 = i60937domain61186->FMGL(max);
    
    //#line 268 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
    {
        x10_int i61189;
        for (
             //#line 268 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
             i61189 = i60937min61187; ((i61189) <= (i60937max61188));
             
             //#line 268 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
             i61189 = ((x10_int) ((i61189) + (((x10_int)1)))))
        {
            
            //#line 268 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int th61190 = i61189;
            
            //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i60920domain61166 = pr;
            
            //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i60920min61167 = i60920domain61166->FMGL(min);
            
            //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
            x10_int i60920max61168 = i60920domain61166->FMGL(max);
            
            //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.For_c
            {
                x10_int i61169;
                for (
                     //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                     i61169 = i60920min61167; ((i61169) <= (i60920max61168));
                     
                     //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
                     i61169 = ((x10_int) ((i61169) + (((x10_int)1)))))
                {
                    
                    //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
                    x10_int i61170 = i61169;
                    
                    //#line 270 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                    this->FMGL(step)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      ((x10_int) ((((x10_int) ((((x10_int) ((th61190) * (this->
                                                                           FMGL(width))))) + (this->
                                                                                                FMGL(pointIndex)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                                i61170))))) + (((x10_int)0)))),
                      ((x10_long)0ll));
                    
                    //#line 271 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
                    this->FMGL(step)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      ((x10_int) ((((x10_int) ((((x10_int) ((th61190) * (this->
                                                                           FMGL(width))))) + (this->
                                                                                                FMGL(pointIndex)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                                i61170))))) + (((x10_int)1)))),
                      ((x10_long)0ll));
                }
            }
            
        }
    }
    
    //#line 275 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::MemoryChunk<x10_long>::del();
    
    //#line 276 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    dbuf->org::scalegraph::util::MemoryChunk<x10_double>::del();
}

//#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::ProfilingDB__DB* org::scalegraph::util::ProfilingDB__DB::org__scalegraph__util__ProfilingDB__DB____this__org__scalegraph__util__ProfilingDB__DB(
  ) {
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ProfilingDB__DB::__fieldInitializers58971(
  ) {
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(result) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_double> >();
}
const x10aux::serialization_id_t org::scalegraph::util::ProfilingDB__DB::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::ProfilingDB__DB::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::util::ProfilingDB__DB::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(numFrames));
    buf.write(this->FMGL(numThreads));
    buf.write(this->FMGL(width));
    buf.write(this->FMGL(totalPoints));
    buf.write(this->FMGL(numPoints));
    buf.write(this->FMGL(frameOffsets));
    buf.write(this->FMGL(pointIndex));
    buf.write(this->FMGL(step));
    buf.write(this->FMGL(result));
    
}

x10::lang::Reference* org::scalegraph::util::ProfilingDB__DB::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::ProfilingDB__DB* this_ = new (memset(x10aux::alloc<org::scalegraph::util::ProfilingDB__DB>(), 0, sizeof(org::scalegraph::util::ProfilingDB__DB))) org::scalegraph::util::ProfilingDB__DB();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::util::ProfilingDB__DB::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(numFrames) = buf.read<x10_int>();
    FMGL(numThreads) = buf.read<x10_int>();
    FMGL(width) = buf.read<x10_int>();
    FMGL(totalPoints) = buf.read<x10_int>();
    FMGL(numPoints) = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
    FMGL(frameOffsets) = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
    FMGL(pointIndex) = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
    FMGL(step) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(result) = buf.read<org::scalegraph::util::MemoryChunk<x10_double> >();
}

x10aux::RuntimeType org::scalegraph::util::ProfilingDB__DB::rtt;
void org::scalegraph::util::ProfilingDB__DB::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.util.ProfilingDB.DB",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

x10::lang::Fun_0_1<x10_long, x10_int>::itable<org_scalegraph_util_ProfilingDB__DB__closure__3>org_scalegraph_util_ProfilingDB__DB__closure__3::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_ProfilingDB__DB__closure__3::__apply, &org_scalegraph_util_ProfilingDB__DB__closure__3::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_ProfilingDB__DB__closure__3::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_ProfilingDB__DB__closure__3::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_ProfilingDB__DB__closure__3::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_ProfilingDB__DB__closure__3::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<x10_long, x10_int>::itable<org_scalegraph_util_ProfilingDB__DB__closure__4>org_scalegraph_util_ProfilingDB__DB__closure__4::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_ProfilingDB__DB__closure__4::__apply, &org_scalegraph_util_ProfilingDB__DB__closure__4::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_ProfilingDB__DB__closure__4::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_ProfilingDB__DB__closure__4::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_ProfilingDB__DB__closure__4::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_ProfilingDB__DB__closure__4::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<x10_long, x10_double>::itable<org_scalegraph_util_ProfilingDB__DB__closure__5>org_scalegraph_util_ProfilingDB__DB__closure__5::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_ProfilingDB__DB__closure__5::__apply, &org_scalegraph_util_ProfilingDB__DB__closure__5::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_ProfilingDB__DB__closure__5::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_double> >, &org_scalegraph_util_ProfilingDB__DB__closure__5::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_ProfilingDB__DB__closure__5::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_ProfilingDB__DB__closure__5::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of ProfilingDB$DB */
/*************************************************/
/*************************************************/
/* START of ProfilingDB$Timer */
#include <org/scalegraph/util/ProfilingDB__Timer.h>

#include <x10/lang/Any.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Long.h>
#include <x10/util/Timer.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace util { 
class ProfilingDB__Timer_ibox0 : public x10::lang::IBox<org::scalegraph::util::ProfilingDB__Timer> {
public:
    static x10::lang::Any::itable<ProfilingDB__Timer_ibox0 > itable;
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
x10::lang::Any::itable<ProfilingDB__Timer_ibox0 >  ProfilingDB__Timer_ibox0::itable(&ProfilingDB__Timer_ibox0::equals, &ProfilingDB__Timer_ibox0::hashCode, &ProfilingDB__Timer_ibox0::toString, &ProfilingDB__Timer_ibox0::typeName);
} } } 
x10::lang::Any::itable<org::scalegraph::util::ProfilingDB__Timer >  org::scalegraph::util::ProfilingDB__Timer::_itable_0(&org::scalegraph::util::ProfilingDB__Timer::equals, &org::scalegraph::util::ProfilingDB__Timer::hashCode, &org::scalegraph::util::ProfilingDB__Timer::toString, &org::scalegraph::util::ProfilingDB__Timer::typeName);
x10aux::itable_entry org::scalegraph::util::ProfilingDB__Timer::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::ProfilingDB__Timer::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::ProfilingDB__Timer>())};
x10aux::itable_entry org::scalegraph::util::ProfilingDB__Timer::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::ProfilingDB__Timer_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::ProfilingDB__Timer>())};

//#line 284 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10FieldDecl_c

//#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::ProfilingDB__Timer::_constructor(org::scalegraph::util::MemoryChunk<x10_long> span) {
    
    //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.Empty_c
    ;
    
    //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.AssignPropertyCall_c
    
    //#line 287 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(span) = span;
}
org::scalegraph::util::ProfilingDB__Timer org::scalegraph::util::ProfilingDB__Timer::_make(
  org::scalegraph::util::MemoryChunk<x10_long> span) {
    org::scalegraph::util::ProfilingDB__Timer this_; 
    this_->_constructor(span);
    return this_;
}



//#line 290 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ProfilingDB__Timer::start() {
    
    //#line 291 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    (*this)->FMGL(span)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      ((x10_int)0), x10::lang::RuntimeNatives::nanoTime());
}

//#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ProfilingDB__Timer::lap(x10_int kind) {
    
    //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_long curTime = x10::lang::RuntimeNatives::nanoTime();
    
    //#line 296 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> x61193 = (*this)->
                                                            FMGL(span);
    
    //#line 296 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int y61194 = ((x10_int) ((((x10_int) ((kind) * (((x10_int)2))))) + (((x10_int)1))));
    
    //#line 296 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_long z61195 = ((x10_long) ((curTime) - ((*this)->FMGL(span)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  ((x10_int)0)))));
    
    //#line 296 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_long ret61196;
    
    //#line 296 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_long r61191 = ((x10_long) ((x61193->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      y61194)) + (z61195)));
    
    //#line 296 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    x61193->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      y61194, r61191);
    
    //#line 296 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
    ret61196 = r61191;
    
    //#line 296 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Local_c
    ret61196;
    
    //#line 297 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> x61197 =
      (*this)->FMGL(span);
    
    //#line 297 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int y61198 = ((x10_int) ((((x10_int) ((kind) * (((x10_int)2))))) + (((x10_int)2))));
    
    //#line 297 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": polyglot.ast.Empty_c
    ;
    
    //#line 297 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_long ret61199;
    
    //#line 297 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_long r61192 = ((x10_long) ((x61197->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      y61198)) + (((x10_long)1ll))));
    
    //#line 297 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    x61197->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      y61198, r61192);
    
    //#line 297 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
    ret61199 = r61192;
    
    //#line 297 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Local_c
    ret61199;
    
    //#line 298 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10Call_c
    (*this)->FMGL(span)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      ((x10_int)0), curTime);
}

//#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::ProfilingDB__Timer::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::ProfilingDB__Timer::toString(
  ) {
    
    //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.util.ProfilingDB.Timer:"), x10aux::makeStringLit(" span=")), (*this)->
                                                                                                                                                                           FMGL(span));
    
}

//#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::ProfilingDB__Timer::hashCode(
  ) {
    
    //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(span)->org::scalegraph::util::MemoryChunk<x10_long>::hashCode())));
    
    //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::ProfilingDB__Timer::equals(
  x10::lang::Any* other) {
    
    //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::ProfilingDB__Timer>(other)))
    {
        
        //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::ProfilingDB__Timer::equals(
             x10aux::class_cast<org::scalegraph::util::ProfilingDB__Timer>(other));
    
}

//#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c

//#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::ProfilingDB__Timer::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::ProfilingDB__Timer>(other)))
    {
        
        //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::ProfilingDB__Timer::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::ProfilingDB__Timer>(other));
    
}

//#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c

//#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ProfilingDB__Timer::_serialize(org::scalegraph::util::ProfilingDB__Timer this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(span));
    
}

void org::scalegraph::util::ProfilingDB__Timer::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(span) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
}


x10aux::RuntimeType org::scalegraph::util::ProfilingDB__Timer::rtt;
void org::scalegraph::util::ProfilingDB__Timer::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.util.ProfilingDB.Timer",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
}

/* END of ProfilingDB$Timer */
/*************************************************/
