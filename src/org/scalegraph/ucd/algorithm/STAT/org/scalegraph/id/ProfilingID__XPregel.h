#ifndef __ORG_SCALEGRAPH_ID_PROFILINGID__XPREGEL_H
#define __ORG_SCALEGRAPH_ID_PROFILINGID__XPREGEL_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace org { namespace scalegraph { namespace id { 

class ProfilingID__XPregel : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_int FMGL(MAIN_FRAME);
    static void FMGL(MAIN_FRAME__do_init)();
    static void FMGL(MAIN_FRAME__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_FRAME__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_FRAME__exception);
    static x10_int FMGL(MAIN_FRAME__get)();
    
    static x10_int FMGL(MAIN_INIT);
    static void FMGL(MAIN_INIT__do_init)();
    static void FMGL(MAIN_INIT__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_INIT__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_INIT__exception);
    static x10_int FMGL(MAIN_INIT__get)();
    
    static x10_int FMGL(MAIN_COMPUTE);
    static void FMGL(MAIN_COMPUTE__do_init)();
    static void FMGL(MAIN_COMPUTE__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_COMPUTE__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_COMPUTE__exception);
    static x10_int FMGL(MAIN_COMPUTE__get)();
    
    static x10_int FMGL(MAIN_SQWEEZMES);
    static void FMGL(MAIN_SQWEEZMES__do_init)();
    static void FMGL(MAIN_SQWEEZMES__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_SQWEEZMES__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_SQWEEZMES__exception);
    static x10_int FMGL(MAIN_SQWEEZMES__get)();
    
    static x10_int FMGL(MAIN_UPDATE_OUT_EDGES_1);
    static void FMGL(MAIN_UPDATE_OUT_EDGES_1__do_init)();
    static void FMGL(MAIN_UPDATE_OUT_EDGES_1__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_UPDATE_OUT_EDGES_1__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_UPDATE_OUT_EDGES_1__exception);
    static x10_int FMGL(MAIN_UPDATE_OUT_EDGES_1__get)();
    
    static x10_int FMGL(MAIN_UPDATE_OUT_EDGES_2);
    static void FMGL(MAIN_UPDATE_OUT_EDGES_2__do_init)();
    static void FMGL(MAIN_UPDATE_OUT_EDGES_2__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_UPDATE_OUT_EDGES_2__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_UPDATE_OUT_EDGES_2__exception);
    static x10_int FMGL(MAIN_UPDATE_OUT_EDGES_2__get)();
    
    static x10_int FMGL(MAIN_AGGREGATE_COMPUTE);
    static void FMGL(MAIN_AGGREGATE_COMPUTE__do_init)();
    static void FMGL(MAIN_AGGREGATE_COMPUTE__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_AGGREGATE_COMPUTE__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_AGGREGATE_COMPUTE__exception);
    static x10_int FMGL(MAIN_AGGREGATE_COMPUTE__get)();
    
    static x10_int FMGL(MAIN_AGGREGATE_COMM);
    static void FMGL(MAIN_AGGREGATE_COMM__do_init)();
    static void FMGL(MAIN_AGGREGATE_COMM__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_AGGREGATE_COMM__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_AGGREGATE_COMM__exception);
    static x10_int FMGL(MAIN_AGGREGATE_COMM__get)();
    
    static x10_int FMGL(MAIN_PRE_PROCESS);
    static void FMGL(MAIN_PRE_PROCESS__do_init)();
    static void FMGL(MAIN_PRE_PROCESS__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_PRE_PROCESS__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_PRE_PROCESS__exception);
    static x10_int FMGL(MAIN_PRE_PROCESS__get)();
    
    static x10_int FMGL(MAIN_ALLGATHER_1);
    static void FMGL(MAIN_ALLGATHER_1__do_init)();
    static void FMGL(MAIN_ALLGATHER_1__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_ALLGATHER_1__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_ALLGATHER_1__exception);
    static x10_int FMGL(MAIN_ALLGATHER_1__get)();
    
    static x10_int FMGL(MAIN_PROCESS);
    static void FMGL(MAIN_PROCESS__do_init)();
    static void FMGL(MAIN_PROCESS__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_PROCESS__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_PROCESS__exception);
    static x10_int FMGL(MAIN_PROCESS__get)();
    
    static x10_int FMGL(MAIN_ALLGATHER_2);
    static void FMGL(MAIN_ALLGATHER_2__do_init)();
    static void FMGL(MAIN_ALLGATHER_2__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_ALLGATHER_2__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_ALLGATHER_2__exception);
    static x10_int FMGL(MAIN_ALLGATHER_2__get)();
    
    static x10_int FMGL(MAIN_COMM_COUNT);
    static void FMGL(MAIN_COMM_COUNT__do_init)();
    static void FMGL(MAIN_COMM_COUNT__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_COMM_COUNT__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_COMM_COUNT__exception);
    static x10_int FMGL(MAIN_COMM_COUNT__get)();
    
    static x10_int FMGL(MAIN_UC_COMM);
    static void FMGL(MAIN_UC_COMM__do_init)();
    static void FMGL(MAIN_UC_COMM__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_UC_COMM__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_UC_COMM__exception);
    static x10_int FMGL(MAIN_UC_COMM__get)();
    
    static x10_int FMGL(MAIN_UC_SORT);
    static void FMGL(MAIN_UC_SORT__do_init)();
    static void FMGL(MAIN_UC_SORT__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_UC_SORT__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_UC_SORT__exception);
    static x10_int FMGL(MAIN_UC_SORT__get)();
    
    static x10_int FMGL(MAIN_UC_MAKE_OFFSET);
    static void FMGL(MAIN_UC_MAKE_OFFSET__do_init)();
    static void FMGL(MAIN_UC_MAKE_OFFSET__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_UC_MAKE_OFFSET__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_UC_MAKE_OFFSET__exception);
    static x10_int FMGL(MAIN_UC_MAKE_OFFSET__get)();
    
    static x10_int FMGL(MAIN_BC_COMM_MES);
    static void FMGL(MAIN_BC_COMM_MES__do_init)();
    static void FMGL(MAIN_BC_COMM_MES__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_BC_COMM_MES__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_BC_COMM_MES__exception);
    static x10_int FMGL(MAIN_BC_COMM_MES__get)();
    
    static x10_int FMGL(MAIN_BC_COMM_MASK);
    static void FMGL(MAIN_BC_COMM_MASK__do_init)();
    static void FMGL(MAIN_BC_COMM_MASK__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_BC_COMM_MASK__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_BC_COMM_MASK__exception);
    static x10_int FMGL(MAIN_BC_COMM_MASK__get)();
    
    static x10_int FMGL(MAIN_BC_MAKE_OFFSET);
    static void FMGL(MAIN_BC_MAKE_OFFSET__do_init)();
    static void FMGL(MAIN_BC_MAKE_OFFSET__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_BC_MAKE_OFFSET__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_BC_MAKE_OFFSET__exception);
    static x10_int FMGL(MAIN_BC_MAKE_OFFSET__get)();
    
    static x10_int FMGL(MAIN_UPDATEINEDGE);
    static void FMGL(MAIN_UPDATEINEDGE__do_init)();
    static void FMGL(MAIN_UPDATEINEDGE__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_UPDATEINEDGE__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_UPDATEINEDGE__exception);
    static x10_int FMGL(MAIN_UPDATEINEDGE__get)();
    
    static x10_int FMGL(MAIN_OUTPUT);
    static void FMGL(MAIN_OUTPUT__do_init)();
    static void FMGL(MAIN_OUTPUT__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_OUTPUT__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_OUTPUT__exception);
    static x10_int FMGL(MAIN_OUTPUT__get)();
    
    static x10_int FMGL(MAIN_POINT_COUNT);
    static void FMGL(MAIN_POINT_COUNT__do_init)();
    static void FMGL(MAIN_POINT_COUNT__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_POINT_COUNT__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_POINT_COUNT__exception);
    static x10_int FMGL(MAIN_POINT_COUNT__get)();
    
    static x10_int FMGL(MAIN_TH_FRAME);
    static void FMGL(MAIN_TH_FRAME__do_init)();
    static void FMGL(MAIN_TH_FRAME__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_TH_FRAME__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_TH_FRAME__exception);
    static x10_int FMGL(MAIN_TH_FRAME__get)();
    
    static x10_int FMGL(MAIN_TH_COMPUTE);
    static void FMGL(MAIN_TH_COMPUTE__do_init)();
    static void FMGL(MAIN_TH_COMPUTE__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_TH_COMPUTE__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_TH_COMPUTE__exception);
    static x10_int FMGL(MAIN_TH_COMPUTE__get)();
    
    static x10_int FMGL(MAIN_TH_AGGREGATE);
    static void FMGL(MAIN_TH_AGGREGATE__do_init)();
    static void FMGL(MAIN_TH_AGGREGATE__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_TH_AGGREGATE__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_TH_AGGREGATE__exception);
    static x10_int FMGL(MAIN_TH_AGGREGATE__get)();
    
    static x10_int FMGL(MAIN_TH_COPY_OUT);
    static void FMGL(MAIN_TH_COPY_OUT__do_init)();
    static void FMGL(MAIN_TH_COPY_OUT__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_TH_COPY_OUT__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_TH_COPY_OUT__exception);
    static x10_int FMGL(MAIN_TH_COPY_OUT__get)();
    
    static x10_int FMGL(MAIN_TH_POINT_COUNT);
    static void FMGL(MAIN_TH_POINT_COUNT__do_init)();
    static void FMGL(MAIN_TH_POINT_COUNT__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_TH_POINT_COUNT__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_TH_POINT_COUNT__exception);
    static x10_int FMGL(MAIN_TH_POINT_COUNT__get)();
    
    static x10::array::Array<x10_int>* FMGL(FRAME_VECTOR);
    static void FMGL(FRAME_VECTOR__do_init)();
    static void FMGL(FRAME_VECTOR__init)();
    static volatile x10aux::StaticInitController::status FMGL(FRAME_VECTOR__status);
    static x10::lang::CheckedThrowable* FMGL(FRAME_VECTOR__exception);
    static x10::array::Array<x10_int>* FMGL(FRAME_VECTOR__get)();
    
    static x10::array::Array<x10::lang::String*>* FMGL(DESCRIPTION);
    static void FMGL(DESCRIPTION__do_init)();
    static void FMGL(DESCRIPTION__init)();
    static volatile x10aux::StaticInitController::status FMGL(DESCRIPTION__status);
    static x10::lang::CheckedThrowable* FMGL(DESCRIPTION__exception);
    static x10::array::Array<x10::lang::String*>* FMGL(DESCRIPTION__get)();
    
    virtual org::scalegraph::id::ProfilingID__XPregel* org__scalegraph__id__ProfilingID__XPregel____this__org__scalegraph__id__ProfilingID__XPregel(
      );
    void _constructor();
    
    static org::scalegraph::id::ProfilingID__XPregel* _make();
    
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_ID_PROFILINGID__XPREGEL_H

