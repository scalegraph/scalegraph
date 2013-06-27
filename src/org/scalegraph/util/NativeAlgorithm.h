
#ifndef __ORG_SCALEGRAPH_UTIL_NATIVE_ALGORITHM__
#define __ORG_SCALEGRAPH_UTIL_NATIVE_ALGORITHM__

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

