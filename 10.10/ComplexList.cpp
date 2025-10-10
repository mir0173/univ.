#include "ComplexList.h"
#include <iostream>
using namespace std;

void ComplexList::Set(int n, double r, double i)
{
	if (n >= 0 && n < size)
		arr[n] = Complex(r, i);
	else
		cout << "��ȿ���� ���� �ε���" << endl;
}

Complex* ComplexList::pGet(int n) const
{
	if (n >= 0 && n < size)
		return &arr[n];
	else
		return nullptr;
}

const Complex& ComplexList::Get(int n) const
{
	if (n >= 0 && n < size)
		return arr[n];
	else
		return arr[0];
}

int ComplexList::Length() const
{
	return size;
}