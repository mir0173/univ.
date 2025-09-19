// 25101150 ±èÇö¹Î
#include <iostream>

int& increment(int& n);

void main(void)
{
	int a = 10;
	int b;
	b = increment(a);
}

int& increment(int& n)
{
	n++;
	return n;
}