/*************************************************/
/* START of ScatterGather */
#include <org/scalegraph/util/ScatterGather.h>

#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/MemoryChunk__Distributor.h>
#include <x10/lang/Int.h>
#include <x10/lang/LongRange.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
namespace org { namespace scalegraph { namespace util { 
class ScatterGather_ibox0 : public x10::lang::IBox<org::scalegraph::util::ScatterGather> {
public:
    static x10::lang::Any::itable<ScatterGather_ibox0 > itable;
    x10_boolean equals(x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10::lang::String* toString() {
        return this->value->toString();
    }
    x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
x10::lang::Any::itable<ScatterGather_ibox0 >  ScatterGather_ibox0::itable(&ScatterGather_ibox0::equals, &ScatterGather_ibox0::hashCode, &ScatterGather_ibox0::toString, &ScatterGather_ibox0::typeName);
} } } 
x10::lang::Any::itable<org::scalegraph::util::ScatterGather >  org::scalegraph::util::ScatterGather::_itable_0(&org::scalegraph::util::ScatterGather::equals, &org::scalegraph::util::ScatterGather::hashCode, &org::scalegraph::util::ScatterGather::toString, &org::scalegraph::util::ScatterGather::typeName);
x10aux::itable_entry org::scalegraph::util::ScatterGather::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::ScatterGather::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::ScatterGather>())};
x10aux::itable_entry org::scalegraph::util::ScatterGather::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::ScatterGather_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::ScatterGather>())};

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::ScatterGather::_constructor(x10_long nChunk) {
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.AssignPropertyCall_c
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ScatterGather this135939 = (*this);
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    this135939->FMGL(CACHE_LINE) = ((x10_long)64ll);
    
    //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(nChunk) = nChunk;
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(maxThreads) = ((x10_long) (x10::lang::Runtime::FMGL(NTHREADS__get)()));
    
    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(bufferWidth) = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a135870 = ((x10_long) ((((x10_long)64ll)) / x10aux::zeroCheck(((x10_long) (((x10_int)4))))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long b135871 = nChunk;
        ((a135870) < (b135871)) ? (b135871) : (a135870);
    }))
    ;
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long size = ((x10_long) ((((x10_long) (((*this)->FMGL(bufferWidth)) * (((x10_long) ((((x10_long) (((*this)->
                                                                                                             FMGL(maxThreads)) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)1)))))))))) + (((x10_long) ((((x10_long) ((nChunk) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)1)))))))));
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__Distributor<x10_long>* dist =
      (__extension__ ({
        
        //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this135873 =
          org::scalegraph::util::MemoryChunk<x10_long >::_make(size, ((x10_int) (((x10_long)64ll))), false, (x10_byte*)(void*)__FILE__, __LINE__);
        (__extension__ ({
            
            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk__Distributor<x10_long>* alloc135872 =
               ((new (memset(x10aux::alloc<org::scalegraph::util::MemoryChunk__Distributor<x10_long> >(), 0, sizeof(org::scalegraph::util::MemoryChunk__Distributor<x10_long>))) org::scalegraph::util::MemoryChunk__Distributor<x10_long>()))
            ;
            
            //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> outer135940 =
              this135873;
            
            //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc135872->FMGL(offset) = ((x10_long) (((x10_int)0)));
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc135872->FMGL(outer) = outer135940;
            alloc135872;
        }))
        ;
    }))
    ;
    
    //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(threadCounts) = dist->next(((x10_long) (((*this)->
                                                             FMGL(bufferWidth)) * ((*this)->
                                                                                     FMGL(maxThreads)))));
    
    //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(threadOffsets) = dist->next(((x10_long) (((*this)->
                                                              FMGL(bufferWidth)) * (((x10_long) (((*this)->
                                                                                                    FMGL(maxThreads)) + (((x10_long) (((x10_int)1))))))))));
    
    //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(sendCounts) = dist->next(nChunk);
    
    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(sendOffsets) = dist->next(((x10_long) ((nChunk) + (((x10_long) (((x10_int)1)))))));
    
    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10Call_c
    dist->checkFinish();
}
org::scalegraph::util::ScatterGather org::scalegraph::util::ScatterGather::_make(
  x10_long nChunk) {
    org::scalegraph::util::ScatterGather this_; 
    this_->_constructor(nChunk);
    return this_;
}



