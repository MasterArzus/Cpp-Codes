#ifndef ACCOUNT_T
#define ACCOUNT_T
#include<iostream>

class Account
{
public:
	Account(double);
	void credit(double);
	void debit(double);
	double getBalance();
	~Account();

protected:
	double balance = 0;
};


#endif // ACCOUNT_T
