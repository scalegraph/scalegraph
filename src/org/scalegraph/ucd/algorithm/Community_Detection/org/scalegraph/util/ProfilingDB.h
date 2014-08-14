#ifndef __ORG_SCALEGRAPH_UTIL_PROFILINGDB_H
#define __ORG_SCALEGRAPH_UTIL_PROFILINGDB_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
#include <org/scalegraph/util/Team2.h>
#undef ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
#include <org/scalegraph/util/Team2.h>
#undef ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace util { 
class ProfilingDB__DB;
} } } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace org { namespace scalegraph { 
class Config;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace util { 
class ProfilingDB__Timer;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace lang { 
class BadPlaceException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace org { namespace scalegraph { namespace util { 
class SStringBuilder;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace compiler { 
class Ifndef;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryPointer;
} } } 
namespace org { namespace scalegraph { namespace test { 
class STest;
} } } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace org { namespace scalegraph { namespace util { 

class ProfilingDB   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::ProfilingDB* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::ProfilingDB > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::ProfilingDB _alloc(){org::scalegraph::util::ProfilingDB t; return t; }
    
    static x10_int FMGL(TH_AVG_TIME);
    static void FMGL(TH_AVG_TIME__do_init)();
    static void FMGL(TH_AVG_TIME__init)();
    static volatile x10aux::StaticInitController::status FMGL(TH_AVG_TIME__status);
    static x10::lang::CheckedThrowable* FMGL(TH_AVG_TIME__exception);
    static x10_int FMGL(TH_AVG_TIME__get)();
    
    static x10_int FMGL(TH_AVG_CALL);
    static void FMGL(TH_AVG_CALL__do_init)();
    static void FMGL(TH_AVG_CALL__init)();
    static volatile x10aux::StaticInitController::status FMGL(TH_AVG_CALL__status);
    static x10::lang::CheckedThrowable* FMGL(TH_AVG_CALL__exception);
    static x10_int FMGL(TH_AVG_CALL__get)();
    
    static x10_int FMGL(TH_MIN_TIME);
    static void FMGL(TH_MIN_TIME__do_init)();
    static void FMGL(TH_MIN_TIME__init)();
    static volatile x10aux::StaticInitController::status FMGL(TH_MIN_TIME__status);
    static x10::lang::CheckedThrowable* FMGL(TH_MIN_TIME__exception);
    static x10_int FMGL(TH_MIN_TIME__get)();
    
    static x10_int FMGL(TH_MIN_CALL);
    static void FMGL(TH_MIN_CALL__do_init)();
    static void FMGL(TH_MIN_CALL__init)();
    static volatile x10aux::StaticInitController::status FMGL(TH_MIN_CALL__status);
    static x10::lang::CheckedThrowable* FMGL(TH_MIN_CALL__exception);
    static x10_int FMGL(TH_MIN_CALL__get)();
    
    static x10_int FMGL(TH_MAX_TIME);
    static void FMGL(TH_MAX_TIME__do_init)();
    static void FMGL(TH_MAX_TIME__init)();
    static volatile x10aux::StaticInitController::status FMGL(TH_MAX_TIME__status);
    static x10::lang::CheckedThrowable* FMGL(TH_MAX_TIME__exception);
    static x10_int FMGL(TH_MAX_TIME__get)();
    
    static x10_int FMGL(TH_MAX_CALL);
    static void FMGL(TH_MAX_CALL__do_init)();
    static void FMGL(TH_MAX_CALL__init)();
    static volatile x10aux::StaticInitController::status FMGL(TH_MAX_CALL__status);
    static x10::lang::CheckedThrowable* FMGL(TH_MAX_CALL__exception);
    static x10_int FMGL(TH_MAX_CALL__get)();
    
    static x10_int FMGL(TH_STDDEV_TIME);
    static void FMGL(TH_STDDEV_TIME__do_init)();
    static void FMGL(TH_STDDEV_TIME__init)();
    static volatile x10aux::StaticInitController::status FMGL(TH_STDDEV_TIME__status);
    static x10::lang::CheckedThrowable* FMGL(TH_STDDEV_TIME__exception);
    static x10_int FMGL(TH_STDDEV_TIME__get)();
    
    static x10_int FMGL(PROC_AVG_TIME);
    static void FMGL(PROC_AVG_TIME__do_init)();
    static void FMGL(PROC_AVG_TIME__init)();
    static volatile x10aux::StaticInitController::status FMGL(PROC_AVG_TIME__status);
    static x10::lang::CheckedThrowable* FMGL(PROC_AVG_TIME__exception);
    static x10_int FMGL(PROC_AVG_TIME__get)();
    
    static x10_int FMGL(PROC_AVG_CALL);
    static void FMGL(PROC_AVG_CALL__do_init)();
    static void FMGL(PROC_AVG_CALL__init)();
    static volatile x10aux::StaticInitController::status FMGL(PROC_AVG_CALL__status);
    static x10::lang::CheckedThrowable* FMGL(PROC_AVG_CALL__exception);
    static x10_int FMGL(PROC_AVG_CALL__get)();
    
    static x10_int FMGL(PROC_MIN_TIME);
    static void FMGL(PROC_MIN_TIME__do_init)();
    static void FMGL(PROC_MIN_TIME__init)();
    static volatile x10aux::StaticInitController::status FMGL(PROC_MIN_TIME__status);
    static x10::lang::CheckedThrowable* FMGL(PROC_MIN_TIME__exception);
    static x10_int FMGL(PROC_MIN_TIME__get)();
    
    static x10_int FMGL(PROC_MIN_CALL);
    static void FMGL(PROC_MIN_CALL__do_init)();
    static void FMGL(PROC_MIN_CALL__init)();
    static volatile x10aux::StaticInitController::status FMGL(PROC_MIN_CALL__status);
    static x10::lang::CheckedThrowable* FMGL(PROC_MIN_CALL__exception);
    static x10_int FMGL(PROC_MIN_CALL__get)();
    
    static x10_int FMGL(PROC_MAX_TIME);
    static void FMGL(PROC_MAX_TIME__do_init)();
    static void FMGL(PROC_MAX_TIME__init)();
    static volatile x10aux::StaticInitController::status FMGL(PROC_MAX_TIME__status);
    static x10::lang::CheckedThrowable* FMGL(PROC_MAX_TIME__exception);
    static x10_int FMGL(PROC_MAX_TIME__get)();
    
    static x10_int FMGL(PROC_MAX_CALL);
    static void FMGL(PROC_MAX_CALL__do_init)();
    static void FMGL(PROC_MAX_CALL__init)();
    static volatile x10aux::StaticInitController::status FMGL(PROC_MAX_CALL__status);
    static x10::lang::CheckedThrowable* FMGL(PROC_MAX_CALL__exception);
    static x10_int FMGL(PROC_MAX_CALL__get)();
    
    static x10_int FMGL(PROC_STDDEV_TIME);
    static void FMGL(PROC_STDDEV_TIME__do_init)();
    static void FMGL(PROC_STDDEV_TIME__init)();
    static volatile x10aux::StaticInitController::status FMGL(PROC_STDDEV_TIME__status);
    static x10::lang::CheckedThrowable* FMGL(PROC_STDDEV_TIME__exception);
    static x10_int FMGL(PROC_STDDEV_TIME__get)();
    
    static x10_int FMGL(CPU_TIME_TOTAL);
    static void FMGL(CPU_TIME_TOTAL__do_init)();
    static void FMGL(CPU_TIME_TOTAL__init)();
    static volatile x10aux::StaticInitController::status FMGL(CPU_TIME_TOTAL__status);
    static x10::lang::CheckedThrowable* FMGL(CPU_TIME_TOTAL__exception);
    static x10_int FMGL(CPU_TIME_TOTAL__get)();
    
    static x10_int FMGL(PROC_TIME_TOTAL);
    static void FMGL(PROC_TIME_TOTAL__do_init)();
    static void FMGL(PROC_TIME_TOTAL__init)();
    static volatile x10aux::StaticInitController::status FMGL(PROC_TIME_TOTAL__status);
    static x10::lang::CheckedThrowable* FMGL(PROC_TIME_TOTAL__exception);
    static x10_int FMGL(PROC_TIME_TOTAL__get)();
    
    static x10_int FMGL(REAL_TIME_TOTAL);
    static void FMGL(REAL_TIME_TOTAL__do_init)();
    static void FMGL(REAL_TIME_TOTAL__init)();
    static volatile x10aux::StaticInitController::status FMGL(REAL_TIME_TOTAL__status);
    static x10::lang::CheckedThrowable* FMGL(REAL_TIME_TOTAL__exception);
    static x10_int FMGL(REAL_TIME_TOTAL__get)();
    
    static x10_int FMGL(TOTAL_CALL);
    static void FMGL(TOTAL_CALL__do_init)();
    static void FMGL(TOTAL_CALL__init)();
    static volatile x10aux::StaticInitController::status FMGL(TOTAL_CALL__status);
    static x10::lang::CheckedThrowable* FMGL(TOTAL_CALL__exception);
    static x10_int FMGL(TOTAL_CALL__get)();
    
    static x10_int FMGL(RES_COUNT);
    static void FMGL(RES_COUNT__do_init)();
    static void FMGL(RES_COUNT__init)();
    static volatile x10aux::StaticInitController::status FMGL(RES_COUNT__status);
    static x10::lang::CheckedThrowable* FMGL(RES_COUNT__exception);
    static x10_int FMGL(RES_COUNT__get)();
    
    org::scalegraph::util::Team2 FMGL(team);
    
    x10::lang::PlaceLocalHandle<org::scalegraph::util::ProfilingDB__DB*> FMGL(plh);
    
    void _constructor(x10::array::Array<x10_int>* numPoints);
    
    static org::scalegraph::util::ProfilingDB _make(x10::array::Array<x10_int>* numPoints);
    
    void _constructor(x10::util::Team* team, x10::array::Array<x10_int>* numPoints);
    
    static org::scalegraph::util::ProfilingDB _make(x10::util::Team* team,
                                                    x10::array::Array<x10_int>* numPoints);
    
    org::scalegraph::util::ProfilingDB__Timer timer(x10_int frameIndex, x10_long tid);
    void finishStepWithAll();
    void finishStep();
    org::scalegraph::util::MemoryChunk<x10_double> result();
    org::scalegraph::util::SString resultString(x10::array::Array<x10::lang::String*>* names);
    org::scalegraph::util::SString detailedResultString(x10::array::Array<x10::lang::String*>* names);
    void finishStepAndPrint(x10_boolean detail, x10::lang::String* title,
                            x10::array::Array<x10::lang::String*>* names);
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::util::ProfilingDB other) {
        
        //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(team), other->FMGL(team))) &&
        (x10aux::struct_equals((*this)->FMGL(plh), other->FMGL(plh)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::ProfilingDB other) {
        
        //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(team), other->
                                                             FMGL(team))) &&
        (x10aux::struct_equals((*this)->FMGL(plh), other->FMGL(plh)));
        
    }
    org::scalegraph::util::ProfilingDB org__scalegraph__util__ProfilingDB____this__org__scalegraph__util__ProfilingDB(
      ) {
        
        //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/ProfilingDB.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    static void _serialize(org::scalegraph::util::ProfilingDB this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::ProfilingDB _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::ProfilingDB this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_UTIL_PROFILINGDB_H

namespace org { namespace scalegraph { namespace util { 
class ProfilingDB;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_PROFILINGDB_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_PROFILINGDB_H_NODEPS
#ifndef ORG_SCALEGRAPH_UTIL_PROFILINGDB_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_PROFILINGDB_H_GENERICS
inline x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_TIME__get)() {
    if (FMGL(TH_AVG_TIME__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(TH_AVG_TIME__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_TIME);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_CALL__get)() {
    if (FMGL(TH_AVG_CALL__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(TH_AVG_CALL__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(TH_AVG_CALL);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_TIME__get)() {
    if (FMGL(TH_MIN_TIME__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(TH_MIN_TIME__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_TIME);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_CALL__get)() {
    if (FMGL(TH_MIN_CALL__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(TH_MIN_CALL__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(TH_MIN_CALL);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_TIME__get)() {
    if (FMGL(TH_MAX_TIME__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(TH_MAX_TIME__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_TIME);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_CALL__get)() {
    if (FMGL(TH_MAX_CALL__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(TH_MAX_CALL__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(TH_MAX_CALL);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(TH_STDDEV_TIME__get)() {
    if (FMGL(TH_STDDEV_TIME__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(TH_STDDEV_TIME__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(TH_STDDEV_TIME);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_TIME__get)() {
    if (FMGL(PROC_AVG_TIME__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(PROC_AVG_TIME__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_TIME);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_CALL__get)() {
    if (FMGL(PROC_AVG_CALL__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(PROC_AVG_CALL__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(PROC_AVG_CALL);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_TIME__get)() {
    if (FMGL(PROC_MIN_TIME__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(PROC_MIN_TIME__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_TIME);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_CALL__get)() {
    if (FMGL(PROC_MIN_CALL__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(PROC_MIN_CALL__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(PROC_MIN_CALL);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_TIME__get)() {
    if (FMGL(PROC_MAX_TIME__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(PROC_MAX_TIME__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_TIME);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_CALL__get)() {
    if (FMGL(PROC_MAX_CALL__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(PROC_MAX_CALL__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(PROC_MAX_CALL);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_STDDEV_TIME__get)() {
    if (FMGL(PROC_STDDEV_TIME__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(PROC_STDDEV_TIME__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(PROC_STDDEV_TIME);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(CPU_TIME_TOTAL__get)() {
    if (FMGL(CPU_TIME_TOTAL__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(CPU_TIME_TOTAL__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(CPU_TIME_TOTAL);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(PROC_TIME_TOTAL__get)() {
    if (FMGL(PROC_TIME_TOTAL__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(PROC_TIME_TOTAL__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(PROC_TIME_TOTAL);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(REAL_TIME_TOTAL__get)() {
    if (FMGL(REAL_TIME_TOTAL__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(REAL_TIME_TOTAL__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(REAL_TIME_TOTAL);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(TOTAL_CALL__get)() {
    if (FMGL(TOTAL_CALL__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(TOTAL_CALL__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(TOTAL_CALL);
}

inline x10_int org::scalegraph::util::ProfilingDB::FMGL(RES_COUNT__get)() {
    if (FMGL(RES_COUNT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(RES_COUNT__init)();
    }
    return org::scalegraph::util::ProfilingDB::FMGL(RES_COUNT);
}

#endif // ORG_SCALEGRAPH_UTIL_PROFILINGDB_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_PROFILINGDB_H_NODEPS
