#ifndef Rationalnumber
#define Rationalnumber
#include <iostream>
class Rational
{
public:
	friend std::ostream& operator<<(std::ostream&, const Rational&);
	friend std::istream& operator>>(std::istream&, Rational&);

	Rational(int = 0, int = 1);
	void simplifier(int&, int&);

	Rational operator+(const Rational&);
	Rational operator-(const Rational&);
	Rational operator*(const Rational&);
	Rational operator/(const Rational&);

	bool operator==(const Rational&);
	bool operator!=(const Rational&);
	~Rational();

private:
	 int numerator; // ·Ö×Ó
	 int denominator;  // ·ÖÄ¸
	 int tempup;
	 int tempdown;
};

#endif // !Rationalnumber
