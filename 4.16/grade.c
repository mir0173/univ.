// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

int InputScore(void);
char GetGrade(int, int, int);
void main(void)
{
	int score1 = InputScore();
	int score2 = InputScore();
	int score3 = InputScore();
	if (score1 != -1 && score2 != -1 && score3 != -1)
	{
		char unit = GetGrade(score1, score2, score3);
		printf("����� ���� ������ : %c", unit);
	}
	else printf("�߸��� ���� �Է��Դϴ�.\n");
}

int InputScore(void)
{
	int score;
	printf("������ �Է��� �ּ��� : ");
	scanf("%d", &score);
	if (score > -1 && score < 101) return score;
	else return -1;
}

char GetGrade(int score1, int score2, int score3)
{
	double avgscore = (double)(score1 + score2 + score3) / 3;
	char grade;
	if (avgscore >= 90) grade = 'A';
	else if (avgscore >= 80) grade = 'B';
	else if (avgscore >= 70) grade = 'C';
	else if (avgscore >= 60) grade = 'D';
	else grade = 'F';
	return grade;
}