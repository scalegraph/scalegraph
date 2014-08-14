/*************************************************/
/* START of SString */
#include <org/scalegraph/util/SString.h>

namespace org { namespace scalegraph { namespace util { 
class SString_ibox0 : public x10::lang::IBox<org::scalegraph::util::SString> {
public:
    static x10::lang::Any::itable<SString_ibox0 > itable;
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
x10::lang::Any::itable<SString_ibox0 >  SString_ibox0::itable(&SString_ibox0::equals, &SString_ibox0::hashCode, &SString_ibox0::toString, &SString_ibox0::typeName);
} } } 
x10::lang::Any::itable<org::scalegraph::util::SString >  org::scalegraph::util::SString::_itable_0(&org::scalegraph::util::SString::equals, &org::scalegraph::util::SString::hashCode, &org::scalegraph::util::SString::toString, &org::scalegraph::util::SString::typeName);
x10aux::itable_entry org::scalegraph::util::SString::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::SString::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::SString>())};
x10aux::itable_entry org::scalegraph::util::SString::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::SString_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::SString>())};

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10FieldDecl_c

//#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_byte * org::scalegraph::util::SString::nativeCstr(){
    return org::scalegraph::util::StringCstr_((*this));
}

//#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::SString::_constructor(x10::lang::String* str) {
    
    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.AssignPropertyCall_c
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(content) = org::scalegraph::util::StringFromX10String(str);
}
org::scalegraph::util::SString org::scalegraph::util::SString::_make(x10::lang::String* str)
{
    org::scalegraph::util::SString this_; 
    this_->_constructor(str);
    return this_;
}



//#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::SString::_constructor(org::scalegraph::util::MemoryChunk<x10_byte> str) {
    
    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.AssignPropertyCall_c
    
    //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((!x10aux::struct_equals(str->org::scalegraph::util::MemoryChunk<x10_byte>::getUnchecked(
                                                      str->org::scalegraph::util::MemoryChunk<x10_byte>::size()),
                                                    ((x10_byte)0))) ||
        (x10aux::struct_equals(str->org::scalegraph::util::MemoryChunk<x10_byte>::getUnchecked(
                                 str->org::scalegraph::util::MemoryChunk<x10_byte>::size()),
                               ((x10_byte)0))));
    #endif//NO_ASSERTIONS
    
    //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(content) = str;
}
org::scalegraph::util::SString org::scalegraph::util::SString::_make(
  org::scalegraph::util::MemoryChunk<x10_byte> str) {
    org::scalegraph::util::SString this_; 
    this_->_constructor(str);
    return this_;
}



//#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::SString::_constructor(org::scalegraph::util::MemoryChunk<x10_char> r) {
    
    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.AssignPropertyCall_c
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(content) = org::scalegraph::util::charsToUTF8_(r);
}
org::scalegraph::util::SString org::scalegraph::util::SString::_make(
  org::scalegraph::util::MemoryChunk<x10_char> r) {
    org::scalegraph::util::SString this_; 
    this_->_constructor(r);
    return this_;
}



//#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::__implicit_convert(
  x10::lang::String* str) {
    
    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc83468 =  org::scalegraph::util::SString::_alloc();
        
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        x10::lang::String* str120144 = str;
        
        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
        alloc83468->FMGL(content) = org::scalegraph::util::StringFromX10String(str120144);
        alloc83468;
    }))
    ;
    
}

//#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SString::equals(x10::lang::Any* that) {
    
    //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
    if (x10aux::instanceof<org::scalegraph::util::SString>(that))
    {
        
        //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return org::scalegraph::util::StringEqual_(((*this)).FMGL(content), (x10aux::class_cast<org::scalegraph::util::SString>(that)).FMGL(content));
        
    }
    
    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
    if (x10aux::instanceof<x10::lang::String*>(that)) {
        
        //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return org::scalegraph::util::StringEqual_(((*this)).FMGL(content), ((__extension__ ({
            
            //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SString alloc83469 =  org::scalegraph::util::SString::_alloc();
            
            //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* str120145 = x10aux::class_cast<x10::lang::String*>(that);
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
            alloc83469->FMGL(content) = org::scalegraph::util::StringFromX10String(str120145);
            alloc83469;
        }))
        ).FMGL(content));
        
    }
    
    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return false;
    
}

