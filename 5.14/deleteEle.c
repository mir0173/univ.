//25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int Delete(int a[], int s, int p);
void PrintArray(int a[], int n);
int main()
{
    int list1[] = { 11, 22, 33, 44, 55 };
    int index, valsize = sizeof(list1) / sizeof(list1[0]);
    printf("������ ����� �ε��� : ");
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
    printf("���� ��ȿ�� �迭 ��� : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}