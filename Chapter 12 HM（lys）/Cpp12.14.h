#ifndef CPP12_14_H
#define CPP12_14_H

class Account
{
private:
	double balance = 0.0;

public:
	virtual unsigned getUUID()const =0;
	Account(double balan = 0.0);
	virtual ~Account();
	void setBalance(double balan);
	double getBalance()const;
	virtual void credit(double amou);
	virtual void debit(double amou);

};

class SavingAccount : public Account
{
private:
	double interest_rate = 0.0;
public:
	unsigned getUUID()const override;//the UUID for it is 1.
	SavingAccount(double balan=0.0,double inter_rate=0.0);
	double calculateInterest();
};

class CheckingAccount :public Account
{
private:
	double dealing_fee = 0.0;
public:
	unsigned getUUID()const override;//the UUID for it is 2.
	CheckingAccount(double balan,double de_fee);
	virtual void credit(double balan) override;
	virtual void debit(double balan) override;
};

#endif

