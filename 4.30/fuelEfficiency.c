// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

double FuelEfficiency(double dist, double fuel);
void main(void)
{
	double dist, fuel, effi;
	char key;
	do {
		printf("���Ե� ���ᷮ�� �Է��� �ּ��� : ");
		scanf("%lf", &fuel);
		printf("����Ÿ��� �Է��� �ּ��� : ");
		scanf("%lf", &dist);
		effi = FuelEfficiency(dist, fuel);
		printf("����� %g km/l �Դϴ�.\n", effi);

		printf("�ٽ� ����ϰڽ��ϱ�? (Y/N) : ");
		scanf(" %c", &key);

	} while (key == 'Y' || key == 'y');
	printf("���α׷��� �����մϴ�.");
}

double FuelEfficiency(double dist, double fuel)
{
	double effi = dist / fuel;
	return effi;
}