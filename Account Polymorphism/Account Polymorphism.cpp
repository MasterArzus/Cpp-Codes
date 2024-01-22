#include <iostream>
#include <vector>
#include"Account.h"
#include"CheckingAccount.h"
#include"SavingsAccount.h"
using namespace std;
int main()
{
	cout << "The initial balance in your account is 10000.\n";
	static int balance = 10000;

	// saving account
	cout << "\nIf you are offered a savingaccount,\n now please enter the rate(noted that rate is less than 1):";
	double rate = 0.01;
	cin >> rate;
	SavingsAccount saving(balance, rate);

	// checking account
	cout << "\nIf you are offered a checkingaccount,\n now please enter the fee(noted that fee is less than your balance):";
	double fee = 1;
	cin >> fee;
	CheckingAccount checking(balance, fee);

	// create vector with 2 different kind of accounts
	vector<Account*>accounts(2);
	accounts[0] = &saving;
	accounts[1] = &checking;

	accounts[0]->getBalance();
}
