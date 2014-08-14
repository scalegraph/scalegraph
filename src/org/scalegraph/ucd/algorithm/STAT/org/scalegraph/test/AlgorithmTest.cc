/*************************************************/
/* START of AlgorithmTest */
#include <org/scalegraph/test/AlgorithmTest.h>

#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_test_AlgorithmTest__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >::itable<org_scalegraph_test_AlgorithmTest__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_double> __apply() {
        
        //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_double >::_make(x10::lang::Fun_0_0<x10_long>::__apply(x10aux::nullCheck(getSize)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10::lang::Fun_0_0<x10_long>* getSize;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->getSize);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__1* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__1>();
        buf.record_reference(storage);
        x10::lang::Fun_0_0<x10_long>* that_getSize = buf.read<x10::lang::Fun_0_0<x10_long>*>();
        org_scalegraph_test_AlgorithmTest__closure__1* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__1(that_getSize);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__1(x10::lang::Fun_0_0<x10_long>* getSize) : getSize(getSize) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:42";
    }

};

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_test_AlgorithmTest__closure__3 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_test_AlgorithmTest__closure__3> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_long tid89513 = ((x10_long) (idx89515));
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r89514 = i_range89519;
            
            //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_double> edgeMem_89512 =
              edgeMemory->org::scalegraph::util::DistMemoryChunk<x10_double>::__apply();
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i57219domain89507 = r89514;
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_long i57219min89508 = i57219domain89507->FMGL(min);
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_long i57219max89509 = i57219domain89507->FMGL(max);
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
            {
                x10_long i89510;
                for (
                     //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                     i89510 = i57219min89508; ((i89510) <= (i57219max89509));
                     
                     //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                     i89510 = ((x10_long) ((i89510) + (((x10_long)1ll)))))
                {
                    
                    //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long i89511 = i89510;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index89504 = i89511;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_double value89505 = value;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_double ret89506;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((edgeMem_89512->FMGL(data)).isValid())) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index89504) < (((x10_long) (((x10_int)0))))) ||
                            ((index89504) >= (edgeMem_89512->FMGL(data)->
                                                FMGL(size)))) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index89504), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (edgeMem_89512->FMGL(data)).set(index89504, value89505);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret89506 = value89505;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret89506;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc173) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc173)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc173);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ = static_cast<x10::lang::CheckedThrowable*>(__exc173);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int idx89515;
    x10::lang::LongRange i_range89519;
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory;
    x10_double value;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx89515);
        buf.write(this->i_range89519);
        buf.write(this->edgeMemory);
        buf.write(this->value);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__3* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__3>();
        buf.record_reference(storage);
        x10_int that_idx89515 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range89519 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::DistMemoryChunk<x10_double> that_edgeMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_double> >();
        x10_double that_value = buf.read<x10_double>();
        org_scalegraph_test_AlgorithmTest__closure__3* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__3(that_idx89515, that_i_range89519, that_edgeMemory, that_value);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__3(x10_int idx89515, x10::lang::LongRange i_range89519, org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory, x10_double value) : idx89515(idx89515), i_range89519(i_range89519), edgeMemory(edgeMemory), value(value) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10:878";
    }

};

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_test_AlgorithmTest__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_test_AlgorithmTest__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
        x10_int role = (__extension__ ({
            
            //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10_int>* this85558 = x10aux::nullCheck(team)->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret85559;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret85560; __ret85560: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this85558)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret85559 = (x10aux::nullCheck(this85558)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret85560_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this85558)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret85559 = (x10aux::nullCheck(this85558)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this85558)->
                                                                                                                  FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret85560_end_;
                }
                
            }goto __ret85560_end_; __ret85560_end_: ;
            }
            ret85559;
            }))
            ;
            
        
        //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange range89529 = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((x10::lang::Fun_0_0<x10_long>::__apply(x10aux::nullCheck(getSize))) - (((x10_long) (((x10_int)1)))))));
        
        //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long size89525 = ((x10_long) ((((x10_long) ((range89529->
                                                           FMGL(max)) - (range89529->
                                                                           FMGL(min))))) + (((x10_long) (((x10_int)1))))));
        
        //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int nthreads89526 = x10::lang::Runtime::FMGL(NTHREADS__get)();
        
        //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size89527 = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a89528 = ((x10_long) ((((x10_long) ((((x10_long) ((size89525) + (((x10_long) (nthreads89526)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads89526)))));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
            ;
            ((a89528) < (((x10_long)1ll))) ? (((x10_long)1ll))
              : (a89528);
        }))
        ;
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var2 = x10::lang::Runtime::startFinish();
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable89769 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i74249max89522 = ((x10_int) ((nthreads89526) - (((x10_int)1))));
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i89523;
                                for (
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i89523 = ((x10_int)0);
                                     ((i89523) <= (i74249max89522));
                                     
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i89523 = ((x10_int) ((i89523) + (((x10_int)1)))))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i89524 = i89523;
                                    
                                    //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int idx89515 = i89524;
                                    
                                    //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start89516 =
                                      (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a89517 =
                                          ((x10_long) ((range89529->
                                                          FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b89518 =
                                          ((x10_long) ((range89529->
                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i89524))) * (chunk_size89527))))));
                                        ((a89517) < (b89518))
                                          ? (a89517) : (b89518);
                                    }))
                                    ;
                                    
                                    //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range89519 =
                                      x10::lang::LongRange::_make(i_start89516, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a89520 =
                                          range89529->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b89521 =
                                          ((x10_long) ((((x10_long) ((i_start89516) + (chunk_size89527)))) - (((x10_long) (((x10_int)1))))));
                                        ((a89520) < (b89521))
                                          ? (a89520) : (b89521);
                                    }))
                                    );
                                    
                                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__3)))org_scalegraph_test_AlgorithmTest__closure__3(idx89515, i_range89519, edgeMemory, value))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc174) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc174);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__0__);
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc175) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal89770 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc175);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable89769 = formal89770;
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable89769)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable89769))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable89769));
                    }
                    
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var2);
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable89769)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable89769)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable89769));
                    }
                    
                }
                
            }
        }
        }
        
        // captured environment
        x10::util::Team* team;
        x10::lang::Fun_0_0<x10_long>* getSize;
        org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory;
        x10_double value;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->team);
            buf.write(this->getSize);
            buf.write(this->edgeMemory);
            buf.write(this->value);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_test_AlgorithmTest__closure__2* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__2>();
            buf.record_reference(storage);
            x10::util::Team* that_team = buf.read<x10::util::Team*>();
            x10::lang::Fun_0_0<x10_long>* that_getSize = buf.read<x10::lang::Fun_0_0<x10_long>*>();
            org::scalegraph::util::DistMemoryChunk<x10_double> that_edgeMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_double> >();
            x10_double that_value = buf.read<x10_double>();
            org_scalegraph_test_AlgorithmTest__closure__2* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__2(that_team, that_getSize, that_edgeMemory, that_value);
            return this_;
        }
        
        org_scalegraph_test_AlgorithmTest__closure__2(x10::util::Team* team, x10::lang::Fun_0_0<x10_long>* getSize, org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory, x10_double value) : team(team), getSize(getSize), edgeMemory(edgeMemory), value(value) { }
        
        static const x10aux::serialization_id_t _serialization_id;
        
        static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        
        x10::lang::String* toString() {
            return x10aux::makeStringLit(this->toNativeString());
        }
        
        const char* toNativeString() {
            return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:44-52";
        }
    
    };
    
    #endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__2_CLOSURE
    #ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_test_AlgorithmTest__closure__4 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<x10_long>::itable<org_scalegraph_test_AlgorithmTest__closure__4> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply() {
        
        //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this86924 = srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            this86924->FMGL(data)->FMGL(size);
        }))
        ;
        
    }
    
    // captured environment
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->srcList);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__4* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__4>();
        buf.record_reference(storage);
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcList = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org_scalegraph_test_AlgorithmTest__closure__4* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__4(that_srcList);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__4(org::scalegraph::util::DistMemoryChunk<x10_long> srcList) : srcList(srcList) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:104";
    }

};

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_test_AlgorithmTest__closure__5 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<x10_long>::itable<org_scalegraph_test_AlgorithmTest__closure__5> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply() {
        
        //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this86925 = srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            this86925->FMGL(data)->FMGL(size);
        }))
        ;
        
    }
    
    // captured environment
    org::scalegraph::util::DistMemoryChunk<x10_long> srcList;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->srcList);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__5* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__5>();
        buf.record_reference(storage);
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcList = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org_scalegraph_test_AlgorithmTest__closure__5* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__5(that_srcList);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__5(org::scalegraph::util::DistMemoryChunk<x10_long> srcList) : srcList(srcList) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10:104";
    }

};

