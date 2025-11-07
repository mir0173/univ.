// 25101150 김현민
#include <iostream>
#include "Account.h"
#include "CheckingAccount.h"
#include "CheckingTrafficCardAccount.h"
#include "CreditLineAccount.h"
#include "BonusPointAccount.h"
using namespace std;

int main() 
{
    cout << boolalpha;

    Account a(1234, "hyunmin", 50000);
    a.check();
    cout << "입금 : 20000원" << endl;
    a.deposit(20000);
    a.check();
    cout << "출금 : 10000원" << endl;
    a.withdraw(10000);
    a.check();
    cout << "--------------------------------\n";

    CheckingAccount ca(1234, "hyunmin", 50000, "1111-2222-3333-4444");
    ca.check();
    cout << "카드 결제 : " << ca.pay("1111-2222-3333-4444", 30000) << "원\n";
    cout << "카드 결제 : " << ca.pay("1111-2222-3333-4445", 10000) << "원\n";
    ca.check();
    cout << "--------------------------------\n";

    CheckingTrafficCardAccount ctca(1234, "hyunmin", 50000, "1111-2222-3333-4444", true);
    ctca.check();
    cout << "교통비 결제 : " << ctca.payTrafficCard(1250) << "원\n";
    ctca.check();
    cout << "--------------------------------\n";

    CreditLineAccount cla(1234, "hyunmin", 10000, 50000);
    cla.check();
    cout << "출금 : " << cla.withdraw(20000) << "원\n";
    cout << "출금 : " << cla.withdraw(30000) << "원\n";
    cout << "출금 : " << cla.withdraw(50000) << "원\n";
    cla.check();
    cout << "--------------------------------\n";

    BonusPointAccount bpa(1234, "hyunmin", 0);
    bpa.check();
    cout << "입금 : 10000원" << endl;
    bpa.deposit(10000); 
    bpa.check();

    return 0;
}