//#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SString::equals(org::scalegraph::util::SString that){
    return org::scalegraph::util::StringEqual_(((*this)).FMGL(content), (that).FMGL(content));
}

//#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::hashCode() {
    
    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_int hc = ((x10_int)0);
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i83480domain120149 = (__extension__ ({
        
        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_byte> this120150 =
          (*this)->FMGL(content);
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this120150->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_long i83480max120151 = i83480domain120149->FMGL(max);
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.For_c
    {
        x10_long i120152;
        for (
             //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
             i120152 = ((x10_long)0ll); ((i120152) <= (i83480max120151));
             
             //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
             i120152 = ((x10_long) ((i120152) + (((x10_long)1ll)))))
        {
            
            //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            x10_long i120153 = i120152;
            
            //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
            hc = ((x10_int) ((((x10_int) ((hc) * (((x10_int)31))))) + (((x10_int) ((__extension__ ({
                
                //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> this120146 =
                  (*this)->FMGL(content);
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index120147 = i120153;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_byte ret120148;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this120146->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index120147) < (((x10_long) (((x10_int)0))))) ||
                        ((index120147) >= (this120146->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index120147), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret120148 = (this120146->FMGL(data))[index120147];
                ret120148;
            }))
            )))));
        }
    }
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return hc;
    
}

//#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::SString::toString(
  ){
    return x10::lang::String::_make(reinterpret_cast<char*>(((*this)).c_str()), true);
}

//#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::size() {
    
    //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return ((x10_int) ((__extension__ ({
        
        //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_byte> this120083 =
          (*this)->FMGL(content);
        this120083->FMGL(data)->FMGL(size);
    }))
    ));
    
}

//#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::charsCount(){
    return org::scalegraph::util::UTF8charsCount_(((*this)).FMGL(content));
}

//#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::substring(
  x10_int fromIndex, x10_int toIndex) {
    
    //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc83470 =  org::scalegraph::util::SString::_alloc();
        
        //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorCall_c
        (alloc83470)->::org::scalegraph::util::SString::_constructor(
          (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (fromIndex)), ((x10_long) (((x10_int) ((toIndex) - (fromIndex)))))));
        alloc83470;
    }))
    ;
    
}

//#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::substring(
  x10_int fromIndex) {
    
    //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc83471 =  org::scalegraph::util::SString::_alloc();
        
        //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorCall_c
        (alloc83471)->::org::scalegraph::util::SString::_constructor(
          (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (fromIndex)), ((x10_long) (((__extension__ ({
                
                //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> this120084 =
                  (*this)->FMGL(content);
                this120084->FMGL(data)->FMGL(size);
            }))
            ) - (((x10_long) (fromIndex)))))));
        alloc83471;
    }))
    ;
    
}

//#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::indexOf(x10_char ch,
                                                x10_int idx){
    return org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), ch, idx);
}

//#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::indexOf(org::scalegraph::util::SString str,
                                                x10_int idx){
    return org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), (str).FMGL(content), idx);
}

//#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::lastIndexOf(x10_char ch,
                                                    x10_int idx){
    return org::scalegraph::util::StringLastIndexOf_(((*this)).FMGL(content), ch, idx);
}

//#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 134 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::lastIndexOf(org::scalegraph::util::SString str,
                                                    x10_int idx){
    return org::scalegraph::util::StringLastIndexOf_(((*this)).FMGL(content), (str).FMGL(content), idx);
}

