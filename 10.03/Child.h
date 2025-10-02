#ifndef CHILD_H
#define CHILD_H
#include <string>
using namespace std;

class Child {
private:
    int marbles;  
    string name;
public:
    Child(int marbles = 0, string name = "���")
        : marbles(marbles), name(name){};
    ~Child() = default; // std::string�� ���̺귯������ �޸� �ڵ�����
    int GetCount() const;
    string GetName() const;
    int Give(int n, Child& other);             
    void Receive(int n);         
    void Show(void) const;
};

#endif // CHILD_H
