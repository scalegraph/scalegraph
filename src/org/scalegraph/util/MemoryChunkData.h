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

#define MCDEFARGS 0, false, (x10_byte*)(void*)__FILE__, __LINE__


namespace x10 {
	namespace lang {
		class Place;
	}
    namespace util {
    	extern void IMC_copyToBody(void *srcAddr, void *dstAddr, x10_int numBytes,
                               x10::lang::Place dstPlace, bool overlap, x10::lang::VoidFun_0_0* notif);
    	extern void IMC_copyFromBody(void *srcAddr, void *dstAddr, x10_int numBytes,
                                 x10::lang::Place srcPlace, bool overlap, x10::lang::VoidFun_0_0* notif);
    }
}

namespace org { namespace scalegraph { namespace util {
		struct ExplicitMemory;

		struct ExpMemGlobalState {
	        long numCnt, gcThreshold, totalSize, envThreshold;
	        bool gcWait;
	        pthread_mutex_t mutex;
	        pthread_cond_t sync;
	        ExplicitMemory *list;

	        ExpMemGlobalState();
		};

		extern ExpMemGlobalState ExpMemState;

		x10_long get_gc_heap_size();

        struct ExplicitMemory{
			x10_long byteSize;
			void* pointer;
			void* allocHead;
			bool containPtrs;
			const char* filename;
			long linenumber;
			ExplicitMemory *fLink, *bLink;

			ExplicitMemory(){
				fLink=this; bLink=this;
				char* env = getenv("EMMX");
				if(!env){
					ExpMemState.envThreshold=0;
				}else{
					long tmpSize=0;
					int index=0;
					while(env[index]){
						if(isdigit(env[index])){
							tmpSize*=10;
							tmpSize+=env[index]-'0';
						}else if(env[index]=='k' || env[index]=='K'){
							tmpSize<<=10;
							ExpMemState.envThreshold+=tmpSize;	tmpSize=0;
						}else if(env[index]=='m' || env[index]=='M'){
							tmpSize<<=20;
							ExpMemState.envThreshold+=tmpSize;	tmpSize=0;
						}else if(env[index]=='g' || env[index]=='G'){
							tmpSize<<=30;
							ExpMemState.envThreshold+=tmpSize;	tmpSize=0;
						}else if(env[index]=='t' || env[index]=='T'){
							tmpSize<<=40;
							ExpMemState.envThreshold+=tmpSize;	tmpSize=0;
						}
						index++;
					}
					ExpMemState.envThreshold+=tmpSize;
				}
				if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT||1){
					printf("threashold:%ld%s\n",ExpMemState.envThreshold ,ExpMemState.envThreshold ? "" : "default");
				}
			}

			/** Caller must lock before call this method. */
			static void showAllData(){
				ExplicitMemory *em;
				em = ExpMemState.list->fLink;
				while(em!=ExpMemState.list){
					em->showData();
					em = em->fLink;
				}
			}
			void showData(){
				printf("size:%d, pointer:%p, head pointer:%p, from %s:%d\n", byteSize, pointer, allocHead, filename, linenumber);
			}

			static void finalization(void *obj, void *cd){
				((ExplicitMemory*)obj)->destruct();
			}

			void destruct(){
				void* ptr = NULL;

				pthread_mutex_lock(&ExpMemState.mutex);
				if(allocHead) {
					::scalegraph::listRemove(this);
					ExpMemState.totalSize -= byteSize;
					if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT)
					{
						printf("%d: finalization!: ", x10rt_here());
						showData();
						printf("cnt:%ld\n", --ExpMemState.numCnt);
					}
					ptr = allocHead;
					allocHead = pointer = NULL;
				}
				pthread_mutex_unlock(&ExpMemState.mutex);

				if(ptr) {
					if(containPtrs) {
						//GC_remove_roots(allocHead, (char*)allocHead + byteSize );
						GC_FREE(ptr);
					}else{
						::free(ptr);
					}
//					::free(ptr);
				}
			}

