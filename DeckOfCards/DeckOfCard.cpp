#include"DeckOfCard.h"
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<ctime>
using namespace std;
// the constructor: make every card in order
void DeckOfCard::Welcome() {
	cout << "This is a program to judge different kind of cards \n\n";
}

DeckOfCard::DeckOfCard(){

	// ˫forѭ������˳�����һ����
	for (int i = 0; i < Card::totalfaces; i++)
	{
		for (int j = 0; j < Card::totalsuits; j++)
		{
			Card card(i, j);
			deck.push_back(card);
		}
	}
};

// ϴ�ƺ���
void DeckOfCard::shuffle() {

	// set random value
	srand(time(0));

	//����swap���鴢��������ŵ���
	int swapRandom[allcards];

	for (int i = 0; i < allcards; i++) {
		swapRandom[i] = int(rand()) % allcards;
    }

	for (int i = 0; i < allcards; i++)
	{
		// ����swapcard��ʱ��Ž����Ŀ���
		Card swapCard(0, 0);

		swapCard = deck[i];
		deck[i] = deck[swapRandom[i]];
		deck[swapRandom[i]] = swapCard;
	}
};

// returnһ���ƺ���ȡtoString
Card DeckOfCard::dealCard(int numberofcard){
	return deck[numberofcard];
};

bool DeckOfCard::moreCards(){
	return true;
};

// ����getface����������fiveFaces�������ж��Ƿ��ж��ӻ�ͬ˳
void DeckOfCard::checksuits() {
	int fiveSuits[fivecards];
	for (int i = 0; i < fivecards; i++)
	{
		fiveSuits[i] = deck[i].getSuit();
	}
	sort(fiveSuits, fiveSuits+5);

	// check ����
	int pairnumbers = 0;
	if (fiveSuits[0] == fiveSuits[1])
	{
		pairnumbers++;
	}
    for (int i = 1; i < fivecards - 1; i++)
		if (fiveSuits[i] == fiveSuits[i + 1] && fiveSuits[i] != fiveSuits[i - 1]) {
			pairnumbers++;
		}
	cout << "\nThere are " << pairnumbers << " pairs." << endl;

	// check ը��
	if ((fiveSuits[0] == fiveSuits[1] && fiveSuits[0] == fiveSuits[2] && fiveSuits[0] == fiveSuits[3]) || (fiveSuits[1] == fiveSuits[2] && fiveSuits[1] == fiveSuits[3] && fiveSuits[1] == fiveSuits[4])) {
		cout << "There is a boom" << endl;
	}

	// check ˳��
	if (fiveSuits[0] + 1 == fiveSuits[1] && fiveSuits[1] + 1 == fiveSuits[2] && fiveSuits[2] + 1 == fiveSuits[3] && fiveSuits[3] + 1 == fiveSuits[4]) {
		cout << "The five cards is a straight��˳�ӣ�." << endl;
	}
	else {
		cout << "The five cards is not a straight��˳�ӣ�." << endl;
	}
};

void DeckOfCard::checkfaces() {
	int fiveFaces[fivecards];
	for (int i = 0; i < fivecards; i++)
	{
		fiveFaces[i] = deck[i].getFace();
	}
	sort(fiveFaces, fiveFaces + 5);

	// check ͬ��
	int samefacenumber = 2;
	for (int i = 0; i < fivecards - 2; i++)
	{
		if (fiveFaces[i] == fiveFaces[i + 1]&& fiveFaces[i+1] == fiveFaces[i + 2])
		{
			samefacenumber++;
		}
	}
	if (samefacenumber >= 3)
	{
		cout << samefacenumber << " cards has the same face.\n";
	}
};
