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


#ifndef __ORG_SCALEGRAPH_UTIL_NATIVE_ALGORITHM__
#define __ORG_SCALEGRAPH_UTIL_NATIVE_ALGORITHM__

#include <stdint.h>

#include <cstddef>
#include <iterator>
#include <algorithm>
#include <functional>
//#include <org/scalegraph/util/tuple/Tuple2.h>

namespace org { namespace scalegraph { namespace util {

	//-------------------------------------------------------------//
	// Sort
	//-------------------------------------------------------------//

	template <typename T1, typename T2>
	class pointer_pair_value
	{
	public:
		T1 v1;
		T2 v2;
		pointer_pair_value(T1& v1_, T2& v2_)
			: v1(v1_)
			, v2(v2_)
		{ }
		operator T1 () const { return v1; }
		pointer_pair_value& operator=(const pointer_pair_value& o) { v1 = o.v1; v2 = o.v2; return *this; }
	//	bool operator<(const pointer_pair_value& o) const { return v1 == o.v1 ? v2 < o.v2 : v1 < o.v1; }
	};

	template <typename T1, typename T2>
	class pointer_pair_reference
	{
	public:
		T1& v1;
		T2& v2;
		pointer_pair_reference(T1& v1_, T2& v2_)
			: v1(v1_)
			, v2(v2_)
		{ }
		operator T1 () const { return v1; }
		operator pointer_pair_value<T1, T2> () const { return pointer_pair_value<T1, T2>(v1, v2); }
		pointer_pair_reference& operator=(const pointer_pair_reference& o) { v1 = o.v1; v2 = o.v2; return *this; }
		pointer_pair_reference& operator=(const pointer_pair_value<T1, T2>& o) { v1 = o.v1; v2 = o.v2; return *this; }
	};

	template <typename T1, typename T2>
	void swap(pointer_pair_reference<T1, T2> r1, pointer_pair_reference<T1, T2> r2)
	{
		pointer_pair_value<T1, T2> tmp = r1;
		r1 = r2;
		r2 = tmp;
	}

	/*template <typename T>
		class pointer_single_iterator
			: public std::iterator<std::random_access_iterator_tag, T>
		{
		public:
			T* p;

			typedef ptrdiff_t difference_type;
			//typedef T reference;

			pointer_single_iterator(T* v) : p(v) { }

			// Can be default-constructed
			pointer_single_iterator() { }
			// Accepts equality/inequality comparisons
			bool operator==(const pointer_single_iterator& ot) const { return p == ot.p; }
			bool operator!=(const pointer_single_iterator& ot) const { return p != ot.p; }
			// Can be dereferenced
			T& operator*(){ return *p; }	//*p
			// Can be incremented and decremented
			pointer_single_iterator operator++(int) { pointer_single_iterator old(*this); ++p; return old; }
			pointer_single_iterator operator--(int) { pointer_single_iterator old(*this); --p; return old; }
			pointer_single_iterator& operator++() { ++p; return *this; }
			pointer_single_iterator& operator--() { --p; return *this; }
			// Supports arithmetic operators + and - between an iterator and an integer value, or subtracting an iterator from another
			pointer_single_iterator operator+(const difference_type n) { pointer_single_iterator t(p+n); return t; }
			pointer_single_iterator operator-(const difference_type n) { pointer_single_iterator t(p-n); return t; }
			size_t operator-(const pointer_single_iterator& o) { return p - o.p; }	//yobareta gawa ga const de nai rashii zo!
			// Supports inequality comparisons (<, >, <= and >=) between iterators
			bool operator<(const pointer_single_iterator& o) { return p < o.p; }
			bool operator>(const pointer_single_iterator& o) { return p > o.p; }
			bool operator<=(const pointer_single_iterator& o) { return p <= o.p; }
			bool operator>=(const pointer_single_iterator& o) { return p >= o.p; }
			// Supports compound assinment operations += and -=
			pointer_single_iterator& operator+=(const difference_type n) { p += n; return *this; }
			pointer_single_iterator& operator-=(const difference_type n) { p -= n; return *this; }
			// Supports offset dereference operator ([])
			T& operator[](const difference_type n) { return p[n]; }
		};*/

