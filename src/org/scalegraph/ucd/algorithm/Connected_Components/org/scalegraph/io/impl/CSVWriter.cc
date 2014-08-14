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
                x10::array::Array<x10_int>* this136119 = x10aux::nullCheck(team)->role();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret136120;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret136121; __ret136121: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this136119)->FMGL(rail)) {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret136120 = (x10aux::nullCheck(this136119)->FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret136121_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this136119)->FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret136120 = (x10aux::nullCheck(this136119)->
                                       FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this136119)->
                                                                                           FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret136121_end_;
                    }
                    
                }goto __ret136121_end_; __ret136121_end_: ;
                }
                ret136120;
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
            x10_int i127876max136255 = ((x10_int) ((colNum) - (((x10_int)1))));
            
            //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
            {
                x10_int i136256;
                for (
                     //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                     i136256 = ((x10_int)0); ((i136256) <= (i127876max136255));
                     
                     //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                     i136256 = ((x10_int) ((i136256) + (((x10_int)1)))))
                {
                    
                    //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                    x10_int i136257 = i136256;
                    
                    //#line 172 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                    makeStringClosures->add(x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int i136226 =
                                                  i136257;
                                                
                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::io::impl::CSVAttributeHandler* ret136227;
                                                
                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret136227 =
                                                  (atts->
                                                     FMGL(raw))->__apply(i136226);
                                                ret136227;
                                            }))
                                            )->makeStringClosure(
                                              (__extension__ ({
                                                  
                                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10_int i136228 =
                                                    i136257;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10::lang::Any* ret136229;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                  goto __ret136230; __ret136230: {
                                                  {
                                                      
                                                      //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                      if (x10aux::nullCheck(dmc)->
                                                            FMGL(rail))
                                                      {
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret136229 =
                                                            (x10aux::nullCheck(dmc)->
                                                               FMGL(raw))->__apply(i136228);
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret136230_end_;
                                                      } else
                                                      {
                                                          
                                                          //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                          if (true &&
                                                              !(x10aux::nullCheck(dmc)->
                                                                  FMGL(region)->contains(
                                                                  i136228)))
                                                          {
                                                              
                                                              //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                              x10::array::Array<void>::raiseBoundsError(
                                                                i136228);
                                                          }
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret136229 =
                                                            (x10aux::nullCheck(dmc)->
                                                               FMGL(raw))->__apply(((x10_int) ((i136228) - (x10aux::nullCheck(dmc)->
                                                                                                              FMGL(layout_min0)))));
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret136230_end_;
                                                      }
                                                      
                                                  }goto __ret136230_end_; __ret136230_end_: ;
                                                  }
                                                  ret136229;
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
                    org::scalegraph::util::GrowableMemory<x10_byte>* alloc136231 =
                       ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
                    ;
                    
                    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
                    (alloc136231)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
                      ((x10_long)0ll));
                    alloc136231;
                }))
                ;
                
                //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                if (putIdFlag) {
                    
                    //#line 181 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::util::StringBuilderAdd_(ssb,x10aux::makeStringLit("ID<Long>,"));
                }
                
                //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_int i127894max136252 = ((x10_int) ((colNum) - (((x10_int)1))));
                
                //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
                {
                    x10_int i136253;
                    for (
                         //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                         i136253 = ((x10_int)0); ((i136253) <= (i127894max136252));
                         
                         //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                         i136253 = ((x10_int) ((i136253) + (((x10_int)1)))))
                    {
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                        x10_int i136254 = i136253;
                        
                        //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                        if ((x10aux::struct_equals((__extension__ ({
                                                       
                                                       //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                                       x10::array::Array<x10_int>* this136232 =
                                                         x10aux::nullCheck(data)->typeId();
                                                       
                                                       //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                       x10_int i136233 =
                                                         i136254;
                                                       
                                                       //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                       x10_int ret136234;
                                                       
                                                       //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                       goto __ret136235; __ret136235: {
                                                       {
                                                           
                                                           //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                           if (x10aux::nullCheck(this136232)->
                                                                 FMGL(rail))
                                                           {
                                                               
                                                               //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                               ret136234 =
                                                                 (x10aux::nullCheck(this136232)->
                                                                    FMGL(raw))->__apply(i136233);
                                                               
                                                               //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                               goto __ret136235_end_;
                                                           }
                                                           else
                                                           {
                                                               
                                                               //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                               if (true &&
                                                                   !(x10aux::nullCheck(this136232)->
                                                                       FMGL(region)->contains(
                                                                       i136233)))
                                                               {
                                                                   
                                                                   //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                   x10::array::Array<void>::raiseBoundsError(
                                                                     i136233);
                                                               }
                                                               
                                                               //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                               ret136234 =
                                                                 (x10aux::nullCheck(this136232)->
                                                                    FMGL(raw))->__apply(((x10_int) ((i136233) - (x10aux::nullCheck(this136232)->
                                                                                                                   FMGL(layout_min0)))));
                                                               
                                                               //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                               goto __ret136235_end_;
                                                           }
                                                           
                                                       }goto __ret136235_end_; __ret136235_end_: ;
                                                       }
                                                       ret136234;
                                                       }))
                                                       , ((x10_int)13))))
                            {
                                
                                //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::StringBuilderAdd_(ssb,x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("\""), (__extension__ ({
                                    
                                    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                    x10::array::Array<x10::lang::String*>* this136236 =
                                      x10aux::nullCheck(data)->name();
                                    
                                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                    x10_int i136237 = i136254;
                                    
                                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::String* ret136238;
                                    
                                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                    goto __ret136239; __ret136239: {
                                    {
                                        
                                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                        if (x10aux::nullCheck(this136236)->
                                              FMGL(rail))
                                        {
                                            
                                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                            ret136238 = (x10aux::nullCheck(this136236)->
                                                           FMGL(raw))->__apply(i136237);
                                            
                                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                            goto __ret136239_end_;
                                        } else {
                                            
                                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                            if (true && !(x10aux::nullCheck(this136236)->
                                                            FMGL(region)->contains(
                                                            i136237)))
                                            {
                                                
                                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                x10::array::Array<void>::raiseBoundsError(
                                                  i136237);
                                            }
                                            
                                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                            ret136238 = (x10aux::nullCheck(this136236)->
                                                           FMGL(raw))->__apply(((x10_int) ((i136237) - (x10aux::nullCheck(this136236)->
                                                                                                          FMGL(layout_min0)))));
                                            
                                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                            goto __ret136239_end_;
                                        }
                                        
                                    }goto __ret136239_end_; __ret136239_end_: ;
                                    }
                                    ret136238;
                                    }))
                                    ), x10aux::makeStringLit("<")), org::scalegraph::id::Type::typeNameStr(
                                                                      (__extension__ ({
                                                                          
                                                                          //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                                                          x10::array::Array<x10_int>* this136240 =
                                                                            x10aux::nullCheck(data)->typeId();
                                                                          
                                                                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                          x10_int i136241 =
                                                                            i136254;
                                                                          
                                                                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                          x10_int ret136242;
                                                                          
                                                                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                          goto __ret136243; __ret136243: {
                                                                          {
                                                                              
                                                                              //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                              if (x10aux::nullCheck(this136240)->
                                                                                    FMGL(rail))
                                                                              {
                                                                                  
                                                                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                  ret136242 =
                                                                                    (x10aux::nullCheck(this136240)->
                                                                                       FMGL(raw))->__apply(i136241);
                                                                                  
                                                                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                  goto __ret136243_end_;
                                                                              }
                                                                              else
                                                                              {
                                                                                  
                                                                                  //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                                  if (true &&
                                                                                      !(x10aux::nullCheck(this136240)->
                                                                                          FMGL(region)->contains(
                                                                                          i136241)))
                                                                                  {
                                                                                      
                                                                                      //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                                      x10::array::Array<void>::raiseBoundsError(
                                                                                        i136241);
                                                                                  }
                                                                                  
                                                                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                  ret136242 =
                                                                                    (x10aux::nullCheck(this136240)->
                                                                                       FMGL(raw))->__apply(((x10_int) ((i136241) - (x10aux::nullCheck(this136240)->
                                                                                                                                      FMGL(layout_min0)))));
                                                                                  
                                                                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                  goto __ret136243_end_;
                                                                              }
                                                                              
                                                                          }goto __ret136243_end_; __ret136243_end_: ;
                                                                          }
                                                                          ret136242;
                                                                          }))
                                                                          )), x10aux::makeStringLit(">\"")), (!x10aux::struct_equals(i136254,
                                                                                                                                     ((x10_int) ((colNum) - (((x10_int)1))))))
                                                                      ? (x10aux::makeStringLit(","))
                                                                      : (x10aux::makeStringLit("\n"))));
                                } else {
                                    
                                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::StringBuilderAdd_(ssb,x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit(""), (__extension__ ({
                                        
                                        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                        x10::array::Array<x10::lang::String*>* this136244 =
                                          x10aux::nullCheck(data)->name();
                                        
                                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10_int i136245 =
                                          i136254;
                                        
                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::String* ret136246;
                                        
                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                        goto __ret136247; __ret136247: {
                                        {
                                            
                                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                            if (x10aux::nullCheck(this136244)->
                                                  FMGL(rail))
                                            {
                                                
                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret136246 =
                                                  (x10aux::nullCheck(this136244)->
                                                     FMGL(raw))->__apply(i136245);
                                                
                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                goto __ret136247_end_;
                                            } else {
                                                
                                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                if (true &&
                                                    !(x10aux::nullCheck(this136244)->
                                                        FMGL(region)->contains(
                                                        i136245)))
                                                {
                                                    
                                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                    x10::array::Array<void>::raiseBoundsError(
                                                      i136245);
                                                }
                                                
                                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret136246 =
                                                  (x10aux::nullCheck(this136244)->
                                                     FMGL(raw))->__apply(((x10_int) ((i136245) - (x10aux::nullCheck(this136244)->
                                                                                                    FMGL(layout_min0)))));
                                                
                                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                goto __ret136247_end_;
                                            }
                                            
                                        }goto __ret136247_end_; __ret136247_end_: ;
                                        }
                                        ret136246;
                                        }))
                                        ), x10aux::makeStringLit("<")), org::scalegraph::id::Type::typeNameStr(
                                                                          (__extension__ ({
                                                                              
                                                                              //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                                                              x10::array::Array<x10_int>* this136248 =
                                                                                x10aux::nullCheck(data)->typeId();
                                                                              
                                                                              //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                              x10_int i136249 =
                                                                                i136254;
                                                                              
                                                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                              x10_int ret136250;
                                                                              
                                                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                              goto __ret136251; __ret136251: {
                                                                              {
                                                                                  
                                                                                  //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                                  if (x10aux::nullCheck(this136248)->
                                                                                        FMGL(rail))
                                                                                  {
                                                                                      
                                                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                      ret136250 =
                                                                                        (x10aux::nullCheck(this136248)->
                                                                                           FMGL(raw))->__apply(i136249);
                                                                                      
                                                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                      goto __ret136251_end_;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                      
                                                                                      //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                                      if (true &&
                                                                                          !(x10aux::nullCheck(this136248)->
                                                                                              FMGL(region)->contains(
                                                                                              i136249)))
                                                                                      {
                                                                                          
                                                                                          //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                                          x10::array::Array<void>::raiseBoundsError(
                                                                                            i136249);
                                                                                      }
                                                                                      
                                                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                      ret136250 =
                                                                                        (x10aux::nullCheck(this136248)->
                                                                                           FMGL(raw))->__apply(((x10_int) ((i136249) - (x10aux::nullCheck(this136248)->
                                                                                                                                          FMGL(layout_min0)))));
                                                                                      
                                                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                      goto __ret136251_end_;
                                                                                  }
                                                                                  
                                                                              }goto __ret136251_end_; __ret136251_end_: ;
                                                                              }
                                                                              ret136250;
                                                                              }))
                                                                              )), x10aux::makeStringLit(">")), (!x10aux::struct_equals(i136254,
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
                                  org::scalegraph::util::SString this136153 =
                                    ssb->org::scalegraph::util::SStringBuilder::result();
                                  this136153->FMGL(content);
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
                                          org::scalegraph::io::impl::CSVAttributeHandler* ret136155;
                                          
                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                          ret136155 = (atts->
                                                         FMGL(raw))->__apply(((x10_int)0));
                                          ret136155;
                                      }))
                                      )->localSizeOf((__extension__ ({
                                                         
                                                         //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                                         ;
                                                         
                                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                         x10::lang::Any* ret136158;
                                                         
                                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                         goto __ret136159; __ret136159: {
                                                         {
                                                             
                                                             //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                             if (x10aux::nullCheck(dmc)->
                                                                   FMGL(rail))
                                                             {
                                                                 
                                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                 ret136158 =
                                                                   (x10aux::nullCheck(dmc)->
                                                                      FMGL(raw))->__apply(((x10_int)0));
                                                                 
                                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                 goto __ret136159_end_;
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
                                                                 ret136158 =
                                                                   (x10aux::nullCheck(dmc)->
                                                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(dmc)->
                                                                                                                          FMGL(layout_min0)))));
                                                                 
                                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                 goto __ret136159_end_;
                                                             }
                                                             
                                                         }goto __ret136159_end_; __ret136159_end_: ;
                                                         }
                                                         ret136158;
                                                         }))
                                                         ));
                        
                        //#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(fw)->close();
                        }
                        catch (x10::lang::CheckedThrowable* __exc1896) {
                            if (true) {
                                x10::lang::CheckedThrowable* e =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc1896);
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
    x10_int __var1894__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)131072));
    FMGL(CHUNK_SIZE) = __var1894__;
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
        org::scalegraph::util::SString path136098 = path;
        
        //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": polyglot.ast.Empty_c
        ;
        org::scalegraph::io::impl::FileNameProvider::create(
          path136098, false, true);
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
    x10_int size136258 = colNum;
    
    //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::array::RectRegion1D* myReg136224 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
    ;
    
    //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg136224)->::x10::array::RectRegion1D::_constructor(
      ((x10_int) ((size136258) - (((x10_int)1)))));
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg136224);
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(rank) = ((x10_int)1);
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(rect) = true;
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(zeroBased) = true;
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(rail) = true;
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(size) = size136258;
    
    //#line 318 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(layout_min0) = atts->FMGL(layout_stride1) =
      atts->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 319 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
    
    //#line 320 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::util::IndexedMemoryChunk<org::scalegraph::io::impl::CSVAttributeHandler* > r136225 =
      x10::util::IndexedMemoryChunk<void>::allocate<org::scalegraph::io::impl::CSVAttributeHandler* >(size136258, 8, false, false);
    
    //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int i67566max136221 = ((x10_int) ((size136258) - (((x10_int)1))));
    
    //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
    {
        x10_int i136222;
        for (
             //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
             i136222 = ((x10_int)0); ((i136222) <= (i67566max136221));
             
             //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
             i136222 = ((x10_int) ((i136222) + (((x10_int)1)))))
        {
            
            //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i136223 = i136222;
            
            //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (r136225)->__set(i136223, (__extension__ ({
                
                //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_int i136217 = i136223;
                org::scalegraph::io::impl::CSVAttributeHandler::create(
                  (__extension__ ({
                      
                      //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10_int i136218 = i136217;
                      
                      //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10_int ret136219;
                      
                      //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                      goto __ret136220; __ret136220: {
                      {
                          
                          //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                          if (x10aux::nullCheck(typeId)->
                                FMGL(rail)) {
                              
                              //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                              ret136219 = (x10aux::nullCheck(typeId)->
                                             FMGL(raw))->__apply(i136218);
                              
                              //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                              goto __ret136220_end_;
                          } else {
                              
                              //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                              if (true && !(x10aux::nullCheck(typeId)->
                                              FMGL(region)->contains(
                                              i136218))) {
                                  
                                  //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                  x10::array::Array<void>::raiseBoundsError(
                                    i136218);
                              }
                              
                              //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                              ret136219 = (x10aux::nullCheck(typeId)->
                                             FMGL(raw))->__apply(((x10_int) ((i136218) - (x10aux::nullCheck(typeId)->
                                                                                            FMGL(layout_min0)))));
                              
                              //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                              goto __ret136220_end_;
                          }
                          
                      }goto __ret136220_end_; __ret136220_end_: ;
                      }
                      ret136219;
                      }))
                      , false);
                }))
                );
            }
        }
        
    
    //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(raw) = r136225;
    
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
            org::scalegraph::util::SStringBuilder alloc127799 =  org::scalegraph::util::SStringBuilder::_alloc();
            
            //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127799->FMGL(buffer) = (__extension__ ({
                
                //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::GrowableMemory<x10_byte>* alloc136160 =
                   ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
                ;
                
                //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
                (alloc136160)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
                  ((x10_long)0ll));
                alloc136160;
            }))
            ;
            alloc127799;
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
            org::scalegraph::util::SStringBuilder alloc127800 =  org::scalegraph::util::SStringBuilder::_alloc();
            
            //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10FieldAssign_c
            alloc127800->FMGL(buffer) = (__extension__ ({
                
                //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::GrowableMemory<x10_byte>* alloc136161 =
                   ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
                ;
                
                //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
                (alloc136161)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
                  ((x10_long)0ll));
                alloc136161;
            }))
            ;
            alloc127800;
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
            x10_long tid136179 = ((x10_long) (idx136187));
            
            //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r136180 = i_range136191;
            
            //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Labeled_c
            goto __ret136181; __ret136181: {
            {
                
                //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder buf136182 = (__extension__ ({
                    
                    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this136183 =
                      saved_this->FMGL(backBuffer);
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index136184 = tid136179;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::SStringBuilder ret136185;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this136183->FMGL(data)).isValid()))
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
                        if (((index136184) < (((x10_long) (((x10_int)0))))) ||
                            ((index136184) >= (this136183->FMGL(data)->
                                                 FMGL(size)))) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index136184), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret136185 = (this136183->FMGL(data))[index136184];
                    ret136185;
                }))
                ;
                
                //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_int numColumns136186 = x10aux::nullCheck(saved_this->
                                                               FMGL(strClousure))->size();
                
                //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(numColumns136186, ((x10_int)0))))
                {
                    
                    //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Branch_c
                    goto __ret136181_end_;
                }
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i127838domain136174 = r136180;
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_long i127838min136175 = i127838domain136174->
                                              FMGL(min);
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_long i127838max136176 = i127838domain136174->
                                              FMGL(max);
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
                {
                    x10_long i136177;
                    for (
                         //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                         i136177 = i127838min136175; ((i136177) <= (i127838max136176));
                         
                         //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                         i136177 = ((x10_long) ((i136177) + (((x10_long)1ll)))))
                    {
                        
                        //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                        x10_long i136178 = i136177;
                        
                        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                        x10_int i127820max136171 = ((x10_int) ((numColumns136186) - (((x10_int)2))));
                        
                        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
                        {
                            x10_int i136172;
                            for (
                                 //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                 i136172 = ((x10_int)0); ((i136172) <= (i127820max136171));
                                 
                                 //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                                 i136172 = ((x10_int) ((i136172) + (((x10_int)1)))))
                            {
                                
                                //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                x10_int c136173 = i136172;
                                
                                //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.ClosureCall_c
                                x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>::__apply(x10aux::nullCheck(x10aux::nullCheck(saved_this->
                                                                                                                                                       FMGL(strClousure))->__apply(
                                                                                                                                     c136173)), 
                                  buf136182, i136178);
                                
                                //#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::StringBuilderAdd_(buf136182,((x10_char)','));
                            }
                        }
                        
                        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.ClosureCall_c
                        x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>::__apply(x10aux::nullCheck(x10aux::nullCheck(saved_this->
                                                                                                                                               FMGL(strClousure))->__apply(
                                                                                                                             ((x10_int) ((numColumns136186) - (((x10_int)1)))))), 
                          buf136182, i136178);
                        
                        //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::util::StringBuilderAdd_(buf136182,((x10_char)'\n'));
                    }
                }
                
            }goto __ret136181_end_; __ret136181_end_: ;
            }
            }
            catch (x10::lang::CheckedThrowable* __exc1901) {
                if (x10aux::instanceof<x10::lang::Error*>(__exc1901)) {
                    x10::lang::Error* __lowerer__var__0__ =
                      static_cast<x10::lang::Error*>(__exc1901);
                    {
                        
                        //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                    }
                } else
                if (true) {
                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1901);
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
        x10_int idx136187;
        x10::lang::LongRange i_range136191;
        org::scalegraph::io::impl::CSVWriter__ParallelWriter* saved_this;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->idx136187);
            buf.write(this->i_range136191);
            buf.write(this->saved_this);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5* storage = x10aux::alloc<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5>();
            buf.record_reference(storage);
            x10_int that_idx136187 = buf.read<x10_int>();
            x10::lang::LongRange that_i_range136191 = buf.read<x10::lang::LongRange>();
            org::scalegraph::io::impl::CSVWriter__ParallelWriter* that_saved_this = buf.read<org::scalegraph::io::impl::CSVWriter__ParallelWriter*>();
            org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5* this_ = new (storage) org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5(that_idx136187, that_i_range136191, that_saved_this);
            return this_;
        }
        
        org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5(x10_int idx136187, x10::lang::LongRange i_range136191, org::scalegraph::io::impl::CSVWriter__ParallelWriter* saved_this) : idx136187(idx136187), i_range136191(i_range136191), saved_this(saved_this) { }
        
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
        catch (x10::lang::CheckedThrowable* __exc1907) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc1907)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc1907);
                {
                    
                    //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ = static_cast<x10::lang::CheckedThrowable*>(__exc1907);
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
    this->org::scalegraph::io::impl::CSVWriter__ParallelWriter::__fieldInitializers127322();
    
    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(frontBuffer) = org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder >::_make(((x10_long) (nthreads)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder> >(sizeof(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3)))org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3())), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(backBuffer) = org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder >::_make(((x10_long) (nthreads)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder> >(sizeof(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4)))org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4())), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
    x10_int i127802max136168 = ((x10_int) ((nthreads) - (((x10_int)1))));
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
    {
        x10_int i136169;
        for (
             //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
             i136169 = ((x10_int)0); ((i136169) <= (i127802max136168));
             
             //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
             i136169 = ((x10_int) ((i136169) + (((x10_int)1))))) {
            
            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            x10_int i136170 = i136169;
            
            //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderAdd_((__extension__ ({
                
                //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this136162 =
                  this->FMGL(frontBuffer);
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index136163 = i136170;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder ret136164;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this136162->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index136163) < (((x10_int)0))) ||
                        ((((x10_long) (index136163))) >= (this136162->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index136163), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret136164 = (this136162->FMGL(data))[index136163];
                ret136164;
            }))
            ,x10aux::makeStringLit(""));
            
            //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderAdd_((__extension__ ({
                
                //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this136165 =
                  this->FMGL(backBuffer);
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index136166 = i136170;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder ret136167;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this136165->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index136166) < (((x10_int)0))) ||
                        ((((x10_long) (index136166))) >= (this136165->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index136166), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret136167 = (this136165->FMGL(data))[index136166];
                ret136167;
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
                                   org::scalegraph::io::impl::CSVWriter__ParallelWriter* x136036 =
                                     this;
                                   
                                   //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Empty_c
                                   ;
                                   x10aux::nullCheck(x136036)->
                                     FMGL(numLauchTasks) =
                                     ((x10_int) ((x10aux::nullCheck(x136036)->
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
    x10::lang::LongRange range136201 = range;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size136197 = ((x10_long) ((((x10_long) ((range136201->
                                                        FMGL(max)) - (range136201->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads136198 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size136199 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a136200 = ((x10_long) ((((x10_long) ((((x10_long) ((size136197) + (((x10_long) (nthreads136198)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads136198)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a136200) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a136200);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var189 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable136267 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i72665max136194 = ((x10_int) ((nthreads136198) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i136195;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i136195 = ((x10_int)0); ((i136195) <= (i72665max136194));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i136195 = ((x10_int) ((i136195) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i136196 = i136195;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx136187 = i136196;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start136188 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a136189 = ((x10_long) ((range136201->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b136190 = ((x10_long) ((range136201->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i136196))) * (chunk_size136199))))));
                                    ((a136189) < (b136190))
                                      ? (a136189) : (b136190);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range136191 =
                                  x10::lang::LongRange::_make(i_start136188, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a136192 = range136201->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b136193 = ((x10_long) ((((x10_long) ((i_start136188) + (chunk_size136199)))) - (((x10_long) (((x10_int)1))))));
                                    ((a136192) < (b136193))
                                      ? (a136192) : (b136193);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5)))org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5(idx136187, i_range136191, this))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc1902) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1902);
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
            catch (x10::lang::CheckedThrowable* __exc1903) {
                if (true) {
                    x10::lang::CheckedThrowable* formal136268 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1903);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable136267 = formal136268;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable136267)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable136267))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable136267));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var189);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable136267)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable136267)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable136267));
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
        x10::lang::LongRange i127857domain136212 = (__extension__ ({
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this136213 =
              this->FMGL(frontBuffer);
            x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this136213->
                                                                         FMGL(data)->
                                                                         FMGL(size)) - (((x10_long)1ll)))));
        }))
        ;
        
        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
        x10_long i127857max136214 = i127857domain136212->
                                      FMGL(max);
        
        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
        {
            x10_long i136215;
            for (
                 //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                 i136215 = ((x10_long)0ll); ((i136215) <= (i127857max136214));
                 
                 //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                 i136215 = ((x10_long) ((i136215) + (((x10_long)1ll)))))
            {
                
                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_long tid136216 = i136215;
                
                //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> bytes136207 =
                  (__extension__ ({
                    
                    //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::SString this136208 =
                      (__extension__ ({
                          
                          //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this136209 =
                            this->FMGL(frontBuffer);
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index136210 = tid136216;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::util::SStringBuilder ret136211;
                          {
                              
                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((this136209->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                  }
                                  
                              }
                              
                              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((index136210) < (((x10_long) (((x10_int)0))))) ||
                                  ((index136210) >= (this136209->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index136210), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret136211 = (this136209->FMGL(data))[index136210];
                          ret136211;
                      }))
                      ->org::scalegraph::util::SStringBuilder::result();
                    this136208->FMGL(content);
                }))
                ;
                
                //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(fw))->write(
                  bytes136207);
                
                //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder this136203 =
                  (__extension__ ({
                    
                    //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this136204 =
                      this->FMGL(frontBuffer);
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index136205 = tid136216;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::SStringBuilder ret136206;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this136204->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index136205) < (((x10_long) (((x10_int)0))))) ||
                            ((index136205) >= (this136204->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index136205), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret136206 = (this136204->FMGL(data))[index136205];
                    ret136206;
                }))
                ;
                
                //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::GrowableMemory<x10_byte>* this136202 =
                  this136203->FMGL(buffer);
                
                //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(this136202)->FMGL(size) =
                  ((x10_long) (((x10_int)0)));
            }
        }
        
        //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
        this->notifySubtaskCompletion();
    }
    catch (x10::lang::CheckedThrowable* __exc1905) {
        if (true) {
            x10::lang::CheckedThrowable* e = static_cast<x10::lang::CheckedThrowable*>(__exc1905);
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
        x10::lang::FinishState* x10____var190 = x10::lang::Runtime::startFinish();
        {
            
            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable136270 =
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
                                    x10_long a136096 = ((x10_long) ((start) + (((x10_long) (((x10_int) ((((x10_int)131072)) * (nthreads))))))));
                                    
                                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
                                    x10_long b136097 = numLines;
                                    x10::util::Ordered<x10_long >::__lt(a136096, b136097)
                                      ? (a136096) : (b136097);
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
                catch (x10::lang::CheckedThrowable* __exc1908) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc1908);
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
            catch (x10::lang::CheckedThrowable* __exc1909) {
                if (true) {
                    x10::lang::CheckedThrowable* formal136271 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1909);
                    {
                        
                        //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable136270 = formal136271;
                    }
                } else
                throw;
            }
            
            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable136270)))
            {
                
                //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable136270))
                {
                    
                    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable136270));
                }
                
            }
            
            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var190);
            }
            
            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable136270)))
            {
                
                //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable136270)))
                {
                    
                    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable136270));
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
void org::scalegraph::io::impl::CSVWriter__ParallelWriter::__fieldInitializers127322(
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
