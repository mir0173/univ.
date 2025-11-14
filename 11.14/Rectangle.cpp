#include "Rectangle.h"
#include <cstring>

Rectangle::Rectangle(double w, double h)
    : Polygon(w, h, "Rectangle") {}

bool Rectangle::IsSquare() const 
{
    return _width == _height;
}

double Rectangle::GetArea() const
{
    return _width * _height;
}
