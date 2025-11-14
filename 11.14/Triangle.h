#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Polygon.h"

class Triangle : public Polygon 
{
public:
    Triangle(double w, double h);
    double GetArea() const override;
};

#endif // TRIANGLE_H
