// 25101150 김현민
#include <iostream>
#include "Child.h"
using namespace std;

int main() {
    int tmp;
    Child child1(4, "어린이 1");
    Child child2(9, "어린이 2");

    cout << "<초기 상태>" << endl;
    child1.Show();
    child2.Show();
    cout << endl;

    tmp = child2.Give(2, child1);   
    cout << "<1차 게임> " << child1.GetName() << "이 " << child2.GetName() << "의 구슬 " << tmp << "개 획득" << endl;
    child1.Show();
    child2.Show();
    cout << endl;

    tmp = child1.Give(7, child2);
    cout << "<2차 게임> " << child2.GetName() << "이 " << child1.GetName() << "의 구슬 " << tmp << "개 획득" << endl;
    child1.Show();
    child2.Show();
    cout << endl;

    return 0;
}
