/*************************************************/
/* START of CSVReader */
#include <org/scalegraph/io/impl/CSVReader.h>

#include <org/scalegraph/id/ProfilingID__IO.h>
#include <x10/util/Team.h>
#include <org/scalegraph/util/SString.h>
#include <x10/array/Array.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/io/NamedDistData.h>
#include <x10/lang/Runtime.h>
#include <org/scalegraph/io/impl/CSVAttributeHandler.h>
#include <x10/array/RectRegion1D.h>
#include <x10/array/Region.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <org/scalegraph/io/impl/FileNameProvider.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/io/FileReader.h>
#include <org/scalegraph/io/impl/CSVReader__NativeCSVHeader.h>
#include <x10/io/IOException.h>
#include <org/scalegraph/io/impl/CSVReader__CSVAttribute.h>
#include <org/scalegraph/id/Type.h>
#include <x10/lang/Char.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Byte.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/compiler/Ifndef.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <org/scalegraph/io/impl/CSVReader__ReaderBuffer.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <org/scalegraph/io/impl/InputSplitter.h>
#include <org/scalegraph/io/impl/DoubleQuoatedCSVSplitter.h>
#include <org/scalegraph/io/impl/LineBreakSplitter.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/Any.h>
#include <x10/lang/Fun_0_1.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/compiler/NativeCPPCompilationUnit.h>
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVREADER__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVREADER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_io_impl_CSVReader__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>::itable<org_scalegraph_io_impl_CSVReader__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* __apply() {
        
        //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* alloc127222 =
               ((new (memset(x10aux::alloc<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*> >(), 0, sizeof(x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>))) x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>()))
            ;
            
            //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int size131825 = nthreads;
            
            //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::array::RectRegion1D* myReg131823 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (myReg131823)->::x10::array::RectRegion1D::_constructor(
              ((x10_int) ((size131825) - (((x10_int)1)))));
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127222->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg131823);
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127222->FMGL(rank) = ((x10_int)1);
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127222->FMGL(rect) = true;
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127222->FMGL(zeroBased) = true;
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127222->FMGL(rail) = true;
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127222->FMGL(size) = size131825;
            
            //#line 318 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127222->FMGL(layout_min0) = alloc127222->FMGL(layout_stride1) =
              alloc127222->FMGL(layout_min1) = ((x10_int)0);
            
            //#line 319 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127222->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
            
            //#line 320 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::util::IndexedMemoryChunk<org::scalegraph::io::impl::CSVReader__ReaderBuffer* > r131824 =
              x10::util::IndexedMemoryChunk<void>::allocate<org::scalegraph::io::impl::CSVReader__ReaderBuffer* >(size131825, 8, false, false);
            
            //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i67566max131820 = ((x10_int) ((size131825) - (((x10_int)1))));
            
            //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
            {
                x10_int i131821;
                for (
                     //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     i131821 = ((x10_int)0); ((i131821) <= (i67566max131820));
                     
                     //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                     i131821 = ((x10_int) ((i131821) + (((x10_int)1)))))
                {
                    
                    //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i131822 = i131821;
                    
                    //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (r131824)->__set(i131822, (__extension__ ({
                        
                        //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                        x10_int i131818 = i131822;
                        (__extension__ ({
                            
                            //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::io::impl::CSVReader__ReaderBuffer* alloc131819 =
                               ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVReader__ReaderBuffer>(), 0, sizeof(org::scalegraph::io::impl::CSVReader__ReaderBuffer))) org::scalegraph::io::impl::CSVReader__ReaderBuffer()))
                            ;
                            
                            //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10ConstructorCall_c
                            (alloc131819)->::org::scalegraph::io::impl::CSVReader__ReaderBuffer::_constructor(
                              attHandler);
                            alloc131819;
                        }))
                        ;
                    }))
                    );
                }
            }
            
            //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127222->FMGL(raw) = r131824;
            alloc127222;
        }))
        ;
        
    }
    
    // captured environment
    x10_int nthreads;
    x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* attHandler;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->nthreads);
        buf.write(this->attHandler);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_io_impl_CSVReader__closure__1* storage = x10aux::alloc<org_scalegraph_io_impl_CSVReader__closure__1>();
        buf.record_reference(storage);
        x10_int that_nthreads = buf.read<x10_int>();
        x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* that_attHandler = buf.read<x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>*>();
        org_scalegraph_io_impl_CSVReader__closure__1* this_ = new (storage) org_scalegraph_io_impl_CSVReader__closure__1(that_nthreads, that_attHandler);
        return this_;
    }
    
    org_scalegraph_io_impl_CSVReader__closure__1(x10_int nthreads, x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* attHandler) : nthreads(nthreads), attHandler(attHandler) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10:174";
    }

};

