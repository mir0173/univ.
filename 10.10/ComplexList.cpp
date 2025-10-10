#include "ComplexList.h"
#include <iostream>
using namespace std;

void ComplexList::Set(int n, double r, double i)
{
	if (n >= 0 && n < size)
		arr[n] = Complex(r, i);
	else
		cout << "유효하지 않은 인덱스" << endl;
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