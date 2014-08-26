/*************************************************/
/* START of Parallel */
#include <org/scalegraph/util/Parallel.h>

#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__17_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class org_scalegraph_util_Parallel__closure__17 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::itable<org_scalegraph_util_Parallel__closure__17> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_int i, x10_int r) {
        
        //#line 739 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return x10::lang::Math::min(x10::lang::Fun_0_1<x10_int, x10_boolean>::__apply(x10aux::nullCheck(func), 
                                      i) ? (i) : (((x10_int)0x7fffffff)),
                                    r);
        
    }
    
    // captured environment
    x10::lang::Fun_0_1<x10_int, x10_boolean>* func;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->func);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__17* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__17>();
        buf.record_reference(storage);
        x10::lang::Fun_0_1<x10_int, x10_boolean>* that_func = buf.read<x10::lang::Fun_0_1<x10_int, x10_boolean>*>();
        org_scalegraph_util_Parallel__closure__17* this_ = new (storage) org_scalegraph_util_Parallel__closure__17(that_func);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__17(x10::lang::Fun_0_1<x10_int, x10_boolean>* func) : func(func) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:739";
    }

};

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__17_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__18_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
class org_scalegraph_util_Parallel__closure__18 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::itable<org_scalegraph_util_Parallel__closure__18> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_int x, x10_int y) {
        
