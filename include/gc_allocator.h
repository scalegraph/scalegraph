/*
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

#include <x10aux/config.h>
#include <x10aux/alloc.h>

#include <stddef.h>

#include <limits>

namespace std {

// forward def

template <class T, class Alloc> class vector; // generic template

template < class Key,                                     // map::key_type
           class T,                                       // map::mapped_type
           class Compare,                     // map::key_compare
           class Alloc    // map::allocator_type
           > class map;

template <class T> struct less;

template <class T1, class T2> struct pair;

} // namespace std {

namespace scalegraph {

	template <class T>
	class gc_allocator
	{
	public:
		typedef size_t size_type;
		typedef ptrdiff_t difference_type;
		typedef T* pointer;
		typedef const T* const_pointer;
		typedef T& reference;
		typedef const T& const_reference;
		typedef T value_type;

		template <class U>
		struct rebind {
			typedef gc_allocator<U> other;
		};

		gc_allocator() throw(){}
		gc_allocator(const gc_allocator&) throw(){}
		template <class U> gc_allocator(const gc_allocator<U>&) throw(){}
		~gc_allocator() throw(){}

		pointer allocate(size_type num, const void* hint = 0) {
			return x10aux::alloc<T>(num * sizeof(T), true);
		}
		void construct(pointer p, const T& value) {
			new( (void*)p ) T(value);
		}
		void deallocate(pointer p, size_type num) {
			x10aux::dealloc( p );
		}
		void destroy(pointer p) { p->~T(); }
		pointer address(reference value) const { return &value; }
		const_pointer address(const_reference value) const { return &value; }
		size_type max_size() const throw() {
			return std::numeric_limits<size_t>::max() / sizeof(T);
		}
	};

	template <typename T, typename U = void> struct gc_std {
		typedef std::map<T, U, std::less<void*>, gc_allocator< std::pair<T, U> > > map;
		typedef std::vector<T, gc_allocator<T> > vector;
	};

} // namespace scalegraph {

template <class T1, class T2>
bool operator==(const scalegraph::gc_allocator<T1>&, const scalegraph::gc_allocator<T2>&) throw() { return true; }

template <class T1, class T2>
bool operator!=(const scalegraph::gc_allocator<T1>&, const scalegraph::gc_allocator<T2>&) throw() { return false; }

