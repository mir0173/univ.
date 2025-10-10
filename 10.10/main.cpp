//25101150 김현민
#include <iostream>
#include <cstdlib>
#include "ComplexList.h"
using namespace std;

int randint(void);

void main(void) 
{
    srand(time(nullptr));
    ComplexList cl1;
    ComplexList cl2(5);

    for (int i = 0; i < cl1.Length(); i++) 
    {
        cl1.Set(i, randint(), randint());
    }

    for (int i = 0; i < cl2.Length(); i++)
    {
        cl2.Set(i, randint(), randint());
    }


    cout << "cl1의 요소:" << endl;
    for (int i = 0; i < cl1.Length(); i++)
    {
        Complex c = cl1.Get(i);
        cout << i + 1 << "번 요소: ";
        c.ShowComplex();
    }

    cout << endl;

    cout << "cl2의 요소:" << endl;
    for (int i = 0; i < cl2.Length(); i++)
    {
        Complex* c = cl2.pGet(i);
        cout << i + 1 << "번 요소: ";
        c->ShowComplex();
    }
}

int randint(void)
{
    return rand() % 6 + 1;
}