        //#line 739 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return x10::lang::IntNatives::compareTo(x, y);
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__18* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__18>();
        buf.record_reference(storage);
        org_scalegraph_util_Parallel__closure__18* this_ = new (storage) org_scalegraph_util_Parallel__closure__18();
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__18() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:739";
    }

};

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__18_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__34_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__34_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_util_Parallel__closure__34 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_util_Parallel__closure__34> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 839 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 839 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i56083domain56779 = i_range56785;
            
            //#line 839 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i56083min56780 = i56083domain56779->FMGL(min);
            
            //#line 839 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i56083max56781 = i56083domain56779->FMGL(max);
            
            //#line 839 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_int i56782;
                for (
                     //#line 839 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i56782 = i56083min56780; ((i56782) <= (i56083max56781));
                     
                     //#line 839 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i56782 = ((x10_int) ((i56782) + (((x10_int)1))))) {
                    
                    //#line 839 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_int ii56783 = i56782;
                    
                    //#line 839 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_1<x10_int>::__apply(x10aux::nullCheck(func), 
                      ii56783);
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc739) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc739)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc739);
                {
                    
                    //#line 839 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc739);
                {
                    
                    //#line 839 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::IntRange i_range56785;
    x10::lang::VoidFun_0_1<x10_int>* func;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_range56785);
        buf.write(this->func);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__34* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__34>();
        buf.record_reference(storage);
        x10::lang::IntRange that_i_range56785 = buf.read<x10::lang::IntRange>();
        x10::lang::VoidFun_0_1<x10_int>* that_func = buf.read<x10::lang::VoidFun_0_1<x10_int>*>();
        org_scalegraph_util_Parallel__closure__34* this_ = new (storage) org_scalegraph_util_Parallel__closure__34(that_i_range56785, that_func);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__34(x10::lang::IntRange i_range56785, x10::lang::VoidFun_0_1<x10_int>* func) : i_range56785(i_range56785), func(func) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:839";
    }

};

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__34_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__35_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__35_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_util_Parallel__closure__35 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_util_Parallel__closure__35> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 850 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 850 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i56116domain56790 = i_range56796;
            
            //#line 850 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i56116min56791 = i56116domain56790->FMGL(min);
            
            //#line 850 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i56116max56792 = i56116domain56790->FMGL(max);
            
            //#line 850 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_long i56793;
                for (
                     //#line 850 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i56793 = i56116min56791; ((i56793) <= (i56116max56792));
                     
                     //#line 850 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i56793 = ((x10_long) ((i56793) + (((x10_long)1ll)))))
                {
                    
                    //#line 850 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long ii56794 = i56793;
                    
                    //#line 850 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.ClosureCall_c
                    x10::lang::VoidFun_0_1<x10_long>::__apply(x10aux::nullCheck(func), 
                      ii56794);
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc743) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc743)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc743);
                {
                    
                    //#line 850 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc743);
                {
                    
                    //#line 850 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::LongRange i_range56796;
    x10::lang::VoidFun_0_1<x10_long>* func;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_range56796);
        buf.write(this->func);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__35* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__35>();
        buf.record_reference(storage);
        x10::lang::LongRange that_i_range56796 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_1<x10_long>* that_func = buf.read<x10::lang::VoidFun_0_1<x10_long>*>();
        org_scalegraph_util_Parallel__closure__35* this_ = new (storage) org_scalegraph_util_Parallel__closure__35(that_i_range56796, that_func);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__35(x10::lang::LongRange i_range56796, x10::lang::VoidFun_0_1<x10_long>* func) : i_range56796(i_range56796), func(func) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:850";
    }

};

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__35_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__36_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__36_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_util_Parallel__closure__36 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_util_Parallel__closure__36> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 862 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 862 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.ClosureCall_c
            x10::lang::VoidFun_0_2<x10_int, x10::lang::IntRange>::__apply(x10aux::nullCheck(func), 
              idx56801, i_range56803);
        }
        catch (x10::lang::CheckedThrowable* __exc747) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc747)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc747);
                {
                    
                    //#line 862 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc747);
                {
                    
                    //#line 862 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx56801;
    x10::lang::IntRange i_range56803;
    x10::lang::VoidFun_0_2<x10_int, x10::lang::IntRange>* func;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx56801);
        buf.write(this->i_range56803);
        buf.write(this->func);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__36* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__36>();
        buf.record_reference(storage);
        x10_int that_idx56801 = buf.read<x10_int>();
        x10::lang::IntRange that_i_range56803 = buf.read<x10::lang::IntRange>();
        x10::lang::VoidFun_0_2<x10_int, x10::lang::IntRange>* that_func = buf.read<x10::lang::VoidFun_0_2<x10_int, x10::lang::IntRange>*>();
        org_scalegraph_util_Parallel__closure__36* this_ = new (storage) org_scalegraph_util_Parallel__closure__36(that_idx56801, that_i_range56803, that_func);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__36(x10_int idx56801, x10::lang::IntRange i_range56803, x10::lang::VoidFun_0_2<x10_int, x10::lang::IntRange>* func) : idx56801(idx56801), i_range56803(i_range56803), func(func) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:862";
    }

};

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__36_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__37_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__37_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_util_Parallel__closure__37 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_util_Parallel__closure__37> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 874 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 874 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.ClosureCall_c
            x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::__apply(x10aux::nullCheck(func), 
              ((x10_long) (idx56808)), i_range56810);
        }
        catch (x10::lang::CheckedThrowable* __exc751) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc751)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc751);
                {
                    
                    //#line 874 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc751);
                {
                    
                    //#line 874 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx56808;
    x10::lang::LongRange i_range56810;
    x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* func;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx56808);
        buf.write(this->i_range56810);
        buf.write(this->func);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__37* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__37>();
        buf.record_reference(storage);
        x10_int that_idx56808 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range56810 = buf.read<x10::lang::LongRange>();
        x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* that_func = buf.read<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>();
        org_scalegraph_util_Parallel__closure__37* this_ = new (storage) org_scalegraph_util_Parallel__closure__37(that_idx56808, that_i_range56810, that_func);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__37(x10_int idx56808, x10::lang::LongRange i_range56810, x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* func) : idx56808(idx56808), i_range56810(i_range56810), func(func) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:874";
    }

};

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__37_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__47_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__47_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_util_Parallel__closure__47 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_util_Parallel__closure__47> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 1037 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long prev = sortedIndex->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                          ((x10_long) ((r->FMGL(min)) - (((x10_long) (((x10_int)1)))))));
        
        //#line 1038 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i56570domain56934 = r;
        
        //#line 1038 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i56570min56935 = i56570domain56934->FMGL(min);
        
        //#line 1038 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i56570max56936 = i56570domain56934->FMGL(max);
        
        //#line 1038 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56937;
            for (
                 //#line 1038 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56937 = i56570min56935; ((i56937) <= (i56570max56936));
                 
                 //#line 1038 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56937 = ((x10_long) ((i56937) + (((x10_long)1ll)))))
            {
                
                //#line 1038 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long i56938 = i56937;
                
                //#line 1039 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long cur56933 = sortedIndex->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      i56938);
                
                //#line 1040 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(prev, cur56933)))
                {
                    
                    //#line 1041 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long i56554min56929 = ((x10_long) ((prev) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 1041 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long i56554max56930 = cur56933;
                    
                    //#line 1041 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                    {
                        x10_long i56931;
                        for (
                             //#line 1041 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                             i56931 = i56554min56929; ((i56931) <= (i56554max56930));
                             
                             //#line 1041 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                             i56931 = ((x10_long) ((i56931) + (((x10_long)1ll)))))
                        {
                            
                            //#line 1041 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_long o56932 = i56931;
                            
                            //#line 1041 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            offset->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                              o56932, i56938);
                        }
                    }
                    
                    //#line 1042 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                    prev = cur56933;
                }
                
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> sortedIndex;
    org::scalegraph::util::MemoryChunk<x10_long> offset;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->sortedIndex);
        buf.write(this->offset);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__47* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__47>();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_sortedIndex = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_offset = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Parallel__closure__47* this_ = new (storage) org_scalegraph_util_Parallel__closure__47(that_sortedIndex, that_offset);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__47(org::scalegraph::util::MemoryChunk<x10_long> sortedIndex, org::scalegraph::util::MemoryChunk<x10_long> offset) : sortedIndex(sortedIndex), offset(offset) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:1036-1045";
    }

};

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__47_CLOSURE

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::Parallel::FMGL(threashold1);
void org::scalegraph::util::Parallel::FMGL(threashold1__do_init)() {
    FMGL(threashold1__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::Parallel.threashold1");
    x10_int __var653__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)16));
    FMGL(threashold1) = __var653__;
    FMGL(threashold1__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::Parallel::FMGL(threashold1__init)() {
    x10aux::StaticInitController::initField(&FMGL(threashold1__status), &FMGL(threashold1__do_init), &FMGL(threashold1__exception), "org::scalegraph::util::Parallel.threashold1");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::Parallel::FMGL(threashold1__status);
x10::lang::CheckedThrowable* org::scalegraph::util::Parallel::FMGL(threashold1__exception);

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::Parallel::FMGL(threashold2);
void org::scalegraph::util::Parallel::FMGL(threashold2__do_init)() {
    FMGL(threashold2__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::Parallel.threashold2");
    x10_int __var654__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)16));
    FMGL(threashold2) = __var654__;
    FMGL(threashold2__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::Parallel::FMGL(threashold2__init)() {
    x10aux::StaticInitController::initField(&FMGL(threashold2__status), &FMGL(threashold2__do_init), &FMGL(threashold2__exception), "org::scalegraph::util::Parallel.threashold2");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::Parallel::FMGL(threashold2__status);
x10::lang::CheckedThrowable* org::scalegraph::util::Parallel::FMGL(threashold2__exception);

//#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10FieldDecl_c
x10_boolean org::scalegraph::util::Parallel::FMGL(debug);
void org::scalegraph::util::Parallel::FMGL(debug__do_init)() {
    FMGL(debug__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::Parallel.debug");
    x10_boolean __var655__ = x10aux::class_cast_unchecked<x10_boolean>(false);
    FMGL(debug) = __var655__;
    FMGL(debug__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::Parallel::FMGL(debug__init)() {
    x10aux::StaticInitController::initField(&FMGL(debug__status), &FMGL(debug__do_init), &FMGL(debug__exception), "org::scalegraph::util::Parallel.debug");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::Parallel::FMGL(debug__status);
x10::lang::CheckedThrowable* org::scalegraph::util::Parallel::FMGL(debug__exception);

//#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Parallel::_constructor() {
    
    //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Empty_c
    ;
    
    //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::util::Parallel* org::scalegraph::util::Parallel::_make()
{
    org::scalegraph::util::Parallel* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Parallel>(), 0, sizeof(org::scalegraph::util::Parallel))) org::scalegraph::util::Parallel();
    this_->_constructor();
    return this_;
}



//#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Parallel::debugln(x10::lang::String* str) {
    
    //#line 35 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (org::scalegraph::util::Parallel::FMGL(debug__get)()) {
        
        //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit(""), x10::lang::RuntimeNatives::currentTimeMillis()), x10aux::makeStringLit(":Hash: ")), x10::lang::Place::_make(x10aux::here)), x10aux::makeStringLit("(")), x10::lang::Runtime::workerId()), x10aux::makeStringLit(")")), str)));
        
        //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT__get)()->flush();
    }
    
}

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 157 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 172 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 187 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 232 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 264 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 276 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 291 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 309 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 325 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 341 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 349 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 359 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 369 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 375 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 383 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 391 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 402 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 415 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 458 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 473 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 489 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 542 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 581 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 651 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 703 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Parallel::binarySearch(x10::lang::IntRange range,
                                                      x10::lang::Fun_0_1<x10_int, x10_boolean>* func) {
    
    //#line 704 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int min = range->FMGL(min);
    
    //#line 705 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int max = range->FMGL(max);
    
    //#line 706 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int middle = ((x10_int) ((min) + (((x10_int) ((((x10_int) ((max) - (min)))) / x10aux::zeroCheck(((x10_int)2)))))));
    
    //#line 707 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((min) > (max))) {
        
        //#line 708 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return ((x10_int)-1);
        
    } else 
    //#line 709 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (x10::lang::Fun_0_1<x10_int, x10_boolean>::__apply(x10aux::nullCheck(func), 
          min)) {
        
        //#line 710 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return min;
        
    } else 
    //#line 711 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (x10::lang::Fun_0_1<x10_int, x10_boolean>::__apply(x10aux::nullCheck(func), 
          middle)) {
        
        //#line 712 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return org::scalegraph::util::Parallel::binarySearch(
                 x10::lang::IntRange::_make(((x10_int) ((min) + (((x10_int)1)))), middle),
                 func);
        
    } else {
        
        //#line 714 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return org::scalegraph::util::Parallel::binarySearch(
                 x10::lang::IntRange::_make(((x10_int) ((middle) + (((x10_int)1)))), max),
                 func);
        
    }
    
}

