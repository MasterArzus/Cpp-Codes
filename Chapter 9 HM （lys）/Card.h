#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;
// This is Card class 
class Card
{
public:
	// total faces and suits
	static const int totalfaces = 4;
	static const int totalsuits = 13;

	Card(int, int); // constructor
	string toString();
	int getFace();
	int getSuit();

private:
	int face;  // 单张牌花色
	int suit;  // 单张牌面值

	// 数组只写原型，然后在Card.cpp中初始化
	static const string Faces[totalfaces];   // 总花色
	static const string Suits[totalsuits];  // 总面值  
};
#endif
