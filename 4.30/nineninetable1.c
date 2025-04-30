// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

// void PrintOne(int i);
void main(void)
{
	printf("### 구구단 표 ###\n");
	for (int i = 2; i < 10; i++)
	{
		// PrintOne(i);
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %2d\n", i, j, i * j);
		}
		printf("\n");
	}
}

/* 함수로 구현
void PrintOne(int i)
{
	for (int j = 1; j < 10; j++)
	{
		printf("%d x %d = %2d\n", i, j, i * j);
	}
	printf("\n");
}
*/ 