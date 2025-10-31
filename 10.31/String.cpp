#include <iostream>
#include "String.h"
using namespace std;

int String::Length(const char* s) const
{
	int i = 0;
	while (s[i] != '\0') i++;
	return i;
}

int String::Length() const
{
	return this->m_nLen;
}

String::String(const char* str)
	:m_nLen(Length(str)), m_pStr(new char[m_nLen + 1])
{
	for (int i = 0; i <= m_nLen; i++)
	{
		m_pStr[i] = str[i];
	}
}

String::String(const String& comp)
	:m_nLen(comp.m_nLen), m_pStr(new char[comp.m_nLen + 1])
{
	for (int i = 0; i <= m_nLen; i++)
	{
		this->m_pStr[i] = comp.m_pStr[i];
	}
}

ostream& operator<< (ostream& os, const String& s)
{
	return os << s.m_pStr;
}


String& String::operator= (const String& s)
{
	char* tmp = new char[s.m_nLen + 1];
	for (int i = 0; i <= s.m_nLen; ++i)
		tmp[i] = s.m_pStr[i];

	delete[] m_pStr;
	m_pStr = tmp;
	m_nLen = s.m_nLen;
	return *this;
}

String String::operator+ (const String& s) const
{
	int nLen = m_nLen + s.m_nLen;
	char* buf = new char[nLen + 1];

	for (int i = 0; i < m_nLen; ++i)
		buf[i] = m_pStr[i];

	for (int j = 0; j <= s.m_nLen; ++j)
		buf[m_nLen + j] = s.m_pStr[j];

	String res;                 
	delete[] res.m_pStr;       
	res.m_pStr = buf;
	res.m_nLen = nLen;
	return res;                
}

bool String::operator== (const String& s) const
{
	if (this->m_nLen != s.m_nLen)
	{
		return false;
	}
	else
	{
		for (int i = 0; i < m_nLen; i++)
		{
			if (this->m_pStr[i] != s.m_pStr[i])
			{
				return false;
			}
		}
		return true;
	}
}

bool String::operator== (const char* s) const
{
	if (this->m_nLen != Length(s))
	{
		return false;
	}
	else
	{
		for (int i = 0; i < m_nLen; i++)
		{
			if (this->m_pStr[i] != *(s + i))
			{
				return false;
			}
		}
		return true;
	}
}

char& String::operator[] (int i)
{
	if (i < 0 || i > Length(this->m_pStr))
	{
		exit(-1);
	}
	else
	{
		return this->m_pStr[i];
	}
} 