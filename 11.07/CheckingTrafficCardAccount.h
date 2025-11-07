#ifndef CHECKING_TRAFFIC_CARD_ACCOUNT_H
#define CHECKING_TRAFFIC_CARD_ACCOUNT_H

#include "CheckingAccount.h"

class CheckingTrafficCardAccount : public CheckingAccount {
private:
    bool _hasTrafficCard;

public:
    CheckingTrafficCardAccount(int accountNo, const char* name, int balance, const char* cardNo, bool hasTrafficCard);

    int  payTrafficCard(int amount);
};

#endif 
