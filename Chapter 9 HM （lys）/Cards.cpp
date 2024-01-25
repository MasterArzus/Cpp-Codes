#include "Card.h"
using namespace std;

// initialize the card
Card::Card(int f, int s): face(f),suit(s){}

// return the card in the form of "a of b"
string Card::toString() {
	return Faces[face] + " of " + Suits[suit];
}

// get the face of the card
int Card::getFace() {
	return face;
}

// get the suit of the card
int Card::getSuit() {
	return suit;
}
const string Card::Faces[totalfaces] = { "Spade","Heart","Diamond","Club" };
const string Card::Suits[totalsuits] = { "3","4","5","6","7","8","9","10","J","Q","K","A","2" };

