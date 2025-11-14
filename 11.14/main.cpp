//25101150 김현민
#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
using namespace std;

void main() 
{
    Polygon* shapes[3];

    shapes[0] = new Rectangle(3, 5);
    shapes[1] = new Triangle(6, 4);
    shapes[2] = new Square(7);

    for (int i = 0; i < 3; ++i) 
    {
        cout << i + 1 << "번째 도형 정보\n";
        shapes[i]->ShowInfo();
        cout << endl;
    }

    for (int i = 0; i < 3; ++i) 
    {
        Rectangle* r = dynamic_cast<Rectangle*>(shapes[i]);
        if (r != nullptr) 
        {
            cout << i + 1 << "번째 도형의 정사각형 여부: " << (r->IsSquare() ? "O" : "X") << endl;
        }
        else
        {
            cout << i + 1 << "번째 도형은 직사각형이 아님\n";
        }
    }

    for (int i = 0; i < 3; ++i) 
    {
        delete shapes[i];
    }
}