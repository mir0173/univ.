// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int InputPositiveData(void);
void main(void)
{
	int age = InputPositiveData();
	if (age > 19)
		printf("�����Դϴ�.");
	else
		printf("�̼����Դϴ�.");
}

int InputPositiveData(void)
{
	int num = -1;
	while (num < 0 || num > 120)
	{
		printf("���̸� �Է��� �ּ��� : ");
		scanf("%d", &num);
	}
	return num;
}