#include <iostream>
#include <cmath>
using namespace std;

class Cshape {
public:
	double Area, Volumn;
	virtual void getArea() = 0;
	virtual void getVolumn() = 0;
	virtual void getx() = 0;
};

class Cone : virtual public Cshape {
public:
	int r, h;
	void getx() override {
		int nr, nh;
		cin >> nr >> nh;
		r = nr;
		h = nh;
	}
	void getArea() override {
		int l;
		l = sqrt(r * r + h * h);
		Area = 3.14 * r * r + 2 * 3.14 * r * l;
	};
	void getVolumn() override {
		Volumn = 3.14 * r * r * h / 3;
	}
};

class Cylinder : virtual public Cshape {
public:
	int r, h;
	void getx() override {
		int nr, nh;
		cin >> nr >> nh;
		r = nr;
		h = nh;
	}
	void getArea() override {
		Area = 2 * 3.14 * r * r + 2 * 3.14 * r * h;
	};
	void getVolumn() override {
		Volumn = 3.14 * r * r * h;
	}
};

class Cube : virtual public Cshape {
public:
	int a;
	void getx() override {
		int na;
		cin >> na;
		a = na;
	}
	void getArea() override {
		Area = 6 * a * a;
	}
	void getVolumn() override {
		Volumn = a * a * a;
	}
};

class Cuboid : virtual public Cshape {
public:
	int a, b, h;
	void getx() override {
		int na, nb, nh;
		cin >> na >> nb >> nh;
		a = na;
		b = nb;
		h = nh;
	}
	void getArea() override {
		Area = 2 * (a * b + b * h + a * h);
	}
	void getVolumn() override {
		Volumn = a * b * h;
	}
};

int main() {
	Cone a1, a2, a3;
	Cylinder b1, b2, b3;
	Cube c1, c2, c3;
	Cuboid d1, d2, d3;
	a1.getx();
	a2.getx();
	a3.getx();
	b1.getx();
	b2.getx();
	b3.getx();
	c1.getx();
	c2.getx();
	c3.getx();
	d1.getx();
	d2.getx();
	d3.getx();
	a1.getArea();
	a2.getArea();
	a3.getArea();
	b1.getArea();
	b2.getArea();
	b3.getArea();
	c1.getArea();
	c2.getArea();
	c3.getArea();
	d1.getArea();
	d2.getArea();
	d3.getArea();
	a1.getVolumn();
	a2.getVolumn();
	a3.getVolumn();
	b1.getVolumn();
	b2.getVolumn();
	b3.getVolumn();
	c1.getVolumn();
	c2.getVolumn();
	c3.getVolumn();