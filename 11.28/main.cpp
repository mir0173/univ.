// 25101150 김현민
#include "ComplexList1.h"
#include "ComplexList2.h"

template <typename T>
void ShowList(const T& list) { list.ShowAll(); }

void main() 
{
    ComplexList1 list1;
    list1.Add(1, 2);
    list1.Add(3, 4);
    list1.Add(-2, 5);

    ComplexList2 list2;
    list2.Add(1, -1);
    list2.Add(5, 2);
    list2.Add(0, 10);

    cout << "Complex vector 출력" << endl;
    ShowList(list1);

    cout << "\nComplex pointer vector 출력" << endl;
    ShowList(list2);

    Complex c1 = list1.Get(2);
    cout << "\nComplex vector 인덱스 2번 요소 출력" << endl;
    c1.ShowComplex();

    Complex* c2 = list2.Get(2);
    cout << "\nComplex pointer vector 인덱스 2번 요소 출력" << endl;
    c2->ShowComplex();
}