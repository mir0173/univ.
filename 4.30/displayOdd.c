// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

void DisplayOdd(int s, int e, int m);


void main(void)
{
	int s, e, m;
	printf("숫자 범위를 입력해 주세요. (min max): ");
	scanf("%d %d", &s, &e);
	printf("제외할 m값을 입력해 주세요: ");
	scanf("%d", &m);
	DisplayOdd(s, e, m);
}

void DisplayOdd(int s, int e, int m)
{
	int key = 0;
	for (int i = s; i <= e; i++)
	{
		if (i % m != 0 && i % 2 != 0)
		{
			printf("%2d ", i);
			key++;
			if (key == 10)
			{
				key = 0;
				printf("\n");
			}
		}
	}
}
