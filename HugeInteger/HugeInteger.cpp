#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	class HugeInteger
	{
	public:
		HugeInteger(){
			for (int i = 0; i < 40; i++)
			{
				hugeintegers[i] = 0;
			}
			numlength = 0;
			operators = '+';
		};

		void input() {
			string number;   // a string variable to insert the number.
			cout << "Please enter a large number within 40 integers : " << endl;

Inputnum:	cin >> number;

			numlength = number.length();  // find the length of number

			if (number.length()>40)
			{
				cout << "The input is larger than 40, please try again. \n";
				goto Inputnum;
			}
			for (int i = 0; i < number.length(); i++)
			{
				hugeintegers[numlength - i - 1] = (int)(number[i] - '0');   // take string into int
			}
		}

		void output() {
			cout << "The present huge integer is： " << endl;
			for (int i = numlength - 1; i >= 0  ; i--)
			{
				cout << hugeintegers[i];
			}
			cout << endl;
		}

		// 加法
		void add() {
			cout << "Enter the number you want to add." << endl;
			string number2;
			int hugeintegers2[40] = {};
			int presentsumint[42] = {};
			int sumint[42] = {};
			int maxlength = number2.length() > numlength ? number2.length() : numlength;
		Inputnum:	cin >> number2;
			numlength = number2.length();  // find the length of number2
			if (number2.length() > 40)
			{
				cout << "The input is larger than 40, please try again. \n";
				goto Inputnum;
			}

			for (int i = 0; i < number2.length(); i++)
			{
				hugeintegers2[numlength - i - 1] = (int)(number2[i] - '0');   // take string into int
			}

			//相加
			for (int i = 0; i <= maxlength; i++)
			{
				presentsumint[i] = (hugeintegers[i] + hugeintegers2[i] + sumint[i]) % 10;		//当前位结果
				sumint[i + 1] = (hugeintegers[i] + hugeintegers2[i] + sumint[i]) / 10;	//下一位进位
			}

			cout << "结果：";
			if (presentsumint[maxlength] != 0)cout << presentsumint[maxlength];//是否输出最高位
			for (int i = maxlength - 1; i >= 0; i--)
			{
				cout << presentsumint[i];
			}
			cout << endl;
		}

		// 减法
		void substract() {  
			cout << "Enter the number you want to substract." << endl;
			string number2;
			int hugeintegers2[40] = {};
			int presentsumint[42] = {};
			int sumint[42] = {};
			int maxlength = number2.length() > numlength ? number2.length() : numlength;
		Inputnum:	cin >> number2;
			numlength = number2.length();  // find the length of number2
			if (number2.length() > 40)
			{
				cout << "The input is larger than 40, please try again. \n";
				goto Inputnum;
			}

			for (int i = 0; i < number2.length(); i++)
			{
				hugeintegers2[numlength - i - 1] = (int)(number2[i] - '0');   // take string into int
			}

			// 相减
			for (int i = 0; i <= maxlength; i++)
			{
				presentsumint[i] = abs(hugeintegers[i] - hugeintegers2[i] - sumint[i]) % 10;		//当前位结果
				sumint[i + 1] = abs(hugeintegers[i] + hugeintegers2[i] + sumint[i]) / 10;	
			}

			cout << "结果：";
			if (presentsumint[maxlength] != 0)cout << presentsumint[maxlength];//是否输出最高位
			for (int i = maxlength - 1; i >= 0; i--)
			{
				cout << presentsumint[i];
			}
			cout << endl;


		}

		// 比较是否相等
		void isEqualto() {

		}



		~HugeInteger(){};

	private:
		int numlength = 0;
		int hugeintegers[42] = {};
		char operators;
	};

	HugeInteger number1;
	number1.input();
	number1.output();
	number1.add();
	number1.substract();

}
