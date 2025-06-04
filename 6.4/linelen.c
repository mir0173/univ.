// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>
#include <math.h>

typedef struct Point
{
	int x;
	int y;
}pointT;

typedef struct Line
{
	pointT start_point;
	pointT end_point;
}lineT;

pointT InputPoint(void);
lineT InputLine(void);
double GetLineLength(lineT line);
void main(void)
{
	lineT line = InputLine();
	double line_length = GetLineLength(line);
	printf("�� �� ������ �Ÿ� : %g", line_length);
}

pointT InputPoint(void)
{
	pointT point;
	scanf("%d %d", &point.x, &point.y);
	return point;
}

lineT InputLine(void)
{
	lineT line;
	printf("�������� �Է����ּ��� : ");
	line.start_point = InputPoint();
	printf("������ �Է����ּ��� : ");
	line.end_point = InputPoint();
	return line;
}

double GetLineLength(lineT line)
{
	double length;
	length = sqrt(pow((line.end_point.x - line.start_point.x), 2) + pow((line.end_point.y - line.start_point.y), 2));
	return length;
}