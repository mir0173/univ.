#ifndef _ComplexList_h
#define _ComplexList_h
#include "Complex.h"

class ComplexList
{
private:
	Complex* arr;
	int size;
public:
	ComplexList(const int n = 10)
		: size(n) { arr = new Complex[n]; };
	~ComplexList() { delete[] arr; }
	void Set(int n, double r, double i);
	Complex* pGet(int n) const;
	const Complex& Get(int n) const;
	int Length() const; 
};
#endif // _ComplexList_h