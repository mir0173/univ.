// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Car {
	char* name;
	int year;
	double mileage;
} Car, *CCar;

CCar InputCarInfo(void);
void ShowCarInfo(CCar c1);
void addMileage(CCar c1, double mile);
void isOlderThanYear(CCar c1);
void main(void)
{
	CCar c1 = InputCarInfo();
	ShowCarInfo(c1);
	double mileage;
	printf("주행거리 추가 : ");
	scanf("%lf", &mileage);
	addMileage(c1, mileage);
	ShowCarInfo(c1);
	isOlderThanYear(c1);
	free(c1->name);
	free(c1);
}

CCar InputCarInfo()
{
	CCar c1 = (CCar)malloc(sizeof(Car));
	printf("모델명 : ");
	char tmp_name[100];
	scanf("%s", tmp_name);
	char* car_name = (char*)malloc((strlen(tmp_name) + 1) * sizeof(char));
	strcpy(car_name, tmp_name);
	c1->name = car_name;
	printf("제조년도 : ");
	scanf("%d", &c1->year);
	printf("주행거리 : ");
	scanf("%lf", &c1->mileage);
	return c1;
}

void ShowCarInfo(CCar c1)
{
	printf("모델명 : %s\n", c1->name);
	printf("제조년도 : %d\n", c1->year);
	printf("주행거리 : %g\n", c1->mileage);
}

void addMileage(CCar c1, double mile)
{
	c1->mileage += mile;
}

void isOlderThanYear(CCar c1)
{
	if (c1->year >= 2023) {
		printf("제조된지 2년 이내인 차량입니다.\n");
	}
	else {
		printf("제조된지 2년 초과된 차량입니다.\n");
	}
}