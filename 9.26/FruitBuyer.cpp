#include <iostream>
#include "FruitBuyer.h"
using namespace std;

void FruitBuyer::BuyApple(int n, FruitSeller& fruitSeller)
{
	if (money < n)
	{
		cout << "���� �����մϴ�." << endl;
	}
	else
	{
		int num = fruitSeller.SaleApple(n);
		numOfApple += num;
		money -= n;
		cout << "��� " << num << "���� �����߽��ϴ�." << endl;
	}
}
void FruitBuyer::ShowResult()
{
	cout << "���� ���: " << numOfApple << "��" << endl;
	cout << "���� ��: " << money << "��" << endl;
}