//#line 717 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c
x10::lang::Any* org::scalegraph::util::Parallel::binarySearch(
  x10::lang::LongRange range, x10::lang::Fun_0_1<x10_long, x10_boolean>* func) {
    
    //#line 718 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long min = range->FMGL(min);
    
    //#line 719 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long max = range->FMGL(max);
    
    //#line 720 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long middle = ((x10_long) ((min) + (((x10_long) ((((x10_long) ((max) - (min)))) / x10aux::zeroCheck(((x10_long) (((x10_int)2)))))))));
    
    //#line 721 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((min) > (max))) {
        
        //#line 722 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return x10aux::class_cast_unchecked<x10::lang::Any*>(((x10_int)-1));
        
    } else 
    //#line 723 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (x10::lang::Fun_0_1<x10_long, x10_boolean>::__apply(x10aux::nullCheck(func), 
          min)) {
        
        //#line 724 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return x10aux::class_cast_unchecked<x10::lang::Any*>(min);
        
    } else 
    //#line 725 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (x10::lang::Fun_0_1<x10_long, x10_boolean>::__apply(x10aux::nullCheck(func), 
          middle)) {
        
        //#line 726 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return org::scalegraph::util::Parallel::binarySearch(
                 x10::lang::LongRange::_make(((x10_long) ((min) + (((x10_long) (((x10_int)1)))))), middle),
                 func);
        
    } else {
        
        //#line 728 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return org::scalegraph::util::Parallel::binarySearch(
                 x10::lang::LongRange::_make(((x10_long) ((middle) + (((x10_long) (((x10_int)1)))))), max),
                 func);
        
    }
    
}

