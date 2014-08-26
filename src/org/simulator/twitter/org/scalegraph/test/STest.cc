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
        
        //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            
            //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::test::STest::flush();
        }
        catch (x10::lang::CheckedThrowable* __exc628) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc628)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc628);
                {
                    
                    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ = static_cast<x10::lang::CheckedThrowable*>(__exc628);
                {
                    
                    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10:37";
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
        
        //#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            
            //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::io::Console::FMGL(ERR__get)()->print(out);
        }
        catch (x10::lang::CheckedThrowable* __exc636) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast<x10::lang::CheckedThrowable*>(__exc636);
                {
                    
                    //#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10:79-81";
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
        
        //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            
            //#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            (x10aux::exitCode = (((x10_int)0)));
        }
        catch (x10::lang::CheckedThrowable* __exc645) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast<x10::lang::CheckedThrowable*>(__exc645);
                {
                    
                    //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10:113";
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
        
        //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            
            //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            (x10aux::exitCode = (((x10_int)1)));
        }
        catch (x10::lang::CheckedThrowable* __exc647) {
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__0__ = static_cast<x10::lang::CheckedThrowable*>(__exc647);
                {
                    
                    //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
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
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10:118";
    }

};

#endif // ORG_SCALEGRAPH_TEST_STEST__CLOSURE__4_CLOSURE

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10FieldDecl_c
x10::util::StringBuilder* org::scalegraph::test::STest::FMGL(buffer);
void org::scalegraph::test::STest::FMGL(buffer__do_init)() {
    FMGL(buffer__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::test::STest.buffer");
    x10::util::StringBuilder* __var621__ = reinterpret_cast<x10::util::StringBuilder*>(x10::util::StringBuilder::_make());
    FMGL(buffer) = __var621__;
    FMGL(buffer__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::test::STest::FMGL(buffer__init)() {
    x10aux::StaticInitController::initField(&FMGL(buffer__status), &FMGL(buffer__do_init), &FMGL(buffer__exception), "org::scalegraph::test::STest.buffer");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::test::STest::FMGL(buffer__status);
x10::lang::CheckedThrowable* org::scalegraph::test::STest::FMGL(buffer__exception);

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10FieldDecl_c
x10::lang::String* org::scalegraph::test::STest::FMGL(linebreak);
void org::scalegraph::test::STest::FMGL(linebreak__do_init)() {
    FMGL(linebreak__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::test::STest.linebreak");
    x10::lang::String* __var622__ = reinterpret_cast<x10::lang::String*>(x10aux::makeStringLit("\n"));
    FMGL(linebreak) = __var622__;
    FMGL(linebreak__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::test::STest::FMGL(linebreak__init)() {
    x10aux::StaticInitController::initField(&FMGL(linebreak__status), &FMGL(linebreak__do_init), &FMGL(linebreak__exception), "org::scalegraph::test::STest.linebreak");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::test::STest::FMGL(linebreak__status);
x10::lang::CheckedThrowable* org::scalegraph::test::STest::FMGL(linebreak__exception);

//#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::execute(x10::array::Array<x10::lang::String*>* args) {
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(ERR__get)()->print(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("  "), x10aux::type_name(this)), x10aux::makeStringLit(": |")), org::scalegraph::test::STest::
                                                                                                                                                                                                                    FMGL(linebreak__get)()));
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
    x10_boolean b = false;
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
    try {
        {
            
            //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var0 = x10::lang::Runtime::startFinish();
            {
                
                //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable52434 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                            b = this->run(args);
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc625) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc625);
                            {
                                
                                //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__0__);
                                
                                //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc626) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal52435 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc626);
                        {
                            
                            //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable52434 = formal52435;
                        }
                    } else
                    throw;
                }
                
                //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable52434)))
                {
                    
                    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable52434))
                    {
                        
                        //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable52434));
                    }
                    
                }
                
                //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var0);
                }
                
                //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable52434)))
                {
                    
                    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable52434)))
                    {
                        
                        //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable52434));
                    }
                    
                }
                
            }
        }
        
        //#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if (b) {
            
            //#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::test::STest::bufferedPrintln(
              reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("Pass")));
        }
        
    }
    catch (x10::lang::CheckedThrowable* __exc627) {
        if (true) {
            x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc627);
            {
                
                //#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::test::STest::printException(
                  e);
            }
        } else
        throw;
    }
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
      x10aux::makeStringLit("\n"));
    {
        
        //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var1 = x10::lang::Runtime::startFinish();
        {
            
            //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable52437 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
            try {
                
                //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.For_c
                        {
                            x10::lang::Iterator<x10::lang::Place>* p52360;
                            for (
                                 //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                                 p52360 = x10aux::nullCheck(x10::util::Team::
                                                              FMGL(WORLD__get)()->placeGroup())->iterator();
                                 x10::lang::Iterator<x10::lang::Place>::hasNext(x10aux::nullCheck(p52360));
                                 ) {
                                
                                //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                                x10::lang::Place p = x10::lang::Iterator<x10::lang::Place>::next(x10aux::nullCheck(p52360));
                                
                                //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  p, reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_STest__closure__1)))org_scalegraph_test_STest__closure__1())),
                                  x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc629) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc629);
                        {
                            
                            //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc630) {
                if (true) {
                    x10::lang::CheckedThrowable* formal52438 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc630);
                    {
                        
                        //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable52437 = formal52438;
                    }
                } else
                throw;
            }
            
            //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable52437)))
            {
                
                //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable52437))
                {
                    
                    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable52437));
                }
                
            }
            
            //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var1);
            }
            
            //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable52437)))
            {
                
                //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable52437)))
                {
                    
                    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable52437));
                }
                
            }
            
        }
    }
    
    //#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::reportResult(b);
}

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::test::STest::escapeString(
  x10::lang::String* str) {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10Return_c
    return str;
    
}

