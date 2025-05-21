// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void StringCopy(char dst[], char src[]);
void main(void)
{
	char exstring[10] = "";
	char dststring[10] = "";
	printf("문장을 입력하세요 : ");
	scanf("%s", exstring);;
	printf("원래 문장 : %s\n", exstring);
	StringCopy(dststring, exstring);
	printf("복사한 문장 : %s\n", dststring);
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