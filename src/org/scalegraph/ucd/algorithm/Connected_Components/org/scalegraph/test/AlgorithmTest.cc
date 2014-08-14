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
            x10_long tid87950 = ((x10_long) (idx87952));
            
            //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r87951 = i_range87956;
            
            //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_double> edgeMem_87949 =
              edgeMemory->org::scalegraph::util::DistMemoryChunk<x10_double>::__apply();
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i55648domain87944 = r87951;
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_long i55648min87945 = i55648domain87944->FMGL(min);
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_long i55648max87946 = i55648domain87944->FMGL(max);
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": polyglot.ast.For_c
            {
                x10_long i87947;
                for (
                     //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                     i87947 = i55648min87945; ((i87947) <= (i55648max87946));
                     
                     //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10LocalAssign_c
                     i87947 = ((x10_long) ((i87947) + (((x10_long)1ll)))))
                {
                    
                    //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_long i87948 = i87947;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index87941 = i87948;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_double value87942 = value;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_double ret87943;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((edgeMem_87949->FMGL(data)).isValid())) {
                            
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
                        if (((index87941) < (((x10_long) (((x10_int)0))))) ||
                            ((index87941) >= (edgeMem_87949->FMGL(data)->
                                                FMGL(size)))) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index87941), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (edgeMem_87949->FMGL(data)).set(index87941, value87942);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret87943 = value87942;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret87943;
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
    x10_int idx87952;
    x10::lang::LongRange i_range87956;
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory;
    x10_double value;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx87952);
        buf.write(this->i_range87956);
        buf.write(this->edgeMemory);
        buf.write(this->value);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_test_AlgorithmTest__closure__3* storage = x10aux::alloc<org_scalegraph_test_AlgorithmTest__closure__3>();
        buf.record_reference(storage);
        x10_int that_idx87952 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range87956 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::DistMemoryChunk<x10_double> that_edgeMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_double> >();
        x10_double that_value = buf.read<x10_double>();
        org_scalegraph_test_AlgorithmTest__closure__3* this_ = new (storage) org_scalegraph_test_AlgorithmTest__closure__3(that_idx87952, that_i_range87956, that_edgeMemory, that_value);
        return this_;
    }
    
    org_scalegraph_test_AlgorithmTest__closure__3(x10_int idx87952, x10::lang::LongRange i_range87956, org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory, x10_double value) : idx87952(idx87952), i_range87956(i_range87956), edgeMemory(edgeMemory), value(value) { }
    
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
            x10::array::Array<x10_int>* this81821 = x10aux::nullCheck(team)->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret81822;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret81823; __ret81823: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this81821)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret81822 = (x10aux::nullCheck(this81821)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret81823_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this81821)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret81822 = (x10aux::nullCheck(this81821)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this81821)->
                                                                                                                  FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret81823_end_;
                }
                
            }goto __ret81823_end_; __ret81823_end_: ;
            }
            ret81822;
            }))
            ;
            
        
        //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange range87966 = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((x10::lang::Fun_0_0<x10_long>::__apply(x10aux::nullCheck(getSize))) - (((x10_long) (((x10_int)1)))))));
        
        //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long size87962 = ((x10_long) ((((x10_long) ((range87966->
                                                           FMGL(max)) - (range87966->
                                                                           FMGL(min))))) + (((x10_long) (((x10_int)1))))));
        
        //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int nthreads87963 = x10::lang::Runtime::FMGL(NTHREADS__get)();
        
        //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size87964 = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a87965 = ((x10_long) ((((x10_long) ((((x10_long) ((size87962) + (((x10_long) (nthreads87963)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads87963)))));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
            ;
            ((a87965) < (((x10_long)1ll))) ? (((x10_long)1ll))
              : (a87965);
        }))
        ;
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var2 = x10::lang::Runtime::startFinish();
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable88206 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i72665max87959 = ((x10_int) ((nthreads87963) - (((x10_int)1))));
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i87960;
                                for (
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i87960 = ((x10_int)0);
                                     ((i87960) <= (i72665max87959));
                                     
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i87960 = ((x10_int) ((i87960) + (((x10_int)1)))))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i87961 = i87960;
                                    
                                    //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int idx87952 = i87961;
                                    
                                    //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start87953 =
                                      (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a87954 =
                                          ((x10_long) ((range87966->
                                                          FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b87955 =
                                          ((x10_long) ((range87966->
                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i87961))) * (chunk_size87964))))));
                                        ((a87954) < (b87955))
                                          ? (a87954) : (b87955);
                                    }))
                                    ;
                                    
                                    //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range87956 =
                                      x10::lang::LongRange::_make(i_start87953, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a87957 =
                                          range87966->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b87958 =
                                          ((x10_long) ((((x10_long) ((i_start87953) + (chunk_size87964)))) - (((x10_long) (((x10_int)1))))));
                                        ((a87957) < (b87958))
                                          ? (a87957) : (b87958);
                                    }))
                                    );
                                    
                                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_test_AlgorithmTest__closure__3)))org_scalegraph_test_AlgorithmTest__closure__3(idx87952, i_range87956, edgeMemory, value))));
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
                        x10::lang::CheckedThrowable* formal88207 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc141);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable88206 = formal88207;
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable88206)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable88206))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable88206));
                    }
                    
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var2);
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable88206)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable88206)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable88206));
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
            org::scalegraph::util::MemoryChunk<x10_long> this83510 = srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            this83510->FMGL(data)->FMGL(size);
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
            org::scalegraph::util::MemoryChunk<x10_long> this83511 = srcList->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            this83511->FMGL(data)->FMGL(size);
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
            x10::lang::String* ret81863;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret81864; __ret81864: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(args)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret81863 = (x10aux::nullCheck(args)->
                                  FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret81864_end_;
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
                    ret81863 = (x10aux::nullCheck(args)->
                                  FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(args)->
                                                                                      FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret81864_end_;
                }
                
            }goto __ret81864_end_; __ret81864_end_: ;
            }
            ret81863;
            }))
            ,reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("rmat"))))
        {
            
            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_int scale = x10::lang::IntNatives::parseInt((__extension__ ({
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10::lang::String* ret81866;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret81867; __ret81867: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(args)->FMGL(rail))
                    {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret81866 = (x10aux::nullCheck(args)->
                                      FMGL(raw))->__apply(((x10_int)1));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret81867_end_;
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
                        ret81866 = (x10aux::nullCheck(args)->
                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(args)->
                                                                                          FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret81867_end_;
                    }
                    
                }goto __ret81867_end_; __ret81867_end_: ;
                }
                ret81866;
                }))
                );
                
            
            //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_int edgefactor = ((x10aux::nullCheck(args)->
                                     FMGL(size)) > (((x10_int)2)))
              ? (x10::lang::IntNatives::parseInt((__extension__ ({
                     
                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                     ;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     x10::lang::String* ret81869;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                     goto __ret81870; __ret81870: {
                     {
                         
                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                         if (x10aux::nullCheck(args)->FMGL(rail))
                         {
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret81869 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int)2));
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret81870_end_;
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
                             ret81869 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)2)) - (x10aux::nullCheck(args)->
                                                                                               FMGL(layout_min0)))));
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret81870_end_;
                         }
                         
                     }goto __ret81870_end_; __ret81870_end_: ;
                     }
                     ret81869;
                     }))
                     )) : (((x10_int)16));
                 
            
            //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_double A = ((x10aux::nullCheck(args)->FMGL(size)) > (((x10_int)3)))
              ? (x10::lang::DoubleNatives::parseDouble((__extension__ ({
                     
                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                     ;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     x10::lang::String* ret81872;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                     goto __ret81873; __ret81873: {
                     {
                         
                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                         if (x10aux::nullCheck(args)->FMGL(rail))
                         {
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret81872 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int)3));
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret81873_end_;
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
                             ret81872 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)3)) - (x10aux::nullCheck(args)->
                                                                                               FMGL(layout_min0)))));
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret81873_end_;
                         }
                         
                     }goto __ret81873_end_; __ret81873_end_: ;
                     }
                     ret81872;
                     }))
                     )) : (0.45);
                 
            
            //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_double B = ((x10aux::nullCheck(args)->FMGL(size)) > (((x10_int)4)))
              ? (x10::lang::DoubleNatives::parseDouble((__extension__ ({
                     
                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                     ;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     x10::lang::String* ret81875;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                     goto __ret81876; __ret81876: {
                     {
                         
                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                         if (x10aux::nullCheck(args)->FMGL(rail))
                         {
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret81875 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int)4));
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret81876_end_;
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
                             ret81875 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)4)) - (x10aux::nullCheck(args)->
                                                                                               FMGL(layout_min0)))));
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret81876_end_;
                         }
                         
                     }goto __ret81876_end_; __ret81876_end_: ;
                     }
                     ret81875;
                     }))
                     )) : (0.15);
                 
            
            //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
            x10_double C = ((x10aux::nullCheck(args)->FMGL(size)) > (((x10_int)5)))
              ? (x10::lang::DoubleNatives::parseDouble((__extension__ ({
                     
                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                     ;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     x10::lang::String* ret81878;
                     
                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                     goto __ret81879; __ret81879: {
                     {
                         
                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                         if (x10aux::nullCheck(args)->FMGL(rail))
                         {
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret81878 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int)5));
                             
                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret81879_end_;
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
                             ret81878 = (x10aux::nullCheck(args)->
                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)5)) - (x10aux::nullCheck(args)->
                                                                                               FMGL(layout_min0)))));
                             
                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                             goto __ret81879_end_;
                         }
                         
                     }goto __ret81879_end_; __ret81879_end_: ;
                     }
                     ret81878;
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
                x10_int scale83152 = scale;
                
                //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_int edgefactor83153 = edgefactor;
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_double A83154 = A;
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_double B83155 = B;
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_double C83156 = C;
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::random::Random* rnd83157 =
                  rnd;
                org::scalegraph::graph::GraphGenerator::genRMAT(
                  scale83152, edgefactor83153, A83154, B83155,
                  C83156, rnd83157, true);
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
                    x10::lang::String* ret83159;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret83160; __ret83160: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(args)->FMGL(rail))
                        {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret83159 = (x10aux::nullCheck(args)->
                                          FMGL(raw))->__apply(((x10_int)0));
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret83160_end_;
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
                            ret83159 = (x10aux::nullCheck(args)->
                                          FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(args)->
                                                                                              FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret83160_end_;
                        }
                        
                    }goto __ret83160_end_; __ret83160_end_: ;
                    }
                    ret83159;
                    }))
                    ,reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("random"))))
                {
                    
                    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_int scale = x10::lang::IntNatives::parseInt((__extension__ ({
                        
                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                        ;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10::lang::String* ret83162;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                        goto __ret83163; __ret83163: {
                        {
                            
                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (x10aux::nullCheck(args)->
                                  FMGL(rail)) {
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret83162 = (x10aux::nullCheck(args)->
                                              FMGL(raw))->__apply(((x10_int)1));
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret83163_end_;
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
                                ret83162 = (x10aux::nullCheck(args)->
                                              FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(args)->
                                                                                                  FMGL(layout_min0)))));
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret83163_end_;
                            }
                            
                        }goto __ret83163_end_; __ret83163_end_: ;
                        }
                        ret83162;
                        }))
                        );
                        
                    
                    //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                    x10_int edgefactor = ((x10aux::nullCheck(args)->
                                             FMGL(size)) > (((x10_int)2)))
                      ? (x10::lang::IntNatives::parseInt((__extension__ ({
                             
                             //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                             ;
                             
                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                             x10::lang::String* ret83165;
                             
                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                             goto __ret83166; __ret83166: {
                             {
                                 
                                 //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                 if (x10aux::nullCheck(args)->
                                       FMGL(rail)) {
                                     
                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                     ret83165 = (x10aux::nullCheck(args)->
                                                   FMGL(raw))->__apply(((x10_int)2));
                                     
                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                     goto __ret83166_end_;
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
                                     ret83165 = (x10aux::nullCheck(args)->
                                                   FMGL(raw))->__apply(((x10_int) ((((x10_int)2)) - (x10aux::nullCheck(args)->
                                                                                                       FMGL(layout_min0)))));
                                     
                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                     goto __ret83166_end_;
                                 }
                                 
                             }goto __ret83166_end_; __ret83166_end_: ;
                             }
                             ret83165;
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
                            x10::lang::String* ret83168;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret83169; __ret83169: {
                            {
                                
                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(args)->
                                      FMGL(rail)) {
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret83168 = (x10aux::nullCheck(args)->
                                                  FMGL(raw))->__apply(((x10_int)0));
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret83169_end_;
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
                                    ret83168 = (x10aux::nullCheck(args)->
                                                  FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(args)->
                                                                                                      FMGL(layout_min0)))));
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret83169_end_;
                                }
                                
                            }goto __ret83169_end_; __ret83169_end_: ;
                            }
                            ret83168;
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
                                     x10::lang::String* ret83171;
                                     
                                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                     goto __ret83172; __ret83172: {
                                     {
                                         
                                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                         if (x10aux::nullCheck(args)->
                                               FMGL(rail))
                                         {
                                             
                                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret83171 = (x10aux::nullCheck(args)->
                                                           FMGL(raw))->__apply(((x10_int)2));
                                             
                                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                             goto __ret83172_end_;
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
                                             ret83171 = (x10aux::nullCheck(args)->
                                                           FMGL(raw))->__apply(((x10_int) ((((x10_int)2)) - (x10aux::nullCheck(args)->
                                                                                                               FMGL(layout_min0)))));
                                             
                                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                             goto __ret83172_end_;
                                         }
                                         
                                     }goto __ret83172_end_; __ret83172_end_: ;
                                     }
                                     ret83171;
                                     }))
                                     ,reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("random"))))
                                   : (true);
                                 
                            
                            //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                            x10_double edgeConstVal = randomEdge
                              ? (0.0) : (x10::lang::DoubleNatives::parseDouble((__extension__ ({
                                             
                                             //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                             ;
                                             
                                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                             x10::lang::String* ret83174;
                                             
                                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                             goto __ret83175; __ret83175: {
                                             {
                                                 
                                                 //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                 if (x10aux::nullCheck(args)->
                                                       FMGL(rail))
                                                 {
                                                     
                                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                     ret83174 =
                                                       (x10aux::nullCheck(args)->
                                                          FMGL(raw))->__apply(((x10_int)2));
                                                     
                                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                     goto __ret83175_end_;
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
                                                     ret83174 =
                                                       (x10aux::nullCheck(args)->
                                                          FMGL(raw))->__apply(((x10_int) ((((x10_int)2)) - (x10aux::nullCheck(args)->
                                                                                                              FMGL(layout_min0)))));
                                                     
                                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                     goto __ret83175_end_;
                                                 }
                                                 
                                             }goto __ret83175_end_; __ret83175_end_: ;
                                             }
                                             ret83174;
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
                                org::scalegraph::io::NamedDistData* edgeData83506 =
                                  org::scalegraph::io::CSV::read(
                                    (__extension__ ({
                                        
                                        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::String* str83502 =
                                          (__extension__ ({
                                            
                                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                            ;
                                            
                                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                            x10::lang::String* ret83177;
                                            
                                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                            goto __ret83178; __ret83178: {
                                            {
                                                
                                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                if (x10aux::nullCheck(args)->
                                                      FMGL(rail))
                                                {
                                                    
                                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                    ret83177 =
                                                      (x10aux::nullCheck(args)->
                                                         FMGL(raw))->__apply(((x10_int)1));
                                                    
                                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                    goto __ret83178_end_;
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
                                                    ret83177 =
                                                      (x10aux::nullCheck(args)->
                                                         FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(args)->
                                                                                                             FMGL(layout_min0)))));
                                                    
                                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                    goto __ret83178_end_;
                                                }
                                                
                                            }goto __ret83178_end_; __ret83178_end_: ;
                                            }
                                            ret83177;
                                            }))
                                            ;
                                            
                                        (__extension__ ({
                                            
                                            //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                            org::scalegraph::util::SString alloc83503 =
                                               org::scalegraph::util::SString::_alloc();
                                            
                                            //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                            x10::lang::String* str87967 =
                                              str83502;
                                            
                                            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                            alloc83503->FMGL(content) =
                                              org::scalegraph::util::StringFromX10String(str87967);
                                            alloc83503;
                                        }))
                                        ;
                                        }))
                                        , colTypes, true);
                                  
                                org::scalegraph::graph::Graph::make(
                                  edgeData83506, x10aux::class_cast_unchecked<org::scalegraph::io::NamedDistData*>(X10_NULL),
                                  false);
                                }))
                                ;
                                
                            
                            //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": Eval of x10.ast.X10Call_c
                            x10aux::nullCheck(sw)->org::scalegraph::util::StopWatch::lap(
                              x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Read graph[path="), (__extension__ ({
                                  
                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                  ;
                                  
                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                  x10::lang::String* ret83508;
                                  
                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                  goto __ret83509; __ret83509: {
                                  {
                                      
                                      //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                      if (x10aux::nullCheck(args)->
                                            FMGL(rail)) {
                                          
                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                          ret83508 = (x10aux::nullCheck(args)->
                                                        FMGL(raw))->__apply(((x10_int)1));
                                          
                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                          goto __ret83509_end_;
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
                                          ret83508 = (x10aux::nullCheck(args)->
                                                        FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(args)->
                                                                                                            FMGL(layout_min0)))));
                                          
                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                          goto __ret83509_end_;
                                      }
                                      
                                  }goto __ret83509_end_; __ret83509_end_: ;
                                  }
                                  ret83508;
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
                                                  org::scalegraph::util::random::Random* alloc55642 =
                                                     ((new (memset(x10aux::alloc<org::scalegraph::util::random::Random>(), 0, sizeof(org::scalegraph::util::random::Random))) org::scalegraph::util::random::Random()))
                                                  ;
                                                  
                                                  //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10ConstructorCall_c
                                                  (alloc55642)->::org::scalegraph::util::random::Random::_constructor(
                                                    ((x10_long) (((x10_int)2))),
                                                    ((x10_long) (((x10_int)3))));
                                                  alloc55642;
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
                                                                                                                        x10::lang::String* ret83513;
                                                                                                                        
                                                                                                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                                                                        goto __ret83514; __ret83514: {
                                                                                                                        {
                                                                                                                            
                                                                                                                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                                                                            if (x10aux::nullCheck(args)->
                                                                                                                                  FMGL(rail))
                                                                                                                            {
                                                                                                                                
                                                                                                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                                ret83513 =
                                                                                                                                  (x10aux::nullCheck(args)->
                                                                                                                                     FMGL(raw))->__apply(((x10_int)0));
                                                                                                                                
                                                                                                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                                                                goto __ret83514_end_;
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
                                                                                                                                ret83513 =
                                                                                                                                  (x10aux::nullCheck(args)->
                                                                                                                                     FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(args)->
                                                                                                                                                                                         FMGL(layout_min0)))));
                                                                                                                                
                                                                                                                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                                                                goto __ret83514_end_;
                                                                                                                            }
                                                                                                                            
                                                                                                                        }goto __ret83514_end_; __ret83514_end_: ;
                                                                                                                        }
                                                                                                                        ret83513;
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
                                    x10::lang::Iterator<x10::array::Point*>* id55667;
                                    for (
                                         //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                         id55667 = x10aux::nullCheck(args)->
                                                     FMGL(region)->iterator();
                                         x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id55667));
                                         ) {
                                        
                                        //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                        x10::array::Point* id16 =
                                          x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id55667));
                                        
                                        //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                        x10_int s = x10aux::nullCheck(id16)->x10::array::Point::__apply(
                                                      ((x10_int)0));
                                        
                                        //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10If_c
                                        if (x10aux::equals((__extension__ ({
                                                
                                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int i85229 =
                                                  s;
                                                
                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10::lang::String* ret85230;
                                                
                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                goto __ret85231; __ret85231: {
                                                {
                                                    
                                                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                    if (x10aux::nullCheck(args)->
                                                          FMGL(rail))
                                                    {
                                                        
                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret85230 =
                                                          (x10aux::nullCheck(args)->
                                                             FMGL(raw))->__apply(i85229);
                                                        
                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                        goto __ret85231_end_;
                                                    } else
                                                    {
                                                        
                                                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                        if (true &&
                                                            !(x10aux::nullCheck(args)->
                                                                FMGL(region)->contains(
                                                                i85229)))
                                                        {
                                                            
                                                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                            x10::array::Array<void>::raiseBoundsError(
                                                              i85229);
                                                        }
                                                        
                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                        ret85230 =
                                                          (x10aux::nullCheck(args)->
                                                             FMGL(raw))->__apply(((x10_int) ((i85229) - (x10aux::nullCheck(args)->
                                                                                                           FMGL(layout_min0)))));
                                                        
                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                        goto __ret85231_end_;
                                                    }
                                                    
                                                }goto __ret85231_end_; __ret85231_end_: ;
                                                }
                                                ret85230;
                                                }))
                                                ,reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("-"))))
                                            {
                                                
                                                //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                x10::array::Array<x10::lang::String*>* args1 =
                                                   ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::String*> >(), 0, sizeof(x10::array::Array<x10::lang::String*>))) x10::array::Array<x10::lang::String*>()))
                                                ;
                                                
                                                //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int size87986 =
                                                  s;
                                                
                                                //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10::array::RectRegion1D* myReg87975 =
                                                   ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
                                                ;
                                                
                                                //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
                                                (myReg87975)->::x10::array::RectRegion1D::_constructor(
                                                  ((x10_int) ((size87986) - (((x10_int)1)))));
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args1->FMGL(region) =
                                                  reinterpret_cast<x10::array::Region*>(myReg87975);
                                                
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
                                                  size87986;
                                                
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
                                                x10::util::IndexedMemoryChunk<x10::lang::String* > r87976 =
                                                  x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::String* >(size87986, 8, false, false);
                                                
                                                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int i67566max87972 =
                                                  ((x10_int) ((size87986) - (((x10_int)1))));
                                                
                                                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
                                                {
                                                    x10_int i87973;
                                                    for (
                                                         //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                         i87973 =
                                                           ((x10_int)0);
                                                         ((i87973) <= (i67566max87972));
                                                         
                                                         //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                         i87973 =
                                                           ((x10_int) ((i87973) + (((x10_int)1)))))
                                                    {
                                                        
                                                        //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10_int i87974 =
                                                          i87973;
                                                        
                                                        //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                        (r87976)->__set(i87974, (__extension__ ({
                                                            
                                                            //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                            x10_int i87968 =
                                                              i87974;
                                                            (__extension__ ({
                                                                
                                                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                x10_int i87969 =
                                                                  i87968;
                                                                
                                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                x10::lang::String* ret87970;
                                                                
                                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                goto __ret87971; __ret87971: {
                                                                {
                                                                    
                                                                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                    if (x10aux::nullCheck(args)->
                                                                          FMGL(rail))
                                                                    {
                                                                        
                                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret87970 =
                                                                          (x10aux::nullCheck(args)->
                                                                             FMGL(raw))->__apply(i87969);
                                                                        
                                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                        goto __ret87971_end_;
                                                                    }
                                                                    else
                                                                    {
                                                                        
                                                                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                        if (true &&
                                                                            !(x10aux::nullCheck(args)->
                                                                                FMGL(region)->contains(
                                                                                i87969)))
                                                                        {
                                                                            
                                                                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                            x10::array::Array<void>::raiseBoundsError(
                                                                              i87969);
                                                                        }
                                                                        
                                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret87970 =
                                                                          (x10aux::nullCheck(args)->
                                                                             FMGL(raw))->__apply(((x10_int) ((i87969) - (x10aux::nullCheck(args)->
                                                                                                                           FMGL(layout_min0)))));
                                                                        
                                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                        goto __ret87971_end_;
                                                                    }
                                                                    
                                                                }goto __ret87971_end_; __ret87971_end_: ;
                                                                }
                                                                ret87970;
                                                                }))
                                                                ;
                                                            }))
                                                            );
                                                        }
                                                    }
                                                    
                                                
                                                //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args1->FMGL(raw) =
                                                  r87976;
                                                
                                                //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                x10::array::Array<x10::lang::String*>* args2 =
                                                   ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::String*> >(), 0, sizeof(x10::array::Array<x10::lang::String*>))) x10::array::Array<x10::lang::String*>()))
                                                ;
                                                
                                                //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int size87987 =
                                                  ((x10_int) ((((x10_int) ((x10aux::nullCheck(args)->
                                                                              FMGL(size)) - (s)))) - (((x10_int)1))));
                                                
                                                //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10::array::RectRegion1D* myReg87984 =
                                                   ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
                                                ;
                                                
                                                //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
                                                (myReg87984)->::x10::array::RectRegion1D::_constructor(
                                                  ((x10_int) ((size87987) - (((x10_int)1)))));
                                                
                                                //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args2->FMGL(region) =
                                                  reinterpret_cast<x10::array::Region*>(myReg87984);
                                                
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
                                                  size87987;
                                                
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
                                                x10::util::IndexedMemoryChunk<x10::lang::String* > r87985 =
                                                  x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::String* >(size87987, 8, false, false);
                                                
                                                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int i67566max87981 =
                                                  ((x10_int) ((size87987) - (((x10_int)1))));
                                                
                                                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
                                                {
                                                    x10_int i87982;
                                                    for (
                                                         //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                         i87982 =
                                                           ((x10_int)0);
                                                         ((i87982) <= (i67566max87981));
                                                         
                                                         //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                         i87982 =
                                                           ((x10_int) ((i87982) + (((x10_int)1)))))
                                                    {
                                                        
                                                        //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                        x10_int i87983 =
                                                          i87982;
                                                        
                                                        //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                        (r87985)->__set(i87983, (__extension__ ({
                                                            
                                                            //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                                            x10_int i87977 =
                                                              i87983;
                                                            (__extension__ ({
                                                                
                                                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                x10_int i87978 =
                                                                  ((x10_int) ((((x10_int) ((s) + (((x10_int)1))))) + (i87977)));
                                                                
                                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                x10::lang::String* ret87979;
                                                                
                                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                goto __ret87980; __ret87980: {
                                                                {
                                                                    
                                                                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                    if (x10aux::nullCheck(args)->
                                                                          FMGL(rail))
                                                                    {
                                                                        
                                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret87979 =
                                                                          (x10aux::nullCheck(args)->
                                                                             FMGL(raw))->__apply(i87978);
                                                                        
                                                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                        goto __ret87980_end_;
                                                                    }
                                                                    else
                                                                    {
                                                                        
                                                                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                        if (true &&
                                                                            !(x10aux::nullCheck(args)->
                                                                                FMGL(region)->contains(
                                                                                i87978)))
                                                                        {
                                                                            
                                                                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                            x10::array::Array<void>::raiseBoundsError(
                                                                              i87978);
                                                                        }
                                                                        
                                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                        ret87979 =
                                                                          (x10aux::nullCheck(args)->
                                                                             FMGL(raw))->__apply(((x10_int) ((i87978) - (x10aux::nullCheck(args)->
                                                                                                                           FMGL(layout_min0)))));
                                                                        
                                                                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                        goto __ret87980_end_;
                                                                    }
                                                                    
                                                                }goto __ret87980_end_; __ret87980_end_: ;
                                                                }
                                                                ret87979;
                                                                }))
                                                                ;
                                                            }))
                                                            );
                                                        }
                                                    }
                                                    
                                                
                                                //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                                                args2->FMGL(raw) =
                                                  r87985;
                                                
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
                                        x10::array::Array<x10::lang::String*>* ret85269;
                                        
                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret85269 = (x10aux::nullCheck(id17)->
                                                      FMGL(raw))->__apply(((x10_int)0));
                                        ret85269;
                                    }))
                                    ;
                                    
                                    //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/test/AlgorithmTest.x10": x10.ast.X10LocalDecl_c
                                    x10::array::Array<x10::lang::String*>* mainArgs =
                                      (__extension__ ({
                                        
                                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                        ;
                                        
                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10::array::Array<x10::lang::String*>* ret85272;
                                        
                                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret85272 = (x10aux::nullCheck(id17)->
                                                      FMGL(raw))->__apply(((x10_int)1));
                                        ret85272;
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
                                            org::scalegraph::graph::EdgeList<x10_long> alloc55646 =
                                               org::scalegraph::graph::EdgeList<x10_long>::_alloc();
                                            
                                            //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                            org::scalegraph::util::DistMemoryChunk<x10_long> src88186 =
                                              source;
                                            
                                            //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
                                            org::scalegraph::util::DistMemoryChunk<x10_long> dst88187 =
                                              target;
                                            
                                            //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                            alloc55646->FMGL(src) =
                                              src88186;
                                            
                                            //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
                                            alloc55646->FMGL(dst) =
                                              dst88187;
                                            alloc55646;
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
                                        org::scalegraph::io::NamedDistData* edgeData87938 =
                                          org::scalegraph::io::CSV::read(
                                            (__extension__ ({
                                                
                                                //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                x10::lang::String* str87934 =
                                                  reference;
                                                (__extension__ ({
                                                    
                                                    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                    org::scalegraph::util::SString alloc87935 =
                                                       org::scalegraph::util::SString::_alloc();
                                                    
                                                    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                    x10::lang::String* str88188 =
                                                      str87934;
                                                    
                                                    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                                    alloc87935->
                                                      FMGL(content) =
                                                      org::scalegraph::util::StringFromX10String(str88188);
                                                    alloc87935;
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
                                          edgeData87938, x10aux::class_cast_unchecked<org::scalegraph::io::NamedDistData*>(X10_NULL),
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
                                    org::scalegraph::test::STest* this88189 =
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
