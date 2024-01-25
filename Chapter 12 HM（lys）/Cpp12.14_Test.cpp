#include<iostream>
#include<vector>
#include<typeinfo>
#include"Cpp12.14.h"
using namespace std;

void checkAndDeal(Account* accptr)
{	
	SavingAccount * savaccptr = dynamic_cast<SavingAccount*>(accptr);
	CheckingAccount * checaccptr = dynamic_cast<CheckingAccount*>(accptr);

	switch (accptr->getUUID())
	{
	case 1:
		savaccptr->credit(savaccptr->calculateInterest());
		break;
	case 2:
		break;
	}
	cout << endl << "After operation,the balance in this account is:" << accptr->getBalance() << endl;
}

int main()
{
	double amou1 = 0.0;
	vector<Account*>accptrs(2);
	accptrs[0] = new SavingAccount(100, 0.1);
	accptrs[1] = new CheckingAccount(200, 1);
	//Welcome promoption
	cout << "We have created two accounts for you.\n"
		<<"the balance in the saving account is 100, the balance in the checking account is 200.\n" << endl;

	cout << "The interest rate of the saving account is 0.1,the checking fee for the checking account is 1.\n" << endl;
	//Operation 1
	cout << "Now, how many money do you want to credit into the saving account? \nPlease input an double number:";
	cin >> amou1;

	accptrs[0]->credit(amou1);

	checkAndDeal(accptrs[0]);

	//Operation 2
	cout << "Now, how many money do you want to debit from the checking account? \nPlease input an double number:";
	cin >> amou1;

	accptrs[1]->debit(amou1);

	checkAndDeal(accptrs[1]);

	//end
	cout << endl;
	for (auto accptr : accptrs)
	{
		cout << "Deleting the object of " << typeid(*accptr).name() << endl;
		delete accptr;
	}
	cout << endl << "That is all, thank you for your checking." << endl;
	system("pause");

}