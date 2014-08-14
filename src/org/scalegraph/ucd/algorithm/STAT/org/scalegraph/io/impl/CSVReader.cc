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
            x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* alloc84868 =
               ((new (memset(x10aux::alloc<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*> >(), 0, sizeof(x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>))) x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>()))
            ;
            
            //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int size127613 = nthreads;
            
            //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::array::RectRegion1D* myReg127611 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (myReg127611)->::x10::array::RectRegion1D::_constructor(
              ((x10_int) ((size127613) - (((x10_int)1)))));
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc84868->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg127611);
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc84868->FMGL(rank) = ((x10_int)1);
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc84868->FMGL(rect) = true;
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc84868->FMGL(zeroBased) = true;
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc84868->FMGL(rail) = true;
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc84868->FMGL(size) = size127613;
            
            //#line 318 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc84868->FMGL(layout_min0) = alloc84868->FMGL(layout_stride1) =
              alloc84868->FMGL(layout_min1) = ((x10_int)0);
            
            //#line 319 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc84868->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
            
            //#line 320 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::util::IndexedMemoryChunk<org::scalegraph::io::impl::CSVReader__ReaderBuffer* > r127612 =
              x10::util::IndexedMemoryChunk<void>::allocate<org::scalegraph::io::impl::CSVReader__ReaderBuffer* >(size127613, 8, false, false);
            
            //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i69157max127608 = ((x10_int) ((size127613) - (((x10_int)1))));
            
            //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
            {
                x10_int i127609;
                for (
                     //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     i127609 = ((x10_int)0); ((i127609) <= (i69157max127608));
                     
                     //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                     i127609 = ((x10_int) ((i127609) + (((x10_int)1)))))
                {
                    
                    //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i127610 = i127609;
                    
                    //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (r127612)->__set(i127610, (__extension__ ({
                        
                        //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                        x10_int i127606 = i127610;
                        (__extension__ ({
                            
                            //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::io::impl::CSVReader__ReaderBuffer* alloc127607 =
                               ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVReader__ReaderBuffer>(), 0, sizeof(org::scalegraph::io::impl::CSVReader__ReaderBuffer))) org::scalegraph::io::impl::CSVReader__ReaderBuffer()))
                            ;
                            
                            //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10ConstructorCall_c
                            (alloc127607)->::org::scalegraph::io::impl::CSVReader__ReaderBuffer::_constructor(
                              attHandler);
                            alloc127607;
                        }))
                        ;
                    }))
                    );
                }
            }
            
            //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc84868->FMGL(raw) = r127612;
            alloc84868;
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
            x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* this127491 =
              bufferPLH->x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>::__apply();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i127490 = tid;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::io::impl::CSVReader__ReaderBuffer* ret127492;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret127493; __ret127493: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this127491)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127492 = (x10aux::nullCheck(this127491)->FMGL(raw))->__apply(i127490);
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret127493_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this127491)->
                                    FMGL(region)->contains(i127490)))
                    {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          i127490);
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127492 = (x10aux::nullCheck(this127491)->FMGL(raw))->__apply(((x10_int) ((i127490) - (x10aux::nullCheck(this127491)->
                                                                                                               FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret127493_end_;
                }
                
            }goto __ret127493_end_; __ret127493_end_: ;
            }
            ret127492;
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
    org::scalegraph::util::MemoryChunk<x10_long> __apply(x10_int tid127624) {
        
        //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10Return_c
        return x10aux::nullCheck(x10aux::nullCheck((__extension__ ({
                                     
                                     //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                     x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* this127625 =
                                       bufferPLH->x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>::__apply();
                                     
                                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                     x10_int i127626 = tid127624;
                                     
                                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                     org::scalegraph::io::impl::CSVReader__ReaderBuffer* ret127627;
                                     
                                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                     goto __ret127628; __ret127628: {
                                     {
                                         
                                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                         if (x10aux::nullCheck(this127625)->
                                               FMGL(rail)) {
                                             
                                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret127627 = (x10aux::nullCheck(this127625)->
                                                            FMGL(raw))->__apply(i127626);
                                             
                                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                             goto __ret127628_end_;
                                         } else {
                                             
                                             //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                             if (true && !(x10aux::nullCheck(this127625)->
                                                             FMGL(region)->contains(
                                                             i127626)))
                                             {
                                                 
                                                 //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                 x10::array::Array<void>::raiseBoundsError(
                                                   i127626);
                                             }
                                             
                                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret127627 = (x10aux::nullCheck(this127625)->
                                                            FMGL(raw))->__apply(((x10_int) ((i127626) - (x10aux::nullCheck(this127625)->
                                                                                                           FMGL(layout_min0)))));
                                             
                                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                             goto __ret127628_end_;
                                         }
                                         
                                     }goto __ret127628_end_; __ret127628_end_: ;
                                     }
                                     ret127627;
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
    x10::lang::Any* __apply(x10_int tid127629) {
        
        //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10::lang::Any*>* this127630 = x10aux::nullCheck((__extension__ ({
                                                                 
                                                                 //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                                                 x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* this127631 =
                                                                   bufferPLH->x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>::__apply();
                                                                 
                                                                 //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                 x10_int i127632 =
                                                                   tid127629;
                                                                 
                                                                 //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                 org::scalegraph::io::impl::CSVReader__ReaderBuffer* ret127633;
                                                                 
                                                                 //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                 goto __ret127634; __ret127634: {
                                                                 {
                                                                     
                                                                     //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                     if (x10aux::nullCheck(this127631)->
                                                                           FMGL(rail))
                                                                     {
                                                                         
                                                                         //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                         ret127633 =
                                                                           (x10aux::nullCheck(this127631)->
                                                                              FMGL(raw))->__apply(i127632);
                                                                         
                                                                         //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                         goto __ret127634_end_;
                                                                     }
                                                                     else
                                                                     {
                                                                         
                                                                         //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                         if (true &&
                                                                             !(x10aux::nullCheck(this127631)->
                                                                                 FMGL(region)->contains(
                                                                                 i127632)))
                                                                         {
                                                                             
                                                                             //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                             x10::array::Array<void>::raiseBoundsError(
                                                                               i127632);
                                                                         }
                                                                         
                                                                         //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                         ret127633 =
                                                                           (x10aux::nullCheck(this127631)->
                                                                              FMGL(raw))->__apply(((x10_int) ((i127632) - (x10aux::nullCheck(this127631)->
                                                                                                                             FMGL(layout_min0)))));
                                                                         
                                                                         //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                         goto __ret127634_end_;
                                                                     }
                                                                     
                                                                 }goto __ret127634_end_; __ret127634_end_: ;
                                                                 }
                                                                 ret127633;
                                                                 }))
                                                                 )->
                                                                   FMGL(buffer);
                                                             
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i127635 = e127675;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::lang::Any* ret127636;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret127637; __ret127637: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this127630)->FMGL(rail))
                {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127636 = (x10aux::nullCheck(this127630)->
                                   FMGL(raw))->__apply(i127635);
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret127637_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this127630)->
                                    FMGL(region)->contains(
                                    i127635))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          i127635);
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127636 = (x10aux::nullCheck(this127630)->
                                   FMGL(raw))->__apply(((x10_int) ((i127635) - (x10aux::nullCheck(this127630)->
                                                                                  FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret127637_end_;
                }
                
            }goto __ret127637_end_; __ret127637_end_: ;
            }
            ret127636;
            }))
            ;
            
        }
        
        // captured environment
        x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> bufferPLH;
        x10_int e127675;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->bufferPLH);
            buf.write(this->e127675);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_io_impl_CSVReader__closure__4* storage = x10aux::alloc<org_scalegraph_io_impl_CSVReader__closure__4>();
            buf.record_reference(storage);
            x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> that_bufferPLH = buf.read<x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> >();
            x10_int that_e127675 = buf.read<x10_int>();
            org_scalegraph_io_impl_CSVReader__closure__4* this_ = new (storage) org_scalegraph_io_impl_CSVReader__closure__4(that_bufferPLH, that_e127675);
            return this_;
        }
        
        org_scalegraph_io_impl_CSVReader__closure__4(x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> bufferPLH, x10_int e127675) : bufferPLH(bufferPLH), e127675(e127675) { }
        
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
    x10_int size127659 = x10aux::nullCheck(columnDef)->FMGL(size);
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::array::RectRegion1D* myReg127576 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
    ;
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg127576)->::x10::array::RectRegion1D::_constructor(
      ((x10_int) ((size127659) - (((x10_int)1)))));
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg127576);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(rank) = ((x10_int)1);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(rect) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(zeroBased) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(rail) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(size) = size127659;
    
    //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(layout_min0) = attHandler->FMGL(layout_stride1) =
      attHandler->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
    
    //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<org::scalegraph::io::impl::CSVAttributeHandler* >(size127659, 8, false, true);
    
    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::FileNameProvider* fman = (__extension__ ({
        
        //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString path126598 = path;
        org::scalegraph::io::impl::FileNameProvider::create(
          path126598, true, false);
    }))
    ;
    
    //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    x10_boolean includeDQ = false;
    
    //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    x10_long dataOffset = ((x10_long) (((x10_int)0)));
    
    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::FileReader* reader127660 =  ((new (memset(x10aux::alloc<org::scalegraph::io::FileReader>(), 0, sizeof(org::scalegraph::io::FileReader))) org::scalegraph::io::FileReader()))
    ;
    
    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10ConstructorCall_c
    (reader127660)->::org::scalegraph::io::FileReader::_constructor(
      fman->fileName(((x10_int)0)));
    
    //#line 138 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString headerLine127661 = reader127660->org::scalegraph::io::FileReader::fastReadLine();
    
    //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
    if (includeHeader) {
        
        //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::impl::NativeCSVHeader* header127662 =
          org::scalegraph::io::impl::readCSVHeader(headerLine127661);
        
        //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
        if (((x10aux::nullCheck(columnDef)->FMGL(size)) > ((x10_int) (header127662)->attrs.size())))
        {
            
            //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
            (header127662)->~NativeCSVHeader(); x10aux::dealloc(header127662);
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
            reader127660->org::scalegraph::io::FileReader::close();
            
            //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::io::IOException::_make(x10aux::makeStringLit("The file does not contain enough attributes."))));
        }
        
        //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
        dataOffset = (__extension__ ({
            reader127660->FMGL(fileOffset);
        }))
        ;
        
        //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
        columnNamesInHeader = (__extension__ ({
            
            //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<org::scalegraph::util::SString>* alloc127663 =
               ((new (memset(x10aux::alloc<x10::array::Array<org::scalegraph::util::SString> >(), 0, sizeof(x10::array::Array<org::scalegraph::util::SString>))) x10::array::Array<org::scalegraph::util::SString>()))
            ;
            
            //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int size127578 = numColumns;
            
            //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::array::RectRegion1D* myReg127577 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (myReg127577)->::x10::array::RectRegion1D::_constructor(
              ((x10_int) ((size127578) - (((x10_int)1)))));
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127663->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg127577);
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127663->FMGL(rank) = ((x10_int)1);
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127663->FMGL(rect) = true;
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127663->FMGL(zeroBased) = true;
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127663->FMGL(rail) = true;
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127663->FMGL(size) = size127578;
            
            //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127663->FMGL(layout_min0) = alloc127663->
                                               FMGL(layout_stride1) =
              alloc127663->FMGL(layout_min1) = ((x10_int)0);
            
            //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127663->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
            
            //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127663->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<org::scalegraph::util::SString >(size127578, 8, false, true);
            alloc127663;
        }))
        ;
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::array::Region* p127590 = attHandler->FMGL(region);
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int i84892min127591 = p127590->min(((x10_int)0));
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int i84892max127592 = p127590->max(((x10_int)0));
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
        {
            x10_int i127593;
            for (
                 //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                 i127593 = i84892min127591; ((i127593) <= (i84892max127592));
                 
                 //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                 i127593 = ((x10_int) ((i127593) + (((x10_int)1)))))
            {
                
                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int i127594 = i127593;
                
                //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::NativeCSVAttribute* att127585 =
                  &((header127662)->attrs[i127594]);
                
                //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int typeId127586 = (x10_boolean) (att127585)->includeType
                  ? (org::scalegraph::id::Type::typeId(x10::lang::String::_make(reinterpret_cast<char*>(((att127585)->typeName).c_str()), true)))
                  : ((__extension__ ({
                         
                         //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int i127587 = i127594;
                         
                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int ret127588;
                         
                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                         goto __ret127589; __ret127589: {
                         {
                             
                             //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                             if (x10aux::nullCheck(columnDef)->
                                   FMGL(rail)) {
                                 
                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                 ret127588 = (x10aux::nullCheck(columnDef)->
                                                FMGL(raw))->__apply(i127587);
                                 
                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                 goto __ret127589_end_;
                             } else {
                                 
                                 //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                 if (true && !(x10aux::nullCheck(columnDef)->
                                                 FMGL(region)->contains(
                                                 i127587)))
                                 {
                                     
                                     //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                     x10::array::Array<void>::raiseBoundsError(
                                       i127587);
                                 }
                                 
                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                 ret127588 = (x10aux::nullCheck(columnDef)->
                                                FMGL(raw))->__apply(((x10_int) ((i127587) - (x10aux::nullCheck(columnDef)->
                                                                                               FMGL(layout_min0)))));
                                 
                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                 goto __ret127589_end_;
                             }
                             
                         }goto __ret127589_end_; __ret127589_end_: ;
                         }
                         ret127588;
                         }))
                         );
                     
                
                //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i127579 = i127594;
                
                //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SString v127580 = (att127585)->name;
                
                //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SString ret127581;
                
                //#line 555 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(columnNamesInHeader)->
                      FMGL(rail)) {
                    
                    //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (x10aux::nullCheck(columnNamesInHeader)->
                       FMGL(raw))->__set(i127579, v127580);
                } else {
                    
                    //#line 559 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(columnNamesInHeader)->
                                    FMGL(region)->contains(
                                    i127579))) {
                        
                        //#line 560 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          i127579);
                    }
                    
                    //#line 562 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (x10aux::nullCheck(columnNamesInHeader)->
                       FMGL(raw))->__set(((x10_int) ((i127579) - (x10aux::nullCheck(columnNamesInHeader)->
                                                                    FMGL(layout_min0)))), v127580);
                }
                
                //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret127581 = v127580;
                
                //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                ret127581;
                
                //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i127582 = i127594;
                
                //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler* v127583 =
                  org::scalegraph::io::impl::CSVAttributeHandler::create(
                    typeId127586, (x10_boolean) (att127585)->doubleQuoated);
                
                //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler* ret127584;
                
                //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                (attHandler->FMGL(raw))->__set(i127582, v127583);
                
                //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret127584 = v127583;
                
                //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                ret127584;
                
                //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
                if ((x10_boolean) (att127585)->doubleQuoated)
                {
                    
                    //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                    includeDQ = true;
                }
                }
            }
            
        
        //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
        (header127662)->~NativeCSVHeader(); x10aux::dealloc(header127662);
        } else {
            
            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
            includeDQ = (x10aux::struct_equals((x10_char((x10_int)((__extension__ ({
                                                   
                                                   //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                                   org::scalegraph::util::MemoryChunk<x10_byte> this127664 =
                                                     (__extension__ ({
                                                       
                                                       //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                                       org::scalegraph::util::SString this127665 =
                                                         headerLine127661->org::scalegraph::util::SString::trim();
                                                       this127665->
                                                         FMGL(content);
                                                   }))
                                                   ;
                                                   
                                                   //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                                                   ;
                                                   
                                                   //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                   x10_byte ret127666;
                                                   {
                                                       
                                                       //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                       if (!((this127664->
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
                                                           ((((x10_long) (((x10_int)0)))) >= (this127664->
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
                                                   ret127666 =
                                                     (this127664->
                                                        FMGL(data))[((x10_int)0)];
                                                   ret127666;
                                               }))
                                               ))), ((x10_char)'\"')));
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10::array::Region* p127601 = attHandler->FMGL(region);
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10_int i84913min127602 = p127601->min(((x10_int)0));
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10_int i84913max127603 = p127601->max(((x10_int)0));
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
            {
                x10_int i127604;
                for (
                     //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                     i127604 = i84913min127602; ((i127604) <= (i84913max127603));
                     
                     //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                     i127604 = ((x10_int) ((i127604) + (((x10_int)1)))))
                {
                    
                    //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10_int i127605 = i127604;
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i127595 = i127605;
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::io::impl::CSVAttributeHandler* v127596 =
                      org::scalegraph::io::impl::CSVAttributeHandler::create(
                        (__extension__ ({
                            
                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i127597 = i127605;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int ret127598;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret127599; __ret127599: {
                            {
                                
                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(columnDef)->
                                      FMGL(rail)) {
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret127598 = (x10aux::nullCheck(columnDef)->
                                                   FMGL(raw))->__apply(i127597);
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret127599_end_;
                                } else {
                                    
                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (true && !(x10aux::nullCheck(columnDef)->
                                                    FMGL(region)->contains(
                                                    i127597)))
                                    {
                                        
                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                        x10::array::Array<void>::raiseBoundsError(
                                          i127597);
                                    }
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret127598 = (x10aux::nullCheck(columnDef)->
                                                   FMGL(raw))->__apply(((x10_int) ((i127597) - (x10aux::nullCheck(columnDef)->
                                                                                                  FMGL(layout_min0)))));
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret127599_end_;
                                }
                                
                            }goto __ret127599_end_; __ret127599_end_: ;
                            }
                            ret127598;
                            }))
                            , includeDQ);
                      
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::io::impl::CSVAttributeHandler* ret127600;
                    
                    //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (attHandler->FMGL(raw))->__set(i127595, v127596);
                    
                    //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127600 = v127596;
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                    ret127600;
                    }
                }
                
            }
            
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
        reader127660->org::scalegraph::io::FileReader::close();
        
        //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> bufferPLH =
          x10::lang::PlaceLocalHandle<void>::makeFlat<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* >(
            x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> >(sizeof(org_scalegraph_io_impl_CSVReader__closure__1)))org_scalegraph_io_impl_CSVReader__closure__1(nthreads, attHandler))));
        
        //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::impl::InputSplitter* splitter =
          includeDQ ? ((reinterpret_cast<org::scalegraph::io::impl::InputSplitter*>((__extension__ ({
                            
                            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::io::impl::DoubleQuoatedCSVSplitter* alloc84869 =
                               ((new (memset(x10aux::alloc<org::scalegraph::io::impl::DoubleQuoatedCSVSplitter>(), 0, sizeof(org::scalegraph::io::impl::DoubleQuoatedCSVSplitter))) org::scalegraph::io::impl::DoubleQuoatedCSVSplitter()))
                            ;
                            alloc84869;
                        }))
                        ))) : ((reinterpret_cast<org::scalegraph::io::impl::InputSplitter*>((__extension__ ({
                                    
                                    //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::io::impl::LineBreakSplitter* alloc84870 =
                                       ((new (memset(x10aux::alloc<org::scalegraph::io::impl::LineBreakSplitter>(), 0, sizeof(org::scalegraph::io::impl::LineBreakSplitter))) org::scalegraph::io::impl::LineBreakSplitter()))
                                    ;
                                    alloc84870;
                                }))
                                )));
        
        //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
        splitter->split(team, fman, dataOffset, nthreads,
                        reinterpret_cast<x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> >*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> > >(sizeof(org_scalegraph_io_impl_CSVReader__closure__2)))org_scalegraph_io_impl_CSVReader__closure__2(bufferPLH))));
        
        //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int enabledColumns = ((x10_int)0);
        
        //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int i84933max127667 = ((x10_int) ((numColumns) - (((x10_int)1))));
        
        //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
        {
            x10_int i127668;
            for (
                 //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                 i127668 = ((x10_int)0); ((i127668) <= (i84933max127667));
                 
                 //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                 i127668 = ((x10_int) ((i127668) + (((x10_int)1)))))
            {
                
                //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int e127669 = i127668;
                
                //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
                if (!(x10aux::nullCheck((__extension__ ({
                          
                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10_int i127614 = e127669;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::io::impl::CSVAttributeHandler* ret127615;
                          
                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                          ret127615 = (attHandler->FMGL(raw))->__apply(i127614);
                          ret127615;
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
        x10_int size127670 = enabledColumns;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::array::RectRegion1D* myReg127616 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg127616)->::x10::array::RectRegion1D::_constructor(
          ((x10_int) ((size127670) - (((x10_int)1)))));
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg127616);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(rank) = ((x10_int)1);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(rect) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(zeroBased) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(rail) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(size) = size127670;
        
        //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(layout_min0) = attributes->FMGL(layout_stride1) =
          attributes->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
        
        //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::Any* >(size127670, 8, false, true);
        
        //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10::lang::String*>* attrNames =
           ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::String*> >(), 0, sizeof(x10::array::Array<x10::lang::String*>))) x10::array::Array<x10::lang::String*>()))
        ;
        
        //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size127671 = enabledColumns;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::array::RectRegion1D* myReg127617 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg127617)->::x10::array::RectRegion1D::_constructor(
          ((x10_int) ((size127671) - (((x10_int)1)))));
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg127617);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(rank) = ((x10_int)1);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(rect) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(zeroBased) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(rail) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(size) = size127671;
        
        //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(layout_min0) = attrNames->FMGL(layout_stride1) =
          attrNames->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
        
        //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::String* >(size127671, 8, false, true);
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_int>* typeIds =  ((new (memset(x10aux::alloc<x10::array::Array<x10_int> >(), 0, sizeof(x10::array::Array<x10_int>))) x10::array::Array<x10_int>()))
        ;
        
        //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size127672 = enabledColumns;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::array::RectRegion1D* myReg127618 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg127618)->::x10::array::RectRegion1D::_constructor(
          ((x10_int) ((size127672) - (((x10_int)1)))));
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg127618);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(rank) = ((x10_int)1);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(rect) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(zeroBased) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(rail) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(size) = size127672;
        
        //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(layout_min0) = typeIds->FMGL(layout_stride1) =
          typeIds->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
        
        //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10_int >(size127672, 8, false, true);
        
        //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int attrIndex = ((x10_int)0);
        
        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int i84951max127673 = ((x10_int) ((numColumns) - (((x10_int)1))));
        
        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
        {
            x10_int i127674;
            for (
                 //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                 i127674 = ((x10_int)0); ((i127674) <= (i84951max127673));
                 
                 //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                 i127674 = ((x10_int) ((i127674) + (((x10_int)1)))))
            {
                
                //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int e127675 = i127674;
                
                //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
                if (!(x10aux::nullCheck((__extension__ ({
                          
                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10_int i127647 = e127675;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::io::impl::CSVAttributeHandler* ret127648;
                          
                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                          ret127648 = (attHandler->FMGL(raw))->__apply(i127647);
                          ret127648;
                      }))
                      )->isSkip())) {
                    
                    //#line 197 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10_int attrIndex_127649 = attrIndex;
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i127620 = attrIndex_127649;
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Any* v127621 = x10aux::nullCheck((__extension__ ({
                                                  
                                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10_int i127622 =
                                                    e127675;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  org::scalegraph::io::impl::CSVAttributeHandler* ret127623;
                                                  
                                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                  ret127623 =
                                                    (attHandler->
                                                       FMGL(raw))->__apply(i127622);
                                                  ret127623;
                                              }))
                                              )->mergeResult(
                                                team, nthreads,
                                                reinterpret_cast<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_io_impl_CSVReader__closure__3)))org_scalegraph_io_impl_CSVReader__closure__3(bufferPLH))),
                                                reinterpret_cast<x10::lang::Fun_0_1<x10_int, x10::lang::Any*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, x10::lang::Any*> >(sizeof(org_scalegraph_io_impl_CSVReader__closure__4)))org_scalegraph_io_impl_CSVReader__closure__4(bufferPLH, e127675))));
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Any* ret127638;
                    
                    //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (attributes->FMGL(raw))->__set(i127620, v127621);
                    
                    //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret127638 = v127621;
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                    ret127638;
                    
                    //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10::lang::String* name127650 = (!x10aux::struct_equals(columnNamesInHeader,
                                                                            X10_NULL))
                      ? (x10::lang::String::_make(reinterpret_cast<char*>(((__extension__ ({
                             
                             //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                             x10_int i127651 = e127675;
                             
                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                             org::scalegraph::util::SString ret127652;
                             
                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                             goto __ret127653; __ret127653: {
                             {
                                 
                                 //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                 if (x10aux::nullCheck(columnNamesInHeader)->
                                       FMGL(rail)) {
                                     
                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                     ret127652 = (x10aux::nullCheck(columnNamesInHeader)->
                                                    FMGL(raw))->__apply(i127651);
                                     
                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                     goto __ret127653_end_;
                                 } else {
                                     
                                     //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                     if (true && !(x10aux::nullCheck(columnNamesInHeader)->
                                                     FMGL(region)->contains(
                                                     i127651)))
                                     {
                                         
                                         //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                         x10::array::Array<void>::raiseBoundsError(
                                           i127651);
                                     }
                                     
                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                     ret127652 = (x10aux::nullCheck(columnNamesInHeader)->
                                                    FMGL(raw))->__apply(((x10_int) ((i127651) - (x10aux::nullCheck(columnNamesInHeader)->
                                                                                                   FMGL(layout_min0)))));
                                     
                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                     goto __ret127653_end_;
                                 }
                                 
                             }goto __ret127653_end_; __ret127653_end_: ;
                             }
                             ret127652;
                             }))
                             ).c_str()), true)) : ((!x10aux::struct_equals(columnNames,
                                                                           X10_NULL))
                                                     ? ((__extension__ ({
                                                            
                                                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                            x10_int i127654 =
                                                              attrIndex;
                                                            
                                                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                            x10::lang::String* ret127655;
                                                            
                                                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                            goto __ret127656; __ret127656: {
                                                            {
                                                                
                                                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                if (x10aux::nullCheck(columnNames)->
                                                                      FMGL(rail))
                                                                {
                                                                    
                                                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                    ret127655 =
                                                                      (x10aux::nullCheck(columnNames)->
                                                                         FMGL(raw))->__apply(i127654);
                                                                    
                                                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                    goto __ret127656_end_;
                                                                }
                                                                else
                                                                {
                                                                    
                                                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                    if (true &&
                                                                        !(x10aux::nullCheck(columnNames)->
                                                                            FMGL(region)->contains(
                                                                            i127654)))
                                                                    {
                                                                        
                                                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                        x10::array::Array<void>::raiseBoundsError(
                                                                          i127654);
                                                                    }
                                                                    
                                                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                    ret127655 =
                                                                      (x10aux::nullCheck(columnNames)->
                                                                         FMGL(raw))->__apply(((x10_int) ((i127654) - (x10aux::nullCheck(columnNames)->
                                                                                                                        FMGL(layout_min0)))));
                                                                    
                                                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                    goto __ret127656_end_;
                                                                }
                                                                
                                                            }goto __ret127656_end_; __ret127656_end_: ;
                                                            }
                                                            ret127655;
                                                            }))
                                                            )
                                                          : (x10::lang::String::_make(reinterpret_cast<char*>((org::scalegraph::util::StringFormat_(((__extension__ ({
                                                                 
                                                                 //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                                 x10::lang::String* str127657 =
                                                                   x10aux::makeStringLit("column-%d");
                                                                 (__extension__ ({
                                                                     
                                                                     //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                                     org::scalegraph::util::SString alloc127658 =
                                                                       
                                                                     org::scalegraph::util::SString::_alloc();
                                                                     
                                                                     //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                                     x10::lang::String* str127619 =
                                                                       str127657;
                                                                     
                                                                     //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                                                     alloc127658->
                                                                       FMGL(content) =
                                                                       org::scalegraph::util::StringFromX10String(str127619);
                                                                     alloc127658;
                                                                 }))
                                                                 ;
                                                             }))
                                                             )->FMGL(content),e127675)).c_str()), true)));
                                                   
                         
                         //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int i127639 = attrIndex;
                         
                         //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10::lang::String* v127640 = name127650;
                         
                         //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10::lang::String* ret127641;
                         
                         //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                         (attrNames->FMGL(raw))->__set(i127639, v127640);
                         
                         //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                         ret127641 = v127640;
                         
                         //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                         ret127641;
                         
                         //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int i127642 = attrIndex;
                         
                         //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int v127643 = x10aux::nullCheck((__extension__ ({
                                               
                                               //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                               x10_int i127644 =
                                                 e127675;
                                               
                                               //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                               org::scalegraph::io::impl::CSVAttributeHandler* ret127645;
                                               
                                               //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                               ret127645 =
                                                 (attHandler->
                                                    FMGL(raw))->__apply(i127644);
                                               ret127645;
                                           }))
                                           )->typeId();
                         
                         //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int ret127646;
                         
                         //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                         (typeIds->FMGL(raw))->__set(i127642, v127643);
                         
                         //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                         ret127646 = v127643;
                         
                         //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                         ret127646;
                         
                         //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                         attrIndex = ((x10_int) ((attrIndex) + (((x10_int)1))));
                    }
                    
                }
                }
                
            
            //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::NamedDistData* alloc84871 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::NamedDistData>(), 0, sizeof(org::scalegraph::io::NamedDistData))) org::scalegraph::io::NamedDistData()))
                ;
                
                //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10ConstructorCall_c
                (alloc84871)->::org::scalegraph::io::NamedDistData::_constructor(
                  attrNames, typeIds, attributes, x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL));
                alloc84871;
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
        x10::array::Array<x10::lang::Any*>* alloc84864 =  ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::Any*> >(), 0, sizeof(x10::array::Array<x10::lang::Any*>))) x10::array::Array<x10::lang::Any*>()))
        ;
        
        //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size127564 = this->FMGL(numElems);
        
        //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::array::RectRegion1D* myReg127562 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg127562)->::x10::array::RectRegion1D::_constructor(((x10_int) ((size127564) - (((x10_int)1)))));
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84864->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg127562);
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84864->FMGL(rank) = ((x10_int)1);
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84864->FMGL(rect) = true;
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84864->FMGL(zeroBased) = true;
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84864->FMGL(rail) = true;
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84864->FMGL(size) = size127564;
        
        //#line 318 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84864->FMGL(layout_min0) = alloc84864->FMGL(layout_stride1) =
          alloc84864->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 319 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84864->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
        
        //#line 320 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::util::IndexedMemoryChunk<x10::lang::Any* > r127563 = x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::Any* >(size127564, 8, false, false);
        
        //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i69157max127559 = ((x10_int) ((size127564) - (((x10_int)1))));
        
        //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
        {
            x10_int i127560;
            for (
                 //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                 i127560 = ((x10_int)0); ((i127560) <= (i69157max127559));
                 
                 //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                 i127560 = ((x10_int) ((i127560) + (((x10_int)1))))) {
                
                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i127561 = i127560;
                
                //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                (r127563)->__set(i127561, (__extension__ ({
                    
                    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10_int i127555 = i127561;
                    x10aux::nullCheck((__extension__ ({
                        
                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_int i127556 = i127555;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::io::impl::CSVAttributeHandler* ret127557;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                        goto __ret127558; __ret127558: {
                        {
                            
                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (x10aux::nullCheck(attHandler)->FMGL(rail))
                            {
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret127557 = (x10aux::nullCheck(attHandler)->
                                               FMGL(raw))->__apply(i127556);
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret127558_end_;
                            } else {
                                
                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (true && !(x10aux::nullCheck(attHandler)->
                                                FMGL(region)->contains(i127556)))
                                {
                                    
                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                    x10::array::Array<void>::raiseBoundsError(
                                      i127556);
                                }
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret127557 = (x10aux::nullCheck(attHandler)->
                                               FMGL(raw))->__apply(((x10_int) ((i127556) - (x10aux::nullCheck(attHandler)->
                                                                                              FMGL(layout_min0)))));
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret127558_end_;
                            }
                            
                        }goto __ret127558_end_; __ret127558_end_: ;
                        }
                        ret127557;
                        }))
                        )->createBlockGrowableMemory();
                    }))
                    );
                }
            }
            
        
        //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84864->FMGL(raw) = r127563;
        alloc84864;
        }))
        ;
    
    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(elemPtrs) = x10aux::alloc<x10_byte*>(sizeof(x10_byte*)*(((x10_long) ((this->
                                                                                       FMGL(stride)) * (((x10_long) (this->
                                                                                                                       FMGL(numElems))))))));
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(chunkSize) = (__extension__ ({
        
        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_long>* alloc84865 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_long> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_long>))) org::scalegraph::util::GrowableMemory<x10_long>()))
        ;
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (alloc84865)->::org::scalegraph::util::GrowableMemory<x10_long>::_constructor(
          ((x10_long)0ll));
        alloc84865;
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
        x10_int i84873max127573 = ((x10_int) ((this->FMGL(numElems)) - (((x10_int)1))));
        
        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
        {
            x10_int i127574;
            for (
                 //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                 i127574 = ((x10_int)0); ((i127574) <= (i84873max127573));
                 
                 //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                 i127574 = ((x10_int) ((i127574) + (((x10_int)1)))))
            {
                
                //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int e127575 = i127574;
                
                //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck((__extension__ ({
                    
                    //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* this127565 =
                      this->FMGL(attHandler);
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i127566 = e127575;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::io::impl::CSVAttributeHandler* ret127567;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret127568; __ret127568: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(this127565)->
                              FMGL(rail)) {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret127567 = (x10aux::nullCheck(this127565)->
                                           FMGL(raw))->__apply(i127566);
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret127568_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(this127565)->
                                            FMGL(region)->contains(
                                            i127566))) {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  i127566);
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret127567 = (x10aux::nullCheck(this127565)->
                                           FMGL(raw))->__apply(((x10_int) ((i127566) - (x10aux::nullCheck(this127565)->
                                                                                          FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret127568_end_;
                        }
                        
                    }goto __ret127568_end_; __ret127568_end_: ;
                    }
                    ret127567;
                    }))
                    )->parseElements(((this->FMGL(elemPtrs)) + (((x10_long) ((((x10_long) (e127575))) * (this->
                                                                                                           FMGL(stride)))))),
                                     ((x10_int) (lines)),
                                     (__extension__ ({
                                         
                                         //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                         x10::array::Array<x10::lang::Any*>* this127569 =
                                           this->FMGL(buffer);
                                         
                                         //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                         x10_int i127570 =
                                           e127575;
                                         
                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                         x10::lang::Any* ret127571;
                                         
                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                         goto __ret127572; __ret127572: {
                                         {
                                             
                                             //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                             if (x10aux::nullCheck(this127569)->
                                                   FMGL(rail))
                                             {
                                                 
                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                 ret127571 =
                                                   (x10aux::nullCheck(this127569)->
                                                      FMGL(raw))->__apply(i127570);
                                                 
                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                 goto __ret127572_end_;
                                             } else {
                                                 
                                                 //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                 if (true &&
                                                     !(x10aux::nullCheck(this127569)->
                                                         FMGL(region)->contains(
                                                         i127570)))
                                                 {
                                                     
                                                     //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                     x10::array::Array<void>::raiseBoundsError(
                                                       i127570);
                                                 }
                                                 
                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                 ret127571 =
                                                   (x10aux::nullCheck(this127569)->
                                                      FMGL(raw))->__apply(((x10_int) ((i127570) - (x10aux::nullCheck(this127569)->
                                                                                                     FMGL(layout_min0)))));
                                                 
                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                 goto __ret127572_end_;
                                             }
                                             
                                         }goto __ret127572_end_; __ret127572_end_: ;
                                         }
                                         ret127571;
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