//#line 738 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Parallel::search(x10::lang::IntRange range,
                                                x10::lang::Fun_0_1<x10_int, x10_boolean>* func) {
    
    //#line 739 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return org::scalegraph::util::Parallel::reduce<x10_int >(
             range, reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(org_scalegraph_util_Parallel__closure__17)))org_scalegraph_util_Parallel__closure__17(func))),
             reinterpret_cast<x10::lang::Fun_0_2<x10_int, x10_int, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >(sizeof(org_scalegraph_util_Parallel__closure__18)))org_scalegraph_util_Parallel__closure__18())));
    
}

//#line 743 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 756 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 770 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 820 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 822 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 832 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Parallel::iter(x10::lang::IntRange range,
                                           x10::lang::VoidFun_0_1<x10_int>* func) {
    
    //#line 833 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int size = ((x10_int) ((((x10_int) ((range->FMGL(max)) - (range->
                                                                    FMGL(min))))) + (((x10_int)1))));
    
    //#line 834 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 835 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int chunk_size = x10::lang::Math::max(((x10_int) ((((x10_int) ((((x10_int) ((size) + (nthreads)))) - (((x10_int)1))))) / x10aux::zeroCheck(nthreads))),
                                              ((x10_int)1));
    {
        
        //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var13 = x10::lang::Runtime::startFinish();
        {
            
            //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57058 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56100min56786 = ((x10_int)0);
                        
                        //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56100max56787 = ((x10_int) ((nthreads) - (((x10_int)1))));
                        
                        //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i56788;
                            for (
                                 //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i56788 = i56100min56786;
                                 ((i56788) <= (i56100max56787));
                                 
                                 //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i56788 = ((x10_int) ((i56788) + (((x10_int)1)))))
                            {
                                
                                //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i56789 = i56788;
                                
                                //#line 837 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i_start56784 = x10::lang::Math::min(
                                                         ((x10_int) ((range->
                                                                        FMGL(max)) + (((x10_int)1)))),
                                                         ((x10_int) ((range->
                                                                        FMGL(min)) + (((x10_int) ((i56789) * (chunk_size)))))));
                                
                                //#line 838 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::IntRange i_range56785 =
                                  x10::lang::IntRange::_make(i_start56784, x10::lang::Math::min(
                                                                             range->
                                                                               FMGL(max),
                                                                             ((x10_int) ((((x10_int) ((i_start56784) + (chunk_size)))) - (((x10_int)1))))));
                                
                                //#line 839 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__34)))org_scalegraph_util_Parallel__closure__34(i_range56785, func))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc740) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc740);
                        {
                            
                            //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc741) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57059 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc741);
                    {
                        
                        //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57058 = formal57059;
                    }
                } else
                throw;
            }
            
            //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57058)))
            {
                
                //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57058))
                {
                    
                    //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57058));
                }
                
            }
            
            //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var13);
            }
            
            //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57058)))
            {
                
                //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57058)))
                {
                    
                    //#line 836 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57058));
                }
                
            }
            
        }
    }
}

