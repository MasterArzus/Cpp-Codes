// Exercise 9.6 Solution: Rational.cpp
// Member-function definitions for class Rational.
#include <iostream> 
#include "Rational.h" // include definition of class Rational
using namespace std;

Rational::Rational( int n, int d )
   : numerator( n ), denominator( d )
{
   reduce(); // store the fraction in reduced form
} // end Rational constructor

Rational Rational::addition( const Rational &a ) const
{
   Rational t( a.numerator * denominator + a.denominator * numerator, 
      a.denominator * denominator ); 
   t.reduce(); // store the fraction in reduced form
   return t;
} // end function addition

Rational Rational::subtraction( const Rational &s ) const
{
   Rational t( s.denominator * numerator - denominator * s.numerator,
      s.denominator * denominator ); 
   t.reduce(); // store the fraction in reduced form
   return t;
} // end function subtraction

Rational Rational::multiplication( const Rational &m ) const
{
   Rational t( m.numerator * numerator, m.denominator * denominator );  
   t.reduce(); // store the fraction in reduced form
   return t;
} // end function multiplication

Rational Rational::division( const Rational &v ) const
{
   Rational t( v.denominator * numerator, denominator * v.numerator ); 
   t.reduce(); // store the fraction in reduced form
   return t;
} // end function division

void Rational::printRational() const
{
   if ( denominator == 0 ) // validates denominator
      cout << "\nDIVIDE BY ZERO ERROR!!!" << '\n';
   else if ( numerator == 0 ) // validates numerator
      cout << 0;
   else
      cout << numerator << '/' << denominator;
} // end function printRational

void Rational::printRationalAsDouble() const
{  
   cout << static_cast< double >( numerator ) / denominator; 
} // end function printRationalAsDouble

void Rational::reduce()
{
   int largest = numerator > denominator ? numerator : denominator;

   int gcd = 0; // greatest common divisor

   for ( int loop = 2; loop <= largest; ++loop )
       if ( numerator % loop == 0 && denominator % loop == 0 )
          gcd = loop;

   if (gcd != 0) 
   {
      numerator /= gcd;
      denominator /= gcd;
   } // end if 
} // end function reduction

/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/


