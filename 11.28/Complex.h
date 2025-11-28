#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex {
private:
    double _r, _i;

public:
    Complex(double r = 0, double i = 0)
        : _r(r), _i(i) { }
    double GetReal() const { return _r; }
    double GetImage() const { return _i; }
    void ShowComplex() const { cout << GetReal() << " + " << GetImage() << "i" << endl; }
};

#endif // COMPLEX_H
