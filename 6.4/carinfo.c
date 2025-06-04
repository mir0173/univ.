// 25101150 ������
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
	printf("����Ÿ� �߰� : ");
	scanf("%lf", &mileage);
	c1 = addMileage(c1, mileage);
	ShowCarInfo(c1);
	isOlderThanYear(c1);
	free(c1.name); 
}

Car InputCarInfo(void)
{
	Car c1;
	printf("�𵨸� : ");
	char tmp_name[100];
	scanf(" %s", tmp_name);
	char* car_name = (char*)malloc((strlen(tmp_name) + 1) * sizeof(char));
	strcpy(car_name, tmp_name);
	c1.name = car_name;
	printf("�����⵵ : ");
	scanf("%d", &c1.year);
	printf("����Ÿ� : ");
	scanf("%lf", &c1.mileage);
	return c1;
}

void ShowCarInfo(Car c1)
{
	printf("�𵨸� : %s\n", c1.name);
	printf("�����⵵ : %d\n", c1.year);
	printf("����Ÿ� : %.2f\n", c1.mileage);
}

Car addMileage(Car c1, double mile)
{
	Car c2 = { c1.name, c1.year, c1.mileage + mile};
	return c2;
}

void isOlderThanYear(Car c1)
{
	if (c1.year >= 2023) {
		printf("�������� 2�� �̳��� �����Դϴ�.\n");
	}
	else {
		printf("�������� 2�� �ʰ��� �����Դϴ�.\n");
	}
}