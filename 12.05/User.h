#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>
using namespace std;


class User {
protected:
    string _id;
    string _pw;

public:
    User(const string& id, const string& pw)
        : _id(id), _pw(pw) {
    }
    virtual ~User() {}

    const string& GetId() const { return _id; }
    const string& GetPassword() const { return _pw; }
    bool CheckPassword(const string& pw) const { return _pw == pw; }
    virtual string GetRole() const = 0;
    virtual void ShowMenu() const = 0;
};

class Member : public User {
public:
    Member(const string& id, const string& pw)
        : User(id, pw) {
    }

    virtual string GetRole() const { return "MEMBER"; }

    virtual void ShowMenu() const {
        cout << "\n[회원 메뉴]\n";
        cout << "1. 내 정보 보기\n";
        cout << "2. 로그아웃\n";
    }
};

class Admin : public User {
public:
    Admin(const string& id, const string& pw)
        : User(id, pw) {
    }

    virtual string GetRole() const { return "ADMIN"; }
    virtual void ShowMenu() const {
        cout << "\n[관리자 메뉴]\n";
        cout << "1. 전체 사용자 목록 보기\n";
        cout << "2. 내 정보 보기\n";
        cout << "3. 로그아웃\n";
    }
};

#endif //USER_H
