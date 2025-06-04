// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Car{
	char* name;
	int year;
	double mileage;
} Car;

Car InputCarInfo(void);
void ShowCarInfo(Car c1);
Car addMileage(Car c1, double mile);
void isOlderThanYear(Car c1);
void main(void)
{
	Car c1 = InputCarInfo();
	ShowCarInfo(c1);
	double mileage;
	printf("주행거리 추가 : ");
	scanf("%lf", &mileage);
	c1 = addMileage(c1, mileage);
	ShowCarInfo(c1);
	isOlderThanYear(c1);
	free(c1.name); 
}

Car InputCarInfo(void)
{
	Car c1;
	printf("모델명 : ");
	char tmp_name[100];
	scanf(" %s", tmp_name);
	char* car_name = (char*)malloc((strlen(tmp_name) + 1) * sizeof(char));
	strcpy(car_name, tmp_name);
	c1.name = car_name;
	printf("제조년도 : ");
	scanf("%d", &c1.year);
	printf("주행거리 : ");
	scanf("%lf", &c1.mileage);
	return c1;
}

void ShowCarInfo(Car c1)
{
	printf("모델명 : %s\n", c1.name);
	printf("제조년도 : %d\n", c1.year);
	printf("주행거리 : %.2f\n", c1.mileage);
}

Car addMileage(Car c1, double mile)
{
	Car c2 = { c1.name, c1.year, c1.mileage + mile};
	return c2;
}

void isOlderThanYear(Car c1)
{
	if (c1.year >= 2023) {
		printf("제조된지 2년 이내인 차량입니다.\n");
	}
	else {
		printf("제조된지 2년 초과된 차량입니다.\n");
	}
}