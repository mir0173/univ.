#ifndef COMPLEXLIST1_H
#define COMPLEXLIST1_H

#include <vector>
#include <algorithm>
#include "Complex.h"

class ComplexList1 {
private:
    vector<Complex> v;

public:
    void Add(double r, double i) {
        v.push_back(Complex(r, i));
    }

    void ShowAll() const {
        for (auto it = v.begin(); it != v.end(); ++it)
            it->ShowComplex();
    }

    int Length() const {
        return v.size();
    }

    const Complex& Get(int n) const {
        if (n >= 0 && n < v.size()) {
            return v[n];
        }
        else {
            return v[0];
        }
    }
};

#endif // COMPLEXLIST1_H
