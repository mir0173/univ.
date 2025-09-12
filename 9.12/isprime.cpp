//25101150 김현민
#include <iostream>
#include <cmath>

bool isPrime(int num);

void main(void)
{
	int num;
	std::cout << "숫자를 입력하세요 : ";
	std::cin >> num;
	std::cout << "입력한 숫자 " << num << "은 " << (isPrime(num) ? "소수입니다." : "소수가 아닙니다.") << std::endl;
}

bool isPrime(int num)
{	
	if (num < 2) return false;
	else if (num == 2) return true;
	else if (num % 2 == 0) return false;
	for (int i = 3; i <= sqrt(num); i++) 
	{
		if (num % i == 0) return false;
	}
	return true;
}