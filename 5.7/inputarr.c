// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void main(void)
{
	printf("5���� ������ �ϳ��� �Է����ּ��� ('-1'�� �Է��ϸ� �Է��� �ߴܵ˴ϴ�)\n");
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