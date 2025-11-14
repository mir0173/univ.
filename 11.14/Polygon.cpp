#define _CRT_SECURE_NO_WARNINGS
#include "Polygon.h"
#include <cstring>

Polygon::Polygon(double w, double h, const char* t)
    : _width(w), _height(h)
{
    _type = new char[strlen(t) + 1];
    strcpy(_type, t);
}

Polygon::~Polygon()
{
    delete[] _type;
}

void Polygon::ShowInfo() const
{
    cout << "Á¾·ù: " << _type << endl
        << "Æø:  " << _width << endl
        << "³ôÀÌ: " << _height << endl;
}