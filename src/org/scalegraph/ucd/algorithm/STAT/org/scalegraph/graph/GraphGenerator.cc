/*************************************************/
/* START of GraphGenerator */
#include <org/scalegraph/graph/GraphGenerator.h>

#include <x10/lang/Long.h>
#include <org/scalegraph/graph/EdgeList.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/util/Team.h>
#include <org/scalegraph/Config.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/Fun_0_0.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/array/Array.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/array/Region.h>
#include <x10/lang/LongRange.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <org/scalegraph/util/random/Random.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/lang/Double.h>
#include <x10/lang/GlobalRef.h>
#include <x10/lang/Cell.h>
#include <org/scalegraph/util/Team2.h>
#include <x10/lang/Iterator.h>
#include <x10/array/Point.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/Float.h>
#include <org/scalegraph/util/MathAppend.h>
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                                                                             FMGL(id),
                                                                                           ((x10_int)0)))
          ? (((x10_long) ((numLocalEdges) - (((x10_long) (((x10_int)1)))))))
          : (numLocalEdges), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__1* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__1>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__1* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__1(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__1(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:69";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make((x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                                                                             FMGL(id),
                                                                                           ((x10_int)0)))
          ? (((x10_long) ((numLocalEdges) - (((x10_long) (((x10_int)1)))))))
          : (numLocalEdges), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__2* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__2>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__2* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__2(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__2(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:71";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__3 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__3> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> srcMem_ = srcMemory->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> dstMem_ = dstMemory->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
        
        //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_int role = (__extension__ ({
            
            //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10_int>* this130759 = x10aux::nullCheck(team)->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret130760;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret130761; __ret130761: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this130759)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret130760 = (x10aux::nullCheck(this130759)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret130761_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this130759)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret130760 = (x10aux::nullCheck(this130759)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this130759)->
                                                                                                                    FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret130761_end_;
                }
                
            }goto __ret130761_end_; __ret130761_end_: ;
            }
            ret130760;
            }))
            ;
            
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_int indexOffset = (x10aux::struct_equals(x10::lang::Place::_make(x10aux::here)->
                                                       FMGL(id),
                                                     ((x10_int)0)))
          ? (((x10_int)1)) : (((x10_int)0));
        
        //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i86750domain131042 = (__extension__ ({
            x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((srcMem_->
                                                                         FMGL(data)->
                                                                         FMGL(size)) - (((x10_long)1ll)))));
        }))
        ;
        
        //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long i86750max131043 = i86750domain131042->FMGL(max);
        
        //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
        {
            x10_long i131044;
            for (
                 //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                 i131044 = ((x10_long)0ll); ((i131044) <= (i86750max131043));
                 
                 //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                 i131044 = ((x10_long) ((i131044) + (((x10_long)1ll)))))
            {
                
                //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_long i131045 = i131044;
                
                //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_long src131040 = ((x10_long) ((((x10_long) ((((x10_long) (teamSize))) * (((x10_long) ((i131045) + (((x10_long) (indexOffset))))))))) + (((x10_long) (role)))));
                
                //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                x10_long dst131041 = ((x10_long) ((src131040) / x10aux::zeroCheck(((x10_long) (((x10_int)2))))));
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index131034 = i131045;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value131035 = src131040;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret131036;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((srcMem_->FMGL(data)).isValid()))
                    {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index131034) < (((x10_long) (((x10_int)0))))) ||
                        ((index131034) >= (srcMem_->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131034), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (srcMem_->FMGL(data)).set(index131034, value131035);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret131036 = value131035;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret131036;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index131037 = i131045;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long value131038 = dst131041;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret131039;
                {
                    
                    //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((dstMem_->FMGL(data)).isValid()))
                    {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index131037) < (((x10_long) (((x10_int)0))))) ||
                        ((index131037) >= (dstMem_->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131037), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                (dstMem_->FMGL(data)).set(index131037, value131038);
                
                //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret131039 = value131038;
                
                //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                ret131039;
            }
        }
        }
        
        // captured environment
        org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory;
        org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory;
        x10::util::Team* team;
        x10_int teamSize;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->srcMemory);
            buf.write(this->dstMemory);
            buf.write(this->team);
            buf.write(this->teamSize);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_graph_GraphGenerator__closure__3* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__3>();
            buf.record_reference(storage);
            org::scalegraph::util::DistMemoryChunk<x10_long> that_srcMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
            org::scalegraph::util::DistMemoryChunk<x10_long> that_dstMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
            x10::util::Team* that_team = buf.read<x10::util::Team*>();
            x10_int that_teamSize = buf.read<x10_int>();
            org_scalegraph_graph_GraphGenerator__closure__3* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__3(that_srcMemory, that_dstMemory, that_team, that_teamSize);
            return this_;
        }
        
        org_scalegraph_graph_GraphGenerator__closure__3(org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory, org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory, x10::util::Team* team, x10_int teamSize) : srcMemory(srcMemory), dstMemory(dstMemory), team(team), teamSize(teamSize) { }
        
        static const x10aux::serialization_id_t _serialization_id;
        
        static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        
        x10::lang::String* toString() {
            return x10aux::makeStringLit(this->toNativeString());
        }
        
        const char* toNativeString() {
            return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:73-86";
        }
    
    };
    
    #endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__3_CLOSURE
    #ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__4 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__4> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make(numLocalEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__4* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__4>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__4* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__4(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__4(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:101";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__5 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__5> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make(numLocalEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__5* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__5>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__5* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__5(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__5(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:103";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__7 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__7> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long tid131063 = ((x10_long) (idx131065));
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r131064 = i_range131069;
            
            //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::random::Random* rnd_131059 = x10aux::nullCheck(rnd)->clone();
            
            //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
            rnd_131059->skip(((x10_long) ((((x10_long) ((offset) + (r131064->
                                                                      FMGL(min))))) * (((x10_long) (((x10_int)4)))))));
            
            //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> srcMem_131060 = srcMemory->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            
            //#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> dstMem_131061 = dstMemory->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            
            //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long vertexMask131062 = ((x10_long) ((numVertices) - (((x10_long) (((x10_int)1))))));
            
            //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86769domain131054 = r131064;
            
            //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long i86769min131055 = i86769domain131054->FMGL(min);
            
            //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long i86769max131056 = i86769domain131054->FMGL(max);
            
            //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
            {
                x10_long i131057;
                for (
                     //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                     i131057 = i86769min131055; ((i131057) <= (i86769max131056));
                     
                     //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                     i131057 = ((x10_long) ((i131057) + (((x10_long)1ll)))))
                {
                    
                    //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                    x10_long i131058 = i131057;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index131048 = i131058;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value131049 = ((x10_long) ((rnd_131059->nextLong()) & (vertexMask131062)));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret131050;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((srcMem_131060->FMGL(data)).isValid()))
                        {
                            
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
                        if (((index131048) < (((x10_long) (((x10_int)0))))) ||
                            ((index131048) >= (srcMem_131060->FMGL(data)->
                                                 FMGL(size)))) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131048), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (srcMem_131060->FMGL(data)).set(index131048, value131049);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131050 = value131049;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret131050;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index131051 = i131058;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long value131052 = ((x10_long) ((rnd_131059->nextLong()) & (vertexMask131062)));
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long ret131053;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((dstMem_131061->FMGL(data)).isValid()))
                        {
                            
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
                        if (((index131051) < (((x10_long) (((x10_int)0))))) ||
                            ((index131051) >= (dstMem_131061->FMGL(data)->
                                                 FMGL(size)))) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131051), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (dstMem_131061->FMGL(data)).set(index131051, value131052);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131053 = value131052;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret131053;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1678) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1678)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1678);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1678);
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
    x10_int idx131065;
    x10::lang::LongRange i_range131069;
    org::scalegraph::util::random::Random* rnd;
    x10_long offset;
    org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory;
    org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory;
    x10_long numVertices;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx131065);
        buf.write(this->i_range131069);
        buf.write(this->rnd);
        buf.write(this->offset);
        buf.write(this->srcMemory);
        buf.write(this->dstMemory);
        buf.write(this->numVertices);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__7* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__7>();
        buf.record_reference(storage);
        x10_int that_idx131065 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range131069 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
        x10_long that_offset = buf.read<x10_long>();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_dstMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        x10_long that_numVertices = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__7* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__7(that_idx131065, that_i_range131069, that_rnd, that_offset, that_srcMemory, that_dstMemory, that_numVertices);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__7(x10_int idx131065, x10::lang::LongRange i_range131069, org::scalegraph::util::random::Random* rnd, x10_long offset, org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory, org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory, x10_long numVertices) : idx131065(idx131065), i_range131069(i_range131069), rnd(rnd), offset(offset), srcMemory(srcMemory), dstMemory(dstMemory), numVertices(numVertices) { }
    
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

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__7_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__6 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__6> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_int role = (__extension__ ({
            
            //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10_int>* this130774 = x10aux::nullCheck(team)->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret130775;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret130776; __ret130776: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this130774)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret130775 = (x10aux::nullCheck(this130774)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret130776_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this130774)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret130775 = (x10aux::nullCheck(this130774)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this130774)->
                                                                                                                    FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret130776_end_;
                }
                
            }goto __ret130776_end_; __ret130776_end_: ;
            }
            ret130775;
            }))
            ;
            
        
        //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long offset = ((x10_long) ((((x10_long) (role))) * (numLocalEdges)));
        
        //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange range131079 = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((numLocalEdges) - (((x10_long) (((x10_int)1)))))));
        
        //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long size131075 = ((x10_long) ((((x10_long) ((range131079->
                                                            FMGL(max)) - (range131079->
                                                                            FMGL(min))))) + (((x10_long) (((x10_int)1))))));
        
        //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int nthreads131076 = x10::lang::Runtime::FMGL(NTHREADS__get)();
        
        //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size131077 = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a131078 = ((x10_long) ((((x10_long) ((((x10_long) ((size131075) + (((x10_long) (nthreads131076)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads131076)))));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
            ;
            ((a131078) < (((x10_long)1ll))) ? (((x10_long)1ll))
              : (a131078);
        }))
        ;
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var164 = x10::lang::Runtime::startFinish();
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable131228 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i74249max131072 = ((x10_int) ((nthreads131076) - (((x10_int)1))));
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i131073;
                                for (
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i131073 = ((x10_int)0);
                                     ((i131073) <= (i74249max131072));
                                     
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i131073 = ((x10_int) ((i131073) + (((x10_int)1)))))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i131074 = i131073;
                                    
                                    //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int idx131065 = i131074;
                                    
                                    //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start131066 =
                                      (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a131067 =
                                          ((x10_long) ((range131079->
                                                          FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b131068 =
                                          ((x10_long) ((range131079->
                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i131074))) * (chunk_size131077))))));
                                        ((a131067) < (b131068))
                                          ? (a131067) : (b131068);
                                    }))
                                    ;
                                    
                                    //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range131069 =
                                      x10::lang::LongRange::_make(i_start131066, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a131070 =
                                          range131079->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b131071 =
                                          ((x10_long) ((((x10_long) ((i_start131066) + (chunk_size131077)))) - (((x10_long) (((x10_int)1))))));
                                        ((a131070) < (b131071))
                                          ? (a131070) : (b131071);
                                    }))
                                    );
                                    
                                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__7)))org_scalegraph_graph_GraphGenerator__closure__7(idx131065, i_range131069, rnd, offset, srcMemory, dstMemory, numVertices))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc1679) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1679);
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
                catch (x10::lang::CheckedThrowable* __exc1680) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal131229 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1680);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable131228 = formal131229;
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable131228)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable131228))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable131228));
                    }
                    
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var164);
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable131228)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable131228)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable131228));
                    }
                    
                }
                
            }
        }
        }
        
        // captured environment
        x10::util::Team* team;
        x10_long numLocalEdges;
        org::scalegraph::util::random::Random* rnd;
        org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory;
        org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory;
        x10_long numVertices;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->team);
            buf.write(this->numLocalEdges);
            buf.write(this->rnd);
            buf.write(this->srcMemory);
            buf.write(this->dstMemory);
            buf.write(this->numVertices);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_graph_GraphGenerator__closure__6* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__6>();
            buf.record_reference(storage);
            x10::util::Team* that_team = buf.read<x10::util::Team*>();
            x10_long that_numLocalEdges = buf.read<x10_long>();
            org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
            org::scalegraph::util::DistMemoryChunk<x10_long> that_srcMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
            org::scalegraph::util::DistMemoryChunk<x10_long> that_dstMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
            x10_long that_numVertices = buf.read<x10_long>();
            org_scalegraph_graph_GraphGenerator__closure__6* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__6(that_team, that_numLocalEdges, that_rnd, that_srcMemory, that_dstMemory, that_numVertices);
            return this_;
        }
        
        org_scalegraph_graph_GraphGenerator__closure__6(x10::util::Team* team, x10_long numLocalEdges, org::scalegraph::util::random::Random* rnd, org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory, org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory, x10_long numVertices) : team(team), numLocalEdges(numLocalEdges), rnd(rnd), srcMemory(srcMemory), dstMemory(dstMemory), numVertices(numVertices) { }
        
        static const x10aux::serialization_id_t _serialization_id;
        
        static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        
        x10::lang::String* toString() {
            return x10aux::makeStringLit(this->toNativeString());
        }
        
        const char* toNativeString() {
            return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:105-120";
        }
    
    };
    
    #endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__6_CLOSURE
    #ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__8_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__8 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__8> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 134 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::Team2 t2 =  org::scalegraph::util::Team2::_alloc();
        
        //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10::util::Team* baseTeam131083 = team;
        
        //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10FieldAssign_c
        t2->FMGL(base) = baseTeam131083;
        
        //#line 135 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> src = org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long value131084 = x10::lang::Fun_0_0<x10_long>::__apply(x10aux::nullCheck(getSize));
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long ret131085;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((src->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((((x10_int)0)) < (((x10_int)0))) || ((((x10_long) (((x10_int)0)))) >= (src->
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
        (src->FMGL(data)).set(((x10_int)0), value131084);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret131085 = value131084;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret131085;
        
        //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> dst =
          (x10aux::struct_equals(x10::lang::Place::place((sizeArray)->location),
                                 x10::lang::Place::_make(x10aux::here)))
          ? ((__extension__ ({
                 
                 //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                 x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* this130837 =
                   x10::lang::GlobalRef__LocalEval::getLocalOrCopy<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* >(sizeArray);
                 x10aux::nullCheck(this130837)->FMGL(value);
             }))
             ) : (org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int)0))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__));
        
        //#line 138 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
        t2->gather<x10_long >(((x10_int)0), src, dst);
    }
    
    // captured environment
    x10::util::Team* team;
    x10::lang::Fun_0_0<x10_long>* getSize;
    x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* > sizeArray;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->team);
        buf.write(this->getSize);
        buf.write(this->sizeArray);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__8* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__8>();
        buf.record_reference(storage);
        x10::util::Team* that_team = buf.read<x10::util::Team*>();
        x10::lang::Fun_0_0<x10_long>* that_getSize = buf.read<x10::lang::Fun_0_0<x10_long>*>();
        x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* > that_sizeArray = buf.read<x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* > >();
        org_scalegraph_graph_GraphGenerator__closure__8* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__8(that_team, that_getSize, that_sizeArray);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__8(x10::util::Team* team, x10::lang::Fun_0_0<x10_long>* getSize, x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* > sizeArray) : team(team), getSize(getSize), sizeArray(sizeArray) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:133-139";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__8_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__9_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__9 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >::itable<org_scalegraph_graph_GraphGenerator__closure__9> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_double> __apply() {
        
        //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
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
        org_scalegraph_graph_GraphGenerator__closure__9* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__9>();
        buf.record_reference(storage);
        x10::lang::Fun_0_0<x10_long>* that_getSize = buf.read<x10::lang::Fun_0_0<x10_long>*>();
        org_scalegraph_graph_GraphGenerator__closure__9* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__9(that_getSize);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__9(x10::lang::Fun_0_0<x10_long>* getSize) : getSize(getSize) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:142";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__9_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__11_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__11 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__11> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long tid131096 = ((x10_long) (idx131098));
            
            //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r131097 = i_range131102;
            
            //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::random::Random* rnd_131094 = x10aux::nullCheck(rnd)->clone();
            
            //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
            rnd_131094->skip(((x10_long) ((((x10_long) ((offset) + (r131097->
                                                                      FMGL(min))))) * (((x10_long) (((x10_int)2)))))));
            
            //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_double> edgeMem_131095 =
              edgeMemory->org::scalegraph::util::DistMemoryChunk<x10_double>::__apply();
            
            //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86788domain131089 = r131097;
            
            //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long i86788min131090 = i86788domain131089->FMGL(min);
            
            //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long i86788max131091 = i86788domain131089->FMGL(max);
            
            //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
            {
                x10_long i131092;
                for (
                     //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                     i131092 = i86788min131090; ((i131092) <= (i86788max131091));
                     
                     //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                     i131092 = ((x10_long) ((i131092) + (((x10_long)1ll)))))
                {
                    
                    //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                    x10_long i131093 = i131092;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index131086 = i131093;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_double value131087 = rnd_131094->nextDouble();
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_double ret131088;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((edgeMem_131095->FMGL(data)).isValid()))
                        {
                            
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
                        if (((index131086) < (((x10_long) (((x10_int)0))))) ||
                            ((index131086) >= (edgeMem_131095->FMGL(data)->
                                                 FMGL(size)))) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131086), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (edgeMem_131095->FMGL(data)).set(index131086, value131087);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131088 = value131087;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret131088;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1682) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1682)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1682);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1682);
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
    x10_int idx131098;
    x10::lang::LongRange i_range131102;
    org::scalegraph::util::random::Random* rnd;
    x10_long offset;
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx131098);
        buf.write(this->i_range131102);
        buf.write(this->rnd);
        buf.write(this->offset);
        buf.write(this->edgeMemory);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__11* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__11>();
        buf.record_reference(storage);
        x10_int that_idx131098 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range131102 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
        x10_long that_offset = buf.read<x10_long>();
        org::scalegraph::util::DistMemoryChunk<x10_double> that_edgeMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_double> >();
        org_scalegraph_graph_GraphGenerator__closure__11* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__11(that_idx131098, that_i_range131102, that_rnd, that_offset, that_edgeMemory);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__11(x10_int idx131098, x10::lang::LongRange i_range131102, org::scalegraph::util::random::Random* rnd, x10_long offset, org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory) : idx131098(idx131098), i_range131102(i_range131102), rnd(rnd), offset(offset), edgeMemory(edgeMemory) { }
    
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

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__11_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__10_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__10 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__10> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Try_c
        try {
            
            //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange range131112 = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((numLocalEdges) - (((x10_long) (((x10_int)1)))))));
            
            //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long size131108 = ((x10_long) ((((x10_long) ((range131112->
                                                                FMGL(max)) - (range131112->
                                                                                FMGL(min))))) + (((x10_long) (((x10_int)1))))));
            
            //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int nthreads131109 = x10::lang::Runtime::FMGL(NTHREADS__get)();
            
            //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long chunk_size131110 = (__extension__ ({
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                x10_long a131111 = ((x10_long) ((((x10_long) ((((x10_long) ((size131108) + (((x10_long) (nthreads131109)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads131109)))));
                
                //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
                ;
                ((a131111) < (((x10_long)1ll))) ? (((x10_long)1ll))
                  : (a131111);
            }))
            ;
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var165 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable131231 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i74249max131105 = ((x10_int) ((nthreads131109) - (((x10_int)1))));
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                                {
                                    x10_int i131106;
                                    for (
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                         i131106 = ((x10_int)0); ((i131106) <= (i74249max131105));
                                         
                                         //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                         i131106 = ((x10_int) ((i131106) + (((x10_int)1)))))
                                    {
                                        
                                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int i131107 =
                                          i131106;
                                        
                                        //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_int idx131098 =
                                          i131107;
                                        
                                        //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10_long i_start131099 =
                                          (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a131100 =
                                              ((x10_long) ((range131112->
                                                              FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b131101 =
                                              ((x10_long) ((range131112->
                                                              FMGL(min)) + (((x10_long) ((((x10_long) (i131107))) * (chunk_size131110))))));
                                            ((a131100) < (b131101))
                                              ? (a131100)
                                              : (b131101);
                                        }))
                                        ;
                                        
                                        //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::LongRange i_range131102 =
                                          x10::lang::LongRange::_make(i_start131099, (__extension__ ({
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long a131103 =
                                              range131112->
                                                FMGL(max);
                                            
                                            //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                            x10_long b131104 =
                                              ((x10_long) ((((x10_long) ((i_start131099) + (chunk_size131110)))) - (((x10_long) (((x10_int)1))))));
                                            ((a131103) < (b131104))
                                              ? (a131103)
                                              : (b131104);
                                        }))
                                        );
                                        
                                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__11)))org_scalegraph_graph_GraphGenerator__closure__11(idx131098, i_range131102, rnd, offset, edgeMemory))));
                                    }
                                }
                                
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc1683) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1683);
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
                    catch (x10::lang::CheckedThrowable* __exc1684) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal131232 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1684);
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable131231 = formal131232;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable131231)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable131231))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable131231));
                        }
                        
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var165);
                    }
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable131231)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable131231)))
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable131231));
                        }
                        
                    }
                    
                }
            }
        }
        catch (x10::lang::CheckedThrowable* __exc1685) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1685)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1685);
                {
                    
                    //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1685);
                {
                    
                    //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long numLocalEdges;
    org::scalegraph::util::random::Random* rnd;
    x10_long offset;
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
        buf.write(this->rnd);
        buf.write(this->offset);
        buf.write(this->edgeMemory);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__10* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__10>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
        x10_long that_offset = buf.read<x10_long>();
        org::scalegraph::util::DistMemoryChunk<x10_double> that_edgeMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_double> >();
        org_scalegraph_graph_GraphGenerator__closure__10* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__10(that_numLocalEdges, that_rnd, that_offset, that_edgeMemory);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__10(x10_long numLocalEdges, org::scalegraph::util::random::Random* rnd, x10_long offset, org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory) : numLocalEdges(numLocalEdges), rnd(rnd), offset(offset), edgeMemory(edgeMemory) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:150-160";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__10_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__12_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__12 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >::itable<org_scalegraph_graph_GraphGenerator__closure__12> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_double> __apply() {
        
        //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_double >::_make(numLocalEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__12* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__12>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__12* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__12(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__12(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:178";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__12_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__14_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__14 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__14> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long tid131123 = ((x10_long) (idx131125));
            
            //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r131124 = i_range131129;
            
            //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::random::Random* rnd_131121 = x10aux::nullCheck(rnd)->clone();
            
            //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
            rnd_131121->skip(((x10_long) ((((x10_long) ((offset) + (r131124->
                                                                      FMGL(min))))) * (((x10_long) (((x10_int)2)))))));
            
            //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_double> edgeMem_131122 =
              edgeMemory->org::scalegraph::util::DistMemoryChunk<x10_double>::__apply();
            
            //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86816domain131116 = r131124;
            
            //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long i86816min131117 = i86816domain131116->FMGL(min);
            
            //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long i86816max131118 = i86816domain131116->FMGL(max);
            
            //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
            {
                x10_long i131119;
                for (
                     //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                     i131119 = i86816min131117; ((i131119) <= (i86816max131118));
                     
                     //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                     i131119 = ((x10_long) ((i131119) + (((x10_long)1ll)))))
                {
                    
                    //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                    x10_long i131120 = i131119;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index131113 = i131120;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_double value131114 = rnd_131121->nextDouble();
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_double ret131115;
                    {
                        
                        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((edgeMem_131122->FMGL(data)).isValid()))
                        {
                            
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
                        if (((index131113) < (((x10_long) (((x10_int)0))))) ||
                            ((index131113) >= (edgeMem_131122->FMGL(data)->
                                                 FMGL(size)))) {
                            
                            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131113), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                    (edgeMem_131122->FMGL(data)).set(index131113, value131114);
                    
                    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret131115 = value131114;
                    
                    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                    ret131115;
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1687) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1687)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1687);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1687);
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
    x10_int idx131125;
    x10::lang::LongRange i_range131129;
    org::scalegraph::util::random::Random* rnd;
    x10_long offset;
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx131125);
        buf.write(this->i_range131129);
        buf.write(this->rnd);
        buf.write(this->offset);
        buf.write(this->edgeMemory);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__14* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__14>();
        buf.record_reference(storage);
        x10_int that_idx131125 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range131129 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
        x10_long that_offset = buf.read<x10_long>();
        org::scalegraph::util::DistMemoryChunk<x10_double> that_edgeMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_double> >();
        org_scalegraph_graph_GraphGenerator__closure__14* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__14(that_idx131125, that_i_range131129, that_rnd, that_offset, that_edgeMemory);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__14(x10_int idx131125, x10::lang::LongRange i_range131129, org::scalegraph::util::random::Random* rnd, x10_long offset, org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory) : idx131125(idx131125), i_range131129(i_range131129), rnd(rnd), offset(offset), edgeMemory(edgeMemory) { }
    
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

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__14_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__13_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__13 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__13> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 181 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_int role = (__extension__ ({
            
            //#line 181 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10_int>* this130885 = x10aux::nullCheck(team)->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret130886;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret130887; __ret130887: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this130885)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret130886 = (x10aux::nullCheck(this130885)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret130887_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this130885)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret130886 = (x10aux::nullCheck(this130885)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this130885)->
                                                                                                                    FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret130887_end_;
                }
                
            }goto __ret130887_end_; __ret130887_end_: ;
            }
            ret130886;
            }))
            ;
            
        
        //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long offset = ((x10_long) ((((x10_long) (role))) * (numLocalEdges)));
        
        //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange range131139 = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((numLocalEdges) - (((x10_long) (((x10_int)1)))))));
        
        //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long size131135 = ((x10_long) ((((x10_long) ((range131139->
                                                            FMGL(max)) - (range131139->
                                                                            FMGL(min))))) + (((x10_long) (((x10_int)1))))));
        
        //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int nthreads131136 = x10::lang::Runtime::FMGL(NTHREADS__get)();
        
        //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size131137 = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a131138 = ((x10_long) ((((x10_long) ((((x10_long) ((size131135) + (((x10_long) (nthreads131136)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads131136)))));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
            ;
            ((a131138) < (((x10_long)1ll))) ? (((x10_long)1ll))
              : (a131138);
        }))
        ;
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var166 = x10::lang::Runtime::startFinish();
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable131234 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i74249max131132 = ((x10_int) ((nthreads131136) - (((x10_int)1))));
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i131133;
                                for (
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i131133 = ((x10_int)0);
                                     ((i131133) <= (i74249max131132));
                                     
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i131133 = ((x10_int) ((i131133) + (((x10_int)1)))))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i131134 = i131133;
                                    
                                    //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int idx131125 = i131134;
                                    
                                    //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start131126 =
                                      (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a131127 =
                                          ((x10_long) ((range131139->
                                                          FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b131128 =
                                          ((x10_long) ((range131139->
                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i131134))) * (chunk_size131137))))));
                                        ((a131127) < (b131128))
                                          ? (a131127) : (b131128);
                                    }))
                                    ;
                                    
                                    //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range131129 =
                                      x10::lang::LongRange::_make(i_start131126, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a131130 =
                                          range131139->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b131131 =
                                          ((x10_long) ((((x10_long) ((i_start131126) + (chunk_size131137)))) - (((x10_long) (((x10_int)1))))));
                                        ((a131130) < (b131131))
                                          ? (a131130) : (b131131);
                                    }))
                                    );
                                    
                                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__14)))org_scalegraph_graph_GraphGenerator__closure__14(idx131125, i_range131129, rnd, offset, edgeMemory))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc1688) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1688);
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
                catch (x10::lang::CheckedThrowable* __exc1689) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal131235 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1689);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable131234 = formal131235;
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable131234)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable131234))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable131234));
                    }
                    
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var166);
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable131234)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable131234)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable131234));
                    }
                    
                }
                
            }
        }
        }
        
        // captured environment
        x10::util::Team* team;
        x10_long numLocalEdges;
        org::scalegraph::util::random::Random* rnd;
        org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->team);
            buf.write(this->numLocalEdges);
            buf.write(this->rnd);
            buf.write(this->edgeMemory);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_graph_GraphGenerator__closure__13* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__13>();
            buf.record_reference(storage);
            x10::util::Team* that_team = buf.read<x10::util::Team*>();
            x10_long that_numLocalEdges = buf.read<x10_long>();
            org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
            org::scalegraph::util::DistMemoryChunk<x10_double> that_edgeMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_double> >();
            org_scalegraph_graph_GraphGenerator__closure__13* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__13(that_team, that_numLocalEdges, that_rnd, that_edgeMemory);
            return this_;
        }
        
        org_scalegraph_graph_GraphGenerator__closure__13(x10::util::Team* team, x10_long numLocalEdges, org::scalegraph::util::random::Random* rnd, org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory) : team(team), numLocalEdges(numLocalEdges), rnd(rnd), edgeMemory(edgeMemory) { }
        
        static const x10aux::serialization_id_t _serialization_id;
        
        static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        
        x10::lang::String* toString() {
            return x10aux::makeStringLit(this->toNativeString());
        }
        
        const char* toNativeString() {
            return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:180-192";
        }
    
    };
    
    #endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__13_CLOSURE
    #ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__15_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__15 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__15> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 218 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make(numLocalEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__15* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__15>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__15* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__15(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__15(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:218";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__15_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__16_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__16 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__16> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply() {
        
        //#line 220 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make(numLocalEdges, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_long numLocalEdges;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->numLocalEdges);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__16* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__16>();
        buf.record_reference(storage);
        x10_long that_numLocalEdges = buf.read<x10_long>();
        org_scalegraph_graph_GraphGenerator__closure__16* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__16(that_numLocalEdges);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__16(x10_long numLocalEdges) : numLocalEdges(numLocalEdges) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:220";
    }

};

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__16_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__18_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__18 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__18> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long tid131186 = ((x10_long) (idx131188));
            
            //#line 239 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r131187 = i_range131192;
            
            //#line 240 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::random::Random* rnd_131183 = x10aux::nullCheck(rnd)->clone();
            
            //#line 241 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
            rnd_131183->skip(((x10_long) ((((x10_long) ((offset) + (r131187->
                                                                      FMGL(min))))) * (((x10_long) (scale))))));
            
            //#line 242 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> srcMem_131184 = srcMemory->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            
            //#line 243 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> dstMem_131185 = dstMemory->org::scalegraph::util::DistMemoryChunk<x10_long>::__apply();
            
            //#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i86871domain131178 = r131187;
            
            //#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long i86871min131179 = i86871domain131178->FMGL(min);
            
            //#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long i86871max131180 = i86871domain131178->FMGL(max);
            
            //#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
            {
                x10_long i131181;
                for (
                     //#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                     i131181 = i86871min131179; ((i131181) <= (i86871max131180));
                     
                     //#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                     i131181 = ((x10_long) ((i131181) + (((x10_long)1ll)))))
                {
                    
                    //#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                    x10_long i131182 = i131181;
                    
                    //#line 245 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                    x10_long srcVertex131176 = ((x10_long) (((x10_int)0)));
                    
                    //#line 246 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                    x10_long dstVertex131177 = ((x10_long) (((x10_int)0)));
                    
                    //#line 247 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                    x10_int i86853max131173 = ((x10_int) ((scale) - (((x10_int)1))));
                    
                    //#line 247 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
                    {
                        x10_int i131174;
                        for (
                             //#line 247 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                             i131174 = ((x10_int)0); ((i131174) <= (i86853max131173));
                             
                             //#line 247 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                             i131174 = ((x10_int) ((i131174) + (((x10_int)1)))))
                        {
                            
                            //#line 247 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                            x10_int depth131175 = i131174;
                            
                            //#line 248 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                            srcVertex131176 = ((x10_long) ((srcVertex131176) << (0x3f & (((x10_int)1)))));
                            
                            //#line 249 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                            dstVertex131177 = ((x10_long) ((dstVertex131177) << (0x3f & (((x10_int)1)))));
                            
                            //#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                            x10_float x131154 = rnd_131183->nextFloat();
                            
                            //#line 251 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10If_c
                            if (((((x10_double) (x131154))) < ((__extension__ ({
                                    
                                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_int index131155 =
                                      depth131175;
                                    
                                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_double ret131156;
                                    {
                                        
                                        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (!((sumA->FMGL(data)).isValid()))
                                        {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                        //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (((index131155) < (((x10_int)0))) ||
                                            ((((x10_long) (index131155))) >= (sumA->
                                                                                FMGL(data)->
                                                                                FMGL(size))))
                                        {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131155), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret131156 = (sumA->FMGL(data))[index131155];
                                    ret131156;
                                }))
                                ))) {
                             
                            } else 
                            //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10If_c
                            if (((((x10_double) (x131154))) < ((__extension__ ({
                                    
                                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_int index131157 =
                                      depth131175;
                                    
                                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_double ret131158;
                                    {
                                        
                                        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (!((sumAB->FMGL(data)).isValid()))
                                        {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                        //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (((index131157) < (((x10_int)0))) ||
                                            ((((x10_long) (index131157))) >= (sumAB->
                                                                                FMGL(data)->
                                                                                FMGL(size))))
                                        {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131157), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret131158 = (sumAB->FMGL(data))[index131157];
                                    ret131158;
                                }))
                                ))) {
                                
                                //#line 252 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                                dstVertex131177 = ((x10_long) ((dstVertex131177) + (((x10_long) (((x10_int)1))))));
                            } else 
                            //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10If_c
                            if (((((x10_double) (x131154))) < ((__extension__ ({
                                    
                                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_int index131159 =
                                      depth131175;
                                    
                                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                                    x10_double ret131160;
                                    {
                                        
                                        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (!((sumABC->FMGL(data)).isValid()))
                                        {
                                            
                                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                        //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                        if (((index131159) < (((x10_int)0))) ||
                                            ((((x10_long) (index131159))) >= (sumABC->
                                                                                FMGL(data)->
                                                                                FMGL(size))))
                                        {
                                            
                                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                            if (true) {
                                                
                                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                                if (true)
                                                {
                                                    
                                                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131159), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                                }
                                                
                                            }
                                            
                                        }
                                        
                                    }
                                    
                                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret131160 = (sumABC->
                                                   FMGL(data))[index131159];
                                    ret131160;
                                }))
                                ))) {
                                
                                //#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                                srcVertex131176 = ((x10_long) ((srcVertex131176) + (((x10_long) (((x10_int)1))))));
                            } else {
                                
                                //#line 254 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                                dstVertex131177 = ((x10_long) ((dstVertex131177) + (((x10_long) (((x10_int)1))))));
                                
                                //#line 254 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
                                srcVertex131176 = ((x10_long) ((srcVertex131176) + (((x10_long) (((x10_int)1))))));
                            }
                            
                        }
                    }
                    
                    //#line 256 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10If_c
                    if (permute) {
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index131161 = i131182;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value131162 = org::scalegraph::util::scramble(scale, srcVertex131176, ((x10_long) (((x10_ulong)1311768465173141112ull))), ((x10_long) (((x10_ulong)2541551403420444553ull))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret131163;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((srcMem_131184->FMGL(data)).isValid()))
                            {
                                
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
                            if (((index131161) < (((x10_long) (((x10_int)0))))) ||
                                ((index131161) >= (srcMem_131184->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131161), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (srcMem_131184->FMGL(data)).set(index131161, value131162);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret131163 = value131162;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret131163;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index131164 = i131182;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value131165 = org::scalegraph::util::scramble(scale, dstVertex131177, ((x10_long) (((x10_ulong)1311768465173141112ull))), ((x10_long) (((x10_ulong)2541551403420444553ull))));
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret131166;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((dstMem_131185->FMGL(data)).isValid()))
                            {
                                
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
                            if (((index131164) < (((x10_long) (((x10_int)0))))) ||
                                ((index131164) >= (dstMem_131185->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131164), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (dstMem_131185->FMGL(data)).set(index131164, value131165);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret131166 = value131165;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret131166;
                    } else {
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index131167 = i131182;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value131168 = srcVertex131176;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret131169;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((srcMem_131184->FMGL(data)).isValid()))
                            {
                                
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
                            if (((index131167) < (((x10_long) (((x10_int)0))))) ||
                                ((index131167) >= (srcMem_131184->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131167), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (srcMem_131184->FMGL(data)).set(index131167, value131168);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret131169 = value131168;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret131169;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long index131170 = i131182;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long value131171 = dstVertex131177;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                        x10_long ret131172;
                        {
                            
                            //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (!((dstMem_131185->FMGL(data)).isValid()))
                            {
                                
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
                            if (((index131170) < (((x10_long) (((x10_int)0))))) ||
                                ((index131170) >= (dstMem_131185->
                                                     FMGL(data)->
                                                     FMGL(size))))
                            {
                                
                                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                    if (true) {
                                        
                                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131170), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                        //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
                        (dstMem_131185->FMGL(data)).set(index131170, value131171);
                        
                        //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                        ret131172 = value131171;
                        
                        //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
                        ret131172;
                    }
                    
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc1692) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1692)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1692);
                {
                    
                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc1692);
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
    x10_int idx131188;
    x10::lang::LongRange i_range131192;
    org::scalegraph::util::random::Random* rnd;
    x10_long offset;
    x10_int scale;
    org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory;
    org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory;
    org::scalegraph::util::MemoryChunk<x10_double> sumA;
    org::scalegraph::util::MemoryChunk<x10_double> sumAB;
    org::scalegraph::util::MemoryChunk<x10_double> sumABC;
    x10_boolean permute;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->idx131188);
        buf.write(this->i_range131192);
        buf.write(this->rnd);
        buf.write(this->offset);
        buf.write(this->scale);
        buf.write(this->srcMemory);
        buf.write(this->dstMemory);
        buf.write(this->sumA);
        buf.write(this->sumAB);
        buf.write(this->sumABC);
        buf.write(this->permute);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_graph_GraphGenerator__closure__18* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__18>();
        buf.record_reference(storage);
        x10_int that_idx131188 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range131192 = buf.read<x10::lang::LongRange>();
        org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
        x10_long that_offset = buf.read<x10_long>();
        x10_int that_scale = buf.read<x10_int>();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_srcMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::DistMemoryChunk<x10_long> that_dstMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_double> that_sumA = buf.read<org::scalegraph::util::MemoryChunk<x10_double> >();
        org::scalegraph::util::MemoryChunk<x10_double> that_sumAB = buf.read<org::scalegraph::util::MemoryChunk<x10_double> >();
        org::scalegraph::util::MemoryChunk<x10_double> that_sumABC = buf.read<org::scalegraph::util::MemoryChunk<x10_double> >();
        x10_boolean that_permute = buf.read<x10_boolean>();
        org_scalegraph_graph_GraphGenerator__closure__18* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__18(that_idx131188, that_i_range131192, that_rnd, that_offset, that_scale, that_srcMemory, that_dstMemory, that_sumA, that_sumAB, that_sumABC, that_permute);
        return this_;
    }
    
    org_scalegraph_graph_GraphGenerator__closure__18(x10_int idx131188, x10::lang::LongRange i_range131192, org::scalegraph::util::random::Random* rnd, x10_long offset, x10_int scale, org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory, org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory, org::scalegraph::util::MemoryChunk<x10_double> sumA, org::scalegraph::util::MemoryChunk<x10_double> sumAB, org::scalegraph::util::MemoryChunk<x10_double> sumABC, x10_boolean permute) : idx131188(idx131188), i_range131192(i_range131192), rnd(rnd), offset(offset), scale(scale), srcMemory(srcMemory), dstMemory(dstMemory), sumA(sumA), sumAB(sumAB), sumABC(sumABC), permute(permute) { }
    
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

#endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__18_CLOSURE
#ifndef ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__17_CLOSURE
#define ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_graph_GraphGenerator__closure__17 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__17> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 237 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_int role = (__extension__ ({
            
            //#line 237 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<x10_int>* this130940 = x10aux::nullCheck(team)->role();
            
            //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret130941;
            
            //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret130942; __ret130942: {
            {
                
                //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(this130940)->FMGL(rail)) {
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret130941 = (x10aux::nullCheck(this130940)->FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret130942_end_;
                } else {
                    
                    //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (true && !(x10aux::nullCheck(this130940)->FMGL(region)->contains(
                                    ((x10_int)0)))) {
                        
                        //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        x10::array::Array<void>::raiseBoundsError(
                          ((x10_int)0));
                    }
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret130941 = (x10aux::nullCheck(this130940)->FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this130940)->
                                                                                                                    FMGL(layout_min0)))));
                    
                    //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret130942_end_;
                }
                
            }goto __ret130942_end_; __ret130942_end_: ;
            }
            ret130941;
            }))
            ;
            
        
        //#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10_long offset = ((x10_long) ((((x10_long) (role))) * (numLocalEdges)));
        
        //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange range131202 = x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((numLocalEdges) - (((x10_long) (((x10_int)1)))))));
        
        //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long size131198 = ((x10_long) ((((x10_long) ((range131202->
                                                            FMGL(max)) - (range131202->
                                                                            FMGL(min))))) + (((x10_long) (((x10_int)1))))));
        
        //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int nthreads131199 = x10::lang::Runtime::FMGL(NTHREADS__get)();
        
        //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long chunk_size131200 = (__extension__ ({
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
            x10_long a131201 = ((x10_long) ((((x10_long) ((((x10_long) ((size131198) + (((x10_long) (nthreads131199)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads131199)))));
            
            //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
            ;
            ((a131201) < (((x10_long)1ll))) ? (((x10_long)1ll))
              : (a131201);
        }))
        ;
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var167 = x10::lang::Runtime::startFinish();
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable131237 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i74249max131195 = ((x10_int) ((nthreads131199) - (((x10_int)1))));
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i131196;
                                for (
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i131196 = ((x10_int)0);
                                     ((i131196) <= (i74249max131195));
                                     
                                     //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i131196 = ((x10_int) ((i131196) + (((x10_int)1)))))
                                {
                                    
                                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i131197 = i131196;
                                    
                                    //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int idx131188 = i131197;
                                    
                                    //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start131189 =
                                      (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a131190 =
                                          ((x10_long) ((range131202->
                                                          FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b131191 =
                                          ((x10_long) ((range131202->
                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i131197))) * (chunk_size131200))))));
                                        ((a131190) < (b131191))
                                          ? (a131190) : (b131191);
                                    }))
                                    ;
                                    
                                    //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::LongRange i_range131192 =
                                      x10::lang::LongRange::_make(i_start131189, (__extension__ ({
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long a131193 =
                                          range131202->FMGL(max);
                                        
                                        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                        x10_long b131194 =
                                          ((x10_long) ((((x10_long) ((i_start131189) + (chunk_size131200)))) - (((x10_long) (((x10_int)1))))));
                                        ((a131193) < (b131194))
                                          ? (a131193) : (b131194);
                                    }))
                                    );
                                    
                                    //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__18)))org_scalegraph_graph_GraphGenerator__closure__18(idx131188, i_range131192, rnd, offset, scale, srcMemory, dstMemory, sumA, sumAB, sumABC, permute))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc1693) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc1693);
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
                catch (x10::lang::CheckedThrowable* __exc1694) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal131238 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1694);
                        {
                            
                            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable131237 = formal131238;
                        }
                    } else
                    throw;
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable131237)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable131237))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable131237));
                    }
                    
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var167);
                }
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable131237)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable131237)))
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable131237));
                    }
                    
                }
                
            }
        }
        }
        
        // captured environment
        x10::util::Team* team;
        x10_long numLocalEdges;
        org::scalegraph::util::random::Random* rnd;
        x10_int scale;
        org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory;
        org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory;
        org::scalegraph::util::MemoryChunk<x10_double> sumA;
        org::scalegraph::util::MemoryChunk<x10_double> sumAB;
        org::scalegraph::util::MemoryChunk<x10_double> sumABC;
        x10_boolean permute;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->team);
            buf.write(this->numLocalEdges);
            buf.write(this->rnd);
            buf.write(this->scale);
            buf.write(this->srcMemory);
            buf.write(this->dstMemory);
            buf.write(this->sumA);
            buf.write(this->sumAB);
            buf.write(this->sumABC);
            buf.write(this->permute);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_graph_GraphGenerator__closure__17* storage = x10aux::alloc<org_scalegraph_graph_GraphGenerator__closure__17>();
            buf.record_reference(storage);
            x10::util::Team* that_team = buf.read<x10::util::Team*>();
            x10_long that_numLocalEdges = buf.read<x10_long>();
            org::scalegraph::util::random::Random* that_rnd = buf.read<org::scalegraph::util::random::Random*>();
            x10_int that_scale = buf.read<x10_int>();
            org::scalegraph::util::DistMemoryChunk<x10_long> that_srcMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
            org::scalegraph::util::DistMemoryChunk<x10_long> that_dstMemory = buf.read<org::scalegraph::util::DistMemoryChunk<x10_long> >();
            org::scalegraph::util::MemoryChunk<x10_double> that_sumA = buf.read<org::scalegraph::util::MemoryChunk<x10_double> >();
            org::scalegraph::util::MemoryChunk<x10_double> that_sumAB = buf.read<org::scalegraph::util::MemoryChunk<x10_double> >();
            org::scalegraph::util::MemoryChunk<x10_double> that_sumABC = buf.read<org::scalegraph::util::MemoryChunk<x10_double> >();
            x10_boolean that_permute = buf.read<x10_boolean>();
            org_scalegraph_graph_GraphGenerator__closure__17* this_ = new (storage) org_scalegraph_graph_GraphGenerator__closure__17(that_team, that_numLocalEdges, that_rnd, that_scale, that_srcMemory, that_dstMemory, that_sumA, that_sumAB, that_sumABC, that_permute);
            return this_;
        }
        
        org_scalegraph_graph_GraphGenerator__closure__17(x10::util::Team* team, x10_long numLocalEdges, org::scalegraph::util::random::Random* rnd, x10_int scale, org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory, org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory, org::scalegraph::util::MemoryChunk<x10_double> sumA, org::scalegraph::util::MemoryChunk<x10_double> sumAB, org::scalegraph::util::MemoryChunk<x10_double> sumABC, x10_boolean permute) : team(team), numLocalEdges(numLocalEdges), rnd(rnd), scale(scale), srcMemory(srcMemory), dstMemory(dstMemory), sumA(sumA), sumAB(sumAB), sumABC(sumABC), permute(permute) { }
        
        static const x10aux::serialization_id_t _serialization_id;
        
        static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
        
        x10::lang::String* toString() {
            return x10aux::makeStringLit(this->toNativeString());
        }
        
        const char* toNativeString() {
            return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10:236-266";
        }
    
    };
    
    #endif // ORG_SCALEGRAPH_GRAPH_GRAPHGENERATOR__CLOSURE__17_CLOSURE
    
