// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

void main(void)
{
	printf("### ������ ǥ ###\n");
	for (int i = 1; i < 10; i++)
	{
		for (int j = 2; j < 6; j++)
		{
			printf("%d x %d = %2d\t", j, i, i * j);
		}
		printf("\n");
	}
	for (int i = 1; i < 10; i++)
	{
		printf("\n");
		for (int j = 6; j < 10; j++)
		{
			printf("%d x %d = %2d\t", j, i, i * j);
		}
	}
	/* 3�� for�� ����
	printf("### ������ ǥ ###\n");
	for(int h = 2; h <= 6; h += 4)
	{
		for (int i = 1; i < 10; i++)
		{
			for (int j = h;  j < h + 4; j++)
			{
				printf("%d x %d = %2d\t", j, i, i * j);
			}
			printf("\n");
		}
		printf("\n");
	}
	*/
}