#endif // ORG_SCALEGRAPH_IO_IMPL_CSVREADER__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVREADER__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVREADER__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_io_impl_CSVReader__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> >::itable<org_scalegraph_io_impl_CSVReader__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_int tid, org::scalegraph::util::MemoryChunk<x10_byte> data) {
        
        //#line 181 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck((__extension__ ({
            
            //#line 181 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* this131703 =
              bufferPLH->x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>::__apply();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i131702 = tid;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::io::impl::CSVReader__ReaderBuffer* ret131704;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret131705; __ret131705: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this131703)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131704 = (x10aux::nullCheck(this131703)->FMGL(raw))->__apply(i131702);
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret131705_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this131703)->
                                    FMGL(region)->contains(i131702)))
                    {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          i131702);
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131704 = (x10aux::nullCheck(this131703)->FMGL(raw))->__apply(((x10_int) ((i131702) - (x10aux::nullCheck(this131703)->
                                                                                                               FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret131705_end_;
                }
                
            }goto __ret131705_end_; __ret131705_end_: ;
            }
            ret131704;
            }))
            )->parse(data);
        }
        
        // captured environment
        x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> bufferPLH;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->bufferPLH);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_io_impl_CSVReader__closure__2* storage = x10aux::alloc<org_scalegraph_io_impl_CSVReader__closure__2>();
            buf.record_reference(storage);
            x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> that_bufferPLH = buf.read<x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> >();
            org_scalegraph_io_impl_CSVReader__closure__2* this_ = new (storage) org_scalegraph_io_impl_CSVReader__closure__2(that_bufferPLH);
            return this_;
        }
        
        org_scalegraph_io_impl_CSVReader__closure__2(x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> bufferPLH) : bufferPLH(bufferPLH) { }
        
        static const x10aux::serialization_id_t _serialization_id;
        
        static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> > >(); }
        virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> > >(); }
        
        x10::lang::String* toString() {
            return x10aux::makeStringLit(this->toNativeString());
        }
        
        const char* toNativeString() {
            return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10:181";
        }
    
    };
    
    #endif // ORG_SCALEGRAPH_IO_IMPL_CSVREADER__CLOSURE__2_CLOSURE
    #ifndef ORG_SCALEGRAPH_IO_IMPL_CSVREADER__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVREADER__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class org_scalegraph_io_impl_CSVReader__closure__3 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_io_impl_CSVReader__closure__3> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply(x10_int tid131836) {
        
        //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10Return_c
        return x10aux::nullCheck(x10aux::nullCheck((__extension__ ({
                                     
                                     //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                     x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* this131837 =
                                       bufferPLH->x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>::__apply();
                                     
                                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                     x10_int i131838 = tid131836;
                                     
                                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                     org::scalegraph::io::impl::CSVReader__ReaderBuffer* ret131839;
                                     
                                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                     goto __ret131840; __ret131840: {
                                     {
                                         
                                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                         if (x10aux::nullCheck(this131837)->
                                               FMGL(rail)) {
                                             
                                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret131839 = (x10aux::nullCheck(this131837)->
                                                            FMGL(raw))->__apply(i131838);
                                             
                                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                             goto __ret131840_end_;
                                         } else {
                                             
                                             //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                             if (true && !(x10aux::nullCheck(this131837)->
                                                             FMGL(region)->contains(
                                                             i131838)))
                                             {
                                                 
                                                 //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                 x10::array::Array<void>::raiseBoundsError(
                                                   i131838);
                                             }
                                             
                                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret131839 = (x10aux::nullCheck(this131837)->
                                                            FMGL(raw))->__apply(((x10_int) ((i131838) - (x10aux::nullCheck(this131837)->
                                                                                                           FMGL(layout_min0)))));
                                             
                                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                             goto __ret131840_end_;
                                         }
                                         
                                     }goto __ret131840_end_; __ret131840_end_: ;
                                     }
                                     ret131839;
                                     }))
                                     )->FMGL(chunkSize))->org::scalegraph::util::GrowableMemory<x10_long>::raw();
               
        }
        
        // captured environment
        x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> bufferPLH;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->bufferPLH);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_io_impl_CSVReader__closure__3* storage = x10aux::alloc<org_scalegraph_io_impl_CSVReader__closure__3>();
            buf.record_reference(storage);
            x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> that_bufferPLH = buf.read<x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> >();
            org_scalegraph_io_impl_CSVReader__closure__3* this_ = new (storage) org_scalegraph_io_impl_CSVReader__closure__3(that_bufferPLH);
            return this_;
        }
        
        org_scalegraph_io_impl_CSVReader__closure__3(x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> bufferPLH) : bufferPLH(bufferPLH) { }
        
        static const x10aux::serialization_id_t _serialization_id;
        
        static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> > >(); }
        virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> > >(); }
        
        x10::lang::String* toString() {
            return x10aux::makeStringLit(this->toNativeString());
        }
        
        const char* toNativeString() {
            return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10:200";
        }
    
    };
    
    #endif // ORG_SCALEGRAPH_IO_IMPL_CSVREADER__CLOSURE__3_CLOSURE
    #ifndef ORG_SCALEGRAPH_IO_IMPL_CSVREADER__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVREADER__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class org_scalegraph_io_impl_CSVReader__closure__4 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_int, x10::lang::Any*>::itable<org_scalegraph_io_impl_CSVReader__closure__4> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10::lang::Any* __apply(x10_int tid131841) {
        
        //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10::lang::Any*>* this131842 = x10aux::nullCheck((__extension__ ({
                                                                 
                                                                 //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                                                 x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* this131843 =
                                                                   bufferPLH->x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>::__apply();
                                                                 
                                                                 //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                 x10_int i131844 =
                                                                   tid131841;
                                                                 
                                                                 //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                 org::scalegraph::io::impl::CSVReader__ReaderBuffer* ret131845;
                                                                 
                                                                 //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                 goto __ret131846; __ret131846: {
                                                                 {
                                                                     
                                                                     //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                     if (x10aux::nullCheck(this131843)->
                                                                           FMGL(rail))
                                                                     {
                                                                         
                                                                         //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                         ret131845 =
                                                                           (x10aux::nullCheck(this131843)->
                                                                              FMGL(raw))->__apply(i131844);
                                                                         
                                                                         //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                         goto __ret131846_end_;
                                                                     }
                                                                     else
                                                                     {
                                                                         
                                                                         //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                         if (true &&
                                                                             !(x10aux::nullCheck(this131843)->
                                                                                 FMGL(region)->contains(
                                                                                 i131844)))
                                                                         {
                                                                             
                                                                             //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                             x10::array::Array<void>::raiseBoundsError(
                                                                               i131844);
                                                                         }
                                                                         
                                                                         //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                         ret131845 =
                                                                           (x10aux::nullCheck(this131843)->
                                                                              FMGL(raw))->__apply(((x10_int) ((i131844) - (x10aux::nullCheck(this131843)->
                                                                                                                             FMGL(layout_min0)))));
                                                                         
                                                                         //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                         goto __ret131846_end_;
                                                                     }
                                                                     
                                                                 }goto __ret131846_end_; __ret131846_end_: ;
                                                                 }
                                                                 ret131845;
                                                                 }))
                                                                 )->
                                                                   FMGL(buffer);
                                                             
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i131847 = e131887;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::lang::Any* ret131848;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret131849; __ret131849: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this131842)->FMGL(rail))
                {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131848 = (x10aux::nullCheck(this131842)->
                                   FMGL(raw))->__apply(i131847);
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret131849_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this131842)->
                                    FMGL(region)->contains(
                                    i131847))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          i131847);
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131848 = (x10aux::nullCheck(this131842)->
                                   FMGL(raw))->__apply(((x10_int) ((i131847) - (x10aux::nullCheck(this131842)->
                                                                                  FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret131849_end_;
                }
                
            }goto __ret131849_end_; __ret131849_end_: ;
            }
            ret131848;
            }))
            ;
            
        }
        
        // captured environment
        x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> bufferPLH;
        x10_int e131887;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->bufferPLH);
            buf.write(this->e131887);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_io_impl_CSVReader__closure__4* storage = x10aux::alloc<org_scalegraph_io_impl_CSVReader__closure__4>();
            buf.record_reference(storage);
            x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> that_bufferPLH = buf.read<x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> >();
            x10_int that_e131887 = buf.read<x10_int>();
            org_scalegraph_io_impl_CSVReader__closure__4* this_ = new (storage) org_scalegraph_io_impl_CSVReader__closure__4(that_bufferPLH, that_e131887);
            return this_;
        }
        
        org_scalegraph_io_impl_CSVReader__closure__4(x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> bufferPLH, x10_int e131887) : bufferPLH(bufferPLH), e131887(e131887) { }
        
        static const x10aux::serialization_id_t _serialization_id;
        
        static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, x10::lang::Any*> >(); }
        virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_int, x10::lang::Any*> >(); }
        
        x10::lang::String* toString() {
            return x10aux::makeStringLit(this->toNativeString());
        }
        
        const char* toNativeString() {
            return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10:201";
        }
        
        };
        
        #endif // ORG_SCALEGRAPH_IO_IMPL_CSVREADER__CLOSURE__4_CLOSURE
         /* private static type IO = org.scalegraph.id.ProfilingID$IO; */ 

