// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

double Difference(double, double);
void main(void)
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("�� ���� ���� %g\n", Difference(a, b));
}

double Difference(double a, double b)
{
	if (a < b) return b - a;
	else return a - b;
}

