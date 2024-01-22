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

	// 双for循环来按顺序叠好一堆牌
	for (int i = 0; i < Card::totalfaces; i++)
	{
		for (int j = 0; j < Card::totalsuits; j++)
		{
			Card card(i, j);
			deck.push_back(card);
		}
	}
};

// 洗牌函数
void DeckOfCard::shuffle() {

	// set random value
	srand(time(0));

	//设置swap数组储存随机发放的牌
	int swapRandom[allcards];

	for (int i = 0; i < allcards; i++) {
		swapRandom[i] = int(rand()) % allcards;
    }

	for (int i = 0; i < allcards; i++)
	{
		// 设置swapcard临时存放交换的卡牌
		Card swapCard(0, 0);

		swapCard = deck[i];
		deck[i] = deck[swapRandom[i]];
		deck[swapRandom[i]] = swapCard;
	}
};

// return一张牌后再取toString
Card DeckOfCard::dealCard(int numberofcard){
	return deck[numberofcard];
};

bool DeckOfCard::moreCards(){
	return true;
};

// 调用getface函数及创建fiveFaces数组来判断是否有对子或同顺
void DeckOfCard::checksuits() {
	int fiveSuits[fivecards];
	for (int i = 0; i < fivecards; i++)
	{
		fiveSuits[i] = deck[i].getSuit();
	}
	sort(fiveSuits, fiveSuits+5);

	// check 对子
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

	// check 炸弹
	if ((fiveSuits[0] == fiveSuits[1] && fiveSuits[0] == fiveSuits[2] && fiveSuits[0] == fiveSuits[3]) || (fiveSuits[1] == fiveSuits[2] && fiveSuits[1] == fiveSuits[3] && fiveSuits[1] == fiveSuits[4])) {
		cout << "There is a boom" << endl;
	}

	// check 顺子
	if (fiveSuits[0] + 1 == fiveSuits[1] && fiveSuits[1] + 1 == fiveSuits[2] && fiveSuits[2] + 1 == fiveSuits[3] && fiveSuits[3] + 1 == fiveSuits[4]) {
		cout << "The five cards is a straight（顺子）." << endl;
	}
	else {
		cout << "The five cards is not a straight（顺子）." << endl;
	}
};

void DeckOfCard::checkfaces() {
	int fiveFaces[fivecards];
	for (int i = 0; i < fivecards; i++)
	{
		fiveFaces[i] = deck[i].getFace();
	}
	sort(fiveFaces, fiveFaces + 5);

	// check 同花
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
