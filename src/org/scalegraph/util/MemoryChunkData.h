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

#ifndef __ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H
#define __ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H

#define __ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_USEEXP true
#define __ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_SIZETHRESHOLD 1000
#define __ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT false

#include <x10rt.h>
#include <double_linked_list.h>

namespace org { namespace scalegraph { namespace util {
		struct ExplicitMemory;

        extern long numCnt, gcThreshold, totalSize;
        extern pthread_mutex_t explMemMutex;
        extern pthread_mutex_t explGcMutex;
        extern ExplicitMemory *explMemList;

        struct ExplicitMemory{
			x10_long byteSize;
			void* pointer;
			void* allocHead;
			const char* filename;
			long linenumber;
			ExplicitMemory *fLink, *bLink;

			ExplicitMemory(){
				fLink=this; bLink=this;
			}

			static void showAllData(){
				ExplicitMemory *em;
				pthread_mutex_lock(&explMemMutex);
				em = explMemList->fLink;
				while(em!=explMemList){
					em->showData();
					em = em->fLink;
				}
				pthread_mutex_unlock(&explMemMutex);
			}
			void showData(){
				if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT){
					printf("size:%-20d, pointer:%-30p, head pointer:%-30p\n", byteSize, pointer, allocHead);
				}
			}

			void setData(void* pointer__, x10_long byteSize__){
				pointer=(pointer__);
				byteSize=(byteSize__);
			}

			static void finalization(void *obj, void *cd){
			((ExplicitMemory*)obj)->destruct(); 
				if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT){
					printf("finalization! p:%p\n",obj);
				}
			}

			void destruct(){
				pthread_mutex_lock(&explMemMutex);
				::scalegraph::listRemove(this);
				if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT){
					numCnt--;
					printf("cnt:%ld\n",numCnt);
					printf("destruct!p;%p ", allocHead);
				}
				pthread_mutex_unlock(&explMemMutex);

				GC_remove_roots(allocHead, (char*)allocHead + byteSize );
				free(allocHead);
			}

			void _constructor(x10_long numElements, x10_int alignment, x10_boolean zeroed, int elemSize, bool containPtrs) {

				if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT){
					printf("total:%ld threshold:%ld", totalSize, gcThreshold);
				}
				pthread_mutex_lock(&explMemMutex);
				::scalegraph::listInsertFoward(explMemList, this);
				pthread_mutex_unlock(&explMemMutex);

				pthread_mutex_lock(&explGcMutex);
				totalSize += elemSize*numElements;
				if( totalSize > gcThreshold){
					GC_gcollect();
					if(totalSize > gcThreshold){
						gcThreshold = totalSize+1024*1024;
					}
					if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT){
						showAllData();
					}
				}
				pthread_mutex_unlock(&explGcMutex);

				if (0 == numElements) {
						setData(NULL,0);
						return;
				}
				assert((alignment & (alignment-1)) == 0);
				x10_long size = alignment + numElements*elemSize;
				if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT){
					printf("make! size:%ld\n",size);
					numCnt++;
					printf("cnt:%ld\n",numCnt);
				}

				void* allocMem = malloc(size);

				if(allocMem==NULL){
					pthread_mutex_lock(&explGcMutex);
					totalSize = elemSize*numElements;
					pthread_mutex_unlock(&explGcMutex);
					//throwException<x10::lang::OutOfMemoryError>();
					fprintf(stderr,"Out of memory\n");
					abort();
				}

				allocHead=allocMem;
				if(containPtrs){
					GC_add_roots(allocMem, (char*)allocMem + size);//only when containsptr is true
				}
				GC_register_finalizer(this, finalization, NULL, NULL, NULL );

				if (zeroed) {
					memset(allocMem, 0, size);
				}
				if(alignment > 0) {
					x10_long alignDelta = alignment-1;
					x10_long alignMask = ~alignDelta;
					x10_long alignedMem = ((size_t)allocMem + alignDelta) & alignMask;
					setData( (void*)alignedMem, elemSize*numElements);;
					return;
				}
				setData( allocMem, elemSize*numElements);
			}

			static ExplicitMemory* _make(x10_long numElements, x10_int alignment, x10_boolean zeroed, int elemSize, bool containPtrs) {
				ExplicitMemory* this_ = (ExplicitMemory*)GC_malloc_atomic(sizeof(ExplicitMemory));
				this_->_constructor(numElements, alignment, zeroed, elemSize, containPtrs);

				if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT){
					printf("exp p;%p\n ", this_);
				}
				return this_;
			}
        };

