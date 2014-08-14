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

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10FieldDecl_c

//#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::DistScatterGather::_constructor(x10::util::Team* team) {
    
    //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.AssignPropertyCall_c
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistScatterGather this124651 = (*this);
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    this124651->FMGL(CACHE_LINE) = ((x10_int)64);
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(team) = (__extension__ ({
        
        //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 alloc89913 =  org::scalegraph::util::Team2::_alloc();
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* baseTeam124652 = team;
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc89913->FMGL(base) = baseTeam124652;
        alloc89913;
    }))
    ;
    
    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = x10aux::nullCheck(team)->size();
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(maxThreads) = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(bufferWidth) = (__extension__ ({
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_int a124569 = ((x10_int) ((((x10_int)64)) / x10aux::zeroCheck(((x10_int)4))));
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_int b124570 = teamSize;
        ((a124569) < (b124570)) ? (b124570) : (a124569);
    }))
    ;
    
    //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int size = ((x10_int) ((((x10_int) (((*this)->FMGL(bufferWidth)) * (((x10_int) ((((x10_int) (((*this)->
                                                                                                        FMGL(maxThreads)) * (((x10_int)2))))) + (((x10_int)1)))))))) + (((x10_int) ((((x10_int) ((((x10_int) ((teamSize) * (((x10_int)2))))) + (((x10_int)1))))) * (((x10_int)2)))))));
    
    //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__Distributor<x10_int>* dist =
      (__extension__ ({
        
        //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> this124572 = org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (size)), ((x10_int)64), false, (x10_byte*)(void*)__FILE__, __LINE__);
        (__extension__ ({
            
            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk__Distributor<x10_int>* alloc124571 =
               ((new (memset(x10aux::alloc<org::scalegraph::util::MemoryChunk__Distributor<x10_int> >(), 0, sizeof(org::scalegraph::util::MemoryChunk__Distributor<x10_int>))) org::scalegraph::util::MemoryChunk__Distributor<x10_int>()))
            ;
            
            //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> outer124653 =
              this124572;
            
            //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc124571->FMGL(offset) = ((x10_long) (((x10_int)0)));
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc124571->FMGL(outer) = outer124653;
            alloc124571;
        }))
        ;
    }))
    ;
    
    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(threadCounts) = dist->next(((x10_int) (((*this)->
                                                            FMGL(bufferWidth)) * ((*this)->
                                                                                    FMGL(maxThreads)))));
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(threadOffsets) = dist->next(((x10_int) (((*this)->
                                                             FMGL(bufferWidth)) * (((x10_int) (((*this)->
                                                                                                  FMGL(maxThreads)) + (((x10_int)1))))))));
    
    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(sendCounts) = dist->next(teamSize);
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(sendOffsets) = dist->next(((x10_int) ((teamSize) + (((x10_int)1)))));
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(recvCounts) = dist->next(teamSize);
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(recvOffsets) = dist->next(((x10_int) ((teamSize) + (((x10_int)1)))));
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10Call_c
    dist->checkFinish();
}
org::scalegraph::util::DistScatterGather org::scalegraph::util::DistScatterGather::_make(
  x10::util::Team* team) {
    org::scalegraph::util::DistScatterGather this_; 
    this_->_constructor(team);
    return this_;
}



//#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_int> org::scalegraph::util::DistScatterGather::getCounts(
  x10_int tid) {
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> mc = (*this)->
                                                       FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_int>::subpart(
                                                       ((x10_long) (((x10_int) (((*this)->
                                                                                   FMGL(bufferWidth)) * (tid))))),
                                                       ((x10_long) ((*this)->
                                                                      FMGL(bufferWidth))));
    
    //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i89915domain124656 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((mc->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i89915max124657 = i89915domain124656->FMGL(max);
    
    //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
    {
        x10_long i124658;
        for (
             //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
             i124658 = ((x10_long)0ll); ((i124658) <= (i89915max124657));
             
             //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i124658 = ((x10_long) ((i124658) + (((x10_long)1ll)))))
        {
            
            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i124659 = i124658;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index124654 = i124659;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret124655;
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
                if (((index124654) < (((x10_long) (((x10_int)0))))) ||
                    ((index124654) >= (mc->FMGL(data)->FMGL(size))))
                {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124654), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (mc->FMGL(data)).set(index124654, ((x10_int)0));
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret124655 = ((x10_int)0);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret124655;
        }
    }
    
    //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return mc;
    
}

//#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_int> org::scalegraph::util::DistScatterGather::getOffsets(
  x10_int tid) {
    
    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return (*this)->FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::subpart(
             ((x10_long) (((x10_int) (((*this)->FMGL(bufferWidth)) * (tid))))),
             ((x10_long) ((*this)->FMGL(bufferWidth))));
    
}

