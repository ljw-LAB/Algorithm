#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__

#include "Slot2.h"
typedef Slot LData;

#define TRUE 1
#define FALSE 0

typedef struct _node
{
	LData data;
	struct _node *next;
}Node;

typedef struct __linkedList
{
	Node *head;
	Node *cur;
	Node *before;
	int numOfData;
	int(*comp)(LData d1, LData d2);

}LinkedList;

typedef LinkedList List;

void ListInit(List *plist);
void LInsert(List *plist, LData data);

int LFirst(List *plist, LData *pdata);
int LNext(List *plist, LData *pdata);

LData LRemove(List *plist);
int LCount(List *plist);

void setSortRule(List *plist, int(*comp)(LData d1, LData d2));

#endif