// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void ToUpperString(char s[]);
void main(void)
{
	char exstring[10] = "";
	printf("문장을 입력하세요 : ");
	scanf("%s", exstring);;
	printf("원래 문장 : %s\n", exstring);
	ToUpperString(exstring);
	printf("대문자 변환 : %s\n", exstring);
}

void ToUpperString(char s[])
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] + 'A' - 'a';
	}
}