//#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::DistScatterGather::sum() {
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int width = (*this)->FMGL(bufferWidth);
    
    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = (__extension__ ({
        
        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 this124581 = (*this)->
                                                    FMGL(team);
        x10aux::nullCheck(this124581->FMGL(base))->size();
    }))
    ;
    
    //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange teamRange = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((teamSize) - (((x10_int)1)))));
    
    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange threadsRange = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) (((*this)->
                                                                                               FMGL(maxThreads)) - (((x10_int)1)))));
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i89953domain124703 = teamRange;
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int i89953max124704 = i89953domain124703->FMGL(max);
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
    {
        x10_int i124705;
        for (
             //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
             i124705 = ((x10_int)0); ((i124705) <= (i89953max124704));
             
             //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i124705 = ((x10_int) ((i124705) + (((x10_int)1)))))
        {
            
            //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int r124706 = i124705;
            
            //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int sum124671 = ((x10_int)0);
            
            //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i89934domain124663 = threadsRange;
            
            //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int i89934max124664 = i89934domain124663->
                                        FMGL(max);
            
            //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
            {
                x10_int i124665;
                for (
                     //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                     i124665 = ((x10_int)0); ((i124665) <= (i89934max124664));
                     
                     //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                     i124665 = ((x10_int) ((i124665) + (((x10_int)1)))))
                {
                    
                    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                    x10_int t124666 = i124665;
                    
                    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                    sum124671 = ((x10_int) ((sum124671) + ((__extension__ ({
                        
                        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> this124660 =
                          (*this)->FMGL(threadCounts);
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index124661 = ((x10_int) ((((x10_int) ((t124666) * (width)))) + (r124706)));
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret124662;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this124660->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index124661) < (((x10_int)0))) ||
                                ((((x10_long) (index124661))) >= (this124660->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124661), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret124662 = (this124660->FMGL(data))[index124661];
                        ret124662;
                    }))
                    )));
                }
            }
            
            //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> this124667 =
              (*this)->FMGL(sendCounts);
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index124668 = r124706;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value124669 = sum124671;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret124670;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this124667->FMGL(data)).isValid()))
                {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index124668) < (((x10_int)0))) || ((((x10_long) (index124668))) >= (this124667->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124668), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this124667->FMGL(data)).set(index124668, value124669);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret124670 = value124669;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret124670;
        }
    }
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> this124707 =
      (*this)->FMGL(sendOffsets);
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_int ret124708;
    {
        
        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((this124707->FMGL(data)).isValid())) {
            
            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (this124707->
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
    (this124707->FMGL(data)).set(((x10_int)0), ((x10_int)0));
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret124708 = ((x10_int)0);
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret124708;
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i89972domain124709 = teamRange;
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int i89972max124710 = i89972domain124709->FMGL(max);
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
    {
        x10_int i124711;
        for (
             //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
             i124711 = ((x10_int)0); ((i124711) <= (i89972max124710));
             
             //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i124711 = ((x10_int) ((i124711) + (((x10_int)1)))))
        {
            
            //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int r124712 = i124711;
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> this124672 =
              (*this)->FMGL(sendOffsets);
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index124673 = ((x10_int) ((r124712) + (((x10_int)1))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value124674 = ((x10_int) (((__extension__ ({
                
                //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> this124675 =
                  (*this)->FMGL(sendOffsets);
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index124676 = r124712;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret124677;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this124675->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index124676) < (((x10_int)0))) ||
                        ((((x10_long) (index124676))) >= (this124675->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124676), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret124677 = (this124675->FMGL(data))[index124676];
                ret124677;
            }))
            ) + ((__extension__ ({
                
                //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> this124678 =
                  (*this)->FMGL(sendCounts);
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index124679 = r124712;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret124680;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this124678->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index124679) < (((x10_int)0))) ||
                        ((((x10_long) (index124679))) >= (this124678->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124679), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret124680 = (this124678->FMGL(data))[index124679];
                ret124680;
            }))
            )));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret124681;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this124672->FMGL(data)).isValid()))
                {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index124673) < (((x10_int)0))) || ((((x10_long) (index124673))) >= (this124672->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124673), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this124672->FMGL(data)).set(index124673, value124674);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret124681 = value124674;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret124681;
        }
    }
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i90010domain124713 = teamRange;
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int i90010max124714 = i90010domain124713->FMGL(max);
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
    {
        x10_int i124715;
        for (
             //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
             i124715 = ((x10_int)0); ((i124715) <= (i90010max124714));
             
             //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i124715 = ((x10_int) ((i124715) + (((x10_int)1)))))
        {
            
            //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int r124716 = i124715;
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> this124692 =
              (*this)->FMGL(threadOffsets);
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index124693 = ((x10_int) ((((x10_int) ((((x10_int)0)) * (width)))) + (r124716)));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value124694 = (__extension__ ({
                
                //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> this124695 =
                  (*this)->FMGL(sendOffsets);
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index124696 = r124716;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret124697;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this124695->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index124696) < (((x10_int)0))) ||
                        ((((x10_long) (index124696))) >= (this124695->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124696), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret124697 = (this124695->FMGL(data))[index124696];
                ret124697;
            }))
            ;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret124698;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this124692->FMGL(data)).isValid()))
                {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index124693) < (((x10_int)0))) || ((((x10_long) (index124693))) >= (this124692->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124693), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this124692->FMGL(data)).set(index124693, value124694);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret124698 = value124694;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret124698;
            
            //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i89991domain124699 = threadsRange;
            
            //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int i89991max124700 = i89991domain124699->
                                        FMGL(max);
            
            //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
            {
                x10_int i124701;
                for (
                     //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                     i124701 = ((x10_int)0); ((i124701) <= (i89991max124700));
                     
                     //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                     i124701 = ((x10_int) ((i124701) + (((x10_int)1)))))
                {
                    
                    //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                    x10_int t124702 = i124701;
                    
                    //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> this124682 =
                      (*this)->FMGL(threadOffsets);
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index124683 = ((x10_int) ((((x10_int) ((((x10_int) ((t124702) + (((x10_int)1))))) * (width)))) + (r124716)));
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int value124684 = ((x10_int) (((__extension__ ({
                        
                        //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> this124685 =
                          (*this)->FMGL(threadOffsets);
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index124686 = ((x10_int) ((((x10_int) ((t124702) * (width)))) + (r124716)));
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret124687;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this124685->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index124686) < (((x10_int)0))) ||
                                ((((x10_long) (index124686))) >= (this124685->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124686), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret124687 = (this124685->FMGL(data))[index124686];
                        ret124687;
                    }))
                    ) + ((__extension__ ({
                        
                        //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> this124688 =
                          (*this)->FMGL(threadCounts);
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index124689 = ((x10_int) ((((x10_int) ((t124702) * (width)))) + (r124716)));
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret124690;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this124688->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index124689) < (((x10_int)0))) ||
                                ((((x10_long) (index124689))) >= (this124688->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124689), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret124690 = (this124688->FMGL(data))[index124689];
                        ret124690;
                    }))
                    )));
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret124691;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this124682->FMGL(data)).isValid()))
                        {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index124683) < (((x10_int)0))) ||
                            ((((x10_long) (index124683))) >= (this124682->
                                                                FMGL(data)->
                                                                FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124683), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (this124682->FMGL(data)).set(index124683, value124684);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret124691 = value124684;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret124691;
                }
            }
            
            //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals((*this)->
                                                             FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                             ((x10_int) ((((x10_int) (((*this)->
                                                                                         FMGL(maxThreads)) * (width)))) + (r124716)))),
                                                           (*this)->
                                                             FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                             ((x10_int) ((r124716) + (((x10_int)1))))))));
            #endif//NO_ASSERTIONS
            
        }
    }
    
}

