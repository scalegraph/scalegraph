/*************************************************/
/* START of Config */
#include <org/scalegraph/Config.h>

#ifndef ORG_SCALEGRAPH_CONFIG__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_CONFIG__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_Config__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_Config__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<org::scalegraph::Config*>* this91396 = org::scalegraph::Config::
                                                                 FMGL(instance__get)();
        
        //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::Config* x91397 = cfg;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::Config* x91394 = x91397;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::Config* ret91395;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(this91396)->FMGL(value) = x91394;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
        ret91395 = x91394;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
        ret91395;
        
        //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(x10::lang::Runtime::FMGL(NTHREADS__get)(),
                                    nthreads))) {
            
            //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Non unified X10_NTHREADS setting is not supported."), x10aux::makeStringLit(" [here=")), x10::lang::Place::_make(x10aux::here)->
                                                                                                                                                                                                                                                                                                                                                                                                        FMGL(id)), x10aux::makeStringLit(",Runtime.NTHREADS=")), x10::lang::Runtime::
                                                                                                                                                                                                                                                                                                                                                                                                                                                                   FMGL(NTHREADS__get)()), x10aux::makeStringLit(",NumThreadsOfFirstPlace=")), nthreads), x10aux::makeStringLit("]")))));
        }
        
    }
    
    // captured environment
    org::scalegraph::Config* cfg;
    x10_int nthreads;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->cfg);
        buf.write(this->nthreads);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_Config__closure__1* storage = x10aux::alloc<org_scalegraph_Config__closure__1>();
        buf.record_reference(storage);
        org::scalegraph::Config* that_cfg = buf.read<org::scalegraph::Config*>();
        x10_int that_nthreads = buf.read<x10_int>();
        org_scalegraph_Config__closure__1* this_ = new (storage) org_scalegraph_Config__closure__1(that_cfg, that_nthreads);
        return this_;
    }
    
    org_scalegraph_Config__closure__1(org::scalegraph::Config* cfg, x10_int nthreads) : cfg(cfg), nthreads(nthreads) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10:45-52";
    }

};

#endif // ORG_SCALEGRAPH_CONFIG__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_CONFIG__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_CONFIG__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_Config__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_Config__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(ret)->del_();
        
        //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<org::scalegraph::Config*>* this91400 = org::scalegraph::Config::
                                                                 FMGL(instance__get)();
        
        //#line 70 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::Config* x91401 = x10aux::class_cast_unchecked<org::scalegraph::Config*>(X10_NULL);
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::Config* x91398 = x91401;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::Config* ret91399;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(this91400)->FMGL(value) = x91398;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10LocalAssign_c
        ret91399 = x91398;
        
        //#line 71 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10Local_c
        ret91399;
    }
    
    // captured environment
    org::scalegraph::Config* ret;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ret);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_Config__closure__2* storage = x10aux::alloc<org_scalegraph_Config__closure__2>();
        buf.record_reference(storage);
        org::scalegraph::Config* that_ret = buf.read<org::scalegraph::Config*>();
        org_scalegraph_Config__closure__2* this_ = new (storage) org_scalegraph_Config__closure__2(that_ret);
        return this_;
    }
    
    org_scalegraph_Config__closure__2(org::scalegraph::Config* ret) : ret(ret) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10:94-97";
    }

};

#endif // ORG_SCALEGRAPH_CONFIG__CLOSURE__2_CLOSURE

//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10FieldDecl_c
x10::lang::Cell<org::scalegraph::Config*>* org::scalegraph::Config::FMGL(instance);
void org::scalegraph::Config::FMGL(instance__do_init)() {
    FMGL(instance__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::Config.instance");
    x10::lang::Cell<org::scalegraph::Config*>* __var167__ = reinterpret_cast<x10::lang::Cell<org::scalegraph::Config*>*>(x10::lang::Cell<org::scalegraph::Config*>::_make(x10aux::class_cast_unchecked<org::scalegraph::Config*>(X10_NULL)));
    FMGL(instance) = __var167__;
    FMGL(instance__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::Config::FMGL(instance__init)() {
    x10aux::StaticInitController::initField(&FMGL(instance__status), &FMGL(instance__do_init), &FMGL(instance__exception), "org::scalegraph::Config.instance");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::Config::FMGL(instance__status);
x10::lang::CheckedThrowable* org::scalegraph::Config::FMGL(instance__exception);

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::Config::canInitConfig(x10_boolean checkInstance) {
    
    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->FMGL(id),
                                ((x10_int)0)))) {
        
        //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::BadPlaceException::_make(x10aux::makeStringLit("Config initialization must be done on the first place."))));
    }
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10If_c
    if (checkInstance) {
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals((__extension__ ({
                                        
                                        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::Cell<org::scalegraph::Config*>* this88218 =
                                          org::scalegraph::Config::
                                            FMGL(instance__get)();
                                        x10aux::nullCheck(this88218)->
                                          FMGL(value);
                                    }))
                                    , X10_NULL))) {
            
            //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10::lang::String::__plus(x10aux::makeStringLit("Config.init() is called but Config is already initialized.\n"), x10aux::makeStringLit("It will not be changed. If you want to change Config value, call Config.del() method before init().")))));
        }
        
    }
    
}

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::Config::broadcast(org::scalegraph::Config* cfg) {
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(x10aux::nullCheck(cfg)->FMGL(world))->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_Config__closure__1)))org_scalegraph_Config__closure__1(cfg, nthreads))));
}

