#ifndef __ORG_SCALEGRAPH_UTIL_DIST2D__LOCALDATA_H
#define __ORG_SCALEGRAPH_UTIL_DIST2D__LOCALDATA_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace x10 { namespace array { 
class Point;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 

class Dist2D__LocalData   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::Dist2D__LocalData* operator->() { return this; }
    
    x10::array::Region* FMGL(mapping);
    
    x10_int FMGL(nreplica);
    
    x10::util::Team* FMGL(parentTeam);
    
    x10::util::Team* FMGL(allTeam);
    
    x10::lang::Cell<x10::util::Team*>* FMGL(rowTeam);
    
    x10::lang::Cell<x10::util::Team*>* FMGL(columnTeam);
    
    x10::array::Point* FMGL(herePt);
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::Dist2D__LocalData > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::Dist2D__LocalData _alloc(){org::scalegraph::util::Dist2D__LocalData t; return t; }
    
    void _constructor(x10::array::Region* mapping_, x10_int nreplica_, x10::util::Team* parentTeam_,
                      x10::util::Team* allTeam_, x10::lang::Cell<x10::util::Team*>* rowTeam_,
                      x10::lang::Cell<x10::util::Team*>* columnTeam_,
                      x10::array::Point* herePt_);
    
    static org::scalegraph::util::Dist2D__LocalData _make(
             x10::array::Region* mapping_, x10_int nreplica_,
             x10::util::Team* parentTeam_, x10::util::Team* allTeam_,
             x10::lang::Cell<x10::util::Team*>* rowTeam_,
             x10::lang::Cell<x10::util::Team*>* columnTeam_,
             x10::array::Point* herePt_);
    
    void _constructor();
    
    static org::scalegraph::util::Dist2D__LocalData _make(
             );
    
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::util::Dist2D__LocalData other) {
        
        //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(mapping),
                                      other->FMGL(mapping))) &&
        (x10aux::struct_equals((*this)->FMGL(nreplica), other->
                                                          FMGL(nreplica))) &&
        (x10aux::struct_equals((*this)->FMGL(parentTeam),
                               other->FMGL(parentTeam))) &&
        (x10aux::struct_equals((*this)->FMGL(allTeam), other->
                                                         FMGL(allTeam))) &&
        (x10aux::struct_equals((*this)->FMGL(rowTeam), other->
                                                         FMGL(rowTeam))) &&
        (x10aux::struct_equals((*this)->FMGL(columnTeam),
                               other->FMGL(columnTeam))) &&
        (x10aux::struct_equals((*this)->FMGL(herePt), other->
                                                        FMGL(herePt)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::Dist2D__LocalData other) {
        
        //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(mapping),
                                      other->FMGL(mapping))) &&
        (x10aux::struct_equals((*this)->FMGL(nreplica), other->
                                                          FMGL(nreplica))) &&
        (x10aux::struct_equals((*this)->FMGL(parentTeam),
                               other->FMGL(parentTeam))) &&
        (x10aux::struct_equals((*this)->FMGL(allTeam), other->
                                                         FMGL(allTeam))) &&
        (x10aux::struct_equals((*this)->FMGL(rowTeam), other->
                                                         FMGL(rowTeam))) &&
        (x10aux::struct_equals((*this)->FMGL(columnTeam),
                               other->FMGL(columnTeam))) &&
        (x10aux::struct_equals((*this)->FMGL(herePt), other->
                                                        FMGL(herePt)));
        
    }
    org::scalegraph::util::Dist2D__LocalData org__scalegraph__util__Dist2D__LocalData____this__org__scalegraph__util__Dist2D__LocalData(
      ) {
        
        //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    static void _serialize(org::scalegraph::util::Dist2D__LocalData this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::Dist2D__LocalData _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::Dist2D__LocalData this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_UTIL_DIST2D__LOCALDATA_H

namespace org { namespace scalegraph { namespace util { 
class Dist2D__LocalData;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_DIST2D__LOCALDATA_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DIST2D__LOCALDATA_H_NODEPS
#ifndef ORG_SCALEGRAPH_UTIL_DIST2D__LOCALDATA_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_DIST2D__LOCALDATA_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_DIST2D__LOCALDATA_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_DIST2D__LOCALDATA_H_NODEPS
