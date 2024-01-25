#include <iostream>
#include <stdexcept>
#include "Rationalnumber.h"
using namespace std;

int main()
{
    Rational number1;
    Rational number2;

    cout << "This is a rational number class that shows combinition of 2 rational numbers.\n ";
    cout << "Now please enter the number in the form of 'a/b', add the nagative symbol before the numerator.\nThe first number: ";
    cin >> number1;
    cout << "The second number: ";
    cin >> number2;
    cout << "\nThe addition of 2 number is " << number1 + number2;
    cout << "\nThe substraction of 2 number is " << number1 - number2;
    cout << "\nThe multiplication of 2 numbers is " << number1 * number2;
    cout << "\nThe division of 2 numbers is " << number1 / number2;
    if (number1 == number2)
    {
        cout << "\nTwo numbers are equal.\n";
    }
    if (number1 != number2)
    {
        cout << "\nTwo numbers are not equal.\n";
    }
    system("pause");
}


