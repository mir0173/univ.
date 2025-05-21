// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void StringConcat(char s1[], char s2[]);
void main(void)
{
	char exstring[10] = "";
	char constring[10] = "";
	printf("문장을 입력하세요 : ");
	scanf("%s", exstring);
	printf("연결할 문장을 입력하세요 : ");
	scanf("%s", constring);
	StringConcat(exstring, constring);
	printf("연결된 문장 : %s\n", exstring);
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