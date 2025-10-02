// 25101150 김현민
#include <iostream>
#include "Complex.h"
using namespace std;

void InputComplex(Complex*);
void InputComplex(Complex&);
Complex& InpAndRetComplex(Complex&);
Complex AddComplex(const Complex&, const Complex&);

void main(void)
{
    Complex a, b;
    InputComplex(&a);
    InputComplex(b);
    Complex& r = InpAndRetComplex(a);
    a.ShowComplex();
    b.ShowComplex();
    r.ShowComplex();
    Complex s = AddComplex(a, b);
    s.ShowComplex();
}


void InputComplex(Complex* comp)
{
    /*double d1, d2;
    cout << "실수부 입력: ";
    cin >> d1;
    cout << "허수부 입력: ";
    cin >> d2;
    comp->SetComplex(d1, d2);*/
	InputComplex(*comp);
}

void InputComplex(Complex& comp)
{
    double d1, d2;
    cout << "실수부 입력: ";
    cin >> d1;
    cout << "허수부 입력: ";
    cin >> d2;
    comp.SetComplex(d1, d2);
}

Complex& InpAndRetComplex(Complex& comp)
{
    InputComplex(comp);
    return comp;
}

Complex AddComplex(const Complex& c1, const Complex& c2) 
{
    return Complex(c1.GetReal() + c2.GetReal(), c1.GetImage() + c2.GetImage());
}

