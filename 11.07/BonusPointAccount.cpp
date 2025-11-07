#include "BonusPointAccount.h"
#include <iostream>
using namespace std;

BonusPointAccount::BonusPointAccount(int accountNo, const char* name, int balance)
    : Account(accountNo, name, balance), _bonusPoint(0) {}

void BonusPointAccount::deposit(int amount) 
{
    addBalance(amount);
    _bonusPoint += amount / 1000;
}

void BonusPointAccount::check() const 
{
    Account::check();
    cout << "누적 포인트 : " << _bonusPoint << "p\n";
}
