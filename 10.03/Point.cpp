#include <iostream>
#include "Point.h"
using namespace std;

int Point::GetX() const
{
	return x;
}

int Point::GetY() const
{
	return y;
}

void Point::Show() const
{
	cout << "(" << x << ", " << y << ")" ;
}