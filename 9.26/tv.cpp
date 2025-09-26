#include <iostream>
#include "tv.h"
using namespace std;

void TV::pushPower(void)
{
	status = !status;
	if (status)
		cout << "TV가 켜졌습니다" << endl;
	else
		cout << "TV가 꺼졌습니다" << endl;

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
		cout << "현재 채널은 " << channel << "입니다." << endl;			
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
		cout << "현재 채널은 " << channel << "입니다." << endl;
	}
}

void TV::volumeUp(void)
{
	if (status)
	{
		if (volume == MAX_VOL)
			cout << "이미 최대 볼륨입니다." << endl;
		else
		{
			volume++;
			cout << "현재 볼륨은 " << volume << "입니다." << endl;
		}
	}
}

void TV::volumeDown(void)
{
	if (status)
	{
		if (volume == MIN_VOL)
			cout << "이미 최소 볼륨입니다." << endl;
		else
		{
			volume--;
			cout << "현재 볼륨은 " << volume << "입니다." << endl;
		}
	}
}