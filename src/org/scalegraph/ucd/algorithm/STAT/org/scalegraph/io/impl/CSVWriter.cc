/*************************************************/
/* START of CSVWriter */
#include <org/scalegraph/io/impl/CSVWriter.h>

#include <org/scalegraph/id/ProfilingID__IO.h>
#include <x10/lang/Int.h>
#include <x10/util/Team.h>
#include <org/scalegraph/util/SString.h>
#include <org/scalegraph/io/NamedDistData.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/io/impl/FileNameProvider.h>
#include <x10/array/Array.h>
#include <org/scalegraph/io/impl/CSVAttributeHandler.h>
#include <x10/array/RectRegion1D.h>
#include <x10/array/Region.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/Any.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/VoidFun_0_2.h>
#include <org/scalegraph/util/SStringBuilder.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/io/FileWriter.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/lang/Byte.h>
#include <x10/lang/String.h>
#include <org/scalegraph/id/Type.h>
#include <org/scalegraph/io/impl/CSVWriter__ParallelWriter.h>
#include <x10/lang/CheckedThrowable.h>
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_io_impl_CSVWriter__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>::itable<org_scalegraph_io_impl_CSVWriter__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(org::scalegraph::util::SStringBuilder sb, x10_long idx) {
        
        //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
        x10_long id = ((x10_long) ((((x10_long) ((idx) * (((x10_long) (teamSize)))))) + (((x10_long) (teamRole)))));
        
        //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::StringBuilderAdd_(sb,id);
    }
    
    // captured environment
    x10_int teamSize;
    x10_int teamRole;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->teamSize);
        buf.write(this->teamRole);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_io_impl_CSVWriter__closure__2* storage = x10aux::alloc<org_scalegraph_io_impl_CSVWriter__closure__2>();
        buf.record_reference(storage);
        x10_int that_teamSize = buf.read<x10_int>();
        x10_int that_teamRole = buf.read<x10_int>();
        org_scalegraph_io_impl_CSVWriter__closure__2* this_ = new (storage) org_scalegraph_io_impl_CSVWriter__closure__2(that_teamSize, that_teamRole);
        return this_;
    }
    
    org_scalegraph_io_impl_CSVWriter__closure__2(x10_int teamSize, x10_int teamRole) : teamSize(teamSize), teamRole(teamRole) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10:166-169";
    }

};

