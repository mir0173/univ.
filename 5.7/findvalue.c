// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void main(void)
{
	int list[] = { 1, 7, 4, 2, 5, 7, 5, 8, 4, 3 };
	int key;
	printf("어떤 값을 찾으시나요 : ");
	scanf("%d", &key);
	for (int i = 0; i < 10; i++)
	{
		if (list[i] == key)
		{
			printf("인덱스는 %d입니다.\n", i);
			break;
		}
		else if (i == 9)
		{
			printf("찾는 값이 없습니다.\n");
		}
	}
}