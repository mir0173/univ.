#ifndef _FruitBuyer_h
#define _FruitBuyer_h
#include "FruitSeller.h"

class FruitBuyer
{
public:
	int numOfApple;
	int money;

	void BuyApple(int, FruitSeller&);
	void ShowResult();
};

#endif // _FruitBuyer_h