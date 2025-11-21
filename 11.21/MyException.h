#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

#include <string>
using namespace std;

class MyException {
protected:
    string message;
public:
    MyException(const string& msg) : message(msg) {}
    string getMessage() const { return message; }
};

class MalformedData : public MyException {
public:
    MalformedData() 
        : MyException("오류: 잘못된 금액입니다") {}
};

class BalanceOutOfBoundsException : public MyException {
public:
    BalanceOutOfBoundsException() 
        : MyException("인출오류: 잔액을 초과하였습니다") {}
};

class InvalidMenu : public MyException {
public:
    InvalidMenu() 
        : MyException("메뉴 선택 오류: 1~4 사이의 값만 입력하세요") {}
};

#endif // MYEXCEPTION_H