//#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::printException(x10::lang::CheckedThrowable* e,
                                                  x10_int nested) {
    {
        
        //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
        x10::lang::CheckedThrowable* throwable52440 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
        
        //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                    x10::lang::String* nested_prefix = x10aux::makeStringLit("");
                    
                    //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                    x10_int i52362min52409 = ((x10_int)0);
                    
                    //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                    x10_int i52362max52410 = ((x10_int) ((nested) - (((x10_int)1))));
                    
                    //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.For_c
                    {
                        x10_int i52411;
                        for (
                             //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                             i52411 = i52362min52409; ((i52411) <= (i52362max52410));
                             
                             //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                             i52411 = ((x10_int) ((i52411) + (((x10_int)1)))))
                        {
                            
                            //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                            x10_int n52412 = i52411;
                            
                            //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                            nested_prefix = x10::lang::String::__plus(nested_prefix, x10aux::makeStringLit("| "));
                        }
                    }
                    
                    //#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                      nested_prefix);
                    
                    //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                      org::scalegraph::test::STest::escapeString(
                        x10aux::to_string(e)));
                    
                    //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                      org::scalegraph::test::STest::FMGL(linebreak__get)());
                    
                    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                    x10::array::Array<x10::lang::String*>* stackTrace =
                      (e)->getStackTrace();
                    
                    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.For_c
                    {
                        x10::lang::Iterator<x10::array::Point*>* id52378;
                        for (
                             //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                             id52378 = x10aux::nullCheck(stackTrace)->
                                         FMGL(region)->iterator();
                             x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id52378));
                             ) {
                            
                            //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                            x10::array::Point* id1047 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id52378));
                            
                            //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                            x10_int i = x10aux::nullCheck(id1047)->x10::array::Point::__apply(
                                          ((x10_int)0));
                            
                            //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                            org::scalegraph::test::STest::
                              FMGL(buffer__get)()->add(nested_prefix);
                            
                            //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                            org::scalegraph::test::STest::
                              FMGL(buffer__get)()->add(x10aux::makeStringLit("        at "));
                            
                            //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                            org::scalegraph::test::STest::
                              FMGL(buffer__get)()->add(org::scalegraph::test::STest::escapeString(
                                                         x10aux::nullCheck(stackTrace)->x10::array::Array<x10::lang::String*>::__apply(
                                                           i)));
                            
                            //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                            org::scalegraph::test::STest::
                              FMGL(buffer__get)()->add(org::scalegraph::test::STest::
                                                         FMGL(linebreak__get)());
                        }
                    }
                    
                    //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::lang::MultipleExceptions*>(e))
                    {
                        
                        //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                        x10::lang::MultipleExceptions* me =
                          x10aux::class_cast<x10::lang::MultipleExceptions*>(e);
                        
                        //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                        x10::array::Array<x10::lang::Exception*>* excs =
                          x10aux::nullCheck(me)->x10::lang::MultipleExceptions::exceptions();
                        
                        //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                          nested_prefix);
                        
                        //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                          x10aux::makeStringLit("Caused by "));
                        
                        //#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                          org::scalegraph::test::STest::FMGL(linebreak__get)());
                        
                        //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                        x10::array::Region* p52404 = x10aux::nullCheck(excs)->
                                                       FMGL(region);
                        
                        //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                        x10_int i52387min52405 = p52404->min(
                                                   ((x10_int)0));
                        
                        //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                        x10_int i52387max52406 = p52404->max(
                                                   ((x10_int)0));
                        
                        //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.For_c
                        {
                            x10_int i52407;
                            for (
                                 //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                                 i52407 = i52387min52405;
                                 ((i52407) <= (i52387max52406));
                                 
                                 //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                                 i52407 = ((x10_int) ((i52407) + (((x10_int)1)))))
                            {
                                
                                //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
                                x10_int i52408 = i52407;
                                
                                //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::test::STest::printException(
                                  reinterpret_cast<x10::lang::CheckedThrowable*>(x10aux::nullCheck(excs)->x10::array::Array<x10::lang::Exception*>::__apply(
                                                                                   i52408)),
                                  ((x10_int) ((nested) + (((x10_int)1)))));
                            }
                        }
                        
                    }
                    
                }
            }
            
            //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10::lang::CheckedThrowable* __exc633) {
            if (true) {
                x10::lang::CheckedThrowable* formal52441 =
                  static_cast<x10::lang::CheckedThrowable*>(__exc633);
                {
                    
                    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable52440 = formal52441;
                }
            } else
            throw;
        }
        
        //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable52440)))
        {
            
            //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10::compiler::Abort*>(throwable52440))
            {
                
                //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable52440));
            }
            
        }
        
        //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable52440)))
        {
            
            //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable52440)))
            {
                
                //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable52440));
            }
            
        }
        
    }
}

