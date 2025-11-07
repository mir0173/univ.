#include "CheckingTrafficCardAccount.h"
#include <iostream>

CheckingTrafficCardAccount::CheckingTrafficCardAccount(int accountNo, const char* name, int balance, const char* cardNo, bool hasTrafficCard)
    : CheckingAccount(accountNo, name, balance, cardNo), _hasTrafficCard(hasTrafficCard) {}

int CheckingTrafficCardAccount::payTrafficCard(int amount) 
{
    if (!_hasTrafficCard) return 0;
    return withdraw(amount);
}

