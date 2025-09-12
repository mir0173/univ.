//25101150 김현민
#include <iostream>

void introduce(const char* name, int age = 20, const char* country = "대한민국");

void main(void)
{
	introduce("홍길동");
}

void introduce(const char* name, int age, const char* country)
{
	std::cout << "안녕하세요, 제 이름은 " << name << "입니다.\n";
	std::cout << "저는 " << age << "살이고, " << country << "에서 왔습니다.\n";
}