//#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::flush() {
    
    //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
    x10::lang::String* out;
    {
        
        //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
        x10::lang::CheckedThrowable* throwable52443 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
        
        //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                    out = org::scalegraph::test::STest::FMGL(buffer__get)()->toString();
                    
                    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->clear();
                }
            }
            
            //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10::lang::CheckedThrowable* __exc635) {
            if (true) {
                x10::lang::CheckedThrowable* formal52444 =
                  static_cast<x10::lang::CheckedThrowable*>(__exc635);
                {
                    
                    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable52443 = formal52444;
                }
            } else
            throw;
        }
        
        //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable52443)))
        {
            
            //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10::compiler::Abort*>(throwable52443))
            {
                
                //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable52443));
            }
            
        }
        
        //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable52443)))
        {
            
            //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable52443)))
            {
                
                //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable52443));
            }
            
        }
        
    }
    
    //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(x10::lang::Place::_make(x10aux::here),
                                x10::lang::Place::FMGL(FIRST_PLACE__get)())))
    {
        {
            
            //#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::runAt(x10::lang::Place::FMGL(FIRST_PLACE__get)(),
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_STest__closure__2)))org_scalegraph_test_STest__closure__2(out))),
                                      x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
        }
    } else {
        
        //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(ERR__get)()->print(out);
    }
    
}

//#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::printException(x10::lang::CheckedThrowable* e) {
    
    //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::printException(e, ((x10_int)0));
}

//#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::print(x10::lang::Any* obj) {
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::bufferedPrint(obj);
    
    //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::flush();
}

//#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::println(x10::lang::Any* obj) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::bufferedPrintln(obj);
    
    //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::test::STest::flush();
}

//#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::bufferedPrint(x10::lang::Any* obj) {
    {
        
        //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
        x10::lang::CheckedThrowable* throwable52446 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
        
        //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                      org::scalegraph::test::STest::escapeString(
                        x10aux::to_string(obj)));
                }
            }
            
            //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10::lang::CheckedThrowable* __exc641) {
            if (true) {
                x10::lang::CheckedThrowable* formal52447 =
                  static_cast<x10::lang::CheckedThrowable*>(__exc641);
                {
                    
                    //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable52446 = formal52447;
                }
            } else
            throw;
        }
        
        //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable52446)))
        {
            
            //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10::compiler::Abort*>(throwable52446))
            {
                
                //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable52446));
            }
            
        }
        
        //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable52446)))
        {
            
            //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable52446)))
            {
                
                //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable52446));
            }
            
        }
        
    }
}

//#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::bufferedPrintln(x10::lang::Any* obj) {
    {
        
        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10LocalDecl_c
        x10::lang::CheckedThrowable* throwable52449 = x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
        
        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                      org::scalegraph::test::STest::escapeString(
                        x10aux::to_string(obj)));
                    
                    //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::test::STest::FMGL(buffer__get)()->add(
                      org::scalegraph::test::STest::FMGL(linebreak__get)());
                }
            }
            
            //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10::lang::CheckedThrowable* __exc643) {
            if (true) {
                x10::lang::CheckedThrowable* formal52450 =
                  static_cast<x10::lang::CheckedThrowable*>(__exc643);
                {
                    
                    //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable52449 = formal52450;
                }
            } else
            throw;
        }
        
        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable52449)))
        {
            
            //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10::compiler::Abort*>(throwable52449))
            {
                
                //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable52449));
            }
            
        }
        
        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable52449)))
        {
            
            //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable52449)))
            {
                
                //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable52449));
            }
            
        }
        
    }
}

