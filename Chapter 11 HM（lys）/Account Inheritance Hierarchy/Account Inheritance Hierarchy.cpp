#include <iostream>
#include"Account.h"
#include"SavingsAccount.h"
#include"CheckingAccount.h"
using namespace std;
int main()
{
	// initial account
	cout << "This is a bank account program.\nNow please enter the amount of initial balance:";
	double balance = 0;
	cin >> balance;
	Account initialAccount(balance);
	cout << "Now the balance in your account is " << initialAccount.getBalance() << endl;
	cout << "Now save more money into it:";
	double in = 0;
	cin >> in;
	initialAccount.credit(in);
	cout << "Now the balance in your account is " << initialAccount.getBalance() << endl;
	cout << "Now withdraw some money from your account:";
	double out = 0;
	cin >> out;
	initialAccount.debit(out);
	cout << "Now the balance in your account is " << initialAccount.getBalance() << endl;

	// saving account
	cout << "\nIf you are offered a savingaccount,\n now please enter the rate(noted that rate is less than 1):";
	double rate = 0.01;
	cin >> rate;
	SavingsAccount saving(balance, rate);
	cout << "The interest of your balance is: " << saving.calculateInterest() << endl;
	saving.credit(saving.calculateInterest());
	cout << "Now the balance in your savingaccount is " << saving.getBalance() << endl;

	// checking account
	cout << "\nIf you are offered a checkingaccount,\n now please enter the fee(noted that fee is less than your balance):";
	double fee = 1;
	cin >> fee;
	CheckingAccount checking(balance, fee);
	cout << "Now the balance in your account is " << checking.getBalance() << endl;
	cout << "(Notice that when transforms are done, it will cost you a bounch of fee.)\n";
	cout << "Now save more money into it:";
	cin >> in;
	checking.credit(in);
	cout << "Now the balance in your account is " << checking.getBalance() << endl;
	cout << "Now withdraw some money from your account:";
	cin >> out;
	checking.debit(out);
	cout << "Now the balance in your account is " << checking.getBalance() << endl;

	system("pause");
}