//#line 843 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Parallel::iter(x10::lang::LongRange range,
                                           x10::lang::VoidFun_0_1<x10_long>* func) {
    
    //#line 844 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size = ((x10_long) ((((x10_long) ((range->FMGL(max)) - (range->
                                                                       FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 845 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 846 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size = x10::lang::Math::max(((x10_long) ((((x10_long) ((((x10_long) ((size) + (((x10_long) (nthreads)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads))))),
                                               ((x10_long)1ll));
    {
        
        //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var14 = x10::lang::Runtime::startFinish();
        {
            
            //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57061 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56133min56797 = ((x10_int)0);
                        
                        //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56133max56798 = ((x10_int) ((nthreads) - (((x10_int)1))));
                        
                        //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i56799;
                            for (
                                 //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i56799 = i56133min56797;
                                 ((i56799) <= (i56133max56798));
                                 
                                 //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i56799 = ((x10_int) ((i56799) + (((x10_int)1)))))
                            {
                                
                                //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i56800 = i56799;
                                
                                //#line 848 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start56795 = x10::lang::Math::min(
                                                          ((x10_long) ((range->
                                                                          FMGL(max)) + (((x10_long) (((x10_int)1)))))),
                                                          ((x10_long) ((range->
                                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i56800))) * (chunk_size)))))));
                                
                                //#line 849 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range56796 =
                                  x10::lang::LongRange::_make(i_start56795, x10::lang::Math::min(
                                                                              range->
                                                                                FMGL(max),
                                                                              ((x10_long) ((((x10_long) ((i_start56795) + (chunk_size)))) - (((x10_long) (((x10_int)1))))))));
                                
                                //#line 850 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__35)))org_scalegraph_util_Parallel__closure__35(i_range56796, func))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc744) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc744);
                        {
                            
                            //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc745) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57062 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc745);
                    {
                        
                        //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57061 = formal57062;
                    }
                } else
                throw;
            }
            
            //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57061)))
            {
                
                //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57061))
                {
                    
                    //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57061));
                }
                
            }
            
            //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var14);
            }
            
            //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57061)))
            {
                
                //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57061)))
                {
                    
                    //#line 847 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57061));
                }
                
            }
            
        }
    }
}

