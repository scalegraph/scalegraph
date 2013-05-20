#ifndef __ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_NATIVE_H
#define __ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_NATIVE_H

#include <x10rt.h>
#include <x10/lang/Any.h>
#include <x10/lang/String.h>

namespace org { namespace scalegraph { namespace util {

template <typename T> T* allocateFlat(x10_long numElements, x10_int alignment, x10_boolean zeroed) {
	if (0 == numElements) {
		return NULL;
	}
	assert((alignment & (alignment-1)) == 0);
	x10_long size = alignment + numElements*sizeof(T);
//	T* allocMem = x10aux::alloc<T>(size, false);
	T* allocMem = x10aux::alloc_chunk<T>(size);
	if (zeroed) {
		memset(allocMem, 0, size);
	}
	if(alignment > 0) {
		x10_long alignDelta = alignment-1;
		x10_long alignMask = ~alignDelta;
		x10_long alignedMem = ((size_t)allocMem + alignDelta) & alignMask;
		return (T*)alignedMem;
	}
	return allocMem;
}

template<class T> class MCData_Impl {
	public:
	RTT_H_DECLS_STRUCT

	MCData_Impl<T>* operator->() { return this; }

	static MCData_Impl<T> _alloc(){MCData_Impl<T> t; return t; }

	/*
	 * head points to starting address of allocated memory, a MemoryChunkData that subparts from any MemoryChunkData
	 * whill have head point to the same address
	 * */
	T * FMGL(head);
	T * FMGL(pointer);
	x10_long FMGL(size);

	MCData_Impl()
		: FMGL(head)(NULL),
		  FMGL(pointer)(NULL),
		  FMGL(size)(0)
	{ }
	MCData_Impl(T* head__, T* pointer__, x10_long size__)
		: FMGL(head)(head__),
		  FMGL(pointer)(pointer__),
		  FMGL(size)(size__)
	{
	    /**
	     * pointer = null implies the memory was created from alloc method, otherwise from subpart method
	     */
	    if (FMGL(pointer) == NULL) {
	        FMGL(pointer) = FMGL(head);
	    }
	}

	static MCData_Impl<T> _make(T * head, T * pointer, x10_long size) {
		return MCData_Impl(head, pointer, size);
	}

	void del() {
		x10aux::dealloc(FMGL(pointer));
		FMGL(pointer) = NULL;
		FMGL(size) = 0;
	}

	x10::lang::String* typeName() { return x10aux::type_name((*this)); }
	x10::lang::String* toString() {
		return x10::lang::String::Steal(x10aux::alloc_printf(
				"MemoryChunk.Data (pointer=%p, size=%ld)", FMGL(pointer), FMGL(size)));
	}
	x10_int hashCode() { return (x10_int)(size_t)FMGL(pointer); }
	x10_boolean equals(x10::lang::Any* other) {
		if(!x10aux::instanceof<MCData_Impl<T> >(other)) return false;
		return equals(x10aux::class_cast<MCData_Impl<T> >(other));
	}
	x10_boolean equals(MCData_Impl<T> other) {
		return (FMGL(pointer) == other->FMGL(pointer)) && (FMGL(size) == other->FMGL(size));
	}
	x10_boolean _struct_equals(x10::lang::Any* other) {
		if(!x10aux::instanceof<MCData_Impl<T> >(other)) return false;
		return equals(x10aux::class_cast<MCData_Impl<T> >(other));
	}
	x10_boolean _struct_equals(MCData_Impl<T> other) {
		return (FMGL(pointer) == other->FMGL(pointer)) && (FMGL(size) == other->FMGL(size));
	}

	static void _serialize(MCData_Impl<T> this_, x10aux::serialization_buffer& buf) {
		x10_long size = this_->FMGL(size);
		void* data = this_->FMGL(pointer);
		buf.write(size);
		x10aux::serialization_buffer::copyIn(buf, data, size, sizeof(T));
	}

	static MCData_Impl<T> _deserialize(x10aux::deserialization_buffer& buf) {
		x10_long size = buf.read<x10_long>();
		// "x10aux::getRTT<T>()->containsPtrs" has not been implemented yet.
//		T* pointer = x10aux::alloc<T>(size*sizeof(T), false); // x10aux::getRTT<T>()->containsPtrs);
		//Charuwat+: Fix this
		T* allocMem = x10aux::alloc_chunk<T>(size * sizeof(T));
		x10aux::deserialization_buffer::copyOut(buf, allocMem, size, sizeof(T));
		return MCData_Impl<T>(allocMem, NULL, size);
	}
};

template<class T> x10aux::RuntimeType MCData_Impl<T>::rtt;

template <> class MCData_Impl<void> {
public:
	static x10aux::RuntimeType rtt;
	static const x10aux::RuntimeType* getRTT() { return & rtt; }
};

template<class T> void MCData_Impl<T>::_initRTT() {
    if (rtt.initStageOne(x10aux::getRTT<MCData_Impl<void> >())) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<T>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.MemoryChunk.Data";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 2, parents, 1, params, variances);
}

} } }
#endif // __ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_NATIVE_H
