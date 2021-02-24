

#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "ArrayList.h"

int main()
{
	List list;
	Namecard *person;
	ListInit(&list);

	person = (Namecard*)malloc(sizeof(person));

 	person = MakenameCard("ȫ�浿", "01012345678");
	LInsert(&list, person);

	person = MakenameCard("ĳ����", "01023456789");
	LInsert(&list, person);

	person = MakenameCard("�Ӳ���", "01034567890");
	LInsert(&list, person);
	
	printf("���� ������ �� : %d \n\n", LCount(&list));

	if(LFirst(&list, &person))
	{
		ShowNameCardInfo(person);
		while(LNext(&list, &person))
		ShowNameCardInfo(person);
	}

	if(LFirst(&list, &person))
	{
		if(!NameCompare(person, "ĳ����")) //  a == 0 �̸� ����, a�� �����̸� ����
		{
			ShowNameCardInfo(person);
		}
		else
		{
			while(LNext(&list, &person))
			{
				if(!NameCompare(person, "ĳ����"))
				{
					ShowNameCardInfo(person);
				}	
			}
		}
	}
	
	if(LFirst(&list, &person))
	{
		if(!NameCompare(person, "�Ӳ���")) //  a == 0 �̸� ����, a�� �����̸� ����
		{
			ShowNameCardInfo(person);
		}
		else
		{
			while(LNext(&list, &person))
			{
				if(!NameCompare(person, "�Ӳ���"))
				{
					ChangePhoneNum(person,"01134567890");
				}	
			}
		}
	}

	if(LFirst(&list, &person))
	{
		if(!NameCompare(person, "ȫ�浿")) //  a == 0 �̸� ����, a�� �����̸� ����
		{
			LRemove(&list);
		}
		else
		{
			while(LNext(&list, &person))
			{
				if(!NameCompare(person, "ȫ�浿"))
				{
					LRemove(&list);
				}	
			}
		}
	}

	printf("���� ������ �� : %d \n\n", LCount(&list));

	if(LFirst(&list, &person))
	{
		ShowNameCardInfo(person);
		while(LNext(&list, &person))
		ShowNameCardInfo(person);
	}

	return 0;
}