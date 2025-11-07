#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
private:
    char* _cardNo;

public:
    CheckingAccount(int accountNo, const char* name, int balance, const char* cardNo);
    ~CheckingAccount();
    int pay(const char* cardNo, int amount);
};

#endif // CHECKING_ACCOUNT_H
