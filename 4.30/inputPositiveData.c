// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int InputPositiveData(void);
void main(void)
{
	int age = InputPositiveData();
	if (age > 19)
		printf("성인입니다.");
	else
		printf("미성년입니다.");
}

int InputPositiveData(void)
{
	int num = -1;
	while (num < 0 || num > 120)
	{
		printf("나이를 입력해 주세요 : ");
		scanf("%d", &num);
	}
	return num;
}