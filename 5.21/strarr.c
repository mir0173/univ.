// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void printStrarr(char str_arr[][10], int size);
void main(void)
{
	char str_arr[5][10] = { "" };
	for (int i = 0; i < 5; i++)
	{
		printf("%d ��° ������ �Է����ּ��� : ", i + 1);
		scanf(" %[^\n]", str_arr[i]); // gets(str_arr[i]);
	}
	printStrarr(str_arr, 5);
}

void printStrarr(char str_arr[][10], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ��° ���� : %s\n", i + 1, str_arr[i]);
	}
}
