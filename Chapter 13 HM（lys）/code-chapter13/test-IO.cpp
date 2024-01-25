#include <iostream>
using namespace std;

int main()
{
	
	//----------------------------------
	// 1. stream output with two ways: << operator and put member function 
	//1.1 << operator
	cout<< 65 <<endl;//<< is overloaded to support the fundermantal types, sting, pointers
	char * string1="hell";
	//<< is overloaded to output a char* as a null-terminated C-style string
	cout<<string1<<endl;
	//To output the address, you can cast the char* to a void* 	
	cout<<static_cast<void *>(string1)<<endl;
	
	// 1.2 put member function
	//put member function support the numeric expression, 
	//but it will output the character corresponding to the asscii code. 
	cout.put(65).put('\n');	
	// put member function support the character.
	cout.put('A') .put('\n');
	
	
	//----------------------------------------
	//stream input with : >>,get(), get(char &),get(),getline()
	/*
	int character;
	//the returned reference is used as a condition 
	//while(cin>>character)
	while((character = cin.get())!=EOF)
	{
		//cout<<character;
		cout.put(character);
	}	
	cout<<character<<endl;
	cout<<cin.eof()<<endl;
	*/
	/*
	// second version of get( char &ref)
	char a;
	char &aref = a;
	cin.get(aref);
	cout<<a<<endl;
	*/
	
	/*
	// third version of get(char [], size, '\n')
	char buffer[10];
	cin.get(buffer,10,'\n');
	cout<<buffer<<endl;
	cout<<static_cast<int>(buffer[9])<<endl;
	char test;
	test=cin.get();
	cout<<test;
	*/
	
	/*
	// getline(char [], size, '\n')
	char buffer[10];
	cin.getline(buffer,10,'h');
	cout<<buffer<<endl;
	cout<<static_cast<int>(buffer[10])<<endl;
	char test;
	test=cin.get();
	cout<<test;	
	*/
	/*
	char c;
	while((c = cin.get())!=EOF)
	//while((c = cin.peek())!='B')
	{
		//cin.putback(c);
		cout<<c;
		cin.ignore();
		
	}
	*/ 
	/*
	const int SIZE = 80;
	char buffer[SIZE];
	cin.read(buffer,20);
	cout<<cin.gcount()<<endl;
	cout.write(buffer,cin.gcount())<<endl;
	cout<<cin.fail();
	*/
	return 1;
}
