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
                x10::array::Array<x10_int>* this137722 = x10aux::nullCheck(team)->role();
                
                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret137723;
                
                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                goto __ret137724; __ret137724: {
                {
                    
                    //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                    if (x10aux::nullCheck(this137722)->FMGL(rail)) {
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret137723 = (x10aux::nullCheck(this137722)->FMGL(raw))->__apply(((x10_int)0));
                        
                        //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret137724_end_;
                    } else {
                        
                        //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                        if (true && !(x10aux::nullCheck(this137722)->FMGL(region)->contains(
                                        ((x10_int)0)))) {
                            
                            //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                            x10::array::Array<void>::raiseBoundsError(
                              ((x10_int)0));
                        }
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret137723 = (x10aux::nullCheck(this137722)->
                                       FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(this137722)->
                                                                                           FMGL(layout_min0)))));
                        
                        //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                        goto __ret137724_end_;
                    }
                    
                }goto __ret137724_end_; __ret137724_end_: ;
                }
                ret137723;
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
            x10_int i129425max137858 = ((x10_int) ((colNum) - (((x10_int)1))));
            
            //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
            {
                x10_int i137859;
                for (
                     //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                     i137859 = ((x10_int)0); ((i137859) <= (i129425max137858));
                     
                     //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                     i137859 = ((x10_int) ((i137859) + (((x10_int)1)))))
                {
                    
                    //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                    x10_int i137860 = i137859;
                    
                    //#line 172 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                    makeStringClosures->add(x10aux::nullCheck((__extension__ ({
                                                
                                                //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int i137829 =
                                                  i137860;
                                                
                                                //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                org::scalegraph::io::impl::CSVAttributeHandler* ret137830;
                                                
                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret137830 =
                                                  (atts->
                                                     FMGL(raw))->__apply(i137829);
                                                ret137830;
                                            }))
                                            )->makeStringClosure(
                                              (__extension__ ({
                                                  
                                                  //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10_int i137831 =
                                                    i137860;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                  x10::lang::Any* ret137832;
                                                  
                                                  //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                  goto __ret137833; __ret137833: {
                                                  {
                                                      
                                                      //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                      if (x10aux::nullCheck(dmc)->
                                                            FMGL(rail))
                                                      {
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret137832 =
                                                            (x10aux::nullCheck(dmc)->
                                                               FMGL(raw))->__apply(i137831);
                                                          
                                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret137833_end_;
                                                      } else
                                                      {
                                                          
                                                          //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                          if (true &&
                                                              !(x10aux::nullCheck(dmc)->
                                                                  FMGL(region)->contains(
                                                                  i137831)))
                                                          {
                                                              
                                                              //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                              x10::array::Array<void>::raiseBoundsError(
                                                                i137831);
                                                          }
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                          ret137832 =
                                                            (x10aux::nullCheck(dmc)->
                                                               FMGL(raw))->__apply(((x10_int) ((i137831) - (x10aux::nullCheck(dmc)->
                                                                                                              FMGL(layout_min0)))));
                                                          
                                                          //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                          goto __ret137833_end_;
                                                      }
                                                      
                                                  }goto __ret137833_end_; __ret137833_end_: ;
                                                  }
                                                  ret137832;
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
                    org::scalegraph::util::GrowableMemory<x10_byte>* alloc137834 =
                       ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
                    ;
                    
                    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
                    (alloc137834)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
                      ((x10_long)0ll));
                    alloc137834;
                }))
                ;
                
                //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                if (putIdFlag) {
                    
                    //#line 181 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                    org::scalegraph::util::StringBuilderAdd_(ssb,x10aux::makeStringLit("ID<Long>,"));
                }
                
                //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_int i129443max137855 = ((x10_int) ((colNum) - (((x10_int)1))));
                
                //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
                {
                    x10_int i137856;
                    for (
                         //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                         i137856 = ((x10_int)0); ((i137856) <= (i129443max137855));
                         
                         //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                         i137856 = ((x10_int) ((i137856) + (((x10_int)1)))))
                    {
                        
                        //#line 183 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                        x10_int i137857 = i137856;
                        
                        //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                        if ((x10aux::struct_equals((__extension__ ({
                                                       
                                                       //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                                       x10::array::Array<x10_int>* this137835 =
                                                         x10aux::nullCheck(data)->typeId();
                                                       
                                                       //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                       x10_int i137836 =
                                                         i137857;
                                                       
                                                       //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                       x10_int ret137837;
                                                       
                                                       //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                       goto __ret137838; __ret137838: {
                                                       {
                                                           
                                                           //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                           if (x10aux::nullCheck(this137835)->
                                                                 FMGL(rail))
                                                           {
                                                               
                                                               //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                               ret137837 =
                                                                 (x10aux::nullCheck(this137835)->
                                                                    FMGL(raw))->__apply(i137836);
                                                               
                                                               //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                               goto __ret137838_end_;
                                                           }
                                                           else
                                                           {
                                                               
                                                               //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                               if (true &&
                                                                   !(x10aux::nullCheck(this137835)->
                                                                       FMGL(region)->contains(
                                                                       i137836)))
                                                               {
                                                                   
                                                                   //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                   x10::array::Array<void>::raiseBoundsError(
                                                                     i137836);
                                                               }
                                                               
                                                               //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                               ret137837 =
                                                                 (x10aux::nullCheck(this137835)->
                                                                    FMGL(raw))->__apply(((x10_int) ((i137836) - (x10aux::nullCheck(this137835)->
                                                                                                                   FMGL(layout_min0)))));
                                                               
                                                               //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                               goto __ret137838_end_;
                                                           }
                                                           
                                                       }goto __ret137838_end_; __ret137838_end_: ;
                                                       }
                                                       ret137837;
                                                       }))
                                                       , ((x10_int)13))))
                            {
                                
                                //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::StringBuilderAdd_(ssb,x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("\""), (__extension__ ({
                                    
                                    //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                    x10::array::Array<x10::lang::String*>* this137839 =
                                      x10aux::nullCheck(data)->name();
                                    
                                    //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                    x10_int i137840 = i137857;
                                    
                                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                    x10::lang::String* ret137841;
                                    
                                    //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                    goto __ret137842; __ret137842: {
                                    {
                                        
                                        //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                        if (x10aux::nullCheck(this137839)->
                                              FMGL(rail))
                                        {
                                            
                                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                            ret137841 = (x10aux::nullCheck(this137839)->
                                                           FMGL(raw))->__apply(i137840);
                                            
                                            //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                            goto __ret137842_end_;
                                        } else {
                                            
                                            //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                            if (true && !(x10aux::nullCheck(this137839)->
                                                            FMGL(region)->contains(
                                                            i137840)))
                                            {
                                                
                                                //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                x10::array::Array<void>::raiseBoundsError(
                                                  i137840);
                                            }
                                            
                                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                            ret137841 = (x10aux::nullCheck(this137839)->
                                                           FMGL(raw))->__apply(((x10_int) ((i137840) - (x10aux::nullCheck(this137839)->
                                                                                                          FMGL(layout_min0)))));
                                            
                                            //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                            goto __ret137842_end_;
                                        }
                                        
                                    }goto __ret137842_end_; __ret137842_end_: ;
                                    }
                                    ret137841;
                                    }))
                                    ), x10aux::makeStringLit("<")), org::scalegraph::id::Type::typeNameStr(
                                                                      (__extension__ ({
                                                                          
                                                                          //#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                                                          x10::array::Array<x10_int>* this137843 =
                                                                            x10aux::nullCheck(data)->typeId();
                                                                          
                                                                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                          x10_int i137844 =
                                                                            i137857;
                                                                          
                                                                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                          x10_int ret137845;
                                                                          
                                                                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                          goto __ret137846; __ret137846: {
                                                                          {
                                                                              
                                                                              //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                              if (x10aux::nullCheck(this137843)->
                                                                                    FMGL(rail))
                                                                              {
                                                                                  
                                                                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                  ret137845 =
                                                                                    (x10aux::nullCheck(this137843)->
                                                                                       FMGL(raw))->__apply(i137844);
                                                                                  
                                                                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                  goto __ret137846_end_;
                                                                              }
                                                                              else
                                                                              {
                                                                                  
                                                                                  //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                                  if (true &&
                                                                                      !(x10aux::nullCheck(this137843)->
                                                                                          FMGL(region)->contains(
                                                                                          i137844)))
                                                                                  {
                                                                                      
                                                                                      //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                                      x10::array::Array<void>::raiseBoundsError(
                                                                                        i137844);
                                                                                  }
                                                                                  
                                                                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                  ret137845 =
                                                                                    (x10aux::nullCheck(this137843)->
                                                                                       FMGL(raw))->__apply(((x10_int) ((i137844) - (x10aux::nullCheck(this137843)->
                                                                                                                                      FMGL(layout_min0)))));
                                                                                  
                                                                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                  goto __ret137846_end_;
                                                                              }
                                                                              
                                                                          }goto __ret137846_end_; __ret137846_end_: ;
                                                                          }
                                                                          ret137845;
                                                                          }))
                                                                          )), x10aux::makeStringLit(">\"")), (!x10aux::struct_equals(i137857,
                                                                                                                                     ((x10_int) ((colNum) - (((x10_int)1))))))
                                                                      ? (x10aux::makeStringLit(","))
                                                                      : (x10aux::makeStringLit("\n"))));
                                } else {
                                    
                                    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::StringBuilderAdd_(ssb,x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit(""), (__extension__ ({
                                        
                                        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                        x10::array::Array<x10::lang::String*>* this137847 =
                                          x10aux::nullCheck(data)->name();
                                        
                                        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10_int i137848 =
                                          i137857;
                                        
                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10::lang::String* ret137849;
                                        
                                        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                        goto __ret137850; __ret137850: {
                                        {
                                            
                                            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                            if (x10aux::nullCheck(this137847)->
                                                  FMGL(rail))
                                            {
                                                
                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret137849 =
                                                  (x10aux::nullCheck(this137847)->
                                                     FMGL(raw))->__apply(i137848);
                                                
                                                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                goto __ret137850_end_;
                                            } else {
                                                
                                                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                if (true &&
                                                    !(x10aux::nullCheck(this137847)->
                                                        FMGL(region)->contains(
                                                        i137848)))
                                                {
                                                    
                                                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                    x10::array::Array<void>::raiseBoundsError(
                                                      i137848);
                                                }
                                                
                                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret137849 =
                                                  (x10aux::nullCheck(this137847)->
                                                     FMGL(raw))->__apply(((x10_int) ((i137848) - (x10aux::nullCheck(this137847)->
                                                                                                    FMGL(layout_min0)))));
                                                
                                                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                goto __ret137850_end_;
                                            }
                                            
                                        }goto __ret137850_end_; __ret137850_end_: ;
                                        }
                                        ret137849;
                                        }))
                                        ), x10aux::makeStringLit("<")), org::scalegraph::id::Type::typeNameStr(
                                                                          (__extension__ ({
                                                                              
                                                                              //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                                                              x10::array::Array<x10_int>* this137851 =
                                                                                x10aux::nullCheck(data)->typeId();
                                                                              
                                                                              //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                              x10_int i137852 =
                                                                                i137857;
                                                                              
                                                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                              x10_int ret137853;
                                                                              
                                                                              //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                                              goto __ret137854; __ret137854: {
                                                                              {
                                                                                  
                                                                                  //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                                  if (x10aux::nullCheck(this137851)->
                                                                                        FMGL(rail))
                                                                                  {
                                                                                      
                                                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                      ret137853 =
                                                                                        (x10aux::nullCheck(this137851)->
                                                                                           FMGL(raw))->__apply(i137852);
                                                                                      
                                                                                      //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                      goto __ret137854_end_;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                      
                                                                                      //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                                      if (true &&
                                                                                          !(x10aux::nullCheck(this137851)->
                                                                                              FMGL(region)->contains(
                                                                                              i137852)))
                                                                                      {
                                                                                          
                                                                                          //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                                          x10::array::Array<void>::raiseBoundsError(
                                                                                            i137852);
                                                                                      }
                                                                                      
                                                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                      ret137853 =
                                                                                        (x10aux::nullCheck(this137851)->
                                                                                           FMGL(raw))->__apply(((x10_int) ((i137852) - (x10aux::nullCheck(this137851)->
                                                                                                                                          FMGL(layout_min0)))));
                                                                                      
                                                                                      //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                                      goto __ret137854_end_;
                                                                                  }
                                                                                  
                                                                              }goto __ret137854_end_; __ret137854_end_: ;
                                                                              }
                                                                              ret137853;
                                                                              }))
                                                                              )), x10aux::makeStringLit(">")), (!x10aux::struct_equals(i137857,
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
                                  org::scalegraph::util::SString this137756 =
                                    ssb->org::scalegraph::util::SStringBuilder::result();
                                  this137756->FMGL(content);
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
                                          org::scalegraph::io::impl::CSVAttributeHandler* ret137758;
                                          
                                          //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                          ret137758 = (atts->
                                                         FMGL(raw))->__apply(((x10_int)0));
                                          ret137758;
                                      }))
                                      )->localSizeOf((__extension__ ({
                                                         
                                                         //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                                                         ;
                                                         
                                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                         x10::lang::Any* ret137761;
                                                         
                                                         //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                         goto __ret137762; __ret137762: {
                                                         {
                                                             
                                                             //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                             if (x10aux::nullCheck(dmc)->
                                                                   FMGL(rail))
                                                             {
                                                                 
                                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                 ret137761 =
                                                                   (x10aux::nullCheck(dmc)->
                                                                      FMGL(raw))->__apply(((x10_int)0));
                                                                 
                                                                 //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                 goto __ret137762_end_;
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
                                                                 ret137761 =
                                                                   (x10aux::nullCheck(dmc)->
                                                                      FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(dmc)->
                                                                                                                          FMGL(layout_min0)))));
                                                                 
                                                                 //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                 goto __ret137762_end_;
                                                             }
                                                             
                                                         }goto __ret137762_end_; __ret137762_end_: ;
                                                         }
                                                         ret137761;
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
        org::scalegraph::util::SString path137701 = path;
        
        //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": polyglot.ast.Empty_c
        ;
        org::scalegraph::io::impl::FileNameProvider::create(
          path137701, false, true);
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
    x10_int size137861 = colNum;
    
    //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::array::RectRegion1D* myReg137827 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
    ;
    
    //#line 315 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg137827)->::x10::array::RectRegion1D::_constructor(
      ((x10_int) ((size137861) - (((x10_int)1)))));
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg137827);
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(rank) = ((x10_int)1);
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(rect) = true;
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(zeroBased) = true;
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(rail) = true;
    
    //#line 316 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(size) = size137861;
    
    //#line 318 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(layout_min0) = atts->FMGL(layout_stride1) =
      atts->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 319 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
    
    //#line 320 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::util::IndexedMemoryChunk<org::scalegraph::io::impl::CSVAttributeHandler* > r137828 =
      x10::util::IndexedMemoryChunk<void>::allocate<org::scalegraph::io::impl::CSVAttributeHandler* >(size137861, 8, false, false);
    
    //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int i70709max137824 = ((x10_int) ((size137861) - (((x10_int)1))));
    
    //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
    {
        x10_int i137825;
        for (
             //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
             i137825 = ((x10_int)0); ((i137825) <= (i70709max137824));
             
             //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
             i137825 = ((x10_int) ((i137825) + (((x10_int)1)))))
        {
            
            //#line 321 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i137826 = i137825;
            
            //#line 322 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (r137828)->__set(i137826, (__extension__ ({
                
                //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_int i137820 = i137826;
                org::scalegraph::io::impl::CSVAttributeHandler::create(
                  (__extension__ ({
                      
                      //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10_int i137821 = i137820;
                      
                      //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10_int ret137822;
                      
                      //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                      goto __ret137823; __ret137823: {
                      {
                          
                          //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                          if (x10aux::nullCheck(typeId)->
                                FMGL(rail)) {
                              
                              //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                              ret137822 = (x10aux::nullCheck(typeId)->
                                             FMGL(raw))->__apply(i137821);
                              
                              //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                              goto __ret137823_end_;
                          } else {
                              
                              //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                              if (true && !(x10aux::nullCheck(typeId)->
                                              FMGL(region)->contains(
                                              i137821))) {
                                  
                                  //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                  x10::array::Array<void>::raiseBoundsError(
                                    i137821);
                              }
                              
                              //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                              ret137822 = (x10aux::nullCheck(typeId)->
                                             FMGL(raw))->__apply(((x10_int) ((i137821) - (x10aux::nullCheck(typeId)->
                                                                                            FMGL(layout_min0)))));
                              
                              //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                              goto __ret137823_end_;
                          }
                          
                      }goto __ret137823_end_; __ret137823_end_: ;
                      }
                      ret137822;
                      }))
                      , false);
                }))
                );
            }
        }
        
    
    //#line 324 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    atts->FMGL(raw) = r137828;
    
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
            org::scalegraph::util::SStringBuilder alloc129348 =  org::scalegraph::util::SStringBuilder::_alloc();
            
            //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10FieldAssign_c
            alloc129348->FMGL(buffer) = (__extension__ ({
                
                //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::GrowableMemory<x10_byte>* alloc137763 =
                   ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
                ;
                
                //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
                (alloc137763)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
                  ((x10_long)0ll));
                alloc137763;
            }))
            ;
            alloc129348;
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
            org::scalegraph::util::SStringBuilder alloc129349 =  org::scalegraph::util::SStringBuilder::_alloc();
            
            //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10FieldAssign_c
            alloc129349->FMGL(buffer) = (__extension__ ({
                
                //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::GrowableMemory<x10_byte>* alloc137764 =
                   ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
                ;
                
                //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
                (alloc137764)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
                  ((x10_long)0ll));
                alloc137764;
            }))
            ;
            alloc129349;
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
            x10_long tid137782 = ((x10_long) (idx137790));
            
            //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange r137783 = i_range137794;
            
            //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Labeled_c
            goto __ret137784; __ret137784: {
            {
                
                //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder buf137785 = (__extension__ ({
                    
                    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this137786 =
                      saved_this->FMGL(backBuffer);
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index137787 = tid137782;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::SStringBuilder ret137788;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this137786->FMGL(data)).isValid()))
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
                        if (((index137787) < (((x10_long) (((x10_int)0))))) ||
                            ((index137787) >= (this137786->FMGL(data)->
                                                 FMGL(size)))) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index137787), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret137788 = (this137786->FMGL(data))[index137787];
                    ret137788;
                }))
                ;
                
                //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_int numColumns137789 = x10aux::nullCheck(saved_this->
                                                               FMGL(strClousure))->size();
                
                //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(numColumns137789, ((x10_int)0))))
                {
                    
                    //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Branch_c
                    goto __ret137784_end_;
                }
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10::lang::LongRange i129387domain137777 = r137783;
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_long i129387min137778 = i129387domain137777->
                                              FMGL(min);
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_long i129387max137779 = i129387domain137777->
                                              FMGL(max);
                
                //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
                {
                    x10_long i137780;
                    for (
                         //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                         i137780 = i129387min137778; ((i137780) <= (i129387max137779));
                         
                         //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                         i137780 = ((x10_long) ((i137780) + (((x10_long)1ll)))))
                    {
                        
                        //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                        x10_long i137781 = i137780;
                        
                        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                        x10_int i129369max137774 = ((x10_int) ((numColumns137789) - (((x10_int)2))));
                        
                        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
                        {
                            x10_int i137775;
                            for (
                                 //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                 i137775 = ((x10_int)0); ((i137775) <= (i129369max137774));
                                 
                                 //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                                 i137775 = ((x10_int) ((i137775) + (((x10_int)1)))))
                            {
                                
                                //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                                x10_int c137776 = i137775;
                                
                                //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.ClosureCall_c
                                x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>::__apply(x10aux::nullCheck(x10aux::nullCheck(saved_this->
                                                                                                                                                       FMGL(strClousure))->__apply(
                                                                                                                                     c137776)), 
                                  buf137785, i137781);
                                
                                //#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::StringBuilderAdd_(buf137785,((x10_char)','));
                            }
                        }
                        
                        //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.ClosureCall_c
                        x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>::__apply(x10aux::nullCheck(x10aux::nullCheck(saved_this->
                                                                                                                                               FMGL(strClousure))->__apply(
                                                                                                                             ((x10_int) ((numColumns137789) - (((x10_int)1)))))), 
                          buf137785, i137781);
                        
                        //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::util::StringBuilderAdd_(buf137785,((x10_char)'\n'));
                    }
                }
                
            }goto __ret137784_end_; __ret137784_end_: ;
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
        x10_int idx137790;
        x10::lang::LongRange i_range137794;
        org::scalegraph::io::impl::CSVWriter__ParallelWriter* saved_this;
        
        x10aux::serialization_id_t _get_serialization_id() {
            return _serialization_id;
        }
        
        void _serialize_body(x10aux::serialization_buffer &buf) {
            buf.write(this->idx137790);
            buf.write(this->i_range137794);
            buf.write(this->saved_this);
        }
        
        template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
            org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5* storage = x10aux::alloc<org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5>();
            buf.record_reference(storage);
            x10_int that_idx137790 = buf.read<x10_int>();
            x10::lang::LongRange that_i_range137794 = buf.read<x10::lang::LongRange>();
            org::scalegraph::io::impl::CSVWriter__ParallelWriter* that_saved_this = buf.read<org::scalegraph::io::impl::CSVWriter__ParallelWriter*>();
            org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5* this_ = new (storage) org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5(that_idx137790, that_i_range137794, that_saved_this);
            return this_;
        }
        
        org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5(x10_int idx137790, x10::lang::LongRange i_range137794, org::scalegraph::io::impl::CSVWriter__ParallelWriter* saved_this) : idx137790(idx137790), i_range137794(i_range137794), saved_this(saved_this) { }
        
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
    this->org::scalegraph::io::impl::CSVWriter__ParallelWriter::__fieldInitializers128871();
    
    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(frontBuffer) = org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder >::_make(((x10_long) (nthreads)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder> >(sizeof(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3)))org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__3())), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(backBuffer) = org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder >::_make(((x10_long) (nthreads)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::SStringBuilder> >(sizeof(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4)))org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__4())), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
    x10_int i129351max137771 = ((x10_int) ((nthreads) - (((x10_int)1))));
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
    {
        x10_int i137772;
        for (
             //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
             i137772 = ((x10_int)0); ((i137772) <= (i129351max137771));
             
             //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
             i137772 = ((x10_int) ((i137772) + (((x10_int)1))))) {
            
            //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            x10_int i137773 = i137772;
            
            //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderAdd_((__extension__ ({
                
                //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this137765 =
                  this->FMGL(frontBuffer);
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index137766 = i137773;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder ret137767;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this137765->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index137766) < (((x10_int)0))) ||
                        ((((x10_long) (index137766))) >= (this137765->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index137766), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret137767 = (this137765->FMGL(data))[index137766];
                ret137767;
            }))
            ,x10aux::makeStringLit(""));
            
            //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::StringBuilderAdd_((__extension__ ({
                
                //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this137768 =
                  this->FMGL(backBuffer);
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_int index137769 = i137773;
                
                //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder ret137770;
                {
                    
                    //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this137768->FMGL(data)).isValid()))
                    {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index137769) < (((x10_int)0))) ||
                        ((((x10_long) (index137769))) >= (this137768->
                                                            FMGL(data)->
                                                            FMGL(size))))
                    {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index137769), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret137770 = (this137768->FMGL(data))[index137769];
                ret137770;
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
                                   org::scalegraph::io::impl::CSVWriter__ParallelWriter* x137639 =
                                     this;
                                   
                                   //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Empty_c
                                   ;
                                   x10aux::nullCheck(x137639)->
                                     FMGL(numLauchTasks) =
                                     ((x10_int) ((x10aux::nullCheck(x137639)->
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
    x10::lang::LongRange range137804 = range;
    
    //#line 871 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size137800 = ((x10_long) ((((x10_long) ((range137804->
                                                        FMGL(max)) - (range137804->
                                                                        FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 872 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads137801 = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 873 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size137802 = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a137803 = ((x10_long) ((((x10_long) ((((x10_long) ((size137800) + (((x10_long) (nthreads137801)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads137801)))));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a137803) < (((x10_long)1ll))) ? (((x10_long)1ll))
          : (a137803);
    }))
    ;
    {
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var189 = x10::lang::Runtime::startFinish();
        {
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable137870 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i76030max137797 = ((x10_int) ((nthreads137801) - (((x10_int)1))));
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i137798;
                            for (
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i137798 = ((x10_int)0); ((i137798) <= (i76030max137797));
                                 
                                 //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i137798 = ((x10_int) ((i137798) + (((x10_int)1)))))
                            {
                                
                                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i137799 = i137798;
                                
                                //#line 875 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx137790 = i137799;
                                
                                //#line 876 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start137791 = (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a137792 = ((x10_long) ((range137804->
                                                                       FMGL(max)) + (((x10_long) (((x10_int)1))))));
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b137793 = ((x10_long) ((range137804->
                                                                       FMGL(min)) + (((x10_long) ((((x10_long) (i137799))) * (chunk_size137802))))));
                                    ((a137792) < (b137793))
                                      ? (a137792) : (b137793);
                                }))
                                ;
                                
                                //#line 877 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range137794 =
                                  x10::lang::LongRange::_make(i_start137791, (__extension__ ({
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long a137795 = range137804->
                                                         FMGL(max);
                                    
                                    //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
                                    x10_long b137796 = ((x10_long) ((((x10_long) ((i_start137791) + (chunk_size137802)))) - (((x10_long) (((x10_int)1))))));
                                    ((a137795) < (b137796))
                                      ? (a137795) : (b137796);
                                }))
                                );
                                
                                //#line 878 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5)))org_scalegraph_io_impl_CSVWriter__ParallelWriter__closure__5(idx137790, i_range137794, this))));
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
                    x10::lang::CheckedThrowable* formal137871 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1903);
                    {
                        
                        //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable137870 = formal137871;
                    }
                } else
                throw;
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable137870)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable137870))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable137870));
                }
                
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var189);
            }
            
            //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable137870)))
            {
                
                //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable137870)))
                {
                    
                    //#line 874 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable137870));
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
        x10::lang::LongRange i129406domain137815 = (__extension__ ({
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this137816 =
              this->FMGL(frontBuffer);
            x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this137816->
                                                                         FMGL(data)->
                                                                         FMGL(size)) - (((x10_long)1ll)))));
        }))
        ;
        
        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
        x10_long i129406max137817 = i129406domain137815->
                                      FMGL(max);
        
        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.For_c
        {
            x10_long i137818;
            for (
                 //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                 i137818 = ((x10_long)0ll); ((i137818) <= (i129406max137817));
                 
                 //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                 i137818 = ((x10_long) ((i137818) + (((x10_long)1ll)))))
            {
                
                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                x10_long tid137819 = i137818;
                
                //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> bytes137810 =
                  (__extension__ ({
                    
                    //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::SString this137811 =
                      (__extension__ ({
                          
                          //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this137812 =
                            this->FMGL(frontBuffer);
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          x10_long index137813 = tid137819;
                          
                          //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                          org::scalegraph::util::SStringBuilder ret137814;
                          {
                              
                              //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (!((this137812->FMGL(data)).isValid()))
                              {
                                  
                                  //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                                  }
                                  
                              }
                              
                              //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                              if (((index137813) < (((x10_long) (((x10_int)0))))) ||
                                  ((index137813) >= (this137812->
                                                       FMGL(data)->
                                                       FMGL(size))))
                              {
                                  
                                  //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                                  if (true) {
                                      
                                      //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                      x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index137813), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                                  }
                                  
                              }
                              
                          }
                          
                          //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                          ret137814 = (this137812->FMGL(data))[index137813];
                          ret137814;
                      }))
                      ->org::scalegraph::util::SStringBuilder::result();
                    this137811->FMGL(content);
                }))
                ;
                
                //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(this->FMGL(fw))->write(
                  bytes137810);
                
                //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder this137806 =
                  (__extension__ ({
                    
                    //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<org::scalegraph::util::SStringBuilder> this137807 =
                      this->FMGL(frontBuffer);
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index137808 = tid137819;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::SStringBuilder ret137809;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this137807->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index137808) < (((x10_long) (((x10_int)0))))) ||
                            ((index137808) >= (this137807->
                                                 FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index137808), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret137809 = (this137807->FMGL(data))[index137808];
                    ret137809;
                }))
                ;
                
                //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::GrowableMemory<x10_byte>* this137805 =
                  this137806->FMGL(buffer);
                
                //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
                x10aux::nullCheck(this137805)->FMGL(size) =
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
            x10::lang::CheckedThrowable* throwable137873 =
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
                                    x10_long a137699 = ((x10_long) ((start) + (((x10_long) (((x10_int) ((((x10_int)131072)) * (nthreads))))))));
                                    
                                    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
                                    x10_long b137700 = numLines;
                                    x10::util::Ordered<x10_long >::__lt(a137699, b137700)
                                      ? (a137699) : (b137700);
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
                    x10::lang::CheckedThrowable* formal137874 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc1909);
                    {
                        
                        //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable137873 = formal137874;
                    }
                } else
                throw;
            }
            
            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable137873)))
            {
                
                //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable137873))
                {
                    
                    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable137873));
                }
                
            }
            
            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var190);
            }
            
            //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable137873)))
            {
                
                //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable137873)))
                {
                    
                    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVWriter.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable137873));
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
void org::scalegraph::io::impl::CSVWriter__ParallelWriter::__fieldInitializers128871(
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
