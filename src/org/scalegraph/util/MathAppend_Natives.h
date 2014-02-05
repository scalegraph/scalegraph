/*
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */


#ifndef MATH_APPEND_NATIVES_H
#define MATH_APPEND_NATIVES_H

namespace org { namespace scalegraph { namespace util {

inline x10_ulong bitreverse(x10_ulong x) {
	/* 64-bit code */
	x = __builtin_bswap64(x);
	x = ((x >>  4) & x10_ulong(0x0F0F0F0F0F0F0F0F)) | ((x & x10_ulong(0x0F0F0F0F0F0F0F0F)) <<  4);
	x = ((x >>  2) & x10_ulong(0x3333333333333333)) | ((x & x10_ulong(0x3333333333333333)) <<  2);
	x = ((x >>  1) & x10_ulong(0x5555555555555555)) | ((x & x10_ulong(0x5555555555555555)) <<  1);
	return x;
}

inline x10_long bitreverse(x10_int scale, x10_long x) {
	return x10_long(bitreverse(x10_ulong(x)) >> (64 - scale));
}

inline x10_long scramble(int scale, x10_long v0, x10_ulong val0, x10_ulong val1) {
	x10_ulong v = x10_ulong(v0);
	v += val0 + val1;
	v *= (val0 | x10_ulong(0x4519840211493211));
	v = (bitreverse(v) >> (64 - scale));
	v *= (val1 | x10_ulong(0x3050852102C843A5));
	v = (bitreverse(v) >> (64 - scale));
	return x10_long(v);
}

}}} // namespace org { namespace scalegraph { namespace util {

#endif // #ifndef MATH_APPEND_NATIVES_H