#endif // ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_io_impl_CSVWriter__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_io_impl_CSVWriter__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Try_c
        try {
            
            //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            x10_int teamRole = (__extension__ ({
                
                //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10::array::Array<x10_int>* this128189 = x10aux::nullCheck(team)->role();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret128190;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret128191; __ret128191: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this128189)->FMGL(rail)) {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret128190 = (x10aux::nullCheck(this128189)->FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret128191_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this128189)->FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret128190 = (x10aux::nullCheck(this128189)->
                                       FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this128189)->
                                                                                           FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret128191_end_;
                    }
                    
                }goto __ret128191_end_; __ret128191_end_: ;
                }
                ret128190;
                }))
                ;
                
            
            //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            x10_int teamSize = x10aux::nullCheck(team)->size();
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            x10::util::ArrayList<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*>* makeStringClosures =
               ((new (memset(x10aux::alloc<x10::util::ArrayList<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*> >(), 0, sizeof(x10::util::ArrayList<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*>))) x10::util::ArrayList<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*>()))
            ;
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10ConstructorCall_c
            (makeStringClosures)->::x10::util::ArrayList<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*>::_constructor();
            
            //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
            if (putIdFlag) {
                
                //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                makeStringClosures->add(reinterpret_cast<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long> >(sizeof(org_scalegraph_io_impl_CSVWriter__closure__2)))org_scalegraph_io_impl_CSVWriter__closure__2(teamSize, teamRole))));
            }
            
            //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            x10_int i85522max128325 = ((x10_int) ((colNum) - (((x10_int)1))));
            
            //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
            {
                x10_int i128326;
                for (
                     //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                     i128326 = ((x10_int)0); ((i128326) <= (i85522max128325));
                     
                     //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                     i128326 = ((x10_int) ((i128326) + (((x10_int)1)))))
                {
                    
                    //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                    x10_int i128327 = i128326;
                    
                    //#line 172 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                    makeStringClosures->add(x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int i128296 =
                                                  i128327;
                                                
                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::io::impl::CSVAttributeHandler* ret128297;
                                                
                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret128297 =
                                                  (atts->
                                                     FMGL(raw))->__apply(i128296);
                                                ret128297;
                                            }))
                                            )->makeStringClosure(
                                              (__extension__ ({
                                                  
                                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10_int i128298 =
                                                    i128327;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10::lang::Any* ret128299;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                  goto __ret128300; __ret128300: {
                                                  {
                                                      
                                                      //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                      if (x10aux::nullCheck(dmc)->
                                                            FMGL(rail))
                                                      {
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret128299 =
                                                            (x10aux::nullCheck(dmc)->
                                                               FMGL(raw))->__apply(i128298);
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret128300_end_;
                                                      } else
                                                      {
                                                          
                                                          //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                          if (true &&
                                                              !(x10aux::nullCheck(dmc)->
                                                                  FMGL(region)->contains(
                                                                  i128298)))
                                                          {
                                                              
                                                              //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                              x10::array::Array<void>::raiseBoundsError(
                                                                i128298);
                                                          }
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret128299 =
                                                            (x10aux::nullCheck(dmc)->
                                                               FMGL(raw))->__apply(((x10_int) ((i128298) - (x10aux::nullCheck(dmc)->
                                                                                                              FMGL(layout_min0)))));
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret128300_end_;
                                                      }
                                                      
                                                  }goto __ret128300_end_; __ret128300_end_: ;
                                                  }
                                                  ret128299;
                                                  }))
                                                  ));
                    }
                }
                
            
            //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::io::FileWriter* fw = fman->openWrite(
                                                    teamRole);
            
            //#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(teamRole, ((x10_int)0))))
            {
                
                //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder ssb =
                   org::scalegraph::util::SStringBuilder::_alloc();
                
                //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10FieldAssign_c
                ssb->FMGL(buffer) = (__extension__ ({
                    
                    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::GrowableMemory<x10_byte>* alloc128301 =
                       ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
                    ;
                    
                    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
                    (alloc128301)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
                      ((x10_long)0ll));
                    alloc128301;
                }))
                ;
                
                //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                if (putIdFlag) {
                    
                    //#line 181 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::util::StringBuilderAdd_(ssb,x10aux::makeStringLit("ID<Long>,"));
                }
                
                //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_int i85540max128322 = ((x10_int) ((colNum) - (((x10_int)1))));
                
                //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
                {
                    x10_int i128323;
                    for (
                         //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                         i128323 = ((x10_int)0); ((i128323) <= (i85540max128322));
                         
                         //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                         i128323 = ((x10_int) ((i128323) + (((x10_int)1)))))
                    {
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                        x10_int i128324 = i128323;
                        
                        //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                        if ((x10aux::struct_equals((__extension__ ({
                                                       
                                                       //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                                       x10::array::Array<x10_int>* this128302 =
                                                         x10aux::nullCheck(data)->typeId();
                                                       
                                                       //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                       x10_int i128303 =
                                                         i128324;
                                                       
                                                       //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                       x10_int ret128304;
                                                       
                                                       //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                       goto __ret128305; __ret128305: {
                                                       {
                                                           
                                                           //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                           if (x10aux::nullCheck(this128302)->
                                                                 FMGL(rail))
                                                           {
                                                               
                                                               //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                               ret128304 =
                                                                 (x10aux::nullCheck(this128302)->
                                                                    FMGL(raw))->__apply(i128303);
                                                               
                                                               //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                               goto __ret128305_end_;
                                                           }
                                                           else
                                                           {
                                                               
                                                               //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                               if (true &&
                                                                   !(x10aux::nullCheck(this128302)->
                                                                       FMGL(region)->contains(
                                                                       i128303)))
                                                               {
                                                                   
                                                                   //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                   x10::array::Array<void>::raiseBoundsError(
                                                                     i128303);
                                                               }
                                                               
                                                               //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                               ret128304 =
                                                                 (x10aux::nullCheck(this128302)->
                                                                    FMGL(raw))->__apply(((x10_int) ((i128303) - (x10aux::nullCheck(this128302)->
                                                                                                                   FMGL(layout_min0)))));
                                                               
                                                               //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                               goto __ret128305_end_;
                                                           }
                                                           
                                                       }goto __ret128305_end_; __ret128305_end_: ;
                                                       }
                                                       ret128304;
                                                       }))
                                                       , ((x10_int)13))))
                            {
                                
                                //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::StringBuilderAdd_(ssb,x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("\""), (__extension__ ({
                                    
                                    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                    x10::array::Array<x10::lang::String*>* this128306 =
                                      x10aux::nullCheck(data)->name();
                                    
                                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                    x10_int i128307 = i128324;
                                    
                                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::String* ret128308;
                                    
                                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                    goto __ret128309; __ret128309: {
                                    {
                                        
                                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                        if (x10aux::nullCheck(this128306)->
                                              FMGL(rail))
                                        {
                                            
                                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                            ret128308 = (x10aux::nullCheck(this128306)->
                                                           FMGL(raw))->__apply(i128307);
                                            
                                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                            goto __ret128309_end_;
                                        } else {
                                            
                                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                            if (true && !(x10aux::nullCheck(this128306)->
                                                            FMGL(region)->contains(
                                                            i128307)))
                                            {
                                                
                                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                x10::array::Array<void>::raiseBoundsError(
                                                  i128307);
                                            }
                                            
                                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                            ret128308 = (x10aux::nullCheck(this128306)->
                                                           FMGL(raw))->__apply(((x10_int) ((i128307) - (x10aux::nullCheck(this128306)->
                                                                                                          FMGL(layout_min0)))));
                                            
                                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                            goto __ret128309_end_;
                                        }
                                        
                                    }goto __ret128309_end_; __ret128309_end_: ;
                                    }
                                    ret128308;
                                    }))
                                    ), x10aux::makeStringLit("<")), org::scalegraph::id::Type::typeNameStr(
                                                                      (__extension__ ({
                                                                          
                                                                          //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                                                          x10::array::Array<x10_int>* this128310 =
                                                                            x10aux::nullCheck(data)->typeId();
                                                                          
                                                                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                          x10_int i128311 =
                                                                            i128324;
                                                                          
                                                                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                          x10_int ret128312;
                                                                          
                                                                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                          goto __ret128313; __ret128313: {
                                                                          {
                                                                              
                                                                              //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                              if (x10aux::nullCheck(this128310)->
                                                                                    FMGL(rail))
                                                                              {
                                                                                  
                                                                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                  ret128312 =
                                                                                    (x10aux::nullCheck(this128310)->
                                                                                       FMGL(raw))->__apply(i128311);
                                                                                  
                                                                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                  goto __ret128313_end_;
                                                                              }
                                                                              else
                                                                              {
                                                                                  
                                                                                  //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                                  if (true &&
                                                                                      !(x10aux::nullCheck(this128310)->
                                                                                          FMGL(region)->contains(
                                                                                          i128311)))
                                                                                  {
                                                                                      
                                                                                      //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                                      x10::array::Array<void>::raiseBoundsError(
                                                                                        i128311);
                                                                                  }
                                                                                  
                                                                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                  ret128312 =
                                                                                    (x10aux::nullCheck(this128310)->
                                                                                       FMGL(raw))->__apply(((x10_int) ((i128311) - (x10aux::nullCheck(this128310)->
                                                                                                                                      FMGL(layout_min0)))));
                                                                                  
                                                                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                  goto __ret128313_end_;
                                                                              }
                                                                              
                                                                          }goto __ret128313_end_; __ret128313_end_: ;
                                                                          }
                                                                          ret128312;
                                                                          }))
                                                                          )), x10aux::makeStringLit(">\"")), (!x10aux::struct_equals(i128324,
                                                                                                                                     ((x10_int) ((colNum) - (((x10_int)1))))))
                                                                      ? (x10aux::makeStringLit(","))
                                                                      : (x10aux::makeStringLit("\n"))));
                                } else {
                                    
                                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::StringBuilderAdd_(ssb,x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit(""), (__extension__ ({
                                        
                                        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                        x10::array::Array<x10::lang::String*>* this128314 =
                                          x10aux::nullCheck(data)->name();
                                        
                                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10_int i128315 =
                                          i128324;
                                        
                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::String* ret128316;
                                        
                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                        goto __ret128317; __ret128317: {
                                        {
                                            
                                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                            if (x10aux::nullCheck(this128314)->
                                                  FMGL(rail))
                                            {
                                                
                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret128316 =
                                                  (x10aux::nullCheck(this128314)->
                                                     FMGL(raw))->__apply(i128315);
                                                
                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                goto __ret128317_end_;
                                            } else {
                                                
                                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                if (true &&
                                                    !(x10aux::nullCheck(this128314)->
                                                        FMGL(region)->contains(
                                                        i128315)))
                                                {
                                                    
                                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                    x10::array::Array<void>::raiseBoundsError(
                                                      i128315);
                                                }
                                                
                                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret128316 =
                                                  (x10aux::nullCheck(this128314)->
                                                     FMGL(raw))->__apply(((x10_int) ((i128315) - (x10aux::nullCheck(this128314)->
                                                                                                    FMGL(layout_min0)))));
                                                
                                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                goto __ret128317_end_;
                                            }
                                            
                                        }goto __ret128317_end_; __ret128317_end_: ;
                                        }
                                        ret128316;
                                        }))
                                        ), x10aux::makeStringLit("<")), org::scalegraph::id::Type::typeNameStr(
                                                                          (__extension__ ({
                                                                              
                                                                              //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                                                              x10::array::Array<x10_int>* this128318 =
                                                                                x10aux::nullCheck(data)->typeId();
                                                                              
                                                                              //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                              x10_int i128319 =
                                                                                i128324;
                                                                              
                                                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                              x10_int ret128320;
                                                                              
                                                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                              goto __ret128321; __ret128321: {
                                                                              {
                                                                                  
                                                                                  //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                                  if (x10aux::nullCheck(this128318)->
                                                                                        FMGL(rail))
                                                                                  {
                                                                                      
                                                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                      ret128320 =
                                                                                        (x10aux::nullCheck(this128318)->
                                                                                           FMGL(raw))->__apply(i128319);
                                                                                      
                                                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                      goto __ret128321_end_;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                      
                                                                                      //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                                      if (true &&
                                                                                          !(x10aux::nullCheck(this128318)->
                                                                                              FMGL(region)->contains(
                                                                                              i128319)))
                                                                                      {
                                                                                          
                                                                                          //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                                          x10::array::Array<void>::raiseBoundsError(
                                                                                            i128319);
                                                                                      }
                                                                                      
                                                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                      ret128320 =
                                                                                        (x10aux::nullCheck(this128318)->
                                                                                           FMGL(raw))->__apply(((x10_int) ((i128319) - (x10aux::nullCheck(this128318)->
                                                                                                                                          FMGL(layout_min0)))));
                                                                                      
                                                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                      goto __ret128321_end_;
                                                                                  }
                                                                                  
                                                                              }goto __ret128321_end_; __ret128321_end_: ;
                                                                              }
                                                                              ret128320;
                                                                              }))
                                                                              )), x10aux::makeStringLit(">")), (!x10aux::struct_equals(i128324,
                                                                                                                                       ((x10_int) ((colNum) - (((x10_int)1))))))
                                                                          ? (x10aux::makeStringLit(","))
                                                                          : (x10aux::makeStringLit("\n"))));
                                    }
                                    
                                }
                                }
                                
                            
                            //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                            x10aux::nullCheck(fw)->write(
                              (__extension__ ({
                                  
                                  //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                  org::scalegraph::util::SString this128223 =
                                    ssb->org::scalegraph::util::SStringBuilder::result();
                                  this128223->FMGL(content);
                              }))
                              );
                        }
                        
                        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                        org::scalegraph::io::impl::CSVWriter__ParallelWriter* writer =
                           ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVWriter__ParallelWriter>(), 0, sizeof(org::scalegraph::io::impl::CSVWriter__ParallelWriter))) org::scalegraph::io::impl::CSVWriter__ParallelWriter()))
                        ;
                        
                        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10ConstructorCall_c
                        (writer)->::org::scalegraph::io::impl::CSVWriter__ParallelWriter::_constructor(
                          fw, makeStringClosures);
                        
                        //#line 197 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                        writer->write(x10aux::nullCheck((__extension__ ({
                                          
                                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                          ;
                                          
                                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                          org::scalegraph::io::impl::CSVAttributeHandler* ret128225;
                                          
                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                          ret128225 = (atts->
                                                         FMGL(raw))->__apply(((x10_int)0));
                                          ret128225;
                                      }))
                                      )->localSizeOf((__extension__ ({
                                                         
                                                         //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                                         ;
                                                         
                                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                         x10::lang::Any* ret128228;
                                                         
                                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                         goto __ret128229; __ret128229: {
                                                         {
                                                             
                                                             //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                             if (x10aux::nullCheck(dmc)->
                                                                   FMGL(rail))
                                                             {
                                                                 
                                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                 ret128228 =
                                                                   (x10aux::nullCheck(dmc)->
                                                                      FMGL(raw))->__apply(((x10_int)0));
                                                                 
                                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                 goto __ret128229_end_;
                                                             }
                                                             else
                                                             {
                                                                 
                                                                 //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                 if (true &&
                                                                     !(x10aux::nullCheck(dmc)->
                                                                         FMGL(region)->contains(
                                                                         ((x10_int)0))))
                                                                 {
                                                                     
                                                                     //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                     x10::array::Array<void>::raiseBoundsError(
                                                                       ((x10_int)0));
                                                                 }
                                                                 
                                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                 ret128228 =
                                                                   (x10aux::nullCheck(dmc)->
                                                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(dmc)->
                                                                                                                          FMGL(layout_min0)))));
                                                                 
                                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                 goto __ret128229_end_;
                                                             }
                                                             
                                                         }goto __ret128229_end_; __ret128229_end_: ;
                                                         }
                                                         ret128228;
                                                         }))
                                                         ));
                        
                        //#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(fw)->close();
                        }
                        catch (x10::lang::CheckedThrowable* __exc1443) {
                            if (true) {
                                x10::lang::CheckedThrowable* e =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1443);
                                {
                                    
                                    //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                                    (e)->printStackTrace();
                                }
                            } else
                            throw;
                        }
                }
                
                // captured environment
                x10::util::Team* team;
                x10_boolean putIdFlag;
                x10_int colNum;
                x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* atts;
                x10::array::Array<x10::lang::Any*>* dmc;
                org::scalegraph::io::impl::FileNameProvider* fman;
                org::scalegraph::io::NamedDistData* data;
                
                x10aux::serialization_id_t _get_serialization_id() {
                    return _serialization_id;
                }
                
                void _serialize_body(x10aux::serialization_buffer &buf) {
                    buf.write(this->team);
                    buf.write(this->putIdFlag);
                    buf.write(this->colNum);
                    buf.write(this->atts);
                    buf.write(this->dmc);
                    buf.write(this->fman);
                    buf.write(this->data);
                }
                
                template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
                    org_scalegraph_io_impl_CSVWriter__closure__1* storage = x10aux::alloc<org_scalegraph_io_impl_CSVWriter__closure__1>();
                    buf.record_reference(storage);
                    x10::util::Team* that_team = buf.read<x10::util::Team*>();
                    x10_boolean that_putIdFlag = buf.read<x10_boolean>();
                    x10_int that_colNum = buf.read<x10_int>();
                    x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* that_atts = buf.read<x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>*>();
                    x10::array::Array<x10::lang::Any*>* that_dmc = buf.read<x10::array::Array<x10::lang::Any*>*>();
                    org::scalegraph::io::impl::FileNameProvider* that_fman = buf.read<org::scalegraph::io::impl::FileNameProvider*>();
                    org::scalegraph::io::NamedDistData* that_data = buf.read<org::scalegraph::io::NamedDistData*>();
                    org_scalegraph_io_impl_CSVWriter__closure__1* this_ = new (storage) org_scalegraph_io_impl_CSVWriter__closure__1(that_team, that_putIdFlag, that_colNum, that_atts, that_dmc, that_fman, that_data);
                    return this_;
                }
                
                org_scalegraph_io_impl_CSVWriter__closure__1(x10::util::Team* team, x10_boolean putIdFlag, x10_int colNum, x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* atts, x10::array::Array<x10::lang::Any*>* dmc, org::scalegraph::io::impl::FileNameProvider* fman, org::scalegraph::io::NamedDistData* data) : team(team), putIdFlag(putIdFlag), colNum(colNum), atts(atts), dmc(dmc), fman(fman), data(data) { }
                
                static const x10aux::serialization_id_t _serialization_id;
                
                static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
                virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
                
                x10::lang::String* toString() {
                    return x10aux::makeStringLit(this->toNativeString());
                }
                
                const char* toNativeString() {
                    return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10:155-201";
                }
                
                };
                
                #endif // ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__CLOSURE__1_CLOSURE
                 /* private static type IO = org.scalegraph.id.ProfilingID$IO; */ 

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::io::impl::CSVWriter::FMGL(CHUNK_SIZE);
void org::scalegraph::io::impl::CSVWriter::FMGL(CHUNK_SIZE__do_init)() {
    FMGL(CHUNK_SIZE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::io::impl::CSVWriter.CHUNK_SIZE");
    x10_int __var1441__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)131072));
    FMGL(CHUNK_SIZE) = __var1441__;
    FMGL(CHUNK_SIZE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::io::impl::CSVWriter::FMGL(CHUNK_SIZE__init)() {
    x10aux::StaticInitController::initField(&FMGL(CHUNK_SIZE__status), &FMGL(CHUNK_SIZE__do_init), &FMGL(CHUNK_SIZE__exception), "org::scalegraph::io::impl::CSVWriter.CHUNK_SIZE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::io::impl::CSVWriter::FMGL(CHUNK_SIZE__status);
x10::lang::CheckedThrowable* org::scalegraph::io::impl::CSVWriter::FMGL(CHUNK_SIZE__exception);

//#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::CSVWriter::write(x10::util::Team* team, org::scalegraph::util::SString path,
                                                 org::scalegraph::io::NamedDistData* data,
                                                 x10_boolean putIdFlag) {
    
    //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::FileNameProvider* fman = (__extension__ ({
        
        //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString path128168 = path;
        
        //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": polyglot.ast.Empty_c
        ;
        org::scalegraph::io::impl::FileNameProvider::create(
          path128168, false, true);
    }))
    ;
    
    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
    fman->mkdir();
    
    //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_int>* typeId = x10aux::nullCheck(data)->typeId();
    
    //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
    x10_int colNum = x10aux::nullCheck(typeId)->FMGL(size);
    
    //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>* atts =
       ((new (memset(x10aux::alloc<x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*> >(), 0, sizeof(x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>))) x10::array::Array<org::scalegraph::io::impl::CSVAttributeHandler*>()))
    ;
    
    //#line 313 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int size128328 = colNum;
    
    //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::array::RectRegion1D* myReg128294 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
    ;
    
    //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg128294)->::x10::array::RectRegion1D::_constructor(
      ((x10_int) ((size128328) - (((x10_int)1)))));
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg128294);
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(rank) = ((x10_int)1);
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(rect) = true;
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(zeroBased) = true;
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(rail) = true;
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(size) = size128328;
    
    //#line 318 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(layout_min0) = atts->FMGL(layout_stride1) =
      atts->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 319 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
    
    //#line 320 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::util::IndexedMemoryChunk<org::scalegraph::io::impl::CSVAttributeHandler* > r128295 =
      x10::util::IndexedMemoryChunk<void>::allocate<org::scalegraph::io::impl::CSVAttributeHandler* >(size128328, 8, false, false);
    
    //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int i69157max128291 = ((x10_int) ((size128328) - (((x10_int)1))));
    
    //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
    {
        x10_int i128292;
        for (
             //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
             i128292 = ((x10_int)0); ((i128292) <= (i69157max128291));
             
             //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
             i128292 = ((x10_int) ((i128292) + (((x10_int)1)))))
        {
            
            //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i128293 = i128292;
            
            //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (r128295)->__set(i128293, (__extension__ ({
                
                //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_int i128287 = i128293;
                org::scalegraph::io::impl::CSVAttributeHandler::create(
                  (__extension__ ({
                      
                      //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10_int i128288 = i128287;
                      
                      //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10_int ret128289;
                      
                      //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                      goto __ret128290; __ret128290: {
                      {
                          
                          //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                          if (x10aux::nullCheck(typeId)->
                                FMGL(rail)) {
                              
                              //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                              ret128289 = (x10aux::nullCheck(typeId)->
                                             FMGL(raw))->__apply(i128288);
                              
                              //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                              goto __ret128290_end_;
                          } else {
                              
                              //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                              if (true && !(x10aux::nullCheck(typeId)->
                                              FMGL(region)->contains(
                                              i128288))) {
                                  
                                  //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                  x10::array::Array<void>::raiseBoundsError(
                                    i128288);
                              }
                              
                              //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                              ret128289 = (x10aux::nullCheck(typeId)->
                                             FMGL(raw))->__apply(((x10_int) ((i128288) - (x10aux::nullCheck(typeId)->
                                                                                            FMGL(layout_min0)))));
                              
                              //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                              goto __ret128290_end_;
                          }
                          
                      }goto __ret128290_end_; __ret128290_end_: ;
                      }
                      ret128289;
                      }))
                      , false);
                }))
                );
            }
        }
        
    
    //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(raw) = r128295;
    
    //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10::lang::Any*>* dmc = x10aux::nullCheck(data)->data();
    
    //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(x10aux::nullCheck(team)->placeGroup())->broadcastFlat(
      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_io_impl_CSVWriter__closure__1)))org_scalegraph_io_impl_CSVWriter__closure__1(team, putIdFlag, colNum, atts, dmc, fman, data))));
    }
    

