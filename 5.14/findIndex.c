//25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int Find(int a1[], int ele, int size);
void main(void)
{
    int ele;
    int list1[] = { 11, 22, 33, 22, 44 };
    printf("찾을 요소를 입력해주세요 : ");
    scanf("%d", &ele);
    int index = Find(list1, ele, sizeof(list1) / sizeof(list1[0]));
    printf(index == -1 ? "%d는 목록에 없습니다." : "%d는 요소 %d에 있습니다.", ele, index);
}

int Find(int a1[], int ele, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a1[i] == ele) return i;
    }
    return -1;
}
