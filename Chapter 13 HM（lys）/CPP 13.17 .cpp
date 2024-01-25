#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<setw(15)<<"charater vlaue"<<setw(15)<<"decimal"<<setw(15)<<"octal"<<setw(15)<<"hexadecimal"<<endl;
	for(int i=33;i<=126;i++)
	cout<<setw(15)<<static_cast<char>(i) <<setw(15)<<dec<<i <<setw(15)<<oct<<i <<setw(15)<<hex<<i <<endl;
	system("pause");
}
