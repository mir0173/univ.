// 25101150 ±èÇö¹Î
#include <iostream>

void swap(int* p1, int* p2);

void main(void)
{
	int a = 25;
	int b = 10;
	swap(&a, &b);
}

void swap(int *p1, int *p2)
{
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}