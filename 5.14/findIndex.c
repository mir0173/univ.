//25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int Find(int a1[], int ele, int size);
void main(void)
{
    int ele;
    int list1[] = { 11, 22, 33, 22, 44 };
    printf("ã�� ��Ҹ� �Է����ּ��� : ");
    scanf("%d", &ele);
    int index = Find(list1, ele, sizeof(list1) / sizeof(list1[0]));
    printf(index == -1 ? "%d�� ��Ͽ� �����ϴ�." : "%d�� ��� %d�� �ֽ��ϴ�.", ele, index);
}

int Find(int a1[], int ele, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a1[i] == ele) return i;
    }
    return -1;
}
