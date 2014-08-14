/*************************************************/
/* START of STest */
#include <org/scalegraph/test/STest.h>

#ifndef ORG_SCALEGRAPH_TEST_STEST__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_TEST_STEST__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_test_STest__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_test_STest__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            
            //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::test::STest::flush();
        }
        catch (x10::lang::CheckedThrowable* __exc369) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc369)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc369);
                {
                    
                    //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ = static_cast<x10::lang::CheckedThrowable*>(__exc369);
                {
                    
                    //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_STest__closure__1* storage = x10aux::alloc<org_scalegraph_test_STest__closure__1>();
        buf.record_reference(storage);
        org_scalegraph_test_STest__closure__1* this_ = new (storage) org_scalegraph_test_STest__closure__1();
        return this_;
    }
    
    org_scalegraph_test_STest__closure__1() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10:37";
    }

};

#endif // ORG_SCALEGRAPH_TEST_STEST__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_STEST__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_TEST_STEST__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_test_STest__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_test_STest__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            
            //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::io::Console::FMGL(ERR__get)()->print(out);
        }
        catch (x10::lang::CheckedThrowable* __exc377) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast<x10::lang::CheckedThrowable*>(__exc377);
                {
                    
                    //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::wrapAtChecked(reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__0__));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::String* out;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->out);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_STest__closure__2* storage = x10aux::alloc<org_scalegraph_test_STest__closure__2>();
        buf.record_reference(storage);
        x10::lang::String* that_out = buf.read<x10::lang::String*>();
        org_scalegraph_test_STest__closure__2* this_ = new (storage) org_scalegraph_test_STest__closure__2(that_out);
        return this_;
    }
    
    org_scalegraph_test_STest__closure__2(x10::lang::String* out) : out(out) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10:79-81";
    }

};

#endif // ORG_SCALEGRAPH_TEST_STEST__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_STEST__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_TEST_STEST__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_test_STest__closure__3 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_test_STest__closure__3> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            
            //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            (x10aux::exitCode = (((x10_int)0)));
        }
        catch (x10::lang::CheckedThrowable* __exc386) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast<x10::lang::CheckedThrowable*>(__exc386);
                {
                    
                    //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::wrapAtChecked(reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__0__));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_STest__closure__3* storage = x10aux::alloc<org_scalegraph_test_STest__closure__3>();
        buf.record_reference(storage);
        org_scalegraph_test_STest__closure__3* this_ = new (storage) org_scalegraph_test_STest__closure__3();
        return this_;
    }
    
    org_scalegraph_test_STest__closure__3() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10:113";
    }

};

#endif // ORG_SCALEGRAPH_TEST_STEST__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_STEST__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_TEST_STEST__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_test_STest__closure__4 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_test_STest__closure__4> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            
            //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            (x10aux::exitCode = (((x10_int)1)));
        }
        catch (x10::lang::CheckedThrowable* __exc388) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast<x10::lang::CheckedThrowable*>(__exc388);
                {
                    
                    //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::wrapAtChecked(reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__0__));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_STest__closure__4* storage = x10aux::alloc<org_scalegraph_test_STest__closure__4>();
        buf.record_reference(storage);
        org_scalegraph_test_STest__closure__4* this_ = new (storage) org_scalegraph_test_STest__closure__4();
        return this_;
    }
    
    org_scalegraph_test_STest__closure__4() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10:118";
    }

};

