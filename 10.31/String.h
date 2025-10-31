#ifndef _String_h
#define _String_h
#include <ostream>
using namespace std;

class String
{
private:
	int m_nLen;
	char* m_pStr;
	int Length(const char* s) const;
public:
	int Length() const;
	String(const char* str = "");
	String(const String&);
	~String() { delete[] m_pStr; }

	String& operator= (const String& s);
	String operator+ (const String& s) const;
	bool operator== (const String& s) const;
	bool operator== (const char* s) const;
	char& operator[] (int i);
	friend ostream& operator<< (ostream& os, const String& s);
};

#endif // _String_h

