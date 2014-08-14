#ifndef __ORG_SCALEGRAPH_CONFIG_H
#define __ORG_SCALEGRAPH_CONFIG_H

#include <x10rt.h>


#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DIST2D_H_NODEPS
#include <org/scalegraph/util/Dist2D.h>
#undef ORG_SCALEGRAPH_UTIL_DIST2D_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_DIST2D_H_NODEPS
#include <org/scalegraph/util/Dist2D.h>
#undef ORG_SCALEGRAPH_UTIL_DIST2D_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_PROFILINGDB_H_NODEPS
#include <org/scalegraph/util/ProfilingDB.h>
#undef ORG_SCALEGRAPH_UTIL_PROFILINGDB_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_PROFILINGDB_H_NODEPS
#include <org/scalegraph/util/ProfilingDB.h>
#undef ORG_SCALEGRAPH_UTIL_PROFILINGDB_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class BadPlaceException;
} } 
namespace x10 { namespace lang { 
class IllegalOperationException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace org { namespace scalegraph { namespace util { 
class MathAppend;
} } } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace util { 
class StopWatch;
} } } 
namespace x10 { namespace compiler { 
class Ifdef;
} } 
namespace x10 { namespace compiler { 
class Uninitialized;
} } 
namespace org { namespace scalegraph { namespace id { 
class ProfilingID__XPregel;
} } } 
namespace org { namespace scalegraph { 

class Config : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10::lang::Cell<org::scalegraph::Config*>* FMGL(instance);
    static void FMGL(instance__do_init)();
    static void FMGL(instance__init)();
    static volatile x10aux::StaticInitController::status FMGL(instance__status);
    static x10::lang::CheckedThrowable* FMGL(instance__exception);
    static x10::lang::Cell<org::scalegraph::Config*>* FMGL(instance__get)();
    
    static void canInitConfig(x10_boolean checkInstance);
    static void broadcast(org::scalegraph::Config* cfg);
    static org::scalegraph::Config* get();
    static void init(x10::util::Team* worldTeam, org::scalegraph::util::Dist2D distForXPregel,
                     org::scalegraph::util::Dist2D distForBLAS);
    static void del();
    x10_boolean FMGL(own);
    
    x10::util::Team* FMGL(world);
    
    org::scalegraph::util::Dist2D FMGL(distXPregel);
    
    org::scalegraph::util::Dist2D FMGL(distBLAS);
    
    org::scalegraph::util::StopWatch* FMGL(stopWatch);
    
    org::scalegraph::util::ProfilingDB FMGL(profXPregel);
    
    void _constructor(x10_boolean ownByThis, x10::util::Team* worldTeam,
                      org::scalegraph::util::Dist2D distForXPregel,
                      org::scalegraph::util::Dist2D distForBLAS);
    
    static org::scalegraph::Config* _make(x10_boolean ownByThis, x10::util::Team* worldTeam,
                                          org::scalegraph::util::Dist2D distForXPregel,
                                          org::scalegraph::util::Dist2D distForBLAS);
    
    void del_();
    virtual x10::util::Team* worldTeam();
    virtual org::scalegraph::util::Dist2D distXPregel();
    virtual org::scalegraph::util::Dist2D distBLAS();
    virtual org::scalegraph::util::Dist2D dist2d();
    virtual org::scalegraph::util::Dist2D dist1d();
    virtual org::scalegraph::util::StopWatch* stopWatch();
    virtual org::scalegraph::util::ProfilingDB profXPregel(
      );
    virtual void dumpProfXPregel(x10::lang::String* title);
    virtual org::scalegraph::Config* org__scalegraph__Config____this__org__scalegraph__Config(
      );
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // ORG_SCALEGRAPH_CONFIG_H

namespace org { namespace scalegraph { 
class Config;
} } 

#ifndef ORG_SCALEGRAPH_CONFIG_H_NODEPS
#define ORG_SCALEGRAPH_CONFIG_H_NODEPS
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/Dist2D.h>
#include <org/scalegraph/util/ProfilingDB.h>
#include <x10/lang/Cell.h>
#include <x10/lang/Place.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/BadPlaceException.h>
#include <x10/lang/IllegalOperationException.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/array/PlaceGroup.h>
#include <x10/util/Team.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/IllegalArgumentException.h>
#include <org/scalegraph/util/MathAppend.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/StopWatch.h>
#include <x10/compiler/Ifdef.h>
#include <x10/compiler/Uninitialized.h>
#include <org/scalegraph/id/ProfilingID__XPregel.h>
#ifndef ORG_SCALEGRAPH_CONFIG_H_GENERICS
#define ORG_SCALEGRAPH_CONFIG_H_GENERICS
inline x10::lang::Cell<org::scalegraph::Config*>* org::scalegraph::Config::FMGL(instance__get)() {
    if (FMGL(instance__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(instance__init)();
    }
    return org::scalegraph::Config::FMGL(instance);
}

#endif // ORG_SCALEGRAPH_CONFIG_H_GENERICS
#endif // __ORG_SCALEGRAPH_CONFIG_H_NODEPS
