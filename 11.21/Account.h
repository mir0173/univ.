#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "MyException.h"

class Account {
protected:
    int _accountNo;
    string _name;
    int _balance;
public:
    Account(int accountNo, const string& name);

    void deposit(int amount);
    int  withdraw(int amount);
    void check() const;
};

#endif // ACCOUNT_H
