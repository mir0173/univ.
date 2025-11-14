#include "Triangle.h"
#include <cstring>

Triangle::Triangle(double w, double h)
    : Polygon(w, h, "Triangle") {}

double Triangle::GetArea() const
{
    return 0.5 * _width * _height;
}