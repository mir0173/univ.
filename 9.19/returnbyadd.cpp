// 25101150 ������
#include <iostream>

int* cube(int& n);

void main(void)
{
	int a = 10;
	int* b;
	b = cube(a);
}

int* cube(int& n)
{
	n = n * n * n;
	return &n;
}