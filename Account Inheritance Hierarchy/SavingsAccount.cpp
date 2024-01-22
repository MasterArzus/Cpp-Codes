#include<iostream>
#include"SavingsAccount.h"
using namespace std;
SavingsAccount::SavingsAccount(double inputbalance, double inputrate):Account(inputbalance) {
	if (inputrate > 0){
		rate = inputrate;
	}
	else{
		cout << "Rate must greater than 0, set to 1%.\n";
		rate = 0.01;
	}
}
double SavingsAccount::calculateInterest() {
	return balance * rate;
}
SavingsAccount::~SavingsAccount() {}
