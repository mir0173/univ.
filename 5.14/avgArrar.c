//25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int GetIntegerArray(int a[], int n, int s);
void PrintIntegerArray(int a[], int n);
double AverageIntegerArray(int a[], int n);
void main(void) 
{
    int score[10];
    printf("점수를 입력해 주세요 : ");
    int validnum = GetIntegerArray(score, 10, -1);
    double avg = AverageIntegerArray(score, validnum);
    printf("평균은 %g입니다.\n", avg);
    PrintIntegerArray(score, validnum);
}

int GetIntegerArray(int a[], int n, int s)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == s) break;
    }
    return i;
}

void PrintIntegerArray(int a[], int n)
{
    printf("입력된 배열 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

double AverageIntegerArray(int a[], int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    double avg = sum / n;
    return avg;
}