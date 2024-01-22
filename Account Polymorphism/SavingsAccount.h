#ifndef SAVINGS_H
#define SAVINGS_H
#include"Account.h"

class SavingsAccount : public Account
{
public:
	SavingsAccount(double,double);
	double calculateInterest();
	~SavingsAccount();
	
private:
	double rate = 0;
};

#endif // !SAVINGS_H

