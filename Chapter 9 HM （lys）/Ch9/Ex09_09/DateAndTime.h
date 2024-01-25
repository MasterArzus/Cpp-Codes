// Exercise 9.9 Solution: DateAndTime.h
#ifndef DATEANDTIME_H
#define DATEANDTIME_H

class DateAndTime 
{
public:
   explicit DateAndTime( int = 1, int = 1, int = 2000, 
      int = 0, int = 0, int = 0 ); // default constructor
   void setDate( int, int, int ); // set month, day, year
   void setMonth( int ); // set month
   void setDay( int ); // set day	
   void setYear( int ); // set year
   void nextDay(); // next day
   void setTime( int, int, int ); // set hour, minute, second
   void setHour( int ); // set hour
   void setMinute( int ); // set minute 
   void setSecond( int ); // set second
   void tick(); // tick function 
   unsigned int getMonth() const; // get month
   unsigned int getDay() const; // get day
   unsigned int getYear() const; // get year
   unsigned int getHour() const; // get hour
   unsigned int getMinute() const; // get minute
   unsigned int getSecond() const; // get second 
   void printStandard() const; // print standard time
   void printUniversal() const; // print universal time
private:
   unsigned int month; // 1-12 
   unsigned int day; // 1-31 (except February(leap year), April, June, Sept, Nov)
   unsigned int year; // 2000+
   unsigned int hour; // 0-23 (24 hour clock format)
   unsigned int minute; // 0-59 
   unsigned int second; // 0-59
   bool leapYear() const; // leap year
   int monthDays() const; // days in month 
}; // end class DateAndTime

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


