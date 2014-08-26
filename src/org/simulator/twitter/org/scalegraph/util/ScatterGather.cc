/*************************************************/
/* START of ScatterGather */
#include <org/scalegraph/util/ScatterGather.h>

#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Math.h>
#include <org/scalegraph/util/MemoryChunk__Distributor.h>
#include <x10/lang/Int.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
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

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::ScatterGather::_constructor(x10_long nChunk) {
    
    //#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.Empty_c
    ;
    
    //#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.AssignPropertyCall_c
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10Call_c
    (*this)->org::scalegraph::util::ScatterGather::__fieldInitializers64512();
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(nChunk) = nChunk;
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(maxThreads) = ((x10_long) (x10::lang::Runtime::FMGL(NTHREADS__get)()));
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(bufferWidth) = x10::lang::Math::max(((x10_long) (((*this)->
                                                                      FMGL(CACHE_LINE)) / x10aux::zeroCheck(((x10_long) (((x10_int)4)))))),
                                                      nChunk);
    
    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long size = ((x10_long) ((((x10_long) (((*this)->FMGL(bufferWidth)) * (((x10_long) ((((x10_long) (((*this)->
                                                                                                             FMGL(maxThreads)) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)1)))))))))) + (((x10_long) ((((x10_long) ((nChunk) * (((x10_long) (((x10_int)2))))))) + (((x10_long) (((x10_int)1)))))))));
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__Distributor<x10_long>* dist =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(size, ((x10_int) ((*this)->
                                                                               FMGL(CACHE_LINE))), false, (x10_byte*)(void*)__FILE__, __LINE__)->org::scalegraph::util::MemoryChunk<x10_long>::distributor();
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(threadCounts) = dist->next(((x10_long) (((*this)->
                                                             FMGL(bufferWidth)) * ((*this)->
                                                                                     FMGL(maxThreads)))));
    
    //#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(threadOffsets) = dist->next(((x10_long) (((*this)->
                                                              FMGL(bufferWidth)) * (((x10_long) (((*this)->
                                                                                                    FMGL(maxThreads)) + (((x10_long) (((x10_int)1))))))))));
    
    //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(sendCounts) = dist->next(nChunk);
    
    //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(sendOffsets) = dist->next(((x10_long) ((nChunk) + (((x10_long) (((x10_int)1)))))));
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10Call_c
    dist->checkFinish();
}
org::scalegraph::util::ScatterGather org::scalegraph::util::ScatterGather::_make(
  x10_long nChunk) {
    org::scalegraph::util::ScatterGather this_; 
    this_->_constructor(nChunk);
    return this_;
}



//#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_long> org::scalegraph::util::ScatterGather::counts(
  x10_int tid) {
    
    //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> mc = (*this)->
                                                        FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                        ((x10_long) (((*this)->
                                                                        FMGL(bufferWidth)) * (((x10_long) (tid))))),
                                                        (*this)->
                                                          FMGL(bufferWidth));
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i65285domain65418 = mc->org::scalegraph::util::MemoryChunk<x10_long>::range();
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i65285min65419 = i65285domain65418->FMGL(min);
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i65285max65420 = i65285domain65418->FMGL(max);
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
    {
        x10_long i65421;
        for (
             //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
             i65421 = i65285min65419; ((i65421) <= (i65285max65420));
             
             //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i65421 = ((x10_long) ((i65421) + (((x10_long)1ll)))))
        {
            
            //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i65422 = i65421;
            
            //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10Call_c
            mc->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              i65422, ((x10_long) (((x10_int)0))));
        }
    }
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return mc;
    
}

//#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_long> org::scalegraph::util::ScatterGather::offsets(
  x10_int tid) {
    
    //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return (*this)->FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
             ((x10_long) (((*this)->FMGL(bufferWidth)) * (((x10_long) (tid))))),
             (*this)->FMGL(bufferWidth));
    
}

