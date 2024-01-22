#ifndef POLYNOMIALCLASS_H
#define POLYNOMIALCLASS_H
#include<iostream>
#include<vector>
class Polynomial
{
public:
	friend std::ostream& operator<<(std::ostream&, const Polynomial&);
	friend std::istream& operator>>(std::istream&, Polynomial&);

	Polynomial();
	~Polynomial();
	Polynomial operator=(const Polynomial&);	
	Polynomial operator+(const Polynomial&);
	Polynomial operator-(const Polynomial&);
	Polynomial operator*(const Polynomial&);

	Polynomial operator+=(const Polynomial&);
	Polynomial operator-=(const Polynomial&);
	Polynomial operator*=(const Polynomial&);

private:
	std::vector <int> polynomial;
	int numbersOfterms = 0; // the total number of terms of the polynomial
	int	maxexponent = 0;// maxÖ¸Êý
}; // english semicolon


#endif // !POLYNOMIALCLASS_H 
