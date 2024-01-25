#include <iostream>
#include"Complex.h"
using namespace std;

int main()
{
	Complex number1;
	Complex number2;
	cout << "The programme shows how to calculate 2 complex number.\n";
	cout << "Now please input the numbers in the form of 'a bi':\n The first:";
	cin >> number1;
	cout << " The second:";
	cin >> number2;

	cout << "The addition of t 2 complex number is: " << number1 + number2 << endl;
	cout << "The subtraction of t 2 complex number is: " << number1 - number2 << endl;
	cout << "The multipication of t 2 complex number is: " << number1 * number2 << endl;
	if (number1 == number2)
	{
		cout << "The 2 complex numbers are equal.\n";
	}
	if (number1 != number2)
	{
		cout << "The 2 complex numbers are not equal.\n";
	}
	system("pause");
}
