#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygon.h"

class Rectangle : public Polygon 
{
public:
    Rectangle(double w, double h);

    bool IsSquare() const;
    double GetArea() const override;
};

#endif // RECTANGLE_H