//#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genGrid(
  x10_long rows, x10_long columns) {
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::UnsupportedOperationException::_make()));
}

//#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genStar(
  x10_int scale) {
    
    //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::UnsupportedOperationException::_make()));
}

//#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genCircle(
  x10_int scale, x10_int nodeOutDeg) {
    
    //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::UnsupportedOperationException::_make()));
}

//#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genFull(
  x10_int fanout, x10_int levels, x10_boolean childPointsToParent) {
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::UnsupportedOperationException::_make()));
}

//#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genTree(
  x10_int scale) {
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numVertices = ((x10_long) ((((x10_long)1ll)) << (0x3f & (scale))));
    
    //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = numVertices;
    
    //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_int teamSize = x10aux::nullCheck(team)->size();
    
    //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalEdges = ((x10_long) ((numEdges) / x10aux::zeroCheck(((x10_long) (teamSize)))));
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory =
       org::scalegraph::util::DistMemoryChunk<x10_long>::_alloc();
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10ConstructorCall_c
    (srcMemory)->::org::scalegraph::util::DistMemoryChunk<x10_long>::_constructor(
      x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__1)))org_scalegraph_graph_GraphGenerator__closure__1(numLocalEdges))));
    
    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory =
       org::scalegraph::util::DistMemoryChunk<x10_long>::_alloc();
    
    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10ConstructorCall_c
    (dstMemory)->::org::scalegraph::util::DistMemoryChunk<x10_long>::_constructor(
      x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__2)))org_scalegraph_graph_GraphGenerator__closure__2(numLocalEdges))));
    
    //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__3)))org_scalegraph_graph_GraphGenerator__closure__3(srcMemory, dstMemory, team, teamSize))));
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::EdgeList<x10_long> alloc86745 =
           org::scalegraph::graph::EdgeList<x10_long>::_alloc();
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<x10_long> src131046 =
          srcMemory;
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<x10_long> dst131047 =
          dstMemory;
        
        //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
        alloc86745->FMGL(src) = src131046;
        
        //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
        alloc86745->FMGL(dst) = dst131047;
        alloc86745;
    }))
    ;
    
}