#endif // ORG_SCALEGRAPH_TEST_STEST__CLOSURE__4_CLOSURE

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10FieldDecl_c
x10::util::StringBuilder* org::scalegraph::test::STest::FMGL(buffer);
void org::scalegraph::test::STest::FMGL(buffer__do_init)() {
    FMGL(buffer__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::test::STest.buffer");
    x10::util::StringBuilder* __var362__ = reinterpret_cast<x10::util::StringBuilder*>(x10::util::StringBuilder::_make());
    FMGL(buffer) = __var362__;
    FMGL(buffer__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::test::STest::FMGL(buffer__init)() {
    x10aux::StaticInitController::initField(&FMGL(buffer__status), &FMGL(buffer__do_init), &FMGL(buffer__exception), "org::scalegraph::test::STest.buffer");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::test::STest::FMGL(buffer__status);
x10::lang::CheckedThrowable* org::scalegraph::test::STest::FMGL(buffer__exception);

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10FieldDecl_c
x10::lang::String* org::scalegraph::test::STest::FMGL(linebreak);
void org::scalegraph::test::STest::FMGL(linebreak__do_init)() {
    FMGL(linebreak__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::test::STest.linebreak");
    x10::lang::String* __var363__ = reinterpret_cast<x10::lang::String*>(x10aux::makeStringLit("\n"));
    FMGL(linebreak) = __var363__;
    FMGL(linebreak__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::test::STest::FMGL(linebreak__init)() {
    x10aux::StaticInitController::initField(&FMGL(linebreak__status), &FMGL(linebreak__do_init), &FMGL(linebreak__exception), "org::scalegraph::test::STest.linebreak");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::test::STest::FMGL(linebreak__status);
x10::lang::CheckedThrowable* org::scalegraph::test::STest::FMGL(linebreak__exception);

//#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::execute(x10::array::Array<x10::lang::String*>* args) {
    
    //#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(ERR__get)()->print(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("  "), x10aux::type_name(this)), x10aux::makeStringLit(": |")), org::scalegraph::test::STest::
                                                                                                                                                                                                                    FMGL(linebreak__get)()));
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
    x10_boolean b = false;
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
    try {
        {
            
            //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var31 = x10::lang::Runtime::startFinish();
            {
                
                //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable99514 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                            b = this->run(args);
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc366) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc366);
                            {
                                
                                //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__0__);
                                
                                //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc367) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal99515 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc367);
                        {
                            
                            //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable99514 = formal99515;
                        }
                    } else
                    throw;
                }
                
                //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable99514)))
                {
                    
                    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable99514))
                    {
                        
                        //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable99514));
                    }
                    
                }
                
                //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var31);
                }
                
                //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable99514)))
                {
                    
                    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable99514)))
                    {
                        
                        //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable99514));
                    }
                    
                }
                
            }
        }
        
        //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if (b) {
            
            //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::test::STest::bufferedPrintln(
              reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("Pass")));
        }
        
    }
    catch (x10::lang::CheckedThrowable* __exc368) {
        if (true) {
            x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc368);
            {
                
                //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* e99483 = e;
                
                //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::test::STest::printException(
                  e99483, ((x10_int)0));
            }
        } else
        throw;
    }
    
    //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
      x10aux::makeStringLit("\n"));
    {
        
        //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var32 = x10::lang::Runtime::startFinish();
        {
            
            //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable99517 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
            try {
                
                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.For_c
                        {
                            x10::lang::Iterator<x10::lang::Place>* p56195;
                            for (
                                 //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                                 p56195 = x10aux::nullCheck(x10::util::Team::
                                                              FMGL(WORLD__get)()->placeGroup())->iterator();
                                 x10::lang::Iterator<x10::lang::Place>::hasNext(x10aux::nullCheck(p56195));
                                 ) {
                                
                                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                                x10::lang::Place p = x10::lang::Iterator<x10::lang::Place>::next(x10aux::nullCheck(p56195));
                                
                                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_STest__closure__1)))org_scalegraph_test_STest__closure__1())),
                                  x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc370) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc370);
                        {
                            
                            //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc371) {
                if (true) {
                    x10::lang::CheckedThrowable* formal99518 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc371);
                    {
                        
                        //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable99517 = formal99518;
                    }
                } else
                throw;
            }
            
            //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable99517)))
            {
                
                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable99517))
                {
                    
                    //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable99517));
                }
                
            }
            
            //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var32);
            }
            
            //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable99517)))
            {
                
                //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable99517)))
                {
                    
                    //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable99517));
                }
                
            }
            
        }
    }
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::reportResult(b);
}

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::test::STest::escapeString(
  x10::lang::String* str) {
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10Return_c
    return str;
    
}

