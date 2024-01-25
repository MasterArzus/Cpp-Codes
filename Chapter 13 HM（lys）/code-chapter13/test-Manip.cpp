#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//1. with defaulted formatting, 
	// neither the fixed nor the scientific stream manipulator is set, 
	// the precision(defaulted as 6) represents the number of significant digits to display 
	// (i.e., the total number of digits to display),but not the number after the decimal point.
	/*double x = 0.01234567;// the prex-zero is not considered as the significant digits 
	double y = 1.234;
	cout<<x<<endl<<y<<endl; 
	cout<<showpoint<<x<<endl<<y<<endl;//add the trailling zeros
	*/
	
	// 2. when the fixed nor the scientific stream manipulator is used
	// the precision represents the number of digits after the decimal point with trailling zeros.
	/*double x = 0.01234567;// the prex-zero is not considered as the significant digits 
	double y = 1.234e6;
	cout<<fixed<<x<<endl<<y<<endl; 
	cout<<scientific<<x<<endl<<y<<endl;//add the trailling zeros
	*/
	
	
	int integervalue;
	cout<<"before a bad input operation"
	<<"\ncin.bad()"<<cin.bad()
	<<"\ncin.eof()"<<cin.eof()
	<<"\ncin.fail()"<<cin.fail()
	<<"\ncin.good()"<<cin.good()
	<<"\ncin.rdstate()"<<cin.rdstate() 
	<<"\n\nExpects an integer, but enter a character\n";
	
	cin>>integervalue;// input a character
	
	cout<<"\nAfter a bad operation"
	<<"\ncin.bad():"<<cin.bad()
	<<"\ncin.eof():"<<cin.eof()
	<<"\ncin.fail():"<<cin.fail()	
	<<"\ncin.good():"<<cin.good()
	<<"\ncin.rdstate():"<<cin.rdstate() <<endl;
	
	cin.clear();
	
	cout<<"\nAfter cin.clear()"
	<<"\ncin.fail():"<<cin.fail()
	<<"\ncin.good():"<<cin.good();
	
	
	
	
	
	
	
	return 1;
}
