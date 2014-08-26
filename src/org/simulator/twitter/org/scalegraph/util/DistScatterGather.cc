/*************************************************/
/* START of DistScatterGather */
#include <org/scalegraph/util/DistScatterGather.h>

namespace org { namespace scalegraph { namespace util { 
class DistScatterGather_ibox0 : public x10::lang::IBox<org::scalegraph::util::DistScatterGather> {
public:
    static x10::lang::Any::itable<DistScatterGather_ibox0 > itable;
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
x10::lang::Any::itable<DistScatterGather_ibox0 >  DistScatterGather_ibox0::itable(&DistScatterGather_ibox0::equals, &DistScatterGather_ibox0::hashCode, &DistScatterGather_ibox0::toString, &DistScatterGather_ibox0::typeName);
} } } 
x10::lang::Any::itable<org::scalegraph::util::DistScatterGather >  org::scalegraph::util::DistScatterGather::_itable_0(&org::scalegraph::util::DistScatterGather::equals, &org::scalegraph::util::DistScatterGather::hashCode, &org::scalegraph::util::DistScatterGather::toString, &org::scalegraph::util::DistScatterGather::typeName);
x10aux::itable_entry org::scalegraph::util::DistScatterGather::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::DistScatterGather::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::DistScatterGather>())};
x10aux::itable_entry org::scalegraph::util::DistScatterGather::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::DistScatterGather_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::DistScatterGather>())};

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 35 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::DistScatterGather::_constructor(x10::util::Team* team) {
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.Empty_c
    ;
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.AssignPropertyCall_c
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10Call_c
    (*this)->org::scalegraph::util::DistScatterGather::__fieldInitializers50661();
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(team) = org::scalegraph::util::Team2::_make(team);
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = x10aux::nullCheck(team)->size();
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(maxThreads) = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(bufferWidth) = x10::lang::Math::max(((x10_int) (((*this)->
                                                                     FMGL(CACHE_LINE)) / x10aux::zeroCheck(((x10_int)4)))),
                                                      teamSize);
    
    //#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int size = ((x10_int) ((((x10_int) (((*this)->FMGL(bufferWidth)) * (((x10_int) ((((x10_int) (((*this)->
                                                                                                        FMGL(maxThreads)) * (((x10_int)2))))) + (((x10_int)1)))))))) + (((x10_int) ((((x10_int) ((((x10_int) ((teamSize) * (((x10_int)2))))) + (((x10_int)1))))) * (((x10_int)2)))))));
    
    //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__Distributor<x10_int>* dist =
      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (size)), (*this)->
                                                                                 FMGL(CACHE_LINE), false, (x10_byte*)(void*)__FILE__, __LINE__)->org::scalegraph::util::MemoryChunk<x10_int>::distributor();
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(threadCounts) = dist->next(((x10_int) (((*this)->
                                                            FMGL(bufferWidth)) * ((*this)->
                                                                                    FMGL(maxThreads)))));
    
    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(threadOffsets) = dist->next(((x10_int) (((*this)->
                                                             FMGL(bufferWidth)) * (((x10_int) (((*this)->
                                                                                                  FMGL(maxThreads)) + (((x10_int)1))))))));
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(sendCounts) = dist->next(teamSize);
    
    //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(sendOffsets) = dist->next(((x10_int) ((teamSize) + (((x10_int)1)))));
    
    //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(recvCounts) = dist->next(teamSize);
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(recvOffsets) = dist->next(((x10_int) ((teamSize) + (((x10_int)1)))));
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10Call_c
    dist->checkFinish();
}
org::scalegraph::util::DistScatterGather org::scalegraph::util::DistScatterGather::_make(
  x10::util::Team* team) {
    org::scalegraph::util::DistScatterGather this_; 
    this_->_constructor(team);
    return this_;
}



//#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_int> org::scalegraph::util::DistScatterGather::getCounts(
  x10_int tid) {
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> mc = (*this)->
                                                       FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_int>::subpart(
                                                       ((x10_long) (((x10_int) (((*this)->
                                                                                   FMGL(bufferWidth)) * (tid))))),
                                                       ((x10_long) ((*this)->
                                                                      FMGL(bufferWidth))));
    
    //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i51561domain51694 = mc->org::scalegraph::util::MemoryChunk<x10_int>::range();
    
    //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i51561min51695 = i51561domain51694->FMGL(min);
    
    //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i51561max51696 = i51561domain51694->FMGL(max);
    
    //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
    {
        x10_long i51697;
        for (
             //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
             i51697 = i51561min51695; ((i51697) <= (i51561max51696));
             
             //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i51697 = ((x10_long) ((i51697) + (((x10_long)1ll)))))
        {
            
            //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i51698 = i51697;
            
            //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10Call_c
            mc->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              i51698, ((x10_int)0));
        }
    }
    
    //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return mc;
    
}