template<class THIS, typename ELEM> class MCData_Base {
public:
        RTT_H_DECLS_STRUCT

        THIS* operator->() { return static_cast<THIS*>(this); }

        static THIS _alloc(){ THIS t; return t; }

        /*
         * head points to starting address of allocated memory, a MemoryChunkData that subparts from any MemoryChunkData
         * whill have head point to the same address
         * */
        //ELEM * FMGL(head);
        void * FMGL(head);
        ELEM * FMGL(pointer);
        x10_long FMGL(size);

        MCData_Base()
                : FMGL(head)(NULL),
                  FMGL(pointer)(NULL),
                  FMGL(size)(0)
        { }
        MCData_Base(/*ELEM**/void* head__, ELEM* pointer__, x10_long size__)
                : FMGL(head)(head__),
                  FMGL(pointer)(pointer__),
                  FMGL(size)(size__)
        {
            /**
             * pointer = null implies the memory was created from alloc method, otherwise from subpart method
             */
            if (FMGL(pointer) == NULL) {
               // FMGL(pointer) = FMGL(head);
            }
        }
/*
        static MCData_Impl<T> _make(T * head, T * pointer, x10_long size) {
                return MCData_Impl(head, pointer, size);
        }
*/
        static inline THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed) {
        	return _make(numElements, alignment, zeroed, "--", 0);
        }
        static inline THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed, int line) {
        	return _make(numElements, alignment, zeroed, "--", line);
        }
        static THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed, const char* filename, int line) {
                if (0 == numElements) {
                        return THIS(NULL, NULL, 0);
                }
                assert((alignment & (alignment-1)) == 0);
                x10_long size = alignment + numElements*sizeof(ELEM);

                // for memory usage analisys
                //if(size > 1000000) {
                //      printf("Large memory allocation: [%d bytes]\n", size);
                //}

                bool containsPtrs = x10aux::getRTT<ELEM>()->containsPtrs;
                if(size< __ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_SIZETHRESHOLD || !__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_USEEXP){
                        ELEM* allocMem = static_cast<ELEM*>(x10aux::alloc_internal(size, containsPtrs));
                        if (zeroed) {
                                memset(allocMem, 0, size);
                        }
                        if(alignment > 0) {
                                x10_long alignDelta = alignment-1;
                                x10_long alignMask = ~alignDelta;
                                x10_long alignedMem = ((size_t)allocMem + alignDelta) & alignMask;
                                return THIS(NULL, (ELEM*)alignedMem, numElements);;
                        }
                        return THIS(NULL, allocMem, numElements);
                }else{
                        ExplicitMemory *exp = ExplicitMemory::_make(numElements, alignment, zeroed, sizeof(ELEM), containsPtrs);
                        return THIS(exp, (ELEM*)(exp->pointer), numElements);
                }
        }

        void del();

        x10::lang::String* typeName();
        x10::lang::String* toString();
        x10_int hashCode() { return (x10_int)(size_t)FMGL(pointer); }
        x10_boolean equals(x10::lang::Any* other);
        x10_boolean equals(THIS other);
        x10_boolean _struct_equals(x10::lang::Any* other);
        x10_boolean _struct_equals(THIS other);
};

