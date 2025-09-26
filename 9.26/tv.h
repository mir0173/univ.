#ifndef _tv_h
#define _tv_h

class TV
{
private: 
	const int MIN_VOL = 0;
	const int MAX_VOL = 10;
	const int FIRST_CHAN = 1;
	const int LAST_CHAN = 5;
public:
	bool status;
	int channel;
	int volume;
	void pushPower(void);
	void channelUp(void);
	void channelDown(void);
	void volumeUp(void);
	void volumeDown(void);
};
#endif // _tv_h 