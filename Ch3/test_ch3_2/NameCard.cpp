#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"

Namecard* MakenameCard(char *name, char *phone)
{
    Namecard *person;
    person = (Namecard*) malloc(sizeof(Namecard));

	int i;

    for (i = 0; name[i]; i++)
    {
        person->name[i] = name[i];
        //printf("person->name[%d] = name[%d] = %c\n",i, i, name[i]);
        //printf("person->name[%d] = %c\n", i, person->name[i]);
    }
    person->name[i] =0x00;
    //printf("person->name[%d] = %d\n", i, person->name[i]);

    for (i = 0; phone[i]; i++)
    {
        person->phone[i] = phone[i];
        //printf("person->phone[%d] = phone[%d] = %c\n",i, i, phone[i]);
        //printf("person->phone[%d] = %c\n", i, person->phone[i]);
    
    }
    person->phone[i] =0x00;
    //printf("person->phone[%d] = %d\n", i, person->phone[i]);

    //printf("%s \n", person->name);
    //printf("%s \n", person->phone);

	return person;
}

void ShowNameCardInfo(Namecard *pcard)
{
    printf("name : %s \n", pcard->name);
    printf("phone : %s \n\n", pcard->phone);

}

int NameCompare(Namecard *pcard, char *name)
{
    int i = 0;
    while (pcard->name[i] != '\0' || name[i] != '\0') {
        if (pcard->name[i] > name[i])
            return 1;       // arr1 > arr2 이면 양수
        else if (pcard->name[i] < name[i])
            return -1;       // arr1 < arr2 이면 음수
        i++;
    }

    // for (i = 0; name[i]; i++)
    // {
    //     //person->name[i] = name[i];
    //     printf("person->name[%d] = name[%d] = %c\n",i, i, name[i]);
    //     printf("person->name[%d] = %c\n", i, pcard->name[i]);
    // }

    return 0;       // arr1 == arr1 이면 0
}

void ChangePhoneNum(Namecard *pcard, char *phone)
{
    int i;
    for (i = 0; phone[i]; i++)
    {
        pcard->phone[i] = phone[i];
        //printf("person->phone[%d] = phone[%d] = %c\n",i, i, phone[i]);
        //printf("person->phone[%d] = %c\n", i, person->phone[i]);
    }
    pcard->phone[i] =0x00;
}