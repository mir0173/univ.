// 25101150 ������
#include <iostream>
#include "Child.h"
using namespace std;

int main() {
    int tmp;
    Child child1(4, "��� 1");
    Child child2(9, "��� 2");

    cout << "<�ʱ� ����>" << endl;
    child1.Show();
    child2.Show();
    cout << endl;

    tmp = child2.Give(2, child1);   
    cout << "<1�� ����> " << child1.GetName() << "�� " << child2.GetName() << "�� ���� " << tmp << "�� ȹ��" << endl;
    child1.Show();
    child2.Show();
    cout << endl;

    tmp = child1.Give(7, child2);
    cout << "<2�� ����> " << child2.GetName() << "�� " << child1.GetName() << "�� ���� " << tmp << "�� ȹ��" << endl;
    child1.Show();
    child2.Show();
    cout << endl;

    return 0;
}