//#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_int> org::scalegraph::util::DistScatterGather::getOffsets(
  x10_int tid) {
    
    //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return (*this)->FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::subpart(
             ((x10_long) (((x10_int) (((*this)->FMGL(bufferWidth)) * (tid))))),
             ((x10_long) ((*this)->FMGL(bufferWidth))));
    
}

//#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::DistScatterGather::sum() {
    
    //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int width = (*this)->FMGL(bufferWidth);
    
    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = (*this)->FMGL(team)->org::scalegraph::util::Team2::size();
    
    //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange teamRange = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((teamSize) - (((x10_int)1)))));
    
    //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange threadsRange = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) (((*this)->
                                                                                               FMGL(maxThreads)) - (((x10_int)1)))));
    
    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i51595domain51710 = teamRange;
    
    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int i51595min51711 = i51595domain51710->FMGL(min);
    
    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int i51595max51712 = i51595domain51710->FMGL(max);
    
    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
    {
        x10_int i51713;
        for (
             //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
             i51713 = i51595min51711; ((i51713) <= (i51595max51712));
             
             //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i51713 = ((x10_int) ((i51713) + (((x10_int)1)))))
        {
            
            //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int r51714 = i51713;
            
            //#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int sum51704 = ((x10_int)0);
            
            //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i51578domain51699 = threadsRange;
            
            //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int i51578min51700 = i51578domain51699->FMGL(min);
            
            //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int i51578max51701 = i51578domain51699->FMGL(max);
            
            //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
            {
                x10_int i51702;
                for (
                     //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                     i51702 = i51578min51700; ((i51702) <= (i51578max51701));
                     
                     //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                     i51702 = ((x10_int) ((i51702) + (((x10_int)1)))))
                {
                    
                    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                    x10_int t51703 = i51702;
                    
                    //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                    sum51704 = ((x10_int) ((sum51704) + ((*this)->
                                                           FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                           ((x10_int) ((((x10_int) ((t51703) * (width)))) + (r51714)))))));
                }
            }
            
            //#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10Call_c
            (*this)->FMGL(sendCounts)->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              r51714, sum51704);
        }
    }
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10Call_c
    (*this)->FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__set(
      ((x10_int)0), ((x10_int)0));
    
    //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i51612domain51715 = teamRange;
    
    //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int i51612min51716 = i51612domain51715->FMGL(min);
    
    //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int i51612max51717 = i51612domain51715->FMGL(max);
    
    //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
    {
        x10_int i51718;
        for (
             //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
             i51718 = i51612min51716; ((i51718) <= (i51612max51717));
             
             //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i51718 = ((x10_int) ((i51718) + (((x10_int)1)))))
        {
            
            //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int r51719 = i51718;
            
            //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10Call_c
            (*this)->FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              ((x10_int) ((r51719) + (((x10_int)1)))), ((x10_int) (((*this)->
                                                                      FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                      r51719)) + ((*this)->
                                                                                    FMGL(sendCounts)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                    r51719)))));
        }
    }
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i51646domain51720 = teamRange;
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int i51646min51721 = i51646domain51720->FMGL(min);
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int i51646max51722 = i51646domain51720->FMGL(max);
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
    {
        x10_int i51723;
        for (
             //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
             i51723 = i51646min51721; ((i51723) <= (i51646max51722));
             
             //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i51723 = ((x10_int) ((i51723) + (((x10_int)1)))))
        {
            
            //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int r51724 = i51723;
            
            //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10Call_c
            (*this)->FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              ((x10_int) ((((x10_int) ((((x10_int)0)) * (width)))) + (r51724))),
              (*this)->FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                r51724));
            
            //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i51629domain51705 = threadsRange;
            
            //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int i51629min51706 = i51629domain51705->FMGL(min);
            
            //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int i51629max51707 = i51629domain51705->FMGL(max);
            
            //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
            {
                x10_int i51708;
                for (
                     //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                     i51708 = i51629min51706; ((i51708) <= (i51629max51707));
                     
                     //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                     i51708 = ((x10_int) ((i51708) + (((x10_int)1)))))
                {
                    
                    //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                    x10_int t51709 = i51708;
                    
                    //#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10Call_c
                    (*this)->FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                      ((x10_int) ((((x10_int) ((((x10_int) ((t51709) + (((x10_int)1))))) * (width)))) + (r51724))),
                      ((x10_int) (((*this)->FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                     ((x10_int) ((((x10_int) ((t51709) * (width)))) + (r51724))))) + ((*this)->
                                                                                                        FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                                        ((x10_int) ((((x10_int) ((t51709) * (width)))) + (r51724))))))));
                }
            }
            
            //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals((*this)->
                                                             FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                             ((x10_int) ((((x10_int) (((*this)->
                                                                                         FMGL(maxThreads)) * (width)))) + (r51724)))),
                                                           (*this)->
                                                             FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                             ((x10_int) ((r51724) + (((x10_int)1))))))));
            #endif//NO_ASSERTIONS
            
        }
    }
    
}

