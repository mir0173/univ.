#define _CRT_SECURE_NO_WARNINGS
#include "Account.h"
#include <iostream>
#include <cstring>
using namespace std;

Account::Account(int accountNo, const char* name, int balance)
    : _accountNo(accountNo), _balance(balance) 
{
    _name = new char[strlen(name) + 1];
    strcpy(_name, name);
}

Account::~Account()
{
    delete[] _name; 
}

void Account::deposit(int amount) 
{
    addBalance(amount);
}

int Account::withdraw(int amount) 
{
    if (amount <= _balance) 
    {
        addBalance(-amount);
        return amount;
    }
    return 0;
}

void Account::check() const 
{
    cout << "°èÁÂ¹øÈ£ : " << _accountNo << endl
         << "ÀÌ¸§ : " << _name << endl
         << "ÀÜ¾× : " << _balance << "¿ø\n";
}
