#ifndef _Rectangle_h
#define _Rectangle_h
#include "Point.h"

class Rectangle
{
	Point lt, rb;
public:
	Rectangle(const Point& leftTop, const Point& rightBottom)
		: lt(leftTop), rb(rightBottom) {};
	Rectangle(int x1, int y1, int x2, int y2)
		: lt(Point(x1, y1)), rb(Point(x2, y2)) {};
	~Rectangle() = default;
	int GetWidth(void) const;
	int GetHeight(void) const;
	int GetPerimeter(void) const;
	int GetArea(void) const;
	void Show(void) const;
};
#endif // _Rectangle_h