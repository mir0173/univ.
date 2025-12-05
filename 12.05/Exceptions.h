#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <string>
using namespace std;

class AppException {
protected:
    string _msg;
public:
    AppException(const string& msg) : _msg(msg) {}
    string Type() const { return _msg; }
};

class FileException : public AppException {
public:
    FileException(const string& msg) : AppException(msg) {}
};

class AuthException : public AppException {
public:
    AuthException(const string& msg) : AppException(msg) {}
};

class InputException : public AppException {
public:
    InputException(const string& msg) : AppException(msg) {}
};

#endif//EXCEPTIONS_H
