#include <iostream>
#include "FruitSeller.h"

using namespace std;

int FruitSeller::SaleApple(int m)
{
	const int APPLE_UNITCOST = 1000;

	int num = m / APPLE_UNITCOST;
	numOfApple -= num;
	money += m;
	return num;
}
void FruitSeller::ShowResult()
{
	cout << "���� ���: " << numOfApple << "��" << endl;
	cout << "�Ǹż���: " << money << "��" << endl;
}
