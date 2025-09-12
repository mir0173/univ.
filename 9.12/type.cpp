//25101150 김현민
#include <iostream>

void type(int n);
void type(double d);
void type(bool flag);
void type(const char* s);

void main(void)
{
	type(1004);
	type(3.14);
	type(true);
	type("hello");
}

void type(int n)
{
	std::cout << n << "는 정수형입니다.\n";
}

void type(double d)
{
	std::cout << d << "는 실수형입니다.\n";
}

void type(bool flag)
{
	std::cout << std::boolalpha << flag << "는 논리형입니다.\n";
}

void type(const char* s)
{
	std::cout << s << "는 문자열입니다.\n";
}