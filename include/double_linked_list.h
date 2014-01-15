/*
 * double_linked_list.h
 *
 *  Created on: 2011/02/01
 *      Author: ueno
 */

#ifndef __SCALEGRAPH_DOUBLE_LINKED_LIST_H_
#define __SCALEGRAPH_DOUBLE_LINKED_LIST_H_

#include <stddef.h>

namespace scalegraph {

template<typename Type>
void inline initializeListHead(Type* head)
{
	head->fLink = head->bLink = head;
}

template<typename Type>
void inline initializeListEntry(Type* entry)
{
#ifndef NDEBUG
	entry->bLink = NULL;
	entry->fLink = NULL;
#endif
}

template<typename Type>
bool inline listIsEmpty(Type* head)
{
	return head->bLink == head;
}

template<typename Type>
void inline listRemove(Type* entry)
{
	Type* fLink = entry->fLink;
	Type* bLink = entry->bLink;
	entry->bLink->fLink = fLink;
	entry->fLink->bLink = bLink;
#ifndef NDEBUG
	entry->bLink = NULL;
	entry->fLink = NULL;
#endif
}

template<typename Type>
void inline listInsertFoward(Type* pos, Type* newentry)
{
#ifndef NDEBUG
//	assert (newentry->bLink == NULL);
//	assert (newentry->fLink == NULL);
#endif
	Type* fLink = pos->fLink;
	Type* bLink = pos;
	newentry->fLink = fLink;
	newentry->bLink = bLink;
	fLink->bLink = newentry;
	bLink->fLink = newentry;
}

template<typename Type>
void inline listInsertBack(Type* pos, Type* newentry)
{
#ifndef NDEBUG
	assert (newentry->bLink == NULL);
	assert (newentry->fLink == NULL);
#endif
	Type* fLink = pos;
	Type* bLink = pos->bLink;
	newentry->fLink = fLink;
	newentry->bLink = bLink;
	fLink->bLink = newentry;
	bLink->fLink = newentry;
}

template <typename Type>
struct ListEntry {
	Type *fLink, *bLink;
};

} // namespace scalegraph {

#endif /* __SCALEGRAPH_DOUBLE_LINKED_LIST_H_ */
