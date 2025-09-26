//25101150 김현민
#include <iostream>
using namespace std;

class Circle
{
private:
	const double PI = 3.14;
public:
	double radius;
	void setRadius(double);
	double getArea(void);
};

void Circle::setRadius(double d)
{
	radius = d;
}

double Circle::getArea(void)
{
	return radius * radius * PI;
}

void main(void)
{
	Circle c1;
	Circle c10;
	c1.setRadius(1);
	c10.setRadius(10);
	cout << "반지름이 1인 원의 넓이는 " << c1.getArea() << " 입니다." << endl;
	cout << "반지름이 10인 원의 넓이는 " << c10.getArea() << " 입니다." << endl;
}