// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void StringCopy(char dst[], char src[]);
void main(void)
{
	char exstring[10] = "";
	char dststring[10] = "";
	printf("������ �Է��ϼ��� : ");
	scanf("%s", exstring);;
	printf("���� ���� : %s\n", exstring);
	StringCopy(dststring, exstring);
	printf("������ ���� : %s\n", dststring);
}

void StringCopy(char dst[], char src[])
{
	int i;
	for (i = 0; src[i] != '\0'; i++)
	{
		dst[i] = src[i];
	}
	dst[i] = '\0';
}