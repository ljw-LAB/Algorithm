#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct _empInfo
{
    int empNum;
    int age;

}EmpInfo;

int main(void)
{
    EmpInfo empinfoArr[1000];
    EmpInfo ei;
    int eNum;

    printf("사번과 나이 입력: ");
    scanf("%d %d", &(ei.empNum), &(ei.age));
    empinfoArr[ei.empNum] = ei;

    printf("확인하고픈 직원의 사번 입력: ");
    scanf("%d", &eNum);

    ei = empinfoArr[eNum];
    printf("사번 : %d, 나이 : %d \n", ei.empNum, ei.age);

    return 0;
}