//#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
org::scalegraph::Config* org::scalegraph::Config::get() {
    
    //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::Config* ret = (__extension__ ({
        
        //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<org::scalegraph::Config*>* this88226 =
          org::scalegraph::Config::FMGL(instance__get)();
        x10aux::nullCheck(this88226)->FMGL(value);
    }))
    ;
    
    //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(ret, X10_NULL))) {
        
        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::Config::canInitConfig(false);
        
        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* team = x10::util::Team::FMGL(WORLD__get)();
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
        x10_int R = ((x10_int) ((((x10_int)1)) << (0x1f & (((x10_int) ((63 - __builtin_clzl(((((x10_long) (team->size()))) << 1) - 1)) / x10aux::zeroCheck(((x10_int)2))))))));
        
        //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
        x10_int C = ((x10_int) ((team->size()) / x10aux::zeroCheck(R)));
        
        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D dist2D = org::scalegraph::util::Dist2D::make2D(
                                                 team, R,
                                                 C);
        
        //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Dist2D dist1D = org::scalegraph::util::Dist2D::make2D(
                                                 team, team->size(),
                                                 ((x10_int)1));
        
        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::Config::broadcast((__extension__ ({
                                               
                                               //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
                                               org::scalegraph::Config* alloc50791 =
                                                  ((new (memset(x10aux::alloc<org::scalegraph::Config>(), 0, sizeof(org::scalegraph::Config))) org::scalegraph::Config()))
                                               ;
                                               
                                               //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10ConstructorCall_c
                                               (alloc50791)->::org::scalegraph::Config::_constructor(
                                                 true, team,
                                                 dist1D, dist2D);
                                               alloc50791;
                                           }))
                                           );
        
        //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
            x10::lang::Cell<org::scalegraph::Config*>* this89171 =
              org::scalegraph::Config::FMGL(instance__get)();
            x10aux::nullCheck(this89171)->FMGL(value);
        }))
        ;
        
    }
    
    //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10Return_c
    return ret;
    
}

//#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::Config::init(x10::util::Team* worldTeam,
                                   org::scalegraph::util::Dist2D distForXPregel,
                                   org::scalegraph::util::Dist2D distForBLAS) {
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::Config::canInitConfig(true);
    
    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::Config::broadcast((__extension__ ({
                                           
                                           //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
                                           org::scalegraph::Config* alloc50792 =
                                              ((new (memset(x10aux::alloc<org::scalegraph::Config>(), 0, sizeof(org::scalegraph::Config))) org::scalegraph::Config()))
                                           ;
                                           
                                           //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10ConstructorCall_c
                                           (alloc50792)->::org::scalegraph::Config::_constructor(
                                             false, worldTeam,
                                             distForXPregel,
                                             distForBLAS);
                                           alloc50792;
                                       }))
                                       );
}

//#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::Config::del() {
    
    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::Config* ret = (__extension__ ({
        
        //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<org::scalegraph::Config*>* this89172 =
          org::scalegraph::Config::FMGL(instance__get)();
        x10aux::nullCheck(this89172)->FMGL(value);
    }))
    ;
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(ret, X10_NULL))) {
        
        //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(x10aux::nullCheck(x10aux::nullCheck(ret)->
                                              FMGL(world))->placeGroup())->broadcastFlat(
          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_Config__closure__2)))org_scalegraph_Config__closure__2(ret))));
    }
    
}

//#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10FieldDecl_c

//#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10FieldDecl_c

//#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10FieldDecl_c

//#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10FieldDecl_c

//#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10FieldDecl_c

//#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10FieldDecl_c

