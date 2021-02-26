#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//typedef struct _node
//{
//    int data;
//    struct _node *next;
//}Node;
//
//int main(void)
//{
//    Node *head =NULL;
//    Node *tail =NULL;
//    Node *cur = NULL;
//
//    Node *newNode = NULL;
//    Node *DMYNode = NULL;
//
//    int readData;
//	head = DMYNode;
//
//    while(1)
//    {
//
//		printf("자연수 입력 \n");
//        scanf("%d", &readData);
//        if(readData < 1)
//            break;
//        
//        newNode = (Node *)malloc(sizeof(Node));
//        newNode->data = readData;
//        newNode->next = NULL;
//        
//		if (DMYNode == NULL)
//			DMYNode = newNode;
//		else
//			tail->next = newNode; //3) 2의 next에 3의 주소 입력, : tail->next = newnode == 2->next = &3 [head]→[2|next]→[3|NULL]
//
//		tail = newNode;
//    }
//    printf("\n");
//
//    printf("입력 받은 데이터의 전체출력! \n");
//    if(DMYNode->next == NULL)
//    {
//        printf("저장된 자연수가 존재하지 않았습니다 \n");
//    }
//    else
//    {
//        cur = DMYNode;
//        printf("%d ", cur->data);
//        while(cur->next != NULL)
//        {
//            cur = cur->next;
//            printf("%d ", cur->data);
//        }
//    }
//    printf("\n\n");
//
//    if(head == NULL)
//    {
//        return 0;
//    }
//    else
//    {
//        Node *delNode = DMYNode;
//        Node *delNextNode = DMYNode->next;
//
//        printf("%d을(를) 삭제합니다 . \n", head->data);
//        free(delNode);
//        while(delNextNode != NULL)
//        {
//            delNode = delNextNode;
//            delNextNode = delNextNode->next;
//            printf("%d을(를) 삭제합니다 . \n", delNode->data);
//            free(delNode);
//        }
//    }
//    return 0;
//}

typedef struct _node
{
	int data;
	struct _node *next;
}Node;

int main(void)
{
	Node *head = NULL;
	Node *tail = NULL;
	Node *cur = NULL;

	Node* newNode = NULL;

	int readData;

	head = (Node *)malloc(sizeof(Node));
	tail = head;

	while (1)
	{
		printf("자연수 입력 \n");
		scanf("%d", &readData);
		if (readData < 1)
			break;

		newNode = (Node *)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		tail->next = newNode; //3) 2의 next에 3의 주소 입력, : tail->next = newnode == 2->next = &3 [head]→[2|next]→[3|NULL]
		tail = newNode;
	}
	printf("\n");

	printf("입력 받은 데이터의 전체출력! \n");
	if (head == NULL)
	{
		printf("저장된 자연수가 존재하지 않았습니다 \n");
	}
	else
	{
		cur = head;
		while (cur->next != NULL)
		{
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n\n");

	if (head == NULL)
	{
		return 0;
	}
	else
	{
		Node *delNode = head;
		Node *delNextNode = head->next;

		while (delNextNode != NULL)
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;
			printf("%d을(를) 삭제합니다 . \n", delNode->data);
			free(delNode);
		}
	}
	return 0;
}