//#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::replace(
  x10_char oldChar, x10_char newChar) {
    
    //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), oldChar, ((x10_int)0)),
                               ((x10_int)-1)))) {
        
        //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> new_char =
      org::scalegraph::util::charToUTF8_(newChar, org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (((x10_int)4))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__));
    
    //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::GrowableMemory<x10_byte>* buf =
       ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
    ;
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
    (buf)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
      ((x10_long)0ll));
    
    //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::grow(
      (__extension__ ({
          
          //#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
          org::scalegraph::util::MemoryChunk<x10_byte> this120086 =
            (*this)->FMGL(content);
          this120086->FMGL(data)->FMGL(size);
      }))
      );
    
    //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_int cur_pos = ((x10_int)0);
    
    //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        x10_int next_pos = org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), oldChar, cur_pos);
        
        //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(next_pos, ((x10_int)-1))))
        {
            
            //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.Branch_c
            break;
        }
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_byte> items120154 =
          (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (cur_pos)), ((x10_long) (((x10_int) ((next_pos) - (cur_pos))))));
        
        //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::GrowableMemory<x10_byte>::insert(
          buf->FMGL(size), items120154);
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_byte> items120155 =
          new_char;
        
        //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::GrowableMemory<x10_byte>::insert(
          buf->FMGL(size), items120155);
        
        //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
        cur_pos = ((x10_int) ((next_pos) + (org::scalegraph::util::UTF8CodeLength_((x10_byte)(__extension__ ({
            
            //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> this120094 =
              (*this)->FMGL(content);
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index120093 = next_pos;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_byte ret120095;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this120094->FMGL(data)).isValid()))
                {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index120093) < (((x10_int)0))) || ((((x10_long) (index120093))) >= (this120094->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index120093), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret120095 = (this120094->FMGL(data))[index120093];
            ret120095;
        }))
        ))));
    }
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> items120156 =
      (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
        ((x10_long) (cur_pos)), ((x10_long) (((__extension__ ({
            
            //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> this120157 =
              (*this)->FMGL(content);
            this120157->FMGL(data)->FMGL(size);
        }))
        ) - (((x10_long) (cur_pos))))));
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::insert(
      buf->FMGL(size), items120156);
    
    //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::add(
      ((x10_byte)0));
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (new_char->FMGL(data)).del();
    
    //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc83472 =  org::scalegraph::util::SString::_alloc();
        
        //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorCall_c
        (alloc83472)->::org::scalegraph::util::SString::_constructor(
          (__extension__ ({
              buf->FMGL(mc);
          }))
          ->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (((x10_int)0))), ((x10_long) (((__extension__ ({
                buf->FMGL(size);
            }))
            ) - (((x10_long) (((x10_int)1))))))));
        alloc83472;
    }))
    ;
    
}

//#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::replace(
  org::scalegraph::util::SString target, org::scalegraph::util::SString replacement) {
    
    //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), (target).FMGL(content), ((x10_int)0)),
                               ((x10_int)-1)))) {
        
        //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::GrowableMemory<x10_byte>* buf =
       ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
    ;
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
    (buf)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
      ((x10_long)0ll));
    
    //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::grow(
      (__extension__ ({
          
          //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
          org::scalegraph::util::MemoryChunk<x10_byte> this120104 =
            (*this)->FMGL(content);
          this120104->FMGL(data)->FMGL(size);
      }))
      );
    
    //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_int cur_pos = ((x10_int)0);
    
    //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        x10_int next_pos = org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), (target).FMGL(content), cur_pos);
        
        //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(next_pos, ((x10_int)-1))))
        {
            
            //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.Branch_c
            break;
        }
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_byte> items120158 =
          (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (cur_pos)), ((x10_long) (((x10_int) ((next_pos) - (cur_pos))))));
        
        //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::GrowableMemory<x10_byte>::insert(
          buf->FMGL(size), items120158);
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_byte> items120159 =
          replacement->FMGL(content);
        
        //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::GrowableMemory<x10_byte>::insert(
          buf->FMGL(size), items120159);
        
        //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
        cur_pos = ((x10_int) ((next_pos) + (target->org::scalegraph::util::SString::size())));
    }
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> items120160 =
      (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
        ((x10_long) (cur_pos)), ((x10_long) (((__extension__ ({
            
            //#line 172 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> this120161 =
              (*this)->FMGL(content);
            this120161->FMGL(data)->FMGL(size);
        }))
        ) - (((x10_long) (cur_pos))))));
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::insert(
      buf->FMGL(size), items120160);
    
    //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::add(
      ((x10_byte)0));
    
    //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc83473 =  org::scalegraph::util::SString::_alloc();
        
        //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorCall_c
        (alloc83473)->::org::scalegraph::util::SString::_constructor(
          (__extension__ ({
              buf->FMGL(mc);
          }))
          ->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (((x10_int)0))), ((x10_long) (((__extension__ ({
                buf->FMGL(size);
            }))
            ) - (((x10_long) (((x10_int)1))))))));
        alloc83473;
    }))
    ;
    
}