//#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::Config::_constructor(x10_boolean ownByThis,
                                           x10::util::Team* worldTeam,
                                           org::scalegraph::util::Dist2D distForXPregel,
                                           org::scalegraph::util::Dist2D distForBLAS) {
    
    //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.AssignPropertyCall_c
    
    //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(own) = ownByThis;
    
    //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(world) = worldTeam;
    
    //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(distXPregel) = distForXPregel;
    
    //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(distBLAS) = distForBLAS;
    
    //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(stopWatch) = (__extension__ ({
        
        //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::StopWatch* alloc50793 =  ((new (memset(x10aux::alloc<org::scalegraph::util::StopWatch>(), 0, sizeof(org::scalegraph::util::StopWatch))) org::scalegraph::util::StopWatch()))
        ;
        
        //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10ConstructorCall_c
        (alloc50793)->::org::scalegraph::util::StopWatch::_constructor();
        alloc50793;
    }))
    ;
    {
        
        //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(profXPregel) = (__extension__ ({
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::ProfilingDB alloc50794 =
               org::scalegraph::util::ProfilingDB::_alloc();
            
            //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10ConstructorCall_c
            (alloc50794)->::org::scalegraph::util::ProfilingDB::_constructor(
              worldTeam, org::scalegraph::id::ProfilingID__XPregel::
                           FMGL(FRAME_VECTOR__get)());
            alloc50794;
        }))
        ;
    }
}
org::scalegraph::Config* org::scalegraph::Config::_make(x10_boolean ownByThis,
                                                        x10::util::Team* worldTeam,
                                                        org::scalegraph::util::Dist2D distForXPregel,
                                                        org::scalegraph::util::Dist2D distForBLAS)
{
    org::scalegraph::Config* this_ = new (memset(x10aux::alloc<org::scalegraph::Config>(), 0, sizeof(org::scalegraph::Config))) org::scalegraph::Config();
    this_->_constructor(ownByThis, worldTeam, distForXPregel,
    distForBLAS);
    return this_;
}



//#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::Config::del_() {
    
    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10If_c
    if (this->FMGL(own)) {
        
        //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10Call_c
        this->FMGL(distXPregel)->org::scalegraph::util::Dist2D::del();
        
        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10Call_c
        this->FMGL(distBLAS)->org::scalegraph::util::Dist2D::del();
    }
    
}

//#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
x10::util::Team* org::scalegraph::Config::worldTeam() {
    
    //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10Return_c
    return this->FMGL(world);
    
}

//#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Dist2D org::scalegraph::Config::distXPregel(
  ) {
    
    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10Return_c
    return this->FMGL(distXPregel);
    
}

//#line 134 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Dist2D org::scalegraph::Config::distBLAS(
  ) {
    
    //#line 134 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10Return_c
    return this->FMGL(distBLAS);
    
}

//#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Dist2D org::scalegraph::Config::dist2d(
  ) {
    
    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10Return_c
    return this->FMGL(distBLAS);
    
}

//#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Dist2D org::scalegraph::Config::dist1d(
  ) {
    
    //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10Return_c
    return this->FMGL(distXPregel);
    
}

//#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::StopWatch* org::scalegraph::Config::stopWatch(
  ) {
    
    //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10Return_c
    return this->FMGL(stopWatch);
    
}

//#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::ProfilingDB org::scalegraph::Config::profXPregel(
  ) {
    
    //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10Return_c
    return this->FMGL(profXPregel);
    
}

//#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::Config::dumpProfXPregel(x10::lang::String* title) {
    
    //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": Eval of x10.ast.X10Call_c
    this->FMGL(profXPregel)->org::scalegraph::util::ProfilingDB::finishStepAndPrint(
      true, title, org::scalegraph::id::ProfilingID__XPregel::
                     FMGL(DESCRIPTION__get)());
}

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10MethodDecl_c
org::scalegraph::Config* org::scalegraph::Config::org__scalegraph__Config____this__org__scalegraph__Config(
  ) {
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/Config.x10": x10.ast.X10Return_c
    return this;
    
}
const x10aux::serialization_id_t org::scalegraph::Config::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::Config::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::Config::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(own));
    buf.write(this->FMGL(world));
    buf.write(this->FMGL(distXPregel));
    buf.write(this->FMGL(distBLAS));
    buf.write(this->FMGL(stopWatch));
    buf.write(this->FMGL(profXPregel));
    
}

x10::lang::Reference* org::scalegraph::Config::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::Config* this_ = new (memset(x10aux::alloc<org::scalegraph::Config>(), 0, sizeof(org::scalegraph::Config))) org::scalegraph::Config();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::Config::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(own) = buf.read<x10_boolean>();
    FMGL(world) = buf.read<x10::util::Team*>();
    FMGL(distXPregel) = buf.read<org::scalegraph::util::Dist2D>();
    FMGL(distBLAS) = buf.read<org::scalegraph::util::Dist2D>();
    FMGL(stopWatch) = buf.read<org::scalegraph::util::StopWatch*>();
    FMGL(profXPregel) = buf.read<org::scalegraph::util::ProfilingDB>();
    
}

x10aux::RuntimeType org::scalegraph::Config::rtt;
void org::scalegraph::Config::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.Config",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

x10::lang::VoidFun_0_0::itable<org_scalegraph_Config__closure__1>org_scalegraph_Config__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_Config__closure__1::__apply, &org_scalegraph_Config__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_Config__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_Config__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_Config__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_Config__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_Config__closure__2>org_scalegraph_Config__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_Config__closure__2::__apply, &org_scalegraph_Config__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_Config__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_Config__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_Config__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_Config__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of Config */
/*************************************************/
