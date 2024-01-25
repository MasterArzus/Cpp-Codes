#ifndef DECKOFCARD_H
#define DECKOFCARD_H
#include <vector>
#include "Card.h"

// This is a deckofcaed class

class DeckOfCard
{
public:
	// all cards and 5 cards
	static const int allcards = 52;
	static const int fivecards = 5;

	static void Welcome();

	DeckOfCard();
	void shuffle();
	Card dealCard(int);
	bool moreCards();
	void checksuits();
	void checkfaces();


private:
	vector<Card> deck;  // card¿‡–ÕµƒvectorΩ–deck
	int currentCard;
};
#endif // !DECKOFCARD_H

