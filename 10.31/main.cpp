//25101150 ������
#include <iostream>
#include "String.h"
using namespace std;

void main(void)
{
	String s1;
	String s2("hello");

	cout << "s1: " << s1 << endl;
	cout << "s1`s len: " << s1.Length() << endl;
	cout << "s2: " << s2 << endl;

	s1 = s2;
	cout << "s1: " << s1 << endl;

	String s3 = s2;
	cout << "s3: " << s3 << endl;

	String s4 = s1 + s2;
	cout << "s4: " << s4 << endl;

	if (s1 == s2)
		cout << "�� ���ڿ��� �����ϴ�." << endl;
	else
		cout << "�� ���ڿ��� �ٸ��ϴ�." << endl;
	if (s1 == "hello")
		cout << "�� ���ڿ��� �����ϴ�." << endl;
	else
		cout << "�� ���ڿ��� �ٸ��ϴ�." << endl;

	cout << s4[1] << endl;
	s4[0] = 'H';
	cout << s4 << endl;
}