//#line 854 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Parallel::iter(x10::lang::IntRange range,
                                           x10::lang::VoidFun_0_2<x10_int, x10::lang::IntRange>* func) {
    
    //#line 855 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int size = ((x10_int) ((((x10_int) ((range->FMGL(max)) - (range->
                                                                    FMGL(min))))) + (((x10_int)1))));
    
    //#line 856 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 857 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int chunk_size = x10::lang::Math::max(((x10_int) ((((x10_int) ((((x10_int) ((size) + (nthreads)))) - (((x10_int)1))))) / x10aux::zeroCheck(nthreads))),
                                              ((x10_int)1));
    {
        
        //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var15 = x10::lang::Runtime::startFinish();
        {
            
            //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57064 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56149min56804 = ((x10_int)0);
                        
                        //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56149max56805 = ((x10_int) ((nthreads) - (((x10_int)1))));
                        
                        //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i56806;
                            for (
                                 //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i56806 = i56149min56804;
                                 ((i56806) <= (i56149max56805));
                                 
                                 //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i56806 = ((x10_int) ((i56806) + (((x10_int)1)))))
                            {
                                
                                //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i56807 = i56806;
                                
                                //#line 859 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx56801 = i56807;
                                
                                //#line 860 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i_start56802 = x10::lang::Math::min(
                                                         ((x10_int) ((range->
                                                                        FMGL(max)) + (((x10_int)1)))),
                                                         ((x10_int) ((range->
                                                                        FMGL(min)) + (((x10_int) ((i56807) * (chunk_size)))))));
                                
                                //#line 861 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::IntRange i_range56803 =
                                  x10::lang::IntRange::_make(i_start56802, x10::lang::Math::min(
                                                                             range->
                                                                               FMGL(max),
                                                                             ((x10_int) ((((x10_int) ((i_start56802) + (chunk_size)))) - (((x10_int)1))))));
                                
                                //#line 862 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__36)))org_scalegraph_util_Parallel__closure__36(idx56801, i_range56803, func))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc748) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc748);
                        {
                            
                            //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc749) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57065 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc749);
                    {
                        
                        //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57064 = formal57065;
                    }
                } else
                throw;
            }
            
            //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57064)))
            {
                
                //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57064))
                {
                    
                    //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57064));
                }
                
            }
            
            //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var15);
            }
            
            //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57064)))
            {
                
                //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57064)))
                {
                    
                    //#line 858 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57064));
                }
                
            }
            
        }
    }
}

