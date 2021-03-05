#include <stdio.h>
#include "ArrayBaseStack.h"

int main(void)
{
    Stack stack;
    StackInit(&stack);
    printf("topIndex : %d \n", stack.topIndex);

	SPush(&stack, 1);
	printf("stack[%d] : %d, SPeek : %d \n", stack.topIndex, stack.stackArr[stack.topIndex], SPeek(&stack)); //���� ���ð���, ���ð��� ��ġ ǥ��
    SPush(&stack, 2);
	printf("stack[%d] : %d, SPeek : %d \n", stack.topIndex, stack.stackArr[stack.topIndex], SPeek(&stack));
    SPush(&stack, 3); 
	printf("stack[%d] : %d, SPeek : %d \n", stack.topIndex, stack.stackArr[stack.topIndex], SPeek(&stack));
    SPush(&stack, 4);
	printf("stack[%d] : %d, SPeek : %d \n", stack.topIndex, stack.stackArr[stack.topIndex], SPeek(&stack));
    SPush(&stack, 5);
	printf("stack[%d] : %d, SPeek : %d \n", stack.topIndex, stack.stackArr[stack.topIndex], SPeek(&stack));
    
	printf("\n");

	while(!SIsEmpty(&stack))
    {
		printf("POP stack[%d] : %d, SPeek : %d ", stack.topIndex, stack.stackArr[stack.topIndex], SPeek(&stack)); //Pop�� ����, �׸��� ������ġ ��,  Pop���� ����� ǥ��
		printf("Current Value : stack[%d] = %d \n", stack.stackArr[stack.topIndex], SPop(&stack));
		
		//for (int i = 0; i < stack.topIndex+1; i++)
		for (int i = 0; i < 5; i++)
		{
			printf("stack[%d] : %d \n", i, stack.stackArr[i]); // POP����, ��ü ���� �� ǥ��
		}
		printf("\n");
    }
	/*for (int i = 0; i < stack.topIndex; i++)
	{
		printf("stack[%d] : %d \n", i, stack.stackArr[i]);
	}*/

    return 0;
}