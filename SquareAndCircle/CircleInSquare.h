#pragma once
#include "MyCircle.h"
#include "Square.h"
#include<iostream>
class CircleInSquare : public MyCircle, public Square
{
public:
	CircleInSquare(int, int);
	void info();
	~CircleInSquare();
};

