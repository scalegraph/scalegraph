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
    org::scalegraph::util::DistScatterGather this123347 = (*this);
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    this123347->FMGL(CACHE_LINE) = ((x10_int)64);
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(team) = (__extension__ ({
        
        //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 alloc87410 =  org::scalegraph::util::Team2::_alloc();
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* baseTeam123348 = team;
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10FieldAssign_c
        alloc87410->FMGL(base) = baseTeam123348;
        alloc87410;
    }))
    ;
    
    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = x10aux::nullCheck(team)->size();
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(maxThreads) = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(bufferWidth) = (__extension__ ({
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_int a123265 = ((x10_int) ((((x10_int)64)) / x10aux::zeroCheck(((x10_int)4))));
        
        //#line 347 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_int b123266 = teamSize;
        ((a123265) < (b123266)) ? (b123266) : (a123265);
    }))
    ;
    
    //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int size = ((x10_int) ((((x10_int) (((*this)->FMGL(bufferWidth)) * (((x10_int) ((((x10_int) (((*this)->
                                                                                                        FMGL(maxThreads)) * (((x10_int)2))))) + (((x10_int)1)))))))) + (((x10_int) ((((x10_int) ((((x10_int) ((teamSize) * (((x10_int)2))))) + (((x10_int)1))))) * (((x10_int)2)))))));
    
    //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk__Distributor<x10_int>* dist =
      (__extension__ ({
        
        //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> this123268 = org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (size)), ((x10_int)64), false, (x10_byte*)(void*)__FILE__, __LINE__);
        (__extension__ ({
            
            //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk__Distributor<x10_int>* alloc123267 =
               ((new (memset(x10aux::alloc<org::scalegraph::util::MemoryChunk__Distributor<x10_int> >(), 0, sizeof(org::scalegraph::util::MemoryChunk__Distributor<x10_int>))) org::scalegraph::util::MemoryChunk__Distributor<x10_int>()))
            ;
            
            //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> outer123349 =
              this123268;
            
            //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc123267->FMGL(offset) = ((x10_long) (((x10_int)0)));
            
            //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
            alloc123267->FMGL(outer) = outer123349;
            alloc123267;
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
    x10::lang::LongRange i87412domain123352 = (__extension__ ({
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((mc->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_long i87412max123353 = i87412domain123352->FMGL(max);
    
    //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
    {
        x10_long i123354;
        for (
             //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
             i123354 = ((x10_long)0ll); ((i123354) <= (i87412max123353));
             
             //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i123354 = ((x10_long) ((i123354) + (((x10_long)1ll)))))
        {
            
            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_long i123355 = i123354;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index123350 = i123355;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret123351;
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
                if (((index123350) < (((x10_long) (((x10_int)0))))) ||
                    ((index123350) >= (mc->FMGL(data)->FMGL(size))))
                {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123350), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (mc->FMGL(data)).set(index123350, ((x10_int)0));
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret123351 = ((x10_int)0);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret123351;
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
        org::scalegraph::util::Team2 this123277 = (*this)->
                                                    FMGL(team);
        x10aux::nullCheck(this123277->FMGL(base))->size();
    }))
    ;
    
    //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange teamRange = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((teamSize) - (((x10_int)1)))));
    
    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange threadsRange = x10::lang::IntRange::_make(((x10_int)0), ((x10_int) (((*this)->
                                                                                               FMGL(maxThreads)) - (((x10_int)1)))));
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i87450domain123399 = teamRange;
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int i87450max123400 = i87450domain123399->FMGL(max);
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
    {
        x10_int i123401;
        for (
             //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
             i123401 = ((x10_int)0); ((i123401) <= (i87450max123400));
             
             //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i123401 = ((x10_int) ((i123401) + (((x10_int)1)))))
        {
            
            //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int r123402 = i123401;
            
            //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int sum123367 = ((x10_int)0);
            
            //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i87431domain123359 = threadsRange;
            
            //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int i87431max123360 = i87431domain123359->
                                        FMGL(max);
            
            //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
            {
                x10_int i123361;
                for (
                     //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                     i123361 = ((x10_int)0); ((i123361) <= (i87431max123360));
                     
                     //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                     i123361 = ((x10_int) ((i123361) + (((x10_int)1)))))
                {
                    
                    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                    x10_int t123362 = i123361;
                    
                    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                    sum123367 = ((x10_int) ((sum123367) + ((__extension__ ({
                        
                        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> this123356 =
                          (*this)->FMGL(threadCounts);
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index123357 = ((x10_int) ((((x10_int) ((t123362) * (width)))) + (r123402)));
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret123358;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this123356->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index123357) < (((x10_int)0))) ||
                                ((((x10_long) (index123357))) >= (this123356->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123357), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret123358 = (this123356->FMGL(data))[index123357];
                        ret123358;
                    }))
                    )));
                }
            }
            
            //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> this123363 =
              (*this)->FMGL(sendCounts);
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index123364 = r123402;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value123365 = sum123367;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret123366;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this123363->FMGL(data)).isValid()))
                {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index123364) < (((x10_int)0))) || ((((x10_long) (index123364))) >= (this123363->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123364), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this123363->FMGL(data)).set(index123364, value123365);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret123366 = value123365;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret123366;
        }
    }
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> this123403 =
      (*this)->FMGL(sendOffsets);
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_int ret123404;
    {
        
        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((this123403->FMGL(data)).isValid())) {
            
            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (this123403->
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
    (this123403->FMGL(data)).set(((x10_int)0), ((x10_int)0));
    
    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret123404 = ((x10_int)0);
    
    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret123404;
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i87469domain123405 = teamRange;
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int i87469max123406 = i87469domain123405->FMGL(max);
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
    {
        x10_int i123407;
        for (
             //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
             i123407 = ((x10_int)0); ((i123407) <= (i87469max123406));
             
             //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i123407 = ((x10_int) ((i123407) + (((x10_int)1)))))
        {
            
            //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int r123408 = i123407;
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> this123368 =
              (*this)->FMGL(sendOffsets);
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index123369 = ((x10_int) ((r123408) + (((x10_int)1))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value123370 = ((x10_int) (((__extension__ ({
                
                //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> this123371 =
                  (*this)->FMGL(sendOffsets);
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index123372 = r123408;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret123373;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this123371->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index123372) < (((x10_int)0))) ||
                        ((((x10_long) (index123372))) >= (this123371->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123372), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret123373 = (this123371->FMGL(data))[index123372];
                ret123373;
            }))
            ) + ((__extension__ ({
                
                //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> this123374 =
                  (*this)->FMGL(sendCounts);
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index123375 = r123408;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret123376;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this123374->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index123375) < (((x10_int)0))) ||
                        ((((x10_long) (index123375))) >= (this123374->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123375), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret123376 = (this123374->FMGL(data))[index123375];
                ret123376;
            }))
            )));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret123377;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this123368->FMGL(data)).isValid()))
                {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index123369) < (((x10_int)0))) || ((((x10_long) (index123369))) >= (this123368->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123369), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this123368->FMGL(data)).set(index123369, value123370);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret123377 = value123370;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret123377;
        }
    }
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i87507domain123409 = teamRange;
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
    x10_int i87507max123410 = i87507domain123409->FMGL(max);
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
    {
        x10_int i123411;
        for (
             //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
             i123411 = ((x10_int)0); ((i123411) <= (i87507max123410));
             
             //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
             i123411 = ((x10_int) ((i123411) + (((x10_int)1)))))
        {
            
            //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int r123412 = i123411;
            
            //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> this123388 =
              (*this)->FMGL(threadOffsets);
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index123389 = ((x10_int) ((((x10_int) ((((x10_int)0)) * (width)))) + (r123412)));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int value123390 = (__extension__ ({
                
                //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> this123391 =
                  (*this)->FMGL(sendOffsets);
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index123392 = r123412;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int ret123393;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this123391->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index123392) < (((x10_int)0))) ||
                        ((((x10_long) (index123392))) >= (this123391->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123392), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret123393 = (this123391->FMGL(data))[index123392];
                ret123393;
            }))
            ;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int ret123394;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this123388->FMGL(data)).isValid()))
                {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index123389) < (((x10_int)0))) || ((((x10_long) (index123389))) >= (this123388->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123389), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this123388->FMGL(data)).set(index123389, value123390);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret123394 = value123390;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret123394;
            
            //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i87488domain123395 = threadsRange;
            
            //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            x10_int i87488max123396 = i87488domain123395->
                                        FMGL(max);
            
            //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.For_c
            {
                x10_int i123397;
                for (
                     //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                     i123397 = ((x10_int)0); ((i123397) <= (i87488max123396));
                     
                     //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": Eval of x10.ast.X10LocalAssign_c
                     i123397 = ((x10_int) ((i123397) + (((x10_int)1)))))
                {
                    
                    //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                    x10_int t123398 = i123397;
                    
                    //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_int> this123378 =
                      (*this)->FMGL(threadOffsets);
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index123379 = ((x10_int) ((((x10_int) ((((x10_int) ((t123398) + (((x10_int)1))))) * (width)))) + (r123412)));
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int value123380 = ((x10_int) (((__extension__ ({
                        
                        //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> this123381 =
                          (*this)->FMGL(threadOffsets);
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index123382 = ((x10_int) ((((x10_int) ((t123398) * (width)))) + (r123412)));
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret123383;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this123381->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index123382) < (((x10_int)0))) ||
                                ((((x10_long) (index123382))) >= (this123381->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123382), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret123383 = (this123381->FMGL(data))[index123382];
                        ret123383;
                    }))
                    ) + ((__extension__ ({
                        
                        //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::util::MemoryChunk<x10_int> this123384 =
                          (*this)->FMGL(threadCounts);
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int index123385 = ((x10_int) ((((x10_int) ((t123398) * (width)))) + (r123412)));
                        
                        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_int ret123386;
                        {
                            
                            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((this123384->FMGL(data)).isValid()))
                            {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (((index123385) < (((x10_int)0))) ||
                                ((((x10_long) (index123385))) >= (this123384->
                                                                    FMGL(data)->
                                                                    FMGL(size))))
                            {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123385), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret123386 = (this123384->FMGL(data))[index123385];
                        ret123386;
                    }))
                    )));
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int ret123387;
                    {
                        
                        //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this123378->FMGL(data)).isValid()))
                        {
                            
                            //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index123379) < (((x10_int)0))) ||
                            ((((x10_long) (index123379))) >= (this123378->
                                                                FMGL(data)->
                                                                FMGL(size))))
                        {
                            
                            //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123379), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (this123378->FMGL(data)).set(index123379, value123380);
                    
                    //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret123387 = value123380;
                    
                    //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret123387;
                }
            }
            
            //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": polyglot.ast.Assert_c
            #ifndef NO_ASSERTIONS
            if (x10aux::x10__assertions_enabled)
                x10aux::x10__assert((x10aux::struct_equals((*this)->
                                                             FMGL(threadOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                             ((x10_int) ((((x10_int) (((*this)->
                                                                                         FMGL(maxThreads)) * (width)))) + (r123412)))),
                                                           (*this)->
                                                             FMGL(sendOffsets)->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                             ((x10_int) ((r123412) + (((x10_int)1))))))));
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
        org::scalegraph::util::MemoryChunk<x10_int> this123329 =
          (*this)->FMGL(sendOffsets);
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index123328 = (__extension__ ({
            
            //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Team2 this123327 = (*this)->
                                                        FMGL(team);
            x10aux::nullCheck(this123327->FMGL(base))->size();
        }))
        ;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret123330;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this123329->FMGL(data)).isValid())) {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index123328) < (((x10_int)0))) || ((((x10_long) (index123328))) >= (this123329->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123328), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret123330 = (this123329->FMGL(data))[index123328];
        ret123330;
    }))
    ;
    
}

//#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::DistScatterGather::recvCount(
  ) {
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> this123334 =
          (*this)->FMGL(recvOffsets);
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index123333 = (__extension__ ({
            
            //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/DistScatterGather.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::Team2 this123332 = (*this)->
                                                        FMGL(team);
            x10aux::nullCheck(this123332->FMGL(base))->size();
        }))
        ;
        
        //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int ret123335;
        {
            
            //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this123334->FMGL(data)).isValid())) {
                
                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index123333) < (((x10_int)0))) || ((((x10_long) (index123333))) >= (this123334->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index123333), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret123335 = (this123334->FMGL(data))[index123333];
        ret123335;
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