//#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::DistScatterGather::sendCount(
  ) {
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> this124633 =
          (*this)->FMGL(sendOffsets);
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index124632 = (__extension__ ({
            
            //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Team2 this124631 = (*this)->
                                                        FMGL(team);
            x10aux::nullCheck(this124631->FMGL(base))->size();
        }))
        ;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret124634;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this124633->FMGL(data)).isValid())) {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index124632) < (((x10_int)0))) || ((((x10_long) (index124632))) >= (this124633->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124632), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret124634 = (this124633->FMGL(data))[index124632];
        ret124634;
    }))
    ;
    
}

//#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::DistScatterGather::recvCount(
  ) {
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> this124638 =
          (*this)->FMGL(recvOffsets);
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index124637 = (__extension__ ({
            
            //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Team2 this124636 = (*this)->
                                                        FMGL(team);
            x10aux::nullCheck(this124636->FMGL(base))->size();
        }))
        ;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret124639;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this124638->FMGL(data)).isValid())) {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index124637) < (((x10_int)0))) || ((((x10_long) (index124637))) >= (this124638->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index124637), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret124639 = (this124638->FMGL(data))[index124637];
        ret124639;
    }))
    ;
    
}

//#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::DistScatterGather::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::DistScatterGather::toString(
  ) {
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
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

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::DistScatterGather::hashCode(
  ) {
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(team)->org::scalegraph::util::Team2::hashCode())));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(maxThreads)))));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(bufferWidth)))));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(threadCounts)->org::scalegraph::util::MemoryChunk<x10_int>::hashCode())));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::hashCode())));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(sendCounts)->org::scalegraph::util::MemoryChunk<x10_int>::hashCode())));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::hashCode())));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(recvCounts)->org::scalegraph::util::MemoryChunk<x10_int>::hashCode())));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(recvOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::hashCode())));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(CACHE_LINE)))));
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::DistScatterGather::equals(
  x10::lang::Any* other) {
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::DistScatterGather>(other)))
    {
        
        //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::DistScatterGather::equals(
             x10aux::class_cast<org::scalegraph::util::DistScatterGather>(other));
    
}

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::DistScatterGather::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::DistScatterGather>(other)))
    {
        
        //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::DistScatterGather::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::DistScatterGather>(other));
    
}

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
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
