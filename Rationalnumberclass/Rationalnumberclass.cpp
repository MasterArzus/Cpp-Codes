#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	class Rational
	{
	public:
		Rational(int upperone = 0, int lowerone = 1) :numerator(upperone), denominator(lowerone)  // the defaults
		{
			cout << "The constructor is called. \n";
		};

		void simplifier(int& x, int& y) {
			int a = x;
			int b = y;
			// find out why

			while (a % b != 0) {
				int temp = a % b;
				a = b;
				b = temp;
			}
			x = x / b;
			y = y / b;
		}

		void addition(int a, int b) { // a is numerator & b is denominator that entered  a/b up/low
			int upper = numerator, lower = denominator;
			upper = a * lower + b * upper;
			lower = b * lower;
			simplifier(upper, lower);
			cout << "The addition result of 2 rational number is " << upper << "/" << lower << endl;
		}

		void minus(int a, int b) {
			int upper = numerator, lower = denominator;
			upper = abs(a * lower - b * upper);
			lower = b * lower;
			simplifier(upper, lower);
			cout << "The absulute minus result of 2 rational number is " << upper << "/" << lower << endl;
		}

		void multiply(int a, int b) { // a is numerator & b is denominator that entered  a/b up/low
			int upper = numerator, lower = denominator;
			upper = a * upper;
			lower = b * lower;
			simplifier(upper, lower);
			cout << "The multiply result of 2 rational number is " << upper << "/" << lower << endl;
		}

		void division(int a, int b) { // a is numerator & b is denominator that entered  a/b up/low
			int upper = numerator, lower = denominator;
			upper = b * upper;
			lower = a * lower;
			simplifier(upper, lower);
			cout << "The division result of 2 rational number is " << upper << "/" << lower << endl;
		}

		void showindivision() {
			int upper = numerator, lower = denominator;
			simplifier(upper, lower);
			cout << "The rational number presented in the form of division is" << upper << "/" << lower << endl;
		}

		void showinfloting() {
			int upper = numerator, lower = denominator;
			double result = static_cast<double>(upper) / static_cast<double>(lower);
			cout << "The rational number presented in the form of floating is" << result << endl;
		}

	private:
		int numerator; // 分子
		int denominator;  // 分母
	};

	int x1 = 0, y1 = 1, x2 = 0, y2 = 1;
	cout << "Please enter one number (first numerator, and then the denominator without tab the / :\n";
	cin >> x1 >> y1;
	Rational number1(x1, y1);

	cout << "Please enter another one (the same as above)\n";
	cin >> x2 >> y2;

	number1.addition(x2, y2);
	number1.minus(x2, y2);
	number1.multiply(x2, y2);
	number1.division(x2, y2);
	number1.showindivision();
	number1.showinfloting();

	system("pause");


}
