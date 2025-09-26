//25101150 ±èÇö¹Î
#include "FruitSeller.h"
#include "FruitBuyer.h"

void main()
{
	FruitSeller seller;
	FruitBuyer buyer;

	seller.money = 0;
	seller.numOfApple = 10;

	buyer.money = 10000;
	buyer.numOfApple = 0;

	buyer.BuyApple(7000, seller);
	seller.ShowResult();
	buyer.ShowResult();
}