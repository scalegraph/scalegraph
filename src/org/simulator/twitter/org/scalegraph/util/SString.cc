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

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10FieldDecl_c

//#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_byte * org::scalegraph::util::SString::nativeCstr(){
    return org::scalegraph::util::StringCstr_((*this));
}

//#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::SString::_constructor(x10::lang::String* str) {
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.Empty_c
    ;
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.AssignPropertyCall_c
    
    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(content) = org::scalegraph::util::StringFromX10String(str);
}
org::scalegraph::util::SString org::scalegraph::util::SString::_make(x10::lang::String* str)
{
    org::scalegraph::util::SString this_; 
    this_->_constructor(str);
    return this_;
}



//#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::SString::_constructor(org::scalegraph::util::MemoryChunk<x10_byte> str) {
    
    //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.Empty_c
    ;
    
    //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.AssignPropertyCall_c
    
    //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((!x10aux::struct_equals(str->org::scalegraph::util::MemoryChunk<x10_byte>::getUnchecked(
                                                      str->org::scalegraph::util::MemoryChunk<x10_byte>::size()),
                                                    ((x10_byte)0))) ||
        (x10aux::struct_equals(str->org::scalegraph::util::MemoryChunk<x10_byte>::getUnchecked(
                                 str->org::scalegraph::util::MemoryChunk<x10_byte>::size()),
                               ((x10_byte)0))));
    #endif//NO_ASSERTIONS
    
    //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(content) = str;
}
org::scalegraph::util::SString org::scalegraph::util::SString::_make(
  org::scalegraph::util::MemoryChunk<x10_byte> str) {
    org::scalegraph::util::SString this_; 
    this_->_constructor(str);
    return this_;
}



//#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::SString::_constructor(org::scalegraph::util::MemoryChunk<x10_char> r) {
    
    //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.Empty_c
    ;
    
    //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.AssignPropertyCall_c
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(content) = org::scalegraph::util::charsToUTF8_(r);
}
org::scalegraph::util::SString org::scalegraph::util::SString::_make(
  org::scalegraph::util::MemoryChunk<x10_char> r) {
    org::scalegraph::util::SString this_; 
    this_->_constructor(r);
    return this_;
}



//#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::__implicit_convert(
  x10::lang::String* str) {
    
    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return org::scalegraph::util::SString::_make(str);
    
}

//#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SString::equals(x10::lang::Any* that) {
    
    //#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
    if (x10aux::instanceof<org::scalegraph::util::SString>(that))
    {
        
        //#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return org::scalegraph::util::StringEqual_(((*this)).FMGL(content), (x10aux::class_cast<org::scalegraph::util::SString>(that)).FMGL(content));
        
    }
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
    if (x10aux::instanceof<x10::lang::String*>(that)) {
        
        //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return org::scalegraph::util::StringEqual_(((*this)).FMGL(content), (org::scalegraph::util::SString::_make(x10aux::class_cast<x10::lang::String*>(that))).FMGL(content));
        
    }
    
    //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return false;
    
}

//#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SString::equals(org::scalegraph::util::SString that){
    return org::scalegraph::util::StringEqual_(((*this)).FMGL(content), (that).FMGL(content));
}

//#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::hashCode() {
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_int hc = ((x10_int)0);
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i49758domain49778 = (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::range();
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_long i49758min49779 = i49758domain49778->FMGL(min);
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_long i49758max49780 = i49758domain49778->FMGL(max);
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.For_c
    {
        x10_long i49781;
        for (
             //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
             i49781 = i49758min49779; ((i49781) <= (i49758max49780));
             
             //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
             i49781 = ((x10_long) ((i49781) + (((x10_long)1ll)))))
        {
            
            //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            x10_long i49782 = i49781;
            
            //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
            hc = ((x10_int) ((((x10_int) ((hc) * (((x10_int)31))))) + (((x10_int) ((*this)->
                                                                                     FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::__apply(
                                                                                     i49782))))));
        }
    }
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return hc;
    
}

//#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::SString::toString(
  ){
    return x10::lang::String::_make(reinterpret_cast<char*>(((*this)).c_str()), true);
}

//#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::size() {
    
    //#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return ((x10_int) ((*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::size()));
    
}

//#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::charsCount(){
    return org::scalegraph::util::UTF8charsCount_(((*this)).FMGL(content));
}

//#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::substring(
  x10_int fromIndex, x10_int toIndex) {
    
    //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return org::scalegraph::util::SString::_make((*this)->
                                                   FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                                                   ((x10_long) (fromIndex)),
                                                   ((x10_long) (((x10_int) ((toIndex) - (fromIndex)))))));
    
}

