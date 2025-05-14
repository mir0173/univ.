//25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int Delete(int a[], int s, int p);
void PrintArray(int a[], int n);
int main()
{
    int list1[] = { 11, 22, 33, 44, 55 };
    int index, valsize = sizeof(list1) / sizeof(list1[0]);
    printf("삭제할 요소의 인덱스 : ");
    scanf("%d", &index);
    valsize = Delete(list1, valsize, index);
    PrintArray(list1, valsize);
}

int Delete(int a[], int s, int p)
{
    for (int i = p; i < s - 1; i++)
    {
        a[i] = a[i + 1];
    }
    return s - 1;
}

void PrintArray(int a[], int n)
{
    printf("남은 유효한 배열 요소 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}