// 25101150 ±èÇö¹Î
#include <iostream>

void EU_Algo(int& r1, int& r2);

void main(void)
{
	int a = 25;
	int b = 10;
	EU_Algo(a, b);
}

void EU_Algo(int& r1, int& r2)
{
	int tmp;
	tmp = r1;
	r1 = r2;
	r2 = tmp % r1;
}