//#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::substring(
  x10_int fromIndex) {
    
    //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return org::scalegraph::util::SString::_make((*this)->
                                                   FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                                                   ((x10_long) (fromIndex)),
                                                   ((x10_long) (((*this)->
                                                                   FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::size()) - (((x10_long) (fromIndex)))))));
    
}

//#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::indexOf(x10_char ch,
                                                x10_int idx){
    return org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), ch, idx);
}

//#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::indexOf(org::scalegraph::util::SString str,
                                                x10_int idx){
    return org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), (str).FMGL(content), idx);
}

//#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::lastIndexOf(x10_char ch,
                                                    x10_int idx){
    return org::scalegraph::util::StringLastIndexOf_(((*this)).FMGL(content), ch, idx);
}

//#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::lastIndexOf(org::scalegraph::util::SString str,
                                                    x10_int idx){
    return org::scalegraph::util::StringLastIndexOf_(((*this)).FMGL(content), (str).FMGL(content), idx);
}

//#line 137 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::replace(
  x10_char oldChar, x10_char newChar) {
    
    //#line 139 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), oldChar, ((x10_int)0)),
                               ((x10_int)-1)))) {
        
        //#line 139 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    //#line 141 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> new_char =
      org::scalegraph::util::charToUTF8_(newChar, org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (((x10_int)4))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__));
    
    //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::GrowableMemory<x10_byte>* buf =
      org::scalegraph::util::GrowableMemory<x10_byte>::_make();
    
    //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::grow(
      (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::size());
    
    //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_int cur_pos = ((x10_int)0);
    
    //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        x10_int next_pos = org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), oldChar, cur_pos);
        
        //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(next_pos, ((x10_int)-1))))
        {
            
            //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.Branch_c
            break;
        }
        
        //#line 148 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::GrowableMemory<x10_byte>::add(
          (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (cur_pos)), ((x10_long) (((x10_int) ((next_pos) - (cur_pos)))))));
        
        //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::GrowableMemory<x10_byte>::add(
          new_char);
        
        //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
        cur_pos = ((x10_int) ((next_pos) + (org::scalegraph::util::UTF8CodeLength_((x10_byte)(*this)->
                                                                                               FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::__apply(
                                                                                               next_pos)))));
    }
    
    //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::add(
      (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
        ((x10_long) (cur_pos)), ((x10_long) (((*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::size()) - (((x10_long) (cur_pos)))))));
    
    //#line 153 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::add(
      ((x10_byte)0));
    
    //#line 154 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
    new_char->org::scalegraph::util::MemoryChunk<x10_byte>::del();
    
    //#line 155 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return org::scalegraph::util::SString::_make(buf->org::scalegraph::util::GrowableMemory<x10_byte>::backingStore()->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                                                   ((x10_long) (((x10_int)0))),
                                                   ((x10_long) ((buf->org::scalegraph::util::GrowableMemory<x10_byte>::size()) - (((x10_long) (((x10_int)1))))))));
    
}

//#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::replace(
  org::scalegraph::util::SString target, org::scalegraph::util::SString replacement) {
    
    //#line 160 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), (target).FMGL(content), ((x10_int)0)),
                               ((x10_int)-1)))) {
        
        //#line 160 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::GrowableMemory<x10_byte>* buf =
      org::scalegraph::util::GrowableMemory<x10_byte>::_make();
    
    //#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::grow(
      (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::size());
    
    //#line 164 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_int cur_pos = ((x10_int)0);
    
    //#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        x10_int next_pos = org::scalegraph::util::StringIndexOf_(((*this)).FMGL(content), (target).FMGL(content), cur_pos);
        
        //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(next_pos, ((x10_int)-1))))
        {
            
            //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.Branch_c
            break;
        }
        
        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::GrowableMemory<x10_byte>::add(
          (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (cur_pos)), ((x10_long) (((x10_int) ((next_pos) - (cur_pos)))))));
        
        //#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::GrowableMemory<x10_byte>::add(
          replacement->FMGL(content));
        
        //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
        cur_pos = ((x10_int) ((next_pos) + (target->org::scalegraph::util::SString::size())));
    }
    
    //#line 172 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::add(
      (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
        ((x10_long) (cur_pos)), ((x10_long) (((*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::size()) - (((x10_long) (cur_pos)))))));
    
    //#line 173 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10Call_c
    buf->org::scalegraph::util::GrowableMemory<x10_byte>::add(
      ((x10_byte)0));
    
    //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return org::scalegraph::util::SString::_make(buf->org::scalegraph::util::GrowableMemory<x10_byte>::backingStore()->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                                                   ((x10_long) (((x10_int)0))),
                                                   ((x10_long) ((buf->org::scalegraph::util::GrowableMemory<x10_byte>::size()) - (((x10_long) (((x10_int)1))))))));
    
}