//#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::printException(x10::lang::CheckedThrowable* e,
                                                  x10_int nested) {
    {
        
        //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
        x10::lang::CheckedThrowable* throwable99520 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
        
        //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                    x10::lang::String* nested_prefix = x10aux::makeStringLit("");
                    
                    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                    x10_int i56197max99491 = ((x10_int) ((nested) - (((x10_int)1))));
                    
                    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.For_c
                    {
                        x10_int i99492;
                        for (
                             //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                             i99492 = ((x10_int)0); ((i99492) <= (i56197max99491));
                             
                             //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                             i99492 = ((x10_int) ((i99492) + (((x10_int)1)))))
                        {
                            
                            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                            x10_int n99493 = i99492;
                            
                            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                            nested_prefix = x10::lang::String::__plus(nested_prefix, x10aux::makeStringLit("| "));
                        }
                    }
                    
                    //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                      nested_prefix);
                    
                    //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                      (__extension__ ({
                          
                          //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                          x10::lang::String* str99278 = x10aux::to_string(e);
                          str99278;
                      }))
                      );
                    
                    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                      org::scalegraph::test::STest::FMGL(linebreak__get)());
                    
                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                    x10::array::Array<x10::lang::String*>* stackTrace =
                      (e)->getStackTrace();
                    
                    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.For_c
                    {
                        x10::lang::Iterator<x10::array::Point*>* id56215;
                        for (
                             //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                             id56215 = x10aux::nullCheck(stackTrace)->
                                         FMGL(region)->iterator();
                             x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id56215));
                             ) {
                            
                            //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                            x10::array::Point* id58 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id56215));
                            
                            //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                            x10_int i = x10aux::nullCheck(id58)->x10::array::Point::__apply(
                                          ((x10_int)0));
                            
                            //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                            org::scalegraph::test::STest::
                              FMGL(buffer__get)()->add(nested_prefix);
                            
                            //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                            org::scalegraph::test::STest::
                              FMGL(buffer__get)()->add(x10aux::makeStringLit("        at "));
                            
                            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                            org::scalegraph::test::STest::
                              FMGL(buffer__get)()->add((__extension__ ({
                                                           
                                                           //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                                                           x10::lang::String* str99282 =
                                                             (__extension__ ({
                                                               
                                                               //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                               x10_int i99279 =
                                                                 i;
                                                               
                                                               //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                               x10::lang::String* ret99280;
                                                               
                                                               //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                               goto __ret99281; __ret99281: {
                                                               {
                                                                   
                                                                   //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                   if (x10aux::nullCheck(stackTrace)->
                                                                         FMGL(rail))
                                                                   {
                                                                       
                                                                       //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                       ret99280 =
                                                                         (x10aux::nullCheck(stackTrace)->
                                                                            FMGL(raw))->__apply(i99279);
                                                                       
                                                                       //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                       goto __ret99281_end_;
                                                                   }
                                                                   else
                                                                   {
                                                                       
                                                                       //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                       if (true &&
                                                                           !(x10aux::nullCheck(stackTrace)->
                                                                               FMGL(region)->contains(
                                                                               i99279)))
                                                                       {
                                                                           
                                                                           //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                           x10::array::Array<void>::raiseBoundsError(
                                                                             i99279);
                                                                       }
                                                                       
                                                                       //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                       ret99280 =
                                                                         (x10aux::nullCheck(stackTrace)->
                                                                            FMGL(raw))->__apply(((x10_int) ((i99279) - (x10aux::nullCheck(stackTrace)->
                                                                                                                          FMGL(layout_min0)))));
                                                                       
                                                                       //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                       goto __ret99281_end_;
                                                                   }
                                                                   
                                                               }goto __ret99281_end_; __ret99281_end_: ;
                                                               }
                                                               ret99280;
                                                               }))
                                                               ;
                                                               
                                                           str99282;
                                                           }))
                                                           );
                            
                            //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                            org::scalegraph::test::STest::
                              FMGL(buffer__get)()->add(org::scalegraph::test::STest::
                                                         FMGL(linebreak__get)());
                            }
                        }
                        
                    
                    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::lang::MultipleExceptions*>(e))
                    {
                        
                        //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                        x10::lang::MultipleExceptions* me =
                          x10aux::class_cast<x10::lang::MultipleExceptions*>(e);
                        
                        //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                        x10::array::Array<x10::lang::Exception*>* excs =
                          (__extension__ ({
                            x10aux::nullCheck(me)->FMGL(exceptions);
                        }))
                        ;
                        
                        //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                          nested_prefix);
                        
                        //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                          x10aux::makeStringLit("Caused by "));
                        
                        //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                          org::scalegraph::test::STest::FMGL(linebreak__get)());
                        
                        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                        x10::array::Region* p99486 = x10aux::nullCheck(excs)->
                                                       FMGL(region);
                        
                        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                        x10_int i56225min99487 = p99486->min(
                                                   ((x10_int)0));
                        
                        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                        x10_int i56225max99488 = p99486->max(
                                                   ((x10_int)0));
                        
                        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.For_c
                        {
                            x10_int i99489;
                            for (
                                 //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                                 i99489 = i56225min99487;
                                 ((i99489) <= (i56225max99488));
                                 
                                 //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                                 i99489 = ((x10_int) ((i99489) + (((x10_int)1)))))
                            {
                                
                                //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                                x10_int i99490 = i99489;
                                
                                //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::test::STest::printException(
                                  reinterpret_cast<x10::lang::CheckedThrowable*>((__extension__ ({
                                      
                                      //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                      x10_int i99484 = i99490;
                                      
                                      //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                      x10::lang::Exception* ret99485;
                                      
                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                      ret99485 = (x10aux::nullCheck(excs)->
                                                    FMGL(raw))->__apply(i99484);
                                      ret99485;
                                  }))
                                  ), ((x10_int) ((nested) + (((x10_int)1)))));
                            }
                        }
                        
                    }
                    }
                }
            
            //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc374) {
                if (true) {
                    x10::lang::CheckedThrowable* formal99521 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc374);
                    {
                        
                        //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable99520 = formal99521;
                    }
                } else
                throw;
            }
        
        //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable99520)))
        {
            
            //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10::compiler::Abort*>(throwable99520))
            {
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable99520));
            }
            
        }
        
        //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable99520)))
        {
            
            //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable99520)))
            {
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable99520));
            }
            
        }
        }
    }
    

