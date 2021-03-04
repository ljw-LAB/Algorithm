#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"CLinkedList.h"

void ShowEmployeeInfo(People* peo)
{
	printf("people name : %s \n", peo->name);
	printf("people id : %d \n", peo->id);

}

People* WhoNightDuty(List *plist, char *name ,int num)
{
	int i, temp_num;
	People *ret;

	temp_num = LCount(plist);

	LFirst(plist, &ret);

	if(strcmp(ret->name, name) != 0)
	{
		for(i = 0; i < temp_num-1; i++)
		{
			LNext(plist, &ret);
			if(strcmp(ret->name, name) == 0)
				break;
		}
		if(i >= temp_num)
			return NULL;
	}

	for(i = 0; i < num; i++)
		LNext(plist, &ret);

	return ret;
}

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

	
	ShowEmployeeInfo(WhoNightDuty(&list, "dee", 3));
	//day_counter(&list, "eee", 3);
	return 0;
}