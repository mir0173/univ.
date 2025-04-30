// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

double FuelEfficiency(double dist, double fuel);
void main(void)
{
	double dist, fuel, effi;
	char key;
	do {
		printf("주입된 연료량을 입력해 주세요 : ");
		scanf("%lf", &fuel);
		printf("주행거리를 입력해 주세요 : ");
		scanf("%lf", &dist);
		effi = FuelEfficiency(dist, fuel);
		printf("연비는 %g km/l 입니다.\n", effi);

		printf("다시 계산하겠습니까? (Y/N) : ");
		scanf(" %c", &key);

	} while (key == 'Y' || key == 'y');
	printf("프로그램을 종료합니다.");
}

double FuelEfficiency(double dist, double fuel)
{
	double effi = dist / fuel;
	return effi;
}