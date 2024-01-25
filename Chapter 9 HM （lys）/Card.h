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
	int face;  // �����ƻ�ɫ
	int suit;  // ��������ֵ

	// ����ֻдԭ�ͣ�Ȼ����Card.cpp�г�ʼ��
	static const string Faces[totalfaces];   // �ܻ�ɫ
	static const string Suits[totalsuits];  // ����ֵ  
};
#endif
