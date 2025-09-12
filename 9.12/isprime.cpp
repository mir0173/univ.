//25101150 ������
#include <iostream>
#include <cmath>

bool isPrime(int num);

void main(void)
{
	int num;
	std::cout << "���ڸ� �Է��ϼ��� : ";
	std::cin >> num;
	std::cout << "�Է��� ���� " << num << "�� " << (isPrime(num) ? "�Ҽ��Դϴ�." : "�Ҽ��� �ƴմϴ�.") << std::endl;
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