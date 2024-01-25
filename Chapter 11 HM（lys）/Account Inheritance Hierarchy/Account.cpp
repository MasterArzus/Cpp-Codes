#include<iostream>
#include"Account.h"
using namespace std;
Account::Account(double inputbalance){
	if (inputbalance >= 0){
		balance = inputbalance;
	}
	else{
		cout << "The balance should be graeter than 0, set to 0.\n";
	}
}

void Account::credit(double in){
	balance += in;
}

void Account::debit(double out){
	if (out <= balance){
		balance -= out;
	}
	else{
		cout << "Debit amount exceeded account balance.\n";
	}
}

double Account::getBalance() {
	return balance;
}

Account::~Account(){}
