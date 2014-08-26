#ifndef __ORG_SCALEGRAPH_UTIL_DIST2D_H
#define __ORG_SCALEGRAPH_UTIL_DIST2D_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DIST2D__LOCALDATA_H_NODEPS
#include <org/scalegraph/util/Dist2D__LocalData.h>
#undef ORG_SCALEGRAPH_UTIL_DIST2D__LOCALDATA_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace array { 
class Point;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Box;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace graph { namespace id { 
class IdStruct;
} } } } 
namespace org { namespace scalegraph { namespace util { 
class MathAppend;
} } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace org { namespace scalegraph { namespace util { 

class Dist2D   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::Dist2D* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::Dist2D > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::Dist2D _alloc(){org::scalegraph::util::Dist2D t; return t; }
    
    static x10_int FMGL(DISTRIBUTE_ROWS);
    static void FMGL(DISTRIBUTE_ROWS__do_init)();
    static void FMGL(DISTRIBUTE_ROWS__init)();
    static volatile x10aux::StaticInitController::status FMGL(DISTRIBUTE_ROWS__status);
    static x10::lang::CheckedThrowable* FMGL(DISTRIBUTE_ROWS__exception);
    static x10_int FMGL(DISTRIBUTE_ROWS__get)();
    
    static x10_int FMGL(DISTRIBUTE_COLUMNS);
    static void FMGL(DISTRIBUTE_COLUMNS__do_init)();
    static void FMGL(DISTRIBUTE_COLUMNS__init)();
    static volatile x10aux::StaticInitController::status FMGL(DISTRIBUTE_COLUMNS__status);
    static x10::lang::CheckedThrowable* FMGL(DISTRIBUTE_COLUMNS__exception);
    static x10_int FMGL(DISTRIBUTE_COLUMNS__get)();
    
    x10::lang::PlaceLocalHandle<x10::lang::Cell<org::scalegraph::util::Dist2D__LocalData>*>
      FMGL(data);
    
    void _constructor(x10::array::Region* mapping, x10::util::Team* parentTeam,
                      x10_boolean oned);
    
    static org::scalegraph::util::Dist2D _make(x10::array::Region* mapping,
                                               x10::util::Team* parentTeam,
                                               x10_boolean oned);
    
    static org::scalegraph::util::Dist2D make2D(x10::util::Team* parentTeam,
                                                x10_int R, x10_int C);
    static org::scalegraph::util::Dist2D make2D(x10::util::Team* parentTeam,
                                                x10_int R);
    static org::scalegraph::util::Dist2D make2D(x10::util::Team* parentTeam,
                                                x10::array::Region* mapping);
    static org::scalegraph::util::Dist2D make1D(x10::util::Team* parentTeam,
                                                x10_int distributionMethod);
    static org::scalegraph::util::Dist2D make1D(x10::util::Team* parentTeam,
                                                x10::array::Region* mapping);
    x10_int R();
    x10_int C();
    x10_int Z();
    x10_int r();
    x10_int c();
    x10_int z();
    x10_int idx() {
        
        //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return ((x10_int) (((*this)->org::scalegraph::util::Dist2D::r()) + (((x10_int) (((*this)->org::scalegraph::util::Dist2D::c()) * ((*this)->org::scalegraph::util::Dist2D::R()))))));
        
    }
    x10_int numReplicas();
    x10::util::Team* parentTeam();
    x10::util::Team* allTeam();
    x10::util::Team* rowTeam();
    x10::util::Team* columnTeam();
    x10::lang::Place getCongruentPlace(x10_int z);
    org::scalegraph::graph::id::IdStruct getIds(x10_long numberOfVertices,
                                                x10_long numberOfLocalVertices,
                                                x10_boolean transpose);
    void del();
    x10::lang::String* toString();
    x10::lang::String* typeName();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::util::Dist2D other) {
        
        //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(data), other->
                                                             FMGL(data)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::Dist2D other) {
        
        //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(data), other->
                                                             FMGL(data)));
        
    }
    org::scalegraph::util::Dist2D org__scalegraph__util__Dist2D____this__org__scalegraph__util__Dist2D(
      ) {
        
        //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Dist2D.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    static void _serialize(org::scalegraph::util::Dist2D this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::Dist2D _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::Dist2D this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_UTIL_DIST2D_H

namespace org { namespace scalegraph { namespace util { 
class Dist2D;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_DIST2D_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DIST2D_H_NODEPS
#ifndef ORG_SCALEGRAPH_UTIL_DIST2D_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_DIST2D_H_GENERICS
inline x10_int org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_ROWS__get)() {
    if (FMGL(DISTRIBUTE_ROWS__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(DISTRIBUTE_ROWS__init)();
    }
    return org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_ROWS);
}

inline x10_int org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_COLUMNS__get)() {
    if (FMGL(DISTRIBUTE_COLUMNS__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(DISTRIBUTE_COLUMNS__init)();
    }
    return org::scalegraph::util::Dist2D::FMGL(DISTRIBUTE_COLUMNS);
}

#endif // ORG_SCALEGRAPH_UTIL_DIST2D_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_DIST2D_H_NODEPS