//#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::CSVWriter* org::scalegraph::io::impl::CSVWriter::org__scalegraph__io__impl__CSVWriter____this__org__scalegraph__io__impl__CSVWriter(
  ) {
    
    //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::impl::CSVWriter::_constructor() {
    
    //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::io::impl::CSVWriter* org::scalegraph::io::impl::CSVWriter::_make(
  ) {
    org::scalegraph::io::impl::CSVWriter* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVWriter>(), 0, sizeof(org::scalegraph::io::impl::CSVWriter))) org::scalegraph::io::impl::CSVWriter();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::io::impl::CSVWriter::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::CSVWriter::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::impl::CSVWriter::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::io::impl::CSVWriter::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::CSVWriter* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVWriter>(), 0, sizeof(org::scalegraph::io::impl::CSVWriter))) org::scalegraph::io::impl::CSVWriter();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::impl::CSVWriter::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::io::impl::CSVWriter::rtt;
void org::scalegraph::io::impl::CSVWriter::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.io.impl.CSVWriter",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>::itable<org_scalegraph_io_impl_CSVWriter__closure__2>org_scalegraph_io_impl_CSVWriter__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVWriter__closure__2::__apply, &org_scalegraph_io_impl_CSVWriter__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_io_impl_CSVWriter__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long> >, &org_scalegraph_io_impl_CSVWriter__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_io_impl_CSVWriter__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVWriter__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_io_impl_CSVWriter__closure__1>org_scalegraph_io_impl_CSVWriter__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVWriter__closure__1::__apply, &org_scalegraph_io_impl_CSVWriter__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_io_impl_CSVWriter__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_io_impl_CSVWriter__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_io_impl_CSVWriter__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVWriter__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of CSVWriter */
/*************************************************/
/*************************************************/
/* START of CSVWriter$ParallelWriter */
#include <org/scalegraph/io/impl/CSVWriter__ParallelWriter.h>

