// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void StringConcat(char s1[], char s2[]);
void main(void)
{
	char exstring[10] = "";
	char constring[10] = "";
	printf("������ �Է��ϼ��� : ");
	scanf("%s", exstring);
	printf("������ ������ �Է��ϼ��� : ");
	scanf("%s", constring);
	StringConcat(exstring, constring);
	printf("����� ���� : %s\n", exstring);
}

void StringConcat(char s1[], char s2[])
{
	int i;
	for (i = 0; s1[i] != '\0'; i++) continue;
	for (int j = 0; s2[j] != '\0'; i++, j++)
	{
		s1[i] = s2[j];
	}
	s1[i] = '\0';
}