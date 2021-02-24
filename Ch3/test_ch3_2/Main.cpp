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
	//person = MakenameCard("Hong", "01012345678");
	LInsert(&list, person);

	person = MakenameCard("ĳ����", "01023456789");
	//person = MakenameCard("Gil", "01012345678");
	LInsert(&list, person);

	person = MakenameCard("�Ӳ���", "01034567890");
	//person = MakenameCard("Dong", "01012345678");
	LInsert(&list, person);

	//char test_arr1[5] = {'a', 'b', 'c','d', 'e'};
	//char test_arr2[5] = { '1','2','3','4','5' };
	//char test_arr1[] = "ȫ�浿";
	//char test_arr2[] = "01012345678";
	//ShowNameCardInfo(person);
	
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
	//printf("%s %s \n", MakenameCard(test_arr1, test_arr2)->name, MakenameCard(test_arr1, test_arr2)->phone);

	return 0;
}