//#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_long> org::scalegraph::util::ScatterGather::counts(
  x10_int tid) {
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> mc = (*this)->
                                                        FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                        ((x10_long) (((*this)->
                                                                        FMGL(bufferWidth)) * (((x10_long) (tid))))),
                                                        (*this)->
                                                          FMGL(bufferWidth));
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i111788domain135944 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((mc->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i111788max135945 = i111788domain135944->FMGL(max);
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
    {
        x10_long i135946;
        for (
             //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
             i135946 = ((x10_long)0ll); ((i135946) <= (i111788max135945));
             
             //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i135946 = ((x10_long) ((i135946) + (((x10_long)1ll)))))
        {
            
            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i135947 = i135946;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index135941 = i135947;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long value135942 = ((x10_long) (((x10_int)0)));
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret135943;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((mc->FMGL(data)).isValid())) {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index135941) < (((x10_long) (((x10_int)0))))) ||
                    ((index135941) >= (mc->FMGL(data)->FMGL(size))))
                {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135941), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (mc->FMGL(data)).set(index135941, value135942);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret135943 = value135942;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret135943;
        }
    }
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return mc;
    
}

//#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_long> org::scalegraph::util::ScatterGather::offsets(
  x10_int tid) {
    
    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return (*this)->FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
             ((x10_long) (((*this)->FMGL(bufferWidth)) * (((x10_long) (tid))))),
             (*this)->FMGL(bufferWidth));
    
}