//#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::NamedDistData* org::scalegraph::io::impl::CSVReader::read(
  x10::util::Team* team, org::scalegraph::util::SString path, x10::array::Array<x10_int>* columnDef,
  x10::array::Array<x10::lang::String*>* columnNames, x10_boolean includeHeader) {
    
    //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    x10_int numColumns = x10aux::nullCheck(columnDef)->FMGL(size);
    
    //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<org::scalegraph::util::SString>* columnNamesInHeader =
      x10aux::class_cast_unchecked<x10::array::Array<org::scalegraph::util::SString>*>(X10_NULL);
    
    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* attHandler =
       ((new (memset(x10aux::alloc<x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*> >(), 0, sizeof(x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>))) x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>()))
    ;
    
    //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int size131871 = x10aux::nullCheck(columnDef)->FMGL(size);
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::array::RectRegion1D* myReg131788 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
    ;
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg131788)->::x10::array::RectRegion1D::_constructor(
      ((x10_int) ((size131871) - (((x10_int)1)))));
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg131788);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(rank) = ((x10_int)1);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(rect) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(zeroBased) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(rail) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(size) = size131871;
    
    //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(layout_min0) = attHandler->FMGL(layout_stride1) =
      attHandler->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
    
    //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<org::scalegraph::io::impl::CSVAttributeHandler* >(size131871, 8, false, true);
    
    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::FileNameProvider* fman = (__extension__ ({
        
        //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString path130810 = path;
        org::scalegraph::io::impl::FileNameProvider::create(
          path130810, true, false);
    }))
    ;
    
    //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    x10_boolean includeDQ = false;
    
    //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    x10_long dataOffset = ((x10_long) (((x10_int)0)));
    
    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::FileReader* reader131872 =  ((new (memset(x10aux::alloc<org::scalegraph::io::FileReader>(), 0, sizeof(org::scalegraph::io::FileReader))) org::scalegraph::io::FileReader()))
    ;
    
    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10ConstructorCall_c
    (reader131872)->::org::scalegraph::io::FileReader::_constructor(
      fman->fileName(((x10_int)0)));
    
    //#line 138 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString headerLine131873 = reader131872->org::scalegraph::io::FileReader::fastReadLine();
    
    //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
    if (includeHeader) {
        
        //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::impl::NativeCSVHeader* header131874 =
          org::scalegraph::io::impl::readCSVHeader(headerLine131873);
        
        //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
        if (((x10aux::nullCheck(columnDef)->FMGL(size)) > ((x10_int) (header131874)->attrs.size())))
        {
            
            //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
            (header131874)->~NativeCSVHeader(); x10aux::dealloc(header131874);
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
            reader131872->org::scalegraph::io::FileReader::close();
            
            //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::io::IOException::_make(x10aux::makeStringLit("The file does not contain enough attributes."))));
        }
        
        //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
        dataOffset = (__extension__ ({
            reader131872->FMGL(fileOffset);
        }))
        ;
        
        //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
        columnNamesInHeader = (__extension__ ({
            
            //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<org::scalegraph::util::SString>* alloc131875 =
               ((new (memset(x10aux::alloc<x10::array::Array<org::scalegraph::util::SString> >(), 0, sizeof(x10::array::Array<org::scalegraph::util::SString>))) x10::array::Array<org::scalegraph::util::SString>()))
            ;
            
            //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int size131790 = numColumns;
            
            //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::array::RectRegion1D* myReg131789 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (myReg131789)->::x10::array::RectRegion1D::_constructor(
              ((x10_int) ((size131790) - (((x10_int)1)))));
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc131875->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg131789);
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc131875->FMGL(rank) = ((x10_int)1);
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc131875->FMGL(rect) = true;
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc131875->FMGL(zeroBased) = true;
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc131875->FMGL(rail) = true;
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc131875->FMGL(size) = size131790;
            
            //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc131875->FMGL(layout_min0) = alloc131875->
                                               FMGL(layout_stride1) =
              alloc131875->FMGL(layout_min1) = ((x10_int)0);
            
            //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc131875->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
            
            //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc131875->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<org::scalegraph::util::SString >(size131790, 8, false, true);
            alloc131875;
        }))
        ;
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::array::Region* p131802 = attHandler->FMGL(region);
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int i127246min131803 = p131802->min(((x10_int)0));
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int i127246max131804 = p131802->max(((x10_int)0));
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
        {
            x10_int i131805;
            for (
                 //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                 i131805 = i127246min131803; ((i131805) <= (i127246max131804));
                 
                 //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                 i131805 = ((x10_int) ((i131805) + (((x10_int)1)))))
            {
                
                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int i131806 = i131805;
                
                //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::NativeCSVAttribute* att131797 =
                  &((header131874)->attrs[i131806]);
                
                //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int typeId131798 = (x10_boolean) (att131797)->includeType
                  ? (org::scalegraph::id::Type::typeId(x10::lang::String::_make(reinterpret_cast<char*>(((att131797)->typeName).c_str()), true)))
                  : ((__extension__ ({
                         
                         //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int i131799 = i131806;
                         
                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int ret131800;
                         
                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                         goto __ret131801; __ret131801: {
                         {
                             
                             //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                             if (x10aux::nullCheck(columnDef)->
                                   FMGL(rail)) {
                                 
                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                 ret131800 = (x10aux::nullCheck(columnDef)->
                                                FMGL(raw))->__apply(i131799);
                                 
                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                 goto __ret131801_end_;
                             } else {
                                 
                                 //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                 if (true && !(x10aux::nullCheck(columnDef)->
                                                 FMGL(region)->contains(
                                                 i131799)))
                                 {
                                     
                                     //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                     x10::array::Array<void>::raiseBoundsError(
                                       i131799);
                                 }
                                 
                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                 ret131800 = (x10aux::nullCheck(columnDef)->
                                                FMGL(raw))->__apply(((x10_int) ((i131799) - (x10aux::nullCheck(columnDef)->
                                                                                               FMGL(layout_min0)))));
                                 
                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                 goto __ret131801_end_;
                             }
                             
                         }goto __ret131801_end_; __ret131801_end_: ;
                         }
                         ret131800;
                         }))
                         );
                     
                
                //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i131791 = i131806;
                
                //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SString v131792 = (att131797)->name;
                
                //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SString ret131793;
                
                //#line 555 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(columnNamesInHeader)->
                      FMGL(rail)) {
                    
                    //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (x10aux::nullCheck(columnNamesInHeader)->
                       FMGL(raw))->__set(i131791, v131792);
                } else {
                    
                    //#line 559 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(columnNamesInHeader)->
                                    FMGL(region)->contains(
                                    i131791))) {
                        
                        //#line 560 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          i131791);
                    }
                    
                    //#line 562 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (x10aux::nullCheck(columnNamesInHeader)->
                       FMGL(raw))->__set(((x10_int) ((i131791) - (x10aux::nullCheck(columnNamesInHeader)->
                                                                    FMGL(layout_min0)))), v131792);
                }
                
                //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret131793 = v131792;
                
                //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                ret131793;
                
                //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i131794 = i131806;
                
                //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler* v131795 =
                  org::scalegraph::io::impl::CSVAttributeHandler::create(
                    typeId131798, (x10_boolean) (att131797)->doubleQuoated);
                
                //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler* ret131796;
                
                //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                (attHandler->FMGL(raw))->__set(i131794, v131795);
                
                //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret131796 = v131795;
                
                //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                ret131796;
                
                //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
                if ((x10_boolean) (att131797)->doubleQuoated)
                {
                    
                    //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                    includeDQ = true;
                }
                }
            }
            
        
        //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
        (header131874)->~NativeCSVHeader(); x10aux::dealloc(header131874);
        } else {
            
            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
            includeDQ = (x10aux::struct_equals((x10_char((x10_int)((__extension__ ({
                                                   
                                                   //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                                   org::scalegraph::util::MemoryChunk<x10_byte> this131876 =
                                                     (__extension__ ({
                                                       
                                                       //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                                       org::scalegraph::util::SString this131877 =
                                                         headerLine131873->org::scalegraph::util::SString::trim();
                                                       this131877->
                                                         FMGL(content);
                                                   }))
                                                   ;
                                                   
                                                   //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                                                   ;
                                                   
                                                   //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                   x10_byte ret131878;
                                                   {
                                                       
                                                       //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                       if (!((this131876->
                                                                FMGL(data)).isValid()))
                                                       {
                                                           
                                                           //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                           if (true)
                                                           {
                                                               
                                                               //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                               x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                           }
                                                           
                                                       }
                                                       
                                                       //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                       if (((((x10_int)0)) < (((x10_int)0))) ||
                                                           ((((x10_long) (((x10_int)0)))) >= (this131876->
                                                                                                FMGL(data)->
                                                                                                FMGL(size))))
                                                       {
                                                           
                                                           //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                           if (true)
                                                           {
                                                               
                                                               //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                               x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)0)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                           }
                                                           
                                                       }
                                                       
                                                   }
                                                   
                                                   //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                                   ret131878 =
                                                     (this131876->
                                                        FMGL(data))[((x10_int)0)];
                                                   ret131878;
                                               }))
                                               ))), ((x10_char)'\"')));
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10::array::Region* p131813 = attHandler->FMGL(region);
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10_int i127267min131814 = p131813->min(((x10_int)0));
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10_int i127267max131815 = p131813->max(((x10_int)0));
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
            {
                x10_int i131816;
                for (
                     //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                     i131816 = i127267min131814; ((i131816) <= (i127267max131815));
                     
                     //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                     i131816 = ((x10_int) ((i131816) + (((x10_int)1)))))
                {
                    
                    //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10_int i131817 = i131816;
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i131807 = i131817;
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::io::impl::CSVAttributeHandler* v131808 =
                      org::scalegraph::io::impl::CSVAttributeHandler::create(
                        (__extension__ ({
                            
                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i131809 = i131817;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int ret131810;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret131811; __ret131811: {
                            {
                                
                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(columnDef)->
                                      FMGL(rail)) {
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret131810 = (x10aux::nullCheck(columnDef)->
                                                   FMGL(raw))->__apply(i131809);
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret131811_end_;
                                } else {
                                    
                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (true && !(x10aux::nullCheck(columnDef)->
                                                    FMGL(region)->contains(
                                                    i131809)))
                                    {
                                        
                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                        x10::array::Array<void>::raiseBoundsError(
                                          i131809);
                                    }
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret131810 = (x10aux::nullCheck(columnDef)->
                                                   FMGL(raw))->__apply(((x10_int) ((i131809) - (x10aux::nullCheck(columnDef)->
                                                                                                  FMGL(layout_min0)))));
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret131811_end_;
                                }
                                
                            }goto __ret131811_end_; __ret131811_end_: ;
                            }
                            ret131810;
                            }))
                            , includeDQ);
                      
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::io::impl::CSVAttributeHandler* ret131812;
                    
                    //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (attHandler->FMGL(raw))->__set(i131807, v131808);
                    
                    //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131812 = v131808;
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                    ret131812;
                    }
                }
                
            }
            
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
        reader131872->org::scalegraph::io::FileReader::close();
        
        //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> bufferPLH =
          x10::lang::PlaceLocalHandle<void>::makeFlat<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* >(
            x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> >(sizeof(org_scalegraph_io_impl_CSVReader__closure__1)))org_scalegraph_io_impl_CSVReader__closure__1(nthreads, attHandler))));
        
        //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::impl::InputSplitter* splitter =
          includeDQ ? ((reinterpret_cast<org::scalegraph::io::impl::InputSplitter*>((__extension__ ({
                            
                            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::io::impl::DoubleQuoatedCSVSplitter* alloc127223 =
                               ((new (memset(x10aux::alloc<org::scalegraph::io::impl::DoubleQuoatedCSVSplitter>(), 0, sizeof(org::scalegraph::io::impl::DoubleQuoatedCSVSplitter))) org::scalegraph::io::impl::DoubleQuoatedCSVSplitter()))
                            ;
                            alloc127223;
                        }))
                        ))) : ((reinterpret_cast<org::scalegraph::io::impl::InputSplitter*>((__extension__ ({
                                    
                                    //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::io::impl::LineBreakSplitter* alloc127224 =
                                       ((new (memset(x10aux::alloc<org::scalegraph::io::impl::LineBreakSplitter>(), 0, sizeof(org::scalegraph::io::impl::LineBreakSplitter))) org::scalegraph::io::impl::LineBreakSplitter()))
                                    ;
                                    alloc127224;
                                }))
                                )));
        
        //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
        splitter->split(team, fman, dataOffset, nthreads,
                        reinterpret_cast<x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> >*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> > >(sizeof(org_scalegraph_io_impl_CSVReader__closure__2)))org_scalegraph_io_impl_CSVReader__closure__2(bufferPLH))));
        
        //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int enabledColumns = ((x10_int)0);
        
        //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int i127287max131879 = ((x10_int) ((numColumns) - (((x10_int)1))));
        
        //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
        {
            x10_int i131880;
            for (
                 //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                 i131880 = ((x10_int)0); ((i131880) <= (i127287max131879));
                 
                 //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                 i131880 = ((x10_int) ((i131880) + (((x10_int)1)))))
            {
                
                //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int e131881 = i131880;
                
                //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
                if (!(x10aux::nullCheck((__extension__ ({
                          
                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10_int i131826 = e131881;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::io::impl::CSVAttributeHandler* ret131827;
                          
                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                          ret131827 = (attHandler->FMGL(raw))->__apply(i131826);
                          ret131827;
                      }))
                      )->isSkip())) {
                    
                    //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                    enabledColumns = ((x10_int) ((enabledColumns) + (((x10_int)1))));
                }
                
            }
        }
        
        //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10::lang::Any*>* attributes = 
        ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::Any*> >(), 0, sizeof(x10::array::Array<x10::lang::Any*>))) x10::array::Array<x10::lang::Any*>()))
        ;
        
        //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size131882 = enabledColumns;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::array::RectRegion1D* myReg131828 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg131828)->::x10::array::RectRegion1D::_constructor(
          ((x10_int) ((size131882) - (((x10_int)1)))));
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg131828);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(rank) = ((x10_int)1);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(rect) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(zeroBased) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(rail) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(size) = size131882;
        
        //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(layout_min0) = attributes->FMGL(layout_stride1) =
          attributes->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
        
        //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::Any* >(size131882, 8, false, true);
        
        //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10::lang::String*>* attrNames =
           ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::String*> >(), 0, sizeof(x10::array::Array<x10::lang::String*>))) x10::array::Array<x10::lang::String*>()))
        ;
        
        //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size131883 = enabledColumns;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::array::RectRegion1D* myReg131829 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg131829)->::x10::array::RectRegion1D::_constructor(
          ((x10_int) ((size131883) - (((x10_int)1)))));
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg131829);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(rank) = ((x10_int)1);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(rect) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(zeroBased) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(rail) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(size) = size131883;
        
        //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(layout_min0) = attrNames->FMGL(layout_stride1) =
          attrNames->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
        
        //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::String* >(size131883, 8, false, true);
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_int>* typeIds =  ((new (memset(x10aux::alloc<x10::array::Array<x10_int> >(), 0, sizeof(x10::array::Array<x10_int>))) x10::array::Array<x10_int>()))
        ;
        
        //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size131884 = enabledColumns;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::array::RectRegion1D* myReg131830 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg131830)->::x10::array::RectRegion1D::_constructor(
          ((x10_int) ((size131884) - (((x10_int)1)))));
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg131830);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(rank) = ((x10_int)1);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(rect) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(zeroBased) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(rail) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(size) = size131884;
        
        //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(layout_min0) = typeIds->FMGL(layout_stride1) =
          typeIds->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
        
        //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10_int >(size131884, 8, false, true);
        
        //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int attrIndex = ((x10_int)0);
        
        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int i127305max131885 = ((x10_int) ((numColumns) - (((x10_int)1))));
        
        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
        {
            x10_int i131886;
            for (
                 //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                 i131886 = ((x10_int)0); ((i131886) <= (i127305max131885));
                 
                 //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                 i131886 = ((x10_int) ((i131886) + (((x10_int)1)))))
            {
                
                //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int e131887 = i131886;
                
                //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
                if (!(x10aux::nullCheck((__extension__ ({
                          
                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10_int i131859 = e131887;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::io::impl::CSVAttributeHandler* ret131860;
                          
                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                          ret131860 = (attHandler->FMGL(raw))->__apply(i131859);
                          ret131860;
                      }))
                      )->isSkip())) {
                    
                    //#line 197 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10_int attrIndex_131861 = attrIndex;
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i131832 = attrIndex_131861;
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Any* v131833 = x10aux::nullCheck((__extension__ ({
                                                  
                                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10_int i131834 =
                                                    e131887;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  org::scalegraph::io::impl::CSVAttributeHandler* ret131835;
                                                  
                                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                  ret131835 =
                                                    (attHandler->
                                                       FMGL(raw))->__apply(i131834);
                                                  ret131835;
                                              }))
                                              )->mergeResult(
                                                team, nthreads,
                                                reinterpret_cast<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_io_impl_CSVReader__closure__3)))org_scalegraph_io_impl_CSVReader__closure__3(bufferPLH))),
                                                reinterpret_cast<x10::lang::Fun_0_1<x10_int, x10::lang::Any*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, x10::lang::Any*> >(sizeof(org_scalegraph_io_impl_CSVReader__closure__4)))org_scalegraph_io_impl_CSVReader__closure__4(bufferPLH, e131887))));
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Any* ret131850;
                    
                    //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (attributes->FMGL(raw))->__set(i131832, v131833);
                    
                    //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131850 = v131833;
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                    ret131850;
                    
                    //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10::lang::String* name131862 = (!x10aux::struct_equals(columnNamesInHeader,
                                                                            X10_NULL))
                      ? (x10::lang::String::_make(reinterpret_cast<char*>(((__extension__ ({
                             
                             //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                             x10_int i131863 = e131887;
                             
                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                             org::scalegraph::util::SString ret131864;
                             
                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                             goto __ret131865; __ret131865: {
                             {
                                 
                                 //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                 if (x10aux::nullCheck(columnNamesInHeader)->
                                       FMGL(rail)) {
                                     
                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                     ret131864 = (x10aux::nullCheck(columnNamesInHeader)->
                                                    FMGL(raw))->__apply(i131863);
                                     
                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                     goto __ret131865_end_;
                                 } else {
                                     
                                     //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                     if (true && !(x10aux::nullCheck(columnNamesInHeader)->
                                                     FMGL(region)->contains(
                                                     i131863)))
                                     {
                                         
                                         //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                         x10::array::Array<void>::raiseBoundsError(
                                           i131863);
                                     }
                                     
                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                     ret131864 = (x10aux::nullCheck(columnNamesInHeader)->
                                                    FMGL(raw))->__apply(((x10_int) ((i131863) - (x10aux::nullCheck(columnNamesInHeader)->
                                                                                                   FMGL(layout_min0)))));
                                     
                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                     goto __ret131865_end_;
                                 }
                                 
                             }goto __ret131865_end_; __ret131865_end_: ;
                             }
                             ret131864;
                             }))
                             ).c_str()), true)) : ((!x10aux::struct_equals(columnNames,
                                                                           X10_NULL))
                                                     ? ((__extension__ ({
                                                            
                                                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                            x10_int i131866 =
                                                              attrIndex;
                                                            
                                                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                            x10::lang::String* ret131867;
                                                            
                                                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                            goto __ret131868; __ret131868: {
                                                            {
                                                                
                                                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                if (x10aux::nullCheck(columnNames)->
                                                                      FMGL(rail))
                                                                {
                                                                    
                                                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                    ret131867 =
                                                                      (x10aux::nullCheck(columnNames)->
                                                                         FMGL(raw))->__apply(i131866);
                                                                    
                                                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                    goto __ret131868_end_;
                                                                }
                                                                else
                                                                {
                                                                    
                                                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                    if (true &&
                                                                        !(x10aux::nullCheck(columnNames)->
                                                                            FMGL(region)->contains(
                                                                            i131866)))
                                                                    {
                                                                        
                                                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                        x10::array::Array<void>::raiseBoundsError(
                                                                          i131866);
                                                                    }
                                                                    
                                                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                    ret131867 =
                                                                      (x10aux::nullCheck(columnNames)->
                                                                         FMGL(raw))->__apply(((x10_int) ((i131866) - (x10aux::nullCheck(columnNames)->
                                                                                                                        FMGL(layout_min0)))));
                                                                    
                                                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                    goto __ret131868_end_;
                                                                }
                                                                
                                                            }goto __ret131868_end_; __ret131868_end_: ;
                                                            }
                                                            ret131867;
                                                            }))
                                                            )
                                                          : (x10::lang::String::_make(reinterpret_cast<char*>((org::scalegraph::util::StringFormat_(((__extension__ ({
                                                                 
                                                                 //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                                 x10::lang::String* str131869 =
                                                                   x10aux::makeStringLit("column-%d");
                                                                 (__extension__ ({
                                                                     
                                                                     //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                                     org::scalegraph::util::SString alloc131870 =
                                                                       
                                                                     org::scalegraph::util::SString::_alloc();
                                                                     
                                                                     //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                                     x10::lang::String* str131831 =
                                                                       str131869;
                                                                     
                                                                     //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                                                     alloc131870->
                                                                       FMGL(content) =
                                                                       org::scalegraph::util::StringFromX10String(str131831);
                                                                     alloc131870;
                                                                 }))
                                                                 ;
                                                             }))
                                                             )->FMGL(content),e131887)).c_str()), true)));
                                                   
                         
                         //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int i131851 = attrIndex;
                         
                         //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10::lang::String* v131852 = name131862;
                         
                         //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10::lang::String* ret131853;
                         
                         //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                         (attrNames->FMGL(raw))->__set(i131851, v131852);
                         
                         //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                         ret131853 = v131852;
                         
                         //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                         ret131853;
                         
                         //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int i131854 = attrIndex;
                         
                         //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int v131855 = x10aux::nullCheck((__extension__ ({
                                               
                                               //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                               x10_int i131856 =
                                                 e131887;
                                               
                                               //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                               org::scalegraph::io::impl::CSVAttributeHandler* ret131857;
                                               
                                               //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                               ret131857 =
                                                 (attHandler->
                                                    FMGL(raw))->__apply(i131856);
                                               ret131857;
                                           }))
                                           )->typeId();
                         
                         //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int ret131858;
                         
                         //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                         (typeIds->FMGL(raw))->__set(i131854, v131855);
                         
                         //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                         ret131858 = v131855;
                         
                         //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                         ret131858;
                         
                         //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                         attrIndex = ((x10_int) ((attrIndex) + (((x10_int)1))));
                    }
                    
                }
                }
                
            
            //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::NamedDistData* alloc127225 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::NamedDistData>(), 0, sizeof(org::scalegraph::io::NamedDistData))) org::scalegraph::io::NamedDistData()))
                ;
                
                //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10ConstructorCall_c
                (alloc127225)->::org::scalegraph::io::NamedDistData::_constructor(
                  attrNames, typeIds, attributes, x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL));
                alloc127225;
            }))
            ;
            
        }
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10MethodDecl_c
        org::scalegraph::io::impl::CSVReader* org::scalegraph::io::impl::CSVReader::org__scalegraph__io__impl__CSVReader____this__org__scalegraph__io__impl__CSVReader(
          ) {
            
            //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10Return_c
            return this;
            
        }
        
        //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10ConstructorDecl_c
        void org::scalegraph::io::impl::CSVReader::_constructor(
          ) {
            
            //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.AssignPropertyCall_c
            
        }
        org::scalegraph::io::impl::CSVReader* org::scalegraph::io::impl::CSVReader::_make(
          ) {
            org::scalegraph::io::impl::CSVReader* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVReader>(), 0, sizeof(org::scalegraph::io::impl::CSVReader))) org::scalegraph::io::impl::CSVReader();
            this_->_constructor();
            return this_;
        }
        
        
        const x10aux::serialization_id_t org::scalegraph::io::impl::CSVReader::_serialization_id = 
            x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::CSVReader::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);
        
        void org::scalegraph::io::impl::CSVReader::_serialize_body(x10aux::serialization_buffer& buf) {
            
        }
        
        x10::lang::Reference* org::scalegraph::io::impl::CSVReader::_deserializer(x10aux::deserialization_buffer& buf) {
            org::scalegraph::io::impl::CSVReader* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVReader>(), 0, sizeof(org::scalegraph::io::impl::CSVReader))) org::scalegraph::io::impl::CSVReader();
            buf.record_reference(this_);
            this_->_deserialize_body(buf);
            return this_;
        }
        
        void org::scalegraph::io::impl::CSVReader::_deserialize_body(x10aux::deserialization_buffer& buf) {
            
        }
        
        
    x10aux::RuntimeType org::scalegraph::io::impl::CSVReader::rtt;
    void org::scalegraph::io::impl::CSVReader::_initRTT() {
        if (rtt.initStageOne(&rtt)) return;
        const x10aux::RuntimeType** parents = NULL; 
        rtt.initStageTwo("org.scalegraph.io.impl.CSVReader",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
    }
    
    x10::lang::Fun_0_0<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>::itable<org_scalegraph_io_impl_CSVReader__closure__1>org_scalegraph_io_impl_CSVReader__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVReader__closure__1::__apply, &org_scalegraph_io_impl_CSVReader__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_io_impl_CSVReader__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> >, &org_scalegraph_io_impl_CSVReader__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_io_impl_CSVReader__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVReader__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> >::itable<org_scalegraph_io_impl_CSVReader__closure__2>org_scalegraph_io_impl_CSVReader__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVReader__closure__2::__apply, &org_scalegraph_io_impl_CSVReader__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_io_impl_CSVReader__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> > >, &org_scalegraph_io_impl_CSVReader__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_io_impl_CSVReader__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVReader__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_io_impl_CSVReader__closure__3>org_scalegraph_io_impl_CSVReader__closure__3::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVReader__closure__3::__apply, &org_scalegraph_io_impl_CSVReader__closure__3::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_io_impl_CSVReader__closure__3::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_io_impl_CSVReader__closure__3::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_io_impl_CSVReader__closure__3::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVReader__closure__3::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<x10_int, x10::lang::Any*>::itable<org_scalegraph_io_impl_CSVReader__closure__4>org_scalegraph_io_impl_CSVReader__closure__4::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVReader__closure__4::__apply, &org_scalegraph_io_impl_CSVReader__closure__4::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_io_impl_CSVReader__closure__4::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_int, x10::lang::Any*> >, &org_scalegraph_io_impl_CSVReader__closure__4::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_io_impl_CSVReader__closure__4::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVReader__closure__4::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of CSVReader */
/*************************************************/
/*************************************************/
/* START of CSVReader$ReaderBuffer */
#include <org/scalegraph/io/impl/CSVReader__ReaderBuffer.h>

#include <org/scalegraph/util/MemoryPointer.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/array/Array.h>
#include <org/scalegraph/io/impl/CSVAttributeHandler.h>
#include <x10/lang/Any.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/array/RectRegion1D.h>
#include <x10/array/Region.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Native.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <org/scalegraph/util/MemoryChunkData.h>

//#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10FieldDecl_c

//#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10FieldDecl_c

//#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10FieldDecl_c

//#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10FieldDecl_c

//#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10FieldDecl_c

//#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10FieldDecl_c

//#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::impl::CSVReader__ReaderBuffer::_constructor(x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* attHandler) {
    
    //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.AssignPropertyCall_c
    
    //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(attHandler) = attHandler;
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numElems) = x10aux::nullCheck(attHandler)->FMGL(size);
    
    //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(stride) = org::scalegraph::io::impl::H_CHUNK_SIZE;
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(buffer) = (__extension__ ({
        
        //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10::lang::Any*>* alloc127218 =  ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::Any*> >(), 0, sizeof(x10::array::Array<x10::lang::Any*>))) x10::array::Array<x10::lang::Any*>()))
        ;
        
        //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size131776 = this->FMGL(numElems);
        
        //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::array::RectRegion1D* myReg131774 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg131774)->::x10::array::RectRegion1D::_constructor(((x10_int) ((size131776) - (((x10_int)1)))));
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc127218->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg131774);
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc127218->FMGL(rank) = ((x10_int)1);
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc127218->FMGL(rect) = true;
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc127218->FMGL(zeroBased) = true;
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc127218->FMGL(rail) = true;
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc127218->FMGL(size) = size131776;
        
        //#line 318 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc127218->FMGL(layout_min0) = alloc127218->FMGL(layout_stride1) =
          alloc127218->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 319 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc127218->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
        
        //#line 320 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::util::IndexedMemoryChunk<x10::lang::Any* > r131775 = x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::Any* >(size131776, 8, false, false);
        
        //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i67566max131771 = ((x10_int) ((size131776) - (((x10_int)1))));
        
        //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
        {
            x10_int i131772;
            for (
                 //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                 i131772 = ((x10_int)0); ((i131772) <= (i67566max131771));
                 
                 //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                 i131772 = ((x10_int) ((i131772) + (((x10_int)1))))) {
                
                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i131773 = i131772;
                
                //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                (r131775)->__set(i131773, (__extension__ ({
                    
                    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10_int i131767 = i131773;
                    x10aux::nullCheck((__extension__ ({
                        
                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_int i131768 = i131767;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::io::impl::CSVAttributeHandler* ret131769;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                        goto __ret131770; __ret131770: {
                        {
                            
                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (x10aux::nullCheck(attHandler)->FMGL(rail))
                            {
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret131769 = (x10aux::nullCheck(attHandler)->
                                               FMGL(raw))->__apply(i131768);
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret131770_end_;
                            } else {
                                
                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (true && !(x10aux::nullCheck(attHandler)->
                                                FMGL(region)->contains(i131768)))
                                {
                                    
                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                    x10::array::Array<void>::raiseBoundsError(
                                      i131768);
                                }
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret131769 = (x10aux::nullCheck(attHandler)->
                                               FMGL(raw))->__apply(((x10_int) ((i131768) - (x10aux::nullCheck(attHandler)->
                                                                                              FMGL(layout_min0)))));
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret131770_end_;
                            }
                            
                        }goto __ret131770_end_; __ret131770_end_: ;
                        }
                        ret131769;
                        }))
                        )->createBlockGrowableMemory();
                    }))
                    );
                }
            }
            
        
        //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc127218->FMGL(raw) = r131775;
        alloc127218;
        }))
        ;
    
    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(elemPtrs) = x10aux::alloc<x10_byte*>(sizeof(x10_byte*)*(((x10_long) ((this->
                                                                                       FMGL(stride)) * (((x10_long) (this->
                                                                                                                       FMGL(numElems))))))));
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(chunkSize) = (__extension__ ({
        
        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_long>* alloc127219 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_long> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_long>))) org::scalegraph::util::GrowableMemory<x10_long>()))
        ;
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (alloc127219)->::org::scalegraph::util::GrowableMemory<x10_long>::_constructor(
          ((x10_long)0ll));
        alloc127219;
    }))
    ;
    }
    org::scalegraph::io::impl::CSVReader__ReaderBuffer* org::scalegraph::io::impl::CSVReader__ReaderBuffer::_make(
      x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* attHandler)
    {
        org::scalegraph::io::impl::CSVReader__ReaderBuffer* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVReader__ReaderBuffer>(), 0, sizeof(org::scalegraph::io::impl::CSVReader__ReaderBuffer))) org::scalegraph::io::impl::CSVReader__ReaderBuffer();
        this_->_constructor(attHandler);
        return this_;
    }
    
    
    

