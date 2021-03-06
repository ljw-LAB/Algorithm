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

	person = MakenameCard("홍길동", "01012345678");
	//person = MakenameCard("Hong", "01012345678");
	LInsert(&list, person);

	person = MakenameCard("캐스퍼", "01023456789");
	//person = MakenameCard("Gil", "01012345678");
	LInsert(&list, person);

	person = MakenameCard("임꺽정", "01034567890");
	//person = MakenameCard("Dong", "01012345678");
	LInsert(&list, person);

	//char test_arr1[5] = {'a', 'b', 'c','d', 'e'};
	//char test_arr2[5] = { '1','2','3','4','5' };
	//char test_arr1[] = "홍길동";
	//char test_arr2[] = "01012345678";
	//ShowNameCardInfo(person);
	
	printf("현재 데이터 수 : %d \n\n", LCount(&list));

	if(LFirst(&list, &person))
	{
		ShowNameCardInfo(person);
		while(LNext(&list, &person))
		ShowNameCardInfo(person);
	}

	if(LFirst(&list, &person))
	{
		if(!NameCompare(person, "캐스퍼")) //  a == 0 이면 동작, a가 거짓이면 동작
		{
			ShowNameCardInfo(person);
		}
		else
		{
			while(LNext(&list, &person))
			{
				if(!NameCompare(person, "캐스퍼"))
				{
					ShowNameCardInfo(person);
				}	
			}
		}
	}
	
	if(LFirst(&list, &person))
	{
		if(!NameCompare(person, "임꺽정")) //  a == 0 이면 동작, a가 거짓이면 동작
		{
			ShowNameCardInfo(person);
		}
		else
		{
			while(LNext(&list, &person))
			{
				if(!NameCompare(person, "임꺽정"))
				{
					ChangePhoneNum(person,"01134567890");
				}	
			}
		}
	}

	if(LFirst(&list, &person))
	{
		if(!NameCompare(person, "홍길동")) //  a == 0 이면 동작, a가 거짓이면 동작
		{
			LRemove(&list);
		}
		else
		{
			while(LNext(&list, &person))
			{
				if(!NameCompare(person, "홍길동"))
				{
					LRemove(&list);
				}	
			}
		}
	}

	printf("현재 데이터 수 : %d \n\n", LCount(&list));

	if(LFirst(&list, &person))
	{
		ShowNameCardInfo(person);
		while(LNext(&list, &person))
		ShowNameCardInfo(person);
	}
	//printf("%s %s \n", MakenameCard(test_arr1, test_arr2)->name, MakenameCard(test_arr1, test_arr2)->phone);

	return 0;
}