#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/util/SStringBuilder.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/io/FileWriter.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/util/concurrent/Monitor.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Fun_0_1.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Error.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <org/scalegraph/util/SString.h>
#include <x10/util/Ordered.h>
#include <x10/lang/Zero.h>
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder>::itable<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::SStringBuilder __apply(x10_long i) {
        
        //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SStringBuilder alloc85445 =  org::scalegraph::util::SStringBuilder::_alloc();
            
            //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10FieldAssign_c
            alloc85445->FMGL(buffer) = (__extension__ ({
                
                //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::GrowableMemory<x10_byte>* alloc128230 =
                   ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
                ;
                
                //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
                (alloc128230)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
                  ((x10_long)0ll));
                alloc128230;
            }))
            ;
            alloc85445;
        }))
        ;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3* storage = x10aux::alloc<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3>();
        buf.record_reference(storage);
        org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3* this_ = new (storage) org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3();
        return this_;
    }
    
    org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10:54";
    }

};

#endif // ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
class org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4 : public x10::lang::Closure {
    public:
    
    static x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder>::itable<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::SStringBuilder __apply(x10_long i) {
        
        //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SStringBuilder alloc85446 =  org::scalegraph::util::SStringBuilder::_alloc();
            
            //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10FieldAssign_c
            alloc85446->FMGL(buffer) = (__extension__ ({
                
                //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::GrowableMemory<x10_byte>* alloc128231 =
                   ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
                ;
                
                //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
                (alloc128231)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
                  ((x10_long)0ll));
                alloc128231;
            }))
            ;
            alloc85446;
        }))
        ;
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4* storage = x10aux::alloc<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4>();
        buf.record_reference(storage);
        org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4* this_ = new (storage) org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4();
        return this_;
    }
    
    org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10:55";
    }

};

