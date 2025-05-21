// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int StringLength(char s[]);
void main(void)
{
	char exstring[10] = "";
	printf("문장을 입력하세요 : ");
	scanf("%s", exstring);
	int n = StringLength(exstring);
	printf("주어진 문장의 길이는 %d입니다.\n", n);
}

int StringLength(char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++) ;
	return i;
}