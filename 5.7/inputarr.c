// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void main(void)
{
	printf("5개의 정수를 하나씩 입력해주세요 ('-1'을 입력하면 입력이 중단됩니다)\n");
	int arr[5];
	int end_index = 5;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == -1)
		{
			end_index = i;
			break;
		}
	}
	for (int i = 0; i < end_index; i++)
	{
		printf("%d ", arr[i]);
	}
}