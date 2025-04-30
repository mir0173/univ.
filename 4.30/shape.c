// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

void DisplayTriangle(int h);
void DisplayTriangle2(int h);
void PrintEle(int n, char ele);
void main(void)
{
	int height;
	do
	{
		printf("삼각형의 높이를 입력해 주세요 : ");
		scanf("%d", &height);
		DisplayTriangle(height);
		printf("\n");
		DisplayTriangle2(height);
	} while (height > 0);
}

void DisplayTriangle(int h)
{
	int i, j;
	for (i = 0; i < h; i++)
	{
		for (j = 1; j < h - i; j++)
		{
			printf(" ");
		}
		for (j = h - i; j <= h; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void DisplayTriangle2(int h)
{
	int i, j;
	for (i = 1; i <= h; i++)
	{
		PrintEle(h - i, ' ');
		PrintEle(i, '*');
		printf("\n");
	}
}

void PrintEle(int n, char ele)
{
	for (int i = 0; i < n; i++)
	{
		printf("%c", ele);
	}
}
