#include"Polynomialclass.h"
using namespace std;

// overload output
ostream& operator<<(std::ostream& output, const Polynomial& pol) {
	for (int i = 0; i <= pol.maxexponent; i++) 
	{
		if (pol.polynomial[i] > 0) // 当系数是正数时
		{
			if (i == 0) {
				output << pol.polynomial[i];
			}
			else if (i == 1) {
				output << " +" << pol.polynomial[i] << "x";
			}
			else {
				output << " +" << pol.polynomial[i] << "x^" << i;
			}
		}
		else if (pol.polynomial[i] < 0)
		{
			if (i == 0) {
				output << pol.polynomial[i];
			}
			else if (i == 1) {
				output << " " << pol.polynomial[i] << "x";
			}
			else {
				output << " " << pol.polynomial[i] << "x^" << i;
			}
		}
	}
	output << endl;
	return output;
}

// overload input
istream& operator>>(std::istream& input, Polynomial& pol) {
	cout << "Please enter the numbers of terms of the polynomial: ";
	input >> pol.numbersOfterms;
	for (int i = 0; i < pol.numbersOfterms; i++)
	{
		cout << "\nPlease enter in the form of Ax^B for the term " << (i + 1) << ": ";
		int coefficient = 1;// 系数
		int	exponent = 1;// 指数
Input:
		input >> coefficient;
		input.ignore(2);
		input >> exponent;

		if (pol.polynomial[exponent] != 0||exponent < 0) {
			cout << "\nInvalid input, please try again: ";
			goto Input;
		} 
		if (exponent >= pol.maxexponent){
			pol.maxexponent = exponent;
		}
		pol.polynomial[exponent] = coefficient;  //在接下来赋值循环的时候记得注明有exp+1项
	}
	return input;
}


Polynomial::Polynomial() {

}
Polynomial::~Polynomial() {}

Polynomial Polynomial::operator=(const Polynomial& pol) {
	maxexponent = pol.maxexponent;
	for (int i = 0; i <= maxexponent; i++)
	{
		polynomial[i] = pol.polynomial[i];
	}
	return *this;
}

Polynomial Polynomial::operator+(const Polynomial& pol) {
	maxexponent = max(pol.maxexponent, maxexponent);
	for (int i = 0; i <= max(maxexponent, pol.maxexponent); i++)
	{
		polynomial[i] = pol.polynomial[i] + polynomial[i];
	}
	return *this;
}

Polynomial Polynomial::operator-(const Polynomial& pol) {
	maxexponent = max(pol.maxexponent, maxexponent);
	for (int i = 0; i <= max(maxexponent, pol.maxexponent); i++)
	{
		polynomial[i] =  polynomial[i] - pol.polynomial[i];
	}
	return *this;
}

// 乘法处注意数组的位置,!!指数相加！！
Polynomial Polynomial::operator*(const Polynomial& pol) {
	Polynomial temppol;
	temppol.maxexponent = maxexponent+pol.maxexponent;
	for (int i = 0; i <= max(maxexponent, pol.maxexponent); i++)
	{
		for (int j = 0; j <= max(maxexponent, pol.maxexponent); j++)
		{
			temppol.polynomial[i + j] = temppol.polynomial[i + j] + polynomial[i]*pol.polynomial[j];
		}
	}
	return temppol;
}

Polynomial Polynomial::operator+=(Polynomial& pol) {
	*this = *this + pol;
	return *this;
}
Polynomial Polynomial::operator-=(Polynomial& pol) {
	*this = *this + pol;
	return *this;
}
Polynomial Polynomial::operator*=(Polynomial& pol) {
	*this = *this * pol;
	return *this;
}