//#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::success() {
    {
        
        //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::runAt(x10::lang::Place::FMGL(FIRST_PLACE__get)(),
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_STest__closure__3)))org_scalegraph_test_STest__closure__3())),
                                  x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
    }
}

//#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::failure() {
    {
        
        //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::runAt(x10::lang::Place::FMGL(FIRST_PLACE__get)(),
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_STest__closure__4)))org_scalegraph_test_STest__closure__4())),
                                  x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
    }
}

//#line 121 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::reportResult(x10_boolean b) {
    
    //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
    if (b) {
        
        //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::test::STest::success();
    } else {
        
        //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::test::STest::failure();
    }
    
}

//#line 137 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::chk(x10_boolean b) {
    
    //#line 138 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
    if (!(b)) {
        
        //#line 138 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(org::scalegraph::test::STest__TestException::_make()));
    }
    
}

//#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::test::STest::chk(x10_boolean b, x10::lang::String* s) {
    
    //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10If_c
    if (!(b)) {
        
        //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(org::scalegraph::test::STest__TestException::_make(s)));
    }
    
}

//#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
org::scalegraph::test::STest* org::scalegraph::test::STest::org__scalegraph__test__STest____this__org__scalegraph__test__STest(
  ) {
    
    //#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::test::STest::_constructor() {
    
    //#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": polyglot.ast.Empty_c
    ;
    
    //#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.AssignPropertyCall_c
    
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

//#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::test::STest__TestException::_constructor() {
    
    //#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorCall_c
    (this)->::x10::lang::Exception::_constructor();
    
    //#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::test::STest__TestException* org::scalegraph::test::STest__TestException::_make(
  ) {
    org::scalegraph::test::STest__TestException* this_ = new (memset(x10aux::alloc<org::scalegraph::test::STest__TestException>(), 0, sizeof(org::scalegraph::test::STest__TestException))) org::scalegraph::test::STest__TestException();
    this_->_constructor();
    return this_;
}



//#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::test::STest__TestException::_constructor(x10::lang::CheckedThrowable* cause) {
    
    //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorCall_c
    (this)->::x10::lang::Exception::_constructor(cause);
    
    //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::test::STest__TestException* org::scalegraph::test::STest__TestException::_make(
  x10::lang::CheckedThrowable* cause) {
    org::scalegraph::test::STest__TestException* this_ = new (memset(x10aux::alloc<org::scalegraph::test::STest__TestException>(), 0, sizeof(org::scalegraph::test::STest__TestException))) org::scalegraph::test::STest__TestException();
    this_->_constructor(cause);
    return this_;
}



//#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::test::STest__TestException::_constructor(
  x10::lang::String* message) {
    
    //#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorCall_c
    (this)->::x10::lang::Exception::_constructor(message);
    
    //#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::test::STest__TestException* org::scalegraph::test::STest__TestException::_make(
  x10::lang::String* message) {
    org::scalegraph::test::STest__TestException* this_ = new (memset(x10aux::alloc<org::scalegraph::test::STest__TestException>(), 0, sizeof(org::scalegraph::test::STest__TestException))) org::scalegraph::test::STest__TestException();
    this_->_constructor(message);
    return this_;
}



//#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::test::STest__TestException::_constructor(
  x10::lang::String* message, x10::lang::CheckedThrowable* cause) {
    
    //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10ConstructorCall_c
    (this)->::x10::lang::Exception::_constructor(message,
                                                 cause);
    
    //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::test::STest__TestException* org::scalegraph::test::STest__TestException::_make(
  x10::lang::String* message, x10::lang::CheckedThrowable* cause)
{
    org::scalegraph::test::STest__TestException* this_ = new (memset(x10aux::alloc<org::scalegraph::test::STest__TestException>(), 0, sizeof(org::scalegraph::test::STest__TestException))) org::scalegraph::test::STest__TestException();
    this_->_constructor(message, cause);
    return this_;
}



//#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10MethodDecl_c
org::scalegraph::test::STest__TestException* org::scalegraph::test::STest__TestException::org__scalegraph__test__STest__TestException____this__org__scalegraph__test__STest__TestException(
  ) {
    
    //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/test/STest.x10": x10.ast.X10Return_c
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