//#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genRandomGraph(
  x10_int scale, x10_int edgefactor, org::scalegraph::util::random::Random* rnd) {
    
    //#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numVertices = ((x10_long) ((((x10_long)1ll)) << (0x3f & (scale))));
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = ((x10_long) ((((x10_long) (edgefactor))) * (numVertices)));
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalEdges = ((x10_long) ((numEdges) / x10aux::zeroCheck(((x10_long) (x10aux::nullCheck(team)->size())))));
    
    //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory =
       org::scalegraph::util::DistMemoryChunk<x10_long>::_alloc();
    
    //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10ConstructorCall_c
    (srcMemory)->::org::scalegraph::util::DistMemoryChunk<x10_long>::_constructor(
      x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__4)))org_scalegraph_graph_GraphGenerator__closure__4(numLocalEdges))));
    
    //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory =
       org::scalegraph::util::DistMemoryChunk<x10_long>::_alloc();
    
    //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10ConstructorCall_c
    (dstMemory)->::org::scalegraph::util::DistMemoryChunk<x10_long>::_constructor(
      x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__5)))org_scalegraph_graph_GraphGenerator__closure__5(numLocalEdges))));
    
    //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__6)))org_scalegraph_graph_GraphGenerator__closure__6(team, numLocalEdges, rnd, srcMemory, dstMemory, numVertices))));
    
    //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(rnd)->skip(((x10_long) ((numEdges) * (((x10_long) (((x10_int)4)))))));
    
    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::EdgeList<x10_long> alloc86746 =
           org::scalegraph::graph::EdgeList<x10_long>::_alloc();
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<x10_long> src131080 =
          srcMemory;
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<x10_long> dst131081 =
          dstMemory;
        
        //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
        alloc86746->FMGL(src) = src131080;
        
        //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
        alloc86746->FMGL(dst) = dst131081;
        alloc86746;
    }))
    ;
    
}

