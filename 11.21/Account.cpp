#define _CRT_SECURE_NO_WARNINGS
#include "Account.h"
#include <iostream>

Account::Account(int accountNo, const string& name)
    : _accountNo(accountNo), _name(name), _balance(0) {}

void Account::deposit(int amount) throw(MalformedData)
{
    if (amount <= 0) 
        throw MalformedData();
    _balance += amount;
}

int Account::withdraw(int amount) throw(MalformedData, BalanceOutOfBoundsException)
{
    if (amount <= 0) 
        throw MalformedData();
    if (amount > _balance) 
        throw BalanceOutOfBoundsException();
    _balance -= amount;
    return amount;
}

void Account::check() const
{
    cout << "\n°èÁÂ¹øÈ£ : " << _accountNo << endl
        << "ÀÌ¸§ : " << _name << endl
        << "ÀÜ¾× : " << _balance << "¿ø\n";
}