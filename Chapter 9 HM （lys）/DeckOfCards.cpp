#include <iostream>
#include "Card.h"
#include "DeckOfCard.h"

int main()
{
    DeckOfCard::Welcome();
    DeckOfCard deck1;
    cout << "The deck of cards in order is: \n";
    for (int i = 0; i < deck1.allcards; i++)
    {
        cout << deck1.dealCard(i).toString() << endl;
    }

    deck1.shuffle();
    cout << endl;
    cout << "First 5 of cards after shuffled is: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << deck1.dealCard(i).toString() << endl;
    }

    cout << "\nNow check the suits and faces of 5 cards:";
    deck1.checksuits();
    deck1.checkfaces();
}