#endif // ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            x10_long tid128249 = ((x10_long) (idx128257));
            
            //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r128250 = i_range128261;
            
            //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Labeled_c
            goto __ret128251; __ret128251: {
            {
                
                //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder buf128252 = (__extension__ ({
                    
                    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this128253 =
                      saved_this->FMGL(backBuffer);
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index128254 = tid128249;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::SStringBuilder ret128255;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this128253->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                }
                                
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index128254) < (((x10_long) (((x10_int)0))))) ||
                            ((index128254) >= (this128253->FMGL(data)->
                                                 FMGL(size)))) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index128254), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret128255 = (this128253->FMGL(data))[index128254];
                    ret128255;
                }))
                ;
                
                //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_int numColumns128256 = x10aux::nullCheck(saved_this->
                                                               FMGL(strClousure))->size();
                
                //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(numColumns128256, ((x10_int)0))))
                {
                    
                    //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Branch_c
                    goto __ret128251_end_;
                }
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i85484domain128244 = r128250;
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_long i85484min128245 = i85484domain128244->FMGL(min);
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_long i85484max128246 = i85484domain128244->FMGL(max);
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
                {
                    x10_long i128247;
                    for (
                         //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                         i128247 = i85484min128245; ((i128247) <= (i85484max128246));
                         
                         //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                         i128247 = ((x10_long) ((i128247) + (((x10_long)1ll)))))
                    {
                        
                        //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                        x10_long i128248 = i128247;
                        
                        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                        x10_int i85466max128241 = ((x10_int) ((numColumns128256) - (((x10_int)2))));
                        
                        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
                        {
                            x10_int i128242;
                            for (
                                 //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                 i128242 = ((x10_int)0); ((i128242) <= (i85466max128241));
                                 
                                 //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                                 i128242 = ((x10_int) ((i128242) + (((x10_int)1)))))
                            {
                                
                                //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                x10_int c128243 = i128242;
                                
                                //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.ClosureCall_c
                                x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>::__apply(x10aux::nullCheck(x10aux::nullCheck(saved_this->
                                                                                                                                                       FMGL(strClousure))->__apply(
                                                                                                                                     c128243)), 
                                  buf128252, i128248);
                                
                                //#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::StringBuilderAdd_(buf128252,((x10_char)','));
                            }
                        }
                        
                        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.ClosureCall_c
                        x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>::__apply(x10aux::nullCheck(x10aux::nullCheck(saved_this->
                                                                                                                                               FMGL(strClousure))->__apply(
                                                                                                                             ((x10_int) ((numColumns128256) - (((x10_int)1)))))), 
                          buf128252, i128248);
                        
                        //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::util::StringBuilderAdd_(buf128252,((x10_char)'\n'));
                    }
                }
                
            }goto __ret128251_end_; __ret128251_end_: ;
            }
            }
            catch (x10::lang::CheckedThrowable* __exc1448) {
                if (x10aux::instanceof<x10::lang::Error*>(__exc1448)) {
                    x10::lang::Error* __lowerer__var__0__ =
                      static_cast<x10::lang::Error*>(__exc1448);
                    {
                        
                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                    }
                } else
                if (true) {
                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1448);
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
        x10_int idx128257;
        x10::lang::LongRange i_range128261;
        org::scalegraph::io::impl::CSVWriter__ParallelWriter* saved_this;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->idx128257);
            buf.write(this->i_range128261);
            buf.write(this->saved_this);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5* storage = x10aux::alloc<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5>();
            buf.record_reference(storage);
            x10_int that_idx128257 = buf.read<x10_int>();
            x10::lang::LongRange that_i_range128261 = buf.read<x10::lang::LongRange>();
            org::scalegraph::io::impl::CSVWriter__ParallelWriter* that_saved_this = buf.read<org::scalegraph::io::impl::CSVWriter__ParallelWriter*>();
            org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5* this_ = new (storage) org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5(that_idx128257, that_i_range128261, that_saved_this);
            return this_;
        }
        
        org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5(x10_int idx128257, x10::lang::LongRange i_range128261, org::scalegraph::io::impl::CSVWriter__ParallelWriter* saved_this) : idx128257(idx128257), i_range128261(i_range128261), saved_this(saved_this) { }
        
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
    
    #endif // ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER__CLOSURE__5_CLOSURE
    #ifndef ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Try_c
        try {
            
            //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
            saved_this->subtask();
        }
        catch (x10::lang::CheckedThrowable* __exc1454) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1454)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1454);
                {
                    
                    //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ = static_cast<x10::lang::CheckedThrowable*>(__exc1454);
                {
                    
                    //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::io::impl::CSVWriter__ParallelWriter* saved_this;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6* storage = x10aux::alloc<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6>();
        buf.record_reference(storage);
        org::scalegraph::io::impl::CSVWriter__ParallelWriter* that_saved_this = buf.read<org::scalegraph::io::impl::CSVWriter__ParallelWriter*>();
        org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6* this_ = new (storage) org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6(that_saved_this);
        return this_;
    }
    
    org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6(org::scalegraph::io::impl::CSVWriter__ParallelWriter* saved_this) : saved_this(saved_this) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10:130";
    }

};

