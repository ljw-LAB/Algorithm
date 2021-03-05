#include <stdio.h>
#include "ListBaseStack.h"

int main(void)
{
    Stack stack;
    StackInit(&stack);

    SPush(&stack, 1);
	printf("push : %d \n", stack.head->data);
	//printf("push : %d \n", stack.head->next->data); 출력안되거나 에러 발생
	printf("\n");

	SPush(&stack, 2);
	printf("push : %d \n", stack.head->data);
	printf("push : %d \n", stack.head->next->data);
	//printf("push : %d \n", stack.head->next->next->data); 출력안되거나 에러 발생
	printf("\n");

    SPush(&stack, 3);
	printf("push : %d \n", stack.head->data);
	printf("push : %d \n", stack.head->next->data);
	printf("push : %d \n", stack.head->next->next->data);
	printf("\n");

	SPush(&stack, 4);
	printf("push : %d \n", stack.head->data);
	printf("push : %d \n", stack.head->next->data);
	printf("push : %d \n", stack.head->next->next->data);
	printf("push : %d \n", stack.head->next->next->next->data);
	printf("\n");

	SPush(&stack, 5);
	printf("push : %d \n", stack.head->data);
	printf("push : %d \n", stack.head->next->data);
	printf("push : %d \n", stack.head->next->next->data);
	printf("push : %d \n", stack.head->next->next->next->data);
	printf("push : %d \n", stack.head->next->next->next->next->data);

	printf("\n");

    while(!SIsEmpty(&stack))
        printf("%d ", SPop(&stack));
        
    return 0;
}