//#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString__TokenCollection<x10_char>
  org::scalegraph::util::SString::split(x10_char ch) {
    
    //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString__TokenCollection<x10_char> alloc83474 =
           org::scalegraph::util::SString__TokenCollection<x10_char>::_alloc();
        
        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString str_120165 = (*this);
        
        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        x10_char splitter_120166 = ch;
        
        //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
        alloc83474->FMGL(str) = str_120165;
        
        //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
        alloc83474->FMGL(splitter) = splitter_120166;
        alloc83474;
    }))
    ;
    
}

//#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString__TokenCollection<org::scalegraph::util::SString>
  org::scalegraph::util::SString::split(org::scalegraph::util::SString str) {
    
    //#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString__TokenCollection<org::scalegraph::util::SString> alloc83475 =
           org::scalegraph::util::SString__TokenCollection<org::scalegraph::util::SString>::_alloc();
        
        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString str_120167 = (*this);
        
        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString splitter_120168 = str;
        
        //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
        alloc83475->FMGL(str) = str_120167;
        
        //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
        alloc83475->FMGL(splitter) = splitter_120168;
        alloc83475;
    }))
    ;
    
}

//#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::trim(
  ) {
    
    //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_long length = (__extension__ ({
        
        //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_byte> this120125 =
          (*this)->FMGL(content);
        this120125->FMGL(data)->FMGL(size);
    }))
    ;
    
    //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_int start = ((x10_int)0);
    
    //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.For_c
    {
        for (; ((((x10_long) (start))) < (length)); 
                                                    //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
                                                    start =
                                                      ((x10_int) ((start) + (((x10_int)1)))))
        {
            
            //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
            if ((((__extension__ ({
                    
                    //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_byte> this120127 =
                      (*this)->FMGL(content);
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index120126 = start;
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_byte ret120128;
                    {
                        
                        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this120127->FMGL(data)).isValid()))
                        {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index120126) < (((x10_int)0))) ||
                            ((((x10_long) (index120126))) >= (this120127->
                                                                FMGL(data)->
                                                                FMGL(size))))
                        {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index120126), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret120128 = (this120127->FMGL(data))[index120126];
                    ret120128;
                }))
                ) > (((x10_byte)32)))) {
                
                //#line 214 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.Branch_c
                break;
            }
            
        }
    }
    
    //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.For_c
    {
        x10_int end;
        for (
             //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
             end = ((x10_int) ((((x10_int) (length))) - (((x10_int)1))));
             ((end) >= (start)); 
                                 //#line 217 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
                                 end = ((x10_int) ((end) - (((x10_int)1)))))
        {
            
            //#line 218 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
            if ((((__extension__ ({
                    
                    //#line 218 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_byte> this120138 =
                      (*this)->FMGL(content);
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index120137 = end;
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_byte ret120139;
                    {
                        
                        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this120138->FMGL(data)).isValid()))
                        {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index120137) < (((x10_int)0))) ||
                            ((((x10_long) (index120137))) >= (this120138->
                                                                FMGL(data)->
                                                                FMGL(size))))
                        {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index120137), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret120139 = (this120138->FMGL(data))[index120137];
                    ret120139;
                }))
                ) > (((x10_byte)32)))) {
                
                //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
                return (__extension__ ({
                    
                    //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::SString alloc83476 =
                       org::scalegraph::util::SString::_alloc();
                    
                    //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorCall_c
                    (alloc83476)->::org::scalegraph::util::SString::_constructor(
                      (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                        ((x10_long) (start)), ((x10_long) (((x10_int) ((((x10_int) ((end) + (((x10_int)1))))) - (start)))))));
                    alloc83476;
                }))
                ;
                
            }
            
        }
    }
    
    //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc83478 =  org::scalegraph::util::SString::_alloc();
        
        //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorCall_c
        (alloc83478)->::org::scalegraph::util::SString::_constructor(
          (__extension__ ({
              
              //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
              org::scalegraph::util::MemoryChunk<x10_byte> alloc83477 =
                 org::scalegraph::util::MemoryChunk<x10_byte>::_alloc();
              
              //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
              alloc83477->FMGL(data) = org::scalegraph::util::MCData_Impl<x10_byte >::_make(((x10_long)0ll), ((x10_int)0), false);
              alloc83477;
          }))
          );
        alloc83478;
    }))
    ;
    
}