	template <typename T1, typename T2>
	class pointer_pair_iterator
		: public std::iterator<std::random_access_iterator_tag,
			pointer_pair_value<T1, T2>,
			ptrdiff_t,
			pointer_pair_value<T1, T2>*,
			pointer_pair_reference<T1, T2> >
	{
	public:
		T1* first;
		T2* second;

		typedef ptrdiff_t difference_type;
		typedef pointer_pair_reference<T1, T2> reference;

		pointer_pair_iterator(T1* v1, T2* v2) : first(v1) , second(v2) { }

		// Can be default-constructed
		pointer_pair_iterator() { }
		// Accepts equality/inequality comparisons
		bool operator==(const pointer_pair_iterator& ot) { return first == ot.first; }
		bool operator!=(const pointer_pair_iterator& ot) { return first != ot.first; }
		// Can be dereferenced
		reference operator*(){ return reference(*first, *second); }
		// Can be incremented and decremented
		pointer_pair_iterator operator++(int) { pointer_pair_iterator old(*this); ++first; ++second; return old; }
		pointer_pair_iterator operator--(int) { pointer_pair_iterator old(*this); --first; --second; return old; }
		pointer_pair_iterator& operator++() { ++first; ++second; return *this; }
		pointer_pair_iterator& operator--() { --first; --second; return *this; }
		// Supports arithmetic operators + and - between an iterator and an integer value, or subtracting an iterator from another
		pointer_pair_iterator operator+(const difference_type n) { pointer_pair_iterator t(first+n, second+n); return t; }
		pointer_pair_iterator operator-(const difference_type n) { pointer_pair_iterator t(first-n, second-n); return t; }
		size_t operator-(const pointer_pair_iterator& o) { return first - o.first; }
		// Supports inequality comparisons (<, >, <= and >=) between iterators
		bool operator<(const pointer_pair_iterator& o) { return first < o.first; }
		bool operator>(const pointer_pair_iterator& o) { return first > o.first; }
		bool operator<=(const pointer_pair_iterator& o) { return first <= o.first; }
		bool operator>=(const pointer_pair_iterator& o) { return first >= o.first; }
		// Supports compound assinment operations += and -=
		pointer_pair_iterator& operator+=(const difference_type n) { first += n; second += n; return *this; }
		pointer_pair_iterator& operator-=(const difference_type n) { first -= n; second -= n; return *this; }
		// Supports offset dereference operator ([])
		reference operator[](const difference_type n) { return reference(first[n], second[n]); }
	};

	template <typename T>
	struct K1LessThan{
		bool operator() (const T& a, const T& b) const {
			return a.FMGL(val1) < b.FMGL(val1);
		}
	};

	template <typename T>
	static void StableSort_TupleK1(T* pointer, size_t count){
		std::stable_sort(pointer, pointer+count, K1LessThan<T>());
	}

	//Long gata ni
	template <typename T>
	struct MaskedK1LessThan{
		bool operator() (const T& a, const T& b) const {
			return (a.FMGL(val1) & ((1LL<<(sizeof(a.FMGL(val1))*8)-1)>>4))
					< (b.FMGL(val1) & ((1LL<<(sizeof(a.FMGL(val2))*8)-1)>>4));
		}
	};

	template <typename T>
	static void MaskedStableSort_TupleK1(T* pointer, size_t count){
		std::stable_sort(pointer, pointer+count, MaskedK1LessThan<T>());
	}

	template <typename T>
	struct K2LessThan{
		bool operator() (const T& a, const T& b) const {
			return a.FMGL(val2) < b.FMGL(val2);
		}
	};

	template <typename T>
	static void StableSort_TupleK2(T* pointer, size_t count){
		std::stable_sort(pointer, pointer+count, K2LessThan<T>());
	}

    template<typename IterKey>
    void sort1(IterKey* begin_key, size_t count)
    {
        std::sort(begin_key, begin_key + count);
    }

    template<typename IterKey, typename Compare>
	void sort1(IterKey* begin_key, size_t count, Compare comp)
	{
		std::sort(begin_key, begin_key + count, comp);
	}

	template<typename IterKey, typename IterValue>
	void sort2(IterKey* begin_key, IterValue* begin_value, size_t count)
	{
		pointer_pair_iterator<IterKey, IterValue>
			begin(begin_key, begin_value), end(begin_key + count, begin_value + count);
		std::sort(begin, end);
	}

	template<typename IterKey, typename IterValue, typename Compare>
	void sort2(IterKey* begin_key, IterValue* begin_value, size_t count, Compare comp)
	{
		pointer_pair_iterator<IterKey, IterValue>
			begin(begin_key, begin_value), end(begin_key + count, begin_value + count);
		std::sort(begin, end, comp);
	}

	template <typename T1, typename T2, typename T3>
	class pointer_tri_value
	{
	public:
		T1 v1;
		T2 v2;
		T3 v3;
		pointer_tri_value(T1& v1_, T2& v2_, T3& v3_)
			: v1(v1_)
			, v2(v2_)
			, v3(v3_)
		{ }
		operator T1 () const { return v1; }
		pointer_tri_value& operator=(const pointer_tri_value& o) { v1 = o.v1; v2 = o.v2; v3 = o.v3; return *this; }
		//bool operator<(const pointer_tri_value& o) const { return v1 < o.v1; }
	};

