#ifndef CHECKING_H
#define CHECKING_H
#include"Account.h"

class CheckingAccount : public Account
{
public:
	CheckingAccount(double,double);
	void credit(double);
	void debit(double);
	~CheckingAccount();

private:
	double fee = 0;
};


#endif // !CHECKING_H
