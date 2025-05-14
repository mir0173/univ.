//25101150 김현민
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int insertScore(int score[]);
void MakeHist(int hist[], int score[], int n);
void Printstar(int n);
void Printhist(int hist[]);
int main()
{
    int hist[11] = { 0 };
	int score[100];
    printf("점수를 입력해주세요 : ");
    int n = insertScore(score);
	MakeHist(hist, score, n);
    Printhist(hist);
}

int insertScore(int score[])
{
	int n = 0;
	while (1)
	{
		scanf("%d", &score[n]);
		if (score[n] == -1) break;
		n++;
	}
	return n;
}

void MakeHist(int hist[], int score[], int n)
{
    for(int i = 0; i < n; i++)
    {
        hist[score[i] / 10]++;
    }
}

void Printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
}

void Printhist(int hist[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d-%d\t| ", i * 10, i * 10 + 9);
        Printstar(hist[i]);
    }
    printf("100\t| ");
    Printstar(hist[10]);
}
