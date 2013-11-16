
#ifndef HYPER_ANF_NATIVES_H
#define HYPER_ANF_NATIVES_H

namespace org { namespace scalegraph { namespace api {

void inline hyperANF_update_counter(x10_byte* counter, x10_byte* mes) {
	for(int i=0; i < 16; ++i) {
		counter[i] = counter[i] > mes[i] ? counter[i] : mes[i];
	}
}

}}} // namespace org { namespace scalegraph { namespace api {

#endif // #ifndef HYPER_ANF_NATIVES_H