//#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ScatterGather::sum() {
    
    //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long width = (*this)->FMGL(bufferWidth);
    
    //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long nChunk = (*this)->FMGL(nChunk);
    
    //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange teamRange = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((nChunk) - (((x10_long) (((x10_int)1)))))));
    
    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange threadsRange = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) (((*this)->
                                                                                                                 FMGL(maxThreads)) - (((x10_long) (((x10_int)1)))))));
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i111826domain135993 = teamRange;
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i111826min135994 = i111826domain135993->FMGL(min);
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i111826max135995 = i111826domain135993->FMGL(max);
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
    {
        x10_long i135996;
        for (
             //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
             i135996 = i111826min135994; ((i135996) <= (i111826max135995));
             
             //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i135996 = ((x10_long) ((i135996) + (((x10_long)1ll)))))
        {
            
            //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long r135997 = i135996;
            
            //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int sum135960 = ((x10_int)0);
            
            //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i111807domain135951 = threadsRange;
            
            //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i111807min135952 = i111807domain135951->
                                          FMGL(min);
            
            //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i111807max135953 = i111807domain135951->
                                          FMGL(max);
            
            //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
            {
                x10_long i135954;
                for (
                     //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                     i135954 = i111807min135952; ((i135954) <= (i111807max135953));
                     
                     //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                     i135954 = ((x10_long) ((i135954) + (((x10_long)1ll)))))
                {
                    
                    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                    x10_long t135955 = i135954;
                    
                    //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                    sum135960 = (x10aux::class_cast_unchecked<x10_int>(((x10_long) ((((x10_long) (sum135960))) + ((__extension__ ({
                                     
                                     //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                                     org::scalegraph::util::MemoryChunk<x10_long> this135948 =
                                       (*this)->FMGL(threadCounts);
                                     
                                     //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                     x10_long index135949 =
                                       ((x10_long) ((((x10_long) ((t135955) * (width)))) + (r135997)));
                                     
                                     //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                     x10_long ret135950;
                                     {
                                         
                                         //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                         if (!((this135948->
                                                  FMGL(data)).isValid()))
                                         {
                                             
                                             //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                             if (true) {
                                                 
                                                 //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                 x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                             }
                                             
                                         }
                                         
                                         //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                         if (((index135949) < (((x10_long) (((x10_int)0))))) ||
                                             ((index135949) >= (this135948->
                                                                  FMGL(data)->
                                                                  FMGL(size))))
                                         {
                                             
                                             //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                             if (true) {
                                                 
                                                 //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                 x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135949), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                             }
                                             
                                         }
                                         
                                     }
                                     
                                     //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                     ret135950 = (this135948->
                                                    FMGL(data))[index135949];
                                     ret135950;
                                 }))
                                 )))));
                }
            }
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this135956 =
              (*this)->FMGL(sendCounts);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index135957 = r135997;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long value135958 = ((x10_long) (sum135960));
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret135959;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this135956->FMGL(data)).isValid()))
                {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index135957) < (((x10_long) (((x10_int)0))))) ||
                    ((index135957) >= (this135956->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135957), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this135956->FMGL(data)).set(index135957, value135958);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret135959 = value135958;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret135959;
        }
    }
    
    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> this135998 =
      (*this)->FMGL(sendOffsets);
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long ret135999;
    {
        
        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((this135998->FMGL(data)).isValid())) {
            
            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (this135998->
                                                                                      FMGL(data)->
                                                                                      FMGL(size))))
        {
            
            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), ((x10_int)0)), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (this135998->FMGL(data)).set(((x10_int)0), ((x10_long)0ll));
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret135999 = ((x10_long)0ll);
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret135999;
    
    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i111845domain136000 = teamRange;
    
    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i111845min136001 = i111845domain136000->FMGL(min);
    
    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i111845max136002 = i111845domain136000->FMGL(max);
    
    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
    {
        x10_long i136003;
        for (
             //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
             i136003 = i111845min136001; ((i136003) <= (i111845max136002));
             
             //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i136003 = ((x10_long) ((i136003) + (((x10_long)1ll)))))
        {
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long r136004 = i136003;
            
            //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this135961 =
              (*this)->FMGL(sendOffsets);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index135962 = ((x10_long) ((r136004) + (((x10_long) (((x10_int)1))))));
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long value135963 = ((x10_long) (((__extension__ ({
                
                //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> this135964 =
                  (*this)->FMGL(sendOffsets);
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135965 = r136004;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret135966;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this135964->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135965) < (((x10_long) (((x10_int)0))))) ||
                        ((index135965) >= (this135964->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135965), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135966 = (this135964->FMGL(data))[index135965];
                ret135966;
            }))
            ) + ((__extension__ ({
                
                //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> this135967 =
                  (*this)->FMGL(sendCounts);
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135968 = r136004;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret135969;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this135967->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135968) < (((x10_long) (((x10_int)0))))) ||
                        ((index135968) >= (this135967->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135968), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135969 = (this135967->FMGL(data))[index135968];
                ret135969;
            }))
            )));
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret135970;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this135961->FMGL(data)).isValid()))
                {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index135962) < (((x10_long) (((x10_int)0))))) ||
                    ((index135962) >= (this135961->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135962), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this135961->FMGL(data)).set(index135962, value135963);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret135970 = value135963;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret135970;
        }
    }
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i111883domain136005 = teamRange;
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i111883min136006 = i111883domain136005->FMGL(min);
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i111883max136007 = i111883domain136005->FMGL(max);
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
    {
        x10_long i136008;
        for (
             //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
             i136008 = i111883min136006; ((i136008) <= (i111883max136007));
             
             //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i136008 = ((x10_long) ((i136008) + (((x10_long)1ll)))))
        {
            
            //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long r136009 = i136008;
            
            //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> this135981 =
              (*this)->FMGL(threadOffsets);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index135982 = ((x10_long) ((((x10_long) ((((x10_long) (((x10_int)0)))) * (width)))) + (r136009)));
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long value135983 = (__extension__ ({
                
                //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> this135984 =
                  (*this)->FMGL(sendOffsets);
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index135985 = r136009;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret135986;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this135984->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index135985) < (((x10_long) (((x10_int)0))))) ||
                        ((index135985) >= (this135984->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135985), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret135986 = (this135984->FMGL(data))[index135985];
                ret135986;
            }))
            ;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long ret135987;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this135981->FMGL(data)).isValid()))
                {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index135982) < (((x10_long) (((x10_int)0))))) ||
                    ((index135982) >= (this135981->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135982), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this135981->FMGL(data)).set(index135982, value135983);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret135987 = value135983;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret135987;
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i111864domain135988 = threadsRange;
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i111864min135989 = i111864domain135988->
                                          FMGL(min);
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i111864max135990 = i111864domain135988->
                                          FMGL(max);
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
            {
                x10_long i135991;
                for (
                     //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                     i135991 = i111864min135989; ((i135991) <= (i111864max135990));
                     
                     //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                     i135991 = ((x10_long) ((i135991) + (((x10_long)1ll)))))
                {
                    
                    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                    x10_long t135992 = i135991;
                    
                    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> this135971 =
                      (*this)->FMGL(threadOffsets);
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index135972 = ((x10_long) ((((x10_long) ((((x10_long) ((t135992) + (((x10_long) (((x10_int)1))))))) * (width)))) + (r136009)));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value135973 = ((x10_long) (((__extension__ ({
                        
                        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> this135974 =
                          (*this)->FMGL(threadOffsets);
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index135975 = ((x10_long) ((((x10_long) ((t135992) * (width)))) + (r136009)));
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret135976;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this135974->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index135975) < (((x10_long) (((x10_int)0))))) ||
                                ((index135975) >= (this135974->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135975), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret135976 = (this135974->FMGL(data))[index135975];
                        ret135976;
                    }))
                    ) + ((__extension__ ({
                        
                        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_long> this135977 =
                          (*this)->FMGL(threadCounts);
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index135978 = ((x10_long) ((((x10_long) ((t135992) * (width)))) + (r136009)));
                        
                        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret135979;
                        {
                            
                            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this135977->FMGL(data)).isValid()))
                            {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index135978) < (((x10_long) (((x10_int)0))))) ||
                                ((index135978) >= (this135977->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135978), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret135979 = (this135977->FMGL(data))[index135978];
                        ret135979;
                    }))
                    )));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret135980;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this135971->FMGL(data)).isValid()))
                        {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index135972) < (((x10_long) (((x10_int)0))))) ||
                            ((index135972) >= (this135971->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135972), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (this135971->FMGL(data)).set(index135972, value135973);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret135980 = value135973;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret135980;
                }
            }
            
            //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals((*this)->
                                                             FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                             ((x10_long) ((((x10_long) (((*this)->
                                                                                           FMGL(maxThreads)) * (width)))) + (r136009)))),
                                                           (*this)->
                                                             FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                             ((x10_long) ((r136009) + (((x10_long) (((x10_int)1))))))))));
            #endif//NO_ASSERTIONS
            
        }
    }
    
}

