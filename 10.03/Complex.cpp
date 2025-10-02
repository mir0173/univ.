#include <iostream>
#include "Complex.h"
using namespace std;

void Complex::SetComplex(double d1, double d2)
{
	a = d1;
	b = d2;
}

double Complex::GetReal() const
{
	return a;
}

double Complex::GetImage() const
{
	return b;
}

void Complex::ShowComplex() const
{
	cout << GetReal() << " + " << GetImage() << "i" << endl;
}