#endif // ORG_SCALEGRAPH_TEST_ALGORITHMTEST__CLOSURE__5_CLOSURE

//#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10MethodDecl_c

//#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::DistMemoryChunk<x10_double> org::scalegraph::test::AlgorithmTest::genConstanceValueEdges(
  x10::lang::Fun_0_0<x10_long>* getSize, x10_double value) {
    
    //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory =
       org::scalegraph::util::DistMemoryChunk<x10_double>::_alloc();
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10ConstructorCall_c
    (edgeMemory)->::org::scalegraph::util::DistMemoryChunk<x10_double>::_constructor(
      x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(sizeof(org_scalegraph_test_AlgorithmTest__closure__1)))org_scalegraph_test_AlgorithmTest__closure__1(getSize))));
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__2)))org_scalegraph_test_AlgorithmTest__closure__2(team, getSize, edgeMemory, value))));
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
    return edgeMemory;
    
}

//#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::Graph* org::scalegraph::test::AlgorithmTest::loadGraph(
  x10::array::Array<x10::lang::String*>* args) {
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
    if (((x10aux::nullCheck(args)->FMGL(size)) < (((x10_int)2))))
    {
        
        //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("Too few arguments"))));
    }
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
    if (x10aux::equals((__extension__ ({
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* ret85600;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret85601; __ret85601: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(args)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret85600 = (x10aux::nullCheck(args)->
                                  FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret85601_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(args)->
                                    FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret85600 = (x10aux::nullCheck(args)->
                                  FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(args)->
                                                                                      FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret85601_end_;
                }
                
            }goto __ret85601_end_; __ret85601_end_: ;
            }
            ret85600;
            }))
            ,reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("rmat"))))
        {
            
            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_int scale = x10::lang::IntNatives::parseInt((__extension__ ({
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10::lang::String* ret85603;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret85604; __ret85604: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(args)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret85603 = (x10aux::nullCheck(args)->
                                      FMGL(raw))->__apply(((x10_int)1));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret85604_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(args)->
                                        FMGL(region)->contains(
                                        ((x10_int)1)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)1));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret85603 = (x10aux::nullCheck(args)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(args)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret85604_end_;
                    }
                    
                }goto __ret85604_end_; __ret85604_end_: ;
                }
                ret85603;
                }))
                );
                
            
            //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_int edgefactor = ((x10aux::nullCheck(args)->
                                     FMGL(size)) > (((x10_int)2)))
              ? (x10::lang::IntNatives::parseInt((__extension__ ({
                     
                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                     ;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     x10::lang::String* ret85606;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                     goto __ret85607; __ret85607: {
                     {
                         
                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                         if (x10aux::nullCheck(args)->FMGL(rail))
                         {
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret85606 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int)2));
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret85607_end_;
                         } else {
                             
                             //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                             if (true && !(x10aux::nullCheck(args)->
                                             FMGL(region)->contains(
                                             ((x10_int)2))))
                             {
                                 
                                 //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                 x10::array::Array<void>::raiseBoundsError(
                                   ((x10_int)2));
                             }
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret85606 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)2)) - (x10aux::nullCheck(args)->
                                                                                               FMGL(layout_min0)))));
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret85607_end_;
                         }
                         
                     }goto __ret85607_end_; __ret85607_end_: ;
                     }
                     ret85606;
                     }))
                     )) : (((x10_int)16));
                 
            
            //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_double A = ((x10aux::nullCheck(args)->FMGL(size)) > (((x10_int)3)))
              ? (x10::lang::DoubleNatives::parseDouble((__extension__ ({
                     
                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                     ;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     x10::lang::String* ret85609;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                     goto __ret85610; __ret85610: {
                     {
                         
                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                         if (x10aux::nullCheck(args)->FMGL(rail))
                         {
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret85609 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int)3));
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret85610_end_;
                         } else {
                             
                             //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                             if (true && !(x10aux::nullCheck(args)->
                                             FMGL(region)->contains(
                                             ((x10_int)3))))
                             {
                                 
                                 //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                 x10::array::Array<void>::raiseBoundsError(
                                   ((x10_int)3));
                             }
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret85609 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)3)) - (x10aux::nullCheck(args)->
                                                                                               FMGL(layout_min0)))));
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret85610_end_;
                         }
                         
                     }goto __ret85610_end_; __ret85610_end_: ;
                     }
                     ret85609;
                     }))
                     )) : (0.45);
                 
            
            //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_double B = ((x10aux::nullCheck(args)->FMGL(size)) > (((x10_int)4)))
              ? (x10::lang::DoubleNatives::parseDouble((__extension__ ({
                     
                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                     ;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     x10::lang::String* ret85612;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                     goto __ret85613; __ret85613: {
                     {
                         
                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                         if (x10aux::nullCheck(args)->FMGL(rail))
                         {
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret85612 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int)4));
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret85613_end_;
                         } else {
                             
                             //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                             if (true && !(x10aux::nullCheck(args)->
                                             FMGL(region)->contains(
                                             ((x10_int)4))))
                             {
                                 
                                 //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                 x10::array::Array<void>::raiseBoundsError(
                                   ((x10_int)4));
                             }
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret85612 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)4)) - (x10aux::nullCheck(args)->
                                                                                               FMGL(layout_min0)))));
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret85613_end_;
                         }
                         
                     }goto __ret85613_end_; __ret85613_end_: ;
                     }
                     ret85612;
                     }))
                     )) : (0.15);
                 
            
            //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_double C = ((x10aux::nullCheck(args)->FMGL(size)) > (((x10_int)5)))
              ? (x10::lang::DoubleNatives::parseDouble((__extension__ ({
                     
                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                     ;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     x10::lang::String* ret85615;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                     goto __ret85616; __ret85616: {
                     {
                         
                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                         if (x10aux::nullCheck(args)->FMGL(rail))
                         {
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret85615 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int)5));
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret85616_end_;
                         } else {
                             
                             //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                             if (true && !(x10aux::nullCheck(args)->
                                             FMGL(region)->contains(
                                             ((x10_int)5))))
                             {
                                 
                                 //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                 x10::array::Array<void>::raiseBoundsError(
                                   ((x10_int)5));
                             }
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret85615 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)5)) - (x10aux::nullCheck(args)->
                                                                                               FMGL(layout_min0)))));
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret85616_end_;
                         }
                         
                     }goto __ret85616_end_; __ret85616_end_: ;
                     }
                     ret85615;
                     }))
                     )) : (0.15);
                 
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::random::Random* rnd = 
            ((new (memset(x10aux::alloc<org::scalegraph::util::random::Random>(), 0, sizeof(org::scalegraph::util::random::Random))) org::scalegraph::util::random::Random()))
            ;
            
            //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10ConstructorCall_c
            (rnd)->::org::scalegraph::util::random::Random::_constructor(
              ((x10_long) (((x10_int)2))), ((x10_long) (((x10_int)3))));
            
            //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::StopWatch* sw = x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
            
            //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::graph::EdgeList<x10_long> edgeList =
              (__extension__ ({
                
                //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_int scale86889 = scale;
                
                //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_int edgefactor86890 = edgefactor;
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_double A86891 = A;
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_double B86892 = B;
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_double C86893 = C;
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::random::Random* rnd86894 =
                  rnd;
                org::scalegraph::graph::GraphGenerator::genRMAT(
                  scale86889, edgefactor86890, A86891, B86892,
                  C86893, rnd86894, true);
            }))
            ;
            
            //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
              x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Generate RMAT[scale="), scale), x10aux::makeStringLit(",edgefactor=")), edgefactor), x10aux::makeStringLit("]")));
            
            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::DistMemoryChunk<x10_double> rawWeight =
              org::scalegraph::graph::GraphGenerator::genRandomEdgeValue(
                scale, edgefactor, rnd);
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
              x10aux::makeStringLit("Generate random edge value"));
            
            //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::graph::Graph* g = org::scalegraph::graph::Graph::make(
                                                 edgeList);
            
            //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
            g->setEdgeAttribute<x10_double >(x10aux::makeStringLit("weight"),
                                             rawWeight);
            
            //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
              x10aux::makeStringLit("Complete making graph"));
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
            return g;
            } else 
            //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
            if (x10aux::equals((__extension__ ({
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10::lang::String* ret86896;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret86897; __ret86897: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(args)->FMGL(rail))
                        {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret86896 = (x10aux::nullCheck(args)->
                                          FMGL(raw))->__apply(((x10_int)0));
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret86897_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(args)->
                                            FMGL(region)->contains(
                                            ((x10_int)0))))
                            {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  ((x10_int)0));
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret86896 = (x10aux::nullCheck(args)->
                                          FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(args)->
                                                                                              FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret86897_end_;
                        }
                        
                    }goto __ret86897_end_; __ret86897_end_: ;
                    }
                    ret86896;
                    }))
                    ,reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("random"))))
                {
                    
                    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_int scale = x10::lang::IntNatives::parseInt((__extension__ ({
                        
                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10::lang::String* ret86899;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                        goto __ret86900; __ret86900: {
                        {
                            
                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (x10aux::nullCheck(args)->
                                  FMGL(rail)) {
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret86899 = (x10aux::nullCheck(args)->
                                              FMGL(raw))->__apply(((x10_int)1));
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret86900_end_;
                            } else {
                                
                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (true && !(x10aux::nullCheck(args)->
                                                FMGL(region)->contains(
                                                ((x10_int)1))))
                                {
                                    
                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                    x10::array::Array<void>::raiseBoundsError(
                                      ((x10_int)1));
                                }
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret86899 = (x10aux::nullCheck(args)->
                                              FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(args)->
                                                                                                  FMGL(layout_min0)))));
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret86900_end_;
                            }
                            
                        }goto __ret86900_end_; __ret86900_end_: ;
                        }
                        ret86899;
                        }))
                        );
                        
                    
                    //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_int edgefactor = ((x10aux::nullCheck(args)->
                                             FMGL(size)) > (((x10_int)2)))
                      ? (x10::lang::IntNatives::parseInt((__extension__ ({
                             
                             //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                             ;
                             
                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                             x10::lang::String* ret86902;
                             
                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                             goto __ret86903; __ret86903: {
                             {
                                 
                                 //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                 if (x10aux::nullCheck(args)->
                                       FMGL(rail)) {
                                     
                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                     ret86902 = (x10aux::nullCheck(args)->
                                                   FMGL(raw))->__apply(((x10_int)2));
                                     
                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                     goto __ret86903_end_;
                                 } else {
                                     
                                     //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                     if (true && !(x10aux::nullCheck(args)->
                                                     FMGL(region)->contains(
                                                     ((x10_int)2))))
                                     {
                                         
                                         //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                         x10::array::Array<void>::raiseBoundsError(
                                           ((x10_int)2));
                                     }
                                     
                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                     ret86902 = (x10aux::nullCheck(args)->
                                                   FMGL(raw))->__apply(((x10_int) ((((x10_int)2)) - (x10aux::nullCheck(args)->
                                                                                                       FMGL(layout_min0)))));
                                     
                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                     goto __ret86903_end_;
                                 }
                                 
                             }goto __ret86903_end_; __ret86903_end_: ;
                             }
                             ret86902;
                             }))
                             )) : (((x10_int)16));
                         
                    
                    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::random::Random* rnd =
                       ((new (memset(x10aux::alloc<org::scalegraph::util::random::Random>(), 0, sizeof(org::scalegraph::util::random::Random))) org::scalegraph::util::random::Random()))
                    ;
                    
                    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10ConstructorCall_c
                    (rnd)->::org::scalegraph::util::random::Random::_constructor(
                      ((x10_long) (((x10_int)2))), ((x10_long) (((x10_int)3))));
                    
                    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::StopWatch* sw =
                      x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
                    
                    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::graph::EdgeList<x10_long> edgeList =
                      org::scalegraph::graph::GraphGenerator::genRandomGraph(
                        scale, edgefactor, rnd);
                    
                    //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                      x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Generate edos random graph[scale="), scale), x10aux::makeStringLit(",edgefactor=")), edgefactor), x10aux::makeStringLit("]")));
                    
                    //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::DistMemoryChunk<x10_double> rawWeight =
                      org::scalegraph::graph::GraphGenerator::genRandomEdgeValue(
                        scale, edgefactor, rnd);
                    
                    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                      x10aux::makeStringLit("Generate random edge value"));
                    
                    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::graph::Graph* g = org::scalegraph::graph::Graph::make(
                                                         edgeList);
                    
                    //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                    g->setEdgeAttribute<x10_double >(x10aux::makeStringLit("weight"),
                                                     rawWeight);
                    
                    //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                      x10aux::makeStringLit("Complete making graph"));
                    
                    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
                    return g;
                    } else 
                    //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                    if (x10aux::equals((__extension__ ({
                            
                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                            ;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10::lang::String* ret86905;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret86906; __ret86906: {
                            {
                                
                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(args)->
                                      FMGL(rail)) {
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret86905 = (x10aux::nullCheck(args)->
                                                  FMGL(raw))->__apply(((x10_int)0));
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret86906_end_;
                                } else {
                                    
                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (true && !(x10aux::nullCheck(args)->
                                                    FMGL(region)->contains(
                                                    ((x10_int)0))))
                                    {
                                        
                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                        x10::array::Array<void>::raiseBoundsError(
                                          ((x10_int)0));
                                    }
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret86905 = (x10aux::nullCheck(args)->
                                                  FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(args)->
                                                                                                      FMGL(layout_min0)))));
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret86906_end_;
                                }
                                
                            }goto __ret86906_end_; __ret86906_end_: ;
                            }
                            ret86905;
                            }))
                            ,reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("file"))))
                        {
                            
                            //#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                            x10_boolean randomEdge = ((x10aux::nullCheck(args)->
                                                         FMGL(size)) > (((x10_int)2)))
                              ? (x10aux::equals((__extension__ ({
                                     
                                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                     ;
                                     
                                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                     x10::lang::String* ret86908;
                                     
                                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                     goto __ret86909; __ret86909: {
                                     {
                                         
                                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                         if (x10aux::nullCheck(args)->
                                               FMGL(rail))
                                         {
                                             
                                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret86908 = (x10aux::nullCheck(args)->
                                                           FMGL(raw))->__apply(((x10_int)2));
                                             
                                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                             goto __ret86909_end_;
                                         } else {
                                             
                                             //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                             if (true && !(x10aux::nullCheck(args)->
                                                             FMGL(region)->contains(
                                                             ((x10_int)2))))
                                             {
                                                 
                                                 //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                 x10::array::Array<void>::raiseBoundsError(
                                                   ((x10_int)2));
                                             }
                                             
                                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret86908 = (x10aux::nullCheck(args)->
                                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)2)) - (x10aux::nullCheck(args)->
                                                                                                               FMGL(layout_min0)))));
                                             
                                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                             goto __ret86909_end_;
                                         }
                                         
                                     }goto __ret86909_end_; __ret86909_end_: ;
                                     }
                                     ret86908;
                                     }))
                                     ,reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("random"))))
                                   : (true);
                                 
                            
                            //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                            x10_double edgeConstVal = randomEdge
                              ? (0.0) : (x10::lang::DoubleNatives::parseDouble((__extension__ ({
                                             
                                             //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                             ;
                                             
                                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                             x10::lang::String* ret86911;
                                             
                                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                             goto __ret86912; __ret86912: {
                                             {
                                                 
                                                 //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                 if (x10aux::nullCheck(args)->
                                                       FMGL(rail))
                                                 {
                                                     
                                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                     ret86911 =
                                                       (x10aux::nullCheck(args)->
                                                          FMGL(raw))->__apply(((x10_int)2));
                                                     
                                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                     goto __ret86912_end_;
                                                 } else {
                                                     
                                                     //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                     if (true &&
                                                         !(x10aux::nullCheck(args)->
                                                             FMGL(region)->contains(
                                                             ((x10_int)2))))
                                                     {
                                                         
                                                         //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                         x10::array::Array<void>::raiseBoundsError(
                                                           ((x10_int)2));
                                                     }
                                                     
                                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                     ret86911 =
                                                       (x10aux::nullCheck(args)->
                                                          FMGL(raw))->__apply(((x10_int) ((((x10_int)2)) - (x10aux::nullCheck(args)->
                                                                                                              FMGL(layout_min0)))));
                                                     
                                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                     goto __ret86912_end_;
                                                 }
                                                 
                                             }goto __ret86912_end_; __ret86912_end_: ;
                                             }
                                             ret86911;
                                             }))
                                             ));
                                         
                            
                            //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                            x10::array::Array<x10_int>* colTypes =
                              (x10::array::Array<x10_int>*)(__extension__ ({
                                x10::array::Array<x10_int>* __var177__(x10::array::Array<x10_int>::_make(2));
                                __var177__->__set(0, 
                                (((x10_int)5)));
                                __var177__->__set(1, 
                                (((x10_int)5)));
                                __var177__;
                            }));
                            
                            //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::StopWatch* sw =
                              x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
                            
                            //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::graph::Graph* g =
                              (__extension__ ({
                                
                                //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::io::NamedDistData* edgeData86920 =
                                  org::scalegraph::io::CSV::read(
                                    (__extension__ ({
                                        
                                        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::String* str86916 =
                                          (__extension__ ({
                                            
                                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                            ;
                                            
                                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                            x10::lang::String* ret86914;
                                            
                                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                            goto __ret86915; __ret86915: {
                                            {
                                                
                                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                if (x10aux::nullCheck(args)->
                                                      FMGL(rail))
                                                {
                                                    
                                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                    ret86914 =
                                                      (x10aux::nullCheck(args)->
                                                         FMGL(raw))->__apply(((x10_int)1));
                                                    
                                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                    goto __ret86915_end_;
                                                } else {
                                                    
                                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                    if (true &&
                                                        !(x10aux::nullCheck(args)->
                                                            FMGL(region)->contains(
                                                            ((x10_int)1))))
                                                    {
                                                        
                                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                        x10::array::Array<void>::raiseBoundsError(
                                                          ((x10_int)1));
                                                    }
                                                    
                                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                    ret86914 =
                                                      (x10aux::nullCheck(args)->
                                                         FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(args)->
                                                                                                             FMGL(layout_min0)))));
                                                    
                                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                    goto __ret86915_end_;
                                                }
                                                
                                            }goto __ret86915_end_; __ret86915_end_: ;
                                            }
                                            ret86914;
                                            }))
                                            ;
                                            
                                        (__extension__ ({
                                            
                                            //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                            org::scalegraph::util::SString alloc86917 =
                                               org::scalegraph::util::SString::_alloc();
                                            
                                            //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                            x10::lang::String* str89530 =
                                              str86916;
                                            
                                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                            alloc86917->FMGL(content) =
                                              org::scalegraph::util::StringFromX10String(str89530);
                                            alloc86917;
                                        }))
                                        ;
                                        }))
                                        , colTypes, true);
                                  
                                org::scalegraph::graph::Graph::make(
                                  edgeData86920, x10aux::class_cast_unchecked<org::scalegraph::io::NamedDistData*>(X10_NULL),
                                  false);
                                }))
                                ;
                                
                            
                            //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                              x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Read graph[path="), (__extension__ ({
                                  
                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                  ;
                                  
                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                  x10::lang::String* ret86922;
                                  
                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                  goto __ret86923; __ret86923: {
                                  {
                                      
                                      //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                      if (x10aux::nullCheck(args)->
                                            FMGL(rail)) {
                                          
                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                          ret86922 = (x10aux::nullCheck(args)->
                                                        FMGL(raw))->__apply(((x10_int)1));
                                          
                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                          goto __ret86923_end_;
                                      } else {
                                          
                                          //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                          if (true && !(x10aux::nullCheck(args)->
                                                          FMGL(region)->contains(
                                                          ((x10_int)1))))
                                          {
                                              
                                              //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                              x10::array::Array<void>::raiseBoundsError(
                                                ((x10_int)1));
                                          }
                                          
                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                          ret86922 = (x10aux::nullCheck(args)->
                                                        FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(args)->
                                                                                                            FMGL(layout_min0)))));
                                          
                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                          goto __ret86923_end_;
                                      }
                                      
                                  }goto __ret86923_end_; __ret86923_end_: ;
                                  }
                                  ret86922;
                                  }))
                                  ), x10aux::makeStringLit("]")));
                            
                            //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::DistMemoryChunk<x10_long> srcList =
                              (__extension__ ({
                                g->FMGL(srcList);
                            }))
                            ;
                            
                            //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::DistMemoryChunk<x10_double> edgeList =
                              randomEdge ? (org::scalegraph::graph::GraphGenerator::genRandomEdgeValue(
                                              reinterpret_cast<x10::lang::Fun_0_0<x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10_long> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__4)))org_scalegraph_test_AlgorithmTest__closure__4(srcList))),
                                              (__extension__ ({
                                                  
                                                  //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                  org::scalegraph::util::random::Random* alloc57213 =
                                                     ((new (memset(x10aux::alloc<org::scalegraph::util::random::Random>(), 0, sizeof(org::scalegraph::util::random::Random))) org::scalegraph::util::random::Random()))
                                                  ;
                                                  
                                                  //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10ConstructorCall_c
                                                  (alloc57213)->::org::scalegraph::util::random::Random::_constructor(
                                                    ((x10_long) (((x10_int)2))),
                                                    ((x10_long) (((x10_int)3))));
                                                  alloc57213;
                                              }))
                                              )) : (org::scalegraph::test::AlgorithmTest::genConstanceValueEdges(
                                                      reinterpret_cast<x10::lang::Fun_0_0<x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10_long> >(sizeof(org_scalegraph_test_AlgorithmTest__closure__5)))org_scalegraph_test_AlgorithmTest__closure__5(srcList))),
                                                      edgeConstVal));
                            
                            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                            g->setEdgeAttribute<x10_double >(
                              x10aux::makeStringLit("weight"),
                              edgeList);
                            
                            //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                              x10aux::makeStringLit("Generate the edge weights"));
                            
                            //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
                            return g;
                            } else {
                                
                                //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10::lang::String::__plus(x10aux::makeStringLit("Unknown graph type :"), (__extension__ ({
                                                                                                                        
                                                                                                                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                                                                                                        ;
                                                                                                                        
                                                                                                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                                                                        x10::lang::String* ret86927;
                                                                                                                        
                                                                                                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                                                                        goto __ret86928; __ret86928: {
                                                                                                                        {
                                                                                                                            
                                                                                                                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                                                                            if (x10aux::nullCheck(args)->
                                                                                                                                  FMGL(rail))
                                                                                                                            {
                                                                                                                                
                                                                                                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                                ret86927 =
                                                                                                                                  (x10aux::nullCheck(args)->
                                                                                                                                     FMGL(raw))->__apply(((x10_int)0));
                                                                                                                                
                                                                                                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                                                                goto __ret86928_end_;
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                                
                                                                                                                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                                                                                if (true &&
                                                                                                                                    !(x10aux::nullCheck(args)->
                                                                                                                                        FMGL(region)->contains(
                                                                                                                                        ((x10_int)0))))
                                                                                                                                {
                                                                                                                                    
                                                                                                                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                                                                                    x10::array::Array<void>::raiseBoundsError(
                                                                                                                                      ((x10_int)0));
                                                                                                                                }
                                                                                                                                
                                                                                                                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                                ret86927 =
                                                                                                                                  (x10aux::nullCheck(args)->
                                                                                                                                     FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(args)->
                                                                                                                                                                                         FMGL(layout_min0)))));
                                                                                                                                
                                                                                                                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                                                                goto __ret86928_end_;
                                                                                                                            }
                                                                                                                            
                                                                                                                        }goto __ret86928_end_; __ret86928_end_: ;
                                                                                                                        }
                                                                                                                        ret86927;
                                                                                                                        }))
                                                                                                                        ))));
                                }
                                
                            }
                            
                            //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10MethodDecl_c
                            x10::array::Array<x10::array::Array<x10::lang::String*>*>*
                              org::scalegraph::test::AlgorithmTest::splitArgs(
                              x10::array::Array<x10::lang::String*>* args) {
                                
                                //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
                                {
                                    x10::lang::Iterator<x10::array::Point*>* id57238;
                                    for (
                                         //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                         id57238 = x10aux::nullCheck(args)->
                                                     FMGL(region)->iterator();
                                         x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id57238));
                                         ) {
                                        
                                        //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                        x10::array::Point* id29 =
                                          x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id57238));
                                        
                                        //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                        x10_int s = x10aux::nullCheck(id29)->x10::array::Point::__apply(
                                                      ((x10_int)0));
                                        
                                        //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                                        if (x10aux::equals((__extension__ ({
                                                
                                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int i86929 =
                                                  s;
                                                
                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10::lang::String* ret86930;
                                                
                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                goto __ret86931; __ret86931: {
                                                {
                                                    
                                                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                    if (x10aux::nullCheck(args)->
                                                          FMGL(rail))
                                                    {
                                                        
                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret86930 =
                                                          (x10aux::nullCheck(args)->
                                                             FMGL(raw))->__apply(i86929);
                                                        
                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                        goto __ret86931_end_;
                                                    } else
                                                    {
                                                        
                                                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                        if (true &&
                                                            !(x10aux::nullCheck(args)->
                                                                FMGL(region)->contains(
                                                                i86929)))
                                                        {
                                                            
                                                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                            x10::array::Array<void>::raiseBoundsError(
                                                              i86929);
                                                        }
                                                        
                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret86930 =
                                                          (x10aux::nullCheck(args)->
                                                             FMGL(raw))->__apply(((x10_int) ((i86929) - (x10aux::nullCheck(args)->
                                                                                                           FMGL(layout_min0)))));
                                                        
                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                        goto __ret86931_end_;
                                                    }
                                                    
                                                }goto __ret86931_end_; __ret86931_end_: ;
                                                }
                                                ret86930;
                                                }))
                                                ,reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("-"))))
                                            {
                                                
                                                //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                x10::array::Array<x10::lang::String*>* args1 =
                                                   ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::String*> >(), 0, sizeof(x10::array::Array<x10::lang::String*>))) x10::array::Array<x10::lang::String*>()))
                                                ;
                                                
                                                //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int size89549 =
                                                  s;
                                                
                                                //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10::array::RectRegion1D* myReg89538 =
                                                   ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
                                                ;
                                                
                                                //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
                                                (myReg89538)->::x10::array::RectRegion1D::_constructor(
                                                  ((x10_int) ((size89549) - (((x10_int)1)))));
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args1->FMGL(region) =
                                                  reinterpret_cast<x10::array::Region*>(myReg89538);
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args1->FMGL(rank) =
                                                  ((x10_int)1);
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args1->FMGL(rect) =
                                                  true;
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args1->FMGL(zeroBased) =
                                                  true;
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args1->FMGL(rail) =
                                                  true;
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args1->FMGL(size) =
                                                  size89549;
                                                
                                                //#line 318 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args1->FMGL(layout_min0) =
                                                  args1->
                                                    FMGL(layout_stride1) =
                                                  args1->
                                                    FMGL(layout_min1) =
                                                  ((x10_int)0);
                                                
                                                //#line 319 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args1->FMGL(layout) =
                                                  (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
                                                
                                                //#line 320 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10::util::IndexedMemoryChunk<x10::lang::String* > r89539 =
                                                  x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::String* >(size89549, 8, false, false);
                                                
                                                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int i69157max89535 =
                                                  ((x10_int) ((size89549) - (((x10_int)1))));
                                                
                                                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
                                                {
                                                    x10_int i89536;
                                                    for (
                                                         //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                         i89536 =
                                                           ((x10_int)0);
                                                         ((i89536) <= (i69157max89535));
                                                         
                                                         //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                         i89536 =
                                                           ((x10_int) ((i89536) + (((x10_int)1)))))
                                                    {
                                                        
                                                        //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10_int i89537 =
                                                          i89536;
                                                        
                                                        //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                        (r89539)->__set(i89537, (__extension__ ({
                                                            
                                                            //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                            x10_int i89531 =
                                                              i89537;
                                                            (__extension__ ({
                                                                
                                                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                x10_int i89532 =
                                                                  i89531;
                                                                
                                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                x10::lang::String* ret89533;
                                                                
                                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                goto __ret89534; __ret89534: {
                                                                {
                                                                    
                                                                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                    if (x10aux::nullCheck(args)->
                                                                          FMGL(rail))
                                                                    {
                                                                        
                                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret89533 =
                                                                          (x10aux::nullCheck(args)->
                                                                             FMGL(raw))->__apply(i89532);
                                                                        
                                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                        goto __ret89534_end_;
                                                                    }
                                                                    else
                                                                    {
                                                                        
                                                                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                        if (true &&
                                                                            !(x10aux::nullCheck(args)->
                                                                                FMGL(region)->contains(
                                                                                i89532)))
                                                                        {
                                                                            
                                                                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                            x10::array::Array<void>::raiseBoundsError(
                                                                              i89532);
                                                                        }
                                                                        
                                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret89533 =
                                                                          (x10aux::nullCheck(args)->
                                                                             FMGL(raw))->__apply(((x10_int) ((i89532) - (x10aux::nullCheck(args)->
                                                                                                                           FMGL(layout_min0)))));
                                                                        
                                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                        goto __ret89534_end_;
                                                                    }
                                                                    
                                                                }goto __ret89534_end_; __ret89534_end_: ;
                                                                }
                                                                ret89533;
                                                                }))
                                                                ;
                                                            }))
                                                            );
                                                        }
                                                    }
                                                    
                                                
                                                //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args1->FMGL(raw) =
                                                  r89539;
                                                
                                                //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                x10::array::Array<x10::lang::String*>* args2 =
                                                   ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::String*> >(), 0, sizeof(x10::array::Array<x10::lang::String*>))) x10::array::Array<x10::lang::String*>()))
                                                ;
                                                
                                                //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int size89550 =
                                                  ((x10_int) ((((x10_int) ((x10aux::nullCheck(args)->
                                                                              FMGL(size)) - (s)))) - (((x10_int)1))));
                                                
                                                //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10::array::RectRegion1D* myReg89547 =
                                                   ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
                                                ;
                                                
                                                //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
                                                (myReg89547)->::x10::array::RectRegion1D::_constructor(
                                                  ((x10_int) ((size89550) - (((x10_int)1)))));
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args2->FMGL(region) =
                                                  reinterpret_cast<x10::array::Region*>(myReg89547);
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args2->FMGL(rank) =
                                                  ((x10_int)1);
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args2->FMGL(rect) =
                                                  true;
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args2->FMGL(zeroBased) =
                                                  true;
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args2->FMGL(rail) =
                                                  true;
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args2->FMGL(size) =
                                                  size89550;
                                                
                                                //#line 318 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args2->FMGL(layout_min0) =
                                                  args2->
                                                    FMGL(layout_stride1) =
                                                  args2->
                                                    FMGL(layout_min1) =
                                                  ((x10_int)0);
                                                
                                                //#line 319 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args2->FMGL(layout) =
                                                  (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
                                                
                                                //#line 320 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10::util::IndexedMemoryChunk<x10::lang::String* > r89548 =
                                                  x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::String* >(size89550, 8, false, false);
                                                
                                                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int i69157max89544 =
                                                  ((x10_int) ((size89550) - (((x10_int)1))));
                                                
                                                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
                                                {
                                                    x10_int i89545;
                                                    for (
                                                         //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                         i89545 =
                                                           ((x10_int)0);
                                                         ((i89545) <= (i69157max89544));
                                                         
                                                         //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                         i89545 =
                                                           ((x10_int) ((i89545) + (((x10_int)1)))))
                                                    {
                                                        
                                                        //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10_int i89546 =
                                                          i89545;
                                                        
                                                        //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                        (r89548)->__set(i89546, (__extension__ ({
                                                            
                                                            //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                            x10_int i89540 =
                                                              i89546;
                                                            (__extension__ ({
                                                                
                                                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                x10_int i89541 =
                                                                  ((x10_int) ((((x10_int) ((s) + (((x10_int)1))))) + (i89540)));
                                                                
                                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                x10::lang::String* ret89542;
                                                                
                                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                goto __ret89543; __ret89543: {
                                                                {
                                                                    
                                                                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                    if (x10aux::nullCheck(args)->
                                                                          FMGL(rail))
                                                                    {
                                                                        
                                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret89542 =
                                                                          (x10aux::nullCheck(args)->
                                                                             FMGL(raw))->__apply(i89541);
                                                                        
                                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                        goto __ret89543_end_;
                                                                    }
                                                                    else
                                                                    {
                                                                        
                                                                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                        if (true &&
                                                                            !(x10aux::nullCheck(args)->
                                                                                FMGL(region)->contains(
                                                                                i89541)))
                                                                        {
                                                                            
                                                                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                            x10::array::Array<void>::raiseBoundsError(
                                                                              i89541);
                                                                        }
                                                                        
                                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret89542 =
                                                                          (x10aux::nullCheck(args)->
                                                                             FMGL(raw))->__apply(((x10_int) ((i89541) - (x10aux::nullCheck(args)->
                                                                                                                           FMGL(layout_min0)))));
                                                                        
                                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                        goto __ret89543_end_;
                                                                    }
                                                                    
                                                                }goto __ret89543_end_; __ret89543_end_: ;
                                                                }
                                                                ret89542;
                                                                }))
                                                                ;
                                                            }))
                                                            );
                                                        }
                                                    }
                                                    
                                                
                                                //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args2->FMGL(raw) =
                                                  r89548;
                                                
                                                //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
                                                return (x10::array::Array<x10::array::Array<x10::lang::String*>*>*)(__extension__ ({
                                                    x10::array::Array<x10::array::Array<x10::lang::String*>*>* __var179__(x10::array::Array<x10::array::Array<x10::lang::String*>*>::_make(2));
                                                    __var179__->__set(0, 
                                                    (args1));
                                                    __var179__->__set(1, 
                                                    (args2));
                                                    __var179__;
                                                }));
                                                }
                                                
                                            }
                                        }
                                        
                                        //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("Input parameter does not have splitter flag"))));
                                    }
                                    
                                
                                //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10MethodDecl_c
                                x10_boolean org::scalegraph::test::AlgorithmTest::run(
                                  x10::array::Array<x10::lang::String*>* args) {
                                    
                                    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::test::STest::print(
                                      reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("ARGS: ")));
                                    
                                    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::test::STest::println(
                                      reinterpret_cast<x10::lang::Any*>(args));
                                    
                                    //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                    x10::array::Array<x10::array::Array<x10::lang::String*>*>* id30 =
                                      org::scalegraph::test::AlgorithmTest::splitArgs(
                                        args);
                                    
                                    //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                    x10::array::Array<x10::lang::String*>* graphArgs =
                                      (__extension__ ({
                                        
                                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                        ;
                                        
                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10::array::Array<x10::lang::String*>* ret86969;
                                        
                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret86969 = (x10aux::nullCheck(id30)->
                                                      FMGL(raw))->__apply(((x10_int)0));
                                        ret86969;
                                    }))
                                    ;
                                    
                                    //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                    x10::array::Array<x10::lang::String*>* mainArgs =
                                      (__extension__ ({
                                        
                                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                        ;
                                        
                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10::array::Array<x10::lang::String*>* ret86972;
                                        
                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret86972 = (x10aux::nullCheck(id30)->
                                                      FMGL(raw))->__apply(((x10_int)1));
                                        ret86972;
                                    }))
                                    ;
                                    
                                    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
                                    return this->run(mainArgs,
                                                     org::scalegraph::test::AlgorithmTest::loadGraph(
                                                       graphArgs));
                                    
                                }
                                
                                //#line 134 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10MethodDecl_c
                                
                                //#line 138 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10MethodDecl_c
                                
                                //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10MethodDecl_c
                                
                                //#line 271 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10MethodDecl_c
                                
                                //#line 292 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10MethodDecl_c
                                x10_boolean org::scalegraph::test::AlgorithmTest::checkResult(
                                  org::scalegraph::util::DistMemoryChunk<x10_long> source,
                                  org::scalegraph::util::DistMemoryChunk<x10_long> target,
                                  x10::lang::String* reference) {
                                    
                                    //#line 294 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::util::StopWatch* sw =
                                      x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
                                    
                                    //#line 295 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::graph::Graph* resdata =
                                      org::scalegraph::graph::Graph::make(
                                        (__extension__ ({
                                            
                                            //#line 295 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                            org::scalegraph::graph::EdgeList<x10_long> alloc57217 =
                                               org::scalegraph::graph::EdgeList<x10_long>::_alloc();
                                            
                                            //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                            org::scalegraph::util::DistMemoryChunk<x10_long> src89749 =
                                              source;
                                            
                                            //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                            org::scalegraph::util::DistMemoryChunk<x10_long> dst89750 =
                                              target;
                                            
                                            //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                            alloc57217->FMGL(src) =
                                              src89749;
                                            
                                            //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                            alloc57217->FMGL(dst) =
                                              dst89750;
                                            alloc57217;
                                        }))
                                        );
                                    
                                    //#line 296 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::blas::DistSparseMatrix<x10_long> res =
                                      resdata->org::scalegraph::graph::Graph::createDistEdgeIndexMatrix(
                                        x10aux::nullCheck(org::scalegraph::Config::get())->dist1d(),
                                        true, true);
                                    
                                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                                    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                                      x10aux::makeStringLit("Construct a graph from result"));
                                    
                                    //#line 298 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::graph::Graph* refdata =
                                      (__extension__ ({
                                        
                                        //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                        org::scalegraph::io::NamedDistData* edgeData89501 =
                                          org::scalegraph::io::CSV::read(
                                            (__extension__ ({
                                                
                                                //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                x10::lang::String* str89497 =
                                                  reference;
                                                (__extension__ ({
                                                    
                                                    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                    org::scalegraph::util::SString alloc89498 =
                                                       org::scalegraph::util::SString::_alloc();
                                                    
                                                    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                    x10::lang::String* str89751 =
                                                      str89497;
                                                    
                                                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                                    alloc89498->
                                                      FMGL(content) =
                                                      org::scalegraph::util::StringFromX10String(str89751);
                                                    alloc89498;
                                                }))
                                                ;
                                            }))
                                            , (x10::array::Array<x10_int>*)(__extension__ ({
                                                x10::array::Array<x10_int>* __var198__(x10::array::Array<x10_int>::_make(3));
                                                __var198__->__set(0, 
                                                (((x10_int)5)));
                                                __var198__->__set(1, 
                                                (((x10_int)5)));
                                                __var198__->__set(2, 
                                                (((x10_int)7)));
                                                __var198__;
                                            })), (x10::array::Array<x10::lang::String*>*)(__extension__ ({
                                                x10::array::Array<x10::lang::String*>* __var199__(x10::array::Array<x10::lang::String*>::_make(3));
                                                __var199__->__set(0, 
                                                (x10aux::makeStringLit("source")));
                                                __var199__->__set(1, 
                                                (x10aux::makeStringLit("target")));
                                                __var199__->__set(2, 
                                                (x10aux::makeStringLit("weight")));
                                                __var199__;
                                            })));
                                        org::scalegraph::graph::Graph::make(
                                          edgeData89501, x10aux::class_cast_unchecked<org::scalegraph::io::NamedDistData*>(X10_NULL),
                                          false);
                                    }))
                                    ;
                                    
                                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                                    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                                      x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Read reference data[path="), reference), x10aux::makeStringLit("]")));
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::blas::DistSparseMatrix<x10_long> ref =
                                      refdata->org::scalegraph::graph::Graph::createDistEdgeIndexMatrix(
                                        x10aux::nullCheck(org::scalegraph::Config::get())->dist1d(),
                                        true, true);
                                    
                                    //#line 303 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                                    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                                      x10aux::makeStringLit("Construct a graph from reference data"));
                                    
                                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                    x10_boolean ret = this->internalCheckResult<x10_long >(
                                                        res,
                                                        ref,
                                                        false,
                                                        ((x10_long)0ll));
                                    
                                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                                    x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                                      x10aux::makeStringLit("Compare result and reference data"));
                                    
                                    //#line 307 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
                                    return ret;
                                    
                                }
                                
                                //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10MethodDecl_c
                                org::scalegraph::test::AlgorithmTest*
                                  org::scalegraph::test::AlgorithmTest::org__scalegraph__test__AlgorithmTest____this__org__scalegraph__test__AlgorithmTest(
                                  ) {
                                    
                                    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
                                    return this;
                                    
                                }
                                
                                //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10ConstructorDecl_c
                                void org::scalegraph::test::AlgorithmTest::_constructor(
                                  ) {
                                    
                                    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::test::STest* this89752 =
                                      this;
                                    
                                    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.AssignPropertyCall_c
                                    
                                }
                                
                                void org::scalegraph::test::AlgorithmTest::_serialize_body(x10aux::serialization_buffer& buf) {
                                    org::scalegraph::test::STest::_serialize_body(buf);
                                    
                                }
                                
                                void org::scalegraph::test::AlgorithmTest::_deserialize_body(x10aux::deserialization_buffer& buf) {
                                    org::scalegraph::test::STest::_deserialize_body(buf);
                                    
                                }
                                
                                x10aux::RuntimeType org::scalegraph::test::AlgorithmTest::rtt;
                                void org::scalegraph::test::AlgorithmTest::_initRTT() {
                                    if (rtt.initStageOne(&rtt)) return;
                                    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::test::STest>()};
                                    rtt.initStageTwo("org.scalegraph.test.AlgorithmTest",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
                                }
                                
                                x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >::itable<org_scalegraph_test_AlgorithmTest__closure__1>org_scalegraph_test_AlgorithmTest__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__1::__apply, &org_scalegraph_test_AlgorithmTest__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >, &org_scalegraph_test_AlgorithmTest__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_test_AlgorithmTest__closure__3>org_scalegraph_test_AlgorithmTest__closure__3::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__3::__apply, &org_scalegraph_test_AlgorithmTest__closure__3::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__3::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_test_AlgorithmTest__closure__3::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__3::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__3::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_test_AlgorithmTest__closure__2>org_scalegraph_test_AlgorithmTest__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__2::__apply, &org_scalegraph_test_AlgorithmTest__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_test_AlgorithmTest__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<x10_long>::itable<org_scalegraph_test_AlgorithmTest__closure__4>org_scalegraph_test_AlgorithmTest__closure__4::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__4::__apply, &org_scalegraph_test_AlgorithmTest__closure__4::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__4::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<x10_long> >, &org_scalegraph_test_AlgorithmTest__closure__4::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__4::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__4::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<x10_long>::itable<org_scalegraph_test_AlgorithmTest__closure__5>org_scalegraph_test_AlgorithmTest__closure__5::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_test_AlgorithmTest__closure__5::__apply, &org_scalegraph_test_AlgorithmTest__closure__5::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_test_AlgorithmTest__closure__5::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<x10_long> >, &org_scalegraph_test_AlgorithmTest__closure__5::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_test_AlgorithmTest__closure__5::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_test_AlgorithmTest__closure__5::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of AlgorithmTest */
/*************************************************/
