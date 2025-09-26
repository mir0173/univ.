#include <iostream>
#include "FruitBuyer.h"
using namespace std;

void FruitBuyer::BuyApple(int n, FruitSeller& fruitSeller)
{
	if (money < n)
	{
		cout << "돈이 부족합니다." << endl;
	}
	else
	{
		int num = fruitSeller.SaleApple(n);
		numOfApple += num;
		money -= n;
		cout << "사과 " << num << "개를 구매했습니다." << endl;
	}
}
void FruitBuyer::ShowResult()
{
	cout << "가진 사과: " << numOfApple << "개" << endl;
	cout << "가진 돈: " << money << "원" << endl;
}