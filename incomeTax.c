// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int IncomeTax(int);
void main(void)
{
	int income, tax;
	printf("수입 금액을 입력해주세요 : ");
	scanf("%d", &income);
	tax = IncomeTax(income);
	printf("세금은 %d원 입니다.", tax);
}

int IncomeTax(int income)
{
	int tax;
	if (income <= (int)1e7) tax = (int)(income * 0.008);
	else if (income <= (int)4e7) tax = (int)((income - (int)1e7) * 0.17) + (int)8e4;
	else if (income <= (int)8e7) tax = (int)((income - 4 * (int)1e7) * 0.26) + (int)5.18e6;
	else tax = (int)((income - (int)8e7) * 0.35) + (int)1.558e7;
	return tax;
}