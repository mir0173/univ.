#ifndef COMPLEXLIST2_H
#define COMPLEXLIST2_H

#include <vector>
#include <algorithm>
#include "Complex.h"

class ComplexList2 {
private:
    vector<Complex*> v;

public:
    ~ComplexList2() {
        for (auto p : v)
            delete p;
    }

    void Add(double r, double i) {
        v.push_back(new Complex(r, i));
    }

    void ShowAll() const {
        for (auto it = v.begin(); it != v.end(); ++it)
            (*it)->ShowComplex();
    }

    int Length() const {
        return v.size();
    }

    Complex* Get(int n) const {
        if (n >= 0 && n < v.size()) {
            return v[n];
        }
        else {
            return v[0];
        }
    }

};

#endif // COMPLEXLIST2_H