//#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::ScatterGather::sendCount(
  ) {
    
    //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this135932 =
          (*this)->FMGL(sendOffsets);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index135931 = (*this)->FMGL(nChunk);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret135933;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this135932->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index135931) < (((x10_long) (((x10_int)0))))) ||
                ((index135931) >= (this135932->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135931), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret135933 = (this135932->FMGL(data))[index135931];
        ret135933;
    }))
    ;
    
}

//#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ScatterGather::check(x10_int size) {
    
    //#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long width = (*this)->FMGL(bufferWidth);
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i111920min136014 = ((x10_long) (((x10_int)0)));
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i111920max136015 = ((x10_long) (((*this)->FMGL(nChunk)) - (((x10_long) (((x10_int)1))))));
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
    {
        x10_long i136016;
        for (
             //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
             i136016 = i111920min136014; ((i136016) <= (i111920max136015));
             
             //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i136016 = ((x10_long) ((i136016) + (((x10_long)1ll)))))
        {
            
            //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long r136017 = i136016;
            
            //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals((*this)->
                                                             FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                             ((x10_long) ((((x10_long) ((((x10_long) (((x10_int)0)))) * (width)))) + (r136017)))),
                                                           ((x10_long) (((*this)->
                                                                           FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                           r136017)) + ((*this)->
                                                                                          FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                          ((x10_long) ((((x10_long) ((((x10_long) (((x10_int)0)))) * (width)))) + (r136017))))))))));
            #endif//NO_ASSERTIONS
            
            //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i111902min136010 = ((x10_long) (((x10_int)1)));
            
            //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i111902max136011 = ((x10_long) (((*this)->
                                                        FMGL(maxThreads)) - (((x10_long) (((x10_int)1))))));
            
            //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
            {
                x10_long i136012;
                for (
                     //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                     i136012 = i111902min136010; ((i136012) <= (i111902max136011));
                     
                     //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                     i136012 = ((x10_long) ((i136012) + (((x10_long)1ll)))))
                {
                    
                    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                    x10_long t136013 = i136012;
                    
                    //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.Assert_c
                    #ifndef NO_ASSERTIONS
                    if (x10aux::x10__assertions_enabled)
                        x10aux::x10__assert((x10aux::struct_equals((*this)->
                                                                     FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                     ((x10_long) ((((x10_long) ((t136013) * (width)))) + (r136017)))),
                                                                   ((x10_long) (((*this)->
                                                                                   FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                   ((x10_long) ((((x10_long) ((((x10_long) ((t136013) - (((x10_long) (((x10_int)1))))))) * (width)))) + (r136017))))) + ((*this)->
                                                                                                                                                                                                           FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                                                                                                                           ((x10_long) ((((x10_long) ((t136013) * (width)))) + (r136017))))))))));
                    #endif//NO_ASSERTIONS
                    
                }
            }
            
        }
    }
    
    //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(((x10_long) (size)),
                                                   (*this)->
                                                     FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                     (*this)->
                                                       FMGL(nChunk)))));
    #endif//NO_ASSERTIONS
    
}

