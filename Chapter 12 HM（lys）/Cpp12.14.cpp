#include"Cpp12.14.h"
#include<stdexcept>
using namespace std;

Account::Account(double balan)
{
	setBalance(balan);
}

Account::~Account()
{
}

void Account::setBalance(double balan)
{
	if (balan >= 0)
		balance = balan;
	else
	{
		balance = 0.0;
		throw(invalid_argument("This initial value is invalide."));
	}

}

double Account::getBalance() const
{
	return balance;
}

 void Account::credit(double amou)
{
	balance += amou;
}

void Account::debit(double amou)
{
	double result = balance - amou;
	if (result >= 0)
		balance = result;
	else
		throw(invalid_argument("Debit amount exceeded account balance."));
}

unsigned SavingAccount::getUUID() const
{
	return 1;
}

SavingAccount::SavingAccount(double balan, double inter_rate)
	:Account(balan), interest_rate(inter_rate)
{}

double SavingAccount::calculateInterest()
{
	return (getBalance() * interest_rate);
}

unsigned CheckingAccount::getUUID() const
{
	return 2;
}

CheckingAccount::CheckingAccount(double balan, double de_fee)
	:Account(balan),dealing_fee(de_fee)
{}

void CheckingAccount::credit(double balan)
{
	setBalance(getBalance() + balan - dealing_fee);
}

void CheckingAccount::debit(double amou)
{
	double result = getBalance() - amou;
	if (result >= 0)
		setBalance(result - dealing_fee);
	else
		throw(invalid_argument("Debit amount exceeded account balance."));
}
