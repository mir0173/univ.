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
} Car, *CCar;

int InputCarsInfo(CCar cars);
void ShowCarsInfo(CCar cars, int count);
int InputCarInfo(CCar c1);
void ShowCarInfo(CCar c1);
void main(void)
{
	Car cars[5] = {0};
	int count = InputCarsInfo(cars);
	ShowCarsInfo(cars, count);
	for (int i = 0; i < count; ++i)
		free(cars[i].name);
}

int InputCarInfo(CCar c1)
{
	char tmp_name[100] = "";
	printf("�𵨸� : ");
	scanf("%[^\n]", tmp_name);
	if (strlen(tmp_name) == 0)  
		return 0;

	c1->name = (char*)malloc(strlen(tmp_name) + 1);
	strcpy(c1->name, tmp_name);

	printf("�����⵵ : ");
	scanf("%d", &c1->year);
	printf("����Ÿ� : ");
	scanf("%lf", &c1->mileage);
	int ch;
	while ((ch = getchar()) != '\n');
	return 1; 
}

void ShowCarInfo(CCar c1)
{
	printf("�𵨸� : %s\n", c1->name);
	printf("�����⵵ : %d\n", c1->year);
	printf("����Ÿ� : %g\n", c1->mileage);
}

int InputCarsInfo(CCar cars) {
	int count = 0;
	for (int i = 0; i < 5; ++i) {
		printf("\n[%d��° ���� ���� �Է�]\n", i + 1);
		if (!InputCarInfo(&cars[i]))
			break;
		count++;
	}
	return count;
}

void ShowCarsInfo(CCar cars, int count) {
	for (int i = 0; i < count; ++i) {
		printf("\n[%d��° ���� ����]\n", i + 1);
		ShowCarInfo(&cars[i]);
	}
}