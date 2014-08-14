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
        org::scalegraph::util::SString alloc84707 =  org::scalegraph::util::SString::_alloc();
        
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        x10::lang::String* str121428 = str;
        
        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84707->FMGL(content) = org::scalegraph::util::StringFromX10String(str121428);
        alloc84707;
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
            org::scalegraph::util::SString alloc84708 =  org::scalegraph::util::SString::_alloc();
            
            //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* str121429 = x10aux::class_cast<x10::lang::String*>(that);
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
            alloc84708->FMGL(content) = org::scalegraph::util::StringFromX10String(str121429);
            alloc84708;
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
    x10::lang::LongRange i84719domain121433 = (__extension__ ({
        
        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_byte> this121434 =
          (*this)->FMGL(content);
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this121434->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_long i84719max121435 = i84719domain121433->FMGL(max);
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.For_c
    {
        x10_long i121436;
        for (
             //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
             i121436 = ((x10_long)0ll); ((i121436) <= (i84719max121435));
             
             //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
             i121436 = ((x10_long) ((i121436) + (((x10_long)1ll)))))
        {
            
            //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            x10_long i121437 = i121436;
            
            //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
            hc = ((x10_int) ((((x10_int) ((hc) * (((x10_int)31))))) + (((x10_int) ((__extension__ ({
                
                //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> this121430 =
                  (*this)->FMGL(content);
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_long index121431 = i121437;
                
                //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                x10_byte ret121432;
                {
                    
                    //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (!((this121430->FMGL(data)).isValid()))
                    {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                        }
                        
                    }
                    
                    //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (((index121431) < (((x10_long) (((x10_int)0))))) ||
                        ((index121431) >= (this121430->FMGL(data)->
                                             FMGL(size))))
                    {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121431), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                        }
                        
                    }
                    
                }
                
                //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                ret121432 = (this121430->FMGL(data))[index121431];
                ret121432;
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
        org::scalegraph::util::MemoryChunk<x10_byte> this121367 =
          (*this)->FMGL(content);
        this121367->FMGL(data)->FMGL(size);
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
        org::scalegraph::util::SString alloc84709 =  org::scalegraph::util::SString::_alloc();
        
        //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorCall_c
        (alloc84709)->::org::scalegraph::util::SString::_constructor(
          (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (fromIndex)), ((x10_long) (((x10_int) ((toIndex) - (fromIndex)))))));
        alloc84709;
    }))
    ;
    
}

//#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::substring(
  x10_int fromIndex) {
    
    //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc84710 =  org::scalegraph::util::SString::_alloc();
        
        //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorCall_c
        (alloc84710)->::org::scalegraph::util::SString::_constructor(
          (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (fromIndex)), ((x10_long) (((__extension__ ({
                
                //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> this121368 =
                  (*this)->FMGL(content);
                this121368->FMGL(data)->FMGL(size);
            }))
            ) - (((x10_long) (fromIndex)))))));
        alloc84710;
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
          org::scalegraph::util::MemoryChunk<x10_byte> this121370 =
            (*this)->FMGL(content);
          this121370->FMGL(data)->FMGL(size);
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
        org::scalegraph::util::MemoryChunk<x10_byte> items121438 =
          (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (cur_pos)), ((x10_long) (((x10_int) ((next_pos) - (cur_pos))))));
        
        //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::GrowableMemory<x10_byte>::insert(
          buf->FMGL(size), items121438);
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_byte> items121439 =
          new_char;
        
        //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::GrowableMemory<x10_byte>::insert(
          buf->FMGL(size), items121439);
        
        //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
        cur_pos = ((x10_int) ((next_pos) + (org::scalegraph::util::UTF8CodeLength_((x10_byte)(__extension__ ({
            
            //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> this121378 =
              (*this)->FMGL(content);
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index121377 = next_pos;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_byte ret121379;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this121378->FMGL(data)).isValid()))
                {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index121377) < (((x10_int)0))) || ((((x10_long) (index121377))) >= (this121378->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121377), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret121379 = (this121378->FMGL(data))[index121377];
            ret121379;
        }))
        ))));
    }
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> items121440 =
      (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
        ((x10_long) (cur_pos)), ((x10_long) (((__extension__ ({
            
            //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> this121441 =
              (*this)->FMGL(content);
            this121441->FMGL(data)->FMGL(size);
        }))
        ) - (((x10_long) (cur_pos))))));
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::insert(
      buf->FMGL(size), items121440);
    
    //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::add(
      ((x10_byte)0));
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (new_char->FMGL(data)).del();
    
    //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc84711 =  org::scalegraph::util::SString::_alloc();
        
        //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorCall_c
        (alloc84711)->::org::scalegraph::util::SString::_constructor(
          (__extension__ ({
              buf->FMGL(mc);
          }))
          ->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (((x10_int)0))), ((x10_long) (((__extension__ ({
                buf->FMGL(size);
            }))
            ) - (((x10_long) (((x10_int)1))))))));
        alloc84711;
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
          org::scalegraph::util::MemoryChunk<x10_byte> this121388 =
            (*this)->FMGL(content);
          this121388->FMGL(data)->FMGL(size);
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
        org::scalegraph::util::MemoryChunk<x10_byte> items121442 =
          (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (cur_pos)), ((x10_long) (((x10_int) ((next_pos) - (cur_pos))))));
        
        //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::GrowableMemory<x10_byte>::insert(
          buf->FMGL(size), items121442);
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_byte> items121443 =
          replacement->FMGL(content);
        
        //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::GrowableMemory<x10_byte>::insert(
          buf->FMGL(size), items121443);
        
        //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
        cur_pos = ((x10_int) ((next_pos) + (target->org::scalegraph::util::SString::size())));
    }
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> items121444 =
      (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
        ((x10_long) (cur_pos)), ((x10_long) (((__extension__ ({
            
            //#line 172 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> this121445 =
              (*this)->FMGL(content);
            this121445->FMGL(data)->FMGL(size);
        }))
        ) - (((x10_long) (cur_pos))))));
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::insert(
      buf->FMGL(size), items121444);
    
    //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::add(
      ((x10_byte)0));
    
    //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc84712 =  org::scalegraph::util::SString::_alloc();
        
        //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorCall_c
        (alloc84712)->::org::scalegraph::util::SString::_constructor(
          (__extension__ ({
              buf->FMGL(mc);
          }))
          ->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (((x10_int)0))), ((x10_long) (((__extension__ ({
                buf->FMGL(size);
            }))
            ) - (((x10_long) (((x10_int)1))))))));
        alloc84712;
    }))
    ;
    
}