//#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString__TokenCollection<x10_char>
  org::scalegraph::util::SString::split(x10_char ch) {
    
    //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return org::scalegraph::util::SString__TokenCollection<x10_char>::_make((*this),
                                                                            ch);
    
}

//#line 207 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString__TokenCollection<org::scalegraph::util::SString>
  org::scalegraph::util::SString::split(org::scalegraph::util::SString str) {
    
    //#line 207 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return org::scalegraph::util::SString__TokenCollection<org::scalegraph::util::SString>::_make((*this),
                                                                                                  str);
    
}

//#line 209 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SString::trim(
  ) {
    
    //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_long length = (*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::size();
    
    //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_int start = ((x10_int)0);
    
    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.For_c
    {
        for (; ((((x10_long) (start))) < (length)); 
                                                    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
                                                    start =
                                                      ((x10_int) ((start) + (((x10_int)1)))))
        {
            
            //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
            if ((((*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::__apply(
                    start)) > (((x10_byte)32)))) {
                
                //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.Branch_c
                break;
            }
            
        }
    }
    
    //#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.For_c
    {
        x10_int end;
        for (
             //#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
             end = ((x10_int) ((((x10_int) (length))) - (((x10_int)1))));
             ((end) >= (start)); 
                                 //#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
                                 end = ((x10_int) ((end) - (((x10_int)1)))))
        {
            
            //#line 218 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
            if ((((*this)->FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::__apply(
                    end)) > (((x10_byte)32)))) {
                
                //#line 219 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
                return org::scalegraph::util::SString::_make((*this)->
                                                               FMGL(content)->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                                                               ((x10_long) (start)),
                                                               ((x10_long) (((x10_int) ((((x10_int) ((end) + (((x10_int)1))))) - (start)))))));
                
            }
            
        }
    }
    
    //#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return org::scalegraph::util::SString::_make(org::scalegraph::util::MemoryChunk<x10_byte>::_make());
    
}

//#line 225 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::compareTo(org::scalegraph::util::SString str){
    return org::scalegraph::util::StringCompare_(((*this)).FMGL(content), (str).FMGL(content));
}

//#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SString::startsWith(org::scalegraph::util::SString str){
    return org::scalegraph::util::StringStartsWith_(((*this)).FMGL(content), (str).FMGL(content));
}

//#line 231 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SString::endsWith(org::scalegraph::util::SString str){
    return org::scalegraph::util::StringEndsWith_(((*this)).FMGL(content), (str).FMGL(content));
}

//#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SString::toBoolean(){
    return org::scalegraph::util::StringToBoolean_(((*this)).FMGL(content));
}

//#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_float org::scalegraph::util::SString::toFloat(){
    return org::scalegraph::util::StringToFloat_(((*this)).FMGL(content));
}

//#line 241 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_double org::scalegraph::util::SString::toDouble(){
    return org::scalegraph::util::StringToDouble_(((*this)).FMGL(content));
}

//#line 244 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_byte org::scalegraph::util::SString::toByte(){
    return org::scalegraph::util::StringToByte_(((*this)).FMGL(content));
}

//#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_short org::scalegraph::util::SString::toShort(){
    return org::scalegraph::util::StringToShort_(((*this)).FMGL(content));
}

//#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SString::toInt(){
    return org::scalegraph::util::StringToInt_(((*this)).FMGL(content));
}

//#line 253 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::SString::toLong(){
    return org::scalegraph::util::StringToLong_(((*this)).FMGL(content));
}

//#line 256 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_ubyte org::scalegraph::util::SString::toUByte(){
    return org::scalegraph::util::StringToUByte_(((*this)).FMGL(content));
}

//#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_ushort org::scalegraph::util::SString::toUShort(){
    return org::scalegraph::util::StringToShort_(((*this)).FMGL(content));
}

//#line 262 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_uint org::scalegraph::util::SString::toUInt(){
    return org::scalegraph::util::StringToUInt_(((*this)).FMGL(content));
}

//#line 265 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_ulong org::scalegraph::util::SString::toULong(){
    return org::scalegraph::util::StringToULong_(((*this)).FMGL(content));
}

//#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 272 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 275 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 281 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 284 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 287 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SString::_helper(int sh, org::scalegraph::util::SStringBuilder sb) {
 
}

//#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::SString::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SString::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::SString>(other)))
    {
        
        //#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::SString::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::SString>(other));
    
}

//#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c

//#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
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
