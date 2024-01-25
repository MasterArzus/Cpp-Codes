// Exercise 9.14 Solution: HugeInteger.h
// HugeInteger class definition.
#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H
#include <array>
#include <string>

class HugeInteger 
{
public:
   HugeInteger( long = 0 ); // conversion/default constructor
   HugeInteger( const std::string & ); // copy constructor

   // addition operator; HugeInteger + HugeInteger
   HugeInteger add( const HugeInteger & ) const;

   // addition operator; HugeInteger + int
   HugeInteger add( int ) const;            

   // addition operator; 
   // HugeInteger + string that represents large integer value
   HugeInteger add( const std::string & ) const;    

   // subtraction operator; HugeInteger - HugeInteger
   HugeInteger subtract( const HugeInteger &  ) const; 

   // subtraction operator; HugeInteger - int
   HugeInteger subtract( int ) const; 

   // subtraction operator; 
   // HugeInteger - string that represents large integer value
   HugeInteger subtract( const std::string & ) const; 

   bool isEqualTo( const HugeInteger &  ) const; // is equal to
   bool isNotEqualTo( const HugeInteger &  ) const; // not equal to
   bool isGreaterThan( const HugeInteger &  ) const; // greater than
   bool isLessThan( const HugeInteger &  ) const; // less than
   bool isGreaterThanOrEqualTo( const HugeInteger &  ) const; // greater than 
                                               // or equal to
   bool isLessThanOrEqualTo( const HugeInteger &  ) const; // less than or equal
   bool isZero() const; // is zero
   void input( const std::string & ); // input
   void output() const; // output   
private:
   std::array< short, 40 > integer; // 40 element array
}; // end class HugeInteger

#endif

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


