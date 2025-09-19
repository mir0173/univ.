// 25101150 ±èÇö¹Î
#include <iostream>

void swap(int n1, int n2);

void main(void)
{
	int a = 25;
	int b = 10;
	swap(a, b);
}

void swap(int n1, int n2)
{
	int tmp;
	tmp = n1;
	n1 = n2;
	n2 = tmp;
}