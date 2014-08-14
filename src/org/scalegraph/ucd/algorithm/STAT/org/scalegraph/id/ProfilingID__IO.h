#ifndef __ORG_SCALEGRAPH_ID_PROFILINGID__IO_H
#define __ORG_SCALEGRAPH_ID_PROFILINGID__IO_H

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

class ProfilingID__IO : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_int FMGL(MAIN_FRAME);
    static void FMGL(MAIN_FRAME__do_init)();
    static void FMGL(MAIN_FRAME__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_FRAME__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_FRAME__exception);
    static x10_int FMGL(MAIN_FRAME__get)();
    
    static x10_int FMGL(MAIN_READ_HEADER);
    static void FMGL(MAIN_READ_HEADER__do_init)();
    static void FMGL(MAIN_READ_HEADER__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_READ_HEADER__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_READ_HEADER__exception);
    static x10_int FMGL(MAIN_READ_HEADER__get)();
    
    static x10_int FMGL(MAIN_PREPARE);
    static void FMGL(MAIN_PREPARE__do_init)();
    static void FMGL(MAIN_PREPARE__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_PREPARE__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_PREPARE__exception);
    static x10_int FMGL(MAIN_PREPARE__get)();
    
    static x10_int FMGL(MAIN_SPLIT_PLACE_DIST);
    static void FMGL(MAIN_SPLIT_PLACE_DIST__do_init)();
    static void FMGL(MAIN_SPLIT_PLACE_DIST__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_SPLIT_PLACE_DIST__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_SPLIT_PLACE_DIST__exception);
    static x10_int FMGL(MAIN_SPLIT_PLACE_DIST__get)();
    
    static x10_int FMGL(MAIN_SPLIT_THREAD_DIST);
    static void FMGL(MAIN_SPLIT_THREAD_DIST__do_init)();
    static void FMGL(MAIN_SPLIT_THREAD_DIST__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_SPLIT_THREAD_DIST__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_SPLIT_THREAD_DIST__exception);
    static x10_int FMGL(MAIN_SPLIT_THREAD_DIST__get)();
    
    static x10_int FMGL(MAIN_READ_FILE);
    static void FMGL(MAIN_READ_FILE__do_init)();
    static void FMGL(MAIN_READ_FILE__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_READ_FILE__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_READ_FILE__exception);
    static x10_int FMGL(MAIN_READ_FILE__get)();
    
    static x10_int FMGL(MAIN_WAIT_SUBTASK);
    static void FMGL(MAIN_WAIT_SUBTASK__do_init)();
    static void FMGL(MAIN_WAIT_SUBTASK__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_WAIT_SUBTASK__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_WAIT_SUBTASK__exception);
    static x10_int FMGL(MAIN_WAIT_SUBTASK__get)();
    
    static x10_int FMGL(MAIN_WAIT_LASTTASK);
    static void FMGL(MAIN_WAIT_LASTTASK__do_init)();
    static void FMGL(MAIN_WAIT_LASTTASK__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_WAIT_LASTTASK__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_WAIT_LASTTASK__exception);
    static x10_int FMGL(MAIN_WAIT_LASTTASK__get)();
    
    static x10_int FMGL(MAIN_MERGE_RESULT);
    static void FMGL(MAIN_MERGE_RESULT__do_init)();
    static void FMGL(MAIN_MERGE_RESULT__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_MERGE_RESULT__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_MERGE_RESULT__exception);
    static x10_int FMGL(MAIN_MERGE_RESULT__get)();
    
    static x10_int FMGL(MAIN_MAKE_STRING);
    static void FMGL(MAIN_MAKE_STRING__do_init)();
    static void FMGL(MAIN_MAKE_STRING__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_MAKE_STRING__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_MAKE_STRING__exception);
    static x10_int FMGL(MAIN_MAKE_STRING__get)();
    
    static x10_int FMGL(MAIN_WRITE_WAIT);
    static void FMGL(MAIN_WRITE_WAIT__do_init)();
    static void FMGL(MAIN_WRITE_WAIT__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_WRITE_WAIT__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_WRITE_WAIT__exception);
    static x10_int FMGL(MAIN_WRITE_WAIT__get)();
    
    static x10_int FMGL(MAIN_LAST_WRITE_WAIT);
    static void FMGL(MAIN_LAST_WRITE_WAIT__do_init)();
    static void FMGL(MAIN_LAST_WRITE_WAIT__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_LAST_WRITE_WAIT__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_LAST_WRITE_WAIT__exception);
    static x10_int FMGL(MAIN_LAST_WRITE_WAIT__get)();
    
    static x10_int FMGL(MAIN_CLOSE);
    static void FMGL(MAIN_CLOSE__do_init)();
    static void FMGL(MAIN_CLOSE__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_CLOSE__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_CLOSE__exception);
    static x10_int FMGL(MAIN_CLOSE__get)();
    
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
    
    static x10_int FMGL(MAIN_TH_PARSE);
    static void FMGL(MAIN_TH_PARSE__do_init)();
    static void FMGL(MAIN_TH_PARSE__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_TH_PARSE__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_TH_PARSE__exception);
    static x10_int FMGL(MAIN_TH_PARSE__get)();
    
    static x10_int FMGL(MAIN_TH_MAKE_STRING);
    static void FMGL(MAIN_TH_MAKE_STRING__do_init)();
    static void FMGL(MAIN_TH_MAKE_STRING__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_TH_MAKE_STRING__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_TH_MAKE_STRING__exception);
    static x10_int FMGL(MAIN_TH_MAKE_STRING__get)();
    
    static x10_int FMGL(MAIN_TH_POINT_COUNT);
    static void FMGL(MAIN_TH_POINT_COUNT__do_init)();
    static void FMGL(MAIN_TH_POINT_COUNT__init)();
    static volatile x10aux::StaticInitController::status FMGL(MAIN_TH_POINT_COUNT__status);
    static x10::lang::CheckedThrowable* FMGL(MAIN_TH_POINT_COUNT__exception);
    static x10_int FMGL(MAIN_TH_POINT_COUNT__get)();
    
    static x10_int FMGL(SUB_FRAME);
    static void FMGL(SUB_FRAME__do_init)();
    static void FMGL(SUB_FRAME__init)();
    static volatile x10aux::StaticInitController::status FMGL(SUB_FRAME__status);
    static x10::lang::CheckedThrowable* FMGL(SUB_FRAME__exception);
    static x10_int FMGL(SUB_FRAME__get)();
    
    static x10_int FMGL(SUB_PARSE);
    static void FMGL(SUB_PARSE__do_init)();
    static void FMGL(SUB_PARSE__init)();
    static volatile x10aux::StaticInitController::status FMGL(SUB_PARSE__status);
    static x10::lang::CheckedThrowable* FMGL(SUB_PARSE__exception);
    static x10_int FMGL(SUB_PARSE__get)();
    
    static x10_int FMGL(SUB_WRITE);
    static void FMGL(SUB_WRITE__do_init)();
    static void FMGL(SUB_WRITE__init)();
    static volatile x10aux::StaticInitController::status FMGL(SUB_WRITE__status);
    static x10::lang::CheckedThrowable* FMGL(SUB_WRITE__exception);
    static x10_int FMGL(SUB_WRITE__get)();
    
    static x10_int FMGL(SUB_POINT_COUNT);
    static void FMGL(SUB_POINT_COUNT__do_init)();
    static void FMGL(SUB_POINT_COUNT__init)();
    static volatile x10aux::StaticInitController::status FMGL(SUB_POINT_COUNT__status);
    static x10::lang::CheckedThrowable* FMGL(SUB_POINT_COUNT__exception);
    static x10_int FMGL(SUB_POINT_COUNT__get)();
    
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
    
    virtual org::scalegraph::id::ProfilingID__IO* org__scalegraph__id__ProfilingID__IO____this__org__scalegraph__id__ProfilingID__IO(
      );
    void _constructor();
    
    static org::scalegraph::id::ProfilingID__IO* _make();
    
    
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
#endif // ORG_SCALEGRAPH_ID_PROFILINGID__IO_H

