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
            x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* alloc128771 =
               ((new (memset(x10aux::alloc<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*> >(), 0, sizeof(x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>))) x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>()))
            ;
            
            //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int size133374 = nthreads;
            
            //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::array::RectRegion1D* myReg133372 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (myReg133372)->::x10::array::RectRegion1D::_constructor(
              ((x10_int) ((size133374) - (((x10_int)1)))));
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc128771->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg133372);
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc128771->FMGL(rank) = ((x10_int)1);
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc128771->FMGL(rect) = true;
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc128771->FMGL(zeroBased) = true;
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc128771->FMGL(rail) = true;
            
            //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc128771->FMGL(size) = size133374;
            
            //#line 318 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc128771->FMGL(layout_min0) = alloc128771->FMGL(layout_stride1) =
              alloc128771->FMGL(layout_min1) = ((x10_int)0);
            
            //#line 319 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc128771->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
            
            //#line 320 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::util::IndexedMemoryChunk<org::scalegraph::io::impl::CSVReader__ReaderBuffer* > r133373 =
              x10::util::IndexedMemoryChunk<void>::allocate<org::scalegraph::io::impl::CSVReader__ReaderBuffer* >(size133374, 8, false, false);
            
            //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i70709max133369 = ((x10_int) ((size133374) - (((x10_int)1))));
            
            //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
            {
                x10_int i133370;
                for (
                     //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                     i133370 = ((x10_int)0); ((i133370) <= (i70709max133369));
                     
                     //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                     i133370 = ((x10_int) ((i133370) + (((x10_int)1)))))
                {
                    
                    //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i133371 = i133370;
                    
                    //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (r133373)->__set(i133371, (__extension__ ({
                        
                        //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                        x10_int i133367 = i133371;
                        (__extension__ ({
                            
                            //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::io::impl::CSVReader__ReaderBuffer* alloc133368 =
                               ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVReader__ReaderBuffer>(), 0, sizeof(org::scalegraph::io::impl::CSVReader__ReaderBuffer))) org::scalegraph::io::impl::CSVReader__ReaderBuffer()))
                            ;
                            
                            //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10ConstructorCall_c
                            (alloc133368)->::org::scalegraph::io::impl::CSVReader__ReaderBuffer::_constructor(
                              attHandler);
                            alloc133368;
                        }))
                        ;
                    }))
                    );
                }
            }
            
            //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc128771->FMGL(raw) = r133373;
            alloc128771;
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
            x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* this133252 =
              bufferPLH->x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>::__apply();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i133251 = tid;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::io::impl::CSVReader__ReaderBuffer* ret133253;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret133254; __ret133254: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this133252)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133253 = (x10aux::nullCheck(this133252)->FMGL(raw))->__apply(i133251);
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret133254_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this133252)->
                                    FMGL(region)->contains(i133251)))
                    {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          i133251);
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133253 = (x10aux::nullCheck(this133252)->FMGL(raw))->__apply(((x10_int) ((i133251) - (x10aux::nullCheck(this133252)->
                                                                                                               FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret133254_end_;
                }
                
            }goto __ret133254_end_; __ret133254_end_: ;
            }
            ret133253;
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
    org::scalegraph::util::MemoryChunk<x10_long> __apply(x10_int tid133385) {
        
        //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10Return_c
        return x10aux::nullCheck(x10aux::nullCheck((__extension__ ({
                                     
                                     //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                     x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* this133386 =
                                       bufferPLH->x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>::__apply();
                                     
                                     //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                     x10_int i133387 = tid133385;
                                     
                                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                     org::scalegraph::io::impl::CSVReader__ReaderBuffer* ret133388;
                                     
                                     //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                     goto __ret133389; __ret133389: {
                                     {
                                         
                                         //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                         if (x10aux::nullCheck(this133386)->
                                               FMGL(rail)) {
                                             
                                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret133388 = (x10aux::nullCheck(this133386)->
                                                            FMGL(raw))->__apply(i133387);
                                             
                                             //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                             goto __ret133389_end_;
                                         } else {
                                             
                                             //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                             if (true && !(x10aux::nullCheck(this133386)->
                                                             FMGL(region)->contains(
                                                             i133387)))
                                             {
                                                 
                                                 //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                 x10::array::Array<void>::raiseBoundsError(
                                                   i133387);
                                             }
                                             
                                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret133388 = (x10aux::nullCheck(this133386)->
                                                            FMGL(raw))->__apply(((x10_int) ((i133387) - (x10aux::nullCheck(this133386)->
                                                                                                           FMGL(layout_min0)))));
                                             
                                             //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                             goto __ret133389_end_;
                                         }
                                         
                                     }goto __ret133389_end_; __ret133389_end_: ;
                                     }
                                     ret133388;
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
    x10::lang::Any* __apply(x10_int tid133390) {
        
        //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10::lang::Any*>* this133391 = x10aux::nullCheck((__extension__ ({
                                                                 
                                                                 //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                                                 x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* this133392 =
                                                                   bufferPLH->x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>::__apply();
                                                                 
                                                                 //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                 x10_int i133393 =
                                                                   tid133390;
                                                                 
                                                                 //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                 org::scalegraph::io::impl::CSVReader__ReaderBuffer* ret133394;
                                                                 
                                                                 //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                 goto __ret133395; __ret133395: {
                                                                 {
                                                                     
                                                                     //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                     if (x10aux::nullCheck(this133392)->
                                                                           FMGL(rail))
                                                                     {
                                                                         
                                                                         //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                         ret133394 =
                                                                           (x10aux::nullCheck(this133392)->
                                                                              FMGL(raw))->__apply(i133393);
                                                                         
                                                                         //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                         goto __ret133395_end_;
                                                                     }
                                                                     else
                                                                     {
                                                                         
                                                                         //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                         if (true &&
                                                                             !(x10aux::nullCheck(this133392)->
                                                                                 FMGL(region)->contains(
                                                                                 i133393)))
                                                                         {
                                                                             
                                                                             //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                             x10::array::Array<void>::raiseBoundsError(
                                                                               i133393);
                                                                         }
                                                                         
                                                                         //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                         ret133394 =
                                                                           (x10aux::nullCheck(this133392)->
                                                                              FMGL(raw))->__apply(((x10_int) ((i133393) - (x10aux::nullCheck(this133392)->
                                                                                                                             FMGL(layout_min0)))));
                                                                         
                                                                         //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                         goto __ret133395_end_;
                                                                     }
                                                                     
                                                                 }goto __ret133395_end_; __ret133395_end_: ;
                                                                 }
                                                                 ret133394;
                                                                 }))
                                                                 )->
                                                                   FMGL(buffer);
                                                             
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i133396 = e133436;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::lang::Any* ret133397;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret133398; __ret133398: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this133391)->FMGL(rail))
                {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133397 = (x10aux::nullCheck(this133391)->
                                   FMGL(raw))->__apply(i133396);
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret133398_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this133391)->
                                    FMGL(region)->contains(
                                    i133396))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          i133396);
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133397 = (x10aux::nullCheck(this133391)->
                                   FMGL(raw))->__apply(((x10_int) ((i133396) - (x10aux::nullCheck(this133391)->
                                                                                  FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret133398_end_;
                }
                
            }goto __ret133398_end_; __ret133398_end_: ;
            }
            ret133397;
            }))
            ;
            
        }
        
        // captured environment
        x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> bufferPLH;
        x10_int e133436;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->bufferPLH);
            buf.write(this->e133436);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_io_impl_CSVReader__closure__4* storage = x10aux::alloc<org_scalegraph_io_impl_CSVReader__closure__4>();
            buf.record_reference(storage);
            x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> that_bufferPLH = buf.read<x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> >();
            x10_int that_e133436 = buf.read<x10_int>();
            org_scalegraph_io_impl_CSVReader__closure__4* this_ = new (storage) org_scalegraph_io_impl_CSVReader__closure__4(that_bufferPLH, that_e133436);
            return this_;
        }
        
        org_scalegraph_io_impl_CSVReader__closure__4(x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> bufferPLH, x10_int e133436) : bufferPLH(bufferPLH), e133436(e133436) { }
        
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
    x10_int size133420 = x10aux::nullCheck(columnDef)->FMGL(size);
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::array::RectRegion1D* myReg133337 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
    ;
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg133337)->::x10::array::RectRegion1D::_constructor(
      ((x10_int) ((size133420) - (((x10_int)1)))));
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg133337);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(rank) = ((x10_int)1);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(rect) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(zeroBased) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(rail) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(size) = size133420;
    
    //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(layout_min0) = attHandler->FMGL(layout_stride1) =
      attHandler->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
    
    //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    attHandler->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<org::scalegraph::io::impl::CSVAttributeHandler* >(size133420, 8, false, true);
    
    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::FileNameProvider* fman = (__extension__ ({
        
        //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString path132359 = path;
        org::scalegraph::io::impl::FileNameProvider::create(
          path132359, true, false);
    }))
    ;
    
    //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    x10_boolean includeDQ = false;
    
    //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    x10_long dataOffset = ((x10_long) (((x10_int)0)));
    
    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::FileReader* reader133421 =  ((new (memset(x10aux::alloc<org::scalegraph::io::FileReader>(), 0, sizeof(org::scalegraph::io::FileReader))) org::scalegraph::io::FileReader()))
    ;
    
    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10ConstructorCall_c
    (reader133421)->::org::scalegraph::io::FileReader::_constructor(
      fman->fileName(((x10_int)0)));
    
    //#line 138 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString headerLine133422 = reader133421->org::scalegraph::io::FileReader::fastReadLine();
    
    //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
    if (includeHeader) {
        
        //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::impl::NativeCSVHeader* header133423 =
          org::scalegraph::io::impl::readCSVHeader(headerLine133422);
        
        //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
        if (((x10aux::nullCheck(columnDef)->FMGL(size)) > ((x10_int) (header133423)->attrs.size())))
        {
            
            //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
            (header133423)->~NativeCSVHeader(); x10aux::dealloc(header133423);
            
            //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
            reader133421->org::scalegraph::io::FileReader::close();
            
            //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::io::IOException::_make(x10aux::makeStringLit("The file does not contain enough attributes."))));
        }
        
        //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
        dataOffset = (__extension__ ({
            reader133421->FMGL(fileOffset);
        }))
        ;
        
        //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
        columnNamesInHeader = (__extension__ ({
            
            //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<org::scalegraph::util::SString>* alloc133424 =
               ((new (memset(x10aux::alloc<x10::array::Array<org::scalegraph::util::SString> >(), 0, sizeof(x10::array::Array<org::scalegraph::util::SString>))) x10::array::Array<org::scalegraph::util::SString>()))
            ;
            
            //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int size133339 = numColumns;
            
            //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::array::RectRegion1D* myReg133338 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (myReg133338)->::x10::array::RectRegion1D::_constructor(
              ((x10_int) ((size133339) - (((x10_int)1)))));
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc133424->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg133338);
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc133424->FMGL(rank) = ((x10_int)1);
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc133424->FMGL(rect) = true;
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc133424->FMGL(zeroBased) = true;
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc133424->FMGL(rail) = true;
            
            //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc133424->FMGL(size) = size133339;
            
            //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc133424->FMGL(layout_min0) = alloc133424->
                                               FMGL(layout_stride1) =
              alloc133424->FMGL(layout_min1) = ((x10_int)0);
            
            //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc133424->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
            
            //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
            alloc133424->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<org::scalegraph::util::SString >(size133339, 8, false, true);
            alloc133424;
        }))
        ;
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::array::Region* p133351 = attHandler->FMGL(region);
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int i128795min133352 = p133351->min(((x10_int)0));
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int i128795max133353 = p133351->max(((x10_int)0));
        
        //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
        {
            x10_int i133354;
            for (
                 //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                 i133354 = i128795min133352; ((i133354) <= (i128795max133353));
                 
                 //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                 i133354 = ((x10_int) ((i133354) + (((x10_int)1)))))
            {
                
                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int i133355 = i133354;
                
                //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::NativeCSVAttribute* att133346 =
                  &((header133423)->attrs[i133355]);
                
                //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133347 = (x10_boolean) (att133346)->includeType
                  ? (org::scalegraph::id::Type::typeId(x10::lang::String::_make(reinterpret_cast<char*>(((att133346)->typeName).c_str()), true)))
                  : ((__extension__ ({
                         
                         //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int i133348 = i133355;
                         
                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int ret133349;
                         
                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                         goto __ret133350; __ret133350: {
                         {
                             
                             //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                             if (x10aux::nullCheck(columnDef)->
                                   FMGL(rail)) {
                                 
                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                 ret133349 = (x10aux::nullCheck(columnDef)->
                                                FMGL(raw))->__apply(i133348);
                                 
                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                 goto __ret133350_end_;
                             } else {
                                 
                                 //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                 if (true && !(x10aux::nullCheck(columnDef)->
                                                 FMGL(region)->contains(
                                                 i133348)))
                                 {
                                     
                                     //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                     x10::array::Array<void>::raiseBoundsError(
                                       i133348);
                                 }
                                 
                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                 ret133349 = (x10aux::nullCheck(columnDef)->
                                                FMGL(raw))->__apply(((x10_int) ((i133348) - (x10aux::nullCheck(columnDef)->
                                                                                               FMGL(layout_min0)))));
                                 
                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                 goto __ret133350_end_;
                             }
                             
                         }goto __ret133350_end_; __ret133350_end_: ;
                         }
                         ret133349;
                         }))
                         );
                     
                
                //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i133340 = i133355;
                
                //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SString v133341 = (att133346)->name;
                
                //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SString ret133342;
                
                //#line 555 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(columnNamesInHeader)->
                      FMGL(rail)) {
                    
                    //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (x10aux::nullCheck(columnNamesInHeader)->
                       FMGL(raw))->__set(i133340, v133341);
                } else {
                    
                    //#line 559 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(columnNamesInHeader)->
                                    FMGL(region)->contains(
                                    i133340))) {
                        
                        //#line 560 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          i133340);
                    }
                    
                    //#line 562 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (x10aux::nullCheck(columnNamesInHeader)->
                       FMGL(raw))->__set(((x10_int) ((i133340) - (x10aux::nullCheck(columnNamesInHeader)->
                                                                    FMGL(layout_min0)))), v133341);
                }
                
                //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret133342 = v133341;
                
                //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                ret133342;
                
                //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i133343 = i133355;
                
                //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler* v133344 =
                  org::scalegraph::io::impl::CSVAttributeHandler::create(
                    typeId133347, (x10_boolean) (att133346)->doubleQuoated);
                
                //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler* ret133345;
                
                //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                (attHandler->FMGL(raw))->__set(i133343, v133344);
                
                //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret133345 = v133344;
                
                //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                ret133345;
                
                //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
                if ((x10_boolean) (att133346)->doubleQuoated)
                {
                    
                    //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                    includeDQ = true;
                }
                }
            }
            
        
        //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
        (header133423)->~NativeCSVHeader(); x10aux::dealloc(header133423);
        } else {
            
            //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
            includeDQ = (x10aux::struct_equals((x10_char((x10_int)((__extension__ ({
                                                   
                                                   //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                                   org::scalegraph::util::MemoryChunk<x10_byte> this133425 =
                                                     (__extension__ ({
                                                       
                                                       //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                                       org::scalegraph::util::SString this133426 =
                                                         headerLine133422->org::scalegraph::util::SString::trim();
                                                       this133426->
                                                         FMGL(content);
                                                   }))
                                                   ;
                                                   
                                                   //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Empty_c
                                                   ;
                                                   
                                                   //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                                   x10_byte ret133427;
                                                   {
                                                       
                                                       //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                       if (!((this133425->
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
                                                           ((((x10_long) (((x10_int)0)))) >= (this133425->
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
                                                   ret133427 =
                                                     (this133425->
                                                        FMGL(data))[((x10_int)0)];
                                                   ret133427;
                                               }))
                                               ))), ((x10_char)'\"')));
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10::array::Region* p133362 = attHandler->FMGL(region);
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10_int i128816min133363 = p133362->min(((x10_int)0));
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
            x10_int i128816max133364 = p133362->max(((x10_int)0));
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
            {
                x10_int i133365;
                for (
                     //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                     i133365 = i128816min133363; ((i133365) <= (i128816max133364));
                     
                     //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                     i133365 = ((x10_int) ((i133365) + (((x10_int)1)))))
                {
                    
                    //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10_int i133366 = i133365;
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i133356 = i133366;
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::io::impl::CSVAttributeHandler* v133357 =
                      org::scalegraph::io::impl::CSVAttributeHandler::create(
                        (__extension__ ({
                            
                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i133358 = i133366;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int ret133359;
                            
                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret133360; __ret133360: {
                            {
                                
                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(columnDef)->
                                      FMGL(rail)) {
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret133359 = (x10aux::nullCheck(columnDef)->
                                                   FMGL(raw))->__apply(i133358);
                                    
                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret133360_end_;
                                } else {
                                    
                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (true && !(x10aux::nullCheck(columnDef)->
                                                    FMGL(region)->contains(
                                                    i133358)))
                                    {
                                        
                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                        x10::array::Array<void>::raiseBoundsError(
                                          i133358);
                                    }
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret133359 = (x10aux::nullCheck(columnDef)->
                                                   FMGL(raw))->__apply(((x10_int) ((i133358) - (x10aux::nullCheck(columnDef)->
                                                                                                  FMGL(layout_min0)))));
                                    
                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret133360_end_;
                                }
                                
                            }goto __ret133360_end_; __ret133360_end_: ;
                            }
                            ret133359;
                            }))
                            , includeDQ);
                      
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::io::impl::CSVAttributeHandler* ret133361;
                    
                    //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (attHandler->FMGL(raw))->__set(i133356, v133357);
                    
                    //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133361 = v133357;
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                    ret133361;
                    }
                }
                
            }
            
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
        reader133421->org::scalegraph::io::FileReader::close();
        
        //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::lang::PlaceLocalHandle<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> bufferPLH =
          x10::lang::PlaceLocalHandle<void>::makeFlat<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>* >(
            x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*>*>((new (x10aux::alloc<x10::lang::Fun_0_0<x10::array::Array<org::scalegraph::io::impl::CSVReader__ReaderBuffer*>*> >(sizeof(org_scalegraph_io_impl_CSVReader__closure__1)))org_scalegraph_io_impl_CSVReader__closure__1(nthreads, attHandler))));
        
        //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::impl::InputSplitter* splitter =
          includeDQ ? ((reinterpret_cast<org::scalegraph::io::impl::InputSplitter*>((__extension__ ({
                            
                            //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                            org::scalegraph::io::impl::DoubleQuoatedCSVSplitter* alloc128772 =
                               ((new (memset(x10aux::alloc<org::scalegraph::io::impl::DoubleQuoatedCSVSplitter>(), 0, sizeof(org::scalegraph::io::impl::DoubleQuoatedCSVSplitter))) org::scalegraph::io::impl::DoubleQuoatedCSVSplitter()))
                            ;
                            alloc128772;
                        }))
                        ))) : ((reinterpret_cast<org::scalegraph::io::impl::InputSplitter*>((__extension__ ({
                                    
                                    //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                    org::scalegraph::io::impl::LineBreakSplitter* alloc128773 =
                                       ((new (memset(x10aux::alloc<org::scalegraph::io::impl::LineBreakSplitter>(), 0, sizeof(org::scalegraph::io::impl::LineBreakSplitter))) org::scalegraph::io::impl::LineBreakSplitter()))
                                    ;
                                    alloc128773;
                                }))
                                )));
        
        //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
        splitter->split(team, fman, dataOffset, nthreads,
                        reinterpret_cast<x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> >*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_int, org::scalegraph::util::MemoryChunk<x10_byte> > >(sizeof(org_scalegraph_io_impl_CSVReader__closure__2)))org_scalegraph_io_impl_CSVReader__closure__2(bufferPLH))));
        
        //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int enabledColumns = ((x10_int)0);
        
        //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int i128836max133428 = ((x10_int) ((numColumns) - (((x10_int)1))));
        
        //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
        {
            x10_int i133429;
            for (
                 //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                 i133429 = ((x10_int)0); ((i133429) <= (i128836max133428));
                 
                 //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                 i133429 = ((x10_int) ((i133429) + (((x10_int)1)))))
            {
                
                //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int e133430 = i133429;
                
                //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
                if (!(x10aux::nullCheck((__extension__ ({
                          
                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10_int i133375 = e133430;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::io::impl::CSVAttributeHandler* ret133376;
                          
                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                          ret133376 = (attHandler->FMGL(raw))->__apply(i133375);
                          ret133376;
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
        x10_int size133431 = enabledColumns;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::array::RectRegion1D* myReg133377 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg133377)->::x10::array::RectRegion1D::_constructor(
          ((x10_int) ((size133431) - (((x10_int)1)))));
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg133377);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(rank) = ((x10_int)1);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(rect) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(zeroBased) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(rail) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(size) = size133431;
        
        //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(layout_min0) = attributes->FMGL(layout_stride1) =
          attributes->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
        
        //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attributes->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::Any* >(size133431, 8, false, true);
        
        //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10::lang::String*>* attrNames =
           ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::String*> >(), 0, sizeof(x10::array::Array<x10::lang::String*>))) x10::array::Array<x10::lang::String*>()))
        ;
        
        //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size133432 = enabledColumns;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::array::RectRegion1D* myReg133378 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg133378)->::x10::array::RectRegion1D::_constructor(
          ((x10_int) ((size133432) - (((x10_int)1)))));
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg133378);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(rank) = ((x10_int)1);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(rect) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(zeroBased) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(rail) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(size) = size133432;
        
        //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(layout_min0) = attrNames->FMGL(layout_stride1) =
          attrNames->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
        
        //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        attrNames->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::String* >(size133432, 8, false, true);
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10_int>* typeIds =  ((new (memset(x10aux::alloc<x10::array::Array<x10_int> >(), 0, sizeof(x10::array::Array<x10_int>))) x10::array::Array<x10_int>()))
        ;
        
        //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size133433 = enabledColumns;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::array::RectRegion1D* myReg133379 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg133379)->::x10::array::RectRegion1D::_constructor(
          ((x10_int) ((size133433) - (((x10_int)1)))));
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg133379);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(rank) = ((x10_int)1);
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(rect) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(zeroBased) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(rail) = true;
        
        //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(size) = size133433;
        
        //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(layout_min0) = typeIds->FMGL(layout_stride1) =
          typeIds->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
        
        //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        typeIds->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10_int >(size133433, 8, false, true);
        
        //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int attrIndex = ((x10_int)0);
        
        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        x10_int i128854max133434 = ((x10_int) ((numColumns) - (((x10_int)1))));
        
        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
        {
            x10_int i133435;
            for (
                 //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                 i133435 = ((x10_int)0); ((i133435) <= (i128854max133434));
                 
                 //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                 i133435 = ((x10_int) ((i133435) + (((x10_int)1)))))
            {
                
                //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int e133436 = i133435;
                
                //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10If_c
                if (!(x10aux::nullCheck((__extension__ ({
                          
                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10_int i133408 = e133436;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::io::impl::CSVAttributeHandler* ret133409;
                          
                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                          ret133409 = (attHandler->FMGL(raw))->__apply(i133408);
                          ret133409;
                      }))
                      )->isSkip())) {
                    
                    //#line 197 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10_int attrIndex_133410 = attrIndex;
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i133381 = attrIndex_133410;
                    
                    //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Any* v133382 = x10aux::nullCheck((__extension__ ({
                                                  
                                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10_int i133383 =
                                                    e133436;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  org::scalegraph::io::impl::CSVAttributeHandler* ret133384;
                                                  
                                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                  ret133384 =
                                                    (attHandler->
                                                       FMGL(raw))->__apply(i133383);
                                                  ret133384;
                                              }))
                                              )->mergeResult(
                                                team, nthreads,
                                                reinterpret_cast<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_io_impl_CSVReader__closure__3)))org_scalegraph_io_impl_CSVReader__closure__3(bufferPLH))),
                                                reinterpret_cast<x10::lang::Fun_0_1<x10_int, x10::lang::Any*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_int, x10::lang::Any*> >(sizeof(org_scalegraph_io_impl_CSVReader__closure__4)))org_scalegraph_io_impl_CSVReader__closure__4(bufferPLH, e133436))));
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10::lang::Any* ret133399;
                    
                    //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (attributes->FMGL(raw))->__set(i133381, v133382);
                    
                    //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret133399 = v133382;
                    
                    //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                    ret133399;
                    
                    //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10::lang::String* name133411 = (!x10aux::struct_equals(columnNamesInHeader,
                                                                            X10_NULL))
                      ? (x10::lang::String::_make(reinterpret_cast<char*>(((__extension__ ({
                             
                             //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                             x10_int i133412 = e133436;
                             
                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                             org::scalegraph::util::SString ret133413;
                             
                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                             goto __ret133414; __ret133414: {
                             {
                                 
                                 //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                 if (x10aux::nullCheck(columnNamesInHeader)->
                                       FMGL(rail)) {
                                     
                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                     ret133413 = (x10aux::nullCheck(columnNamesInHeader)->
                                                    FMGL(raw))->__apply(i133412);
                                     
                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                     goto __ret133414_end_;
                                 } else {
                                     
                                     //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                     if (true && !(x10aux::nullCheck(columnNamesInHeader)->
                                                     FMGL(region)->contains(
                                                     i133412)))
                                     {
                                         
                                         //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                         x10::array::Array<void>::raiseBoundsError(
                                           i133412);
                                     }
                                     
                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                     ret133413 = (x10aux::nullCheck(columnNamesInHeader)->
                                                    FMGL(raw))->__apply(((x10_int) ((i133412) - (x10aux::nullCheck(columnNamesInHeader)->
                                                                                                   FMGL(layout_min0)))));
                                     
                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                     goto __ret133414_end_;
                                 }
                                 
                             }goto __ret133414_end_; __ret133414_end_: ;
                             }
                             ret133413;
                             }))
                             ).c_str()), true)) : ((!x10aux::struct_equals(columnNames,
                                                                           X10_NULL))
                                                     ? ((__extension__ ({
                                                            
                                                            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                            x10_int i133415 =
                                                              attrIndex;
                                                            
                                                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                            x10::lang::String* ret133416;
                                                            
                                                            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                            goto __ret133417; __ret133417: {
                                                            {
                                                                
                                                                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                if (x10aux::nullCheck(columnNames)->
                                                                      FMGL(rail))
                                                                {
                                                                    
                                                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                    ret133416 =
                                                                      (x10aux::nullCheck(columnNames)->
                                                                         FMGL(raw))->__apply(i133415);
                                                                    
                                                                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                    goto __ret133417_end_;
                                                                }
                                                                else
                                                                {
                                                                    
                                                                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                    if (true &&
                                                                        !(x10aux::nullCheck(columnNames)->
                                                                            FMGL(region)->contains(
                                                                            i133415)))
                                                                    {
                                                                        
                                                                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                        x10::array::Array<void>::raiseBoundsError(
                                                                          i133415);
                                                                    }
                                                                    
                                                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                    ret133416 =
                                                                      (x10aux::nullCheck(columnNames)->
                                                                         FMGL(raw))->__apply(((x10_int) ((i133415) - (x10aux::nullCheck(columnNames)->
                                                                                                                        FMGL(layout_min0)))));
                                                                    
                                                                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                    goto __ret133417_end_;
                                                                }
                                                                
                                                            }goto __ret133417_end_; __ret133417_end_: ;
                                                            }
                                                            ret133416;
                                                            }))
                                                            )
                                                          : (x10::lang::String::_make(reinterpret_cast<char*>((org::scalegraph::util::StringFormat_(((__extension__ ({
                                                                 
                                                                 //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                                 x10::lang::String* str133418 =
                                                                   x10aux::makeStringLit("column-%d");
                                                                 (__extension__ ({
                                                                     
                                                                     //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                                     org::scalegraph::util::SString alloc133419 =
                                                                       
                                                                     org::scalegraph::util::SString::_alloc();
                                                                     
                                                                     //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                                                                     x10::lang::String* str133380 =
                                                                       str133418;
                                                                     
                                                                     //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                                                                     alloc133419->
                                                                       FMGL(content) =
                                                                       org::scalegraph::util::StringFromX10String(str133380);
                                                                     alloc133419;
                                                                 }))
                                                                 ;
                                                             }))
                                                             )->FMGL(content),e133436)).c_str()), true)));
                                                   
                         
                         //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int i133400 = attrIndex;
                         
                         //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10::lang::String* v133401 = name133411;
                         
                         //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10::lang::String* ret133402;
                         
                         //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                         (attrNames->FMGL(raw))->__set(i133400, v133401);
                         
                         //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                         ret133402 = v133401;
                         
                         //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                         ret133402;
                         
                         //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int i133403 = attrIndex;
                         
                         //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int v133404 = x10aux::nullCheck((__extension__ ({
                                               
                                               //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                               x10_int i133405 =
                                                 e133436;
                                               
                                               //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                               org::scalegraph::io::impl::CSVAttributeHandler* ret133406;
                                               
                                               //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                               ret133406 =
                                                 (attHandler->
                                                    FMGL(raw))->__apply(i133405);
                                               ret133406;
                                           }))
                                           )->typeId();
                         
                         //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int ret133407;
                         
                         //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                         (typeIds->FMGL(raw))->__set(i133403, v133404);
                         
                         //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                         ret133407 = v133404;
                         
                         //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                         ret133407;
                         
                         //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                         attrIndex = ((x10_int) ((attrIndex) + (((x10_int)1))));
                    }
                    
                }
                }
                
            
            //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::NamedDistData* alloc128774 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::NamedDistData>(), 0, sizeof(org::scalegraph::io::NamedDistData))) org::scalegraph::io::NamedDistData()))
                ;
                
                //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10ConstructorCall_c
                (alloc128774)->::org::scalegraph::io::NamedDistData::_constructor(
                  attrNames, typeIds, attributes, x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL));
                alloc128774;
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
        x10::array::Array<x10::lang::Any*>* alloc128767 =  ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::Any*> >(), 0, sizeof(x10::array::Array<x10::lang::Any*>))) x10::array::Array<x10::lang::Any*>()))
        ;
        
        //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size133325 = this->FMGL(numElems);
        
        //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::array::RectRegion1D* myReg133323 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (myReg133323)->::x10::array::RectRegion1D::_constructor(((x10_int) ((size133325) - (((x10_int)1)))));
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc128767->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg133323);
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc128767->FMGL(rank) = ((x10_int)1);
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc128767->FMGL(rect) = true;
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc128767->FMGL(zeroBased) = true;
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc128767->FMGL(rail) = true;
        
        //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc128767->FMGL(size) = size133325;
        
        //#line 318 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc128767->FMGL(layout_min0) = alloc128767->FMGL(layout_stride1) =
          alloc128767->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 319 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc128767->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
        
        //#line 320 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::util::IndexedMemoryChunk<x10::lang::Any* > r133324 = x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::Any* >(size133325, 8, false, false);
        
        //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i70709max133320 = ((x10_int) ((size133325) - (((x10_int)1))));
        
        //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
        {
            x10_int i133321;
            for (
                 //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                 i133321 = ((x10_int)0); ((i133321) <= (i70709max133320));
                 
                 //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                 i133321 = ((x10_int) ((i133321) + (((x10_int)1))))) {
                
                //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i133322 = i133321;
                
                //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                (r133324)->__set(i133322, (__extension__ ({
                    
                    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10_int i133316 = i133322;
                    x10aux::nullCheck((__extension__ ({
                        
                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_int i133317 = i133316;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::io::impl::CSVAttributeHandler* ret133318;
                        
                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                        goto __ret133319; __ret133319: {
                        {
                            
                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (x10aux::nullCheck(attHandler)->FMGL(rail))
                            {
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret133318 = (x10aux::nullCheck(attHandler)->
                                               FMGL(raw))->__apply(i133317);
                                
                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret133319_end_;
                            } else {
                                
                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (true && !(x10aux::nullCheck(attHandler)->
                                                FMGL(region)->contains(i133317)))
                                {
                                    
                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                    x10::array::Array<void>::raiseBoundsError(
                                      i133317);
                                }
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret133318 = (x10aux::nullCheck(attHandler)->
                                               FMGL(raw))->__apply(((x10_int) ((i133317) - (x10aux::nullCheck(attHandler)->
                                                                                              FMGL(layout_min0)))));
                                
                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                goto __ret133319_end_;
                            }
                            
                        }goto __ret133319_end_; __ret133319_end_: ;
                        }
                        ret133318;
                        }))
                        )->createBlockGrowableMemory();
                    }))
                    );
                }
            }
            
        
        //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc128767->FMGL(raw) = r133324;
        alloc128767;
        }))
        ;
    
    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(elemPtrs) = x10aux::alloc<x10_byte*>(sizeof(x10_byte*)*(((x10_long) ((this->
                                                                                       FMGL(stride)) * (((x10_long) (this->
                                                                                                                       FMGL(numElems))))))));
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(chunkSize) = (__extension__ ({
        
        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_long>* alloc128768 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_long> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_long>))) org::scalegraph::util::GrowableMemory<x10_long>()))
        ;
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (alloc128768)->::org::scalegraph::util::GrowableMemory<x10_long>::_constructor(
          ((x10_long)0ll));
        alloc128768;
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
        x10_int i128776max133334 = ((x10_int) ((this->FMGL(numElems)) - (((x10_int)1))));
        
        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": polyglot.ast.For_c
        {
            x10_int i133335;
            for (
                 //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                 i133335 = ((x10_int)0); ((i133335) <= (i128776max133334));
                 
                 //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10LocalAssign_c
                 i133335 = ((x10_int) ((i133335) + (((x10_int)1)))))
            {
                
                //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                x10_int e133336 = i133335;
                
                //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck((__extension__ ({
                    
                    //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                    x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* this133326 =
                      this->FMGL(attHandler);
                    
                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i133327 = e133336;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::io::impl::CSVAttributeHandler* ret133328;
                    
                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                    goto __ret133329; __ret133329: {
                    {
                        
                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (x10aux::nullCheck(this133326)->
                              FMGL(rail)) {
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret133328 = (x10aux::nullCheck(this133326)->
                                           FMGL(raw))->__apply(i133327);
                            
                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret133329_end_;
                        } else {
                            
                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                            if (true && !(x10aux::nullCheck(this133326)->
                                            FMGL(region)->contains(
                                            i133327))) {
                                
                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                x10::array::Array<void>::raiseBoundsError(
                                  i133327);
                            }
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret133328 = (x10aux::nullCheck(this133326)->
                                           FMGL(raw))->__apply(((x10_int) ((i133327) - (x10aux::nullCheck(this133326)->
                                                                                          FMGL(layout_min0)))));
                            
                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                            goto __ret133329_end_;
                        }
                        
                    }goto __ret133329_end_; __ret133329_end_: ;
                    }
                    ret133328;
                    }))
                    )->parseElements(((this->FMGL(elemPtrs)) + (((x10_long) ((((x10_long) (e133336))) * (this->
                                                                                                           FMGL(stride)))))),
                                     ((x10_int) (lines)),
                                     (__extension__ ({
                                         
                                         //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVReader.x10": x10.ast.X10LocalDecl_c
                                         x10::array::Array<x10::lang::Any*>* this133330 =
                                           this->FMGL(buffer);
                                         
                                         //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                         x10_int i133331 =
                                           e133336;
                                         
                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                         x10::lang::Any* ret133332;
                                         
                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                         goto __ret133333; __ret133333: {
                                         {
                                             
                                             //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                             if (x10aux::nullCheck(this133330)->
                                                   FMGL(rail))
                                             {
                                                 
                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                 ret133332 =
                                                   (x10aux::nullCheck(this133330)->
                                                      FMGL(raw))->__apply(i133331);
                                                 
                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                 goto __ret133333_end_;
                                             } else {
                                                 
                                                 //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                 if (true &&
                                                     !(x10aux::nullCheck(this133330)->
                                                         FMGL(region)->contains(
                                                         i133331)))
                                                 {
                                                     
                                                     //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                     x10::array::Array<void>::raiseBoundsError(
                                                       i133331);
                                                 }
                                                 
                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                 ret133332 =
                                                   (x10aux::nullCheck(this133330)->
                                                      FMGL(raw))->__apply(((x10_int) ((i133331) - (x10aux::nullCheck(this133330)->
                                                                                                     FMGL(layout_min0)))));
                                                 
                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                 goto __ret133333_end_;
                                             }
                                             
                                         }goto __ret133333_end_; __ret133333_end_: ;
                                         }
                                         ret133332;
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
