//25101150 ������
#include <iostream>

void introduce(const char* name, int age = 20, const char* country = "���ѹα�");

void main(void)
{
	introduce("ȫ�浿");
}

void introduce(const char* name, int age, const char* country)
{
	std::cout << "�ȳ��ϼ���, �� �̸��� " << name << "�Դϴ�.\n";
	std::cout << "���� " << age << "���̰�, " << country << "���� �Խ��ϴ�.\n";
}
