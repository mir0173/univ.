#include <iostream>
#include "Rectangle.h"
using namespace std;

int Rectangle::GetWidth() const
{
	return rb.GetX() - lt.GetX();
}

int Rectangle::GetHeight() const
{
	return rb.GetY() - lt.GetY();
}

int Rectangle::GetPerimeter() const
{
	return GetWidth() * 2 + GetHeight() * 2;
}

int Rectangle::GetArea() const
{
	return GetWidth() * GetHeight();
}

void Rectangle::Show() const
{
	lt.Show();
	cout << "와 ";
	rb.Show();
	cout << "을 꼭짓점으로 하는 직사각형의 넓이는 " << GetArea() << "이고 둘레는 " << GetPerimeter() << "이다." << endl;
}
