#ifndef CREDIT_LINE_ACCOUNT_H
#define CREDIT_LINE_ACCOUNT_H

#include "Account.h"

class CreditLineAccount : public Account {
private:
    int _creditLine; 

public:
    CreditLineAccount(int accountNo, const char* name, int balance, int creditLine);

    int  withdraw(int amount) override;
};

#endif // CREDIT_LINE_ACCOUNT_H