//#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ScatterGather::sum() {
    
    //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long width = (*this)->FMGL(bufferWidth);
    
    //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long nChunk = (*this)->FMGL(nChunk);
    
    //#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange teamRange = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((nChunk) - (((x10_long) (((x10_int)1)))))));
    
    //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange threadsRange = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) (((*this)->
                                                                                                                 FMGL(maxThreads)) - (((x10_long) (((x10_int)1)))))));
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i65319domain65434 = teamRange;
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i65319min65435 = i65319domain65434->FMGL(min);
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i65319max65436 = i65319domain65434->FMGL(max);
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
    {
        x10_long i65437;
        for (
             //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
             i65437 = i65319min65435; ((i65437) <= (i65319max65436));
             
             //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i65437 = ((x10_long) ((i65437) + (((x10_long)1ll)))))
        {
            
            //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long r65438 = i65437;
            
            //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int sum65428 = ((x10_int)0);
            
            //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i65302domain65423 = threadsRange;
            
            //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i65302min65424 = i65302domain65423->
                                        FMGL(min);
            
            //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i65302max65425 = i65302domain65423->
                                        FMGL(max);
            
            //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
            {
                x10_long i65426;
                for (
                     //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                     i65426 = i65302min65424; ((i65426) <= (i65302max65425));
                     
                     //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                     i65426 = ((x10_long) ((i65426) + (((x10_long)1ll)))))
                {
                    
                    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                    x10_long t65427 = i65426;
                    
                    //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                    sum65428 = (x10aux::class_cast_unchecked<x10_int>(((x10_long) ((((x10_long) (sum65428))) + ((*this)->
                                                                                                                  FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                                  ((x10_long) ((((x10_long) ((t65427) * (width)))) + (r65438)))))))));
                }
            }
            
            //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10Call_c
            (*this)->FMGL(sendCounts)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              r65438, ((x10_long) (sum65428)));
        }
    }
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10Call_c
    (*this)->FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
      ((x10_int)0), ((x10_long)0ll));
    
    //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i65336domain65439 = teamRange;
    
    //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i65336min65440 = i65336domain65439->FMGL(min);
    
    //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i65336max65441 = i65336domain65439->FMGL(max);
    
    //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
    {
        x10_long i65442;
        for (
             //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
             i65442 = i65336min65440; ((i65442) <= (i65336max65441));
             
             //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i65442 = ((x10_long) ((i65442) + (((x10_long)1ll)))))
        {
            
            //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long r65443 = i65442;
            
            //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10Call_c
            (*this)->FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              ((x10_long) ((r65443) + (((x10_long) (((x10_int)1)))))),
              ((x10_long) (((*this)->FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                              r65443)) + ((*this)->FMGL(sendCounts)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                            r65443)))));
        }
    }
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i65370domain65444 = teamRange;
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i65370min65445 = i65370domain65444->FMGL(min);
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i65370max65446 = i65370domain65444->FMGL(max);
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
    {
        x10_long i65447;
        for (
             //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
             i65447 = i65370min65445; ((i65447) <= (i65370max65446));
             
             //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i65447 = ((x10_long) ((i65447) + (((x10_long)1ll)))))
        {
            
            //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long r65448 = i65447;
            
            //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10Call_c
            (*this)->FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              ((x10_long) ((((x10_long) ((((x10_long) (((x10_int)0)))) * (width)))) + (r65448))),
              (*this)->FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                r65448));
            
            //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i65353domain65429 = threadsRange;
            
            //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i65353min65430 = i65353domain65429->
                                        FMGL(min);
            
            //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i65353max65431 = i65353domain65429->
                                        FMGL(max);
            
            //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
            {
                x10_long i65432;
                for (
                     //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                     i65432 = i65353min65430; ((i65432) <= (i65353max65431));
                     
                     //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                     i65432 = ((x10_long) ((i65432) + (((x10_long)1ll)))))
                {
                    
                    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                    x10_long t65433 = i65432;
                    
                    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10Call_c
                    (*this)->FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      ((x10_long) ((((x10_long) ((((x10_long) ((t65433) + (((x10_long) (((x10_int)1))))))) * (width)))) + (r65448))),
                      ((x10_long) (((*this)->FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      ((x10_long) ((((x10_long) ((t65433) * (width)))) + (r65448))))) + ((*this)->
                                                                                                           FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                           ((x10_long) ((((x10_long) ((t65433) * (width)))) + (r65448))))))));
                }
            }
            
            //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals((*this)->
                                                             FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                             ((x10_long) ((((x10_long) (((*this)->
                                                                                           FMGL(maxThreads)) * (width)))) + (r65448)))),
                                                           (*this)->
                                                             FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                             ((x10_long) ((r65448) + (((x10_long) (((x10_int)1))))))))));
            #endif//NO_ASSERTIONS
            
        }
    }
    
}

