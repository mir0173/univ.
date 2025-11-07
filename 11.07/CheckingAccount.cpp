#define _CRT_SECURE_NO_WARNINGS
#include "CheckingAccount.h"
#include <iostream>
#include <cstring>
using namespace std;
CheckingAccount::CheckingAccount(int accountNo, const char* name, int balance, const char* cardNo)
    : Account(accountNo, name, balance)
{
    _cardNo = new char[strlen(cardNo) + 1];
    strcpy(_cardNo, cardNo);
}

CheckingAccount::~CheckingAccount() 
{
    delete[] _cardNo;  
}

int CheckingAccount::pay(const char* cardNo, int amount)
{
    if (strcmp(cardNo, _cardNo)) return 0;
    return withdraw(amount); 
}

