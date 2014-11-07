
#include <algorithm> // heap

namespace test {

struct MMPointer {
	long remain;
	long* index_ptr;
	double* value_ptr;
};

struct MMComp {
	bool operator()(const MMPointer& s1, const MMPointer& s2) {
		return s1.index_ptr[0] > s2.index_ptr[0];
	}
};

// merge sparse vectors
// MC: MemoryChunk[Message]
// GM: GrowableMemory[Pair[Long,Double]]
template <typename MC, typename GM, typename PAIR>
void merge(MC& in, GM* out, const PAIR&) {
	int num_array = in.size();
	// make heap
	MMPointer heap[num_array];
	for(int i = 0; i < num_array; ++i) {
		// in.pointer(): Message*
		heap[i].remain = in.pointer()[i].FMGL(index).size();
		heap[i].index_ptr = in.pointer()[i].FMGL(index).pointer();
		heap[i].value_ptr = in.pointer()[i].FMGL(value).pointer();
	}
	std::make_heap(heap, heap + num_array, MMComp());
	// merge
	PAIR cur = {-1,0};
	// reference to cur
	long& cur_index = cur.FMGL(first);
	double& cur_value = cur.FMGL(second);

	while(num_array > 0) {
		std::pop_heap(heap, heap + num_array, MMComp());
		long index = *(heap[num_array-1].index_ptr++);
		double value = *(heap[num_array-1].value_ptr++);
		if(cur_index != index) {
			// new element
			if(cur_index != -1) out->add(cur);
			cur_index = index;
			cur_value = value;
		}
		else {
			// same element
			cur_value += value;
		}
		if(--(heap[num_array-1].remain) == 0) {
			// no more element in this array
			--num_array;
		}
		else {
			std::push_heap(heap, heap + num_array, MMComp());
		}
	}
	if(cur_index != -1) out->add(cur);
}

} // namespace test {
