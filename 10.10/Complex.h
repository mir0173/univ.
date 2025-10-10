#ifndef _Complex_h
#define _Complex_h

class Complex
{
private:
	double a, b;
public:
	Complex(const double a = 0, const double b = 0)
		: a(a), b(b) {
	};
	~Complex() = default;
	void SetComplex(double, double);
	double GetReal() const;
	double GetImage() const;
	void ShowComplex() const;
};
#endif // _Complex_h