// 25101150 김현민
#include <iostream>
#include "Account.h"

void main() 
{
    Account acc(1234, "김현민");

    while (true) 
    {
        cout << "------------------------------------\n" << "1.입금  2.출금  3.잔액조회  4.종료\n" << "메뉴 선택: ";

        try 
        {
            int menu;
            cin >> menu;

            if (!cin || menu < 1 || menu > 4)
            {
                throw InvalidMenu();
            }

            if (menu == 1) 
            {
                int money;
                cout << "입금액 입력: ";
                cin >> money;
                acc.deposit(money);
            }
            else if (menu == 2) 
            {
                int money;
                cout << "출금액 입력: ";
                cin >> money;
                int result = acc.withdraw(money);
                cout << result << "원 출금 완료\n";
            }
            else if (menu == 3) 
            {
                acc.check();
            }
            else if (menu == 4) 
            {
                cout << "\n---------- 프로그램 종료 ----------\n";
                break;
            }
        }
        catch (MalformedData& e1)
        {
            cout << "\n[오류 발생]\n" << e1.getMessage() << endl;
        }
        catch (BalanceOutOfBoundsException& e2)
        {
            cout << "\n[오류 발생]\n" << e2.getMessage() << endl;
        }
        catch (InvalidMenu& e3)
        {
            cout << "\n[오류 발생]\n" << e3.getMessage() << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
        cout << "------------------------------------\n\n";
    }
}