#endif // ORG_SCALEGRAPH_IO_IMPL_CSVWRITER__PARALLELWRITER__CLOSURE__6_CLOSURE

//#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10FieldDecl_c

//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10FieldDecl_c

//#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10FieldDecl_c

//#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10FieldDecl_c

//#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10FieldDecl_c

//#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10FieldDecl_c

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::impl::CSVWriter__ParallelWriter::_constructor(org::scalegraph::io::FileWriter* fw,
                                                                        x10::util::ArrayList<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*>* strClousure) {
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.AssignPropertyCall_c
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::io::impl::CSVWriter__ParallelWriter::__fieldInitializers84968();
    
    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(frontBuffer) = org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder >::_make(((x10_long) (nthreads)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder> >(sizeof(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3)))org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3())), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(backBuffer) = org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder >::_make(((x10_long) (nthreads)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder> >(sizeof(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4)))org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4())), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
    x10_int i85448max128238 = ((x10_int) ((nthreads) - (((x10_int)1))));
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
    {
        x10_int i128239;
        for (
             //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
             i128239 = ((x10_int)0); ((i128239) <= (i85448max128238));
             
             //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
             i128239 = ((x10_int) ((i128239) + (((x10_int)1))))) {
            
            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            x10_int i128240 = i128239;
            
            //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderAdd_((__extension__ ({
                
                //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this128232 =
                  this->FMGL(frontBuffer);
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index128233 = i128240;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder ret128234;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this128232->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index128233) < (((x10_int)0))) ||
                        ((((x10_long) (index128233))) >= (this128232->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index128233), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret128234 = (this128232->FMGL(data))[index128233];
                ret128234;
            }))
            ,x10aux::makeStringLit(""));
            
            //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderAdd_((__extension__ ({
                
                //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this128235 =
                  this->FMGL(backBuffer);
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index128236 = i128240;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder ret128237;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this128235->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index128236) < (((x10_int)0))) ||
                        ((((x10_long) (index128236))) >= (this128235->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index128236), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret128237 = (this128235->FMGL(data))[index128236];
                ret128237;
            }))
            ,x10aux::makeStringLit(""));
        }
    }
    
    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(fw) = fw;
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(strClousure) = strClousure;
}
org::scalegraph::io::impl::CSVWriter__ParallelWriter* org::scalegraph::io::impl::CSVWriter__ParallelWriter::_make(
  org::scalegraph::io::FileWriter* fw, x10::util::ArrayList<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*>* strClousure)
{
    org::scalegraph::io::impl::CSVWriter__ParallelWriter* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVWriter__ParallelWriter>(), 0, sizeof(org::scalegraph::io::impl::CSVWriter__ParallelWriter))) org::scalegraph::io::impl::CSVWriter__ParallelWriter();
    this_->_constructor(fw, strClousure);
    return this_;
}