//#line 866 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Parallel::iter(x10::lang::LongRange range,
                                           x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* func) {
    
    //#line 867 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size = ((x10_long) ((((x10_long) ((range->FMGL(max)) - (range->
                                                                       FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 868 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 869 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size = x10::lang::Math::max(((x10_long) ((((x10_long) ((((x10_long) ((size) + (((x10_long) (nthreads)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads))))),
                                               ((x10_long)1ll));
    {
        
        //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var16 = x10::lang::Runtime::startFinish();
        {
            
            //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57067 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56165min56811 = ((x10_int)0);
                        
                        //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56165max56812 = ((x10_int) ((nthreads) - (((x10_int)1))));
                        
                        //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i56813;
                            for (
                                 //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i56813 = i56165min56811;
                                 ((i56813) <= (i56165max56812));
                                 
                                 //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i56813 = ((x10_int) ((i56813) + (((x10_int)1)))))
                            {
                                
                                //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i56814 = i56813;
                                
                                //#line 871 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx56808 = i56814;
                                
                                //#line 872 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start56809 = x10::lang::Math::min(
                                                          ((x10_long) ((range->
                                                                          FMGL(max)) + (((x10_long) (((x10_int)1)))))),
                                                          ((x10_long) ((range->
                                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i56814))) * (chunk_size)))))));
                                
                                //#line 873 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range56810 =
                                  x10::lang::LongRange::_make(i_start56809, x10::lang::Math::min(
                                                                              range->
                                                                                FMGL(max),
                                                                              ((x10_long) ((((x10_long) ((i_start56809) + (chunk_size)))) - (((x10_long) (((x10_int)1))))))));
                                
                                //#line 874 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__37)))org_scalegraph_util_Parallel__closure__37(idx56808, i_range56810, func))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc752) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc752);
                        {
                            
                            //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc753) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57068 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc753);
                    {
                        
                        //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57067 = formal57068;
                    }
                } else
                throw;
            }
            
            //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57067)))
            {
                
                //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57067))
                {
                    
                    //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57067));
                }
                
            }
            
            //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var16);
            }
            
            //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57067)))
            {
                
                //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57067)))
                {
                    
                    //#line 870 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57067));
                }
                
            }
            
        }
    }
}

//#line 878 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 898 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 918 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 936 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 980 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 1024 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c

