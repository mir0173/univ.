#ifndef BONUS_POINT_ACCOUNT_H
#define BONUS_POINT_ACCOUNT_H

#include "Account.h"

class BonusPointAccount : public Account {
private:
    int _bonusPoint; 

public:
    BonusPointAccount(int accountNo, const char* name, int balance);
    void deposit(int amount) override;
    void check() const override;
};

#endif // BONUS_POINT_ACCOUNT_H
