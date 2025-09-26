#include <iostream>
#include "tv.h"
using namespace std;

void TV::pushPower(void)
{
	status = !status;
	if (status)
		cout << "TV�� �������ϴ�" << endl;
	else
		cout << "TV�� �������ϴ�" << endl;

}

void TV::channelUp(void)
{
	if (status)
	{
		if (channel == LAST_CHAN)
		{
			channel = FIRST_CHAN;
		}
		else
		{
			channel++;
		}
		cout << "���� ä���� " << channel << "�Դϴ�." << endl;			
	}
}

void TV::channelDown(void)
{
	if (status)
	{
		if (channel == FIRST_CHAN)
		{
			channel = LAST_CHAN;
		}
		else
		{
			channel--;
			
		}
		cout << "���� ä���� " << channel << "�Դϴ�." << endl;
	}
}

void TV::volumeUp(void)
{
	if (status)
	{
		if (volume == MAX_VOL)
			cout << "�̹� �ִ� �����Դϴ�." << endl;
		else
		{
			volume++;
			cout << "���� ������ " << volume << "�Դϴ�." << endl;
		}
	}
}

void TV::volumeDown(void)
{
	if (status)
	{
		if (volume == MIN_VOL)
			cout << "�̹� �ּ� �����Դϴ�." << endl;
		else
		{
			volume--;
			cout << "���� ������ " << volume << "�Դϴ�." << endl;
		}
	}
}