//#line 225 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::compareTo(org::scalegraph::util::SString str){
    return org::scalegraph::util::StringCompare_(((*this)).FMGL(content), (str).FMGL(content));
}

//#line 228 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SString::startsWith(org::scalegraph::util::SString str){
    return org::scalegraph::util::StringStartsWith_(((*this)).FMGL(content), (str).FMGL(content));
}

//#line 231 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SString::endsWith(org::scalegraph::util::SString str){
    return org::scalegraph::util::StringEndsWith_(((*this)).FMGL(content), (str).FMGL(content));
}

//#line 235 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SString::toBoolean(){
    return org::scalegraph::util::StringToBoolean_(((*this)).FMGL(content));
}

//#line 238 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_float org::scalegraph::util::SString::toFloat(){
    return org::scalegraph::util::StringToFloat_(((*this)).FMGL(content));
}

//#line 241 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_double org::scalegraph::util::SString::toDouble(){
    return org::scalegraph::util::StringToDouble_(((*this)).FMGL(content));
}

//#line 244 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_byte org::scalegraph::util::SString::toByte(){
    return org::scalegraph::util::StringToByte_(((*this)).FMGL(content));
}

//#line 247 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_short org::scalegraph::util::SString::toShort(){
    return org::scalegraph::util::StringToShort_(((*this)).FMGL(content));
}

//#line 250 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::toInt(){
    return org::scalegraph::util::StringToInt_(((*this)).FMGL(content));
}

//#line 253 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::SString::toLong(){
    return org::scalegraph::util::StringToLong_(((*this)).FMGL(content));
}

//#line 256 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_ubyte org::scalegraph::util::SString::toUByte(){
    return org::scalegraph::util::StringToUByte_(((*this)).FMGL(content));
}

//#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_ushort org::scalegraph::util::SString::toUShort(){
    return org::scalegraph::util::StringToShort_(((*this)).FMGL(content));
}

//#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_uint org::scalegraph::util::SString::toUInt(){
    return org::scalegraph::util::StringToUInt_(((*this)).FMGL(content));
}

//#line 265 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_ulong org::scalegraph::util::SString::toULong(){
    return org::scalegraph::util::StringToULong_(((*this)).FMGL(content));
}

//#line 269 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 278 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 281 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 284 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SString::_helper(int sh, org::scalegraph::util::SStringBuilder sb) {
 
}

//#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::SString::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SString::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::SString>(other)))
    {
        
        //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString this120143 = (*this);
        
        //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString other120142 = x10aux::class_cast<org::scalegraph::util::SString>(other);
        (x10aux::struct_equals(this120143->FMGL(content),
                               other120142->FMGL(content)));
    }))
    ;
    
}

//#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SString::_serialize(org::scalegraph::util::SString this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(content));
    
}

void org::scalegraph::util::SString::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(content) = buf.read<org::scalegraph::util::MemoryChunk<x10_byte> >();
}


x10aux::RuntimeType org::scalegraph::util::SString::rtt;
void org::scalegraph::util::SString::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.util.SString",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
}

/* END of SString */
/*************************************************/
/*************************************************/
/* START of SString$TokenCollection */
#include <org/scalegraph/util/SString__TokenCollection.h>

x10aux::RuntimeType org::scalegraph::util::SString__TokenCollection<void>::rtt;

/* END of SString$TokenCollection */
/*************************************************/