			static ExplicitMemory* _make(x10_long numElements, x10_int alignment, x10_boolean zeroed, int elemSize, bool containPtrs, const char* filename, int linenumber) {
				ExplicitMemory* this_ = x10aux::alloc<ExplicitMemory>(sizeof(ExplicitMemory), false);
				this_->filename = filename;
				this_->linenumber = linenumber;
				this_->containPtrs = containPtrs;

				if (0 == numElements) {
					this_->setData(NULL, NULL,0);
					return this_;
				}
				assert((alignment & (alignment-1)) == 0);
				x10_long size = alignment + numElements * elemSize;

				pthread_mutex_lock(&ExpMemState.mutex);

				::scalegraph::listInsertFoward(ExpMemState.list, this_);

				while(ExpMemState.gcWait) {
					// wait for GC completion
					pthread_cond_wait(&ExpMemState.sync, &ExpMemState.mutex);
				}

				ExpMemState.totalSize += size;
				if( !ExpMemState.envThreshold && (ExpMemState.totalSize > ExpMemState.gcThreshold) ||
					ExpMemState.envThreshold && (ExpMemState.totalSize > ExpMemState.envThreshold) ) {
					// The guy who exceeded the threshold is responsible to invoke GC.
					ExpMemState.gcWait = true;
					pthread_mutex_unlock(&ExpMemState.mutex);

					x10aux::alloc_lock.lock();
					GC_gcollect();
					x10aux::alloc_lock.unlock();

					pthread_mutex_lock(&ExpMemState.mutex);
					ExpMemState.gcWait = false;
					if(!ExpMemState.envThreshold && ExpMemState.totalSize > ExpMemState.gcThreshold){
						ExpMemState.gcThreshold = ExpMemState.totalSize * 3 / 2;
					}else if( ExpMemState.envThreshold && (ExpMemState.totalSize > ExpMemState.envThreshold)){
						ExpMemState.envThreshold = ExpMemState.totalSize * 3 / 2;
					}
					if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT){
						showAllData();
					}
					pthread_cond_broadcast(&ExpMemState.sync);
				}

				if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT)
				{
					printf("total:%ld threshold:%ld", ExpMemState.totalSize, ExpMemState.gcThreshold);
					printf("%d: Allocation!: size:%d, from %s:%d\n", x10rt_here(), size, filename, linenumber);
				}

				if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT){
					printf("make! size:%ld\n",size);
					printf("cnt:%ld\n", ++ExpMemState.numCnt);
				}
				pthread_mutex_unlock(&ExpMemState.mutex);

				char* allocMem;// = x10aux::system_alloc<char>(size);
				if(containPtrs){
					allocMem = (char*)GC_MALLOC_UNCOLLECTABLE(size);
				}else{
					allocMem = x10aux::system_alloc<char>(size);
				}

				if(allocMem==NULL){
					pthread_mutex_lock(&ExpMemState.mutex);
					ExpMemState.totalSize -= size;
					pthread_mutex_unlock(&ExpMemState.mutex);
					//throwException<x10::lang::OutOfMemoryError>();
					fprintf(stderr,"Out of memory\n");
					abort();
				}

				x10aux::alloc_lock.lock();