// base case for struct and interface types
template<class T, typename SFINAE = void> class MCData_Impl : public MCData_Base<MCData_Impl<T>, T> {
public:
        typedef MCData_Impl<T> THIS;
        typedef MCData_Base<MCData_Impl<T>, T> BASE;
        typedef T ELEM;
        typedef T TYPE;

        MCData_Impl()
                : BASE()
        { }

        MCData_Impl(/*ELEM**/void* head__, ELEM* pointer__, x10_long size__)
                : BASE(head__, pointer__, size__)
        { }

        static THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed) {
                return BASE::_make(numElements, alignment, zeroed);
        }
        static THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed, int num) {
                        return BASE::_make(numElements, alignment, zeroed, num);
                }

        T& operator[](x10_long index) { return this->FMGL(pointer)[index]; }
        T& operator[](x10_int index) { return this->FMGL(pointer)[index]; }
        void set(x10_long index, const T value) { this->FMGL(pointer)[index] = value; }
        void set(x10_int index, const T value) { this->FMGL(pointer)[index] = value; }

        T atomicAdd(x10_long index, const T value){ return __sync_fetch_and_add(&this->FMGL(pointer)[index], value); }
        T atomicOr(x10_long index, const T value){ return __sync_fetch_and_or(&this->FMGL(pointer)[index], value); }
        T atomicAnd(x10_long index, const T value){ return __sync_fetch_and_and(&this->FMGL(pointer)[index], value); }
        T atomicXor(x10_long index, const T value){ return __sync_fetch_and_xor(&this->FMGL(pointer)[index], value); }

        x10_boolean atomicCAS(x10_long index, const T expect, const T value){
                return __sync_bool_compare_and_swap(&this->FMGL(pointer)[index], expect, value);
        }

        static void copy(MCData_Impl<T> src, x10_long srcIndex,
                        MCData_Impl<T> dst, x10_long dstIndex, x10_long numElems)
        {
                memmove(dst.FMGL(pointer) + dstIndex, src.FMGL(pointer) + srcIndex, numElems * sizeof(T));
        }

        static void _serialize(MCData_Impl<T> this_, x10aux::serialization_buffer& buf) {
                x10_long size = this_->FMGL(size);
                void* data = this_->FMGL(pointer);
                buf.write(size);
           bool containsPtrs = x10aux::getRTT<T>()->containsPtrs;
                if(containsPtrs) {
                        for(x10_long i = 0; i < size; ++i) {
                                buf.write(this_->FMGL(pointer)[i]);
                        }
                }
                else {
                        x10aux::serialization_buffer::copyIn(buf, data, size, sizeof(T));
                }
        }

        static MCData_Impl<T> _deserialize(x10aux::deserialization_buffer& buf) {
                x10_long size = buf.read<x10_long>();
                MCData_Impl<T> allocMem = _make(size, 0, false);
           bool containsPtrs = x10aux::getRTT<T>()->containsPtrs;
                if(containsPtrs) {
                        for(x10_long i = 0; i < size; ++i) {
                            allocMem.FMGL(pointer)[i] = buf.read<T>();
                        }
                }
                else {
                        x10aux::deserialization_buffer::copyOut(buf, allocMem.FMGL(pointer), size, sizeof(T));
                }
                return allocMem;
        }
};

// specialized for class types
// class type is determined whether it has default constructor (constructor that have no parameters)
template <typename T, void(T::*)()>
struct MCData_sfinae_helper { typedef void type; };

template<class T> class MCData_Impl<T*, typename MCData_sfinae_helper<T, &T::_constructor>::type>
        : public MCData_Base<MCData_Impl<T*, typename MCData_sfinae_helper<T, &T::_constructor>::type>, T> {
public:
        typedef MCData_Impl<T*, typename MCData_sfinae_helper<T, &T::_constructor>::type> THIS;
        typedef MCData_Base<THIS, T> BASE;
        typedef T ELEM;
        typedef T* TYPE;

        MCData_Impl()
                : BASE()
        { }

        MCData_Impl(/*ELEM**/void* head__, ELEM* pointer__, x10_long size__)
                : BASE(head__, pointer__, size__)
        { }

        static THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed) {
                THIS this_ = BASE::_make(numElements, alignment, zeroed);
                for(x10_long i = 0; i < numElements; ++i) {
                        T* elem = new (&this_.FMGL(pointer)[i]) T();
                        elem->_constructor();
                }
                return this_;
        }
        static THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed, int line) {
                THIS this_ = BASE::_make(numElements, alignment, zeroed, line);
                for(x10_long i = 0; i < numElements; ++i) {
                        T* elem = new (&this_.FMGL(pointer)[i]) T();
                        elem->_constructor();
                }
                return this_;
        }

        T* operator[](x10_long index) { return &this->FMGL(pointer)[index]; }
        T* operator[](x10_int index) { return &this->FMGL(pointer)[index]; }
        void set(x10_long index, T* ptr) { this->FMGL(pointer)[index] = *ptr; }
        void set(x10_int index, T* ptr) { this->FMGL(pointer)[index] = *ptr; }

        T* atomicAdd(x10_long index, T* value){ return NULL; }
        T* atomicOr(x10_long index, T* value){ return NULL; }
        T* atomicAnd(x10_long index, T* value){ return NULL; }
        T* atomicXor(x10_long index, T* value){ return NULL; }

        x10_boolean atomicCAS(x10_long index, T* expect, T* value){ return false; }

        static void copy(THIS src, x10_long srcIndex,
                        THIS dst, x10_long dstIndex, x10_long numElems)
        {
                for(x10_long i = 0; i < numElems; ++i) {
                        dst.FMGL(pointer)[i + dstIndex] = src.FMGL(pointer)[i + srcIndex];
                }
        }

        static void _serialize(THIS this_, x10aux::serialization_buffer& buf) {
                if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT) printf("serialize\n");
                x10_long size = this_->FMGL(size);
                void* data = this_->FMGL(pointer);
                buf.write(size);
                for(x10_long i = 0; i < size; ++i) {
                        T* elem = &this_->FMGL(pointer)[i];
                        buf.manually_record_reference(elem);
                        elem->_serialize_body(buf);
                }
        }

        static THIS _deserialize(x10aux::deserialization_buffer& buf) {
                if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT) printf("deserialize\n");
                x10_long size = buf.read<x10_long>();
                THIS allocMem = _make(size, 0, false);
                for(x10_long i = 0; i < size; ++i) {
                    T* elem = new (&allocMem->FMGL(pointer)[i]) T();
                    buf.record_reference(elem);
                    elem->_deserialize_body(buf);
                }
                return allocMem;
        }

};
} } } // namespace org { namespace scalegraph { namespace util {

