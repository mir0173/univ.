// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int StringComp(char s1[], char s2[]);
void main(void)
{
	char exstring[10] = "";
	char compstring[10] = "";
	printf("문장을 입력하세요 : ");
	scanf("%s", exstring);
	printf("비교할 문장을 입력하세요 : ");
	scanf("%s", compstring);
	int n = StringComp(exstring, compstring);
	printf((n == 0) ? "같은 문장입니다." : "다른 문장입니다.");
}

int StringComp(char s1[], char s2[])
{
	int i;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i]) 
			return 1;
	}
	return (s1[i] == '\0' && s2[i] == '\0') ? 0 : 1;
}