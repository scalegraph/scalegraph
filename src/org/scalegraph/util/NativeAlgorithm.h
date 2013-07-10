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


#include <stdint.h>
#include <algorithm>
#include <functional>

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

}}} // namespace org { namespace scalegraph { namespace util {

