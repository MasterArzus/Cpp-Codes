#include<iostream>
#include<iomanip>
using namespace std;

class Shape{
public:
    Shape(){}
	virtual ~Shape(){}
protected:
    string name;
};

class TwoDimShape:public Shape{
public:
    TwoDimShape(){};
    virtual ~TwoDimShape(){};
    virtual void calArea() = 0;
    virtual void printArea() = 0;
protected:
    double area;
};

class ThreeDimShape:public Shape{
public:
    ThreeDimShape(){};
    virtual ~ThreeDimShape(){};
    virtual void calVolume() = 0;
    virtual void printVolume() = 0;
protected:
    double volume;
};

class Circle:public TwoDimShape{
public:
    Circle(int r) {
        radius = r;
    };
    ~Circle(){};
    void calArea() override{
        area = 3.14 * radius * radius;
    }
    void printArea() override {
        cout << "circle: area=" << fixed << setprecision(2) << area << endl;
    }
private:
    int radius = 0;
};

class Rectangle :public TwoDimShape{
public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    };
    ~Rectangle(){};
    void calArea() override {
        area = length * width;
    }
    void printArea() override {
        cout << "rectangle: area=" << fixed << setprecision(2) << area << endl;;
    }
private:
    int length = 0;
    int width = 0;
};

class Ball:public ThreeDimShape{
public:
    Ball(int r) {
        radius = r;
    };
    ~Ball(){};
    void calVolume() override {
        volume = 4*3.14*radius*radius*radius/3;
    }
    void printVolume() override {
        cout << "ball: volume=" << fixed << setprecision(2) << volume << endl;
    }
private:
    int radius = 0;
};

class Rectangular :public ThreeDimShape
{
public:
    Rectangular(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    };
    ~Rectangular(){};
    void calVolume() override {
        volume = length*width*height;
    }
    void printVolume() override {
        cout << "rectangular: volume=" << fixed << setprecision(2) << volume << endl;;
    }
private:
    int length = 0;
    int width = 0;
    int height = 0;
};


int main() {
    Circle* c = new Circle(3);
    c->calArea();
    c->printArea();

    Ball* b = new Ball(2);
    b->calVolume();
    b->printVolume();

    Rectangle* s = new Rectangle(5, 6);
    s->calArea();
    s->printArea();

    Rectangular* cu = new Rectangular(7, 8, 9);
    cu->calVolume();
    cu->printVolume();

    return 0;
}