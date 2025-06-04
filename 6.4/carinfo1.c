// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Car {
	char* name;
	int year;
	double mileage;
} Car;

void InputCarInfo(Car* c1);
void ShowCarInfo(Car* c1);
void addMileage(Car* c1, double mile);
void isOlderThanYear(Car* c1);
void main(void)
{
	Car c1;
	InputCarInfo(&c1);
	ShowCarInfo(&c1);
	double mileage;
	printf("����Ÿ� �߰� : ");
	scanf("%lf", &mileage);
	addMileage(&c1, mileage);
	ShowCarInfo(&c1);
	isOlderThanYear(&c1);
	free(c1.name);
}

void InputCarInfo(Car* c1)
{
	printf("�𵨸� : ");
	char tmp_name[100];
	scanf(" %s", tmp_name);
	char* car_name = (char*)malloc((strlen(tmp_name) + 1) * sizeof(char));
	strcpy(car_name, tmp_name);
	c1->name = car_name;
	printf("�����⵵ : ");
	scanf("%d", &c1->year);
	printf("����Ÿ� : ");
	scanf("%lf", &c1->mileage);
}

void ShowCarInfo(Car* c1)
{
	printf("�𵨸� : %s\n", c1->name);
	printf("�����⵵ : %d\n", c1->year);
	printf("����Ÿ� : %g\n", c1->mileage);
}

void addMileage(Car* c1, double mile)
{
	c1->mileage += mile;
}

void isOlderThanYear(Car* c1)
{
	if (c1->year >= 2023) {
		printf("�������� 2�� �̳��� �����Դϴ�.\n");
	}
	else {
		printf("�������� 2�� �ʰ��� �����Դϴ�.\n");
	}
}