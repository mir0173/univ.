//25101150 ������
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
	cout << "�������� 1�� ���� ���̴� " << c1.getArea() << " �Դϴ�." << endl;
	cout << "�������� 10�� ���� ���̴� " << c10.getArea() << " �Դϴ�." << endl;
}