//#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::flush() {
    
    //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
    x10::lang::String* out;
    {
        
        //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
        x10::lang::CheckedThrowable* throwable99523 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
        
        //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                    out = org::scalegraph::test::STest::FMGL(buffer__get)()->toString();
                    
                    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->clear();
                }
            }
            
            //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10::lang::CheckedThrowable* __exc376) {
            if (true) {
                x10::lang::CheckedThrowable* formal99524 =
                  static_cast<x10::lang::CheckedThrowable*>(__exc376);
                {
                    
                    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable99523 = formal99524;
                }
            } else
            throw;
        }
        
        //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable99523)))
        {
            
            //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10::compiler::Abort*>(throwable99523))
            {
                
                //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable99523));
            }
            
        }
        
        //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable99523)))
        {
            
            //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable99523)))
            {
                
                //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable99523));
            }
            
        }
        
    }
    
    //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                x10::lang::Place::FMGL(FIRST_PLACE__get)())))
    {
        {
            
            //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::runAt(x10::lang::Place::FMGL(FIRST_PLACE__get)(),
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_STest__closure__2)))org_scalegraph_test_STest__closure__2(out))),
                                      x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
        }
    } else {
        
        //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(ERR__get)()->print(out);
    }
    
}

//#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::printException(x10::lang::CheckedThrowable* e) {
    
    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::printException(e, ((x10_int)0));
}

//#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::print(x10::lang::Any* obj) {
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::bufferedPrint(obj);
    
    //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::flush();
}

//#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::println(x10::lang::Any* obj) {
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::bufferedPrintln(obj);
    
    //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::flush();
}

