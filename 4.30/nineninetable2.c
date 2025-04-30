// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

void main(void)
{
	printf("### 구구단 표 ###\n");
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
	/* 3중 for문 형태
	printf("### 구구단 표 ###\n");
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