//#line 1027 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Parallel::makeOffset(org::scalegraph::util::MemoryChunk<x10_long> sortedIndex,
                                                 org::scalegraph::util::MemoryChunk<x10_long> offset) {
    
    //#line 1028 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long length = sortedIndex->org::scalegraph::util::MemoryChunk<x10_long>::size();
    
    //#line 1029 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(length, ((x10_long)0ll))))
    {
        
        //#line 1030 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i56505domain56924 = offset->org::scalegraph::util::MemoryChunk<x10_long>::range();
        
        //#line 1030 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i56505min56925 = i56505domain56924->FMGL(min);
        
        //#line 1030 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i56505max56926 = i56505domain56924->FMGL(max);
        
        //#line 1030 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56927;
            for (
                 //#line 1030 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56927 = i56505min56925; ((i56927) <= (i56505max56926));
                 
                 //#line 1030 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56927 = ((x10_long) ((i56927) + (((x10_long)1ll)))))
            {
                
                //#line 1030 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long o56928 = i56927;
                
                //#line 1030 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                offset->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  o56928, ((x10_long) (((x10_int)0))));
            }
        }
        
    } else {
        
        //#line 1033 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i56522min56939 = ((x10_long) (((x10_int)0)));
        
        //#line 1033 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i56522max56940 = sortedIndex->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                    ((x10_int)0));
        
        //#line 1033 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56941;
            for (
                 //#line 1033 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56941 = i56522min56939; ((i56941) <= (i56522max56940));
                 
                 //#line 1033 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56941 = ((x10_long) ((i56941) + (((x10_long)1ll)))))
            {
                
                //#line 1033 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long o56942 = i56941;
                
                //#line 1033 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                offset->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  o56942, ((x10_long) (((x10_int)0))));
            }
        }
        
        //#line 1034 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i56538min56943 = ((x10_long) ((sortedIndex->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  ((x10_long) ((length) - (((x10_long) (((x10_int)1)))))))) + (((x10_long) (((x10_int)1))))));
        
        //#line 1034 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i56538max56944 = ((x10_long) ((offset->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long) (((x10_int)1))))));
        
        //#line 1034 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56945;
            for (
                 //#line 1034 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56945 = i56538min56943; ((i56945) <= (i56538max56944));
                 
                 //#line 1034 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56945 = ((x10_long) ((i56945) + (((x10_long)1ll)))))
            {
                
                //#line 1034 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long o56946 = i56945;
                
                //#line 1034 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                offset->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  o56946, length);
            }
        }
        
        //#line 1036 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)1))), ((x10_long) ((length) - (((x10_long) (((x10_int)1))))))),
                                              reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Parallel__closure__47)))org_scalegraph_util_Parallel__closure__47(sortedIndex, offset))));
    }
    
}

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Parallel* org::scalegraph::util::Parallel::org__scalegraph__util__Parallel____this__org__scalegraph__util__Parallel(
  ) {
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return this;
    
}
const x10aux::serialization_id_t org::scalegraph::util::Parallel::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::Parallel::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::util::Parallel::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::util::Parallel::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::Parallel* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Parallel>(), 0, sizeof(org::scalegraph::util::Parallel))) org::scalegraph::util::Parallel();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::util::Parallel::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::util::Parallel::rtt;
void org::scalegraph::util::Parallel::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.util.Parallel",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::itable<org_scalegraph_util_Parallel__closure__17>org_scalegraph_util_Parallel__closure__17::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__17::__apply, &org_scalegraph_util_Parallel__closure__17::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_Parallel__closure__17::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >, &org_scalegraph_util_Parallel__closure__17::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__17::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__17::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_2<x10_int, x10_int, x10_int>::itable<org_scalegraph_util_Parallel__closure__18>org_scalegraph_util_Parallel__closure__18::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__18::__apply, &org_scalegraph_util_Parallel__closure__18::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_Parallel__closure__18::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, x10_int, x10_int> >, &org_scalegraph_util_Parallel__closure__18::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__18::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__18::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_util_Parallel__closure__34>org_scalegraph_util_Parallel__closure__34::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__34::__apply, &org_scalegraph_util_Parallel__closure__34::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_Parallel__closure__34::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__34::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__34::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__34::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_util_Parallel__closure__35>org_scalegraph_util_Parallel__closure__35::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__35::__apply, &org_scalegraph_util_Parallel__closure__35::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_Parallel__closure__35::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__35::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__35::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__35::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_util_Parallel__closure__36>org_scalegraph_util_Parallel__closure__36::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__36::__apply, &org_scalegraph_util_Parallel__closure__36::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_Parallel__closure__36::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__36::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__36::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__36::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_util_Parallel__closure__37>org_scalegraph_util_Parallel__closure__37::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__37::__apply, &org_scalegraph_util_Parallel__closure__37::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_Parallel__closure__37::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__37::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__37::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__37::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::itable<org_scalegraph_util_Parallel__closure__47>org_scalegraph_util_Parallel__closure__47::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__47::__apply, &org_scalegraph_util_Parallel__closure__47::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_util_Parallel__closure__47::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Parallel__closure__47::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__47::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__47::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of Parallel */
/*************************************************/
