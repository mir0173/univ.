#ifndef CHILD_H
#define CHILD_H
#include <string>
using namespace std;

class Child {
private:
    int marbles;  
    string name;
public:
    Child(int marbles = 0, string name = "어린이")
        : marbles(marbles), name(name){};
    ~Child() = default; // std::string은 라이브러리에서 메모리 자동관리
    int GetCount() const;
    string GetName() const;
    int Give(int n, Child& other);             
    void Receive(int n);         
    void Show(void) const;
};

#endif // CHILD_H