//#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::ScatterGather::size() {
    
    //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> this135936 =
          (*this)->FMGL(sendOffsets);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index135935 = (*this)->FMGL(nChunk);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret135937;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this135936->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index135935) < (((x10_long) (((x10_int)0))))) ||
                ((index135935) >= (this135936->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index135935), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret135937 = (this135936->FMGL(data))[index135935];
        ret135937;
    }))
    ;
    
}

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::ScatterGather::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::ScatterGather::toString(
  ) {
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.util.ScatterGather:"), x10aux::makeStringLit(" nChunk=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     FMGL(nChunk)), x10aux::makeStringLit(" maxThreads=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              FMGL(maxThreads)), x10aux::makeStringLit(" bufferWidth=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            FMGL(bufferWidth)), x10aux::makeStringLit(" threadCounts=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            FMGL(threadCounts)), x10aux::makeStringLit(" threadOffsets=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              FMGL(threadOffsets)), x10aux::makeStringLit(" sendCounts=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              FMGL(sendCounts)), x10aux::makeStringLit(" sendOffsets=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            FMGL(sendOffsets)), x10aux::makeStringLit(" CACHE_LINE=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          FMGL(CACHE_LINE));
    
}

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::ScatterGather::hashCode() {
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(nChunk)))));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(maxThreads)))));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(bufferWidth)))));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_long>::hashCode())));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::hashCode())));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(sendCounts)->org::scalegraph::util::MemoryChunk<x10_long>::hashCode())));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::hashCode())));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(CACHE_LINE)))));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::ScatterGather::equals(
  x10::lang::Any* other) {
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::ScatterGather>(other)))
    {
        
        //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::ScatterGather::equals(
             x10aux::class_cast<org::scalegraph::util::ScatterGather>(other));
    
}

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::ScatterGather::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::ScatterGather>(other)))
    {
        
        //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::ScatterGather::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::ScatterGather>(other));
    
}

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ScatterGather::_serialize(org::scalegraph::util::ScatterGather this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(nChunk));
    buf.write(this_->FMGL(maxThreads));
    buf.write(this_->FMGL(bufferWidth));
    buf.write(this_->FMGL(threadCounts));
    buf.write(this_->FMGL(threadOffsets));
    buf.write(this_->FMGL(sendCounts));
    buf.write(this_->FMGL(sendOffsets));
    buf.write(this_->FMGL(CACHE_LINE));
    
}

void org::scalegraph::util::ScatterGather::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(nChunk) = buf.read<x10_long>();
    FMGL(maxThreads) = buf.read<x10_long>();
    FMGL(bufferWidth) = buf.read<x10_long>();
    FMGL(threadCounts) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(threadOffsets) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(sendCounts) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(sendOffsets) = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
    FMGL(CACHE_LINE) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::util::ScatterGather::rtt;
void org::scalegraph::util::ScatterGather::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.util.ScatterGather",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
}

/* END of ScatterGather */
/*************************************************/