//#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10MethodDecl_c

//#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> org::scalegraph::io::impl::CSVReader__ReaderBuffer::nativeParseChunk(
  org::scalegraph::util::MemoryChunk<x10_byte> data){
    return org::scalegraph::io::impl::CSVReaderParseChunk(data, (this)->FMGL(stride), (this)->FMGL(numElems), (this)->FMGL(elemPtrs));
}

//#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::CSVReader__ReaderBuffer::parse(
  org::scalegraph::util::MemoryChunk<x10_byte> data) {
    
    //#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    x10_long data_size = (__extension__ ({
        data->FMGL(data)->FMGL(size);
    }))
    ;
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    x10_long data_off = ((x10_long) (((x10_int)0)));
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    x10_long totalLines = ((x10_long) (((x10_int)0)));
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10While_c
    while (((data_off) < (data_size))) {
        
        //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::tuple::Tuple2<x10_long, x10_long> res =
          this->nativeParseChunk(data->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                                   data_off, ((x10_long) (((__extension__ ({
                                       data->FMGL(data)->
                                         FMGL(size);
                                   }))
                                   ) - (data_off)))));
        
        //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
        data_off = ((x10_long) ((data_off) + (res->FMGL(val1))));
        
        //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_long lines = res->FMGL(val2);
        
        //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
        totalLines = ((x10_long) ((totalLines) + (lines)));
        
        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int i127227max131785 = ((x10_int) ((this->FMGL(numElems)) - (((x10_int)1))));
        
        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
        {
            x10_int i131786;
            for (
                 //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                 i131786 = ((x10_int)0); ((i131786) <= (i127227max131785));
                 
                 //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                 i131786 = ((x10_int) ((i131786) + (((x10_int)1)))))
            {
                
                //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int e131787 = i131786;
                
                //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck((__extension__ ({
                    
                    //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* this131777 =
                      this->FMGL(attHandler);
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i131778 = e131787;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::io::impl::CSVAttributeHandler* ret131779;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret131780; __ret131780: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(this131777)->
                              FMGL(rail)) {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret131779 = (x10aux::nullCheck(this131777)->
                                           FMGL(raw))->__apply(i131778);
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret131780_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(this131777)->
                                            FMGL(region)->contains(
                                            i131778))) {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  i131778);
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret131779 = (x10aux::nullCheck(this131777)->
                                           FMGL(raw))->__apply(((x10_int) ((i131778) - (x10aux::nullCheck(this131777)->
                                                                                          FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret131780_end_;
                        }
                        
                    }goto __ret131780_end_; __ret131780_end_: ;
                    }
                    ret131779;
                    }))
                    )->parseElements(((this->FMGL(elemPtrs)) + (((x10_long) ((((x10_long) (e131787))) * (this->
                                                                                                           FMGL(stride)))))),
                                     ((x10_int) (lines)),
                                     (__extension__ ({
                                         
                                         //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                         x10::array::Array<x10::lang::Any*>* this131781 =
                                           this->FMGL(buffer);
                                         
                                         //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                         x10_int i131782 =
                                           e131787;
                                         
                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                         x10::lang::Any* ret131783;
                                         
                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                         goto __ret131784; __ret131784: {
                                         {
                                             
                                             //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                             if (x10aux::nullCheck(this131781)->
                                                   FMGL(rail))
                                             {
                                                 
                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                 ret131783 =
                                                   (x10aux::nullCheck(this131781)->
                                                      FMGL(raw))->__apply(i131782);
                                                 
                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                 goto __ret131784_end_;
                                             } else {
                                                 
                                                 //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                 if (true &&
                                                     !(x10aux::nullCheck(this131781)->
                                                         FMGL(region)->contains(
                                                         i131782)))
                                                 {
                                                     
                                                     //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                     x10::array::Array<void>::raiseBoundsError(
                                                       i131782);
                                                 }
                                                 
                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                 ret131783 =
                                                   (x10aux::nullCheck(this131781)->
                                                      FMGL(raw))->__apply(((x10_int) ((i131782) - (x10aux::nullCheck(this131781)->
                                                                                                     FMGL(layout_min0)))));
                                                 
                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                 goto __ret131784_end_;
                                             }
                                             
                                         }goto __ret131784_end_; __ret131784_end_: ;
                                         }
                                         ret131783;
                                         }))
                                         );
                }
                }
                
        }
        
        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(this->FMGL(chunkSize))->org::scalegraph::util::GrowableMemory<x10_long>::add(
          totalLines);
    }
    
    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10MethodDecl_c
    org::scalegraph::io::impl::CSVReader__ReaderBuffer* org::scalegraph::io::impl::CSVReader__ReaderBuffer::org__scalegraph__io__impl__CSVReader__ReaderBuffer____this__org__scalegraph__io__impl__CSVReader__ReaderBuffer(
      ) {
        
        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10Return_c
        return this;
        
    }
    const x10aux::serialization_id_t org::scalegraph::io::impl::CSVReader__ReaderBuffer::_serialization_id = 
        x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::CSVReader__ReaderBuffer::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);
    
    void org::scalegraph::io::impl::CSVReader__ReaderBuffer::_serialize_body(x10aux::serialization_buffer& buf) {
        buf.write(this->FMGL(attHandler));
        buf.write(this->FMGL(buffer));
        buf.write(this->FMGL(chunkSize));
        buf.write(this->FMGL(stride));
        buf.write(this->FMGL(numElems));
        
    }
    
    x10::lang::Reference* org::scalegraph::io::impl::CSVReader__ReaderBuffer::_deserializer(x10aux::deserialization_buffer& buf) {
        org::scalegraph::io::impl::CSVReader__ReaderBuffer* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVReader__ReaderBuffer>(), 0, sizeof(org::scalegraph::io::impl::CSVReader__ReaderBuffer))) org::scalegraph::io::impl::CSVReader__ReaderBuffer();
        buf.record_reference(this_);
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void org::scalegraph::io::impl::CSVReader__ReaderBuffer::_deserialize_body(x10aux::deserialization_buffer& buf) {
        FMGL(attHandler) = buf.read<x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>*>();
        FMGL(buffer) = buf.read<x10::array::Array<x10::lang::Any*>*>();
        FMGL(chunkSize) = buf.read<org::scalegraph::util::GrowableMemory<x10_long>*>();
        FMGL(stride) = buf.read<x10_long>();
        FMGL(numElems) = buf.read<x10_int>();
    }
    
    
x10aux::RuntimeType org::scalegraph::io::impl::CSVReader__ReaderBuffer::rtt;
void org::scalegraph::io::impl::CSVReader__ReaderBuffer::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.io.impl.CSVReader.ReaderBuffer",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of CSVReader$ReaderBuffer */
/*************************************************/
