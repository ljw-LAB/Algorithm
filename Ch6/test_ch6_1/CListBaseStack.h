#ifndef __CB_STACK_H__
#define __CB_STACK_H__
#include "CLinkedList.h"

#define TRUE    1
#define FALSE   0

typedef int Data;

typedef struct _CListStack
{
    List* head;

}CListStack;

typedef CListStack Stack;

void StackInit(Stack *pstack);
int SIsEmpty(Stack* pstack);
void SPush(Stack* pstack, Data data);
Data SPop(Stack* pstack);
Data SPeek(Stack *pstack);

#endif // !__CB_STACK_H__
