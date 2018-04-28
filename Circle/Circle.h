#pragma once
#include <iostream>
#include <istream>
#include <ostream>
using namespace std;

class Circle
{
private:
	int radius;
public:
	int getRadius();
	void setRadius(int);
	Circle();
	Circle(int);
	double getCircleLength();
	~Circle();
	bool operator == (Circle &);
	bool operator > (Circle &);
	bool operator < (Circle &);
	Circle & operator += (int);
	Circle & operator -= (int);
	friend ostream & operator <<(ostream &, Circle &);
	friend istream & operator >>(istream &, Circle &);
};