//#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::bufferedPrint(x10::lang::Any* obj) {
    {
        
        //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
        x10::lang::CheckedThrowable* throwable99526 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
        
        //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                      (__extension__ ({
                          
                          //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                          x10::lang::String* str99295 = x10aux::to_string(obj);
                          str99295;
                      }))
                      );
                }
            }
            
            //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10::lang::CheckedThrowable* __exc382) {
            if (true) {
                x10::lang::CheckedThrowable* formal99527 =
                  static_cast<x10::lang::CheckedThrowable*>(__exc382);
                {
                    
                    //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable99526 = formal99527;
                }
            } else
            throw;
        }
        
        //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable99526)))
        {
            
            //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10::compiler::Abort*>(throwable99526))
            {
                
                //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable99526));
            }
            
        }
        
        //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable99526)))
        {
            
            //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable99526)))
            {
                
                //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable99526));
            }
            
        }
        
    }
}

//#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::bufferedPrintln(x10::lang::Any* obj) {
    {
        
        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
        x10::lang::CheckedThrowable* throwable99529 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
        
        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                      (__extension__ ({
                          
                          //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                          x10::lang::String* str99296 = x10aux::to_string(obj);
                          str99296;
                      }))
                      );
                    
                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                      org::scalegraph::test::STest::FMGL(linebreak__get)());
                }
            }
            
            //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10::lang::CheckedThrowable* __exc384) {
            if (true) {
                x10::lang::CheckedThrowable* formal99530 =
                  static_cast<x10::lang::CheckedThrowable*>(__exc384);
                {
                    
                    //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable99529 = formal99530;
                }
            } else
            throw;
        }
        
        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable99529)))
        {
            
            //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10::compiler::Abort*>(throwable99529))
            {
                
                //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable99529));
            }
            
        }
        
        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable99529)))
        {
            
            //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable99529)))
            {
                
                //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable99529));
            }
            
        }
        
    }
}

//#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::success() {
    {
        
        //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::runAt(x10::lang::Place::FMGL(FIRST_PLACE__get)(),
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_STest__closure__3)))org_scalegraph_test_STest__closure__3())),
                                  x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
    }
}

//#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::failure() {
    {
        
        //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::runAt(x10::lang::Place::FMGL(FIRST_PLACE__get)(),
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_STest__closure__4)))org_scalegraph_test_STest__closure__4())),
                                  x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
    }
}

//#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::reportResult(x10_boolean b) {
    
    //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
    if (b) {
        
        //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::test::STest::success();
    } else {
        
        //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::test::STest::failure();
    }
    
}

//#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::chk(x10_boolean b) {
    
    //#line 138 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
    if (!(b)) {
        
        //#line 138 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(org::scalegraph::test::STest__TestException::_make()));
    }
    
}

//#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::chk(x10_boolean b, x10::lang::String* s) {
    
    //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
    if (!(b)) {
        
        //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(org::scalegraph::test::STest__TestException::_make(s)));
    }
    
}

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
org::scalegraph::test::STest* org::scalegraph::test::STest::org__scalegraph__test__STest____this__org__scalegraph__test__STest(
  ) {
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::test::STest::_constructor() {
    
    //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.AssignPropertyCall_c
    
}

void org::scalegraph::test::STest::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

void org::scalegraph::test::STest::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::test::STest::rtt;
void org::scalegraph::test::STest::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.test.STest",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

x10::lang::VoidFun_0_0::itable<org_scalegraph_test_STest__closure__1>org_scalegraph_test_STest__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_STest__closure__1::__apply, &org_scalegraph_test_STest__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_test_STest__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_test_STest__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_test_STest__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_STest__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_test_STest__closure__2>org_scalegraph_test_STest__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_STest__closure__2::__apply, &org_scalegraph_test_STest__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_test_STest__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_test_STest__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_test_STest__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_STest__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_test_STest__closure__3>org_scalegraph_test_STest__closure__3::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_STest__closure__3::__apply, &org_scalegraph_test_STest__closure__3::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_test_STest__closure__3::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_test_STest__closure__3::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_test_STest__closure__3::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_STest__closure__3::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_test_STest__closure__4>org_scalegraph_test_STest__closure__4::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_STest__closure__4::__apply, &org_scalegraph_test_STest__closure__4::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_test_STest__closure__4::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_test_STest__closure__4::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_test_STest__closure__4::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_STest__closure__4::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of STest */
/*************************************************/
/*************************************************/
/* START of STest$TestException */
#include <org/scalegraph/test/STest__TestException.h>

#include <x10/lang/Exception.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/String.h>

//#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::test::STest__TestException::_constructor() {
    
    //#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorCall_c
    (this)->::x10::lang::Exception::_constructor();
    
    //#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::test::STest__TestException* org::scalegraph::test::STest__TestException::_make(
  ) {
    org::scalegraph::test::STest__TestException* this_ = new (memset(x10aux::alloc<org::scalegraph::test::STest__TestException>(), 0, sizeof(org::scalegraph::test::STest__TestException))) org::scalegraph::test::STest__TestException();
    this_->_constructor();
    return this_;
}



