// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void main(void)
{
	int arr[] = { 2, 3, 1, 5, 7 };
	int min = arr[0];
	int min_index = 0;
	for (int i = 1; i < 5; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			min_index = i;
		}	
	}
	printf("�ּҰ�: %d, ÷�ڰ�: %d\n", min, min_index);
}
