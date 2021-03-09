#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"
#include "CListBaseStack.h"

void StackInit(Stack *pstack)
{
    pstack->head = (List *)malloc(sizeof(List));
    ListInit(pstack->head);
}

int SIsEmpty(Stack* pstack)
{
    if(LCount(pstack->head)==0)
        return TRUE;
    else
        return FALSE;
}

void SPush(Stack* pstack, Data data)
{
    LInsertFront(pstack->head, data);
}

Data SPop(Stack* pstack)
{
    Data data;
    LFirst(pstack->head, &data);
    LRemove(pstack->head);
    return data;
}

Data SPeek(Stack *pstack)
{
    Data data;
    LFirst(pstack->head, &data);
    return data;
}