//#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::DistScatterGather::sendCount(
  ) {
    
    //#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return (*this)->FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
             (*this)->FMGL(team)->org::scalegraph::util::Team2::size());
    
}

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::DistScatterGather::recvCount(
  ) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return (*this)->FMGL(recvOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
             (*this)->FMGL(team)->org::scalegraph::util::Team2::size());
    
}

//#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::DistScatterGather::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::DistScatterGather::toString(
  ) {
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.util.DistScatterGather:"), x10aux::makeStringLit(" team=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               FMGL(team)), x10aux::makeStringLit(" maxThreads=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      FMGL(maxThreads)), x10aux::makeStringLit(" bufferWidth=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    FMGL(bufferWidth)), x10aux::makeStringLit(" threadCounts=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    FMGL(threadCounts)), x10aux::makeStringLit(" threadOffsets=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      FMGL(threadOffsets)), x10aux::makeStringLit(" sendCounts=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      FMGL(sendCounts)), x10aux::makeStringLit(" sendOffsets=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    FMGL(sendOffsets)), x10aux::makeStringLit(" recvCounts=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  FMGL(recvCounts)), x10aux::makeStringLit(" recvOffsets=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                FMGL(recvOffsets)), x10aux::makeStringLit(" CACHE_LINE=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              FMGL(CACHE_LINE));
    
}

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::DistScatterGather::hashCode(
  ) {
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(team)->org::scalegraph::util::Team2::hashCode())));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(maxThreads)))));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(bufferWidth)))));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_int>::hashCode())));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::hashCode())));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(sendCounts)->org::scalegraph::util::MemoryChunk<x10_int>::hashCode())));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::hashCode())));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(recvCounts)->org::scalegraph::util::MemoryChunk<x10_int>::hashCode())));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(recvOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::hashCode())));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(CACHE_LINE)))));
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::DistScatterGather::equals(
  x10::lang::Any* other) {
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::DistScatterGather>(other)))
    {
        
        //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::DistScatterGather::equals(
             x10aux::class_cast<org::scalegraph::util::DistScatterGather>(other));
    
}

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::DistScatterGather::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::DistScatterGather>(other)))
    {
        
        //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::DistScatterGather::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::DistScatterGather>(other));
    
}

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::DistScatterGather::_serialize(org::scalegraph::util::DistScatterGather this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(team));
    buf.write(this_->FMGL(maxThreads));
    buf.write(this_->FMGL(bufferWidth));
    buf.write(this_->FMGL(threadCounts));
    buf.write(this_->FMGL(threadOffsets));
    buf.write(this_->FMGL(sendCounts));
    buf.write(this_->FMGL(sendOffsets));
    buf.write(this_->FMGL(recvCounts));
    buf.write(this_->FMGL(recvOffsets));
    buf.write(this_->FMGL(CACHE_LINE));
    
}

void org::scalegraph::util::DistScatterGather::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(team) = buf.read<org::scalegraph::util::Team2>();
    FMGL(maxThreads) = buf.read<x10_int>();
    FMGL(bufferWidth) = buf.read<x10_int>();
    FMGL(threadCounts) = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
    FMGL(threadOffsets) = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
    FMGL(sendCounts) = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
    FMGL(sendOffsets) = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
    FMGL(recvCounts) = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
    FMGL(recvOffsets) = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
    FMGL(CACHE_LINE) = buf.read<x10_int>();
}


x10aux::RuntimeType org::scalegraph::util::DistScatterGather::rtt;
void org::scalegraph::util::DistScatterGather::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.util.DistScatterGather",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
}

/* END of DistScatterGather */
/*************************************************/