//#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::ScatterGather::sendCount(
  ) {
    
    //#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return (*this)->FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
             (*this)->FMGL(nChunk));
    
}

//#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::ScatterGather::check(x10_int size) {
    
    //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long width = (*this)->FMGL(bufferWidth);
    
    //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i65403min65453 = ((x10_long) (((x10_int)0)));
    
    //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i65403max65454 = ((x10_long) (((*this)->FMGL(nChunk)) - (((x10_long) (((x10_int)1))))));
    
    //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
    {
        x10_long i65455;
        for (
             //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
             i65455 = i65403min65453; ((i65455) <= (i65403max65454));
             
             //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i65455 = ((x10_long) ((i65455) + (((x10_long)1ll)))))
        {
            
            //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long r65456 = i65455;
            
            //#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals((*this)->
                                                             FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                             ((x10_long) ((((x10_long) ((((x10_long) (((x10_int)0)))) * (width)))) + (r65456)))),
                                                           ((x10_long) (((*this)->
                                                                           FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                           r65456)) + ((*this)->
                                                                                         FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                         ((x10_long) ((((x10_long) ((((x10_long) (((x10_int)0)))) * (width)))) + (r65456))))))))));
            #endif//NO_ASSERTIONS
            
            //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i65387min65449 = ((x10_long) (((x10_int)1)));
            
            //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i65387max65450 = ((x10_long) (((*this)->
                                                      FMGL(maxThreads)) - (((x10_long) (((x10_int)1))))));
            
            //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.For_c
            {
                x10_long i65451;
                for (
                     //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                     i65451 = i65387min65449; ((i65451) <= (i65387max65450));
                     
                     //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                     i65451 = ((x10_long) ((i65451) + (((x10_long)1ll)))))
                {
                    
                    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
                    x10_long t65452 = i65451;
                    
                    //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.Assert_c
                    #ifndef NO_ASSERTIONS
                    if (x10aux::x10__assertions_enabled)
                        x10aux::x10__assert((x10aux::struct_equals((*this)->
                                                                     FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                     ((x10_long) ((((x10_long) ((t65452) * (width)))) + (r65456)))),
                                                                   ((x10_long) (((*this)->
                                                                                   FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                   ((x10_long) ((((x10_long) ((((x10_long) ((t65452) - (((x10_long) (((x10_int)1))))))) * (width)))) + (r65456))))) + ((*this)->
                                                                                                                                                                                                         FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                                                                                                                         ((x10_long) ((((x10_long) ((t65452) * (width)))) + (r65456))))))))));
                    #endif//NO_ASSERTIONS
                    
                }
            }
            
        }
    }
    
    //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(((x10_long) (size)),
                                                   (*this)->
                                                     FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                     (*this)->
                                                       FMGL(nChunk)))));
    #endif//NO_ASSERTIONS
    
}

//#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::ScatterGather::size() {
    
    //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return (*this)->FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
             (*this)->FMGL(nChunk));
    
}

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::ScatterGather::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::ScatterGather::toString(
  ) {
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
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

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::ScatterGather::hashCode() {
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(nChunk)))));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(maxThreads)))));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(bufferWidth)))));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_long>::hashCode())));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::hashCode())));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(sendCounts)->org::scalegraph::util::MemoryChunk<x10_long>::hashCode())));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_long>::hashCode())));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(CACHE_LINE)))));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::ScatterGather::equals(
  x10::lang::Any* other) {
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::ScatterGather>(other)))
    {
        
        //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::ScatterGather::equals(
             x10aux::class_cast<org::scalegraph::util::ScatterGather>(other));
    
}

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::ScatterGather::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::ScatterGather>(other)))
    {
        
        //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::ScatterGather::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::ScatterGather>(other));
    
}

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/ScatterGather.x10": x10.ast.X10MethodDecl_c
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
