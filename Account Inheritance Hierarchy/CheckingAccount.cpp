#include<iostream>
#include"CheckingAccount.h"
using namespace std;
CheckingAccount::CheckingAccount(double inputbalance, double inputfee):Account(inputbalance)
{
	if (inputfee >= 0){
		fee = inputfee;
	}
	else{
		cout << "Fee can't be less than 0.\n";
	}
}
void CheckingAccount::credit(double in)
{
	balance += in - fee;
}
void CheckingAccount::debit(double out)
{
	if (out <= balance - fee){
		balance = balance - out - fee;
	}
	else{
		cout << "Debit amount exceeded account balance plus fee.\n";
	}
}
CheckingAccount::~CheckingAccount(){}