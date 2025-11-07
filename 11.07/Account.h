#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    int _accountNo;
    char* _name;
    int _balance;     

protected:
    int getBalance() const { return _balance; }
    void addBalance(int amount) { _balance += amount; }

public:
    Account(int accountNo, const char* name, int balance);
    ~Account();

    virtual void deposit(int amount);      
    virtual int  withdraw(int amount);      
    virtual void check() const;            
};

#endif // ACCOUNT_H
