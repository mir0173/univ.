#define _CRT_SECURE_NO_WARNINGS
#include "Square.h"
#include <cstring>

Square::Square(double side)
    : Rectangle(side, side)
{
    delete[] _type;
    _type = new char[7];
    strcpy(_type, "Square");
}
