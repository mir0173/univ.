#include "Child.h"
#include <iostream>

int Child::GetCount() const
{
    return marbles;
}

string Child::GetName() const
{
    return name;
}

int Child::Give(int n, Child& other) {
    int give = min(marbles, n); 
    marbles -= give;                 
    other.Receive(give);
    return give;
}

void Child::Receive(int n) 
{
    marbles += n;                     
}

void Child::Show() const 
{
    std::cout << name << "의 보유 구슬: " << marbles << "개" << endl;
}