#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "NameCard.h"

Namecard* MakenameCard(char *name, char *phone)
{
    Namecard *person;
    person = (Namecard*) malloc(sizeof(Namecard));

	strcpy(person->name, name);
	strcpy(person->phone, phone);

	return person;
}

void ShowNameCardInfo(Namecard *pcard)
{
    printf("name : %s \n", pcard->name);
    printf("phone : %s \n\n", pcard->phone);
}

int NameCompare(Namecard *pcard, char *name)
{
	if(strcmp(pcard->name, name) == 0)
		return 0;       // arr1 == arr1 이면 0
}

void ChangePhoneNum(Namecard *pcard, char *phone)
{
	strcpy(pcard->phone, phone);
}