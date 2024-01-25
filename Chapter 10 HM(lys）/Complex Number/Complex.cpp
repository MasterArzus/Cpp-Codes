#include "Complex.h" // Complex class definition
using namespace std;

 // Constructor
 Complex::Complex(double realPart, double imaginaryPart):real(realPart),imaginary(imaginaryPart){
 } // end Complex constructor

 // overload cout
 ostream& operator<<(ostream& output, const Complex& number)
 {
	 output << number.real << " + (" << number.imaginary << ")i\n";
	 return output; // enables cout << a << b << c;
 } // end function operator<<

 // overload cin
 istream& operator>>(istream& input, Complex& number)
 {
	 input >> number.real; // input real number
	 input.ignore(1); // skip space
	 input >> number.imaginary; // input imaginary number
	 input.ignore(); // skip i
	 return input; // get form of a+bi and return a and b
 } // end function operator>

// addition operator
 Complex Complex::operator+(const Complex & operand2) const
 {
	 return Complex(real + operand2.real,
         imaginary + operand2.imaginary);
	 } // end function operator+

 // subtraction operator
 Complex Complex::operator-(const Complex & operand2) const
 {
	 return Complex(real - operand2.real,
		 imaginary - operand2.imaginary);
 } // end function operator-

 Complex Complex::operator*(const Complex& operand2) const
 {
	 return Complex(real * operand2.real - imaginary * operand2.imaginary,
		 real * operand2.imaginary + imaginary * operand2.real);
 }

 // equal operator
 bool Complex::operator==(const Complex& operand2) const
 {
	 return ((real == operand2.real) && (imaginary == operand2.imaginary));
 }

 // inequal operator
 bool Complex::operator!=(const Complex& operand2) const
 {
	 return !((real == operand2.real) && (imaginary == operand2.imaginary));
 }