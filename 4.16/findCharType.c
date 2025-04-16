// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int FindCharType(char);
void printchar(int);
void main(void)
{
	char ch;
	printf("문자를 입력해주세요 : ");
	scanf("%c", &ch);
	int type = FindCharType(ch);
	printchar(type);
}

int FindCharType(char ch)
{
	if (ch == ' ')
		return 1; 
	else if (ch == '\t')
		return 2; 
	else if (ch == '\n')
		return 3; 
	else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
		return 4;
	else
		return 0;
}

void printchar(int type)
{
	switch (type)
	{
	case 1:
		printf("스페이스 문자");
		break;
	case 2:
		printf("탭 문자");
		break;
	case 3:
		printf("개행 문자");
		break;
	case 4:
		printf("알파벳 및 숫자 문자");
		break;
	case 0:
		printf("일반 문자");
		break;
	}
}