//				if(containPtrs){
//					GC_add_roots(allocMem, allocMem + size);//only when containsptr is true
//				}
				GC_register_finalizer(this_, finalization, NULL, NULL, NULL );
				x10aux::alloc_lock.unlock();

				if (zeroed) {
					memset(allocMem, 0, size);
				}
				if(alignment > 0) {
					x10_long alignDelta = alignment-1;
					x10_long alignMask = ~alignDelta;
					x10_long alignedMem = ((size_t)allocMem + alignDelta) & alignMask;
					this_->setData(allocMem, (void*)alignedMem, size);
					return this_;
				}
				this_->setData(allocMem, allocMem, size);

				if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT){
					printf("exp p;%p\n ", this_);
				}
				return this_;
			}

        private:
			void setData(void* allocHead__, void* pointer__, x10_long byteSize__){
				allocHead = allocHead__;
				pointer = pointer__;
				byteSize = byteSize__;
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
        ELEM* FMGL(pointer);
        x10_long FMGL(size);
        ExplicitMemory* FMGL(memobj);

        MCData_Base()
                : FMGL(pointer)(NULL),
                  FMGL(size)(0),
                  FMGL(memobj)(NULL)
        { }
        MCData_Base(ELEM* pointer__, x10_long size__, ExplicitMemory* memobj__)
                : FMGL(pointer)(pointer__),
                  FMGL(size)(size__),
                  FMGL(memobj)(memobj__)
        { }

        static inline THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed) {
        	return _make(numElements, alignment, zeroed, "--", 0);
        }
        static inline THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed, int line) {
        	return _make(numElements, alignment, zeroed, "--", line);
        }
        static THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed, const char* filename, int line) {
                if (0 == numElements) {
                        return THIS(NULL, 0, NULL);
                }
                assert((alignment & (alignment-1)) == 0);
                x10_long size = alignment + numElements*sizeof(ELEM);

                // for memory usage analisys
                //if(size > 1000000) {
                //      printf("Large memory allocation: [%d bytes]\n", size);
                //}

                bool containsPtrs = x10aux::getRTT<ELEM>()->containsPtrs;
                if(size <  __ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_SIZETHRESHOLD || !__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_USEEXP ){
                        ELEM* allocMem = x10aux::alloc<ELEM>(size, containsPtrs);
                        if (zeroed) {
                                memset(allocMem, 0, size);
                        }
                        if(alignment > 0) {
                                x10_long alignDelta = alignment-1;
                                x10_long alignMask = ~alignDelta;
                                x10_long alignedMem = ((size_t)allocMem + alignDelta) & alignMask;
                                return THIS((ELEM*)alignedMem, numElements, NULL);
                        }
                        return THIS(allocMem, numElements, NULL);
                }else{
                        ExplicitMemory *exp = ExplicitMemory::_make(numElements, alignment, zeroed, sizeof(ELEM), containsPtrs, filename, line);
                        return THIS((ELEM*)(exp->pointer), numElements, exp);
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
template<class T> class MCData_Impl : public MCData_Base<MCData_Impl<T>, T> {
public:
        typedef MCData_Impl<T> THIS;
        typedef MCData_Base<MCData_Impl<T>, T> BASE;
        typedef T ELEM;
        typedef T TYPE;
        static int returnSize(){
        	return sizeof(ELEM);
        }

        MCData_Impl()
                : BASE()
        { }

        MCData_Impl(ELEM* pointer__, x10_long size__, ExplicitMemory* memobj__)
                : BASE(pointer__, size__, memobj__)
        { }

        static THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed) {
                return BASE::_make(numElements, alignment, zeroed);
        }
        static THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed, const char* filename, int line) {
                        return BASE::_make(numElements, alignment, zeroed, filename, line);
                }

        x10_boolean isValid() { return (this->FMGL(memobj) == NULL) || (this->FMGL(memobj)->allocHead != NULL); }

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

        static void asyncCopy(MCData_Impl<T> src, void* dst, x10_long dstIndex, x10aux::place dstPlace);
        static void asyncCopy(void* src, x10_long srcIndex, x10aux::place srcPlace, MCData_Impl<T> dst);

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
//                MCData_Impl<T> allocMem = tfunc<T>::_template_make(size, 0, false);
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

template<class T> struct MakeStruct{
	static MCData_Impl<T> make(x10_long numElements, x10_int alignment, x10_boolean zeroed, const char* filename, int line) {
			MCData_Impl<T> this_ = MCData_Base<MCData_Impl<T>, T>::_make(numElements, alignment, zeroed, filename, line);
			return this_;
	}
	static MCData_Impl<T> make_nocons(x10_long numElements, x10_int alignment, x10_boolean zeroed, const char* filename, int line) {
			return MCData_Base<MCData_Impl<T>, T>::_make(numElements, alignment, zeroed, filename, line);
	}
	static MCData_Impl<T> make(x10_long numElements, x10_int alignment, x10_boolean zeroed) {
			MCData_Impl<T> this_ = MCData_Base<MCData_Impl<T>, T>::_make(numElements, alignment, zeroed);
			return this_;
	}
	static MCData_Impl<T> make_nocons(x10_long numElements, x10_int alignment, x10_boolean zeroed) {
			return MCData_Base<MCData_Impl<T>, T>::make(numElements, alignment, zeroed);
	}
};
template<class T> struct MakeStruct<T*>{
	static MCData_Impl<T*> make(x10_long numElements, x10_int alignment, x10_boolean zeroed, const char* filename, int line) {
			MCData_Impl<T*> this_ = MCData_Base<MCData_Impl<T*>, T>::_make(numElements, alignment, zeroed, filename, line);
			for(x10_long i = 0; i < numElements; ++i) {
					T* elem = new (&this_.FMGL(pointer)[i]) T();
					elem->_constructor();
			}
			return this_;
	}
	//to avoid compile error (some T doesn't have _constructor())
	static MCData_Impl<T*> make_nocons(x10_long numElements, x10_int alignment, x10_boolean zeroed, const char* filename, int line) {
			MCData_Impl<T*> this_ = MCData_Base<MCData_Impl<T*>, T>::_make(numElements, alignment, zeroed, filename, line);
			for(x10_long i = 0; i < numElements; ++i) {
					T* elem = new (&this_.FMGL(pointer)[i]) T();
			}
			return this_;
	}
	static MCData_Impl<T*> make(x10_long numElements, x10_int alignment, x10_boolean zeroed) {
			MCData_Impl<T*> this_ = MCData_Base<MCData_Impl<T*>, T>::_make(numElements, alignment, zeroed);
			for(x10_long i = 0; i < numElements; ++i) {
					T* elem = new (&this_.FMGL(pointer)[i]) T();
					elem->_constructor();
			}
			return this_;
	}
	static MCData_Impl<T*> make_nocons(x10_long numElements, x10_int alignment, x10_boolean zeroed) {
			MCData_Impl<T*> this_ = MCData_Base<MCData_Impl<T*>, T>::_make(numElements, alignment, zeroed);
			for(x10_long i = 0; i < numElements; ++i) {
					T* elem = new (&this_.FMGL(pointer)[i]) T();
			}
			return this_;
	}
};

// specialized for class types
// class type is determined whether it has default constructor (constructor that have no parameters)
//template <typename T, void(T::*)()>
//struct MCData_sfinae_helper { typedef void type; };

template<class T> class MCData_Impl<T*>
        : public MCData_Base<MCData_Impl<T*>, T> {
public:
        typedef MCData_Impl<T*> THIS;
        typedef MCData_Base<THIS, T> BASE;
        typedef T ELEM;
        typedef T* TYPE;
        static int returnSize(){
        	return sizeof(ELEM);
        }

        MCData_Impl()
                : BASE()
        { }

        MCData_Impl(ELEM* pointer__, x10_long size__, ExplicitMemory* memobj__)
                : BASE(pointer__, size__, memobj__)
        { }

//        static THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed) {
//                THIS this_ = BASE::_make(numElements, alignment, zeroed);
//                for(x10_long i = 0; i < numElements; ++i) {
//                        T* elem = new (&this_.FMGL(pointer)[i]) T();
//                        elem->_constructor();
//                }
//                return this_;
//        }
//        static THIS _make(x10_long numElements, x10_int alignment, x10_boolean zeroed, const char* filename, int line) {
//                THIS this_ = BASE::_make(numElements, alignment, zeroed, filename, line);
//                for(x10_long i = 0; i < numElements; ++i) {
//                        T* elem = new (&this_.FMGL(pointer)[i]) T();
//                        elem->_constructor();
//                }
//                return this_;
//        }

        x10_boolean isValid() { return (this->FMGL(memobj) == NULL) || (this->FMGL(memobj)->allocHead != NULL); }

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

        static void asyncCopy(MCData_Impl<T*> src, void* dst, x10_long dstIndex, x10aux::place dstPlace);
        static void asyncCopy(void* src, x10_long srcIndex, x10aux::place srcPlace, MCData_Impl<T*> dst);

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
                //THIS allocMem = _make(size, 0, false);
                //THIS allocMem = MakeStruct<T*>::make(size, 0, false);
                MCData_Impl<T*> allocMem = MCData_Base<MCData_Impl<T*>, T>::_make(size, 0, false);
//                			for(x10_long i = 0; i < numElements; ++i) {
//                					T* elem = new (&this_.FMGL(pointer)[i]) T();
//                					elem->_constructor();
//                			}
                for(x10_long i = 0; i < size; ++i) {
                    T* elem = new (&allocMem->FMGL(pointer)[i]) T();
                    //elem -> _constructor();
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
#include <x10/lang/Place.h>
#include <x10/lang/String.h>
#include <x10/lang/UnsupportedOperationException.h>

#ifndef ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_IMPLEMENTATION

namespace org { namespace scalegraph { namespace util {

// MCData_Base //

template<class THIS, typename ELEM> void MCData_Base<THIS, ELEM>::del() {
        if(FMGL(memobj) == NULL){
			x10aux::dealloc(FMGL(pointer));
        }else{
        	// TODO: release memobj
        	x10aux::alloc_lock.lock();
			GC_register_finalizer(FMGL(memobj), NULL, NULL, NULL, NULL );
			FMGL(memobj)->destruct();
			x10aux::alloc_lock.unlock();

			if(__ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_PRINT){
				printf("del exp p;%p\n ", FMGL(memobj));
				printf("del size:%ld\n",FMGL(memobj)->byteSize);
			}
        }
		FMGL(pointer) = NULL;
		FMGL(size) = 0;
		FMGL(memobj) = NULL;
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
/*
 * namespace x10 {
	namespace lang {
		class Place;
	}
    namespace util {
    	extern void IMC_copyToBody(void *srcAddr, void *dstAddr, x10_int numBytes,
                               x10::lang::Place dstPlace, bool overlap, x10::lang::VoidFun_0_0* notif);
    	extern void IMC_copyFromBody(void *srcAddr, void *dstAddr, x10_int numBytes,
                                 x10::lang::Place srcPlace, bool overlap, x10::lang::VoidFun_0_0* notif);
    }
}
 */

template<class T> void MCData_Impl<T>::asyncCopy(MCData_Impl<T> src, void* dst, x10_long dstIndex, x10aux::place dstPlace)
{
	x10_long l = 0, r = src.FMGL(size);
	x10_long mx = (1L<<30)/sizeof(T);
	while (l < r) {
		x10_long c = (r-l < mx) ? r-l : mx;
		::x10::util::IMC_copyToBody((T*)src.FMGL(pointer) + l, (T*)dst + dstIndex + l, c * sizeof(T), ::x10::lang::Place::_make(dstPlace), true, NULL);
		l += c;
	}
	//::x10::util::IMC_copyToBody(src.FMGL(pointer), (T*)dst + dstIndex, src.FMGL(size) * sizeof(T), ::x10::lang::Place::_make(dstPlace), true, NULL);
}
template<class T> void MCData_Impl<T>::asyncCopy(void* src, x10_long srcIndex, x10aux::place srcPlace, MCData_Impl<T> dst)
{
	x10_long l = 0, r = dst.FMGL(size);
	x10_long mx = (1L<<30)/sizeof(T);
	while (l < r) {
		x10_long c = (r-l < mx) ? r-l : mx;
		::x10::util::IMC_copyFromBody((T*)src + srcIndex + l, (T*)dst.FMGL(pointer) + l, c * sizeof(T), ::x10::lang::Place::_make(srcPlace), true, NULL);
		l += c;
	}
	//::x10::util::IMC_copyFromBody((T*)src + srcIndex, dst.FMGL(pointer), dst.FMGL(size) * sizeof(T), ::x10::lang::Place::_make(srcPlace), true, NULL);
}

template<class T> void MCData_Impl<T*>::asyncCopy(MCData_Impl<T*> src, void* dst, x10_long dstIndex, x10aux::place dstPlace)
{
	x10_long l = 0, r = src.FMGL(size);
	x10_long mx = (1L<<30)/sizeof(T);
	while (l < r) {
		x10_long c = (r-l < mx) ? r-l : mx;
		::x10::util::IMC_copyToBody((T*)src.FMGL(pointer) + l, (T*)dst + dstIndex + l, c * sizeof(T), ::x10::lang::Place::_make(dstPlace), true, NULL);
		l += c;
	}
	//::x10::util::IMC_copyToBody(src.FMGL(pointer), (T*)dst + dstIndex, src.FMGL(size) * sizeof(T), ::x10::lang::Place::_make(dstPlace), true, NULL);
}

template<class T> void MCData_Impl<T*>::asyncCopy(void* src, x10_long srcIndex, x10aux::place srcPlace, MCData_Impl<T*> dst)
{
	x10_long l = 0, r = dst.FMGL(size);
	x10_long mx = (1L<<30)/sizeof(T);
	while (l < r) {
		x10_long c = (r-l < mx) ? r-l : mx;
		::x10::util::IMC_copyFromBody((T*)src + srcIndex + l, (T*)dst.FMGL(pointer) + l, c * sizeof(T), ::x10::lang::Place::_make(srcPlace), true, NULL);
		l += c;
	}
	//::x10::util::IMC_copyFromBody((T*)src + srcIndex, dst.FMGL(pointer), dst.FMGL(size) * sizeof(T), ::x10::lang::Place::_make(srcPlace), true, NULL);
}


} } } // namespace org { namespace scalegraph { namespace util {

#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_IMPLEMENTATION
#endif // ORG_SCALEGRAPH_UTIL_MEMORYCHUNKDATA_H_NODEPS