//#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::DistMemoryChunk<x10_double> org::scalegraph::graph::GraphGenerator::genRandomEdgeValue(
  x10::lang::Fun_0_0<x10_long>* getSize, org::scalegraph::util::random::Random* rnd) {
    
    //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* > sizeArray =
      x10::lang::GlobalRef<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* >::_make((__extension__ ({
                                                                                                        
                                                                                                        //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
                                                                                                        x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* alloc86747 =
                                                                                                          
                                                                                                        ((new (memset(x10aux::alloc<x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> > >(), 0, sizeof(x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >))) x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >()))
                                                                                                        ;
                                                                                                        
                                                                                                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": x10.ast.X10LocalDecl_c
                                                                                                        org::scalegraph::util::MemoryChunk<x10_long> x131082 =
                                                                                                          org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (x10aux::nullCheck(team)->size())), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                                                                                                        
                                                                                                        //#line 32 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Cell.x10": Eval of x10.ast.X10FieldAssign_c
                                                                                                        alloc86747->
                                                                                                          FMGL(value) =
                                                                                                          x131082;
                                                                                                        alloc86747;
                                                                                                    }))
                                                                                                    );
    
    //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__8)))org_scalegraph_graph_GraphGenerator__closure__8(team, getSize, sizeArray))));
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory =
       org::scalegraph::util::DistMemoryChunk<x10_double>::_alloc();
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10ConstructorCall_c
    (edgeMemory)->::org::scalegraph::util::DistMemoryChunk<x10_double>::_constructor(
      x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__9)))org_scalegraph_graph_GraphGenerator__closure__9(getSize))));
    
    //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> sizeArray_ =
      (__extension__ ({
        
        //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        x10::lang::Cell<org::scalegraph::util::MemoryChunk<x10_long> >* this130838 =
          (sizeArray)->__apply();
        x10aux::nullCheck(this130838)->FMGL(value);
    }))
    ;
    
    //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10::lang::Place>* placeArray = x10aux::nullCheck(team)->places();
    
    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = ((x10_long) (((x10_int)0)));
    
    //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::array::Point*>* id86807;
        for (
             //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
             id86807 = x10aux::nullCheck(placeArray)->FMGL(region)->iterator();
             x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id86807));
             ) {
            
            //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* id13769 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id86807));
            
            //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_int role = x10aux::nullCheck(id13769)->x10::array::Point::__apply(
                             ((x10_int)0));
            
            //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long numLocalEdges = (__extension__ ({
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index130839 = role;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long ret130840;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((sizeArray_->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index130839) < (((x10_int)0))) ||
                        ((((x10_long) (index130839))) >= (sizeArray_->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index130839), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret130840 = (sizeArray_->FMGL(data))[index130839];
                ret130840;
            }))
            ;
            
            //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_long offset = numEdges;
            
            //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::runAsync((__extension__ ({
                                             
                                             //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                             x10_int i130842 =
                                               role;
                                             
                                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                             x10::lang::Place ret130843;
                                             
                                             //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                             goto __ret130844; __ret130844: {
                                             {
                                                 
                                                 //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                 if (x10aux::nullCheck(placeArray)->
                                                       FMGL(rail))
                                                 {
                                                     
                                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                     ret130843 =
                                                       (x10aux::nullCheck(placeArray)->
                                                          FMGL(raw))->__apply(i130842);
                                                     
                                                     //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                     goto __ret130844_end_;
                                                 } else {
                                                     
                                                     //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                     if (true &&
                                                         !(x10aux::nullCheck(placeArray)->
                                                             FMGL(region)->contains(
                                                             i130842)))
                                                     {
                                                         
                                                         //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                         x10::array::Array<void>::raiseBoundsError(
                                                           i130842);
                                                     }
                                                     
                                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                     ret130843 =
                                                       (x10aux::nullCheck(placeArray)->
                                                          FMGL(raw))->__apply(((x10_int) ((i130842) - (x10aux::nullCheck(placeArray)->
                                                                                                         FMGL(layout_min0)))));
                                                     
                                                     //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                     goto __ret130844_end_;
                                                 }
                                                 
                                             }goto __ret130844_end_; __ret130844_end_: ;
                                             }
                                             ret130843;
                                             }))
                                             , reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__10)))org_scalegraph_graph_GraphGenerator__closure__10(numLocalEdges, rnd, offset, edgeMemory))),
                                             x10aux::class_cast_unchecked<x10::lang::Runtime__Profile*>(X10_NULL));
            
            //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
            numEdges = ((x10_long) ((numEdges) + (numLocalEdges)));
            }
        }
        
    
    //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(rnd)->skip(((x10_long) ((numEdges) * (((x10_long) (((x10_int)2)))))));
    
    //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return edgeMemory;
    }
    

