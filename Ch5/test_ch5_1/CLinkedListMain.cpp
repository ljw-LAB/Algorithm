#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"CLinkedList.h"

int main(void)
{
	int i;
	People *temp;
	List list;

	ListInit(&list);

	temp = (People*)malloc(sizeof(People));
	temp->id = 111;
	strcpy(temp->name, "aee");
	LInsert(&list, temp);

	temp = (People*)malloc(sizeof(People));
	temp->id = 222;
	strcpy(temp->name, "bee");
	LInsert(&list, temp);

	temp = (People*)malloc(sizeof(People));
	temp->id = 333;
	strcpy(temp->name, "cee");
	LInsert(&list, temp);

	temp = (People*)malloc(sizeof(People));
	temp->id = 444;
	strcpy(temp->name, "dee");
	LInsert(&list, temp);

	temp = (People*)malloc(sizeof(People));
	temp->id = 555;
	strcpy(temp->name, "eee");
	LInsert(&list, temp);

	if(LFirst(&list, &temp))
	{
		printf("%d %s \n", temp->id, temp->name);

		for(i = 0; i<LCount(&list)-1; i++)
		{
			if(LNext(&list, &temp))
				printf("%d %s \n", temp->id, temp->name);
		}
	}
	printf("\n");

	day_counter(&list, "eee", 3);
	return 0;
}