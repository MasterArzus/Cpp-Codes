#include <iostream>
#include <iomanip>
using namespace std;

class Complex
{
	friend std::ostream& operator<< (std::ostream&, const Complex&);
	friend std::istream& operator>> (std::istream&, Complex&);
	
private:	//Form: s1 R s2 I i
	int real=0,imaginary=0;	
	char signal1=' ',signal2='+';

};

std::ostream& operator<< (std::ostream& output, const Complex& operand)
{
	if(operand.signal1!=' ')
		output << operand.signal1;

	output<<operand.real << operand.signal2 << operand.imaginary << "i";
	return output;
}
	
std::istream& operator>> (std::istream& input, Complex& operand)
{
	int charater=0, index=0, number=0;;
	char signal=' ';
	
	int real=0,imaginary=0;	
	char signal1=' ',signal2='+';
	
	bool ifend = true;//for failbit
	//discussions
	while(((charater=input.get())!= '\n'))
	{
		//denote the position of the charater
		index++;
		
		switch (index)
		{
			case 1:
				if(charater=='-')
				{
					signal=charater;
					
				}else if(isdigit(charater))// end ?
				{
					input.putback(charater);
					input>>number;
					real=number;
				}else ifend=false;
				
				break;
				
			case 2:
				if(charater=='i')//end ?i
				{
					imaginary=number;
					signal1=signal;
					real=0;					
					
				}else if(charater=='+'||charater=='-')
					signal2=charater;
					
				else if(isdigit(charater))// end -?
				{
					input.putback(charater);
					input>>number;

				}else ifend=false;
				
				break;
				
			case 3:
				if(charater=='i')//end -?i
				{
					signal2=signal;
					imaginary=number;

				}else if(charater=='+'||charater=='-')
				{
					signal1=signal;
					signal2=charater;
					
				}else if(isdigit(charater))// end -?
				{
					input.putback(charater);
					input>>imaginary;

				}else ifend=false;
					
				break;
				
			case 4:
				if(charater=='i')//ends 1+1i,-1-1i
				{
					real=number;
				}else ifend=false;
												
			default:
				break;				
		}
	}
	
	if(!ifend)
		input.clear(ios::failbit);
	else
		{
			operand.signal1=signal1;
			operand.real=real;
			operand.signal2=signal2;
			operand.imaginary=imaginary;
		}

	return input;
}

		
int main() 
{
	Complex x;
	cout << "Input a complex number x in the form of \"3 + 8i\": ";
	cin >> x;	
	
	if(cin.fail())
		cout<<"Your input is not in correct form!"<<endl;
	else
		cout << "The complex number inputed by you is: "<<x<<endl;
		
	system("pause");
}