//#line 169 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::DistMemoryChunk<x10_double> org::scalegraph::graph::GraphGenerator::genRandomEdgeValue(
  x10_int scale, x10_int edgefactor, org::scalegraph::util::random::Random* rnd) {
    
    //#line 172 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numVertices = ((x10_long) ((((x10_long)1ll)) << (0x3f & (scale))));
    
    //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = ((x10_long) ((((x10_long) (edgefactor))) * (numVertices)));
    
    //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalEdges = ((x10_long) ((numEdges) / x10aux::zeroCheck(((x10_long) (x10aux::nullCheck(team)->size())))));
    
    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_double> edgeMemory =
       org::scalegraph::util::DistMemoryChunk<x10_double>::_alloc();
    
    //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10ConstructorCall_c
    (edgeMemory)->::org::scalegraph::util::DistMemoryChunk<x10_double>::_constructor(
      x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__12)))org_scalegraph_graph_GraphGenerator__closure__12(numLocalEdges))));
    
    //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__13)))org_scalegraph_graph_GraphGenerator__closure__13(team, numLocalEdges, rnd, edgeMemory))));
    
    //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(rnd)->skip(((x10_long) ((numEdges) * (((x10_long) (((x10_int)2)))))));
    
    //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return edgeMemory;
    
}

