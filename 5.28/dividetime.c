// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void ConvertTimeToHMS(int time, int* hour, int* min, int* sec);
void PrintConvTime(int time, int hour, int min, int sec);
void main(void)
{
	int time, hour, min, sec;
	printf("값을 입력해주세요 : ");
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
	printf("%d초는 %d시간 %d분 %d초입니다.\n", time, hour, min, sec);
}