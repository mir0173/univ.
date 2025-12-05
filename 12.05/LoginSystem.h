#ifndef LOGINSYSTEM_H
#define LOGINSYSTEM_H

#include <string>
#include "User.h"
#include "Exceptions.h"
#include "Repository.h"

class LoginSystem {
private:
    Repository<User> _users;
    string _fileName;

    void Load();          
    void Save() const;   
    User* Login();        
    void RegisterUser(); 
    void ShowAllUsers() const;

public:
    LoginSystem(const string& filename)
        : _fileName(filename) {}
    void Run();          
};

#endif //LOGINSYSTEM_H