//#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genRMAT(
  x10_int scale, x10_int edgefactor, x10_double A, x10_double B,
  x10_double C, org::scalegraph::util::random::Random* rnd) {
    
    //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return org::scalegraph::graph::GraphGenerator::genRMAT(
             scale, edgefactor, A, B, C, rnd, true);
    
}

//#line 206 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::EdgeList<x10_long> org::scalegraph::graph::GraphGenerator::genRMAT(
  x10_int scale, x10_int edgefactor, x10_double A, x10_double B,
  x10_double C, org::scalegraph::util::random::Random* rnd,
  x10_boolean permute) {
    
    //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10If_c
    if (((((((A) + (B))) + (C))) >= (((x10_double) (1.0f)))))
    {
        
        //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("A+B+C >= 1.0: Invalid probabilities"))));
    }
    
    //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10::util::Team* team = x10aux::nullCheck(org::scalegraph::Config::get())->worldTeam();
    
    //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numVertices = ((x10_long) ((((x10_long)1ll)) << (0x3f & (scale))));
    
    //#line 214 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numEdges = ((x10_long) ((((x10_long) (edgefactor))) * (numVertices)));
    
    //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_long numLocalEdges = ((x10_long) ((numEdges) / x10aux::zeroCheck(((x10_long) (x10aux::nullCheck(team)->size())))));
    
    //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> srcMemory =
       org::scalegraph::util::DistMemoryChunk<x10_long>::_alloc();
    
    //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10ConstructorCall_c
    (srcMemory)->::org::scalegraph::util::DistMemoryChunk<x10_long>::_constructor(
      x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__15)))org_scalegraph_graph_GraphGenerator__closure__15(numLocalEdges))));
    
    //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<x10_long> dstMemory =
       org::scalegraph::util::DistMemoryChunk<x10_long>::_alloc();
    
    //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10ConstructorCall_c
    (dstMemory)->::org::scalegraph::util::DistMemoryChunk<x10_long>::_constructor(
      x10aux::nullCheck(team)->placeGroup(), reinterpret_cast<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_graph_GraphGenerator__closure__16)))org_scalegraph_graph_GraphGenerator__closure__16(numLocalEdges))));
    
    //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> sumA =
      org::scalegraph::util::MemoryChunk<x10_double >::_make(((x10_long) (scale)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 223 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> sumAB =
      org::scalegraph::util::MemoryChunk<x10_double >::_make(((x10_long) (scale)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 224 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_double> sumABC =
      org::scalegraph::util::MemoryChunk<x10_double >::_make(((x10_long) (scale)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
    x10_int i86835max131205 = ((x10_int) ((scale) - (((x10_int)1))));
    
    //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": polyglot.ast.For_c
    {
        x10_int i131206;
        for (
             //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
             i131206 = ((x10_int)0); ((i131206) <= (i86835max131205));
             
             //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10LocalAssign_c
             i131206 = ((x10_int) ((i131206) + (((x10_int)1)))))
        {
            
            //#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_int i131207 = i131206;
            
            //#line 226 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_double a131149 = ((A) * (((x10_double) (((x10aux::nullCheck(rnd)->nextFloat()) + (0.5f))))));
            
            //#line 227 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_double b131150 = ((B) * (((x10_double) (((x10aux::nullCheck(rnd)->nextFloat()) + (0.5f))))));
            
            //#line 228 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_double c131151 = ((C) * (((x10_double) (((x10aux::nullCheck(rnd)->nextFloat()) + (0.5f))))));
            
            //#line 229 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_double d131152 = ((((((x10_double) (1.0f))) - (((((A) + (B))) + (C))))) * (((x10_double) (((x10aux::nullCheck(rnd)->nextFloat()) + (0.5f))))));
            
            //#line 230 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
            x10_double abcd131153 = ((((((a131149) + (b131150))) + (c131151))) + (d131152));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index131140 = i131207;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_double value131141 = ((a131149) / (abcd131153));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_double ret131142;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((sumA->FMGL(data)).isValid())) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index131140) < (((x10_int)0))) || ((((x10_long) (index131140))) >= (sumA->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131140), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (sumA->FMGL(data)).set(index131140, value131141);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret131142 = value131141;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret131142;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index131143 = i131207;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_double value131144 = ((((a131149) + (b131150))) / (abcd131153));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_double ret131145;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((sumAB->FMGL(data)).isValid())) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index131143) < (((x10_int)0))) || ((((x10_long) (index131143))) >= (sumAB->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131143), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (sumAB->FMGL(data)).set(index131143, value131144);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret131145 = value131144;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret131145;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index131146 = i131207;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_double value131147 = ((((((a131149) + (b131150))) + (c131151))) / (abcd131153));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_double ret131148;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((sumABC->FMGL(data)).isValid())) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index131146) < (((x10_int)0))) || ((((x10_long) (index131146))) >= (sumABC->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131146), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (sumABC->FMGL(data)).set(index131146, value131147);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret131148 = value131147;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret131148;
        }
    }
    
    //#line 236 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_graph_GraphGenerator__closure__17)))org_scalegraph_graph_GraphGenerator__closure__17(team, numLocalEdges, rnd, scale, srcMemory, dstMemory, sumA, sumAB, sumABC, permute))));
    
    //#line 268 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(rnd)->skip(((x10_long) ((numEdges) * (((x10_long) (scale))))));
    
    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::EdgeList<x10_long> alloc86748 =
           org::scalegraph::graph::EdgeList<x10_long>::_alloc();
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<x10_long> src131203 =
          srcMemory;
        
        //#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::DistMemoryChunk<x10_long> dst131204 =
          dstMemory;
        
        //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
        alloc86748->FMGL(src) = src131203;
        
        //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/EdgeList.x10": Eval of x10.ast.X10FieldAssign_c
        alloc86748->FMGL(dst) = dst131204;
        alloc86748;
    }))
    ;
    
}

