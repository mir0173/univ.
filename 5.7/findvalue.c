// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void main(void)
{
	int list[] = { 1, 7, 4, 2, 5, 7, 5, 8, 4, 3 };
	int key;
	printf("� ���� ã���ó��� : ");
	scanf("%d", &key);
	for (int i = 0; i < 10; i++)
	{
		if (list[i] == key)
		{
			printf("�ε����� %d�Դϴ�.\n", i);
			break;
		}
		else if (i == 9)
		{
			printf("ã�� ���� �����ϴ�.\n");
		}
	}
}