namespace org { namespace scalegraph { namespace id { 
class ProfilingID__IO;
} } } 

#ifndef ORG_SCALEGRAPH_ID_PROFILINGID__IO_H_NODEPS
#define ORG_SCALEGRAPH_ID_PROFILINGID__IO_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/array/Array.h>
#include <x10/lang/String.h>
#ifndef ORG_SCALEGRAPH_ID_PROFILINGID__IO_H_GENERICS
#define ORG_SCALEGRAPH_ID_PROFILINGID__IO_H_GENERICS
inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_FRAME__get)() {
    if (FMGL(MAIN_FRAME__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_FRAME__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_FRAME);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_HEADER__get)() {
    if (FMGL(MAIN_READ_HEADER__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_READ_HEADER__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_HEADER);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_PREPARE__get)() {
    if (FMGL(MAIN_PREPARE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_PREPARE__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_PREPARE);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_PLACE_DIST__get)() {
    if (FMGL(MAIN_SPLIT_PLACE_DIST__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_SPLIT_PLACE_DIST__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_PLACE_DIST);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_THREAD_DIST__get)() {
    if (FMGL(MAIN_SPLIT_THREAD_DIST__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_SPLIT_THREAD_DIST__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_SPLIT_THREAD_DIST);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_FILE__get)() {
    if (FMGL(MAIN_READ_FILE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_READ_FILE__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_READ_FILE);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_SUBTASK__get)() {
    if (FMGL(MAIN_WAIT_SUBTASK__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_WAIT_SUBTASK__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_SUBTASK);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_LASTTASK__get)() {
    if (FMGL(MAIN_WAIT_LASTTASK__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_WAIT_LASTTASK__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WAIT_LASTTASK);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MERGE_RESULT__get)() {
    if (FMGL(MAIN_MERGE_RESULT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_MERGE_RESULT__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MERGE_RESULT);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MAKE_STRING__get)() {
    if (FMGL(MAIN_MAKE_STRING__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_MAKE_STRING__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_MAKE_STRING);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WRITE_WAIT__get)() {
    if (FMGL(MAIN_WRITE_WAIT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_WRITE_WAIT__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_WRITE_WAIT);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_LAST_WRITE_WAIT__get)() {
    if (FMGL(MAIN_LAST_WRITE_WAIT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_LAST_WRITE_WAIT__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_LAST_WRITE_WAIT);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_CLOSE__get)() {
    if (FMGL(MAIN_CLOSE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_CLOSE__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_CLOSE);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_POINT_COUNT__get)() {
    if (FMGL(MAIN_POINT_COUNT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_POINT_COUNT__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_POINT_COUNT);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_FRAME__get)() {
    if (FMGL(MAIN_TH_FRAME__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_TH_FRAME__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_FRAME);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_PARSE__get)() {
    if (FMGL(MAIN_TH_PARSE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_TH_PARSE__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_PARSE);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_MAKE_STRING__get)() {
    if (FMGL(MAIN_TH_MAKE_STRING__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_TH_MAKE_STRING__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_MAKE_STRING);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_POINT_COUNT__get)() {
    if (FMGL(MAIN_TH_POINT_COUNT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(MAIN_TH_POINT_COUNT__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(MAIN_TH_POINT_COUNT);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(SUB_FRAME__get)() {
    if (FMGL(SUB_FRAME__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(SUB_FRAME__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(SUB_FRAME);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(SUB_PARSE__get)() {
    if (FMGL(SUB_PARSE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(SUB_PARSE__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(SUB_PARSE);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(SUB_WRITE__get)() {
    if (FMGL(SUB_WRITE__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(SUB_WRITE__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(SUB_WRITE);
}

inline x10_int org::scalegraph::id::ProfilingID__IO::FMGL(SUB_POINT_COUNT__get)() {
    if (FMGL(SUB_POINT_COUNT__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(SUB_POINT_COUNT__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(SUB_POINT_COUNT);
}

inline x10::array::Array<x10_int>* org::scalegraph::id::ProfilingID__IO::FMGL(FRAME_VECTOR__get)() {
    if (FMGL(FRAME_VECTOR__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(FRAME_VECTOR__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(FRAME_VECTOR);
}

inline x10::array::Array<x10::lang::String*>* org::scalegraph::id::ProfilingID__IO::FMGL(DESCRIPTION__get)() {
    if (FMGL(DESCRIPTION__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(DESCRIPTION__init)();
    }
    return org::scalegraph::id::ProfilingID__IO::FMGL(DESCRIPTION);
}

#endif // ORG_SCALEGRAPH_ID_PROFILINGID__IO_H_GENERICS
#endif // __ORG_SCALEGRAPH_ID_PROFILINGID__IO_H_NODEPS
