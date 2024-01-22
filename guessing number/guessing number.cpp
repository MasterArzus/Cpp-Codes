#include <iostream>
#include<iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

class B;
class A {
    friend class B;
public:
    A(int c);
    static void print();
private:
    static int day;
    double i = 1;
};

A::A(int c)
{
    day = c;
}
void A::print()
{
    cout << " day in class A is " << day << endl;
}
class B {
public:
    void setday(A& a, int c);
private:
    int value;
};
void B::setday(A& a, int c)
{
    a.day = c;
}

int A::day = 1;

int main()
{
    //srand(int(time(0)));
    //cout << "你想好一个要1-1000的数了嘛？如果想好了输入1开始。\n";
    //int judge = 0;
    //int upperbound = 1000;
    //int lowerbound = 1;
    //int number = rand() % 1000 + 1;
    //cin >> judge;
    //while (judge != 0)
    //{
    //    cout << "我猜的数是" << number << ", \n 如果大了请输入1，小了输入-1，正确输入0：";
    //    cin >> judge;
    //    if (judge > 0) {
    //        upperbound = number;
    //        number = rand() % (upperbound - lowerbound) + lowerbound;
    //    }
    //    else if (judge < 0) {
    //        lowerbound = number;
    //        number = rand() % (upperbound - lowerbound) + 1 + lowerbound;
    //    }
    //}
    //cout << "Thanks for your playing.";

    //double x = 1.23456789;
    //cout << fixed;
    //cout << setprecision(5) << x << endl;
    //cout.precision(3);
    //cout << x << endl;
    //cout << x << endl;



        A::print();
        A aa(4);
        aa.print();
        B bb;
        bb.setday(aa, 8);
        aa.print();
        cout << "The size of object aa is " << sizeof(aa) << endl;
        cout << "The size of object bb is " << sizeof(bb) << endl;
        return 1;
    
}