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
	cout << "�� ";
	rb.Show();
	cout << "�� ���������� �ϴ� ���簢���� ���̴� " << GetArea() << "�̰� �ѷ��� " << GetPerimeter() << "�̴�." << endl;
}