#endif // __ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H

#ifndef ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/String.h>
#include <x10/lang/UnsupportedOperationException.h>

#ifndef ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_IMPLEMENTATION

namespace org { namespace scalegraph { namespace util {

// MCData_Base //

template<class THIS, typename ELEM> void MCData_Base<THIS, ELEM>::del() {
        if(!FMGL(head)){//FMGL(size)< __ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_SIZETHRESHOLD || !__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_USEEXP){
        /*if(FMGL(head) != FMGL(pointer)) {
                x10aux::throwException(
                                x10::lang::UnsupportedOperationException::_make(
                                x10::lang::String::Lit("You can not free the MemoryChunk created from subpart method.")));
        }//}
        x10aux::dealloc(FMGL(head));
        */ 
			x10aux::dealloc(FMGL(pointer));
			FMGL(head) = NULL;
			FMGL(pointer) = NULL;
			FMGL(size) = 0;
        }else{
			GC_register_finalizer( (ExplicitMemory*)FMGL(head), NULL, NULL, NULL, NULL );
			((ExplicitMemory*)FMGL(head))->destruct();

			if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT){
				printf("del exp p;%p\n ", FMGL(head));
				printf("del size:%ld\n",((ExplicitMemory*)FMGL(head))->byteSize);
			}
			FMGL(head) = NULL;
			FMGL(pointer) = NULL;
			FMGL(size) = 0;
        }
}

template<class THIS, typename ELEM> x10::lang::String* MCData_Base<THIS, ELEM>::typeName() {
        return x10aux::type_name((*this));
}

template<class THIS, typename ELEM> x10::lang::String* MCData_Base<THIS, ELEM>::toString() {
        return x10::lang::String::Steal(x10aux::alloc_printf(
                        "MemoryChunk.Data (pointer=%p, size=%ld)", FMGL(pointer), FMGL(size)));
}

template<class THIS, typename ELEM> x10_boolean MCData_Base<THIS, ELEM>::equals(x10::lang::Any* other) {
        if(!x10aux::instanceof<THIS >(other)) return false;
        return equals(x10aux::class_cast<THIS >(other));
}

template<class THIS, typename ELEM> x10_boolean MCData_Base<THIS, ELEM>::equals(THIS other) {
        return (FMGL(pointer) == other->FMGL(pointer)) && (FMGL(size) == other->FMGL(size));
}

template<class THIS, typename ELEM> x10_boolean MCData_Base<THIS, ELEM>::_struct_equals(x10::lang::Any* other) {
        if(!x10aux::instanceof<THIS >(other)) return false;
        return equals(x10aux::class_cast<THIS >(other));
}

template<class THIS, typename ELEM> x10_boolean MCData_Base<THIS, ELEM>::_struct_equals(THIS other) {
        return (FMGL(pointer) == other->FMGL(pointer)) && (FMGL(size) == other->FMGL(size));
}

//

template<class THIS, typename ELEM> x10aux::RuntimeType MCData_Base<THIS, ELEM>::rtt;

template <> class MCData_Impl<void> {
public:
        static x10aux::RuntimeType rtt;
        static const x10aux::RuntimeType* getRTT() { return & rtt; }
};

template<class THIS, typename ELEM>void MCData_Base<THIS, ELEM>::_initRTT() {
    if (rtt.initStageOne(x10aux::getRTT<MCData_Impl<void> >())) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<typename THIS::TYPE>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.MemoryChunk.Data";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 2, parents, 1, params, variances);
}

} } } // namespace org { namespace scalegraph { namespace util {

#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_IMPLEMENTATION
#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_NODEPS
