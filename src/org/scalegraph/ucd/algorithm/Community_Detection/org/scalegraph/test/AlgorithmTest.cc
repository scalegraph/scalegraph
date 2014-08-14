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
            x10_long tid90466 = ((x10_long) (idx90468));
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r90467 = i_range90472;
            
            //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_double> edgeMem_90465 =
              edgeMemory->org::scalegraph::util::DistMemoryChunk<x10_double>::__apply();
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i58822domain90460 = r90467;
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_long i58822min90461 = i58822domain90460->FMGL(min);
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_long i58822max90462 = i58822domain90460->FMGL(max);
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
            {
                x10_long i90463;
                for (
                     //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                     i90463 = i58822min90461; ((i90463) <= (i58822max90462));
                     
                     //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                     i90463 = ((x10_long) ((i90463) + (((x10_long)1ll)))))
                {
                    
                    //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long i90464 = i90463;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index90457 = i90464;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_double value90458 = value;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_double ret90459;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((edgeMem_90465->FMGL(data)).isValid())) {
                            
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
                        if (((index90457) < (((x10_long) (((x10_int)0))))) ||
                            ((index90457) >= (edgeMem_90465->FMGL(data)->
                                                FMGL(size)))) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index90457), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (edgeMem_90465->FMGL(data)).set(index90457, value90458);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret90459 = value90458;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret90459;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc139) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc139)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc139);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ = static_cast<x10::lang::CheckedThrowable*>(__exc139);
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
    x10_int idx90468;
    x10::lang::LongRange i_range90472;
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory;
    x10_double value;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx90468);
        buf.write(this->i_range90472);
        buf.write(this->edgeMemory);
        buf.write(this->value);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__3* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__3>();
        buf.record_reference(storage);
        x10_int that_idx90468 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range90472 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::DistMemoryChunk<x10_double> that_edgeMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_double> >();
        x10_double that_value = buf.read<x10_double>();
        org_scalegraph_test_AlgorithmTest__closure__3* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__3(that_idx90468, that_i_range90472, that_edgeMemory, that_value);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__3(x10_int idx90468, x10::lang::LongRange i_range90472, org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory, x10_double value) : idx90468(idx90468), i_range90472(i_range90472), edgeMemory(edgeMemory), value(value) { }
    
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
            x10::array::Array<x10_int>* this83944 = x10aux::nullCheck(team)->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret83945;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret83946; __ret83946: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this83944)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret83945 = (x10aux::nullCheck(this83944)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret83946_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this83944)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret83945 = (x10aux::nullCheck(this83944)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this83944)->
                                                                                                                  FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret83946_end_;
                }
                
            }goto __ret83946_end_; __ret83946_end_: ;
            }
            ret83945;
            }))
            ;
            
        
        //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange range90482 = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((x10::lang::Fun_0_0<x10_long>::__apply(x10aux::nullCheck(getSize))) - (((x10_long) (((x10_int)1)))))));
        
        //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long size90478 = ((x10_long) ((((x10_long) ((range90482->
                                                           FMGL(max)) - (range90482->
                                                                           FMGL(min))))) + (((x10_long) (((x10_int)1))))));
        
        //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int nthreads90479 = x10::lang::Runtime::FMGL(NTHREADS__get)();
        
        //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size90480 = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a90481 = ((x10_long) ((((x10_long) ((((x10_long) ((size90478) + (((x10_long) (nthreads90479)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads90479)))));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
            ;
            ((a90481) < (((x10_long)1ll))) ? (((x10_long)1ll))
              : (a90481);
        }))
        ;
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var2 = x10::lang::Runtime::startFinish();
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable90722 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i76030max90475 = ((x10_int) ((nthreads90479) - (((x10_int)1))));
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i90476;
                                for (
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i90476 = ((x10_int)0);
                                     ((i90476) <= (i76030max90475));
                                     
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i90476 = ((x10_int) ((i90476) + (((x10_int)1)))))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i90477 = i90476;
                                    
                                    //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int idx90468 = i90477;
                                    
                                    //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start90469 =
                                      (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a90470 =
                                          ((x10_long) ((range90482->
                                                          FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b90471 =
                                          ((x10_long) ((range90482->
                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i90477))) * (chunk_size90480))))));
                                        ((a90470) < (b90471))
                                          ? (a90470) : (b90471);
                                    }))
                                    ;
                                    
                                    //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range90472 =
                                      x10::lang::LongRange::_make(i_start90469, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a90473 =
                                          range90482->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b90474 =
                                          ((x10_long) ((((x10_long) ((i_start90469) + (chunk_size90480)))) - (((x10_long) (((x10_int)1))))));
                                        ((a90473) < (b90474))
                                          ? (a90473) : (b90474);
                                    }))
                                    );
                                    
                                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__3)))org_scalegraph_test_AlgorithmTest__closure__3(idx90468, i_range90472, edgeMemory, value))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc140) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc140);
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
                catch (x10::lang::CheckedThrowable* __exc141) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal90723 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc141);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable90722 = formal90723;
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable90722)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable90722))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable90722));
                    }
                    
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var2);
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable90722)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable90722)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable90722));
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
            org::scalegraph::util::MemoryChunk<x10_long> this85848 = srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            this85848->FMGL(data)->FMGL(size);
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
            org::scalegraph::util::MemoryChunk<x10_long> this85849 = srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            this85849->FMGL(data)->FMGL(size);
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
            x10::lang::String* ret83986;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret83987; __ret83987: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(args)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret83986 = (x10aux::nullCheck(args)->
                                  FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret83987_end_;
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
                    ret83986 = (x10aux::nullCheck(args)->
                                  FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(args)->
                                                                                      FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret83987_end_;
                }
                
            }goto __ret83987_end_; __ret83987_end_: ;
            }
            ret83986;
            }))
            ,reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("rmat"))))
        {
            
            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_int scale = x10::lang::IntNatives::parseInt((__extension__ ({
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10::lang::String* ret83989;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret83990; __ret83990: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(args)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret83989 = (x10aux::nullCheck(args)->
                                      FMGL(raw))->__apply(((x10_int)1));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret83990_end_;
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
                        ret83989 = (x10aux::nullCheck(args)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(args)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret83990_end_;
                    }
                    
                }goto __ret83990_end_; __ret83990_end_: ;
                }
                ret83989;
                }))
                );
                
            
            //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_int edgefactor = ((x10aux::nullCheck(args)->
                                     FMGL(size)) > (((x10_int)2)))
              ? (x10::lang::IntNatives::parseInt((__extension__ ({
                     
                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                     ;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     x10::lang::String* ret83992;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                     goto __ret83993; __ret83993: {
                     {
                         
                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                         if (x10aux::nullCheck(args)->FMGL(rail))
                         {
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret83992 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int)2));
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret83993_end_;
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
                             ret83992 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)2)) - (x10aux::nullCheck(args)->
                                                                                               FMGL(layout_min0)))));
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret83993_end_;
                         }
                         
                     }goto __ret83993_end_; __ret83993_end_: ;
                     }
                     ret83992;
                     }))
                     )) : (((x10_int)16));
                 
            
            //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_double A = ((x10aux::nullCheck(args)->FMGL(size)) > (((x10_int)3)))
              ? (x10::lang::DoubleNatives::parseDouble((__extension__ ({
                     
                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                     ;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     x10::lang::String* ret83995;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                     goto __ret83996; __ret83996: {
                     {
                         
                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                         if (x10aux::nullCheck(args)->FMGL(rail))
                         {
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret83995 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int)3));
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret83996_end_;
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
                             ret83995 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)3)) - (x10aux::nullCheck(args)->
                                                                                               FMGL(layout_min0)))));
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret83996_end_;
                         }
                         
                     }goto __ret83996_end_; __ret83996_end_: ;
                     }
                     ret83995;
                     }))
                     )) : (0.45);
                 
            
            //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_double B = ((x10aux::nullCheck(args)->FMGL(size)) > (((x10_int)4)))
              ? (x10::lang::DoubleNatives::parseDouble((__extension__ ({
                     
                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                     ;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     x10::lang::String* ret83998;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                     goto __ret83999; __ret83999: {
                     {
                         
                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                         if (x10aux::nullCheck(args)->FMGL(rail))
                         {
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret83998 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int)4));
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret83999_end_;
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
                             ret83998 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)4)) - (x10aux::nullCheck(args)->
                                                                                               FMGL(layout_min0)))));
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret83999_end_;
                         }
                         
                     }goto __ret83999_end_; __ret83999_end_: ;
                     }
                     ret83998;
                     }))
                     )) : (0.15);
                 
            
            //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_double C = ((x10aux::nullCheck(args)->FMGL(size)) > (((x10_int)5)))
              ? (x10::lang::DoubleNatives::parseDouble((__extension__ ({
                     
                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                     ;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     x10::lang::String* ret84001;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                     goto __ret84002; __ret84002: {
                     {
                         
                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                         if (x10aux::nullCheck(args)->FMGL(rail))
                         {
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret84001 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int)5));
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret84002_end_;
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
                             ret84001 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)5)) - (x10aux::nullCheck(args)->
                                                                                               FMGL(layout_min0)))));
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret84002_end_;
                         }
                         
                     }goto __ret84002_end_; __ret84002_end_: ;
                     }
                     ret84001;
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
                x10_int scale85275 = scale;
                
                //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_int edgefactor85276 = edgefactor;
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_double A85277 = A;
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_double B85278 = B;
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_double C85279 = C;
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::random::Random* rnd85280 =
                  rnd;
                org::scalegraph::graph::GraphGenerator::genRMAT(
                  scale85275, edgefactor85276, A85277, B85278,
                  C85279, rnd85280, true);
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
                    x10::lang::String* ret85497;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret85498; __ret85498: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(args)->FMGL(rail))
                        {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret85497 = (x10aux::nullCheck(args)->
                                          FMGL(raw))->__apply(((x10_int)0));
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret85498_end_;
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
                            ret85497 = (x10aux::nullCheck(args)->
                                          FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(args)->
                                                                                              FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret85498_end_;
                        }
                        
                    }goto __ret85498_end_; __ret85498_end_: ;
                    }
                    ret85497;
                    }))
                    ,reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("random"))))
                {
                    
                    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_int scale = x10::lang::IntNatives::parseInt((__extension__ ({
                        
                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10::lang::String* ret85500;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                        goto __ret85501; __ret85501: {
                        {
                            
                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (x10aux::nullCheck(args)->
                                  FMGL(rail)) {
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret85500 = (x10aux::nullCheck(args)->
                                              FMGL(raw))->__apply(((x10_int)1));
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret85501_end_;
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
                                ret85500 = (x10aux::nullCheck(args)->
                                              FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(args)->
                                                                                                  FMGL(layout_min0)))));
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret85501_end_;
                            }
                            
                        }goto __ret85501_end_; __ret85501_end_: ;
                        }
                        ret85500;
                        }))
                        );
                        
                    
                    //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_int edgefactor = ((x10aux::nullCheck(args)->
                                             FMGL(size)) > (((x10_int)2)))
                      ? (x10::lang::IntNatives::parseInt((__extension__ ({
                             
                             //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                             ;
                             
                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                             x10::lang::String* ret85503;
                             
                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                             goto __ret85504; __ret85504: {
                             {
                                 
                                 //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                 if (x10aux::nullCheck(args)->
                                       FMGL(rail)) {
                                     
                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                     ret85503 = (x10aux::nullCheck(args)->
                                                   FMGL(raw))->__apply(((x10_int)2));
                                     
                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                     goto __ret85504_end_;
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
                                     ret85503 = (x10aux::nullCheck(args)->
                                                   FMGL(raw))->__apply(((x10_int) ((((x10_int)2)) - (x10aux::nullCheck(args)->
                                                                                                       FMGL(layout_min0)))));
                                     
                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                     goto __ret85504_end_;
                                 }
                                 
                             }goto __ret85504_end_; __ret85504_end_: ;
                             }
                             ret85503;
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
                            x10::lang::String* ret85506;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret85507; __ret85507: {
                            {
                                
                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(args)->
                                      FMGL(rail)) {
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret85506 = (x10aux::nullCheck(args)->
                                                  FMGL(raw))->__apply(((x10_int)0));
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret85507_end_;
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
                                    ret85506 = (x10aux::nullCheck(args)->
                                                  FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(args)->
                                                                                                      FMGL(layout_min0)))));
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret85507_end_;
                                }
                                
                            }goto __ret85507_end_; __ret85507_end_: ;
                            }
                            ret85506;
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
                                     x10::lang::String* ret85509;
                                     
                                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                     goto __ret85510; __ret85510: {
                                     {
                                         
                                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                         if (x10aux::nullCheck(args)->
                                               FMGL(rail))
                                         {
                                             
                                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret85509 = (x10aux::nullCheck(args)->
                                                           FMGL(raw))->__apply(((x10_int)2));
                                             
                                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                             goto __ret85510_end_;
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
                                             ret85509 = (x10aux::nullCheck(args)->
                                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)2)) - (x10aux::nullCheck(args)->
                                                                                                               FMGL(layout_min0)))));
                                             
                                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                             goto __ret85510_end_;
                                         }
                                         
                                     }goto __ret85510_end_; __ret85510_end_: ;
                                     }
                                     ret85509;
                                     }))
                                     ,reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("random"))))
                                   : (true);
                                 
                            
                            //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                            x10_double edgeConstVal = randomEdge
                              ? (0.0) : (x10::lang::DoubleNatives::parseDouble((__extension__ ({
                                             
                                             //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                             ;
                                             
                                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                             x10::lang::String* ret85512;
                                             
                                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                             goto __ret85513; __ret85513: {
                                             {
                                                 
                                                 //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                 if (x10aux::nullCheck(args)->
                                                       FMGL(rail))
                                                 {
                                                     
                                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                     ret85512 =
                                                       (x10aux::nullCheck(args)->
                                                          FMGL(raw))->__apply(((x10_int)2));
                                                     
                                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                     goto __ret85513_end_;
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
                                                     ret85512 =
                                                       (x10aux::nullCheck(args)->
                                                          FMGL(raw))->__apply(((x10_int) ((((x10_int)2)) - (x10aux::nullCheck(args)->
                                                                                                              FMGL(layout_min0)))));
                                                     
                                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                     goto __ret85513_end_;
                                                 }
                                                 
                                             }goto __ret85513_end_; __ret85513_end_: ;
                                             }
                                             ret85512;
                                             }))
                                             ));
                                         
                            
                            //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                            x10::array::Array<x10_int>* colTypes =
                              (x10::array::Array<x10_int>*)(__extension__ ({
                                x10::array::Array<x10_int>* __var143__(x10::array::Array<x10_int>::_make(2));
                                __var143__->__set(0, 
                                (((x10_int)5)));
                                __var143__->__set(1, 
                                (((x10_int)5)));
                                __var143__;
                            }));
                            
                            //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::util::StopWatch* sw =
                              x10aux::nullCheck(org::scalegraph::Config::get())->stopWatch();
                            
                            //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::graph::Graph* g =
                              (__extension__ ({
                                
                                //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/Graph.x10": x10.ast.X10LocalDecl_c
                                org::scalegraph::io::NamedDistData* edgeData85844 =
                                  org::scalegraph::io::CSV::read(
                                    (__extension__ ({
                                        
                                        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::String* str85840 =
                                          (__extension__ ({
                                            
                                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                            ;
                                            
                                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                            x10::lang::String* ret85515;
                                            
                                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                            goto __ret85516; __ret85516: {
                                            {
                                                
                                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                if (x10aux::nullCheck(args)->
                                                      FMGL(rail))
                                                {
                                                    
                                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                    ret85515 =
                                                      (x10aux::nullCheck(args)->
                                                         FMGL(raw))->__apply(((x10_int)1));
                                                    
                                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                    goto __ret85516_end_;
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
                                                    ret85515 =
                                                      (x10aux::nullCheck(args)->
                                                         FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(args)->
                                                                                                             FMGL(layout_min0)))));
                                                    
                                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                    goto __ret85516_end_;
                                                }
                                                
                                            }goto __ret85516_end_; __ret85516_end_: ;
                                            }
                                            ret85515;
                                            }))
                                            ;
                                            
                                        (__extension__ ({
                                            
                                            //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                            org::scalegraph::util::SString alloc85841 =
                                               org::scalegraph::util::SString::_alloc();
                                            
                                            //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                            x10::lang::String* str90483 =
                                              str85840;
                                            
                                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                            alloc85841->FMGL(content) =
                                              org::scalegraph::util::StringFromX10String(str90483);
                                            alloc85841;
                                        }))
                                        ;
                                        }))
                                        , colTypes, true);
                                  
                                org::scalegraph::graph::Graph::make(
                                  edgeData85844, x10aux::class_cast_unchecked<org::scalegraph::io::NamedDistData*>(X10_NULL),
                                  false);
                                }))
                                ;
                                
                            
                            //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                              x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Read graph[path="), (__extension__ ({
                                  
                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                  ;
                                  
                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                  x10::lang::String* ret85846;
                                  
                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                  goto __ret85847; __ret85847: {
                                  {
                                      
                                      //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                      if (x10aux::nullCheck(args)->
                                            FMGL(rail)) {
                                          
                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                          ret85846 = (x10aux::nullCheck(args)->
                                                        FMGL(raw))->__apply(((x10_int)1));
                                          
                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                          goto __ret85847_end_;
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
                                          ret85846 = (x10aux::nullCheck(args)->
                                                        FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(args)->
                                                                                                            FMGL(layout_min0)))));
                                          
                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                          goto __ret85847_end_;
                                      }
                                      
                                  }goto __ret85847_end_; __ret85847_end_: ;
                                  }
                                  ret85846;
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
                                                  org::scalegraph::util::random::Random* alloc58816 =
                                                     ((new (memset(x10aux::alloc<org::scalegraph::util::random::Random>(), 0, sizeof(org::scalegraph::util::random::Random))) org::scalegraph::util::random::Random()))
                                                  ;
                                                  
                                                  //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10ConstructorCall_c
                                                  (alloc58816)->::org::scalegraph::util::random::Random::_constructor(
                                                    ((x10_long) (((x10_int)2))),
                                                    ((x10_long) (((x10_int)3))));
                                                  alloc58816;
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
                                                                                                                        x10::lang::String* ret85851;
                                                                                                                        
                                                                                                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                                                                        goto __ret85852; __ret85852: {
                                                                                                                        {
                                                                                                                            
                                                                                                                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                                                                            if (x10aux::nullCheck(args)->
                                                                                                                                  FMGL(rail))
                                                                                                                            {
                                                                                                                                
                                                                                                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                                ret85851 =
                                                                                                                                  (x10aux::nullCheck(args)->
                                                                                                                                     FMGL(raw))->__apply(((x10_int)0));
                                                                                                                                
                                                                                                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                                                                goto __ret85852_end_;
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
                                                                                                                                ret85851 =
                                                                                                                                  (x10aux::nullCheck(args)->
                                                                                                                                     FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(args)->
                                                                                                                                                                                         FMGL(layout_min0)))));
                                                                                                                                
                                                                                                                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                                                                goto __ret85852_end_;
                                                                                                                            }
                                                                                                                            
                                                                                                                        }goto __ret85852_end_; __ret85852_end_: ;
                                                                                                                        }
                                                                                                                        ret85851;
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
                                    x10::lang::Iterator<x10::array::Point*>* id58841;
                                    for (
                                         //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                         id58841 = x10aux::nullCheck(args)->
                                                     FMGL(region)->iterator();
                                         x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id58841));
                                         ) {
                                        
                                        //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                        x10::array::Point* id16 =
                                          x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id58841));
                                        
                                        //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                        x10_int s = x10aux::nullCheck(id16)->x10::array::Point::__apply(
                                                      ((x10_int)0));
                                        
                                        //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                                        if (x10aux::equals((__extension__ ({
                                                
                                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int i87567 =
                                                  s;
                                                
                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10::lang::String* ret87568;
                                                
                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                goto __ret87569; __ret87569: {
                                                {
                                                    
                                                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                    if (x10aux::nullCheck(args)->
                                                          FMGL(rail))
                                                    {
                                                        
                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret87568 =
                                                          (x10aux::nullCheck(args)->
                                                             FMGL(raw))->__apply(i87567);
                                                        
                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                        goto __ret87569_end_;
                                                    } else
                                                    {
                                                        
                                                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                        if (true &&
                                                            !(x10aux::nullCheck(args)->
                                                                FMGL(region)->contains(
                                                                i87567)))
                                                        {
                                                            
                                                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                            x10::array::Array<void>::raiseBoundsError(
                                                              i87567);
                                                        }
                                                        
                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret87568 =
                                                          (x10aux::nullCheck(args)->
                                                             FMGL(raw))->__apply(((x10_int) ((i87567) - (x10aux::nullCheck(args)->
                                                                                                           FMGL(layout_min0)))));
                                                        
                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                        goto __ret87569_end_;
                                                    }
                                                    
                                                }goto __ret87569_end_; __ret87569_end_: ;
                                                }
                                                ret87568;
                                                }))
                                                ,reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("-"))))
                                            {
                                                
                                                //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                x10::array::Array<x10::lang::String*>* args1 =
                                                   ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::String*> >(), 0, sizeof(x10::array::Array<x10::lang::String*>))) x10::array::Array<x10::lang::String*>()))
                                                ;
                                                
                                                //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int size90502 =
                                                  s;
                                                
                                                //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10::array::RectRegion1D* myReg90491 =
                                                   ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
                                                ;
                                                
                                                //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
                                                (myReg90491)->::x10::array::RectRegion1D::_constructor(
                                                  ((x10_int) ((size90502) - (((x10_int)1)))));
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args1->FMGL(region) =
                                                  reinterpret_cast<x10::array::Region*>(myReg90491);
                                                
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
                                                  size90502;
                                                
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
                                                x10::util::IndexedMemoryChunk<x10::lang::String* > r90492 =
                                                  x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::String* >(size90502, 8, false, false);
                                                
                                                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int i70709max90488 =
                                                  ((x10_int) ((size90502) - (((x10_int)1))));
                                                
                                                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
                                                {
                                                    x10_int i90489;
                                                    for (
                                                         //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                         i90489 =
                                                           ((x10_int)0);
                                                         ((i90489) <= (i70709max90488));
                                                         
                                                         //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                         i90489 =
                                                           ((x10_int) ((i90489) + (((x10_int)1)))))
                                                    {
                                                        
                                                        //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10_int i90490 =
                                                          i90489;
                                                        
                                                        //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                        (r90492)->__set(i90490, (__extension__ ({
                                                            
                                                            //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                            x10_int i90484 =
                                                              i90490;
                                                            (__extension__ ({
                                                                
                                                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                x10_int i90485 =
                                                                  i90484;
                                                                
                                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                x10::lang::String* ret90486;
                                                                
                                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                goto __ret90487; __ret90487: {
                                                                {
                                                                    
                                                                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                    if (x10aux::nullCheck(args)->
                                                                          FMGL(rail))
                                                                    {
                                                                        
                                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret90486 =
                                                                          (x10aux::nullCheck(args)->
                                                                             FMGL(raw))->__apply(i90485);
                                                                        
                                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                        goto __ret90487_end_;
                                                                    }
                                                                    else
                                                                    {
                                                                        
                                                                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                        if (true &&
                                                                            !(x10aux::nullCheck(args)->
                                                                                FMGL(region)->contains(
                                                                                i90485)))
                                                                        {
                                                                            
                                                                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                            x10::array::Array<void>::raiseBoundsError(
                                                                              i90485);
                                                                        }
                                                                        
                                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret90486 =
                                                                          (x10aux::nullCheck(args)->
                                                                             FMGL(raw))->__apply(((x10_int) ((i90485) - (x10aux::nullCheck(args)->
                                                                                                                           FMGL(layout_min0)))));
                                                                        
                                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                        goto __ret90487_end_;
                                                                    }
                                                                    
                                                                }goto __ret90487_end_; __ret90487_end_: ;
                                                                }
                                                                ret90486;
                                                                }))
                                                                ;
                                                            }))
                                                            );
                                                        }
                                                    }
                                                    
                                                
                                                //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args1->FMGL(raw) =
                                                  r90492;
                                                
                                                //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                x10::array::Array<x10::lang::String*>* args2 =
                                                   ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::String*> >(), 0, sizeof(x10::array::Array<x10::lang::String*>))) x10::array::Array<x10::lang::String*>()))
                                                ;
                                                
                                                //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int size90503 =
                                                  ((x10_int) ((((x10_int) ((x10aux::nullCheck(args)->
                                                                              FMGL(size)) - (s)))) - (((x10_int)1))));
                                                
                                                //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10::array::RectRegion1D* myReg90500 =
                                                   ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
                                                ;
                                                
                                                //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
                                                (myReg90500)->::x10::array::RectRegion1D::_constructor(
                                                  ((x10_int) ((size90503) - (((x10_int)1)))));
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args2->FMGL(region) =
                                                  reinterpret_cast<x10::array::Region*>(myReg90500);
                                                
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
                                                  size90503;
                                                
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
                                                x10::util::IndexedMemoryChunk<x10::lang::String* > r90501 =
                                                  x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::String* >(size90503, 8, false, false);
                                                
                                                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int i70709max90497 =
                                                  ((x10_int) ((size90503) - (((x10_int)1))));
                                                
                                                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
                                                {
                                                    x10_int i90498;
                                                    for (
                                                         //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                         i90498 =
                                                           ((x10_int)0);
                                                         ((i90498) <= (i70709max90497));
                                                         
                                                         //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                         i90498 =
                                                           ((x10_int) ((i90498) + (((x10_int)1)))))
                                                    {
                                                        
                                                        //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10_int i90499 =
                                                          i90498;
                                                        
                                                        //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                        (r90501)->__set(i90499, (__extension__ ({
                                                            
                                                            //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                            x10_int i90493 =
                                                              i90499;
                                                            (__extension__ ({
                                                                
                                                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                x10_int i90494 =
                                                                  ((x10_int) ((((x10_int) ((s) + (((x10_int)1))))) + (i90493)));
                                                                
                                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                x10::lang::String* ret90495;
                                                                
                                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                goto __ret90496; __ret90496: {
                                                                {
                                                                    
                                                                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                    if (x10aux::nullCheck(args)->
                                                                          FMGL(rail))
                                                                    {
                                                                        
                                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret90495 =
                                                                          (x10aux::nullCheck(args)->
                                                                             FMGL(raw))->__apply(i90494);
                                                                        
                                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                        goto __ret90496_end_;
                                                                    }
                                                                    else
                                                                    {
                                                                        
                                                                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                        if (true &&
                                                                            !(x10aux::nullCheck(args)->
                                                                                FMGL(region)->contains(
                                                                                i90494)))
                                                                        {
                                                                            
                                                                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                            x10::array::Array<void>::raiseBoundsError(
                                                                              i90494);
                                                                        }
                                                                        
                                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret90495 =
                                                                          (x10aux::nullCheck(args)->
                                                                             FMGL(raw))->__apply(((x10_int) ((i90494) - (x10aux::nullCheck(args)->
                                                                                                                           FMGL(layout_min0)))));
                                                                        
                                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                        goto __ret90496_end_;
                                                                    }
                                                                    
                                                                }goto __ret90496_end_; __ret90496_end_: ;
                                                                }
                                                                ret90495;
                                                                }))
                                                                ;
                                                            }))
                                                            );
                                                        }
                                                    }
                                                    
                                                
                                                //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args2->FMGL(raw) =
                                                  r90501;
                                                
                                                //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10Return_c
                                                return (x10::array::Array<x10::array::Array<x10::lang::String*>*>*)(__extension__ ({
                                                    x10::array::Array<x10::array::Array<x10::lang::String*>*>* __var145__(x10::array::Array<x10::array::Array<x10::lang::String*>*>::_make(2));
                                                    __var145__->__set(0, 
                                                    (args1));
                                                    __var145__->__set(1, 
                                                    (args2));
                                                    __var145__;
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
                                    x10::array::Array<x10::array::Array<x10::lang::String*>*>* id17 =
                                      org::scalegraph::test::AlgorithmTest::splitArgs(
                                        args);
                                    
                                    //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                    x10::array::Array<x10::lang::String*>* graphArgs =
                                      (__extension__ ({
                                        
                                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                        ;
                                        
                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10::array::Array<x10::lang::String*>* ret87607;
                                        
                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret87607 = (x10aux::nullCheck(id17)->
                                                      FMGL(raw))->__apply(((x10_int)0));
                                        ret87607;
                                    }))
                                    ;
                                    
                                    //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                    x10::array::Array<x10::lang::String*>* mainArgs =
                                      (__extension__ ({
                                        
                                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                        ;
                                        
                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10::array::Array<x10::lang::String*>* ret87610;
                                        
                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret87610 = (x10aux::nullCheck(id17)->
                                                      FMGL(raw))->__apply(((x10_int)1));
                                        ret87610;
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
                                            org::scalegraph::graph::EdgeList<x10_long> alloc58820 =
                                               org::scalegraph::graph::EdgeList<x10_long>::_alloc();
                                            
                                            //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                            org::scalegraph::util::DistMemoryChunk<x10_long> src90702 =
                                              source;
                                            
                                            //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                            org::scalegraph::util::DistMemoryChunk<x10_long> dst90703 =
                                              target;
                                            
                                            //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                            alloc58820->FMGL(src) =
                                              src90702;
                                            
                                            //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                            alloc58820->FMGL(dst) =
                                              dst90703;
                                            alloc58820;
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
                                        org::scalegraph::io::NamedDistData* edgeData90454 =
                                          org::scalegraph::io::CSV::read(
                                            (__extension__ ({
                                                
                                                //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                x10::lang::String* str90450 =
                                                  reference;
                                                (__extension__ ({
                                                    
                                                    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                    org::scalegraph::util::SString alloc90451 =
                                                       org::scalegraph::util::SString::_alloc();
                                                    
                                                    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                    x10::lang::String* str90704 =
                                                      str90450;
                                                    
                                                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                                    alloc90451->
                                                      FMGL(content) =
                                                      org::scalegraph::util::StringFromX10String(str90704);
                                                    alloc90451;
                                                }))
                                                ;
                                            }))
                                            , (x10::array::Array<x10_int>*)(__extension__ ({
                                                x10::array::Array<x10_int>* __var164__(x10::array::Array<x10_int>::_make(3));
                                                __var164__->__set(0, 
                                                (((x10_int)5)));
                                                __var164__->__set(1, 
                                                (((x10_int)5)));
                                                __var164__->__set(2, 
                                                (((x10_int)7)));
                                                __var164__;
                                            })), (x10::array::Array<x10::lang::String*>*)(__extension__ ({
                                                x10::array::Array<x10::lang::String*>* __var165__(x10::array::Array<x10::lang::String*>::_make(3));
                                                __var165__->__set(0, 
                                                (x10aux::makeStringLit("source")));
                                                __var165__->__set(1, 
                                                (x10aux::makeStringLit("target")));
                                                __var165__->__set(2, 
                                                (x10aux::makeStringLit("weight")));
                                                __var165__;
                                            })));
                                        org::scalegraph::graph::Graph::make(
                                          edgeData90454, x10aux::class_cast_unchecked<org::scalegraph::io::NamedDistData*>(X10_NULL),
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
                                    org::scalegraph::test::STest* this90705 =
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