//#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::test::STest__TestException::_constructor(x10::lang::CheckedThrowable* cause) {
    
    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorCall_c
    (this)->::x10::lang::Exception::_constructor(cause);
    
    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::test::STest__TestException* org::scalegraph::test::STest__TestException::_make(
  x10::lang::CheckedThrowable* cause) {
    org::scalegraph::test::STest__TestException* this_ = new (memset(x10aux::alloc<org::scalegraph::test::STest__TestException>(), 0, sizeof(org::scalegraph::test::STest__TestException))) org::scalegraph::test::STest__TestException();
    this_->_constructor(cause);
    return this_;
}



//#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::test::STest__TestException::_constructor(
  x10::lang::String* message) {
    
    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorCall_c
    (this)->::x10::lang::Exception::_constructor(message);
    
    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::test::STest__TestException* org::scalegraph::test::STest__TestException::_make(
  x10::lang::String* message) {
    org::scalegraph::test::STest__TestException* this_ = new (memset(x10aux::alloc<org::scalegraph::test::STest__TestException>(), 0, sizeof(org::scalegraph::test::STest__TestException))) org::scalegraph::test::STest__TestException();
    this_->_constructor(message);
    return this_;
}



//#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::test::STest__TestException::_constructor(
  x10::lang::String* message, x10::lang::CheckedThrowable* cause) {
    
    //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorCall_c
    (this)->::x10::lang::Exception::_constructor(message,
                                                 cause);
    
    //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::test::STest__TestException* org::scalegraph::test::STest__TestException::_make(
  x10::lang::String* message, x10::lang::CheckedThrowable* cause)
{
    org::scalegraph::test::STest__TestException* this_ = new (memset(x10aux::alloc<org::scalegraph::test::STest__TestException>(), 0, sizeof(org::scalegraph::test::STest__TestException))) org::scalegraph::test::STest__TestException();
    this_->_constructor(message, cause);
    return this_;
}



//#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
org::scalegraph::test::STest__TestException* org::scalegraph::test::STest__TestException::org__scalegraph__test__STest__TestException____this__org__scalegraph__test__STest__TestException(
  ) {
    
    //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10Return_c
    return this;
    
}
const x10aux::serialization_id_t org::scalegraph::test::STest__TestException::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::test::STest__TestException::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::test::STest__TestException::_serialize_body(x10aux::serialization_buffer& buf) {
    x10::lang::Exception::_serialize_body(buf);
    
}

x10::lang::Reference* org::scalegraph::test::STest__TestException::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::test::STest__TestException* this_ = new (memset(x10aux::alloc<org::scalegraph::test::STest__TestException>(), 0, sizeof(org::scalegraph::test::STest__TestException))) org::scalegraph::test::STest__TestException();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::test::STest__TestException::_deserialize_body(x10aux::deserialization_buffer& buf) {
    x10::lang::Exception::_deserialize_body(buf);
    
}

x10aux::RuntimeType org::scalegraph::test::STest__TestException::rtt;
void org::scalegraph::test::STest__TestException::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Exception>()};
    rtt.initStageTwo("org.scalegraph.test.STest.TestException",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of STest$TestException */
/*************************************************/
