// 25101150 ������
#include <iostream>

int square(int n);

void main(void)
{
	int a = 10;
	int b;
	b = square(a);
}

int square(int n)
{
	n *= n;
	return n;
}