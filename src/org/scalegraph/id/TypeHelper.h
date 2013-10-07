#ifndef __ORG_SCALEGRAPH_ID_TYPEHELPER_H
#define __ORG_SCALEGRAPH_ID_TYPEHELPER_H

namespace org { namespace scalegraph { namespace util {
class SString;
} } }

namespace org { namespace scalegraph { namespace id {

template <typename T> struct TypeIdOf {
	static const int value = -1;
};


template <> struct TypeIdOf<x10_boolean> { static const int value = 1; };
template <> struct TypeIdOf<x10_byte> { static const int value = 2; };
template <> struct TypeIdOf<x10_short> { static const int value = 3; };
template <> struct TypeIdOf<x10_int> { static const int value = 4; };
template <> struct TypeIdOf<x10_long> { static const int value = 5; };
template <> struct TypeIdOf<x10_float> { static const int value = 6; };
template <> struct TypeIdOf<x10_double> { static const int value = 7; };
template <> struct TypeIdOf<x10_ubyte> { static const int value = 8; };
template <> struct TypeIdOf<x10_ushort> { static const int value = 9; };
template <> struct TypeIdOf<x10_uint> { static const int value = 10; };
template <> struct TypeIdOf<x10_ulong> { static const int value = 11; };
template <> struct TypeIdOf<x10_char> { static const int value = 12; };
template <> struct TypeIdOf<x10::lang::String> { static const int value = 13; };
template <> struct TypeIdOf<org::scalegraph::util::SString> { static const int value = 13; };

} } } // namespace org { namespace scalegraph { namespace id {

#endif // __ORG_SCALEGRAPH_ID_TYPEHELPER_H
