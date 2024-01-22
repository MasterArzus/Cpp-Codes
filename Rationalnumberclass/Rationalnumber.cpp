#include"Rationalnumber.h"
using namespace std;

ostream& operator<<(std::ostream& output, const Rational& number)
{
	if (number.denominator == 1 || number.numerator == 0){
		output << number.numerator;
	}
	else if (number.denominator < 0)
	{
		output << -number.numerator << "/" << -number.denominator << " ";
	}
	else {
		output << number.numerator << "/" << number.denominator << " ";
	}
	return output;
}

istream& operator>>(std::istream& input, Rational& number)
{
	int up = 0, down = 1;
Input:	
	input >> up;
	input.ignore(1); // ignore the '/'
	input >> down;
	if (down != 0)
	{
		number.numerator = up;
		number.denominator = down;
	}
	else
	{
		cout << "The denominator can't be 0, try again: ";
		goto Input;
	}
	return input;
}

Rational::Rational(int upper, int lower)
{
	if (lower > 0){
		numerator = upper;
		denominator = lower;
	}
	else if (lower < 0){
		numerator =  -upper;
		denominator = -lower;
	}
	else{
		lower = 1;
		cout << "The numerator can not be 0, set to 1.\n";
		throw invalid_argument("The numerator can be any number but denominator must be greater than 0.");
	}
	simplifier(numerator, denominator);
}

void Rational::simplifier(int& upper, int& lower)
{
	int a = upper;
	int b = lower;

	while (a % b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	upper = upper / b;
	lower = lower / b;
}

Rational Rational::operator+(const Rational& number2)
{
	tempup = numerator * number2.denominator + denominator * number2.numerator;
	tempdown = denominator * number2.denominator;
	simplifier(tempup, tempdown);
	return Rational(tempup, tempdown);
}

Rational Rational::operator-(const Rational& number2)
{
	tempup = numerator * number2.denominator - denominator * number2.numerator;
	tempdown = denominator * number2.denominator;
	simplifier(tempup, tempdown);
	return Rational(tempup, tempdown);
}

Rational Rational::operator*(const Rational& number2)
{
	tempup = numerator * number2.numerator;
	tempdown = denominator * number2.denominator;
	simplifier(tempup, tempdown);
	return Rational(tempup, tempdown);
}

Rational Rational::operator/(const Rational& number2)
{
	tempup = numerator * number2.denominator;
	tempdown = denominator * number2.numerator;
	simplifier(tempup, tempdown);
	return Rational(tempup, tempdown);
}

bool Rational::operator==(const Rational& number2)
{
	return (numerator == number2.numerator && denominator == number2.denominator);
}

bool Rational::operator!=(const Rational& number2)
{
	return !(numerator == number2.numerator && denominator == number2.denominator);
}

Rational::~Rational(){}