//#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString__TokenCollection<x10_char>
  org::scalegraph::util::SString::split(x10_char ch) {
    
    //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString__TokenCollection<x10_char> alloc84713 =
           org::scalegraph::util::SString__TokenCollection<x10_char>::_alloc();
        
        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString str_121449 = (*this);
        
        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        x10_char splitter_121450 = ch;
        
        //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84713->FMGL(str) = str_121449;
        
        //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84713->FMGL(splitter) = splitter_121450;
        alloc84713;
    }))
    ;
    
}

//#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString__TokenCollection<org::scalegraph::util::SString>
  org::scalegraph::util::SString::split(org::scalegraph::util::SString str) {
    
    //#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString__TokenCollection<org::scalegraph::util::SString> alloc84714 =
           org::scalegraph::util::SString__TokenCollection<org::scalegraph::util::SString>::_alloc();
        
        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString str_121451 = (*this);
        
        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString splitter_121452 = str;
        
        //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84714->FMGL(str) = str_121451;
        
        //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
        alloc84714->FMGL(splitter) = splitter_121452;
        alloc84714;
    }))
    ;
    
}

//#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::trim(
  ) {
    
    //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_long length = (__extension__ ({
        
        //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_byte> this121409 =
          (*this)->FMGL(content);
        this121409->FMGL(data)->FMGL(size);
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
                    org::scalegraph::util::MemoryChunk<x10_byte> this121411 =
                      (*this)->FMGL(content);
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index121410 = start;
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_byte ret121412;
                    {
                        
                        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this121411->FMGL(data)).isValid()))
                        {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index121410) < (((x10_int)0))) ||
                            ((((x10_long) (index121410))) >= (this121411->
                                                                FMGL(data)->
                                                                FMGL(size))))
                        {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121410), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret121412 = (this121411->FMGL(data))[index121410];
                    ret121412;
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
                    org::scalegraph::util::MemoryChunk<x10_byte> this121422 =
                      (*this)->FMGL(content);
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_int index121421 = end;
                    
                    //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_byte ret121423;
                    {
                        
                        //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((this121422->FMGL(data)).isValid()))
                        {
                            
                            //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index121421) < (((x10_int)0))) ||
                            ((((x10_long) (index121421))) >= (this121422->
                                                                FMGL(data)->
                                                                FMGL(size))))
                        {
                            
                            //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121421), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret121423 = (this121422->FMGL(data))[index121421];
                    ret121423;
                }))
                ) > (((x10_byte)32)))) {
                
                //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
                return (__extension__ ({
                    
                    //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::SString alloc84715 =
                       org::scalegraph::util::SString::_alloc();
                    
                    //#line 219 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorCall_c
                    (alloc84715)->::org::scalegraph::util::SString::_constructor(
                      (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                        ((x10_long) (start)), ((x10_long) (((x10_int) ((((x10_int) ((end) + (((x10_int)1))))) - (start)))))));
                    alloc84715;
                }))
                ;
                
            }
            
        }
    }
    
    //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc84717 =  org::scalegraph::util::SString::_alloc();
        
        //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorCall_c
        (alloc84717)->::org::scalegraph::util::SString::_constructor(
          (__extension__ ({
              
              //#line 222 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
              org::scalegraph::util::MemoryChunk<x10_byte> alloc84716 =
                 org::scalegraph::util::MemoryChunk<x10_byte>::_alloc();
              
              //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10FieldAssign_c
              alloc84716->FMGL(data) = org::scalegraph::util::MCData_Impl<x10_byte >::_make(((x10_long)0ll), ((x10_int)0), false);
              alloc84716;
          }))
          );
        alloc84717;
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
        org::scalegraph::util::SString this121427 = (*this);
        
        //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString other121426 = x10aux::class_cast<org::scalegraph::util::SString>(other);
        (x10aux::struct_equals(this121427->FMGL(content),
                               other121426->FMGL(content)));
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