namespace org { namespace scalegraph { namespace id { 
class ProfilingID__XPregel;
} } } 

#ifndef ORG_SCALEGRAPH_ID_PROFILINGID__XPREGEL_H_NODEPS
#define ORG_SCALEGRAPH_ID_PROFILINGID__XPREGEL_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/array/Array.h>
#include <x10/lang/String.h>
#ifndef ORG_SCALEGRAPH_ID_PROFILINGID__XPREGEL_H_GENERICS
#define ORG_SCALEGRAPH_ID_PROFILINGID__XPREGEL_H_GENERICS
inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_FRAME__get)() {
    if (FMGL(MAIN_FRAME__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_FRAME__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_FRAME);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_INIT__get)() {
    if (FMGL(MAIN_INIT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_INIT__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_INIT);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMPUTE__get)() {
    if (FMGL(MAIN_COMPUTE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_COMPUTE__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMPUTE);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_SQWEEZMES__get)() {
    if (FMGL(MAIN_SQWEEZMES__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_SQWEEZMES__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_SQWEEZMES);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_1__get)() {
    if (FMGL(MAIN_UPDATE_OUT_EDGES_1__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_UPDATE_OUT_EDGES_1__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_1);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_2__get)() {
    if (FMGL(MAIN_UPDATE_OUT_EDGES_2__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_UPDATE_OUT_EDGES_2__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATE_OUT_EDGES_2);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMPUTE__get)() {
    if (FMGL(MAIN_AGGREGATE_COMPUTE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_AGGREGATE_COMPUTE__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMPUTE);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMM__get)() {
    if (FMGL(MAIN_AGGREGATE_COMM__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_AGGREGATE_COMM__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_AGGREGATE_COMM);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PRE_PROCESS__get)() {
    if (FMGL(MAIN_PRE_PROCESS__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_PRE_PROCESS__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PRE_PROCESS);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_1__get)() {
    if (FMGL(MAIN_ALLGATHER_1__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_ALLGATHER_1__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_1);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PROCESS__get)() {
    if (FMGL(MAIN_PROCESS__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_PROCESS__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_PROCESS);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_2__get)() {
    if (FMGL(MAIN_ALLGATHER_2__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_ALLGATHER_2__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_ALLGATHER_2);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMM_COUNT__get)() {
    if (FMGL(MAIN_COMM_COUNT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_COMM_COUNT__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_COMM_COUNT);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_COMM__get)() {
    if (FMGL(MAIN_UC_COMM__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_UC_COMM__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_COMM);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_SORT__get)() {
    if (FMGL(MAIN_UC_SORT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_UC_SORT__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_SORT);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_MAKE_OFFSET__get)() {
    if (FMGL(MAIN_UC_MAKE_OFFSET__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_UC_MAKE_OFFSET__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UC_MAKE_OFFSET);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MES__get)() {
    if (FMGL(MAIN_BC_COMM_MES__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_BC_COMM_MES__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MES);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MASK__get)() {
    if (FMGL(MAIN_BC_COMM_MASK__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_BC_COMM_MASK__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_COMM_MASK);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_MAKE_OFFSET__get)() {
    if (FMGL(MAIN_BC_MAKE_OFFSET__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_BC_MAKE_OFFSET__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_BC_MAKE_OFFSET);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATEINEDGE__get)() {
    if (FMGL(MAIN_UPDATEINEDGE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_UPDATEINEDGE__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_UPDATEINEDGE);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_OUTPUT__get)() {
    if (FMGL(MAIN_OUTPUT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_OUTPUT__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_OUTPUT);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_POINT_COUNT__get)() {
    if (FMGL(MAIN_POINT_COUNT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_POINT_COUNT__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_POINT_COUNT);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_FRAME__get)() {
    if (FMGL(MAIN_TH_FRAME__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_TH_FRAME__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_FRAME);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COMPUTE__get)() {
    if (FMGL(MAIN_TH_COMPUTE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_TH_COMPUTE__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COMPUTE);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_AGGREGATE__get)() {
    if (FMGL(MAIN_TH_AGGREGATE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_TH_AGGREGATE__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_AGGREGATE);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COPY_OUT__get)() {
    if (FMGL(MAIN_TH_COPY_OUT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_TH_COPY_OUT__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_COPY_OUT);
}

inline x10_int org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_POINT_COUNT__get)() {
    if (FMGL(MAIN_TH_POINT_COUNT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_TH_POINT_COUNT__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(MAIN_TH_POINT_COUNT);
}

inline x10::array::Array<x10_int>* org::scalegraph::id::ProfilingID__XPregel::FMGL(FRAME_VECTOR__get)() {
    if (FMGL(FRAME_VECTOR__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(FRAME_VECTOR__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(FRAME_VECTOR);
}

inline x10::array::Array<x10::lang::String*>* org::scalegraph::id::ProfilingID__XPregel::FMGL(DESCRIPTION__get)() {
    if (FMGL(DESCRIPTION__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(DESCRIPTION__init)();
    }
    return org::scalegraph::id::ProfilingID__XPregel::FMGL(DESCRIPTION);
}

#endif // ORG_SCALEGRAPH_ID_PROFILINGID__XPREGEL_H_GENERICS
#endif // __ORG_SCALEGRAPH_ID_PROFILINGID__XPREGEL_H_NODEPS
