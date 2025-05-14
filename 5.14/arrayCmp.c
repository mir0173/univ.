//25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int arrayCmp(int a1[], int a2[], int size);
void main(void)
{
    int list1[] = { 1, 3, 4, 5, 6 };
    int list2[] = { 1, 3, 4, 5, 6 };
    int isSamearr = arrayCmp(list1, list2, sizeof(list1) / sizeof(list1[0]));
    printf(isSamearr == 0 ? "다른 배열입니다." : "같은 배열입니다.");
}

int arrayCmp(int a1[], int a2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a1[i] != a2[i]) return 0;
    }
    return 1;
}