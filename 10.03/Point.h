#ifndef _Point_h
#define _Point_h

class Point
{
private :
	int x, y;
public:
	Point(int x = 0, int y = 0)
		: x(x), y(y) {};
	~Point() = default;
	int GetX() const;
	int GetY() const;
	void Show() const;
};

#endif // _Point_h