#include <iostream>
#include "Card.h"
#include "DeckOfCard.h"

int main()
{
    DeckOfCard::Welcome();
    DeckOfCard deck1;
    //cout << "The deck of cards in order is: \n";
    //for (int i = 0; i < deck1.allcards; i++)
    //{
    //    cout << deck1.dealCard(i).toString() << endl;
    //}
    bool play = true;
    char word = 'y';

    while (play)
    {
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

        cout << "\nTry again? enter y or n.\n";
 Input: cin >> word;
        if (word == 'y')
        {
            play = true;
        }
        else if (word == 'n')
        {
            play = false;
            cout << "Thanks for your palying. \n";
        }
        else
        {
            cout << "Invalid input, please try again.\n";
            goto Input;
        }
    }
    system("pause");

}
