#include "CreditLineAccount.h"
#include <iostream>

CreditLineAccount::CreditLineAccount(int accountNo, const char* name, int balance, int creditLine)
    : Account(accountNo, name, balance), _creditLine(creditLine) {}

int CreditLineAccount::withdraw(int amount) 
{
    if (amount <= getBalance() + _creditLine) 
    {
        addBalance(-amount);
        return amount;
    }
    return 0;
}

