#include <stdio.h>
#include "DLinkedList.h"

int main(void)
{
    List list;
    int data;
    ListInit(&list);

    LInsert(&list, 11);
    LInsert(&list, 11);
    LInsert(&list, 22);
    LInsert(&list, 22);
    LInsert(&list, 33);

    printf("���� �������� �� : %d \n", LCount(&list));

    if(LFirst(&list, &data))
    {
        printf("%d ", data);

        while(LNext(&list, &data))
            printf("%d ", data);

    }
    
    printf("\n");
    return 0;

}