//#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::CSVWriter__ParallelWriter::cycleBuffers(
  x10_int numTasksToLaunch) {
    
    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
    this->FMGL(monitor)->lock();
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10While_c
    while (((this->FMGL(numLauchTasks)) > (((x10_int)0))))
    {
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
        this->FMGL(monitor)->await();
    }
    
    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numLauchTasks) = numTasksToLaunch;
    
    //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
    this->FMGL(monitor)->unlock();
    
    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> tmp =
      this->FMGL(backBuffer);
    
    //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(backBuffer) = this->FMGL(frontBuffer);
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(frontBuffer) = tmp;
}

//#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::CSVWriter__ParallelWriter::notifySubtaskCompletion(
  ) {
    
    //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
    this->FMGL(monitor)->lock();
    
    //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals((__extension__ ({
                                   
                                   //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                   org::scalegraph::io::impl::CSVWriter__ParallelWriter* x128098 =
                                     this;
                                   
                                   //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Empty_c
                                   ;
                                   x10aux::nullCheck(x128098)->
                                     FMGL(numLauchTasks) =
                                     ((x10_int) ((x10aux::nullCheck(x128098)->
                                                    FMGL(numLauchTasks)) - (((x10_int)1))));
                               }))
                               , ((x10_int)0)))) {
        
        //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
        this->FMGL(monitor)->release();
    } else {
        
        //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
        this->FMGL(monitor)->unlock();
    }
    
}

//#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::CSVWriter__ParallelWriter::makeString(
  x10::lang::LongRange range) {
    
    //#line 870 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange range128271 = range;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size128267 = ((x10_long) ((((x10_long) ((range128271->
                                                        FMGL(max)) - (range128271->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads128268 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size128269 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a128270 = ((x10_long) ((((x10_long) ((((x10_long) ((size128267) + (((x10_long) (nthreads128268)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads128268)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a128270) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a128270);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var142 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable128337 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i74249max128264 = ((x10_int) ((nthreads128268) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i128265;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i128265 = ((x10_int)0); ((i128265) <= (i74249max128264));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i128265 = ((x10_int) ((i128265) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i128266 = i128265;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx128257 = i128266;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start128258 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a128259 = ((x10_long) ((range128271->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b128260 = ((x10_long) ((range128271->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i128266))) * (chunk_size128269))))));
                                    ((a128259) < (b128260))
                                      ? (a128259) : (b128260);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range128261 =
                                  x10::lang::LongRange::_make(i_start128258, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a128262 = range128271->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b128263 = ((x10_long) ((((x10_long) ((i_start128258) + (chunk_size128269)))) - (((x10_long) (((x10_int)1))))));
                                    ((a128262) < (b128263))
                                      ? (a128262) : (b128263);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5)))org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5(idx128257, i_range128261, this))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1449) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1449);
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
            catch (x10::lang::CheckedThrowable* __exc1450) {
                if (true) {
                    x10::lang::CheckedThrowable* formal128338 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1450);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable128337 = formal128338;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable128337)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable128337))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable128337));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var142);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable128337)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable128337)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable128337));
                }
                
            }
            
        }
    }
}

