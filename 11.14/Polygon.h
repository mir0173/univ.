#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
using namespace std;

class Polygon 
{
protected:
    double _width;
    double _height;
    char* _type;
public:
    Polygon(double w, double h, const char* t);
    ~Polygon();

    virtual double GetArea() const = 0;
    virtual void ShowInfo() const;
};

#endif // POLYGON_H