	template <typename T1, typename T2, typename T3>
	class pointer_tri_reference
	{
	public:
		T1& v1;
		T2& v2;
		T3& v3;
		pointer_tri_reference(T1& v1_, T2& v2_, T3& v3_)
			: v1(v1_)
			, v2(v2_)
			, v3(v3_)
		{ }
		operator T1 () const { return v1; }
		operator pointer_tri_value<T1, T2, T3> () const { return pointer_tri_value<T1, T2, T3>(v1, v2, v3); }
		pointer_tri_reference& operator=(const pointer_tri_reference& o) { v1 = o.v1; v2 = o.v2; v3 = o.v3; return *this; }
		pointer_tri_reference& operator=(const pointer_tri_value<T1, T2, T3>& o) { v1 = o.v1; v2 = o.v2; v3 = o.v3; return *this; }
	};

	template <typename T1, typename T2, typename T3>
	void swap(pointer_tri_reference<T1, T2, T3> r1, pointer_tri_reference<T1, T2, T3> r2)
	{
		pointer_tri_reference<T1, T2, T3> tmp = r1;
		r1 = r2;
		r2 = tmp;
	}

	template <typename T1, typename T2, typename T3>
	class pointer_tri_iterator
		: public std::iterator<std::random_access_iterator_tag,
			pointer_tri_value<T1, T2, T3>,
			ptrdiff_t,
			pointer_tri_value<T1, T2, T3>*,
			pointer_tri_reference<T1, T2, T3> >
	{
	public:
		T1* first;
		T2* second;
		T3* third;

		typedef ptrdiff_t difference_type;
		typedef pointer_tri_reference<T1, T2, T3> reference;

		pointer_tri_iterator(T1* v1, T2* v2, T3* v3) : first(v1) , second(v2), third(v3) { }

		// Can be default-constructed
		pointer_tri_iterator() { }
		// Accepts equality/inequality comparisons
		bool operator==(const pointer_tri_iterator& ot) { return first == ot.first; }
		bool operator!=(const pointer_tri_iterator& ot) { return first != ot.first; }
		// Can be dereferenced
		reference operator*(){ return reference(*first, *second, *third); }
		// Can be incremented and decremented
		pointer_tri_iterator operator++(int) { pointer_tri_iterator old(*this); ++first; ++second; ++third; return old; }
		pointer_tri_iterator operator--(int) { pointer_tri_iterator old(*this); --first; --second; --third; return old; }
		pointer_tri_iterator& operator++() { ++first; ++second; ++third; return *this; }
		pointer_tri_iterator& operator--() { --first; --second; --third; return *this; }
		// Supports arithmetic operators + and - between an iterator and an integer value, or subtracting an iterator from another
		pointer_tri_iterator operator+(const difference_type n) { pointer_tri_iterator t(first+n, second+n, third+n); return t; }
		pointer_tri_iterator operator-(const difference_type n) { pointer_tri_iterator t(first-n, second-n, third-n); return t; }
		size_t operator-(const pointer_tri_iterator& o) { return first - o.first; }
		// Supports inequality comparisons (<, >, <= and >=) between iterators
		bool operator<(const pointer_tri_iterator& o) { return first < o.first; }
		bool operator>(const pointer_tri_iterator& o) { return first > o.first; }
		bool operator<=(const pointer_tri_iterator& o) { return first <= o.first; }
		bool operator>=(const pointer_tri_iterator& o) { return first >= o.first; }
		// Supports compound assinment operations += and -=
		pointer_tri_iterator& operator+=(const difference_type n) { first += n; second += n; third += n; return *this; }
		pointer_tri_iterator& operator-=(const difference_type n) { first -= n; second -= n; third -= n; return *this; }
		// Supports offset dereference operator ([])
		reference operator[](const difference_type n) { return reference(first[n], second[n], third[n]); }
	};

	template<typename IterKey, typename IterValue1, typename IterValue2>
	void sort3(IterKey* begin_key, IterValue1* begin_value1, IterValue2* begin_value2, size_t count)
	{
		pointer_tri_iterator<IterKey, IterValue1, IterValue2>
			begin(begin_key, begin_value1, begin_value2),
			end(begin_key + count, begin_value1 + count, begin_value2 + count);
		std::sort(begin, end);
	}

	template<typename IterKey, typename IterValue1, typename IterValue2, typename Compare>
	void sort3(IterKey* begin_key, IterValue1* begin_value1, IterValue2* begin_value2, size_t count, Compare comp)
	{
		pointer_tri_iterator<IterKey, IterValue1, IterValue2>
			begin(begin_key, begin_value1, begin_value2),
			end(begin_key + count, begin_value1 + count, begin_value2 + count);
		std::sort(begin, end, comp);
	}

}}} // namespace org { namespace scalegraph { namespace util {

#endif // #ifndef __ORG_SCALEGRAPH_UTIL_NATIVE_ALGORITHM__

