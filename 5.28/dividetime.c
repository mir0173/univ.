// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void ConvertTimeToHMS(int time, int* hour, int* min, int* sec);
void PrintConvTime(int time, int hour, int min, int sec);
void main(void)
{
	int time, hour, min, sec;
	printf("���� �Է����ּ��� : ");
	scanf("%d", &time);
	ConvertTimeToHMS(time, &hour, &min, &sec);
	PrintConvTime(time, hour, min, sec);
}

void ConvertTimeToHMS(int time, int* hour, int* min, int* sec)
{
	*hour = time / 3600; 
	time %= 3600; 
	*min = time / 60; 
	*sec = time % 60; 
}

void PrintConvTime(int time, int hour, int min, int sec)
{
	printf("%d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", time, hour, min, sec);
}