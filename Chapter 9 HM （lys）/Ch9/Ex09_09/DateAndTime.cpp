// Exercise 9.9 Solution: DateAndTime.cpp
// Member function definitions for class DateAndTime.
#include <iostream> 
#include <stdexcept>
#include <array>
#include "DateAndTime.h" // include definition of class DateAndTime
using namespace std;

DateAndTime::DateAndTime(  
    int m, int d, int y, int hr, int min, int sec )
{
   setDate( m, d, y ); // sets date
   setTime( hr, min, sec ); // sets time
} // end DateAndTime constructor

void DateAndTime::setDate( int mo, int dy, int yr )
{   
   setMonth( mo ); // invokes function setMonth
   setDay( dy ); // invokes function setday
   setYear( yr ); // invokes function setYear 
} // end function setDate

void DateAndTime::setDay( int d )
{
   if ( month == 2 && leapYear() && d <= 29 && d >= 1 )  
      day = d; 
   else if ( d <= monthDays() && d >= 1 ) 
      day = d;
   else 
      throw invalid_argument( "day out of range for current month" );
} // end function setDay

void DateAndTime::setMonth( int m ) 
{ 
   if ( m <= 12 && m >= 1 )
      month = m;
   else
      throw invalid_argument( "month invalid" );
} // end function setMonth

void DateAndTime::setYear( int y ) 
{ 
   if ( y >= 2000 )
      year = y; 
   else
      throw invalid_argument( "year invalid" );
} // end function setYear

void DateAndTime::nextDay()
{
   try
   {
      setDay( getDay() + 1 ); // increments day by 1
   }
   catch ( invalid_argument & )
   { 
      setDay( 1 );

      try 
      {
         setMonth( getMonth() + 1 );
      }
      catch ( invalid_argument & )
      {
         setMonth( 1 );
         setYear( getYear() + 1 );
      }
   }
} //end function nextDay

void DateAndTime::setTime( int hr, int min, int sec )
{
   setHour( hr ); // invokes function setHour
   setMinute( min ); // invokes function setMinute
   setSecond( sec ); // invokes function setSecond
} // end function setTime

void DateAndTime::setHour( int h ) 
{ 
   if ( h >= 0 && h < 24 )
      hour = h;
   else
      throw invalid_argument( "hour must be 0-23" );
} // end function setHour

void DateAndTime::setMinute( int m ) 
{ 
   if ( m >= 0 && m < 60 )
      minute = m; 
   else
      throw invalid_argument( "minute must be 0-59" );
} // end function setMinute

void DateAndTime::setSecond( int s ) 
{ 
   if ( s >= 0 && s < 60 )
      second = ( ( s >= 0 && s < 60 ) ? s : 0 ); 
   else
      throw invalid_argument( "second must be 0-59" );
} // end function setSecond

void DateAndTime::tick()
{
   int tempSecond = getSecond();

   if ( tempSecond < 59 )
      setSecond( tempSecond + 1 ); // increment second by 1
   else
   {
      setSecond( 0 );
      int tempMinute = getMinute();

      if ( tempMinute < 59 )
         setMinute( tempMinute + 1 );
      else
      {
         setMinute( 0 );
         int tempHour = getHour();

         if ( tempHour < 23 )
            setHour( tempHour + 1 );
         else 
         {
            setHour( 0 );
            nextDay();
         }
      } // end else
   } // end else
} // end function tick

unsigned int DateAndTime::getDay() const 
{ 
   return day; 
} // end function getDay

unsigned int DateAndTime::getMonth() const
{
   return month; 
} // end function getMonth

unsigned int DateAndTime::getYear() const 
{ 
   return year; 
} // end function getYear

unsigned int DateAndTime::getHour() const 
{ 
   return hour; 
} // end function getHour

unsigned int DateAndTime::getMinute() const 
{ 
   return minute; 
} // end function getMinute

unsigned int DateAndTime::getSecond() const 
{ 
   return second; 
} // end function getSecond

void DateAndTime::printStandard() const
{
   cout << ( ( hour % 12 == 0 ) ? 12 : hour % 12 ) << ':'
      << ( minute < 10 ? "0" : "" ) << minute << ':'
      << ( second < 10 ? "0" : "" ) << second
      << ( hour < 12 ? " AM " : " PM " )
      << month << '-' << day << '-' << year << endl;
} // end function printStandard

void DateAndTime::printUniversal() const
{
   cout << ( hour < 10 ? "0" : "" ) << hour << ':'
      << ( minute < 10 ? "0" : "" ) << minute << ':'
      << ( second < 10 ? "0" : "" ) << second << "    "
      << month << '-' << day << '-' << year << endl;
} // end function printUniversal

bool DateAndTime::leapYear() const
{
   if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 ) )
      return true; // is a leap year
   else
      return false; // is not a leap year
} // end function leapYear

int DateAndTime::monthDays() const
{
   const array< int, 12 > days = { 
      31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   return ( month == 2 && leapYear() ) ? 29 : days[ ( month - 1 ) ];
} // end function monthDays


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


