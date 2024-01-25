#include <iostream>
#include "Polynomialclass.h"
using namespace std;

int main()
{
    Polynomial polynomial1;
    cout << "Please enter the first polynomial.\n";
    cin >> polynomial1;
   
    Polynomial polynomial2;
    cout << "\nPlease enter the second polynomial.\n";
    cin >> polynomial2;

    cout << "\nThe first polynomial is: " << polynomial1;
    cout << "\nThe second polynomial is: " << polynomial2;

    Polynomial pol1, pol2, pol3, pol4, pol5, pol6;
    pol1 = pol2 = pol3 = pol4 = pol5 = pol6 = polynomial1;

    cout << "\nThe addition of 2 polynomials is: ";
    cout << pol1 + polynomial2;
    cout << "\nThe subtraction of 2 polynomials is: ";
    cout << pol2 - polynomial2;
    cout << "\nThe multiply of 2 polynomials is: ";
    cout << pol3 * polynomial2;
    cout << "\nThe self addition of first polynomial is: ";
    cout << pol4 + pol4;
    cout << "\nThe self subtraction of first polynomial is: ";
    cout << pol5 - pol5;
    cout << "\nThe self multiply of first polynomial is: ";
    cout << pol6 * pol6;
    system("pause");
}