//#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::CSVWriter__ParallelWriter::subtask(
  ) {
    
    //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Try_c
    try {
        
        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i85503domain128282 = (__extension__ ({
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this128283 =
              this->FMGL(frontBuffer);
            x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this128283->
                                                                         FMGL(data)->
                                                                         FMGL(size)) - (((x10_long)1ll)))));
        }))
        ;
        
        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
        x10_long i85503max128284 = i85503domain128282->FMGL(max);
        
        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
        {
            x10_long i128285;
            for (
                 //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                 i128285 = ((x10_long)0ll); ((i128285) <= (i85503max128284));
                 
                 //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                 i128285 = ((x10_long) ((i128285) + (((x10_long)1ll)))))
            {
                
                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_long tid128286 = i128285;
                
                //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> bytes128277 =
                  (__extension__ ({
                    
                    //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::SString this128278 =
                      (__extension__ ({
                          
                          //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this128279 =
                            this->FMGL(frontBuffer);
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index128280 = tid128286;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::util::SStringBuilder ret128281;
                          {
                              
                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((this128279->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                  }
                                  
                              }
                              
                              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((index128280) < (((x10_long) (((x10_int)0))))) ||
                                  ((index128280) >= (this128279->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index128280), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret128281 = (this128279->FMGL(data))[index128280];
                          ret128281;
                      }))
                      ->org::scalegraph::util::SStringBuilder::result();
                    this128278->FMGL(content);
                }))
                ;
                
                //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(fw))->write(
                  bytes128277);
                
                //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder this128273 =
                  (__extension__ ({
                    
                    //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this128274 =
                      this->FMGL(frontBuffer);
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index128275 = tid128286;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::SStringBuilder ret128276;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this128274->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index128275) < (((x10_long) (((x10_int)0))))) ||
                            ((index128275) >= (this128274->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index128275), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret128276 = (this128274->FMGL(data))[index128275];
                    ret128276;
                }))
                ;
                
                //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::GrowableMemory<x10_byte>* this128272 =
                  this128273->FMGL(buffer);
                
                //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(this128272)->FMGL(size) =
                  ((x10_long) (((x10_int)0)));
            }
        }
        
        //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
        this->notifySubtaskCompletion();
    }
    catch (x10::lang::CheckedThrowable* __exc1452) {
        if (true) {
            x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc1452);
            {
                
                //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                (e)->printStackTrace();
            }
        } else
        throw;
    }
}

//#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::CSVWriter__ParallelWriter::write(
  x10_long numLines) {
    
    //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    {
        
        //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var143 = x10::lang::Runtime::startFinish();
        {
            
            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable128340 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Try_c
            try {
                
                //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
                        {
                            x10_long start;
                            for (
                                 //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                 start = ((x10_long) (((x10_int)0)));
                                 ((start) < (numLines)); 
                                                         //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                                                         start =
                                                           ((x10_long) ((start) + (((x10_long) (((x10_int) ((((x10_int)131072)) * (nthreads)))))))))
                            {
                                
                                //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                x10_long end = ((x10_long) (((__extension__ ({
                                    
                                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
                                    x10_long a128166 = ((x10_long) ((start) + (((x10_long) (((x10_int) ((((x10_int)131072)) * (nthreads))))))));
                                    
                                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
                                    x10_long b128167 = numLines;
                                    x10::util::Ordered<x10_long >::__lt(a128166, b128167)
                                      ? (a128166) : (b128167);
                                }))
                                ) - (((x10_long) (((x10_int)1))))));
                                
                                //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                                this->makeString(x10::lang::LongRange::_make(start, end));
                                
                                //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                                this->cycleBuffers(((x10_int)1));
                                
                                //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6)))org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6(this))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1455) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1455);
                        {
                            
                            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc1456) {
                if (true) {
                    x10::lang::CheckedThrowable* formal128341 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1456);
                    {
                        
                        //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable128340 = formal128341;
                    }
                } else
                throw;
            }
            
            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable128340)))
            {
                
                //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable128340))
                {
                    
                    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable128340));
                }
                
            }
            
            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var143);
            }
            
            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable128340)))
            {
                
                //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable128340)))
                {
                    
                    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable128340));
                }
                
            }
            
        }
    }
}

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::CSVWriter__ParallelWriter* org::scalegraph::io::impl::CSVWriter__ParallelWriter::org__scalegraph__io__impl__CSVWriter__ParallelWriter____this__org__scalegraph__io__impl__CSVWriter__ParallelWriter(
  ) {
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::CSVWriter__ParallelWriter::__fieldInitializers84968(
  ) {
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(frontBuffer) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> >();
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(backBuffer) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> >();
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(monitor) = x10::util::concurrent::Monitor::_make();
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(numLauchTasks) = ((x10_int)0);
}
const x10aux::serialization_id_t org::scalegraph::io::impl::CSVWriter__ParallelWriter::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::CSVWriter__ParallelWriter::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::impl::CSVWriter__ParallelWriter::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(frontBuffer));
    buf.write(this->FMGL(backBuffer));
    buf.write(this->FMGL(fw));
    buf.write(this->FMGL(strClousure));
    buf.write(this->FMGL(monitor));
    buf.write(this->FMGL(numLauchTasks));
    
}

x10::lang::Reference* org::scalegraph::io::impl::CSVWriter__ParallelWriter::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::CSVWriter__ParallelWriter* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVWriter__ParallelWriter>(), 0, sizeof(org::scalegraph::io::impl::CSVWriter__ParallelWriter))) org::scalegraph::io::impl::CSVWriter__ParallelWriter();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::impl::CSVWriter__ParallelWriter::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(frontBuffer) = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> >();
    FMGL(backBuffer) = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> >();
    FMGL(fw) = buf.read<org::scalegraph::io::FileWriter*>();
    FMGL(strClousure) = buf.read<x10::util::ArrayList<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*>*>();
    FMGL(monitor) = buf.read<x10::util::concurrent::Monitor*>();
    FMGL(numLauchTasks) = buf.read<x10_int>();
}

x10aux::RuntimeType org::scalegraph::io::impl::CSVWriter__ParallelWriter::rtt;
void org::scalegraph::io::impl::CSVWriter__ParallelWriter::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.io.impl.CSVWriter.ParallelWriter",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder>::itable<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3>org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3::__apply, &org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder> >, &org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder>::itable<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4>org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4::__apply, &org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder> >, &org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5>org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5::__apply, &org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6>org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6::__apply, &org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__6::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

/* END of CSVWriter$ParallelWriter */
/*************************************************/
