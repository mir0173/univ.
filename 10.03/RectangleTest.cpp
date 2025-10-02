//25101150 ±èÇö¹Î
#include "Rectangle.h"
#include "Point.h"

void main(void)
{
	Point lt(0, 0);
	Point rb(4, 5);
	Rectangle rect(lt, rb);
	Rectangle rect2(1, 5, 4, 6);
	rect.Show();
	rect2.Show();
}