//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::GraphGenerator* org::scalegraph::graph::GraphGenerator::org__scalegraph__graph__GraphGenerator____this__org__scalegraph__graph__GraphGenerator(
  ) {
    
    //#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::GraphGenerator::_constructor(
  ) {
    
    //#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/GraphGenerator.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::graph::GraphGenerator* org::scalegraph::graph::GraphGenerator::_make(
  ) {
    org::scalegraph::graph::GraphGenerator* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::GraphGenerator>(), 0, sizeof(org::scalegraph::graph::GraphGenerator))) org::scalegraph::graph::GraphGenerator();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::graph::GraphGenerator::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::graph::GraphGenerator::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::graph::GraphGenerator::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::graph::GraphGenerator::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::GraphGenerator* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::GraphGenerator>(), 0, sizeof(org::scalegraph::graph::GraphGenerator))) org::scalegraph::graph::GraphGenerator();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::graph::GraphGenerator::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::graph::GraphGenerator::rtt;
void org::scalegraph::graph::GraphGenerator::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.graph.GraphGenerator",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__1>org_scalegraph_graph_GraphGenerator__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__1::__apply, &org_scalegraph_graph_GraphGenerator__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_GraphGenerator__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__2>org_scalegraph_graph_GraphGenerator__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__2::__apply, &org_scalegraph_graph_GraphGenerator__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_GraphGenerator__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__3>org_scalegraph_graph_GraphGenerator__closure__3::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__3::__apply, &org_scalegraph_graph_GraphGenerator__closure__3::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__3::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__3::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__3::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__3::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__4>org_scalegraph_graph_GraphGenerator__closure__4::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__4::__apply, &org_scalegraph_graph_GraphGenerator__closure__4::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__4::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_GraphGenerator__closure__4::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__4::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__4::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__5>org_scalegraph_graph_GraphGenerator__closure__5::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__5::__apply, &org_scalegraph_graph_GraphGenerator__closure__5::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__5::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_GraphGenerator__closure__5::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__5::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__5::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__7>org_scalegraph_graph_GraphGenerator__closure__7::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__7::__apply, &org_scalegraph_graph_GraphGenerator__closure__7::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__7::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__7::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__7::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__7::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__6>org_scalegraph_graph_GraphGenerator__closure__6::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__6::__apply, &org_scalegraph_graph_GraphGenerator__closure__6::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__6::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__6::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__6::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__6::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__8>org_scalegraph_graph_GraphGenerator__closure__8::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__8::__apply, &org_scalegraph_graph_GraphGenerator__closure__8::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__8::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__8::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__8::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__8::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >::itable<org_scalegraph_graph_GraphGenerator__closure__9>org_scalegraph_graph_GraphGenerator__closure__9::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__9::__apply, &org_scalegraph_graph_GraphGenerator__closure__9::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__9::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >, &org_scalegraph_graph_GraphGenerator__closure__9::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__9::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__9::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__11>org_scalegraph_graph_GraphGenerator__closure__11::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__11::__apply, &org_scalegraph_graph_GraphGenerator__closure__11::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__11::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__11::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__11::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__11::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__10>org_scalegraph_graph_GraphGenerator__closure__10::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__10::__apply, &org_scalegraph_graph_GraphGenerator__closure__10::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__10::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__10::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__10::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__10::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> >::itable<org_scalegraph_graph_GraphGenerator__closure__12>org_scalegraph_graph_GraphGenerator__closure__12::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__12::__apply, &org_scalegraph_graph_GraphGenerator__closure__12::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__12::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_double> > >, &org_scalegraph_graph_GraphGenerator__closure__12::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__12::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__12::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__14>org_scalegraph_graph_GraphGenerator__closure__14::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__14::__apply, &org_scalegraph_graph_GraphGenerator__closure__14::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__14::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__14::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__14::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__14::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__13>org_scalegraph_graph_GraphGenerator__closure__13::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__13::__apply, &org_scalegraph_graph_GraphGenerator__closure__13::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__13::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__13::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__13::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__13::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__15>org_scalegraph_graph_GraphGenerator__closure__15::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__15::__apply, &org_scalegraph_graph_GraphGenerator__closure__15::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__15::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_GraphGenerator__closure__15::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__15::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__15::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> >::itable<org_scalegraph_graph_GraphGenerator__closure__16>org_scalegraph_graph_GraphGenerator__closure__16::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__16::__apply, &org_scalegraph_graph_GraphGenerator__closure__16::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__16::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_0<org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_graph_GraphGenerator__closure__16::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__16::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__16::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__18>org_scalegraph_graph_GraphGenerator__closure__18::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__18::__apply, &org_scalegraph_graph_GraphGenerator__closure__18::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__18::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__18::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__18::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__18::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_graph_GraphGenerator__closure__17>org_scalegraph_graph_GraphGenerator__closure__17::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_graph_GraphGenerator__closure__17::__apply, &org_scalegraph_graph_GraphGenerator__closure__17::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_graph_GraphGenerator__closure__17::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_graph_GraphGenerator__closure__17::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_graph_GraphGenerator__closure__17::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_graph_GraphGenerator__closure__17::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of GraphGenerator */
/*************************************************/
