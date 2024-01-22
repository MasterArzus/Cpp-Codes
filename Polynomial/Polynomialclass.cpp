#include"Polynomialclass.h"
using namespace std;

// overload output
ostream& operator<<(std::ostream& output, const Polynomial& pol) {
	for (int i = 0; i < pol.maxexponent; i++)
	{
		if (pol.polynomial[i]>0)
		{
			if (i==0){
				output << pol.polynomial[i] << " + ";
			}
			else if (i==1){
				output << pol.polynomial[i] << "x + ";
			}
			else{
				output << pol.polynomial[i] << "x^" << i << " + ";
			}
		}		
	}
	output << pol.polynomial[pol.maxexponent] << "x^" << pol.maxexponent << endl;
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
		input >> coefficient;
		input.ignore(2);
		input >> exponent;
		while (exponent < 0){
			cout << "Notice that the exponent in the polynomial must not be less than 0, please input it again: ";
			cin >> exponent;
		} 
		if (exponent >= pol.maxexponent)
		{
			pol.maxexponent = exponent;
			pol.polynomial.resize(exponent+1); // 注意resize时有exponent+1项
		}
		pol.polynomial[exponent] = coefficient;  //在接下来赋值循环的时候记得注明有exp+1项
	}
	return input;
}


Polynomial::Polynomial() {

}
Polynomial::~Polynomial(){}

Polynomial Polynomial::operator=(const Polynomial& pol) {
	maxexponent = pol.maxexponent;
	polynomial.resize(maxexponent + 1);
	for (int i = 0; i <= maxexponent; i++)
	{
		polynomial[i] = pol.polynomial[i];
	}
	return pol;
}

Polynomial Polynomial::operator+(const Polynomial& pol) {
	Polynomial temppol;
	if (pol.maxexponent > maxexponent)
	{
		temppol = pol;
		for (int i = 0; i <= pol.maxexponent; i++)
		{
			temppol.polynomial[i] = pol.polynomial[i] + polynomial[i];
		}
	}
	return pol;
}

Polynomial Polynomial::operator-(const Polynomial& pol) {

	return pol;
}
Polynomial Polynomial::operator*(const Polynomial& pol) {
	return pol;
}

Polynomial Polynomial::operator+=(const Polynomial& pol) {
	return pol;
}
Polynomial Polynomial::operator-=(const Polynomial& pol) {
	return pol;
}
Polynomial Polynomial::operator*=(const Polynomial& pol) {
	return pol;
}