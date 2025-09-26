//25101150 ±èÇö¹Î
#include "tv.h"

void main(void)
{
	TV tv;
	tv.status = false;
	tv.channel = 1;
	tv.volume = 5;
	tv.pushPower();
	for (int i = 0; i < 6; i++)
		tv.volumeUp();
	for (int i = 0; i < 11; i++)
		tv.volumeDown();
	for (int i = 0; i < 6; i++)
		tv.channelDown();
	for (int i = 0; i < 6; i++)
		tv.channelUp();
	tv.pushPower();
}