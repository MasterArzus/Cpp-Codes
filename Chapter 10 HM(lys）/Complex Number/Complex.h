#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>


 class Complex
 {
 public:
	 friend std::ostream& operator<<(std::ostream&, const Complex&);
	 friend std::istream& operator>>(std::istream&, Complex&);

	 explicit Complex(double = 0.0, double = 0.0); // constructor
	 Complex operator+(const Complex&) const; // addition
	 Complex operator-(const Complex&) const; // subtraction
	 Complex operator*(const Complex&) const; // multiplication

	 bool operator==(const Complex&) const; // equality
	 bool operator!=(const Complex&) const; // inequal

 private:
	 double real; // real part
	 double imaginary; // imaginary part
 }; // end class Complex

 #endif
