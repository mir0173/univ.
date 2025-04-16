// 25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

void readNum(int);
void numtoeng(int, int);
void main(void)
{
	int num;
	printf("세 자리수를 입력해 주세요 : ");
	scanf("%d", &num);
	readNum(num);
}

void readNum(int num)
{
	int fir, sec, thi;
	fir = num / 100;
	sec = (num % 100) / 10;
	thi = num % 10;
	numtoeng(fir, 0);
	numtoeng(sec, 0);
	numtoeng(thi, 1);
}

void numtoeng(int num, int isend)
{
	switch(num)
	{
	case 1: printf("one"); break;
	case 2: printf("two"); break;
	case 3: printf("three"); break;
	case 4: printf("four"); break;
	case 5: printf("five"); break;
	case 6: printf("six"); break;
	case 7: printf("seven"); break;
	case 8: printf("eight"); break;
	case 9: printf("nine"); break;
	case 0: printf("zero"); break;
	}
	if (isend == 0) printf(" ");
}