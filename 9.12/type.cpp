//25101150 ������
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
	std::cout << n << "�� �������Դϴ�.\n";
}

void type(double d)
{
	std::cout << d << "�� �Ǽ����Դϴ�.\n";
}

void type(bool flag)
{
	std::cout << std::boolalpha << flag << "�� �����Դϴ�.\n";
}

void type(const char* s)
{
	std::cout << s << "�� ���ڿ��Դϴ�.\n";
}